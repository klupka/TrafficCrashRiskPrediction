# Author: Seth Klupka (dyw246)
# Code to test the Raspberry Pi Sense HAT.
# Executed via Raspberry Pi. Simple test code to adapted elsewhere.

from sense_hat import SenseHat

# Required to initialize the Sense HAT.
sense = SenseHat()

# Initialize humidity and print it.
humidity = sense.get_humidity()
print(sense.humidity)

# Initialize temperature and print it. 
temp = sense.get_temperature()
print("Temperature: %s C" % temp)

# Print temperature to on-board LED matrix/grid.
sense.show_message("Temperature: %s C" % temp)