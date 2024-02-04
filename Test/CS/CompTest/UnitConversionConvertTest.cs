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
// File UnitConversionConvertTest.cs
//
// Program to test unit conversion methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversionTestCS
{
    using System;
    using UnitConversion;

    /// <summary>
    /// Program to test unit conversion methods.
    /// </summary>
    public class UnitConversionConvertTest : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor. 
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input) path to directory for output 
        ///                             files.</param>
        public UnitConversionConvertTest(bool brief, string path) : base(brief, path)
        {
             openFile("ConvertTest.txt");
        }

        /// <summary>
        /// Test double unit. Call all methods in input Convert class.
        /// </summary>
        /// <param><c>className</c>  - (input) the class or type of unit e.g.
        ///                                    Angle, Force, etc.</param>
        /// <param><c>sysName</c>    - (input) the specific type of unit 
        ///                                     e.g. SolidAngle.</param>
        /// <param><c>unitName</c>   - (input) the unit name.</param>
        /// <param><c>sysUnit</c>    - (input) the Convert class.</param>
        /// <param><c>nameMod</c>    - (input) modify add unit full name 
        ///                                   if true.</param>
        private void  testUnit(string className, 
                               string sysName, 
                               string unitName, 
                               UnitConversion.Converter sysUnit,  
                               bool nameMod = true)
        {
            TypeGroup xSys = sysUnit.typeGroup(sysName);
            UBASE u = xSys.unit(unitName);
            string newName = unitName;
            if (nameMod)
            {
                newName = newName.Replace("]", "_2x]");
            }
            else
            {
                newName = newName + "_2x";
            }
            Console.WriteLine(" ");

            // Check TypeGroup is valid
            printResult(xSys.valid(), className + " " + sysName + " " + xSys.name(),
                        "valid", bool_to_str(xSys.valid()), "true");

            // Check unit from TypeGroup is valid
            printResult(u.valid(), className + " " + sysName + " " + unitName,
                       "valid", bool_to_str(u.valid()) + " " + u.toString(),
                       "true  " + u.toString());

            // Create a unit and added it to the TypeGroup
            UBASE db = new UBASE(u.system(), newName, 2*u.value().dvalue(), 
                                 u.unit(), u.type(),
                                 UnitConversion.Version.Instance().version(), 
                                 u.offset().dvalue());
            bool ax = xSys.addUnit(newName,db);

            // Check that the unit was added
            printResult(ax, className + " " + sysName + " " + newName,
                       "addUnit", bool_to_str(ax), "true ");
            UBASE u2x = xSys.unit(newName);
            printResult(u2x.valid(), className + " " + sysName + " " + newName,
                       "valid", bool_to_str(u2x.valid()) + " " + u2x.toString(),
                       "true  " + u2x.toString());

            // remove the added unit
            bool rx = xSys.removeUnit(newName);
            printResult(rx, className + " " + sysName + " " + newName,
                       "removeUnit", bool_to_str(rx), "true");

            UBASE u2r = xSys.unit(newName);
            printResult(!u2r.valid(), className + " " + sysName + " " + newName,
                        "valid", bool_to_str(u2r.valid()) + " " + u2r.toString(),
                        "true  " + u2r.toString());

            printList(sysUnit.unitNames(),   "unit  ", className);
            printList(sysUnit.systemNames(), "system", className);
            printList(sysUnit.typeNames(),   "type  ", className);
            Console.WriteLine(" ");
        }

        /// <summary>
        /// Run tests; output results to screen or file.
        /// </summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitConversionConvertTest");
            UnitConversions units =  UnitConversions.Instance();

             UnitConversion.Converter solidAngle       = units.converter("SolidAngle");
             UnitConversion.Converter surfaceDensity   = units.converter("SurfaceDensity");
             UnitConversion.Converter current          = units.converter("Current");
             UnitConversion.Converter energy           = units.converter("Energy");
             UnitConversion.Converter flow             = units.converter("Flow");
             UnitConversion.Converter action           = units.converter("Action");
             UnitConversion.Converter frequency        = units.converter("Frequency");
             UnitConversion.Converter illuminance      = units.converter("Illuminance");
             UnitConversion.Converter molarCharge      = units.converter("MolarCharge");
             UnitConversion.Converter power            = units.converter("Power");
             UnitConversion.Converter pressure         = units.converter("Pressure");
             UnitConversion.Converter specificEnergy   = units.converter("SpecificEnergy");
             UnitConversion.Converter specificVolume   = units.converter("SpecificVolume");
             UnitConversion.Converter temperature      = units.converter("Temperature");
             UnitConversion.Converter time             = units.converter("Time");
             UnitConversion.Converter velocity         = units.converter("Velocity");
             UnitConversion.Converter dynamicViscosity = units.converter("DynamicViscosity");
             UnitConversion.Converter wavenumber       = units.converter("Wavenumber");
             UnitConversion.Converter count            = units.converter("Count");
             UnitConversion.Converter computer         = units.converter("Computer");

             UnitConversion.Converter length           = units.converter("Length");
             UnitConversion.Converter area             = units.converter("Area");
             UnitConversion.Converter mass             = units.converter("Mass");
             UnitConversion.Converter liquid           = units.converter("Liquid");
             UnitConversion.Converter dry              = units.converter("Dry");


            testUnit("SolidAngle",      "Imperial",   "Imperial[sp]",                 solidAngle);
            testUnit("SurfaceDensity",  "SI",         "SI[kg/cm2]",                   surfaceDensity);
            testUnit("Current",         "cgs",        "cgs[gilbert]",                 current);
            testUnit("Energy",          "Scientific", "Scientific[calorie]",          energy);
            testUnit("Flow",            "US",         "US[gallon-per-second]",        flow);
            testUnit("Action",          "Scientific", "Scientific[planck]",           action);
            testUnit("Frequency",       "Imperial",   "Imperial[PD]",                 frequency);
            testUnit("Illuminance",     "UK",         "UK[ft-C]",                     illuminance);
            testUnit("MolarCharge",     "Scientific", "Scientific[F(12C)]",           molarCharge);
            testUnit("Power",           "FPS",        "FPS[ft-pdl/sec]",              power);
            testUnit("Pressure",        "INT",        "INT[torr]",                    pressure);
            testUnit("SpecificEnergy",  "UK",         "UK[Btu(IT)/lb]",               specificEnergy);
            testUnit("SpecificVolume",  "UK",         "UK[in3/lb]",                   specificVolume);
            testUnit("Time",            "Scientific", "Scientific[year(solar-mean)]", time);
            testUnit("Velocity",        "SI",         "SI[mm/min]",                   velocity);
            testUnit("DynamicViscosity","FPS",        "FPS[reynolds]",                dynamicViscosity);
            testUnit("Wavenumber",      "Scientific", "Scientific[1/ft]",             wavenumber);
            testUnit("Temperature",     "French",     "French[Reaumur]",              temperature);
            testUnit("Count",          "Imperial",   "Imperial[dozen]",               count);
            testUnit("Computer",       "Computer",   "Computer[gigabyte]",            computer);

            testUnit("Length", "Welsh", "leap",        length,       false);
            testUnit("Area",   "Welsh", "serf-town",   area,         false);
            testUnit("Mass",   "Welsh", "pwys",        mass,         false);
            testUnit("Liquid", "Welsh", "hewstawr",    liquid,       false);
            testUnit("Dry",    "Welsh", "cubic-palf",  dry,          false);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitConversionConvertTest", ts);
            Console.WriteLine(" ");

        }
    }
}
// EOF
