# DIY FDM 3D Printer

My video on it - [DangerouslyCoolStuff](https://www.youtube.com/watch?v=zr9rF5x8NEw)

This is the 3D Printer that I build from scratch. It is also the most technically challenging project that I have built yet. This runs Marlin on Mega2560 with Ramps1.4 with Klipper(I am using Jetson Nano for it) Extension.

The build volume is approximately 22x22x22cm, which is pretty good in comparison to other cheap printers. It costed me about $135 to build (₹12500). The software in it is Marlin. 

I have built about 3-4 versions of it till now. The first one terrible, and the prints produced were bad. The second version was good, and the best one till now is the current version, which produces high quality prints.

Also, this is the first time that I am actually seeing a 3D printer in real life, and I have had no experience with 3D printers. But my experience with hardware projects helped me to do so.

![Demo 1](Demo%201.jpeg)
![Demo 2](Demo%202.jpeg)

# Does it actually work?

Yes, it works well. In fact, I have printed various things till (but most are calib cubes and benchies for testing).

# Updates

## 24th March - New Update! - A New ESP32 based web dashboard

I have created a basic ESP32 based command utility that can send Marlin commands via Wifi. To use-
1. Upload the main.ino to the board
2. Connect the RX and TX
3. Power the 5V pin via the Ramps

## 25th March - New Update! - Multicolor prints via MMU2S

You can now do multicolor prints using Prusa MMU2S. It is a fairly simple device as compared to the printer, and can be built using this [guide](https://www.bu.edu/eng/files/2022/10/prusa3d_manual_mmu2s_en.pdf). 

I have almost finished making this, but I don't have any photo or video to showcase it, but I am sure that this will work as I have installed the necessary firmaware on Klipper. It requires Marlin 2 or greater. 

Even though it was released in 2018, it is probably the best option for doing multicolor prints. Marlin requires a lot of modification and tweakings to do it, but I recommend you to use Klipper as it is far easier to setup.

# How to build it?

## Hardware Overview

This printer was made using - 
* Arduino Mega 2560
* Ramps 1.4 Controller
* Marlin and Klipper
* Jetson Nano
* Bed Slinger
* 12V PSU 

## Circuit

This is the exact circuit that you need to follow to build it - 

<img width="3088" height="2225" alt="image" src="https://github.com/user-attachments/assets/8928c11e-7abd-40b6-a8d8-8461871a5fa5" />

## Electronics Components Shopping List

If you are in India, I recommend you to buy things from Robu.in or Novo3D, as it provides to the materials for much cheaper rates.

I recommend you to avoid Amazon as the things are usually costlier.

## List of Components (India/Global)


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


## List of Hardware Parts

List of GT2 system
 - GT2 Timing Belt x 200cm - 6mm
 - Motor Pulley x 2 - 16 teeth, 6mm
 - Idler Pulley x 2 - 16 teeth, 6mm

Bearing and Motion Systems
 - 628ZZ Bearing x 2 - 8x24x8mm
 - Flexible Coupling x 2 - 5x8mm
 - LM8UU x 12 - 8mm

PTFE System
 - PTFE Tube
 - PC4 M6 x 2
 - PC4 M10 x 2

## Optional But Recommended Upgrades
 - Raspberry Pi Zero 2W - It runs Klipper, which is probably the best upgrade that you can do as it provides better motion control, tuning, etc.
 - BigTreeTech Manta M4 - This board runs Klipper integrated into it along with all of the ports for motors, thermistors, etc.
 - BigTreeTech BTT Octopus Pro - This is an alternate to Ramps1.4 and Mega2560

 1. If you want cheaper -> Go for Ramps1.4 and Mega2560
 2. If you want more power -> Go for Manta M4

## Cost Summary

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

## Code Upload

1. Download either of the Marlin folders uploaded in this repo
2. Flash Marlin.ino into the Mega2560
3. Then attach the components as per the diagram

## Structure

One thing that I would like to suggest is that instead of building it using PVC or Wood, like I did, you should invest a little more and follow the exact Prusa i3 guide. Even the structure is kind of similar, it will be much sturdier and strong. 

You can buy the parts from here - [Prusa i3 parts](https://www.amazon.in/Prusa-MK3-3D-Printer-Printed-Parts/dp/B09FYZVPH7)

Alternativelt, the .stl files in this repo also provide the files for these 3D parts. If you know someone who can do it for you, print them out in PETG or ABS.

Also, you can follow the [Prusa i3 Guide](https://www.bu.edu/eng/files/2022/10/prusa3d_manual_mk3s_en.pdf). This is going to give you good structural support. The hardware parts above are compatible with this. Also, this is probably the best thing that you can do for hardware part.

If you still want to build it for cheap using PVC and wood, you can watch this [amazing video](https://www.youtube.com/watch?v=MC2ERhZPnUU) by Mech Ninja. Altho the video is slightly incomplete, and you'll have to figure out a few things on your own.

If you have any doubts, you can always contact me on <saksham.khatod27@gmail.com>

## A very rough guide on building it

1. Buy all of the parts as mentioned above, including Prusa i3, the electronics kit, and the hardware parts.
2. Assemble the Prusa i3 parts using the guide above.
3. Attach all of the endstops accurately, there should be no error while attaching the endstops
4. Once you have assembled the basic frame, you can now go on to connect the wires to the mainboard.
5. Start the system.

## How to use it?
1. Obtain the 3D .stl file that you want to print.
2. Slice it in a software like Cura, Orca, etc. 
3. Connect the printer to your PC via pronterface or upload the SD card into the printer.
4. Now you can go onto print it.

# Some resources -

1. [Hackster.io](https://www.hackster.io/DesiEngineer/how-to-make-a-big-3d-printer-at-home-using-arduino-4a7b79)
2. [DIY Builder](https://www.youtube.com/watch?v=M-YXAS3R3-8)
3. [RZTronics](https://www.youtube.com/watch?v=63Ei-H2gQ48&t=20s)
4. [Superb Tech](https://www.youtube.com/watch?v=Rf2RQU0u3us)


# Important build notes

1. Z-endstop alignment: It should be perfectly aligned with the nozzles contact point with the bed. Even a small error can lead to the prints failing disasterously.
2. Proper wiring: The power supply to the 11A and 5A must use thick wires that can withstand high currents or else the whole system can catch fire.
3. Belt Tension: The belts must be tight and secure.

# Future upgrades

Some upgrades that I have planned for the future are - 
1. Auto Bed Levelling
2. Better motor tuning
3. Adding a camera for timelapses and monitoring the prints