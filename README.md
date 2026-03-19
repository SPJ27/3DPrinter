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
| Component | Robu.in (Cheaper) | Amazon |
|-----------|-------------------|------------------|
| (Optional) Electronics Component Kit (RAMPS 1.4, Mega2560, 4x Stepper Motors, 2004 LCD, A4988 Motor Driver, Extruder Motor, Endstops, Heated Bed, Hotend) | [₹7671](https://robu.in/product/componant-kit-for-3d-printer-all-in-1/)| I couldn't find any similar kit so you can buy them individually from below |
| Mega2560 | [₹1059](https://robu.in/product/atmel-mcu-atmega16u2-mega-2560-r3-improved-version-ch340g-board/) | [$14](https://www.google.com/search?q=arduino+mega+amazon.com&sca_esv=cd962c5e58ff07e4&biw=1129&bih=680&udm=28&sxsrf=ANbL-n4Dt8tXhPedx_8lWkKXQkLY0vJbLg:1773886027170&ei=S1q7abeFCo3DjuMP0OyHyAg&ved=0ahUKEwj31pW08KqTAxWNoWMGHVD2AYkQ4dUDCCU&uact=5&oq=arduino+mega+amazon.com&gs_lp=Ehlnd3Mtd2l6LW1vZGVsZXNzLXNob3BwaW5nIhdhcmR1aW5vIG1lZ2EgYW1hem9uLmNvbUjsEVDmBli9EHACeAGQAQCYAXqgAccFqgEDMC42uAEDyAEA-AEBmAIFoAL3AsICChAAGEcY1gQYsAPCAgcQIxi0BBgnwgIGEAAYFhgewgIFEAAYgASYAwCIBgGQBgiSBwMyLjOgB4sGsgcDMC4zuAfsAsIHAzktNcgHzbsrgAgB&sclient=gws-wiz-modeless-shopping#sv=CAYS6QESABosMmFoVUtFd2pJbi1UNDhLcVRBeFhiMVRnR0hiamJMQXNRZ2kxNkJBZ2FFQlUihQEKEzc0MDU4NTQ0NzY5MjQ3MjU4MDUSEzEzNTk1MTQ3MjgwMzA2Njg2ODgaACITNTQzNjc3MTExMjg3MTYyNDM3OCoAMhM2ODIyMjMzMDg5MzY3MTUxMTMxOgBKAmhnUgBiAGoAigEAoAEDsAEAwgEAygEA2gEA4gEA8AEA-gEAkgIA2gIAMABCLTJhaFVLRXdqSW4tVDQ4S3FUQXhYYjFUZ0dIYmpiTEFzUXJvZ0dlZ1FJR2hBTiDLgfzJDjACSggQAhgBIAEoAQ)
| Ramps 1.4 | [₹271](https://robu.in/product/3d-printer-controller-board-ramps-1-4-arduino-mega-shield-reprap-prusa-model/) | [$7](https://www.amazon.in/Electrobot-Printer-Controller-Shield-Arduino/dp/B08LS62N79)
| Nema17 Stepper Motors | 



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
