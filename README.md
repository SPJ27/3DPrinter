# DIY 3D Printer

My Video On It - https://www.youtube.com/watch?v=zr9rF5x8NEw

This is the most complex and technical project I have built so far. It is a fully functional DIY FDM 3D printer built using RAMPS 1.4, Marlin firmware, Klipper, Arduino Mega 2560 and some burnt components (haha wait that wasn't funny?).

While the print quality is not as good as printers Bambu Lab or Ender series printers, it is still capable of printing accurate and reliable prints.

![Demo 1](Demo%201.jpeg)
![Demo 2](Demo%202.jpeg)

# Does it actually work?

Yes, it absolutely does. In fact, I have printed several things till now. For example - 

![Parts Demo](demo.mp4)

# How to use it?

1. Get the .stl file - Design it yourself or download from the internet
2. Slice it - Modify the speed, density, infill patterns, support, etc.
3. Upload the .GCODE file to the printer - Use pronterface or SD Card
4. The printer performs the magic

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
|-------------|-------------------|-----------------|
| (Optional) Full Electronics Kit | [₹7671](https://robu.in/product/componant-kit-for-3d-printer-all-in-1/) | Not available as full kit |
| 1x Mega2560 | [₹1059](https://robu.in/product/atmel-mcu-atmega16u2-mega-2560-r3-improved-version-ch340g-board/) | [Search on Amazon](https://www.amazon.com/s?k=arduino+mega+2560) |
| 1x RAMPS 1.4 Shield | [₹271](https://robu.in/product/3d-printer-controller-board-ramps-1-4-arduino-mega-shield-reprap-prusa-model/) | [Search on Amazon](https://www.amazon.com/s?k=ramps+1.4) |
| 5x A4988 Stepper Drivers | [₹129 (each)](https://robu.in/product/a4988-driver-stepper-motor-driver/) | [Search on Amazon](https://www.amazon.com/s?k=a4988+stepper+driver) |
| 4x NEMA17 Stepper Motors | [₹571 (each)](https://robu.in/product/pro-range-nema17-pr42hs40-1504-4-2-kg-cm-stepper-motor-d-type-shaft/) | [Search on Amazon](https://www.amazon.com/s?k=nema+17+stepper+motor) |
| 1x 2004 LCD Controller | [₹635](https://robu.in/product/2004-lcd-display-smart-controller-w-adapter/) | [Search on Amazon](https://www.amazon.com/s?k=reprap+discount+smart+controller+2004) |
| 6x Mechanical Endstops | [₹39 (each)](https://robu.in/product/mini-endstop-limit-switch-with-1m-cable-2/) | [Search on Amazon](https://www.amazon.com/s?k=3d+printer+endstop) |
| 1x MK3 Heated Bed | [₹614](https://robu.in/product/reprap-mk2b-3d-printers-dual-power-pcb-heatbed/) | [Search on Amazon](https://www.amazon.com/s?k=mk3+heated+bed) |
| 1x MK8 Extruder Kit | [₹1773](https://robu.in/product/mk8-extruder-kit-makerbot-prusa-i3-3d-printer-1-75-0-4mm-printhead/) | [Search on Amazon](https://www.amazon.com/s?k=mk8+extruder) |
| 2x 100K Thermistors | [₹99 (approx)](https://robu.in/product/100k-ntc-thermistor/) | [Search on Amazon](https://www.amazon.com/s?k=100k+thermistor+3d+printer) |

### Cost Summary

- **Full Kit Cost:** ₹7671  
- **Individual Parts Cost (approx):**
  - Mega2560 - ₹1059  
  - RAMPS - ₹271  
  - A4988 (×5) - ₹645  
  - NEMA17 (×4) - ₹2284  
  - LCD - ₹635  
  - Endstops (×6) - ₹234  
  - Heated Bed - ₹614  
  - Extruder Kit - ₹1773  
  - Thermistors - ₹99  
  - Filament (Any) - ₹849  

**Total Individual Cost ≈ ₹8463**

# Code Upload

1. Attach all of the components as per the diagram above
2. Download the Marlin Code (Optimized for Ramps1.4)
3. Upload **Marlin.ino** in the Mega2560

# Structure

One thing that I would like to suggest is that rather than making it out of wood or PVC pipe (like a did), you should follow the Prusa i3 guide (structure is very similar) as it would be sturdier and better in terms of durability and printing quality.

You can buy the parts from here - [Prusa i3 parts](https://www.amazon.in/Prusa-MK3-3D-Printer-Printed-Parts/dp/B09FYZVPH7)

You can also 3D print the **.stl files** in this repo if you know someone who can do it for you but use **PETG** or **ABS**.

Also, you can follow the [Prusa i3 Guide](https://www.bu.edu/eng/files/2022/10/prusa3d_manual_mk3s_en.pdf) and buy hardware parts accordingly

If you still want to build it using PVC and Wood, you can watch this [amazing video](https://www.youtube.com/watch?v=MC2ERhZPnUU) by Mech Ninja (the one that I followed). But the video is slightly incomplete, and you need to figure out a few things on your own.

If you have any queries regarding this, you can always email me on <saksham.khatod27@gmail.com>.

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
