# DIY 3D Printer

My Video On It - https://www.youtube.com/watch?v=zr9rF5x8NEw

This is the most complex and technical project I have built so far. It is a fully functional DIY FDM 3D printer built using RAMPS 1.4, Marlin firmware, Klipper, Arduino Mega 2560 and some burnt components (haha wait that wasn't funny?).

While the print quality is not as good as printers Bambu Lab or Ender series printers, it is still capable of printing accurate and reliable prints.

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

# List of Components (India/Global)

| Component | Robu.in (Cheaper) | Amazon (Global) |
|-----------|-------------------|-----------------|
| (Optional) Full Electronics Kit | [₹7671](https://robu.in/product/componant-kit-for-3d-printer-all-in-1/) | Not available as full kit |

| 1x Mega2560 | [₹1059](https://robu.in/product/atmel-mcu-atmega16u2-mega-2560-r3-improved-version-ch340g-board/) | https://www.amazon.com/s?k=arduino+mega+2560 |
| 1x RAMPS 1.4 Shield | [₹271](https://robu.in/product/3d-printer-controller-board-ramps-1-4-arduino-mega-shield-reprap-prusa-model/) | https://www.amazon.com/s?k=ramps+1.4 |
| 5x A4988 Stepper Drivers | https://robu.in/product/a4988-stepper-motor-driver-module/ | https://www.amazon.com/s?k=a4988+stepper+driver |
| 4x NEMA17 Stepper Motors | [₹571](https://robu.in/product/pro-range-nema17-pr42hs40-1504-4-2-kg-cm-stepper-motor-d-type-shaft/) | https://www.amazon.com/s?k=nema+17+stepper+motor |
| 1x 2004 LCD Controller | [₹635](https://robu.in/product/2004-lcd-display-smart-controller-w-adapter/) | https://www.amazon.com/s?k=reprap+discount+smart+controller+2004 |
| 6x Mechanical Endstops | https://robu.in/product/mechanical-endstop-limit-switch-module/ | https://www.amazon.com/s?k=3d+printer+endstop |
| 1x MK3 Heated Bed | https://robu.in/product/mk3-aluminum-heated-bed/ | https://www.amazon.com/s?k=mk3+heated+bed |
| 1x MK8 Extruder Kit | https://robu.in/product/mk8-extruder-kit/ | https://www.amazon.com/s?k=mk8+extruder |
| 1x MK8 Hotend | https://robu.in/product/mk8-hotend-kit/ | https://www.amazon.com/s?k=mk8+hotend |
| 2x 100K Thermistors | https://robu.in/product/100k-ntc-thermistor/ | https://www.amazon.com/s?k=100k+thermistor+3d+printer |
| 1x USB Cable (Type B) | https://robu.in/product/usb-2-0-a-to-b-cable/ | https://www.amazon.com/s?k=usb+a+to+b+cable |


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
