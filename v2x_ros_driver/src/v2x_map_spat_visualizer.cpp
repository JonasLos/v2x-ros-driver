#include <algorithm>
#include <cmath>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include <geometry_msgs/msg/point.hpp>
#include <rclcpp/rclcpp.hpp>
#include <j2735_v2x_msgs/msg/map_data.hpp>
#include <j2735_v2x_msgs/msg/spat.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

namespace
{
constexpr double kEarthRadiusMeters = 6378137.0;

struct SignalColor
{
  float r;
  float g;
  float b;
  float a;
};

SignalColor color_for_phase(const uint8_t phase)
{
  // Uses J2735 MovementPhaseState values.
  switch (phase)
  {
    case 5:  // permissive movement allowed
    case 6:  // protected movement allowed
      return {0.0F, 0.85F, 0.2F, 0.95F};
    case 7:  // permissive clearance
    case 8:  // protected clearance
    case 9:  // caution conflicting traffic
      return {1.0F, 0.8F, 0.0F, 0.95F};
    case 2:  // stop then proceed
    case 3:  // stop and remain
      return {0.95F, 0.1F, 0.1F, 0.95F};
    case 1:  // dark
      return {0.4F, 0.4F, 0.4F, 0.95F};
    default:
      return {0.7F, 0.7F, 0.7F, 0.9F};
  }
}

std::string phase_name(const uint8_t phase)
{
  switch (phase)
  {
    case 1:
      return "DARK";
    case 2:
      return "STOP_THEN_PROCEED";
    case 3:
      return "STOP";
    case 4:
      return "PRE_MOVEMENT";
    case 5:
      return "PERMISSIVE_GO";
    case 6:
      return "PROTECTED_GO";
    case 7:
      return "PERMISSIVE_CLEAR";
    case 8:
      return "PROTECTED_CLEAR";
    case 9:
      return "CAUTION";
    default:
      return "UNAVAILABLE";
  }
}

std::pair<double, double> latlon_to_local_xy(
  const double lat_deg,
  const double lon_deg,
  const double ref_lat_deg,
  const double ref_lon_deg)
{
  const double lat = lat_deg * M_PI / 180.0;
  const double lon = lon_deg * M_PI / 180.0;
  const double ref_lat = ref_lat_deg * M_PI / 180.0;
  const double ref_lon = ref_lon_deg * M_PI / 180.0;

  const double x = (lon - ref_lon) * std::cos(ref_lat) * kEarthRadiusMeters;
  const double y = (lat - ref_lat) * kEarthRadiusMeters;
  return {x, y};
}

std::string intersection_key(const j2735_v2x_msgs::msg::IntersectionReferenceID & id)
{
  const uint16_t region = id.region_exists ? id.region : 0U;
  return std::to_string(region) + ":" + std::to_string(id.id);
}

}  // namespace

class V2XMapSpatVisualizer : public rclcpp::Node
{
public:
  V2XMapSpatVisualizer()
  : Node("v2x_map_spat_visualizer")
  {
    map_topic_ = declare_parameter<std::string>("map_topic", "/message/incoming_map");
    spat_topic_ = declare_parameter<std::string>("spat_topic", "/message/incoming_spat");
    marker_topic_ = declare_parameter<std::string>("marker_topic", "/v2x/map_spat_markers");
    frame_id_ = declare_parameter<std::string>("frame_id", "map");
    publish_rate_hz_ = declare_parameter<double>("publish_rate_hz", 10.0);
    lane_line_width_ = declare_parameter<double>("lane_line_width", 0.6);
    marker_lifetime_sec_ = declare_parameter<double>("marker_lifetime_sec", 1.5);

    map_sub_ = create_subscription<j2735_v2x_msgs::msg::MapData>(
      map_topic_,
      rclcpp::QoS(10),
      std::bind(&V2XMapSpatVisualizer::on_map, this, std::placeholders::_1));

    spat_sub_ = create_subscription<j2735_v2x_msgs::msg::SPAT>(
      spat_topic_,
      rclcpp::QoS(10),
      std::bind(&V2XMapSpatVisualizer::on_spat, this, std::placeholders::_1));

    marker_pub_ = create_publisher<visualization_msgs::msg::MarkerArray>(marker_topic_, rclcpp::QoS(5));

    const auto period = std::chrono::duration<double>(1.0 / std::max(0.1, publish_rate_hz_));
    timer_ = create_wall_timer(period, std::bind(&V2XMapSpatVisualizer::publish_markers, this));

    RCLCPP_INFO(
      get_logger(),
      "V2X MAP/SPAT visualizer started. map_topic=%s spat_topic=%s marker_topic=%s",
      map_topic_.c_str(),
      spat_topic_.c_str(),
      marker_topic_.c_str());
  }

private:
  using SignalStateMap = std::unordered_map<uint8_t, uint8_t>;

  std::optional<uint8_t> lane_signal_group(const j2735_v2x_msgs::msg::GenericLane & lane) const
  {
    if (!lane.connects_to_exists)
    {
      return std::nullopt;
    }

    for (const auto & connection : lane.connects_to.connect_to_list)
    {
      if (connection.signal_group_exists)
      {
        return connection.signal_group;
      }
    }

    return std::nullopt;
  }

  std::vector<geometry_msgs::msg::Point> lane_points(const j2735_v2x_msgs::msg::IntersectionGeometry & map_msg,
                                                      const j2735_v2x_msgs::msg::GenericLane & lane) const
  {
    std::vector<geometry_msgs::msg::Point> points;
    if (lane.node_list.choice != j2735_v2x_msgs::msg::NodeListXY::NODE_SET_XY)
    {
      return points;
    }

    const auto & ref = map_msg.ref_point;
    const double ref_lat_deg = static_cast<double>(ref.latitude) * 1e-7;
    const double ref_lon_deg = static_cast<double>(ref.longitude) * 1e-7;
    double current_x = 0.0;
    double current_y = 0.0;

    for (const auto & node : lane.node_list.nodes.node_set_xy)
    {
      const auto & delta = node.delta;
      if (delta.choice == j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_LATLON)
      {
        const double node_lat_deg = static_cast<double>(delta.node_latlon.latitude) * 1e-7;
        const double node_lon_deg = static_cast<double>(delta.node_latlon.longitude) * 1e-7;
        const auto xy = latlon_to_local_xy(node_lat_deg, node_lon_deg, ref_lat_deg, ref_lon_deg);
        current_x = xy.first;
        current_y = xy.second;
      }
      else
      {
        switch (delta.choice)
        {
          case j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_XY1:
            current_x += delta.node_xy1.x;
            current_y += delta.node_xy1.y;
            break;
          case j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_XY2:
            current_x += delta.node_xy2.x;
            current_y += delta.node_xy2.y;
            break;
          case j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_XY3:
            current_x += delta.node_xy3.x;
            current_y += delta.node_xy3.y;
            break;
          case j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_XY4:
            current_x += delta.node_xy4.x;
            current_y += delta.node_xy4.y;
            break;
          case j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_XY5:
            current_x += delta.node_xy5.x;
            current_y += delta.node_xy5.y;
            break;
          case j2735_v2x_msgs::msg::NodeOffsetPointXY::NODE_XY6:
            current_x += delta.node_xy6.x;
            current_y += delta.node_xy6.y;
            break;
          default:
            break;
        }
      }

      geometry_msgs::msg::Point p;
      p.x = current_x;
      p.y = current_y;
      p.z = 0.0;
      points.push_back(p);
    }

    return points;
  }

  void on_map(const j2735_v2x_msgs::msg::MapData::SharedPtr msg)
  {
    if (!msg->intersections_exists)
    {
      return;
    }

    for (const auto & intersection : msg->intersections)
    {
      maps_[intersection_key(intersection.id)] = intersection;
    }
  }

  void on_spat(const j2735_v2x_msgs::msg::SPAT::SharedPtr msg)
  {
    for (const auto & isec : msg->intersections.intersection_state_list)
    {
      SignalStateMap signal_states;
      for (const auto & movement_state : isec.states.movement_list)
      {
        if (movement_state.state_time_speed.movement_event_list.empty())
        {
          continue;
        }

        const auto & event = movement_state.state_time_speed.movement_event_list.front();
        signal_states[movement_state.signal_group] = event.event_state.movement_phase_state;
      }
      spat_states_[intersection_key(isec.id)] = std::move(signal_states);
    }
  }

  void publish_markers()
  {
    visualization_msgs::msg::MarkerArray marker_array;
    int32_t marker_id = 0;

    visualization_msgs::msg::Marker clear_marker;
    clear_marker.header.stamp = now();
    clear_marker.header.frame_id = frame_id_;
    clear_marker.action = visualization_msgs::msg::Marker::DELETEALL;
    marker_array.markers.push_back(clear_marker);

    for (const auto & map_entry : maps_)
    {
      const auto & intersection_id = map_entry.first;
      const auto & map_msg = map_entry.second;

      const auto spat_it = spat_states_.find(intersection_id);
      const SignalStateMap * signal_state_map = spat_it != spat_states_.end() ? &spat_it->second : nullptr;

      for (const auto & lane : map_msg.lane_set.lane_list)
      {
        const auto points = lane_points(map_msg, lane);
        if (points.size() < 2U)
        {
          continue;
        }

        const auto sg_opt = lane_signal_group(lane);
        uint8_t phase = 0;
        if (sg_opt.has_value() && signal_state_map != nullptr)
        {
          const auto sg_it = signal_state_map->find(sg_opt.value());
          if (sg_it != signal_state_map->end())
          {
            phase = sg_it->second;
          }
        }

        const auto lane_color = color_for_phase(phase);

        visualization_msgs::msg::Marker lane_marker;
        lane_marker.header.stamp = now();
        lane_marker.header.frame_id = frame_id_;
        lane_marker.ns = "lanes";
        lane_marker.id = marker_id++;
        lane_marker.type = visualization_msgs::msg::Marker::LINE_STRIP;
        lane_marker.action = visualization_msgs::msg::Marker::ADD;
        lane_marker.scale.x = lane_line_width_;
        lane_marker.color.r = lane_color.r;
        lane_marker.color.g = lane_color.g;
        lane_marker.color.b = lane_color.b;
        lane_marker.color.a = lane_color.a;
        lane_marker.lifetime = rclcpp::Duration::from_seconds(marker_lifetime_sec_);
        lane_marker.points = points;
        marker_array.markers.push_back(lane_marker);

        visualization_msgs::msg::Marker label_marker;
        label_marker.header.stamp = now();
        label_marker.header.frame_id = frame_id_;
        label_marker.ns = "lane_labels";
        label_marker.id = marker_id++;
        label_marker.type = visualization_msgs::msg::Marker::TEXT_VIEW_FACING;
        label_marker.action = visualization_msgs::msg::Marker::ADD;
        label_marker.scale.z = 1.5;
        label_marker.color.r = 1.0F;
        label_marker.color.g = 1.0F;
        label_marker.color.b = 1.0F;
        label_marker.color.a = 0.95F;
        label_marker.lifetime = rclcpp::Duration::from_seconds(marker_lifetime_sec_);

        const auto label_index = points.size() / 2U;
        label_marker.pose.position = points[label_index];
        label_marker.pose.position.z = 1.5;

        std::string signal_part = "SG:-";
        if (sg_opt.has_value())
        {
          signal_part = "SG:" + std::to_string(static_cast<int>(sg_opt.value()));
        }

        label_marker.text = "Lane " + std::to_string(static_cast<int>(lane.lane_id)) +
                            " | " + signal_part +
                            " | " + phase_name(phase);
        marker_array.markers.push_back(label_marker);
      }
    }

    marker_pub_->publish(marker_array);
  }

  std::string map_topic_;
  std::string spat_topic_;
  std::string marker_topic_;
  std::string frame_id_;

  double publish_rate_hz_ = 10.0;
  double lane_line_width_ = 0.6;
  double marker_lifetime_sec_ = 1.5;

  std::unordered_map<std::string, j2735_v2x_msgs::msg::IntersectionGeometry> maps_;
  std::unordered_map<std::string, SignalStateMap> spat_states_;

  rclcpp::Subscription<j2735_v2x_msgs::msg::MapData>::SharedPtr map_sub_;
  rclcpp::Subscription<j2735_v2x_msgs::msg::SPAT>::SharedPtr spat_sub_;
  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<V2XMapSpatVisualizer>());
  rclcpp::shutdown();
  return 0;
}
