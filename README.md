# ESP32 Flame Sensor Project

## Project Overview
This project demonstrates how to use an ESP32 microcontroller to detect flames using a flame sensor. Flame sensors are used in various applications, including fire detection systems and safety devices.

## Components Needed
- ESP32 Microcontroller
- Flame Sensor
- Jumper Wires
- Breadboard

## Block diagram


## Circuit Setup
1. **Connecting the Flame Sensor to ESP32:**
   - Connect the VCC pin of the flame sensor to the 3.3V pin on the ESP32.
   - Connect the GND pin of the flame sensor to the GND pin on the ESP32.
   - Connect the digital output pin of the flame sensor to GPIO 15 on the ESP32.

## Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 115200 using `Serial.begin()`.
   - Set the flame sensor pin as an input using `pinMode()`.

2. **Operation:**
   - In the `loop()` function:
     - Read the state of the flame sensor using `digitalRead(flameSensorPin)`.
     - Print "Flame detected!" to the Serial Monitor if the sensor detects a flame (LOW state).
     - Print "No flame detected" to the Serial Monitor if no flame is detected (HIGH state).
     - Add a delay of 500 milliseconds before taking the next reading to avoid spamming the Serial Monitor.

3. **Considerations:**
   - **Sensor Placement:** Place the flame sensor in an appropriate position to reliably detect flames.
   - **Power Supply:** Ensure the sensor has a stable power supply for accurate readings.
   - **Environmental Factors:** Be aware of the sensor's detection range and environmental factors that might affect its performance.

## Applications
- **Fire Detection Systems:** Use in alarm systems to detect the presence of fire or flames.
- **Safety Devices:** Implement in devices that require flame detection for safety purposes.
- **Educational Projects:** Learn about digital sensors and flame detection with microcontrollers.

## Notes
- **Sensor State:** The flame sensor outputs a digital signal, with a LOW state indicating the presence of a flame and a HIGH state indicating no flame.
- **Detection Range:** The effective detection range of the flame sensor may vary based on the specific model and environmental conditions.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Flame Sensor](https://projectslearner.com/learn/esp32-flame-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner