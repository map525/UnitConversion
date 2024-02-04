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
// File UnitTestBaseSystem.cs
//
// Unit test for BaseSystem class. 
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
    /// Test BaseSystem class.
    ///</summary>
    public class UnitTestBaseSystem : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where 
        ///                              the test results are written.</param>
        public UnitTestBaseSystem(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestBaseSystem.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
             DateTime start = DateTime.Now;
             printHeader("UnitTestBaseSystem");

             BaseSystem bs0 = new BaseSystem();

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
             BaseSystem bs1 = new BaseSystem("linearDensity", unit, "1.0");

             Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
             Dictionary<string, UBASE> area   = new Dictionary<string, UBASE>();
             Dictionary<string, UBASE> mass   = new Dictionary<string, UBASE>();
             Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
             Dictionary<string, UBASE> dry    = new Dictionary<string, UBASE>();
 
             length.Add("foot",        new UBASE("US", "foot",          3.048000000000000E-01, "m",  "L",  "1.0"));
             length.Add("furlong",     new UBASE("US", "furlong",       2.011680000000000E+02, "m",  "L",  "1.0"));
             length.Add("inch",        new UBASE("US", "inch",          2.540000000000000E-02, "m",  "L",  "1.0"));
             length.Add("league",      new UBASE("US", "league",        5.559552000000000E+03, "m",  "L",  "1.0"));
             length.Add("mile",        new UBASE("US", "mile",          1.609344000000000E+03, "m",  "L",  "1.0"));
             length.Add("yard",        new UBASE("US", "yard",          9.144000000000000E-01, "m",  "L",  "1.0"));
             area.Add("acre",          new UBASE("US", "acre",          4.046856422400000E+03, "m2", "L2", "1.0"));
             area.Add("square-inch",   new UBASE("US", "square-inch",   6.451600000000000E-04, "m2", "L2", "1.0"));
             area.Add("square-foot",   new UBASE("US", "square-foot",   9.290304000000000E-02, "m2", "L2", "1.0"));
             area.Add("square-mile",   new UBASE("US", "square-mile",   2.589988110336000E+06, "m2", "L2", "1.0"));
             area.Add("square-yard",   new UBASE("US", "square-yard",   8.361273600000000E-01, "m2", "L2", "1.0"));
             mass.Add("hundredweight", new UBASE("US", "hundredweight", 5.080234544000000E+01, "kg", "M",  "1.0"));
             mass.Add("ounce",         new UBASE("US", "ounce",         2.834952312500000E-02, "kg", "M",  "1.0"));
             mass.Add("pound",         new UBASE("US", "pound",         4.535923700000000E-01, "kg", "M",  "1.0"));
             liquid.Add("cup",         new UBASE("US", "cup",           2.365882365000000E-04, "m3", "L3", "1.0"));
             liquid.Add("gallon",      new UBASE("US", "gallon",        3.785411784000000E-03, "m3", "L3", "1.0"));
             liquid.Add("quart",       new UBASE("US", "quart",         9.463529460000000E-04, "m3", "L3", "1.0"));
             dry.Add("bushel",         new UBASE("US", "bushel",        3.523907016688000E-02, "m3", "L3", "1.0"));
             dry.Add("cubic-in",       new UBASE("US", "cubic-in",      1.638706400000000E-05, "m3", "L3", "1.0"));
             dry.Add("cubic-feet",     new UBASE("US", "cubic-feet",    2.831684659200000E-02, "m3", "L3", "1.0"));
             dry.Add("cubic-yard",     new UBASE("US", "cubic-yard",    7.645548579840000E-01, "m3", "L3", "1.0"));
             BaseSystem bs2 = new BaseSystem("US", length, area, mass, liquid, dry, "1.0");

            BaseSystem bs3 = new BaseSystem(bs2);
            //BaseSystem bs4 = bs1;

            Console.WriteLine("Default Constructor");
            printResult(!bs0.valid(), "UnitTestBaseSystem", 
                                       "Default Constructor", 
                                       bool_to_str(bs0.valid()), "false");
            Console.WriteLine("");

            testBaseSystem(bs1, "Unit Constructor", true);
            testBaseSystem(bs2, "Length, area, mass, liquid, dry Constructor",
                                false);
            testBaseSystem(bs3, "Copy Constructor With length, area, mass, liquid, dry",
                                  false);
            //testBaseSystem(bs4, "Assignment Operator With Unit", true, out);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestBaseSystem", ts);
        }

        ///<summary>
        /// Test a BaseSystem.
        ///<summary>
        /// <param><c> bsys</c>      (input) BaseSystem to test.</param>
        /// <param><c>label</c>      (input) identifying label for 
        ///                                  output.</param>
        /// <param><c>isUnit</c>     (input) true if BaseSystem contains a 
        ///                                  single unit.</param>
        private void testBaseSystem(BaseSystem bsys, 
                                    string label, 
                                    bool isUnit)
        {
             Console.WriteLine(label);

            bool r1 = bsys.check();
            string er1 = "true";
            string ar1 = bool_to_str(r1);
            printResult(r1, "UnitTestBaseSystem", "check", ar1, er1);

            string er2 = (isUnit ? "linearDensity" : "US");
            string ar2 = bsys.name();
            bool r2 = (ar2 == er2 ? true : false);
            printResult(r2, "UnitTestBaseSystem", "name", ar2, er2);

            bool r3 = bsys.valid();
            string er3 = "true";
            string ar3 = bool_to_str(r3);
            printResult(r3, "UnitTestBaseSystem", "valid", ar3, er3);

            string er4 = "1.0";
            string ar4 = bsys.version();
            bool r4 = (ar4 == er4 ? true : false);
            printResult(r4, "UnitTestBaseSystem", "version", ar4, er4);

            if (isUnit)
            {
                UBASE unit = bsys.unit("unit", "UK[ton-per-foot]");
                bool r5 = (unit.valid() && unit.name() == "ton-per-foot" 
                                        && unit.type() == "M/L"  
                                        && unit.version() == "1.0"
                                        && unit.offset().asDouble() == 0 
                                        && unit.value().asDouble() == 3.333487233595800E+03
                                        && unit.system() == "UK" 
                                        && unit.unit() == "kg/m" ? true : false);

                string ar5  = unit.toString();
                string er5a = "type: M/L, system: UK, name: UK[ton-per-foot], ";
                string er5b = "value: 3.333487233595800E+03, offset: 0.000000, ";
                string er5c = "unit: kg/m, version: 1.0, valid: true";
                string er5  = er5a + er5b + er5c;
                printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5);


                UBASE newUnit = new UBASE("Imperial", "pound-per-yard", 
                                           4.960546478565180E-01, "kg/m", 
                                           "M/L", "1.0");
                bool ans = bsys.addUnit("unit", "Imperial[pound-per-yard]", 
                                        newUnit);
                UBASE addUnit = bsys.unit("unit", "Imperial[pound-per-yard]");
                bool r6 = (ans && addUnit.valid() ? true : false);
                string ar6 = bool_to_str(ans) + ", " + bool_to_str(addUnit.valid());
                string er6 = "true, true";
                printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6);

                bool result = bsys.removeUnit("unit", "Imperial[pound-per-yard]");
                UBASE removeUnit = bsys.unit("unit", "Imperial[pound-per-yard]");
                bool r7 = (result && !removeUnit.valid() ? true : false);
                string ar7 = bool_to_str(result) + ", " + bool_to_str(removeUnit.valid());
                string er7 = "true, false";
                printResult(r7, "UnitTestBaseSystem", "removeUnit", ar7, er7);


                List<string> er8 = new List<string> { "unit" };
                List<string> ar8 = bsys.typeNames();
                bool r8 = compareList(er8, ar8);
                printResult(r8, "UnitTestBaseSystem", "typeNames", 
                                listToString(ar8), listToString(er8));


                List<string> er9 = new List<string> { "UK","SI" };
                List<string> ar9 = bsys.systemNames("unit");
                bool r9 = compareList(er9, ar9);
                printResult(r9, "UnitTestBaseSystem", "systemNames", 
                                listToString(ar9), listToString(er9));

                List<string> er10 = new List<string>{"UK[ton-per-1000-yards]", 
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
                List<string> ar10 = bsys.unitNames("unit");
                bool r10 = compareList(er10, ar10);
                printResult(r10, "UnitTestBaseSystem", "unitNames", 
                                 listToString(ar10), listToString(er10));

                TypeGroup us = bsys.typeGroup("unit");
                string er11 = "true, linearDensity";
                string ar11 = bool_to_str(us.valid()) + ", " + us.name();
                bool r11 = (us.valid() && us.name() == "linearDensity" ? true : false);
                printResult(r11, "UnitTestBaseSystem", "typeGroup", ar11, er11);
            }
            else
            {
                UBASE unit = bsys.unit("Mass", "pound");
                bool r5 = (unit.valid() && unit.name() == "pound" 
                                        && unit.type() == "M" 
                                        && unit.version() == "1.0"
                                        && unit.offset().asDouble() == 0 
                                        && unit.value().asDouble() == 4.535923700000000E-01
                                        && unit.system() == "US" 
                                        && unit.unit() == "kg" ? true : false);
                string ar5 = unit.toString();
                string er5a = "type: M, system: US, name: pound, ";
                string er5b = "value: 4.535923700000000E-01, offset: 0.000000, ";
                string er5c = "unit: kg, version: 1.0, valid: true";
                string er5 = er5a + er5b + er5c;
                printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5);

                UBASE newUnit = new UBASE("US", "pint", 4.731764730000000E-04, 
                                          "m3", "L3", "1.0");
                bool ans = bsys.addUnit("Liquid", "pint", newUnit);
                UBASE addUnit = bsys.unit("Liquid", "pint");
                bool r6 = (ans && addUnit.valid() ? true : false);
                string ar6 = bool_to_str(ans) + ", " + bool_to_str(addUnit.valid());
                string er6 = "true, true";
                printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6);

                bool result = bsys.removeUnit("Liquid", "pint");
                UBASE removeUnit = bsys.unit("Liquid", "pint");
                bool r7 = (result && !removeUnit.valid() ? true : false);
                string ar7 = bool_to_str(result) + ", " + bool_to_str(removeUnit.valid());
                string er7 = "true, false";
                printResult(r7, "UnitTestBaseSystem", "removeUnit", ar7, er7);

                List<string> er8 = new List<string> { "Length","Area","Mass",
                                                      "Liquid","Dry", "Volume"};
                List<string> ar8 = bsys.typeNames();
                bool r8 = compareList(er8, ar8);
                printResult(r8, "UnitTestBaseSystem", "typeNames", 
                                 listToString(ar8), listToString(er8));

                List<string> er9 = new List<string> { "US" };
                List<string> ar9 = bsys.systemNames("Dry");
                bool r9 = compareList(er9, ar9);
                printResult(r9, "UnitTestBaseSystem", "systemNames", 
                                listToString(ar9), listToString(er9));

                List<string> er10 = new List<string> {"acre",
                                                      "square-inch",
                                                      "square-foot",
                                                      "square-mile",
                                                      "square-yard"};
                List<string> ar10 = bsys.unitNames("Area");
                bool r10 = compareList(er10, ar10);
                printResult(r10, "UnitTestBaseSystem", "unitNames", 
                                  listToString(ar10), listToString(er10));

                TypeGroup us = bsys.typeGroup("Length");
                string er11 = "true, Length";
                string ar11 = bool_to_str(us.valid()) + ", " + us.name();
                bool r11 = (us.valid() && us.name() == "Length" ? true : false);
                printResult(r11, "UnitTestBaseSystem", "typeGroup", ar11, er11);
            }

            Console.WriteLine("");
        }
    }
}
// EOF
