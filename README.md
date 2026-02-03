# IR Sensor with Arduino UNO R4 WiFi

Project that reads a digital IR proximity sensor using an Arduino UNO R4 WiFi and prints obstacle status over Serial.

## Hardware
\- Board: `Arduino UNO R4 WiFi`  
\- IR sensor: digital output type (e.g. simple IR obstacle sensor module)  
\- Connections (typical):
  \- IR sensor VCC \-> `5V` (or `3.3V` if sensor requires)  
  \- IR sensor GND \-> `GND`  
  \- IR sensor OUT \-> digital pin `2` on the board

## Software
\- Files:
  \- `src/main.cpp` \- sketch that reads the sensor and writes status to Serial.  
  \- `platformio.ini` \- PlatformIO project configuration.

\- Requirements:
  \- PlatformIO (installed in VS Code or CLI) or Arduino IDE compatible with UNO R4 WiFi.  
  \- USB connection from board to PC.

## Example `platformio.ini`
Set the `board` field to your PlatformIO board id (example shown). Adjust platform if your PlatformIO installation uses a different platform name.

```ini
[env:uno_r4_wifi]
board = arduino_uno_r4_wifi
framework = arduino
monitor_speed = 9600
