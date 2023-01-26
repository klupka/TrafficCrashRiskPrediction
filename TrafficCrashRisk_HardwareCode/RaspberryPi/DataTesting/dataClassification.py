# Author: Seth Klupka (dyw246)
# Code to classify data collected by the Raspberry Pi Sense HAT.
# API Reference: https://pythonhosted.org/sense-hat/api/

from sense_hat import SenseHat

sense = SenseHat()

# Dictionary of weather conditions via CRIS data. (unused)
wthr_conditions = {
    0: "UNKNOWN",
    2: "RAIN",
    3: "SLEET",
    4: "SNOW",
    5: "FOG",
    6: "BLOWING SAND/SNOW",
    7: "SEVERE CROSSWINDS",
    8: "OTHER",
    11: "CLEAR",
    12: "CLOUDY"
}

# Get dew point using temp(C) and %rH
def get_dp_class():
    # Get sensor data
    temp = sense.get_temperature()
    rh = sense.get_humidity()
    
    # Dew point formula
    dew_point = temp - ((100 - rh)/5)
    
    # Extra info
    print("Temperature:\t", temp)
    print("Humidity:\t", rh)
    print("Dew Point:\t", dew_point)
    
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
    
    
dp_class = get_dp_class()
print("\nDP Class:\t", dp_class)

temp_class = get_temp_class()
print("Temp Class:\t", temp_class)
