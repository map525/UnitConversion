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
// File UnitTestCanonicalSystem.cs
//
// Unit test for CanonicalSystem class. 
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
    /// Test CanonicalSystem class.
    ///</summary>
    public class UnitTestCanonicalSystem : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the
        ///                              test results are written.</param>
        public UnitTestCanonicalSystem(bool brief, string path) : base(brief, path)
       {
            openFile("UnitTestCanonicalSystem.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestCanonicalSystem");

            CanonicalSystem ubs0 = new CanonicalSystem();
            CanonicalSystem ubs1 = new CanonicalSystem("force");

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
            Dictionary<string, BaseSystem> map = new Dictionary<string, BaseSystem>();
            map.Add("US", new BaseSystem("US", length, area, mass, liquid, dry, "1.0"));

            length.Clear();
            area.Clear();
            mass.Clear();
            liquid.Clear();
            dry.Clear();
            length.Add("nmi",    new UBASE("UK", "nmi",     1.853184000000000E+03, "m",  "L",  "1.0"));
            length.Add("pace",   new UBASE("UK", "pace",    7.620000000000000E-01, "m",  "L",  "1.0"));
            length.Add("palm",   new UBASE("UK", "palm",    7.620000000000000E-02, "m",  "L",  "1.0"));
            length.Add("point",  new UBASE("UK", "point",   1.763888888888890E-04, "m",  "L",  "1.0"));
            length.Add("rope",   new UBASE("UK", "rope",    6.096000000000000E+00, "m",  "L",  "1.0"));
            area.Add("rood",     new UBASE("UK", "rood",    1.011714105600000E+03, "m2", "L2", "1.0"));
            area.Add("shed",     new UBASE("UK", "shed",    1.000000000000000E-52, "m2", "L2", "1.0"));
            area.Add("skein",    new UBASE("UK", "skein",   1.204023398400000E+04, "m2", "L2", "1.0"));
            area.Add("hundred",  new UBASE("UK", "hundred", 4.856227706880000E+05, "m2", "L2", "1.0"));
            mass.Add("slug",     new UBASE("UK", "slug",    1.459390293720640E+01, "kg", "M",  "1.0"));
            mass.Add("stone",    new UBASE("UK", "stone",   6.350293180000000E+00, "kg", "M",  "1.0"));
            mass.Add("truss",    new UBASE("UK", "truss",   1.632932532000000E+01, "kg", "M",  "1.0"));
            mass.Add("tub",      new UBASE("UK", "tub",     3.810175908000000E+01, "kg", "M",  "1.0"));
            liquid.Add("butt",   new UBASE("UK", "butt",    4.909779360000000E-01, "m3", "L3", "1.0"));
            liquid.Add("barrel", new UBASE("UK", "barrel",  1.663614737280000E-01, "m3", "L3", "1.0"));
            liquid.Add("firkin", new UBASE("UK", "firkin",  4.091482800000000E-02, "m3", "L3", "1.0"));
            dry.Add("deal",      new UBASE("UK", "deal",    2.477724076800000E-01, "m3", "L3", "1.0"));
            dry.Add("amber",     new UBASE("UK", "amber",   1.454749440000000E-01, "m3", "L3", "1.0"));
            dry.Add("peck",      new UBASE("UK", "peck",    9.092184000000000E-03, "m3", "L3", "1.0"));
            dry.Add("bag",       new UBASE("UK", "bag",     1.091062080000000E-01, "m3", "L3", "1.0"));
            map.Add("UK",        new BaseSystem("UK", length, area, mass, liquid, dry, "1.0"));
            CanonicalSystem ubs2 = new CanonicalSystem("Imperial", map);

            CanonicalSystem ubs3 = new CanonicalSystem(ubs2);
            //CanonicalSystem ubs4 = ubs2;

            Console.WriteLine("Default Constructor");
            printResult(!ubs0.valid(), "UnitTestCanonicalSystem", "Default Constructor", 
                                       bool_to_str(ubs0.valid()), "false");
            Console.WriteLine("");

            Console.WriteLine("Name Constructor");
            printResult(ubs1.valid(), "UnitTestCanonicalSystem", "Name Constructor",
                                      bool_to_str(ubs1.valid()), "true");
            Console.WriteLine("");

            testCanonicalSystem(ubs2, "Unit Constructor");
            testCanonicalSystem(ubs3, "Copy Constructor");
            //testCanonicalSystem(ubs4, "Assignment Operator");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestCanonicalSystem", ts);
        }

        ///<summary>
        /// Test CanonicalSystem.
        ///</summary>
        /// <param><c>ubs</c> (input)  CanonicalSystem to test.</param>
        /// <param><c>label</c> (input)  identifying label for output.</param>

        private void testCanonicalSystem(CanonicalSystem ubs, 
                                         string label)
        {
            Console.WriteLine(label);

            string ar0 = ubs.fullUnitName("UK", "liquid[firkin]");
            string er0 = "firkin";
            bool r0 = (ar0 == er0 ? true : false);
            printResult(r0, "UnitTestCanonicalSystem", "fullUnitName", ar0, er0);

            string er1 = "true, false, true, true";
            bool r1 = (ubs.validateType("length", "length") 
                       && !ubs.validateType("length", "area") 
                       && ubs.validateType("liquid", "dry") 
                       && ubs.validateType("dry", "liquid") ? true : false);
            string ar1 = bool_to_str(ubs.validateType("length", "length")) 
                                     + ", " + bool_to_str(ubs.validateType("length", "area")) 
                                     + ", " + bool_to_str(ubs.validateType("liquid", "dry")) 
                                     + ", " + bool_to_str(ubs.validateType("dry", "liquid"));
            printResult(r1, "UnitTestCanonicalSystem", "validateType", ar1, er1);

            TypeGroup us = ubs.typeGroup("area", "UK");
            List<string> ar2 = us.unitNames();
            List<string> er2 = new List<string> { "rood", "shed", "skein", "hundred" };
            bool r2 = (us.valid() && compareList(ar2, er2) ? true : false);
            printResult(r2, "UnitTestCanonicalSystem", "typeGroup", 
                            bool_to_str(us.valid()) + ", " + listToString(ar2), 
                            "true, " + listToString(er2));


            List<string> ar3 = ubs.systemNames("mass");
            List<string> er3 = new List<string> { "US","UK" };
            bool r3 = compareList(ar3, er3);
            printResult(r3, "UnitTestCanonicalSystem", "systemNames", 
                            bool_to_str(us.valid()) + ", " + listToString(ar3), 
                            listToString(er3));


            List<string> ar4 = ubs.systemNames();
            List<string> er4 = new List<string> { "US","UK"};
            bool r4 = compareList(ar4, er4);
            printResult(r4, "UnitTestCanonicalSystem", "systemNames", 
                            listToString(ar4), listToString(er4));


            List<string> ar5 = ubs.typeNames();
            List<string> er5 = new List<string> { "length","area","mass",
                                                 "liquid","dry", "volume"};
            bool r5 = compareList(ar5, er5);
            printResult(r5, "UnitTestCanonicalSystem", "typeNames", 
                            listToString(ar5), listToString(er5));


            List<string> ar6 = ubs.unitNames("dry", "UK");
            List<string> er6 = new List<string> { "dry[deal]","dry[amber]",
                                                  "dry[peck]","dry[bag]" };
            bool r6 = compareList(ar6, er6);
            printResult(r6, "UnitTestCanonicalSystem", "unitNames", 
                            listToString(ar6), listToString(er6));

            List<string> ar7 = ubs.unitNames();
            List<string> er7 = new List<string> {"area[hundred]",       "area[rood]", 
                                                 "area[shed]",          "area[skein]", 
                                                 "dry[amber]",          "dry[bag]", 
                                                 "dry[deal]",           "dry[peck]",
                                                 "length[nmi]",         "length[pace]", 
                                                 "length[palm]",        "length[point]",
                                                 "length[rope]",        "liquid[barrel]", 
                                                 "liquid[butt]",        "liquid[firkin]", 
                                                 "mass[slug]",          "mass[stone]", 
                                                 "mass[truss]",         "mass[tub]", 
                                                 "area[acre]",          "area[square-foot]",
                                                 "area[square-inch]",   "area[square-mile]",
                                                 "area[square-yard]",   "dry[bushel]", 
                                                 "dry[cubic-feet]",     "dry[cubic-in]", 
                                                 "dry[cubic-yard]",     "length[foot]", 
                                                 "length[furlong]",     "length[inch]", 
                                                 "length[league]",      "length[mile]",
                                                 "length[yard]",        "liquid[cup]", 
                                                 "liquid[gallon]",      "liquid[quart]", 
                                                 "mass[hundredweight]", "mass[ounce]",
                                                 "mass[pound]"};
            bool r7 = compareList(ar7, er7);
            printResult(r7, "UnitTestCanonicalSystem", "unitNames", 
                            listToString(ar7), listToString(er7));


            double ar8 = ubs.convertUnit(1.0, "length", "length", "foot", 
                                              "US", "pace", "UK", false);
            double er8 = 0.4;
            bool r8 = (ar8 == er8 ? true : false);
            printResult(r8, "UnitTestCanonicalSystem", "convertUnit", 
                            ar8.ToString("E15"), er8.ToString("E15"));

            Console.WriteLine("");
        }
    }
}
// EOF
