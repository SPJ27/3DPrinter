# DIY 3D Printer

My Video On It - https://www.youtube.com/watch?v=zr9rF5x8NEw

This is the most complex and technical project I have built so far. It is a fully functional DIY FDM 3D printer built using RAMPS 1.4, Marlin firmware, Klipper and an Arduino Mega 2560.

This printer is the result of over three years of research and experimentation in 3D printing. Interestingly, this is also the first 3D printer I have ever seen in real life, since I designed and built it myself without having prior hands-on exposure to commercial machines.

While the print quality is slightly lower than printers such as **Bambu Lab or Ender series printers**, it is still capable of printing accurate and reliable prints.

# Hardware Overview

The printer is built using the following core components:

* **Controller:** Arduino Mega 2560
* **Control Board:** RAMPS 1.4
* **Firmware:** Marlin and Klipper
* **Motion System:** Belt-driven X/Y axes with stepper motors
* **Z Axis:** Lead screw driven
* **Hotend:** Standard FDM hotend
* **Power Supply:** 12V high-current PSU

# Electronics and Circuit

The electronics are based on the **RAMPS 1.4 + Arduino Mega architecture**, which is a widely used open-source 3D printer control system.

I followed the circuit design below and used several online references while building and wiring the system.

<img width="3088" height="2225" alt="image" src="https://github.com/user-attachments/assets/8928c11e-7abd-40b6-a8d8-8461871a5fa5" />

# Printer Specifications

| Feature             | Specification     |
| ------------------- | ----------------- |
| Firmware            | Marlin and Klipper|
| Controller          | Arduino Mega 2560 |
| Control Board       | RAMPS 1.4         |
| Printing Technology | FDM               |
| Motion System       | Belt-driven X/Y   |
| Z Motion            | Lead screw        |
| Frame               | Custom-built      |

# Features

* Fully open-source firmware (Marlin) alongside Klipper
* Custom-built mechanical frame
* Tuned stepper calibration
* Capable of producing high-quality prototype parts
* Built completely from scratch without a pre-built kit

# Important Build Notes

### 1. Z-Endstop Alignment

The **Z-endstop must be perfectly aligned with the nozzle's contact point**. Even a small misalignment can cause poor first-layer adhesion and significantly affect print quality.

### 2. Proper Power Wiring

Never connect the **5A and 11A power inputs on the RAMPS board using thin jumper wires**. These connections require **thick power wires** capable of safely handling high current.

### 3. Belt and Pulley Tension

All belts and pulleys must be **properly tensioned**. Loose belts can lead to **layer shifts and inaccurate prints**.

### 4. Electrical Safety

Always ensure **all wires are tightly secured and properly insulated**. Loose wires can cause **short circuits and potential fire hazards**.

# Future Improvements

Planned upgrades include:

* Auto bed leveling
* Better cooling system
* Improved frame rigidity
* Higher precision motion tuning
* Display interface for printer control
* Multicolour prints
