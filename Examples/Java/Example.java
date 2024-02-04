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
// File Example.java
//
// Program to demonstrate library usage.UnitConversions
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

import UnitConversion.UnitConversions;
import UnitConversion.Converter;
import java.io.*;

public class Example
{
    /*
     * Default Constructor
     */
    public Example()
    { 
    }
	
    /*
     * main 
     *
     * @param args    - (input) not used.
     */
    public static void main(String[] args)
    {
		System.out.println("Start Example");
		System.out.println(" ");
        
        UnitConversions unitConversions = UnitConversions.Instance();
        Converter  length = unitConversions.converter("Length");
        Converter  mass   = unitConversions.converter("Mass");
        Converter  area   = unitConversions.converter("Area");
        Converter  liquid = unitConversions.converter("Liquid");
        Converter  time   = unitConversions.converter("Time");
        Converter  freq   = unitConversions.converter("Frequency");
        Converter  energy = unitConversions.converter("Energy");
        Converter  temp   = unitConversions.converter("Temperature");

        // Length conversion: convert kilometers to meters and miles.
        double km = 3.5;
        double m  = length.convert(km, "kilometer", "meter");
        double mi = length.convert(km, "kilometer", "SI", "mile", "Imperial");
        System.out.println("Length");
        System.out.println(km + " kilometers = " + m  + " meters" );
        System.out.println(km + " kilometers = " + mi + " miles");
        System.out.println(" ");

        // Mass conversion. Convert pounds to kilograms and Egyptian kantar.
        double pounds = 100.0;
        double kgm    = mass.convert(pounds, "pound", "US", "kilogram", "SI");
        double kantar = mass.convert(pounds, "pound", "US", "kantar",   "Egyptian");
        System.out.println("Mass");
        System.out.println(pounds + " pounds = " + kgm    + " kilograms");
        System.out.println(pounds + " pounds = " + kantar + " kantar");
        System.out.println(" ");

        // Area conversion: convert square miles to acres and square kilometers.
        double sqmi  = 160.0;
        double acres = area.convert(sqmi, "sq-mi", "US", "acre", "US");
        double kmsq  = area.convert(sqmi, "sq-mi", "US", "sq-km", "SI");
        System.out.println("Area");
        System.out.println(sqmi + " square miles = " + acres + " acres");
        System.out.println(sqmi + " square miles = " + kmsq  + " square km");
        System.out.println(" ");

        // Liquid volume conversion: convert liters to gallons
        double liters = 12.0;
        double gUS    = liquid.convert(liters, "liter", "SI", "gallon", "US");
        double gUK    = liquid.convert(liters, "liter", "SI", "gallon", "UK");
        System.out.println("Liquid Volume");
        System.out.println(liters + " liters = " + gUS + " gallons (US)");
        System.out.println(liters + " liters = " + gUK + " gallons (UK)");
        System.out.println(" ");

        // Time conversion: convert fortnight to days and to seconds
        double fortnight = 1.0;
        double days      = time.convert(fortnight, "fortnight", "UK", "day",   "Time");
        double seconds   = time.convert(fortnight, "fortnight", "UK", "second", "SI");
        System.out.println("Time");
        System.out.println(fortnight + " fortnight = " + days    + " days");
        System.out.println(fortnight + " fortnight = " + seconds + " seconds");
        System.out.println(" ");

        // Frequency conversion: gighertz to megahertz and curie
        double ghz   = 15.0;
        double mhz   = freq.convert(ghz, "gigahertz", "megahertz");
        double curie = freq.convert(ghz, "gigahertz", "SI", "curie", "INT");
        System.out.println("Frequency");
        System.out.println(ghz + " gigahertz = " + mhz   + " megahertz");
        System.out.println(ghz + " gigahertz = " + curie + " curie");
        System.out.println(" ");

        // Energy conversion: kilowatt-hour to joules and calories
        double kwhr    = 120.0;
        double joule   = energy.convert(kwhr, "kWhr", "Scientific", "joule",   "SI");
        double calorie = energy.convert(kwhr, "kWhr", "Scientific", "calorie", "Scientific");
        System.out.println("Energy");
        System.out.println(kwhr + " kilowatt-hour = " + joule   + " joule");
        System.out.println(kwhr + " kilowatt-hour = " + calorie + " calorie");
        System.out.println(" ");

        // Temperature Conversion: Celsius to Fahrenheit and Rankine
        double celsius    = 37.0;
        double fahrenheit = temp.convert(celsius, "celsius", "INT", "fahrenheit", "Imperial");
        double rankine    = temp.convert(celsius, "celsius", "INT", "rankine",    "Imperial");
        System.out.println("Temperature");
        if (temp.isError(fahrenheit))
        {
            System.out.println("Error converting Celsius temperature to Fahrenheit temperature");
        }
        else
        {
           System.out.println(celsius + " Celsius = " + fahrenheit + " Fahrenheit");
        }
        if (temp.isError(rankine))
        {
            System.out.println("Error converting Celsius temperature to Rankine temperature");
        }
        else
        {
            System.out.println(celsius + " Celsius = " + rankine    + " Rankine");
        }
        System.out.println(" ");
        
		System.out.println("End Example");
    }

   /*********************************************************************************
    * Class data members
    *********************************************************************************/
}
// EOF 
