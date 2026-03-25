# DIY 3D Printer

My Video On It - https://www.youtube.com/watch?v=zr9rF5x8NEw

This is the 3D printer that I built from scratch. It is also the most technically challenging project that I have built till now. This runs Marlin on the Mega2560 main board and Klipper on a Raspberry Pi Zero 2W. 

The build volume is about 22cm, which is pretty good in comparison to other cheap printer. It costed me about $135 (₹12500). It uses Marlin 1.3, which is kind of old, but it is completely modified and optimized for my printer, and works great.

I have built 3/4 versions of it till now. The first version was terrible, it worked but the print quality wasn't good. The second one produced managable prints, and the current one produces high quality prints that are visually appealing. 

Also, this was my first time seeing a 3D printer in real life. I don't have any experience with 3D printers or designing, but I do make a lot of hardware stuff, so making this was a necessity.

![Demo 1](Demo%201.jpeg)
![Demo 2](Demo%202.jpeg)

# Does it actually work?

Yes, it absolutely does. In fact, I have printed several things till now. The video has some of my best prints till now.

# New Update! - Created a web-based ESP32 Print Dashboard

I have created basic ESP32 based dashboard that can send commands via the internet. 
To use - 
1. Upload the main.ino code to esp32.
2. Connect the esp RX0 and TX0 to the Mega2560
3. Power it on via the ramps mainboard
4. Go to the respected server ID and send the Marlin commands. 
I am planning to improve this interface for wireless prints (similar to klipper)
For example - M500, M600, etc.

# New Update! - Multicolor Prints using Prusa MMU2S

If you want to do multicolor prints via this printer, you can build an MMU2S. This is the [guide](https://www.bu.edu/eng/files/2022/10/prusa3d_manual_mmu2s_en.pdf) to build it.

Although I have not tested this yet, some people say that it works well but wastes filament a lot. It requires Marlin 2.0 or more to work, as the older firmware is not compatible with this.

Even though this system is pretty old, it is still probably the best option to do multicolor prints. Using it with Klipper gives you easier and better control over MMU2S.

Marlin 2.0 requires firmware changes and tweakings to handle MMU2S, whereas Klipper can do it using the Happy Hare project.

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

# List of Hardware Parts

List of GT2 System
 - GT2 Timing Belt  - 6mm x 200cm
 - Motor Pulley x 2 - 16teeth, 6mm
 - Idler Pulley x 2 - 16teeth, 6mm

Bearings and Motion Systems
 - 628ZZ Bearing x 2 - 8x24x8mm
 - Flexible Coupling x 2 - 5x8mm
 - LM8UU x 12 - 8mm

PTFE System - If you are not using direct extruder
 - PTFE Tube - 2mm*4mm
 - PC4 M6 - 2 (1 for spare)
 - PC4 M10 - 2 (1 for spare)

## Optional But Recommended Upgrades
 - Raspberry Pi Zero 2W - It runs Klipper, which is probably the best optional upgrade for your printer as it provides better motion control, finer tunning, etc.
 - BigTreeTech Manta MP4 - This board has Klipper integrated into it along with all of the ports for motors, thermistors, endstops, etc.
 - BIGTREETECH BTT Octopus Pro - This is alternative to Ramps1.4, and it can be used if you want more power and more sleeker design, but it does not run klipper.
 
 - What I recommend - 
   1. If you want it to be cost effective - Use Raspberry Pi Zero 2W + Ramps1.4
   2. If you want a better board - Use Manta MP4 

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
2. Download the Marlin Code (1.1.7 or 2.1.2.7 - These are the best versions for it)
3. Upload **Marlin.ino** in the Mega2560

# Structure

One thing that I would like to suggest is that rather than making it out of wood or PVC pipe (like a did), you should follow the Prusa i3 guide (structure is very similar) as it would be sturdier and better in terms of durability and printing quality.

You can buy the parts from here - [Prusa i3 parts](https://www.amazon.in/Prusa-MK3-3D-Printer-Printed-Parts/dp/B09FYZVPH7)

You can also 3D print the **.stl files** in this repo if you know someone who can do it for you but use **PETG** or **ABS**.

Also, you can follow the [Prusa i3 Guide](https://www.bu.edu/eng/files/2022/10/prusa3d_manual_mk3s_en.pdf). This is going to give you good structural support. The hardware parts above are compatible with this. Also, this is probably the best thing that you can do for hardware part.

If you still want to build it using PVC and Wood, you can watch this [amazing video](https://www.youtube.com/watch?v=MC2ERhZPnUU) by Mech Ninja (the one that I followed). But the video is slightly incomplete, and you need to figure out a few things on your own.

If you have any queries regarding this, you can always email me on <saksham.khatod27@gmail.com>.

# Why you should/should not build it?
1. If you are a hardware geek - You should definitely build it. This will be a great learning experience and it is quite challenging which improve your skills.
2. If you are not a hardware geek - This option may be cheaper, but it required a lot of experience with hardware (not necessarily 3d printing). Instead, I recommend you to get Bambu Labs A1/A1 mini

# A Very Rough Overview on Building it

1. Get all of the parts as mentioned above along with Prusa i3 parts and hardware parts above.
2. Now what you have to do is assemble the structure as per the guide (skip the wiring section).
3. Attach all of the endstops accurately - you must here the click sound as soon as the x-axis segment touches the buildplate.
4. Connect the wires of the motors as per the diagram - and DO NOT connect in wrong order as it can also cause fire.
5. Once you are sure that the wires are connected properly, connect the Ramps to the 12V power unit with thick wires, with both 11A and 5A using different wires.
6. Start the system.

# Some resources - 

1. [Hackster.io](https://www.hackster.io/DesiEngineer/how-to-make-a-big-3d-printer-at-home-using-arduino-4a7b79)
2. [DIY Builder](https://www.youtube.com/watch?v=M-YXAS3R3-8)
3. [RZTronics](https://www.youtube.com/watch?v=63Ei-H2gQ48&t=20s)
4. [Superb Tech](https://www.youtube.com/watch?v=Rf2RQU0u3us)

# Features

* Fully open-source firmware (Marlin) alongside Klipper
* Custom-built mechanical frame
* Tuned stepper calibration
* Capable of producing high-quality prototype parts
* Built completely from scratch without a pre-built kit
* A Basic web controller using esp32

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
* Higher precision motion tuning
* Display interface for printer control
* Multicolour prints 
