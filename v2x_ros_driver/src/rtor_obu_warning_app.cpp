#include <cffclient/AggregatingClient.h>
#include <cffclient/logPrefix.h>
#include <cffclient/schemes/entities/EntityTypes_generated.h>
#include <cffclient/tools/CompileId.h>
#include <cffclient/tools/Geodesy.h>

#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <atomic>
#include <cmath>
#include <csignal>
#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <optional>
#include <sstream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace ClientApp {

struct Control {
    bool exitApp = false;
    bool running = false;
};

struct Connection {
    std::string address;
    uint16_t port = CffClient::Client::DEFAULT_REMOTE_PORT;
    uint16_t localPort = 0;
    std::string configPath;
};

struct GeoPoint {
    double latDeg = 0.0;
    double lonDeg = 0.0;
};

using Polygon = std::vector<CffClient::Geodesy::Position>;

struct Thresholds {
    double vehicleWarningDistanceM = 12.0;
    double vehicleCautionDistanceM = 30.0;
    double vehicleWarningTtcSec = 2.5;
    double vehicleCautionTtcSec = 5.0;
    double pedestrianTrackTimeoutSec = 2.0;
    double pedestrianWarningDistanceM = 4.0;
    double pedestrianCautionDistanceM = 10.0;
    double egoHeadingToleranceDeg = 65.0;
};

struct Config {
    Polygon egoDecisionZone;
    Polygon vehicleConflictZone;
    Polygon pedestrianWarningZone;
    Polygon pedestrianCautionZone;
    Thresholds thresholds;
    bool requireRightTurnSignal = true;
};

struct DangerAssessment {
    std::string objectId;
    std::string objectClass;
    std::string severity;
    std::string reason;
    double distanceM = -1.0;
    double ttcSec = -1.0;
};

extern "C" void signalCallback(int signum);
Connection fetchArgs(int argc, char * argv[]);
void printHelp();

static volatile Control control;
static const char APP_NAME[] = "rtor-obu-warning";

namespace {

std::string trimCopy(const std::string & value)
{
    const auto begin = value.find_first_not_of(" \t\r\n");
    if (begin == std::string::npos) {
        return "";
    }
    const auto end = value.find_last_not_of(" \t\r\n");
    return value.substr(begin, end - begin + 1U);
}

std::string entityIdToString(const CffClient::EntityId id)
{
    std::ostringstream oss;
    oss << std::hex << id;
    return oss.str();
}

std::string nowIso8601()
{
    const auto now = std::chrono::system_clock::now();
    const auto tt = std::chrono::system_clock::to_time_t(now);
    std::tm tmUtc {};
    gmtime_r(&tt, &tmUtc);
    std::ostringstream oss;
    oss << std::put_time(&tmUtc, "%Y-%m-%dT%H:%M:%SZ");
    return oss.str();
}

bool parsePolygon(const rapidjson::Value & value, Polygon & polygon)
{
    if (!value.IsArray()) {
        return false;
    }

    Polygon parsed;
    for (const auto & item : value.GetArray()) {
        if (!item.IsObject() || !item.HasMember("lat") || !item.HasMember("lon") ||
            !item["lat"].IsNumber() || !item["lon"].IsNumber()) {
            return false;
        }
        parsed.push_back(CffClient::Geodesy::positionFromDeg(item["lat"].GetDouble(), item["lon"].GetDouble()));
    }

    if (parsed.size() < 3U) {
        return false;
    }

    polygon = std::move(parsed);
    return true;
}

std::optional<Config> loadConfig(const std::string & path)
{
    std::ifstream input(path);
    if (!input.is_open()) {
        std::cerr << "Failed to open config file: " << path << std::endl;
        return std::nullopt;
    }

    rapidjson::IStreamWrapper wrapper(input);
    rapidjson::Document document;
    document.ParseStream(wrapper);
    if (document.HasParseError() || !document.IsObject()) {
        std::cerr << "Failed to parse config JSON: " << path << std::endl;
        return std::nullopt;
    }

    Config config;
    if (!document.HasMember("ego_decision_zone") ||
        !document.HasMember("vehicle_conflict_zone") ||
        !document.HasMember("pedestrian_warning_zone") ||
        !document.HasMember("pedestrian_caution_zone")) {
        std::cerr << "Config is missing one or more required polygon fields" << std::endl;
        return std::nullopt;
    }

    if (!parsePolygon(document["ego_decision_zone"], config.egoDecisionZone) ||
        !parsePolygon(document["vehicle_conflict_zone"], config.vehicleConflictZone) ||
        !parsePolygon(document["pedestrian_warning_zone"], config.pedestrianWarningZone) ||
        !parsePolygon(document["pedestrian_caution_zone"], config.pedestrianCautionZone)) {
        std::cerr << "Config contains an invalid polygon field" << std::endl;
        return std::nullopt;
    }

    if (document.HasMember("require_right_turn_signal") && document["require_right_turn_signal"].IsBool()) {
        config.requireRightTurnSignal = document["require_right_turn_signal"].GetBool();
    }

    if (document.HasMember("thresholds") && document["thresholds"].IsObject()) {
        const auto & thresholds = document["thresholds"];
        if (thresholds.HasMember("vehicle_warning_distance_m") && thresholds["vehicle_warning_distance_m"].IsNumber()) {
            config.thresholds.vehicleWarningDistanceM = thresholds["vehicle_warning_distance_m"].GetDouble();
        }
        if (thresholds.HasMember("vehicle_caution_distance_m") && thresholds["vehicle_caution_distance_m"].IsNumber()) {
            config.thresholds.vehicleCautionDistanceM = thresholds["vehicle_caution_distance_m"].GetDouble();
        }
        if (thresholds.HasMember("vehicle_warning_ttc_sec") && thresholds["vehicle_warning_ttc_sec"].IsNumber()) {
            config.thresholds.vehicleWarningTtcSec = thresholds["vehicle_warning_ttc_sec"].GetDouble();
        }
        if (thresholds.HasMember("vehicle_caution_ttc_sec") && thresholds["vehicle_caution_ttc_sec"].IsNumber()) {
            config.thresholds.vehicleCautionTtcSec = thresholds["vehicle_caution_ttc_sec"].GetDouble();
        }
        if (thresholds.HasMember("pedestrian_track_timeout_sec") && thresholds["pedestrian_track_timeout_sec"].IsNumber()) {
            config.thresholds.pedestrianTrackTimeoutSec = thresholds["pedestrian_track_timeout_sec"].GetDouble();
        }
        if (thresholds.HasMember("pedestrian_warning_distance_m") && thresholds["pedestrian_warning_distance_m"].IsNumber()) {
            config.thresholds.pedestrianWarningDistanceM = thresholds["pedestrian_warning_distance_m"].GetDouble();
        }
        if (thresholds.HasMember("pedestrian_caution_distance_m") && thresholds["pedestrian_caution_distance_m"].IsNumber()) {
            config.thresholds.pedestrianCautionDistanceM = thresholds["pedestrian_caution_distance_m"].GetDouble();
        }
        if (thresholds.HasMember("ego_heading_tolerance_deg") && thresholds["ego_heading_tolerance_deg"].IsNumber()) {
            config.thresholds.egoHeadingToleranceDeg = thresholds["ego_heading_tolerance_deg"].GetDouble();
        }
    }

    return config;
}

bool hasRightTurnSignal(const Cff::Api::VehicleT & ego)
{
    if (!ego.electronics || !ego.electronics->lights) {
        return false;
    }
    return ego.electronics->lights->rightTurnSignal == Cff::Api::TriState_On &&
           ego.electronics->lights->leftTurnSignal != Cff::Api::TriState_On;
}

bool isInPolygon(const Cff::Api::MotionT & motion, const Polygon & polygon)
{
    return CffClient::Geodesy::isPointInPoly(
        CffClient::Geodesy::positionFromDeg(motion.position.lat(), motion.position.lon()),
        polygon);
}

double headingDiffDeg(double lhsDeg, double rhsDeg)
{
    double delta = std::fmod((540.0 + lhsDeg - rhsDeg), 360.0) - 180.0;
    return std::fabs(delta);
}

double computeRelativeTtcSec(const Cff::Api::VehicleT & ego, const Cff::Api::MotionT & remoteMotion)
{
    if (!ego.motion) {
        return -1.0;
    }

    const auto egoPos = CffClient::Geodesy::positionFromDeg(ego.motion->position.lat(), ego.motion->position.lon());
    const auto remotePos = CffClient::Geodesy::positionFromDeg(remoteMotion.position.lat(), remoteMotion.position.lon());
    const auto relPos = CffClient::Geodesy::relativePosition(
        egoPos,
        CffClient::Geodesy::degToRad(ego.motion->heading.value()),
        remotePos);

    const double distanceAlongHeading = std::hypot(relPos.x, relPos.y);
    const double egoSpeed = ego.motion->speed.value();
    const double remoteSpeed = remoteMotion.speed.value();
    const double closingSpeed = std::max(0.0, remoteSpeed - egoSpeed);
    if (distanceAlongHeading <= 0.01 || closingSpeed <= 0.01) {
        return -1.0;
    }
    return distanceAlongHeading / closingSpeed;
}

std::optional<DangerAssessment> assessVehicle(
    const Cff::Api::VehicleT & ego,
    const std::pair<const CffClient::EntityId, Cff::Api::VehicleT> & remote,
    const Config & config)
{
    if (!remote.second.motion) {
        return std::nullopt;
    }
    if (!isInPolygon(*remote.second.motion, config.vehicleConflictZone)) {
        return std::nullopt;
    }

    const auto egoPos = CffClient::Geodesy::positionFromDeg(ego.motion->position.lat(), ego.motion->position.lon());
    const auto remotePos = CffClient::Geodesy::positionFromDeg(remote.second.motion->position.lat(), remote.second.motion->position.lon());
    const double distanceM = CffClient::Geodesy::distance(egoPos, remotePos);
    const double ttcSec = computeRelativeTtcSec(ego, *remote.second.motion);
    const double headingDifference = headingDiffDeg(
        remote.second.motion->heading.value(),
        ego.motion->heading.value());

    DangerAssessment assessment;
    assessment.objectId = entityIdToString(remote.first);
    assessment.objectClass = "vehicle";
    assessment.distanceM = distanceM;
    assessment.ttcSec = ttcSec;

    const bool oppositeOrCrossingHeading = headingDifference >= config.thresholds.egoHeadingToleranceDeg;
    if ((ttcSec > 0.0 && ttcSec <= config.thresholds.vehicleWarningTtcSec) ||
        distanceM <= config.thresholds.vehicleWarningDistanceM) {
        assessment.severity = "warning";
        assessment.reason = oppositeOrCrossingHeading ? "vehicle_conflict_ttc" : "vehicle_conflict_distance";
        return assessment;
    }
    if ((ttcSec > 0.0 && ttcSec <= config.thresholds.vehicleCautionTtcSec) ||
        distanceM <= config.thresholds.vehicleCautionDistanceM) {
        assessment.severity = "caution";
        assessment.reason = oppositeOrCrossingHeading ? "vehicle_conflict_approach" : "vehicle_conflict_zone";
        return assessment;
    }

    return std::nullopt;
}

std::optional<DangerAssessment> assessPedestrian(
    const Cff::Api::VehicleT & ego,
    const std::pair<const CffClient::EntityId, Cff::Api::ObjectT> & remote,
    const Config & config)
{
    if (!remote.second.motion) {
        return std::nullopt;
    }

    if (remote.second.type != Cff::Api::ObjectType_Pedestrian &&
        remote.second.type != Cff::Api::ObjectType_Cyclist &&
        remote.second.type != Cff::Api::ObjectType_Scooter) {
        return std::nullopt;
    }

    const bool inWarningZone = isInPolygon(*remote.second.motion, config.pedestrianWarningZone);
    const bool inCautionZone = inWarningZone || isInPolygon(*remote.second.motion, config.pedestrianCautionZone);
    if (!inCautionZone) {
        return std::nullopt;
    }

    const auto egoPos = CffClient::Geodesy::positionFromDeg(ego.motion->position.lat(), ego.motion->position.lon());
    const auto remotePos = CffClient::Geodesy::positionFromDeg(remote.second.motion->position.lat(), remote.second.motion->position.lon());
    const double distanceM = CffClient::Geodesy::distance(egoPos, remotePos);

    DangerAssessment assessment;
    assessment.objectId = entityIdToString(remote.first);
    assessment.objectClass = remote.second.type == Cff::Api::ObjectType_Pedestrian ? "pedestrian" : "vru";
    assessment.distanceM = distanceM;
    assessment.ttcSec = -1.0;
    if (inWarningZone || distanceM <= config.thresholds.pedestrianWarningDistanceM) {
        assessment.severity = "warning";
        assessment.reason = "pedestrian_in_crosswalk";
        return assessment;
    }
    if (distanceM <= config.thresholds.pedestrianCautionDistanceM) {
        assessment.severity = "caution";
        assessment.reason = "pedestrian_near_crosswalk";
        return assessment;
    }
    return std::nullopt;
}

std::string chooseTopSeverity(const std::vector<DangerAssessment> & assessments)
{
    for (const auto & assessment : assessments) {
        if (assessment.severity == "warning") {
            return "warning";
        }
    }
    return assessments.empty() ? "clear" : "caution";
}

void emitAssessment(const std::vector<DangerAssessment> & assessments)
{
    rapidjson::Document document;
    document.SetObject();
    auto & alloc = document.GetAllocator();
    document.AddMember("source", rapidjson::Value("rtor_obu_warning_app", alloc), alloc);
    document.AddMember("stamp", rapidjson::Value(nowIso8601().c_str(), alloc), alloc);
    document.AddMember("severity", rapidjson::Value(chooseTopSeverity(assessments).c_str(), alloc), alloc);

    rapidjson::Value items(rapidjson::kArrayType);
    for (const auto & assessment : assessments) {
        rapidjson::Value item(rapidjson::kObjectType);
        item.AddMember("object_id", rapidjson::Value(assessment.objectId.c_str(), alloc), alloc);
        item.AddMember("object_class", rapidjson::Value(assessment.objectClass.c_str(), alloc), alloc);
        item.AddMember("severity", rapidjson::Value(assessment.severity.c_str(), alloc), alloc);
        item.AddMember("reason", rapidjson::Value(assessment.reason.c_str(), alloc), alloc);
        if (assessment.distanceM >= 0.0) {
            item.AddMember("distance_m", assessment.distanceM, alloc);
        }
        if (assessment.ttcSec >= 0.0) {
            item.AddMember("ttc_sec", assessment.ttcSec, alloc);
        }
        items.PushBack(item, alloc);
    }
    document.AddMember("hazards", items, alloc);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    std::cout << buffer.GetString() << std::endl;
}

void analyzeEntities(const CffClient::EntityAggregator & entities, const Config & config)
{
    auto ego = entities.vehicles().find(CffClient::EGO_ID);
    if (ego == entities.vehicles().end() || !ego->second.motion) {
        return;
    }

    if (!isInPolygon(*ego->second.motion, config.egoDecisionZone)) {
        return;
    }
    if (config.requireRightTurnSignal && !hasRightTurnSignal(ego->second)) {
        return;
    }

    std::vector<DangerAssessment> assessments;
    for (const auto & vehicle : entities.vehicles()) {
        if (vehicle.first == CffClient::EGO_ID) {
            continue;
        }
        if (auto assessment = assessVehicle(ego->second, vehicle, config)) {
            assessments.push_back(*assessment);
        }
    }

    for (const auto & object : entities.objects()) {
        if (auto assessment = assessPedestrian(ego->second, object, config)) {
            assessments.push_back(*assessment);
        }
    }

    if (!assessments.empty()) {
        emitAssessment(assessments);
    }
}

void appFunc(const Connection & connection, const Config & config)
{
    using CffClient::CrLf;
    using CffClient::sysPrefix;

    sysPrefix() << "Connecting to " << connection.address << ":" << connection.port
                << " from localhost:" << connection.localPort << " ..." << CrLf;

    CffClient::UdpLink link(connection.address.c_str(), connection.port, connection.localPort);
    CffClient::AggregatingClient client(link, CFFCLIENT_COMPILE_ID);

    sysPrefix() << "Using clientId " << std::hex << client.getClientId() << CrLf << std::dec;

    CffClient::Client::SubscriptionSet subsSet;
    subsSet.entities = true;

    client.login(subsSet);
    if (!client.hasLoggedIn()) {
        throw std::logic_error("Failed to login");
    }

    while (!control.exitApp) {
        client.receive();
        analyzeEntities(client.entities(), config);
    }

    client.leave();
}

}  // namespace

}  // namespace ClientApp

int main(int argc, char * argv[])
{
    using CffClient::CrLf;
    using CffClient::stream;
    using CffClient::sysPrefix;

    signal(SIGINT, ClientApp::signalCallback);

    ClientApp::Connection connection;
    try {
        connection = ClientApp::fetchArgs(argc, argv);
    } catch (std::exception & e) {
        std::cerr << e.what() << CrLf;
        ClientApp::printHelp();
        return 1;
    }

    const auto config = ClientApp::loadConfig(connection.configPath);
    if (!config) {
        return 1;
    }

    try {
        stream() << CffClient::getFullPrefix() << "Commsignia " << ClientApp::APP_NAME
                 << " initing..." << CrLf;
        ClientApp::control.running = true;
        ClientApp::appFunc(connection, *config);
        ClientApp::control.running = false;
        sysPrefix() << "Exiting..." << CrLf;
    } catch (std::exception & e) {
        std::cerr << e.what() << CrLf;
        return 1;
    }

    return 0;
}

ClientApp::Connection ClientApp::fetchArgs(int argc, char * argv[])
{
    if (argc < 3 || argc > 5) {
        throw std::invalid_argument("Invalid number of arguments");
    }

    Connection connection;
    connection.address = argv[1];
    connection.configPath = argv[2];

    if (argc > 3) {
        int port = std::atoi(argv[3]);
        if (port > 0 && port < std::numeric_limits<uint16_t>::max()) {
            connection.port = static_cast<uint16_t>(port);
        }
    }
    if (argc > 4) {
        int localPort = std::atoi(argv[4]);
        if (localPort > 0 && localPort < std::numeric_limits<uint16_t>::max()) {
            connection.localPort = static_cast<uint16_t>(localPort);
        }
    }

    connection.configPath = trimCopy(connection.configPath);
    if (connection.configPath.empty()) {
        throw std::invalid_argument("Config path must not be empty");
    }

    return connection;
}

void ClientApp::printHelp()
{
    using CffClient::CrLf;
    std::cerr << "Usage: " << APP_NAME << " <device address> <config.json> [<device port>] [<local port>]" << CrLf;
    std::cerr << "  <device address>: IP address of remote CFF device" << CrLf;
    std::cerr << "  <config.json>:    Static RTOR zone and threshold config" << CrLf;
    std::cerr << "  [<device port>]:  API server port of remote CFF device. Default: 43985" << CrLf;
    std::cerr << "  [<local port>]:   Local port of client." << CrLf;
}

extern "C" void ClientApp::signalCallback(int signum)
{
    using CffClient::CrLf;
    using CffClient::stream;
    using CffClient::sysPrefix;

    stream() << CrLf;
    sysPrefix() << "Signal " << signum << " received" << CrLf;

    if (signum == SIGINT) {
        sysPrefix() << "Exiting..." << CrLf;
        if (control.running) {
            control.running = false;
            control.exitApp = true;
            exit(signum);
        } else {
            exit(signum);
        }
    }
}