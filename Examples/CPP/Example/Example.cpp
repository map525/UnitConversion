/////////////////////////////////////////////////////////////////////////////////
//2345678901234567890123456789012345678901234567890123456789012345678901234567890
/////////////////////////////////////////////////////////////////////////////////
// PROJECT: Unit Conversion
//
// Copyright Copyright 2024 MAP
//
// Unpublished - Rights reserved under the Copyright Laws of the United States
//
/////////////////////////////////////////////////////////////////////////////////
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
//
/////////////////////////////////////////////////////////////////////////////////
//
// File: Example.cpp
//
// Program to demonstrate library usage. 
//
/////////////////////////////////////////////////////////////////////////////////

#include "UnitConversions.hpp"
#include <iostream>

/*
 * @brief run example.
 */ 
int main(int argc, char *argv[])
{
    std::cout << "Start Example" << std::endl << std::endl;

    UnitConversions& unitConversions = UnitConversions::Instance();

    Converter& length = unitConversions.converter("Length");
    Converter& mass   = unitConversions.converter("Mass");
    Converter& area   = unitConversions.converter("Area");
    Converter& liquid = unitConversions.converter("Liquid");
    Converter& time   = unitConversions.converter("Time");
    Converter& freq   = unitConversions.converter("Frequency");
    Converter& energy = unitConversions.converter("Energy");
    Converter& temp   = unitConversions.converter("Temperature");

    // Length conversion: convert kilometers to meters and miles.
    double km = 3.5;
    double m  = length.convert(km, "kilometer", "meter");
    double mi = length.convert(km, "kilometer", "SI", "mile", "Imperial");
    std::cout << "Length" << std::endl;
    std::cout << km << " kilometers = " << m  << " meters" << std::endl;
    std::cout << km << " kilometers = " << mi << " miles"  << std::endl;
    std::cout << std::endl;

    // Mass conversion. Convert pounds to kilograms and Egyptian kantar.
    double pounds = 100.0;
    double kgm    = mass.convert(pounds, "pound", "US", "kilogram", "SI");
    double kantar = mass.convert(pounds, "pound", "US", "kantar",   "Egyptian");
    std::cout << "Mass" << std::endl;
    std::cout << pounds << " pounds = " << kgm    << " kilograms" << std::endl;
    std::cout << pounds << " pounds = " << kantar << " kantar"    << std::endl;
    std::cout << std::endl;

    // Area conversion: convert square miles to acres and square kilometers.
    double sqmi  = 160.0;
    double acres = area.convert(sqmi, "sq-mi", "US", "acre",  "US");
    double kmsq  = area.convert(sqmi, "sq-mi", "US", "sq-km", "SI");
    std::cout << "Area" << std::endl;
    std::cout << sqmi << " square miles = " << acres << " acres"             << std::endl;
    std::cout << sqmi << " square miles = " << kmsq  << " square kilometers" << std::endl;
    std::cout << std::endl;

    // Liquid volume conversion: convert liters to gallons
    double liters = 12.0;
    double gUS = liquid.convert(liters, "liter", "SI", "gallon", "US");
    double gUK = liquid.convert(liters, "liter", "SI", "gallon", "UK");
    std::cout << "Liquid Volume" << std::endl;
    std::cout << liters << " liters = " << gUS << " gallons (US)" << std::endl;
    std::cout << liters << " liters = " << gUK << " gallons (UK)" << std::endl;
    std::cout << std::endl;

    // Time conversion: convert fortnight to days and to seconds
    double fortnight = 1.0;
    double days      = time.convert(fortnight, "fortnight", "UK", "day",    "Time");
    double seconds   = time.convert(fortnight, "fortnight", "UK", "second", "SI");
    std::cout << "Time" << std::endl;
    std::cout << fortnight << " fortnight = " << days << " days" << std::endl;
    std::cout << fortnight << " fortnight = " << std::fixed << seconds << " seconds" << std::endl;
    std::cout << std::endl;

    // Frequency conversion: gighertz to megahertz and curie
    double ghz   = 15.0;
    double mhz   = freq.convert(ghz, "gigahertz", "megahertz");
    double curie = freq.convert(ghz, "gigahertz", "SI", "curie", "INT");
    std::cout << "Frequency" << std::endl;
    std::cout << ghz << " gigahertz = " << mhz   << " megahertz" << std::endl;
    std::cout << ghz << " gigahertz = " << curie << " curie"     << std::endl;
    std::cout << std::endl;

    // Energy conversion: kilowatt-hour to joules and calories
    double kwhr    = 120.0;
    double joule   = energy.convert(kwhr, "kWhr", "Scientific", "joule",   "SI");
    double calorie = energy.convert(kwhr, "kWhr", "Scientific", "calorie", "Scientific");
    std::cout << "Energy" << std::endl;
    std::cout << kwhr << " kilowatt-hour = " << joule   << " joule"   << std::endl;
    std::cout << kwhr << " kilowatt-hour = " << calorie << " calorie" << std::endl;
    std::cout << std::endl;

    // Temperature Conversion: Celsius to Fahrenheit and Rankine
    double celsius    = 37.0;
    double fahrenheit = temp.convert(celsius, "celsius", "INT", "fahrenheit", "Imperial");
    double rankine    = temp.convert(celsius, "celsius", "INT", "rankine", "Imperial");
    std::cout << "Temperature" << std::endl;
    if (temp.isError(fahrenheit))
    {
        std::cout << "Error converting Celsius temperature to Fahrenheit temperature" << std::ends;
    }
    else
    {
        std::cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << std::endl;
    }
    if (temp.isError(rankine))
    {
        std::cout << "Error converting Celsius temperature to Rankine temperature" << std::ends;
    }
    else
    {
        std::cout << celsius << " Celsius = " << rankine << " Rankine" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "End Example" << std::endl;
}
// EOF
