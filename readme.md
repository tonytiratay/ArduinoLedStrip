
# Led Strip project

A simple Arduino project to control a led strip :smile:

See https://github.com/tonytiratay/ArduinoHomeLibs for needed libraries

## Potentiometer Controller

**Constructor (int pinNumber)**

### Usage

Turn to get the intensity value

### Methods

**getValue** 

> Get the actual value

**setRange (int, int)**

> Chosse a range to get the value from.
> Ex: Between 1 and 5, or 0 and 100

## Button Controller

**Constructor (int pinNumber)**

### Usage

* Long press (1s): On / Off
* Short Press: Switch mode

### Methods

**setModes (int)**

> A method to register the number of possible modes

**setMode (int)**

> A method to set the actual mode

**getMode**

> A method to get the actual mode
