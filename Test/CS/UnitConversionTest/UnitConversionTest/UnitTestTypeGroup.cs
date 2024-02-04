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
// File UnitTestTypeGroup.cs
//
// Unit test for TypeGroup class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversionTestCS
{
    using System;
    using System.Collections.Generic;
    using UnitConversion;

    /// <summary>
    /// Test TypeGroup class.
    /// </summary>
    public class UnitTestTypeGroup : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where 
        ///                              the test results are written.</param>
        public UnitTestTypeGroup(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestTypeGroup.txt");
        }

        /// <summary>
        /// Run the tests; output results to screen and file.
        /// </summary>
       protected override void runOut()
       {
            DateTime start = DateTime.Now;
            printHeader("UnitTestTypeGroup");

            TypeGroup us0 = new TypeGroup();
            TypeGroup us5 = new TypeGroup("Volume","1.0");

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
            TypeGroup us1 = new TypeGroup("linearDensity", unit,"1.0");

            TypeGroup us2 = new TypeGroup(us1);
            // TypeGroup us3 = us1;

            Console.WriteLine("Default Constructor");
            printResult(!us0.valid(), "UnitTestTypeGroup", 
                                      "Default Constructor", 
                                      bool_to_str(us0.valid()), "false");
            Console.WriteLine("");

            Console.WriteLine("Empty Constructor");
            printResult(us5.valid(), "UnitTestTypeGroup", "Empty Constructor", 
                                     bool_to_str(us0.valid()) + ", " + us5.name(), 
                                    "true, Volume");
            Console.WriteLine("");

            testTypeGroup(us1, "Constructor");
            testTypeGroup(us2, "Copy Constructor");
            //testTypeGroup(us3, "Assignment Operator");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestTypeGroup", ts);
        }

        /// <summary>
        /// Test TypeGroup.
        /// </summary>
        /// <param><c>usys</c>  (input)  TypeGroup to test.</param>
        /// <param><c>label</c> (input)  identifying label for output.</param>
        private void testTypeGroup(TypeGroup usys, string label)
        {
             Console.WriteLine(label);

             printResult(usys.check(), "UnitTestTypeGroup", "check", 
                                       bool_to_str(usys.check()), "true");
             printResult(usys.valid(), "UnitTestTypeGroup", "valid", 
                                       bool_to_str(usys.valid()), "true");

             string er1 = "linearDensity";
             string ar1 = usys.name();
             bool r1 = (ar1 == er1 ? true : false);
             printResult(r1, "UnitTestTypeGroup", "name", ar1, er1);

             string er2 = "1.0";
             string ar2 = usys.version();
             bool r2 = (ar2 == er2 ? true : false);
             printResult(r2, "UnitTestTypeGroup", "version", ar2, er2);

             UBASE unit = usys.unit("UK[ton-per-foot]");
             bool r3 = (unit.valid() && unit.name() == "ton-per-foot" 
                                     && unit.type() == "M/L" 
                                     && unit.version() == "1.0"
                                     && unit.offset().asDouble() == 0 
                                     && unit.value().asDouble() == 3.333487233595800E+03
                                     && unit.system() == "UK" 
                                     && unit.unit() == "kg/m" ? true : false);
             string ar3 = unit.toString();
             string er3a = "type: M/L, system: UK,  name: UK[ton-per-foot], ";
             string er3b = "value: 3.333487233595800E+03, offset: 0, ";
             string er3c = "unit: kg/m, version: 1.0, valid: true";
             string er3 = er3a + er3b + er3c;
             printResult(r3, "UnitTestTypeGroup", "unit", ar3, er3);

             UBASE newUnit = new UBASE("Imperial", "pound-per-yard", 
                                        4.960546478565180E-01, 
                                        "kg/m", "M/L", "1.0");
             bool ans1 = usys.addUnit("Imperial[pound-per-yard]", newUnit);
             UBASE addUnit = usys.unit("Imperial[pound-per-yard]");
             bool r4 = (ans1 && addUnit.valid() ? true : false);
             string er4 = "true, true";
             string ar4 = bool_to_str(ans1) + ", " + bool_to_str(addUnit.valid());
             printResult(r4, "UnitTestTypeGroup", "addUnit", ar4, er4);


             bool result = usys.removeUnit("Imperial[pound-per-yard]");
             UBASE removeUnit = usys.unit("Imperial[pound-per-yard]");
             bool r5 = (result && !removeUnit.valid() ? true : false);
             string er5 = "true, false";
             string ar5 = bool_to_str(result) + ", " + bool_to_str(!removeUnit.valid());
             printResult(r5, "UnitTestTypeGroup", "removeUnit", ar5, er5);

             List<string> er6 = new List<string> { "UK","SI" };
             List<string> ar6 = usys.systemNames();
             bool r6 = compareList(er6, ar6);
             printResult(r6, "UnitTestTypeGroup", "systemNames", 
                             listToString(ar6), listToString(er6));

             List<string> er7 = new List<string> {"UK[ton-per-1000-yards]", 
                                                  "UK[t/1000-yd]", 
                                                  "UK[ton-per-mile]", 
                                                  "UK[t/mi]", "UK[ton-per-yard]", 
                                                  "UK[t/yd]", "UK[ton-per-foot]", 
                                                  "UK[t/ft]", "UK[ton-per-meter]", 
                                                  "UK[t/m]", "SI[ton-per-kilometer]", 
                                                  "SI[t/km]"};
             List<string> ar7 = usys.unitNames();
             bool r7 = compareList(er7, ar7);
             printResult(r7, "UnitTestTypeGroup", "unitNames", 
                             listToString(ar7), listToString(er7));

            Console.WriteLine("");
        }
    }
}
// EOF
