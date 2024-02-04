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
// File UnitTestConversionBase.cs
//
// Unit test for ConversionBase class. 
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
    public class UnitTestConversionBase : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the 
        ///                              test results are written.</param>
        public UnitTestConversionBase(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestConversionBase.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestConversionBase");

            ConversionBase cv0 = new ConversionBase();
            ConversionBase cv1 = new ConversionBase("force");

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
            ConversionBase cv2 = new ConversionBase("linearDensity", map);

            ConversionBase cv3 = new ConversionBase(cv2);
            //ConversionBase cv4 = cv2;

            Console.WriteLine("Default Constructor");
            bool r0 = !cv0.valid();
            string ar0 = bool_to_str(cv0.valid());
            string er0 = "false";
            printResult(r0, "UnitTestConversionBase", "Default Constructor", 
                                 ar0, er0);
            Console.WriteLine("");

            Console.WriteLine("Name Constructor");
            bool r1 = (cv1.valid() && cv1.name() == "force" ? true : false);
            string ar1 = bool_to_str(cv1.valid()) + ", " + cv1.name();
            string er1 = "true, force";
            printResult(r1, "UnitTestConversionBase", "Name Constructor", ar1, er1);
            Console.WriteLine("");

            testConversionBase(cv2, "Constructor");
            testConversionBase(cv3, "Copy Constructor");
            //testConversionBase(cv4, "Assignment");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestConversionBase", ts);
        }

        ///<summary>
        /// Test Conversion.
        ///</summary>
        /// <param><c>cv</c>      (input)  Conversion to test.</param>
        /// <param><c>label</c>   (input)  identifying label for output.</param>
        private void testConversionBase(ConversionBase cv, 
                                        string label)
        {
            Console.WriteLine(label);

            bool r0 = cv.check();
            string er0 = "true";
            string ar0 = bool_to_str(r0);
            printResult(r0, "UnitTestConversionBase", "check", ar0, er0);

            string er1 = "linearDensity";
            string ar1 = cv.name();
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "UnitTestConversionBase", "name", ar1, er1);

            bool r2 = cv.valid();
            string ar2 = bool_to_str(r2);
            string er2 = "true";
            printResult(r2, "UnitTestConversionBase", "valid", ar2, er2);

            string er3 = "ton-per-mile";
            string ar3 = cv.fullUnitName("UK", "ton-per-mile");
            bool r3 = (ar3 == er3 ? true : false);
            printResult(r3, "UnitTestConversionBase", "fullUnitName", ar3, er3);

            string er4 = "ton-per-mile";
            string ar4 = cv.rawUnitName("ton-per-mile");
            bool r4 = (ar4 == er4 ? true : false);
            printResult(r4, "UnitTestConversionBase", "rawUnitName", ar4, er4);

            UBASE unit = cv.unit("unit", "UK", "ton-per-foot");
            bool r5 = unit.valid();
            string er5 = "true";
            string ar5 = bool_to_str(unit.valid());
            printResult(r5, "UnitTestConversionBase", "unit", ar5, er5);

            BaseSystem bs = cv.system("unit");
            bool r6 = bs.valid();
            string er6 = "true";
            string ar6 = bool_to_str(r6);
            printResult(r6, "UnitTestConversionBase", "system", ar6, er6);

            TypeGroup us = cv.typeGroup("linearDensity", "UK");
            bool r7 = !us.valid();
            string er7 = "false";
            string ar7= bool_to_str(us.valid());
            printResult(r7, "UnitTestConversionBase", "typeGroup", ar7, er7);

            List <string> l8 = cv.systemNames("linearDensity");
            bool r8 = (l8.Count == 0 ? true : false);
            string er8 = "0";
            string ar8 = l8.Count.ToString();
            printResult(r8, "UnitTestConversionBase", "systemNames", ar8, er8);

            List<string> l9 = cv.systemNames();
            bool r9 = (l9.Count == 0 ? true : false);
            string er9 = "0";
            string ar9 = l9.Count.ToString();
            printResult(r9, "UnitTestConversionBase", "systemNames", ar9, er9);

            List<string> l10 = cv.typeNames();
            bool r10 = (l10.Count == 0 ? true : false);
            string er10 = "0";
            string ar10 = l10.Count.ToString();
            printResult(r10, "UnitTestConversionBase", "typeNames", ar10, er10);

            List<string> l11 = cv.unitNames("linearDensity", "UK");
            bool r11 = (l11.Count == 0 ? true : false);
            string er11 = "0";
            string ar11 = l11.Count.ToString();
            printResult(r11, "UnitTestConversionBase", "unitNames", ar11, er11);

            List<string> ar12 = cv.unitNames();
            List<string> er12 = new List<string> {"SI[ton-per-kilometer]", "UK[t/1000-yd]",
                                                  "UK[t/ft]",              "UK[t/m]",
                                                  "UK[t/mi]",              "UK[t/yd]",
                                                  "UK[ton-per-1000-yards]","UK[ton-per-foot]",
                                                  "UK[ton-per-meter]",     "UK[ton-per-mile]",
                                                  "UK[ton-per-yard]",      "SI[t/km]"};
            bool r12 = compareList(ar12, er12);
            printResult(r12, "UnitTestConversionBase", "unitNames", listToString(ar12), listToString(er12));

            Console.WriteLine("");
        }
    }
}
// EOF
