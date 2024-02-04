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
///
//
// File Program.cs
//
// Main test program. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversionTestCS
{
    using System;

    /// <summary>
    /// Main test program. 
    /// </summary>
    class Program
    {
        /// <summary>
        /// Run tests. 
        /// </summary>
        static void Main(string[] args)
        {
            DateTime start = DateTime.Now;
            bool full = false;
            bool comp = false;
            bool all = false;
            string path = "../../../../../";

            Console.BackgroundColor = ConsoleColor.DarkGray;
            Console.Clear();
            Console.ForegroundColor = ConsoleColor.White;

            if(args.Length > 1)
            {
                path = args[1]+"/";
            }

            if (args.Length > 0)
            {
                string cmd = args[0].ToUpper();
                if(cmd == "FULL")
                {
                    full = true;
                }
                else if(cmd == "ALL")
                {
                    all = true;
                }
                else if(cmd == "COMP")
                {
                    comp = true;
                }
                else
                {
                    full = true;
                }
            }
            else
            {
                full = true;
            }
            Console.WriteLine("Start Tests");

            if(full || all)
            {
                UnitTestVersion versionTest       = new UnitTestVersion(true,           path+"TestOutput/");
                versionTest.run();
                UnitTestValue valueTest           = new UnitTestValue(true,             path + "TestOutput/");
                valueTest.run();
                UnitTestUBase ubaseTest           = new UnitTestUBase(true,             path + "TestOutput/");
                ubaseTest.run();
                UnitTestTypeGroup us              = new UnitTestTypeGroup(true,         path + "TestOutput/");
                us.run();
                UnitTestBaseSystem bs             = new UnitTestBaseSystem(true,        path + "TestOutput/");
                bs.run();
                UnitTestConstantGroup ucb         = new UnitTestConstantGroup(true,     path + "TestOutput/");
                ucb.run();
                UnitTestConstants constants       = new UnitTestConstants(true,         path + "TestOutput/");
                constants.run();
                UnitTestConversionBase convb      = new UnitTestConversionBase(true,    path + "TestOutput/");
                convb.run();
                UnitTestConversion conv           = new UnitTestConversion(true,        path + "TestOutput/");
                conv.run();
                UnitTestCanonicalSystem ubs       = new UnitTestCanonicalSystem(true,   path + "TestOutput/");
                ubs.run();
                UnitTestSingleSystem usb          = new UnitTestSingleSystem(true,      path + "TestOutput/");
                usb.run();
                UnitTestSystemUnits sysUnits      = new UnitTestSystemUnits(true,       path + "TestOutput/");
                sysUnits.run();
                UnitTestConvert cvt               = new UnitTestConvert(true,           path + "TestOutput/");
                cvt.run();
                UnitTestConverter con             = new UnitTestConverter(true,         path + "TestOutput/");
                con.run();
                UnitTestUnitConversions cons      = new UnitTestUnitConversions(true,   path + "TestOutput/");
                cons.run();
                SystemTestUnitConversions sysTest = new SystemTestUnitConversions(true, path + "TestOutput/");
                sysTest.run();
                SystemTestConstants constTest     = new SystemTestConstants(true,       path + "TestOutput/");
                constTest.run();
                SystemTestSystemUnits sysUTest    = new SystemTestSystemUnits(true,     path + "TestOutput/");
                sysUTest.run();
            }

            if (comp || all)
            {
                UnitConversionBasicTest basicTest       = new UnitConversionBasicTest(false,    path + "TestOutput/");
                basicTest.run();
                UnitConversionConvertTest covertTest    = new UnitConversionConvertTest(false,  path + "TestOutput/");
                covertTest.run();
                UnitConversionConstantTest constantTest = new UnitConversionConstantTest(false, path + "TestOutput/");
                constantTest.run();
                UnitConversionUnitsTest unitTest        = new UnitConversionUnitsTest(false,    path + "TestOutput/");
                unitTest.run();
            }
            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            Console.WriteLine("End Tests Duration: "+ts);
        }
    }
}
// EOF