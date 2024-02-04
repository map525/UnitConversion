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
// File: Program.cs
//
// Program to demonstrate library usage. 
//
/////////////////////////////////////////////////////////////////////////////////
using System;
using UnitConversion;

namespace ExampleCs
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.BackgroundColor = ConsoleColor.DarkGray;
            Console.Clear();
            Console.ForegroundColor = ConsoleColor.White;

            Console.WriteLine("Start Example");
            Console.WriteLine(" ");

            UnitConversions unitConversions = UnitConversions.Instance();
            Converter  length = unitConversions.converter("Length");
            Converter  mass = unitConversions.converter("Mass");
            Converter  area = unitConversions.converter("Area");
            Converter  liquid = unitConversions.converter("Liquid");
            Converter  time = unitConversions.converter("Time");
            Converter  freq = unitConversions.converter("Frequency");
            Converter energy = unitConversions.converter("Energy");
            Converter temp   = unitConversions.converter("Temperature");

            // Length conversion: convert kilometers to meters and miles.
            double km = 3.5;
            double m  = length.convert(km, "kilometer", "meter");
            double mi = length.convert(km, "kilometer", "SI", "mile", "Imperial");
            Console.WriteLine("Length");
            Console.WriteLine(km + " kilometers = " + m  + " meters" );
            Console.WriteLine(km + " kilometers = " + mi + " miles");
            Console.WriteLine(" ");

            // Mass conversion. Convert pounds to kilograms and Egyptian kantar.
            double pounds = 100.0;
            double kgm    = mass.convert(pounds, "pound", "US", "kilogram", "SI");
            double kantar = mass.convert(pounds, "pound", "US", "kantar",   "Egyptian");
            Console.WriteLine("Mass");
            Console.WriteLine(pounds + " pounds = " + kgm    + " kilograms");
            Console.WriteLine(pounds + " pounds = " + kantar + " kantar");
            Console.WriteLine(" ");

            // Area conversion: convert square miles to acres and square kilometers.
            double sqmi  = 160.0;
            double acres = area.convert(sqmi, "sq-mi", "US", "acre", "US");
            double kmsq  = area.convert(sqmi, "sq-mi", "US", "sq-km", "SI");
            Console.WriteLine("Area");
            Console.WriteLine(sqmi + " square miles = " + acres + " acres");
            Console.WriteLine(sqmi + " square miles = " + kmsq  + " square km");
            Console.WriteLine(" ");

            // Liquid volume conversion: convert liters to gallons
            double liters = 12.0;
            double gUS    = liquid.convert(liters, "liter", "SI", "gallon", "US");
            double gUK    = liquid.convert(liters, "liter", "SI", "gallon", "UK");
            Console.WriteLine("Liquid Volume");
            Console.WriteLine(liters + " liters = " + gUS + " gallons (US)");
            Console.WriteLine(liters + " liters = " + gUK + " gallons (UK)");
            Console.WriteLine(" ");

            // Time conversion: convert fortnight to days and to seconds
            double fortnight = 1.0;
            double days      = time.convert(fortnight, "fortnight", "UK", "day",   "Time");
            double seconds   = time.convert(fortnight, "fortnight", "UK", "second", "SI");
            Console.WriteLine("Time");
            Console.WriteLine(fortnight + " fortnight = " + days    + " days");
            Console.WriteLine(fortnight + " fortnight = " + seconds + " seconds");
            Console.WriteLine(" ");

            // Frequency conversion: gighertz to megahertz and curie
            double ghz   = 15.0;
            double mhz   = freq.convert(ghz, "gigahertz", "megahertz");
            double curie = freq.convert(ghz, "gigahertz", "SI", "curie", "INT");
            Console.WriteLine("Frequency");
            Console.WriteLine(ghz + " gigahertz = " + mhz   + " megahertz");
            Console.WriteLine(ghz + " gigahertz = " + curie + " curie");
            Console.WriteLine(" ");

            // Energy conversion: kilowatt-hour to joules and calories
            double kwhr    = 120.0;
            double joule   = energy.convert(kwhr, "kWhr", "Scientific", "joule",   "SI");
            double calorie = energy.convert(kwhr, "kWhr", "Scientific", "calorie", "Scientific");
            Console.WriteLine("Energy");
            Console.WriteLine(kwhr + " kilowatt-hour = " + joule   + " joule");
            Console.WriteLine(kwhr + " kilowatt-hour = " + calorie + " calorie");
            Console.WriteLine(" ");

            // Temperature Conversion: Celsius to Fahrenheit and Rankine
            double celsius    = 37.0;
            double fahrenheit = temp.convert(celsius, "celsius", "INT", "fahrenheit", "Imperial");
            double rankine    = temp.convert(celsius, "celsius", "INT", "rankine",    "Imperial");
            Console.WriteLine("Temperature");
            if(temp.isError(fahrenheit))
            {
                Console.WriteLine("Error converting Celsius temperature to Fahrenheit temperature");
            }
            else
            {
                Console.WriteLine(celsius + " Celsius = " + fahrenheit + " Fahrenheit");
            }
            if (temp.isError(rankine))
            {
                Console.WriteLine("Error converting Celsius temperature to Rankine temperature");
            }
            else
            {
                Console.WriteLine(celsius + " Celsius = " + rankine    + " Rankine");
            }
            Console.WriteLine(" ");

            Console.WriteLine("End Example");
        }
    }
}
// EOF