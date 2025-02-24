# Electricity Energy Monitor Using ESP32

This repository contains the Arduino code, configuration, and assembly instructions for building an electricity energy monitoring system using the ESP32 microcontroller. The system measures power consumption in real-time and sends the data online for analysis, enabling users to monitor and optimize their energy usage <button class="citation-flag" data-index="1">. It is ideal for home automation, industrial applications, or educational purposes.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [How to Test Without Simulation](#how-to-test-without-simulation)
7. [Contributing](#contributing)
8. [License](#license)

---

## Overview
The electricity energy monitor uses the PZEM-004T sensor to measure voltage, current, power, and energy consumption. The ESP32 processes this data and sends it to an online platform like Blynk for remote monitoring <button class="citation-flag" data-index="4">. This project helps users track their energy usage and make informed decisions to reduce consumption.

---

## Components Used
To build this electricity energy monitor, you will need the following components:
- **ESP32 Development Board**
- **PZEM-004T Power Meter**
- **0.96" I2C OLED Display (Optional)**
- **5V USB Power Adapter**
- **Jumper Wires**
- **Breadboard (Optional)**

---

## System Dimensions
For an ideal electricity energy monitor:
- **Height**: 10–15 cm
- **Width**: 10–15 cm
- **Length**: 10–15 cm

These dimensions ensure that the system is compact yet spacious enough to house all components.

---

## Assembly Instructions
Follow these steps to assemble your electricity energy monitor:
1. Connect the PZEM-004T sensor to the ESP32.
2. Optionally, connect an OLED display for local monitoring.
3. Power the system using a USB cable.
4. Secure all components inside a protective enclosure.

---

## Arduino Code Explanation
The provided Arduino code reads data from the PZEM-004T sensor and sends it to the Blynk platform for remote monitoring. The code also displays the data on the Serial Monitor for debugging purposes.

---

## How to Test Without Simulation
1. Upload the code to the ESP32 using a USB cable.
2. Test the PZEM-004T sensor by checking the Serial Monitor for readings.
3. Set up the Blynk app and verify that the data is displayed correctly on the dashboard.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own electricity energy monitor using the ESP32. Happy tinkering! 🚀
