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
// File UnitTestConvert.cs
//
// Unit test for Convert class. 
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
    /// Test Convert class.
    ///</summary>
    public class UnitTestConvert : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the 
        ///                              test results are written.</param>
        public UnitTestConvert(bool brief, string path) : base(brief, path)
        {
            openFile("UnitTestConvert.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestConvert");

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
            map.Add("linearDensity", new BaseSystem("linearDensity", unit, "1.0"));
            SingleSystem cv = new SingleSystem("linearDensity", map);

            UnitConversion.Convert cvt1 = new UnitConversion.Convert("Density", 
                                                                     "UK", "UK", 
                                                                     cv);
            UnitConversion.Convert cvt2 = new UnitConversion.Convert(cvt1);

            testConvert(cvt1, "Constructor");
            testConvert(cvt2, "Copy Constructor");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestConvert", ts);
        }

        ///<summary>
        /// Test Convert.
        ///</summary>
        /// <param><c>cvt</c>   (input)  Convert to test.</param>
        /// <param><c>label</c> (input)  identifying label for output.</param>

        private void testConvert(UnitConversion.Convert cvt, 
                                 string label)
        {
            Console.WriteLine(label);

            bool r0 = cvt.check();
            string er0 = "true";
            string ar0 = bool_to_str(r0);
            printResult(r0, "UnitTestConvert", "check", ar0, er0);

            string er1 = "Density";
            string ar1 = cvt.name();
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "UnitTestConvert", "name", ar1, er1);

            string er2 = "true";
            string ar2 = bool_to_str(cvt.valid());
            bool r2 = cvt.valid();
            printResult(r2, "UnitTestConvert", "valid", ar2, er2);

            string er3 = "UK[ton-per-yard]";
            string ar3 = cvt.fullUnitName("UK", "ton-per-yard");
            bool r3 = (ar3 == er3 ? true : false);
            printResult(r3, "UnitTestConvert", "fullUnitName", ar3, er3);

            string er4 = "ton-per-yard";
            string ar4 = cvt.rawUnitName("UK[ton-per-yard]");
            bool r4 = (ar4 == er4);
            printResult(r4, "UnitTestConvert", "rawUnitName", ar4, er4);

            List<string> ar5 = cvt.allSystemNames();
            List<string> er5 = new List<string> { "UK", "SI"};
            bool r5 = compareList(ar5, er5);
            printResult(r5, "UnitTestConvert", "allSystemNames", 
                              listToString(ar5), listToString(er5));

            List<string> ar6 = cvt.allUnitNames();
            List<string> er6 = new List<string> { "UK[ton-per-1000-yards]", 
                                                  "UK[t/1000-yd]", 
                                                  "UK[ton-per-mile]", 
                                                  "UK[t/mi]", 
                                                  "UK[ton-per-yard]", 
                                                  "UK[t/yd]", 
                                                  "UK[ton-per-foot]", 
                                                  "UK[t/ft]", 
                                                  "UK[ton-per-meter]", 
                                                  "UK[t/m]", 
                                                  "SI[ton-per-kilometer]", 
                                                  "SI[t/km]"};
            bool r6 = compareList(ar6, er6);
            printResult(r6, "UnitTestConvert", "allUnitNames", 
                            listToString(ar6), listToString(er6));

            string er7 = "UK";
            string ar7 = cvt.fromSystem();
            bool r7 = (ar7 == er7 ? true : false);
            printResult(r7, "UnitTestConvert", "fromSystem", ar7, er7);

            string er8 = "UK";
            string ar8 = cvt.toSystem();
            bool r8 = (ar8 == er8 ? true : false);
            printResult(r8, "UnitTestConvert", "toSystem", ar8, er8);

            cvt.fromSystem("SI");
            string er9 = "SI";
            string ar9 = cvt.fromSystem();
            bool r9 = (ar9 == er9 ? true : false);
            printResult(r9, "UnitTestConvert", "fromSystem", ar9, er9);
            cvt.fromSystem("UK");


            cvt.toSystem("SI");
            string er10 = "SI";
            string ar10 = cvt.toSystem();
            bool r10 = (ar10 == er10 ? true : false);
            printResult(r10, "UnitTestConvert", "toSystem", ar10, er10);
            cvt.toSystem("UK");

            List<string> ar11 = cvt.typeNames();
            List<string> er11 = new List<string> { "linearDensity" };
            bool r11 = compareList(ar11, er11);
            printResult(r11, "UnitTestConvert", "typeNames", 
                             listToString(ar11), listToString(er11));

            Console.WriteLine("");
         }
    }
}
// EOF
