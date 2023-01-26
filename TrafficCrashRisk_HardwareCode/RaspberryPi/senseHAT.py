# Author: Seth Klupka (dyw246)
# Code to demonstrate the Raspberry Pi Sense HAT.
# Executed via Raspberry Pi. Simple test code to adapted elsewhere.
# API Reference: https://pythonhosted.org/sense-hat/api/

# SenseHATE Sensors:
# * Gyroscope (unused)
# * Accelerometer (unused)
# * Magnetometer (unused)
# * Temperature
# * Humidity
# * Barometric pressure
# * NO light/colour sensor!
#     - To remove err msg: comment out line 100 (logging.warn(e)) in:
#     - /usr/lib/python3/dist-packages/sense_hat/sense_hat.py

from sense_hat import SenseHat

# Required to initialize the SenseHAT.
sense = SenseHat()

# Get humidity
humidity = sense.get_humidity()
print("Humidity: \t%s %%rH" % humidity)

# Get pressure
pressure = sense.get_pressure()
print("Pressure: \t%s Millibars\n" % pressure)

# Function to convert celsius to fahrenheit
def tofahrenheit(celsius):
    return( (celsius*(9/5))+32 )

# Get temperature
temp = tofahrenheit(sense.get_temperature())
print("Temperature using temperature sensor: \t%s\N{DEGREE SIGN}F" % temp)

# Get temperature using humidity sensor
tempH = tofahrenheit(sense.get_temperature_from_humidity())
print("Temperature using humidity sensor: \t%s\N{DEGREE SIGN}F" % tempH)

# Get temperature using pressure sensor
tempP = tofahrenheit(sense.get_temperature_from_pressure())
print("Temperature using pressure sensor: \t%s\N{DEGREE SIGN}F" % tempP)

# EX. Print temperature to on-board LED matrix/grid.
#sense.show_message("Temperature: %s F" % temp)