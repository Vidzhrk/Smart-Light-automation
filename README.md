# Smart Light Automation using ESP32 and PIR Sensor

This project automatically controls a light based on human presence using a PIR motion sensor. When motion is detected, the ESP32 turns ON a relay that controls the light. If no motion is detected for 10 seconds, the light automatically turns OFF to save power.

---

## Components Used
- ESP32 Development Board
- PIR Motion Sensor (HC-SR501)
- Relay Module (5V/3.3V compatible)
- LED (for simulation/testing)
- AC Light (for real implementation)
- Jumper Wires & Breadboard

---

## Working Principle
1. PIR detects human motion using body heat
2. ESP32 receives digital motion signal
3. Relay switches ON the room light
4. If no motion is detected:
   - Timer starts
   - After 10 seconds → Light turns OFF
5. Ensures energy-efficient smart lighting
---
## Live Simulation

Check out the Smart-Lights simulation here →  
[Run the Smart Lights Simulation on Wokwi](https://wokwi.com/projects/449251203166854145)
[![Smart Lights Simulation](https://thumbs.wokwi.com/projects/449251203166854145/thumbnail.jpg)](https://wokwi.com/projects/449251203166854145)
