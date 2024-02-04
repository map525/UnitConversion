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
// File UnitTestConversion.cs
//
// Unit test for Conversion class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversionTestCS
{
    using System;
    using System.Collections.Generic;
    using UnitConversion;

    ///<summary>
    /// Test Conversion class.
    ///</summary>
    public class UnitTestConversion : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the 
        ///                              test results are written.</param>
        public UnitTestConversion(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestConversion.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestConversion");

            Conversion cv0 = new Conversion();
            Conversion cv1 = new Conversion("force");

            Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();
            unit.Add("UK[ton-per-1000-yards]", new UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0"));
            unit.Add("UK[t/1000-yd]",          new UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0"));
            unit.Add("UK[ton-per-mile]",       new UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0"));
            unit.Add("UK[t/mi]",               new UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0"));
            unit.Add("UK[ton-per-yard]",       new UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0"));
            unit.Add("UK[t/yd]",               new UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0"));
            unit.Add("UK[ton-per-foot]",       new UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0"));
            unit.Add("UK[t/ft]",               new UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0"));
            unit.Add("UK[ton-per-meter]",      new UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0"));
            unit.Add("UK[t/m]",                new UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0"));
            unit.Add("SI[ton-per-kilometer]",  new UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0"));
            unit.Add("SI[t/km]",               new UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0"));
            Dictionary<string, BaseSystem> map = new Dictionary<string, BaseSystem>();
            map.Add("unit", new BaseSystem("linearDensity", unit, "1.0"));
            Conversion cv2 = new Conversion("linearDensity", map);

            Conversion cv3 = new Conversion(cv2);
            //Conversion cv4 = cv2;

            Console.WriteLine("Default Constructor");
            bool r0 = !cv0.valid();
            string ar0 = bool_to_str(cv0.valid());
            string er0 = "false";
            printResult(r0, "UnitTestConversion", "Default Constructor", 
                                 ar0, er0);
            Console.WriteLine("");

            Console.WriteLine("Name Constructor");
            bool r1 = (cv1.valid() && cv1.name() == "force" ? true : false);
            string ar1 = bool_to_str(cv1.valid()) + ", " + cv1.name();
            string er1 = "true, force";
            printResult(r1, "UnitTestConversion", "Name Constructor", ar1, er1);
            Console.WriteLine("");

            testConversion(cv2, "Constructor");
            testConversion(cv3, "Copy Constructor");
            //testConversion(cv4, "Assignment");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestConversion", ts);
        }

        ///<summary>
        /// Test Conversion.
        ///</summary>
        /// <param><c>cv</c>      (input)  Conversion to test.</param>
        /// <param><c>label</c>   (input)  identifying label for output.</param>
        private void testConversion(Conversion cv, 
                                    string label)
        {
            Console.WriteLine(label);

            bool r1 = (cv.validateType("linearDensity", "linearDensity") 
               && !cv.validateType("linearDensity", "density") ? true : false);
            string ar1 = bool_to_str(cv.validateType("linearDensity", "linearDensity")) 
                       + ", " + bool_to_str(cv.validateType("linearDensity", "density"));
            string er1 = "true, false";
            printResult(r1, "UnitTestConversion", "validateType", ar1, er1);

            UBASE newUnit = new UBASE("Imperial", "pound-per-yard", 
                                       4.960546478565180E-01, "kg/m", 
                                       "M/L", "1.0");
            bool ans2 = cv.addUnit("unit", "Imperial", "pound-per-yard", newUnit);
            UBASE addUnit = cv.unit("unit", "Imperial", "pound-per-yard");
            bool r2 = (ans2 && addUnit.valid() ? true : false);
            string ar2 = bool_to_str(ans2) + ", " + bool_to_str(addUnit.valid());
            string er2 = "true, true";
            printResult(r2, "UnitTestConversion", "addUnit", ar2, er2);


            bool ans3 = cv.removeUnit("unit", "Imperial", "pound-per-yard");
            UBASE removeUnit = cv.unit("unit", "Imperial", "pound-per-yard");
            bool r3 = (ans3 && !removeUnit.valid() ? true : false);
            string ar3 = bool_to_str(ans3) + ", " + bool_to_str(removeUnit.valid());
            string er3 = "true, false";
            printResult(r3, "UnitTestConversion", "removeUnit", ar3, er3);

            double x = cv.convertUnit(1.0, "linearDensity", "linearDensity", 
                                            "ton-per-foot", "UK",
                                            "ton-per-yard", "UK", false);
            double ex = UBASE.ERROR;
            bool r4 = UBASE.isERROR(x); //(x == ex ? true : false);
            string ar4 = x.ToString("E15");
            string er4 = ex.ToString("E15");
            printResult(r4, "UnitTestConversion", "convertUnit", ar4, er4);
            Console.WriteLine("");
        }
    }
}
// EOF
