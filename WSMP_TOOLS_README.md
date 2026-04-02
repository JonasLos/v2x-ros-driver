# WSMP Analysis and Visualization

This document covers the standalone WSMP/J2735 tools in this workspace. These scripts are separate from the ROS 2 driver and can be used directly on raw `.pcap` files.

Scripts covered:

- `analyze_wsmp_pcaps.py`
- `visualize_wsmp_pcaps.py`

These tools are intended for Ethernet WSMP captures using ethertype `0x88dc` and do not require ROS.

## What Each Script Does

### `analyze_wsmp_pcaps.py`

Reads one PCAP or a directory of PCAPs, extracts WSMP payload candidates, attempts J2735 decode, and writes:

- aggregate summary JSON
- per-file detailed JSON
- a short per-file decode summary to stdout

### `visualize_wsmp_pcaps.py`

Reads one PCAP or a directory of PCAPs and produces two videos per PCAP:

- `*_stats.mp4`: message counts, timeline, and BSM/PSM overview
- `*_bev.mp4`: bird's-eye intersection view with MAP lanes, live SPAT coloring, live BSM/PSM positions, and TIM overlays

## Requirements

## Python

The scripts have been run from the local virtual environment:

```bash
cd /home/jonaslo96/ros2_drivers
source .venv/bin/activate
```

Python 3.12 is known to work in this workspace.

## Python Packages

Required imports used by the scripts:

- `j2735_202409`
- `numpy`
- `matplotlib`

Install the common Python packages with:

```bash
pip install numpy matplotlib
```

`j2735_202409` must also be installed in the active environment. It is not provided by these scripts themselves. If it is missing, `analyze_wsmp_pcaps.py` will exit with an import error.

## System Packages

Video export requires `ffmpeg` with H.264 support because the visualizer uses Matplotlib's `FFMpegWriter` with `libx264`.

On Ubuntu:

```bash
sudo apt-get update
sudo apt-get install ffmpeg
```

## Analyzer Usage

Analyze a directory of PCAPs:

```bash
cd /home/jonaslo96/ros2_drivers
source .venv/bin/activate

python analyze_wsmp_pcaps.py \
  --input /path/to/pcap_directory \
  --out-summary /tmp/wsmp_decode_summary.json \
  --out-details /tmp/wsmp_decode_details.json
```

Analyze a single file:

```bash
python analyze_wsmp_pcaps.py \
  --input /path/to/file.pcap
```

Optional arguments:

- `--max-packets-per-file`: limit processing for quick tests
- `--out-summary`: path for aggregate summary JSON
- `--out-details`: path for full per-file JSON

Default outputs:

- `/tmp/wsmp_decode_summary.json`
- `/tmp/wsmp_decode_details.json`

## Visualizer Usage

Render videos for a directory of PCAPs:

```bash
cd /home/jonaslo96/ros2_drivers
source .venv/bin/activate

python visualize_wsmp_pcaps.py \
  --input /path/to/pcap_directory \
  --output-dir /path/to/output_videos \
  --fps 12 \
  --max-video-sec 90 \
  --dpi 110
```

Render videos for a single PCAP:

```bash
python visualize_wsmp_pcaps.py \
  --input /path/to/file.pcap \
  --output-dir /path/to/output_videos
```

Important arguments:

- `--output-dir`: directory where MP4 files will be written
- `--fps`: output frame rate in frames per second
- `--max-video-sec`: maximum rendered length per file; longer captures are time-compressed
- `--recent-window-sec`: history window used in the stats timeline
- `--geo-tail-sec`: history tail used for the stats spatial panel
- `--dpi`: output video resolution scaling used by Matplotlib during frame rendering

Parameter meaning and effect:

- `--fps`
  Controls how many frames are written per second of output video.
  Higher values make motion look smoother, but increase render time and output file size.
  Lower values render faster and create smaller videos, but motion can look choppier.

- `--max-video-sec`
  Sets the maximum duration of each rendered video.
  If the original capture is longer than this value, the script compresses capture time so the full recording still fits inside the chosen output length.
  Smaller values make long captures play faster. Larger values preserve more temporal detail but take longer to render and watch.

- `--dpi`
  Controls the rendered pixel density of each frame.
  Higher DPI produces sharper text, lines, and markers, especially in dense BEV plots, but increases render time, memory usage, and output size.
  Lower DPI renders faster and creates smaller files, but fine details can become harder to read.

Visualizer output naming:

- `<pcap_name>_stats.mp4`
- `<pcap_name>_bev.mp4`

## Notes

- These tools are for raw PCAP analysis only and do not use ROS topics or rosbag APIs.
- The analyzer expects Ethernet WSMP packets (`0x88dc`). Non-WSMP traffic will be ignored.
- The visualizer decodes messages again from the PCAP rather than reading the analyzer JSON output.
- Short or sparse captures can emit Matplotlib layout warnings during rendering. Those warnings do not necessarily mean the video failed.

## Typical Workflow

1. Run `analyze_wsmp_pcaps.py` to confirm decode quality and inspect message families.
2. Review `/tmp/wsmp_decode_summary.json` and `/tmp/wsmp_decode_details.json`.
3. Run `visualize_wsmp_pcaps.py` to generate the stats and BEV videos.

## Example From This Workspace

```bash
cd /home/jonaslo96/ros2_drivers
source .venv/bin/activate

python analyze_wsmp_pcaps.py \
  --input /home/jonaslo96/Desktop/intersection_pcaps_2026-03-25_20-03-48

python visualize_wsmp_pcaps.py \
  --input /home/jonaslo96/Desktop/intersection_pcaps_2026-03-25_20-03-48 \
  --output-dir /home/jonaslo96/Desktop/intersection_pcaps_2026-03-25_20-03-48/videos_v3_live_tim \
  --fps 12 \
  --max-video-sec 90 \
  --dpi 110
```