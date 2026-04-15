#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <visualization_msgs/msg/marker.hpp>

#if __has_include(<rviz_2d_overlay_msgs/msg/overlay_text.hpp>)
#include <rviz_2d_overlay_msgs/msg/overlay_text.hpp>
#define V2X_HAS_OVERLAY_TEXT 1
#else
#define V2X_HAS_OVERLAY_TEXT 0
#endif

#include <cffclient/Client.h>
#include <cffclient/logPrefix.h>
#include <cffclient/schemes/api/Subscriptions_generated.h>
#include <cffclient/tools/CompileId.h>
#include <safclient/tools/NotifFetcher.h>

namespace
{

std::string now_iso8601()
{
  const auto now = std::chrono::system_clock::now();
  const auto tt = std::chrono::system_clock::to_time_t(now);
  std::tm tm_utc {};
  gmtime_r(&tt, &tm_utc);
  std::ostringstream oss;
  oss << std::put_time(&tm_utc, "%Y-%m-%dT%H:%M:%SZ");
  return oss.str();
}

std::string upper_copy(std::string value)
{
  std::transform(value.begin(), value.end(), value.begin(), [](const unsigned char c) {
    return static_cast<char>(std::toupper(c));
  });
  return value;
}

std::string trim_copy(const std::string & in)
{
  const auto begin = in.find_first_not_of(" \t\r\n");
  if (begin == std::string::npos) {
    return "";
  }
  const auto end = in.find_last_not_of(" \t\r\n");
  return in.substr(begin, end - begin + 1);
}

std::vector<std::string> split_csv(const std::string & csv)
{
  std::vector<std::string> tokens;
  std::stringstream ss(csv);
  std::string item;
  while (std::getline(ss, item, ',')) {
    const auto cleaned = trim_copy(item);
    if (!cleaned.empty()) {
      tokens.push_back(cleaned);
    }
  }
  return tokens;
}

std::string bytes_to_hex(const std::vector<std::uint8_t> & data)
{
  static constexpr char kHex[] = "0123456789abcdef";
  std::string out;
  out.reserve(data.size() * 2U);
  for (const auto b : data) {
    out.push_back(kHex[(b >> 4U) & 0x0FU]);
    out.push_back(kHex[b & 0x0FU]);
  }
  return out;
}

std::string notif_type_to_abbrev(const std::string & type_name)
{
  static const std::unordered_map<std::string, std::string> kMap = {
    {"FcwNotif", "FCW"}, {"BswNotif", "BSW"}, {"LcaNotif", "LCA"}, {"EeblNotif", "EEBL"},
    {"ClwNotif", "CLW"}, {"ImaNotif", "IMA"}, {"HlwNotif", "HLW"}, {"SpdNotif", "SPD"},
    {"RlvNotif", "RLV"}, {"TtgNotif", "TTG"}, {"GloNotif", "GLOSA"}, {"WweNotif", "WWE"},
    {"LtaNotif", "LTA"}, {"RtaNotif", "RTA"}, {"WwrNotif", "WWR"}, {"GcwNotif", "GCW"},
    {"DnpNotif", "DNPW"}, {"RewNotif", "REW"}, {"TspNotif", "TSP"}, {"VruNotif", "PCW"},
    {"TiwNotif", "TIW"}, {"SvwNotif", "SVW"}, {"EvwNotif", "EVW"}
  };

  const auto it = kMap.find(type_name);
  if (it != kMap.end()) {
    return it->second;
  }

  if (type_name.size() > 5U && type_name.rfind("Notif") == type_name.size() - 5U) {
    return upper_copy(type_name.substr(0U, type_name.size() - 5U));
  }
  return "";
}

std::string abbrev_to_filter_name(const std::string & abbrev)
{
  const auto u = upper_copy(trim_copy(abbrev));
  if (u.empty()) {
    return "";
  }

  if (u == "FCW") return "FcwNotif";
  if (u == "BSW") return "BswNotif";
  if (u == "LCA") return "LcaNotif";
  if (u == "EEBL") return "EeblNotif";
  if (u == "CLW") return "ClwNotif";
  if (u == "IMA") return "ImaNotif";
  if (u == "HLW") return "HlwNotif";
  if (u == "SPD") return "SpdNotif";
  if (u == "RLV") return "RlvNotif";
  if (u == "TTG") return "TtgNotif";
  if (u == "GLOSA") return "GloNotif";
  if (u == "WWE") return "WweNotif";
  if (u == "LTA") return "LtaNotif";
  if (u == "RTA") return "RtaNotif";
  if (u == "WWR") return "WwrNotif";
  if (u == "GCW") return "GcwNotif";
  if (u == "DNPW") return "DnpNotif";
  if (u == "REW") return "RewNotif";
  if (u == "TSP") return "TspNotif";
  if (u == "PCW") return "VruNotif";
  if (u == "TIW") return "TiwNotif";
  if (u == "SVW") return "SvwNotif";
  if (u == "EVW") return "EvwNotif";

  return "";
}

const char * level_to_severity(const Saf::Notif::Level level)
{
  switch (level) {
    case Saf::Notif::Level_Alert:
      return "critical";
    case Saf::Notif::Level_Warning:
      return "warning";
    case Saf::Notif::Level_Info:
      return "info";
    default:
      return "info";
  }
}

void append_value_with_conf(
  rapidjson::Value & out,
  rapidjson::Document::AllocatorType & alloc,
  const char * key,
  const Saf::Notif::ValueWithConf * value)
{
  if (value == nullptr) {
    return;
  }
  rapidjson::Value item(rapidjson::kObjectType);
  item.AddMember("value", value->value(), alloc);
  item.AddMember("accuracy", value->accuracy(), alloc);
  out.AddMember(rapidjson::Value(key, alloc), item, alloc);
}

rapidjson::Value to_json_object_data(
  const Saf::Notif::ObjectData * data,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (data == nullptr) {
    return out;
  }

  out.AddMember(
    "object_type",
    rapidjson::Value(Saf::Notif::EnumNameObjectType(data->objectType()), alloc),
    alloc);
  out.AddMember(
    "vehicle_type",
    rapidjson::Value(Saf::Notif::EnumNameVehicleType(data->vehicleType()), alloc),
    alloc);

  if (const auto * pos = data->position(); pos != nullptr) {
    rapidjson::Value p(rapidjson::kObjectType);
    p.AddMember("lat", pos->lat(), alloc);
    p.AddMember("lon", pos->lon(), alloc);
    p.AddMember("semi_minor", pos->semiMinor(), alloc);
    p.AddMember("semi_major", pos->semiMajor(), alloc);
    p.AddMember("semi_major_angle", pos->semiMajorAngle(), alloc);
    out.AddMember("position", p, alloc);
  }

  append_value_with_conf(out, alloc, "speed", data->speed());
  append_value_with_conf(out, alloc, "heading", data->heading());
  return out;
}

rapidjson::Value to_json_relative_data(
  const Saf::Notif::RelativeData * data,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (data == nullptr) {
    return out;
  }

  if (const auto * pos = data->position(); pos != nullptr) {
    rapidjson::Value p(rapidjson::kObjectType);
    p.AddMember("x", pos->x(), alloc);
    p.AddMember("y", pos->y(), alloc);
    out.AddMember("position", p, alloc);
  }
  out.AddMember("distance", data->distance(), alloc);
  out.AddMember("delta_speed", data->deltaSpeed(), alloc);
  out.AddMember("delta_heading", data->deltaHeading(), alloc);
  return out;
}

rapidjson::Value to_json_lane_reference(
  const Saf::Notif::LaneReference * lane,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (lane == nullptr) {
    return out;
  }
  out.AddMember("lane_id", lane->laneId(), alloc);
  out.AddMember("distance_to_end", lane->distanceToEnd(), alloc);
  return out;
}

rapidjson::Value to_json_dangerous_object(
  const Saf::Notif::DangerousObject * object,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (object == nullptr) {
    return out;
  }
  out.AddMember("data", to_json_object_data(object->data(), alloc), alloc);
  out.AddMember("relative", to_json_relative_data(object->relative(), alloc), alloc);
  return out;
}

rapidjson::Value to_json_collision(
  const Saf::Notif::Collision * collision,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (collision == nullptr) {
    return out;
  }
  out.AddMember("time_to_collision_ms", collision->timeToCollision(), alloc);
  out.AddMember("object", to_json_dangerous_object(collision->object(), alloc), alloc);
  return out;
}

rapidjson::Value to_json_base_info(
  const Saf::Notif::BaseInfo * info,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (info == nullptr) {
    return out;
  }
  out.AddMember("sequence", info->sequence(), alloc);
  out.AddMember("level", rapidjson::Value(Saf::Notif::EnumNameLevel(info->level()), alloc), alloc);
  out.AddMember("host", info->host(), alloc);
  out.AddMember("remote", info->remote(), alloc);
  out.AddMember("timestamp", info->timestamp(), alloc);
  return out;
}

rapidjson::Value to_json_advised_speed(
  const Saf::Notif::AdvisedSpeed * advised,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (advised == nullptr) {
    return out;
  }
  out.AddMember("value", advised->value(), alloc);
  out.AddMember(
    "change",
    rapidjson::Value(Saf::Notif::EnumNameSpeedChangeDirection(advised->change()), alloc),
    alloc);
  return out;
}

rapidjson::Value to_json_full_speed_advice(
  const Saf::Notif::FullSpeedAdvice * full,
  rapidjson::Document::AllocatorType & alloc)
{
  rapidjson::Value out(rapidjson::kObjectType);
  if (full == nullptr) {
    return out;
  }
  out.AddMember("signal_group", full->signalGroup(), alloc);
  out.AddMember("green_start_speed", full->greenStartSpeed(), alloc);
  out.AddMember("green_end_speed", full->greenEndSpeed(), alloc);
  out.AddMember("min_speed_change_advice", to_json_advised_speed(full->minSpeedChangeAdvice(), alloc), alloc);
  out.AddMember("highest_speed_advice", to_json_advised_speed(full->highestSpeedAdvice(), alloc), alloc);
  return out;
}

}  // namespace

class V2XSafetyAlertBridgeNative : public rclcpp::Node
{
public:
  V2XSafetyAlertBridgeNative()
  : rclcpp::Node("v2x_safety_alert_bridge_native")
  {
    obu_host_ = declare_parameter<std::string>("obu_host", "127.0.0.1");
    obu_port_ = declare_parameter<int>("obu_port", static_cast<int>(CffClient::Client::DEFAULT_REMOTE_PORT));
    local_port_ = declare_parameter<int>("local_port", 0);

    alert_topic_ = declare_parameter<std::string>("alert_topic", "/v2x/safety_alerts");
    mapped_alert_topic_ = declare_parameter<std::string>("mapped_alert_topic", "/v2x/safety_alert_mapped");
    debug_raw_topic_ = declare_parameter<std::string>("debug_raw_topic", "/v2x/safety_alert_debug_raw");

    abbrev_marker_topic_ = declare_parameter<std::string>("abbrev_marker_topic", "/v2x/safety_alert_abbrev_marker");
    abbrev_overlay_topic_ = declare_parameter<std::string>("abbrev_overlay_topic", "/v2x/safety_alert_overlay_text");
    abbrev_marker_frame_id_ = declare_parameter<std::string>("abbrev_marker_frame_id", "map");
    abbrev_marker_z_ = declare_parameter<double>("abbrev_marker_z", 4.0);
    enable_abbrev_overlay_ = declare_parameter<bool>("enable_abbrev_overlay", true);

    reconnect_delay_sec_ = declare_parameter<double>("reconnect_delay_sec", 2.0);
    derive_cff_only_ = declare_parameter<bool>("derive_cff_only", false);
    publish_raw_passthrough_ = declare_parameter<bool>("publish_raw_passthrough", true);
    dedupe_window_sec_ = declare_parameter<double>("dedupe_window_sec", 0.75);
    critical_ttc_sec_ = declare_parameter<double>("critical_ttc_sec", 2.0);
    warning_ttc_sec_ = declare_parameter<double>("warning_ttc_sec", 4.0);
    notif_filter_csv_ = declare_parameter<std::string>("notif_filter_csv", "");

    alert_pub_ = create_publisher<std_msgs::msg::String>(alert_topic_, rclcpp::QoS(20));
    mapped_alert_pub_ = create_publisher<std_msgs::msg::String>(mapped_alert_topic_, rclcpp::QoS(20));
    debug_raw_pub_ = create_publisher<std_msgs::msg::String>(debug_raw_topic_, rclcpp::QoS(20));
    abbrev_marker_pub_ = create_publisher<visualization_msgs::msg::Marker>(abbrev_marker_topic_, rclcpp::QoS(10));

#if V2X_HAS_OVERLAY_TEXT
    if (enable_abbrev_overlay_) {
      abbrev_overlay_pub_ = create_publisher<rviz_2d_overlay_msgs::msg::OverlayText>(
        abbrev_overlay_topic_, rclcpp::QoS(10));
    }
#endif

    worker_ = std::thread(&V2XSafetyAlertBridgeNative::session_loop, this);

    RCLCPP_INFO(
      get_logger(),
      "Started native SDK safety alert bridge. host=%s port=%d local_port=%d derive_cff_only=%s overlay=%s",
      obu_host_.c_str(),
      obu_port_,
      local_port_,
      derive_cff_only_ ? "true" : "false",
      (enable_abbrev_overlay_ ? "enabled" : "disabled"));

#if !V2X_HAS_OVERLAY_TEXT
    if (enable_abbrev_overlay_) {
      RCLCPP_WARN(
        get_logger(),
        "Overlay text requested but rviz_2d_overlay_msgs is not available at build time; "
        "only marker output will be published.");
    }
#endif
  }

  ~V2XSafetyAlertBridgeNative() override
  {
    stop_.store(true);
    if (worker_.joinable()) {
      worker_.join();
    }
  }

private:
  void session_loop()
  {
    while (rclcpp::ok() && !stop_.load()) {
      try {
        CffClient::UdpLink link(obu_host_.c_str(), static_cast<uint16_t>(obu_port_), static_cast<uint16_t>(local_port_));
        CffClient::Client client(link, CFFCLIENT_COMPILE_ID);

        client.onNotification([this](std::vector<std::uint8_t> && data) {
          this->handle_notification(std::move(data));
        });

        Cff::Api::SubscriptionT subs;
        subs.notifications.reset(new Cff::Api::NotifSubsT());
        subs.notifications->type = Cff::Api::NotifSubsType_All;

        for (const auto & token : split_csv(notif_filter_csv_)) {
          const auto filter_name = abbrev_to_filter_name(token);
          if (!filter_name.empty()) {
            subs.notifications->filters.emplace_back(filter_name);
          }
        }

        client.login(subs);
        if (!client.hasLoggedIn()) {
          throw std::runtime_error("Failed to login to Commsignia app-notif server");
        }

        RCLCPP_INFO(
          get_logger(),
          "Connected to native SDK endpoint %s:%d and subscribed to notifications",
          obu_host_.c_str(),
          obu_port_);

        while (rclcpp::ok() && !stop_.load()) {
          // Blocking call; callback runs in this thread.
          client.receive();
        }

        client.leave();
      } catch (const std::exception & e) {
        RCLCPP_WARN(
          get_logger(),
          "Native safety bridge SDK session error: %s. Reconnecting in %.2fs",
          e.what(),
          reconnect_delay_sec_);
      }

      if (!stop_.load()) {
        std::this_thread::sleep_for(std::chrono::duration<double>(std::max(0.1, reconnect_delay_sec_)));
      }
    }
  }

  bool should_publish(const std::string & dedupe_id)
  {
    const auto now = std::chrono::steady_clock::now();
    std::lock_guard<std::mutex> lock(cache_mutex_);
    const auto it = last_alert_by_id_.find(dedupe_id);
    if (it != last_alert_by_id_.end()) {
      const double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(now - it->second).count();
      if (elapsed < dedupe_window_sec_) {
        return false;
      }
    }
    last_alert_by_id_[dedupe_id] = now;
    return true;
  }

  void publish_abbrev_marker(const std::string & abbrev)
  {
    visualization_msgs::msg::Marker marker;
    marker.header.stamp = now();
    marker.header.frame_id = abbrev_marker_frame_id_;
    marker.ns = "safety_alert_abbrev";
    marker.id = 1;

    if (abbrev.empty()) {
      marker.action = visualization_msgs::msg::Marker::DELETE;
      abbrev_marker_pub_->publish(marker);
      return;
    }

    marker.type = visualization_msgs::msg::Marker::TEXT_VIEW_FACING;
    marker.action = visualization_msgs::msg::Marker::ADD;
    marker.pose.position.x = 0.0;
    marker.pose.position.y = 0.0;
    marker.pose.position.z = abbrev_marker_z_;
    marker.scale.z = 1.1;
    marker.color.r = 1.0F;
    marker.color.g = 1.0F;
    marker.color.b = 0.2F;
    marker.color.a = 0.95F;
    marker.text = abbrev;
    marker.lifetime = rclcpp::Duration::from_seconds(0.2);
    abbrev_marker_pub_->publish(marker);
  }

  void publish_abbrev_overlay(const std::string & abbrev)
  {
#if V2X_HAS_OVERLAY_TEXT
    if (!enable_abbrev_overlay_ || !abbrev_overlay_pub_) {
      return;
    }

    rviz_2d_overlay_msgs::msg::OverlayText msg;
    msg.action = rviz_2d_overlay_msgs::msg::OverlayText::ADD;
    msg.width = 320;
    msg.height = 68;
    msg.horizontal_alignment = rviz_2d_overlay_msgs::msg::OverlayText::LEFT;
    msg.vertical_alignment = rviz_2d_overlay_msgs::msg::OverlayText::TOP;
    msg.horizontal_distance = 10;
    msg.vertical_distance = 350;
    msg.text_size = 24.0;
    msg.line_width = 2;
    msg.font = "DejaVu Sans Mono";
    msg.fg_color.r = 1.0F;
    msg.fg_color.g = 1.0F;
    msg.fg_color.b = 0.2F;
    msg.fg_color.a = 1.0F;
    msg.bg_color.r = 0.0F;
    msg.bg_color.g = 0.0F;
    msg.bg_color.b = 0.0F;
    msg.bg_color.a = 0.45F;

    if (abbrev.empty()) {
      msg.text = "Safety: --";
    } else {
      msg.text = "Safety: " + abbrev;
    }
    abbrev_overlay_pub_->publish(msg);
#else
    (void)abbrev;
#endif
  }

  void handle_notification(std::vector<std::uint8_t> && data)
  {
    const auto raw_data = data;
    Saf::NotifFetcher fetcher(std::move(data));
    if (!fetcher.isValid()) {
      return;
    }

    const auto & notif = fetcher.get();
    const std::string type_name = fetcher.getTypeName();
    const std::string abbrev = notif_type_to_abbrev(type_name);
    const auto * info = fetcher.getBaseInfo();

    double ttc_sec = -1.0;
    double distance_m = -1.0;

    const auto * collision = fetcher.getProperty<Saf::PropertyTags::Collision>();
    if (collision != nullptr) {
      ttc_sec = static_cast<double>(collision->timeToCollision()) / 1000.0;
    }

    const auto * object = fetcher.getProperty<Saf::PropertyTags::DangerousObject>();
    if (object != nullptr && object->relative() != nullptr) {
      distance_m = object->relative()->distance();
    }

    if (derive_cff_only_ && collision == nullptr) {
      return;
    }

    const std::string stamp = now_iso8601();
    const std::string dedupe_id = type_name + ":" + std::to_string(notif.sequence());
    if (!should_publish(dedupe_id)) {
      return;
    }

    std::string severity = "info";
    if (info != nullptr) {
      severity = level_to_severity(info->level());
    } else if (ttc_sec > 0.0 && ttc_sec <= critical_ttc_sec_) {
      severity = "critical";
    } else if (ttc_sec > 0.0 && ttc_sec <= warning_ttc_sec_) {
      severity = "warning";
    }

    rapidjson::Document raw_doc;
    raw_doc.SetObject();
    auto & raw_alloc = raw_doc.GetAllocator();
    raw_doc.AddMember("source", rapidjson::Value("commsignia_app_notif_sdk", raw_alloc), raw_alloc);
    raw_doc.AddMember("event_kind", rapidjson::Value("notification", raw_alloc), raw_alloc);
    raw_doc.AddMember("stamp", rapidjson::Value(stamp.c_str(), raw_alloc), raw_alloc);
    raw_doc.AddMember("type", rapidjson::Value(type_name.c_str(), raw_alloc), raw_alloc);
    raw_doc.AddMember("sequence", notif.sequence(), raw_alloc);
    raw_doc.AddMember("buffer_len", static_cast<uint64_t>(raw_data.size()), raw_alloc);

    if (publish_raw_passthrough_) {
      const auto hex = bytes_to_hex(raw_data);
      raw_doc.AddMember("buffer_hex", rapidjson::Value(hex.c_str(), raw_alloc), raw_alloc);
    }

    rapidjson::StringBuffer raw_buf;
    rapidjson::Writer<rapidjson::StringBuffer> raw_writer(raw_buf);
    raw_doc.Accept(raw_writer);

    std_msgs::msg::String raw_msg;
    raw_msg.data = raw_buf.GetString();
    debug_raw_pub_->publish(raw_msg);

    rapidjson::Document alert_doc;
    alert_doc.SetObject();
    auto & alert_alloc = alert_doc.GetAllocator();
    alert_doc.AddMember("source", rapidjson::Value("commsignia_app_notif_sdk", alert_alloc), alert_alloc);
    alert_doc.AddMember("event_kind", rapidjson::Value("notification", alert_alloc), alert_alloc);
    alert_doc.AddMember("stamp", rapidjson::Value(stamp.c_str(), alert_alloc), alert_alloc);
    alert_doc.AddMember("alert_id", rapidjson::Value(dedupe_id.c_str(), alert_alloc), alert_alloc);
    alert_doc.AddMember("type", rapidjson::Value(type_name.c_str(), alert_alloc), alert_alloc);
    alert_doc.AddMember("abbreviation", rapidjson::Value(abbrev.c_str(), alert_alloc), alert_alloc);
    alert_doc.AddMember("sequence", notif.sequence(), alert_alloc);
    alert_doc.AddMember("severity", rapidjson::Value(severity.c_str(), alert_alloc), alert_alloc);

    if (ttc_sec > 0.0) {
      alert_doc.AddMember("ttc_sec", ttc_sec, alert_alloc);
    }
    if (distance_m > 0.0) {
      alert_doc.AddMember("distance_m", distance_m, alert_alloc);
    }

    rapidjson::Value typed(rapidjson::kObjectType);
    if (info != nullptr) {
      typed.AddMember("base_info", to_json_base_info(info, alert_alloc), alert_alloc);
    }
    if (collision != nullptr) {
      typed.AddMember("collision", to_json_collision(collision, alert_alloc), alert_alloc);
    }
    if (object != nullptr) {
      typed.AddMember("dangerous_object", to_json_dangerous_object(object, alert_alloc), alert_alloc);
    }

    if (const auto * fcw = notif.payload_as_FcwNotif(); fcw != nullptr) {
      rapidjson::Value fcw_json(rapidjson::kObjectType);
      if (const auto * induced = fcw->inducedBy(); induced != nullptr) {
        rapidjson::Value induced_json(rapidjson::kObjectType);
        induced_json.AddMember("host", induced->host(), alert_alloc);
        induced_json.AddMember("remote", induced->remote(), alert_alloc);
        induced_json.AddMember("time_to_collision_ms", induced->timeToCollision(), alert_alloc);
        fcw_json.AddMember("induced_by", induced_json, alert_alloc);
      }
      typed.AddMember("fcw", fcw_json, alert_alloc);
    }

    if (const auto * wwe = notif.payload_as_WweNotif(); wwe != nullptr) {
      rapidjson::Value wwe_json(rapidjson::kObjectType);
      wwe_json.AddMember(
        "cause",
        rapidjson::Value(Saf::Notif::EnumNameWrongWayCause(wwe->cause()), alert_alloc),
        alert_alloc);
      wwe_json.AddMember("lane", to_json_lane_reference(wwe->lane(), alert_alloc), alert_alloc);
      wwe_json.AddMember("ego", to_json_object_data(wwe->ego(), alert_alloc), alert_alloc);
      typed.AddMember("wwe", wwe_json, alert_alloc);
    }

    if (const auto * wwr = notif.payload_as_WwrNotif(); wwr != nullptr) {
      rapidjson::Value wwr_json(rapidjson::kObjectType);
      wwr_json.AddMember("ego", to_json_object_data(wwr->ego(), alert_alloc), alert_alloc);
      typed.AddMember("wwr", wwr_json, alert_alloc);
    }

    if (const auto * glo = notif.payload_as_GloNotif(); glo != nullptr) {
      rapidjson::Value glo_json(rapidjson::kObjectType);
      glo_json.AddMember("speed_limit", glo->speedLimit(), alert_alloc);
      glo_json.AddMember("lane", to_json_lane_reference(glo->lane(), alert_alloc), alert_alloc);
      glo_json.AddMember("ego", to_json_object_data(glo->ego(), alert_alloc), alert_alloc);

      rapidjson::Value advices_json(rapidjson::kArrayType);
      if (const auto * advices = glo->advices(); advices != nullptr) {
        for (flatbuffers::uoffset_t i = 0; i < advices->size(); ++i) {
          const auto * advice = advices->Get(i);
          rapidjson::Value item(rapidjson::kObjectType);
          item.AddMember("signal_group", advice->signalGroup(), alert_alloc);
          item.AddMember("speed_advice", advice->speedAdvice(), alert_alloc);
          advices_json.PushBack(item, alert_alloc);
        }
      }
      glo_json.AddMember("advices", advices_json, alert_alloc);

      rapidjson::Value full_advices_json(rapidjson::kArrayType);
      if (const auto * full_advices = glo->fullAdvices(); full_advices != nullptr) {
        for (flatbuffers::uoffset_t i = 0; i < full_advices->size(); ++i) {
          full_advices_json.PushBack(to_json_full_speed_advice(full_advices->Get(i), alert_alloc), alert_alloc);
        }
      }
      glo_json.AddMember("full_advices", full_advices_json, alert_alloc);
      typed.AddMember("glosa", glo_json, alert_alloc);
    }

    if (typed.MemberCount() > 0U) {
      alert_doc.AddMember("typed", typed, alert_alloc);
    }

    rapidjson::StringBuffer alert_buf;
    rapidjson::Writer<rapidjson::StringBuffer> alert_writer(alert_buf);
    alert_doc.Accept(alert_writer);

    std_msgs::msg::String alert_msg;
    alert_msg.data = alert_buf.GetString();
    alert_pub_->publish(alert_msg);

    rapidjson::Document mapped_doc;
    mapped_doc.SetObject();
    auto & mapped_alloc = mapped_doc.GetAllocator();
    mapped_doc.AddMember("source", rapidjson::Value("commsignia_app_notif_sdk", mapped_alloc), mapped_alloc);
    mapped_doc.AddMember("stamp", rapidjson::Value(stamp.c_str(), mapped_alloc), mapped_alloc);
    mapped_doc.AddMember("alert_id", rapidjson::Value(dedupe_id.c_str(), mapped_alloc), mapped_alloc);
    mapped_doc.AddMember("type", rapidjson::Value(type_name.c_str(), mapped_alloc), mapped_alloc);

    rapidjson::Value mapped_arr(rapidjson::kArrayType);
    if (!abbrev.empty()) {
      rapidjson::Value elem(rapidjson::kObjectType);
      elem.AddMember("code", rapidjson::Value(abbrev.c_str(), mapped_alloc), mapped_alloc);
      elem.AddMember("confidence", rapidjson::Value("high", mapped_alloc), mapped_alloc);
      elem.AddMember("reason", rapidjson::Value("native_notification_type", mapped_alloc), mapped_alloc);
      mapped_arr.PushBack(elem, mapped_alloc);
    }
    mapped_doc.AddMember("mapped_alerts", mapped_arr, mapped_alloc);

    rapidjson::StringBuffer mapped_buf;
    rapidjson::Writer<rapidjson::StringBuffer> mapped_writer(mapped_buf);
    mapped_doc.Accept(mapped_writer);

    std_msgs::msg::String mapped_msg;
    mapped_msg.data = mapped_buf.GetString();
    mapped_alert_pub_->publish(mapped_msg);

    publish_abbrev_marker(abbrev);
    publish_abbrev_overlay(abbrev);
  }

  std::string obu_host_;
  int obu_port_ {CffClient::Client::DEFAULT_REMOTE_PORT};
  int local_port_ {0};

  std::string alert_topic_;
  std::string mapped_alert_topic_;
  std::string debug_raw_topic_;
  std::string abbrev_marker_topic_;
  std::string abbrev_overlay_topic_;
  std::string abbrev_marker_frame_id_;

  double abbrev_marker_z_ {4.0};
  bool enable_abbrev_overlay_ {true};
  double reconnect_delay_sec_ {2.0};
  bool derive_cff_only_ {false};
  bool publish_raw_passthrough_ {true};
  double dedupe_window_sec_ {0.75};
  double critical_ttc_sec_ {2.0};
  double warning_ttc_sec_ {4.0};
  std::string notif_filter_csv_;

  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr alert_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr mapped_alert_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr debug_raw_pub_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr abbrev_marker_pub_;
#if V2X_HAS_OVERLAY_TEXT
  rclcpp::Publisher<rviz_2d_overlay_msgs::msg::OverlayText>::SharedPtr abbrev_overlay_pub_;
#endif

  std::atomic<bool> stop_ {false};
  std::thread worker_;
  std::mutex cache_mutex_;
  std::unordered_map<std::string, std::chrono::steady_clock::time_point> last_alert_by_id_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<V2XSafetyAlertBridgeNative>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
