<div align="center">

<img src="https://raw.githubusercontent.com/NEXALAB-ID/.github/main/assets/banner.png" width="100%" alt="NEXALAB ID Banner"/>

<p>&nbsp;</p>

[![Organization](https://img.shields.io/badge/GitHub-NEXALAB--ID-0ea5e9?style=for-the-badge&logo=github&logoColor=white)](https://github.com/NEXALAB-ID)
[![Board](https://img.shields.io/badge/Board-ESP32-000000?style=for-the-badge&logo=espressif&logoColor=white)](#)
[![Language](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](#)
[![License](https://img.shields.io/badge/License-MIT-22c55e?style=for-the-badge)](#)

</div>

<br/>

---

## About

**esp32-starter-kit** is a collection of ESP32 starter examples focused on communication protocols — WiFi, MQTT, and Bluetooth. Designed as a reference and starting point for projects built under NEXALAB ID.

---

## Contents

| Category | Example | Description |
|:---------|:--------|:------------|
| **WiFi** | `wifi_connect` | Connect ESP32 to a WiFi network |
| **WiFi** | `wifi_scan` | Scan and list nearby WiFi networks |
| **MQTT** | `mqtt_publish` | Publish messages to an MQTT broker |
| **MQTT** | `mqtt_subscribe` | Subscribe and receive messages from an MQTT broker |
| **Bluetooth** | `ble_server` | Create a BLE server and notify connected devices |
| **Bluetooth** | `ble_scan` | Scan and list nearby BLE devices |

---

## Notes

> **BLE UUID Disclaimer** — The `SERVICE_UUID` and `CHARACTERISTIC_UUID` in `ble_server.ino` are default placeholder values for example purposes only. For production use, generate your own unique UUIDs at [uuidgenerator.net](https://www.uuidgenerator.net/).

> **MQTT Broker Disclaimer** — These examples use a public MQTT broker (`broker.hivemq.com`) for testing purposes only. Public brokers are not secure — anyone can publish or subscribe to the same topic. For production use, set up your own private broker (e.g., [Mosquitto](https://mosquitto.org/)).

---

## Requirements

- ESP32 board (any variant)
- [Arduino IDE](https://www.arduino.cc/en/software) or [PlatformIO](https://platformio.org/)
- Libraries:
  - `WiFi.h` — built-in with ESP32 Arduino core
  - `PubSubClient` — install via Arduino Library Manager
  - `BLEDevice.h` — built-in with ESP32 Arduino core

---

## Getting Started

1. Clone this repository
   ```bash
   git clone https://github.com/NEXALAB-ID/esp32-starter-kit.git
   ```
2. Open the example you want in Arduino IDE
3. Replace `YOUR_SSID` and `YOUR_PASSWORD` with your WiFi credentials (for WiFi and MQTT examples)
4. Select your ESP32 board under **Tools → Board**
5. Upload and open Serial Monitor at **115200 baud**

---

## Project Structure

```
esp32-starter-kit/
├── WiFi/
│   ├── wifi_connect/
│   │   └── wifi_connect.ino
│   └── wifi_scan/
│       └── wifi_scan.ino
├── MQTT/
│   ├── mqtt_publish/
│   │   └── mqtt_publish.ino
│   └── mqtt_subscribe/
│       └── mqtt_subscribe.ino
└── Bluetooth/
    ├── ble_server/
    │   └── ble_server.ino
    └── ble_scan/
        └── ble_scan.ino
```

---

## Contributing

Found a bug or want to add more examples? Feel free to open a [Discussion](https://github.com/NEXALAB-ID/discussions/discussions) or submit a Pull Request.

---

<div align="center">

<sub>Part of NEXALAB ID &nbsp;·&nbsp; <strong>Innovate | Build | Connect</strong></sub>

</div>
