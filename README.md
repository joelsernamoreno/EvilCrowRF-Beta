# EvilCrowRF-Beta
Documentation, gerbers, design and schematic.

![EvilCrow](https://github.com/joelsernamoreno/EvilCrowRF-Beta/blob/master/images/Logo1.png)



**Implementation and development:** Joel Serna (@JoelSernaMoreno)

**PCB design:** Ignacio Díaz (@Nacon_96) / Forensic&Security (@ForensicSec)

The developers and collaborators of this project do not earn money with this. 
You can invite me for a coffee to further develop Low-Cost hacking devices. If you don't invite me for a coffee, nothing happens, I will continue developing devices.

[![ko-fi](https://www.ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/E1E614OA5)

# Disclaimer

Evil Crow RF is a basic device for professionals and cybersecurity enthusiasts.

We are not responsible for the incorrect use of Evil Crow RF.

We recommend using this device for testing, learning and fun :D

# Introduction

Evil Crow RF is a radiofrequency hacking device for pentest and Red Team operations, this device operates in the following radiofrequency bands:

* 300Mhz-348Mhz
* 387Mhz-464Mhz
* 779Mhz-928Mhz

Evil Crow RF uses 2 CC1101 modules, these modules can be configured to transmit or receive on different frequencies at the same time.

Evil Crow RF allows the following attacks:

* Signal receiver
* Signal Transmitter
* Replay attacks
* ...

**This device is similar to the device developed by Samy Kamkar (@samykamkar):** https://www.wired.com/2015/08/hackers-tiny-device-unlocks-cars-opens-garages/

In this repository you can find a basic PCB to mount your own Evil Crow RF **(the full version of Evil Crow RF is still under development).**

In this repository you can also find some BASIC sketches for Evil Crow RF. **Sketches for replay or rolljam attacks are not published for ethical reasons.**


![EvilCrow](https://github.com/joelsernamoreno/EvilCrowRF-Beta/blob/master/images/devices.jpg)


# Hardware

To mount your own Evil Crow RF you need the following hardware:

* 1x Evil Crow RF PCB

* 2x CC1101 module

* 1x Micro SD

* 1x OLED

# Libraries

Evil Crow RF needs the following libraries:

* https://github.com/LSatan/SmartRC-CC1101-Driver-Lib

* https://github.com/sui77/rc-switch

* https://github.com/davetcc/IoAbstraction

* https://github.com/arduino-libraries/SD

# Installation

1. Download and Install the Arduino IDE: https://www.arduino.cc/en/main/software

2. Download and save the required libraries in the library directory

3. Open any sketch from this repository with the arduino IDE

4. Select Tools - Board - Arduino Nano

5. Select Tools - Processor - Atmega328P

5. Upload sketch and fun!!

# Demo sketch

**oled-example:** Simple skecth to use the oled display.

**EvilCrow_rf_testbuttons** Simple sketch to use the PushButton.

**TXDemo:** Simple sketch to transmit with a CC1101 module.

**RX-315mhz-433mhz:** Sketch to receive with two CC1101 modules at the same time.


![EvilCrow](https://github.com/joelsernamoreno/EvilCrowRF-Beta/blob/master/images/example.png)
