#################################################################################
#12345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
#################################################################################
#
# This program is free software you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File Example.py
#
# Program to demonstrate library usage. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UnitConversions

import os
import sys


def main():
    """
    Instantiate and run tests.
    """
    print("Start Example")
    print(" ")
    
    unitConversions = UnitConversions.UnitConversions.Instance()
    length = unitConversions.converter("Length")
    mass   = unitConversions.converter("Mass")
    area   = unitConversions.converter("Area")
    liquid = unitConversions.converter("Liquid")
    time   = unitConversions.converter("Time")
    freq   = unitConversions.converter("Frequency")
    energy = unitConversions.converter("Energy")
    temp   = unitConversions.converter("Temperature")
    
    # Length conversion: convert kilometers to meters and miles.
    km = 3.5
    m  = length.convert(km, "kilometer", "meter")
    mi = length.convert(km, "kilometer", "SI", "mile", "Imperial")
    print("Length")
    print(str(km) + " kilometers = " + str(m)  + " meters" )
    print(str(km) + " kilometers = " + str(mi) + " miles")
    print(" ")

    # Mass conversion. Convert pounds to kilograms and Egyptian kantar.
    pounds = 100.0
    kgm    = mass.convert(pounds, "pound", "US", "kilogram", "SI")
    kantar = mass.convert(pounds, "pound", "US", "kantar",   "Egyptian")
    print("Mass")
    print(str(pounds) + " pounds = " + str(kgm)    + " kilograms")
    print(str(pounds) + " pounds = " + str(kantar) + " kantar")
    print(" ")

    # Area conversion: convert square miles to acres and square kilometers.
    sqmi  = 160.0
    acres = area.convert(sqmi, "sq-mi", "US", "acre", "US")
    kmsq  = area.convert(sqmi, "sq-mi", "US", "sq-km", "SI")
    print("Area")
    print(str(sqmi) + " square miles = " + str(acres) + " acres")
    print(str(sqmi) + " square miles = " + str(kmsq)  + " square km")
    print(" ")

    # Liquid volume conversion: convert liters to gallons
    liters = 12.0
    gUS    = liquid.convert(liters, "liter", "SI", "gallon", "US")
    gUK    = liquid.convert(liters, "liter", "SI", "gallon", "UK")
    print("Liquid Volume")
    print(str(liters) + " liters = " + str(gUS) + " gallons (US)")
    print(str(liters) + " liters = " + str(gUK) + " gallons (UK)")
    print(" ")

    # Time conversion: convert fortnight to days and to seconds
    fortnight = 1.0
    days      = time.convert(fortnight, "fortnight", "UK", "day",   "Time")
    seconds   = time.convert(fortnight, "fortnight", "UK", "second", "SI")
    print("Time")
    print(str(fortnight) + " fortnight = " + str(days)    + " days")
    print(str(fortnight) + " fortnight = " + str(seconds) + " seconds")
    print(" ")

    # Frequency conversion: gighertz to megahertz and curie
    ghz   = 15.0
    mhz   = freq.convert(ghz, "gigahertz", "megahertz")
    curie = freq.convert(ghz, "gigahertz", "SI", "curie", "INT")
    print("Frequency")
    print(str(ghz) + " gigahertz = " + str(mhz)   + " megahertz")
    print(str(ghz) + " gigahertz = " + str(curie) + " curie")
    print(" ")

    # Energy conversion: kilowatt-hour to joules and calories
    kwhr    = 120.0
    joule   = energy.convert(kwhr, "kWhr", "Scientific", "joule",   "SI")
    calorie = energy.convert(kwhr, "kWhr", "Scientific", "calorie", "Scientific")
    print("Energy")
    print(str(kwhr) + " kilowatt-hour = " + str(joule)   + " joule")
    print(str(kwhr) + " kilowatt-hour = " + str(calorie) + " calorie")
    print(" ")

    # Temperature Conversion: Celsius to Fahrenheit and Rankine
    celsius    = 37.0
    fahrenheit = temp.convert(celsius, "celsius", "INT", "fahrenheit", "Imperial")
    rankine    = temp.convert(celsius, "celsius", "INT", "rankine",    "Imperial")
    print("Temperature")
    if temp.isError(fahrenheit):
        print("Error converting Celsius temperature to Fahrenheit temperature")
    else:
        print(str(celsius) + " Celsius = " + str(fahrenheit) + " Fahrenheit")
    if temp.isError(rankine):
        print("Error converting Celsius temperature to Rankine temperature")
    else:
        print(str(celsius) + " Celsius = " + str(rankine)    + " Rankine")
    print(" ")    
    print("End Example")

if __name__ == '__main__':
    """ Main Program """
    main()   
# EOF