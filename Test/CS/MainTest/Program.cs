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
            bool full = false;
            bool comp = false;
            bool all = false;

            if(args.Length > 0)
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
                UnitTestVersion versionTest       = new UnitTestVersion(true,           "../../../../TestOutput/");
                versionTest.run();
                UnitTestValue valueTest           = new UnitTestValue(true,             "../../../../TestOutput/");
                valueTest.run();
                UnitTestUBase ubaseTest           = new UnitTestUBase(true,             "../../../../TestOutput/");
                ubaseTest.run();
                UnitTestTypeGroup us              = new UnitTestTypeGroup(true,         "../../../../TestOutput/");
                us.run();
                UnitTestBaseSystem bs             = new UnitTestBaseSystem(true,        "../../../../TestOutput/");
                bs.run();
                UnitTestConstantGroup ucb         = new UnitTestConstantGroup(true,     "../../../../TestOutput/");
                ucb.run();
                UnitTestConstants constants       = new UnitTestConstants(true,         "../../../../TestOutput/");
                constants.run();
                UnitTestConversionBase convb      = new UnitTestConversionBase(true,    "../../../../TestOutput/");
                convb.run();
                UnitTestConversion conv           = new UnitTestConversion(true,        "../../../../TestOutput/");
                conv.run();
                UnitTestCanonicalSystem ubs       = new UnitTestCanonicalSystem(true,   "../../../../TestOutput/");
                ubs.run();
                UnitTestSingleSystem usb          = new UnitTestSingleSystem(true,      "../../../../TestOutput/");
                usb.run();
                UnitTestSystemUnits sysUnits      = new UnitTestSystemUnits(true,       "../../../../TestOutput/");
                sysUnits.run();
                UnitTestConvert cvt               = new UnitTestConvert(true,           "../../../../TestOutput/");
                cvt.run();
                UnitTestConverter con             = new UnitTestConverter(true,         "../../../../TestOutput/");
                con.run();
                UnitTestUnitConversions cons      = new UnitTestUnitConversions(true,   "../../../../TestOutput/");
                cons.run();
                SystemTestUnitConversions sysTest = new SystemTestUnitConversions(true, "../../../../TestOutput/");
                sysTest.run();
                SystemTestConstants constTest     = new SystemTestConstants(true,       "../../../../TestOutput/");
                constTest.run();
                SystemTestSystemUnits sysUTest    = new SystemTestSystemUnits(true,     "../../../../TestOutput/");
                sysUTest.run();
            }

            if (comp || all)
            {
                UnitConversionBasicTest basicTest       = new UnitConversionBasicTest(false,    "../../../../TestOutput/");
                basicTest.run();
                UnitConversionConvertTest covertTest    = new UnitConversionConvertTest(false,  "../../../../TestOutput/");
                covertTest.run();
                UnitConversionConstantTest constantTest = new UnitConversionConstantTest(false, "../../../../TestOutput/");
                constantTest.run();
                UnitConversionUnitsTest unitTest        = new UnitConversionUnitsTest(false,    "../../../../TestOutput/");
                unitTest.run();
            }
            Console.WriteLine("End Tests");
        }
    }
}
// EOF