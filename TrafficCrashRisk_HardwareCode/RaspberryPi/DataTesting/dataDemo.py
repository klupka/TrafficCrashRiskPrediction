# Author: Seth Klupka (dyw246)
# Code to gather raw environmental data using the Raspberry Pi Sense HAT.
# API Reference: https://pythonhosted.org/sense-hat/api/

import os
import time
from sense_hat import SenseHat

sense = SenseHat()

# Delete existing file
if(os.path.exists("data.txt")):
    os.remove("data.txt")

# Function to convert celsius to fahrenheit (if needed)
def tofahrenheit(celsius):
    return( (celsius*(9/5))+32 )

# Create new file
if not(os.path.exists("data.txt")):
    f = open("data.txt", "w")
    column_names = ['Humidity(%rH)','Pressure(mb)','Temperature(C)','DP_Class','Temp_Class']
    col_sep_names = ','.join(column_names)
    f.write(col_sep_names + "\n")
    f.close()
    print("New file created.\n")
    print("Line\t", column_names)

# Get dew point using temp(C) and %rH
def get_dp_class():
    # Get sensor data
    temp = sense.get_temperature()
    rh = sense.get_humidity()
    
    # Dew point formula
    dew_point = temp - ((100 - rh)/5)
    
    # Dew point classification.
    # Source: https://www.weather.gov/arx/why_dewpoint_vs_humidity
    if dew_point <= 55:
        return "DRY"
    elif 55 < dew_point < 65:
        return "STICKY"
    elif dew_point >= 65:
        return "WET"

def get_temp_class():
    # Get sensor data
    temp = sense.get_temperature()
    
    # Temperature classification.
    # Source: https://thinkmetric.uk/basics/temperature/
    if temp <= 0:
        return "FREEZING"
    elif 0 < temp <= 10:
        return "COLD"
    elif 10 < temp <= 20:
        return "COOL"
    elif 20 < temp < 30:
        return "WARM"
    elif 30 < temp <= 35:
        return "HOT"
    elif temp > 35:
        return "VERY HOT"
    
i = 1
while True:
    
    # get raw data
    humidity = sense.get_humidity()
    pressure = sense.get_pressure()
    temperature = sense.get_temperature()
    
    # call classification functions to get dp and temp class
    dp_class = get_dp_class()
    temp_class = get_temp_class()

    # get data with 5 decimal places
    #humidity = float("{:.5f}".format(sense.get_humidity()))
    #pressure = float("{:.5f}".format(sense.get_pressure()))
    #temp_as_f = tofahrenheit(sense.get_temperature())
    #temperature = float("{:.5f}".format(temp_as_f))
    
    # convert to list, then sep by comma
    data_row = [humidity,pressure,temperature, dp_class, temp_class]
    col_sep_data = ','.join(str(item) for item in data_row)

    # append to file
    f = open("data.txt", "a")
    f.write(col_sep_data + "\n")
    f.close()
    
    i = i+1
    print(i, "\t", data_row)
    time.sleep(0.1)