# Author: Seth Klupka (dyw246)
# Code to write a message to Serial port for transmitter to catch.
# Executed via Raspberry Pi. Simple test code to adapted elsewhere.

import serial
from time import sleep

# Depends on what port # is used for transmitter (ESP32).
# Check for port # in terminal: 'ls -l /dev/t*'
# Port # can change even when using the same physical port on Raspberry Pi.
ser = serial.Serial("/dev/ttyUSB0", 115200)

# Write message data here.
message = "1"

# Write message to Serial port.
ser.write(message.encode())
