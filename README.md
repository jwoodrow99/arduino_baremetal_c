# Arduino Baremetal C

This repo contains C programs designed to run on the Arduino UNO. I started this project as an introduction to embedded C as well as getting away from the bload of the Arduino IDE.

## Requirements

In order to work with the AVR CPU (which the Arduino UNO is based on) you will require the following libraries. Some are for C and others are for building and writing the files for the Arduino.

- avr-libc
- gcc-avr
- binutils-avr
- avrdude

### MacOS Install

You can easily install the required tooling on mac with the following. Assuming you are using homebrew.

``` bash
# Install libraries (avr-libc, gcc-avr, binutils-avr)
brew tap osx-cross/avr
brew install avr-gcc

# Install write tool
brew install avrdude
```


