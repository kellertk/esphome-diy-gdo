# esphome-diy-gdo

An ESPHome project to control a garage door opener using relays. Instead of
trying to interface with a GDO directly, this project uses a relays or MOSFETs
to simulate a button press on the remote. That way it's compatible with any GDO.
You will need to sacrifice a remote to wire up the relays.

This project is designed to be used with [Home Assistant](https://www.home-assistant.io/).

## Features
* Open and close the garage door using Home Assistant
* Monitor the door position with a VL53L0X time-of-flight sensor. This is built
  with one sensor to detect when the door is open and the close state is
  assumed, but you could add a second, sensor to be sure the door is closed.
* Flashing lights and buzzer for safety

## Parts
* ESP32
* VL53L0X time-of-flight sensor
* As many relays or MOSFETs as you have buttons on your remote
* Buzzer
* LEDs
* LED Driver chip

## Usage
1. Copy the example diy-gdo.yaml to ESPHome, either in the dashboard or using
   the command line.
2. Update the configuration to match your setup.
3. Everything is wired up and put on the ceiling near your opener. The time of
   flight sensor should be pointing down to where the door will be when it's
   open.
4. Calibrate the time of flight sensor. This is done by opening the door up and
   pressing the Calibrate button in the Home Assistant UI, or calling the
   calibrate service. This sets the open position; greater than this amount is
   considered closed.

I didn't include wiring details: if you use this you should have a basic idea on
how to wire up relays and sensors. If you don't, you should probably not be
messing with your garage door opener. Use caution: you're hooking up a heavy
steel door on rails to an automated system using custom code from a stranger on
the internet. This could be lethal.
