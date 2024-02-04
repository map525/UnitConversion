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
// File UnitTestSystemUnits.cs
//
// Unit test for SystemUnits class. 
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
    /// Test SystemUnits class.
    ///</summary>
    public class UnitTestSystemUnits : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the
        ///                              test results are written.</param>
        public UnitTestSystemUnits(bool brief, string path) : base(brief, path)
       {
            openFile("UnitTestSystemUnits.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestSystemUnits");

            SystemUnits ubs0 = new SystemUnits();
            SystemUnits ubs1 = new SystemUnits("force");

            Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
            Dictionary<string, UBASE> area   = new Dictionary<string, UBASE>();
            Dictionary<string, UBASE> mass   = new Dictionary<string, UBASE>();
            Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
            Dictionary<string, UBASE> dry    = new Dictionary<string, UBASE>();

            length.Add("foot",             new UBASE("UK_US_Avdp", "foot",               3.048000000000000E-01, "m",  "L",  "1.0"));
            length.Add("foot(UK-old)",     new UBASE("UK_US_Avdp", "foot(UK-old)",       3.047997347632710E-01, "m",  "L",  "1.0"));
            length.Add("foot(US-survey)",  new UBASE("UK_US_Avdp", "foot(US-survey)",    3.048006096012190E-01, "m",  "L",  "1.0"));
            length.Add("vara(US-Texas)",   new UBASE("UK_US_Avdp", "vara(US-Texas)",     8.466666666666670E-01, "m",  "L",  "1.0"));
            area.Add("square-foot",        new UBASE("UK_US_Avdp", "square-foot",        9.290304000000000E-02, "m2", "L2", "1.0"));
            area.Add("vara(US-Texas)",     new UBASE("UK_US_Avdp", "vara(US-Texas)",     7.168601466640000E+02, "m2", "L2", "1.0"));
            mass.Add("pound",              new UBASE("UK_US_Avdp", "pound",              4.535923700000000E-01, "kg", "M",  "1.0"));
            mass.Add("pound(UK-Imperial)", new UBASE("UK_US_Avdp", "pound(UK-Imperial)", 4.535923380000000E-01, "kg", "M",  "1.0"));
            mass.Add("pound(apothecary)",  new UBASE("UK_US_Avdp", "pound(apothecary)",  3.732417216000000E-01, "kg", "M",  "1.0"));
            liquid.Add("gallon(UK)",       new UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3", "L3", "1.0"));
            liquid.Add("gallon(US)",       new UBASE("UK_US_Avdp", "gallon(US)",         3.785411784000000E-03, "m3", "L3", "1.0"));
            liquid.Add("gallon(UK-beer)",  new UBASE("UK_US_Avdp", "gallon(UK-beer)",    4.621152048000000E-03, "m3", "L3", "1.0"));
            liquid.Add("liter(old)",       new UBASE("UK_US_Avdp", "liter(old)",         1.000002800100000E-03, "m3", "L3", "1.0"));
            dry.Add("gallon(UK)",          new UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3", "L3", "1.0"));
            dry.Add("gallon(US)",          new UBASE("UK_US_Avdp", "gallon(US)",         4.404883770860000E-03, "m3", "L3", "1.0"));
            Dictionary<string, BaseSystem> map = new Dictionary<string, BaseSystem>();
            map.Add("UK_US_Avdp", new BaseSystem("UK_US_Avdp", length, area, mass, liquid, dry, "1.0"));

            length.Clear();
            area.Clear();
            mass.Clear();
            liquid.Clear();
            dry.Clear();

            length.Add("fuss",            new UBASE("Swiss", "fuss",              3.000000000000000E-01, "m",  "L",  "1.0"));
            length.Add("douzieme",        new UBASE("Swiss", "douzieme",          1.880000000000000E-04, "m",  "L",  "1.0"));
            area.Add("arpent",            new UBASE("Swiss", "arpent",            3.600000000000000E+01, "m2", "L2", "1.0"));
            mass.Add("livre",             new UBASE("Swiss", "livre",             5.000000000000000E-01, "kg", "M",  "1.0"));
            mass.Add("livre(apothecary)", new UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg", "M",  "1.0"));
            liquid.Add("pot",             new UBASE("Swiss", "pot",               1.500000000000000E-03, "m3", "L3", "1.0"));
            dry.Add("emine",              new UBASE("Swiss", "emine",             1.500000000000000E-02, "m3", "L3", "1.0"));
            map.Add("Swiss",              new BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0"));
            SystemUnits ubs2 = new SystemUnits("SystemUnits", map);

            SystemUnits ubs3 = new SystemUnits(ubs2);
            //SystemUnits ubs4 = ubs2;

            Console.WriteLine("Default Constructor");
            printResult(!ubs0.valid(), "UnitTestSystemUnits", "Default Constructor", 
                                       bool_to_str(ubs0.valid()), "false");
            Console.WriteLine("");

            Console.WriteLine("Name Constructor");
            printResult(ubs1.valid(), "UnitTestSystemUnits", "Name Constructor",
                                      bool_to_str(ubs1.valid()), "true");
            Console.WriteLine("");

            testSystemUnits(ubs2, "Unit Constructor");
            testSystemUnits(ubs3, "Copy Constructor");
            //testSystemUnits(ubs4, "Assignment Operator");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestSystemUnits", ts);
        }

        ///<summary>
        /// Test SystemUnits.
        ///</summary>
        /// <param><c>ubs</c> (input)  SystemUnits to test.</param>
        /// <param><c>label</c> (input)  identifying label for output.</param>

        private void testSystemUnits(SystemUnits ubs, 
                                         string label)
        {
            Console.WriteLine(label);

            string ar0 = ubs.fullUnitName("UK", "Liquid[firkin]");
            string er0 = "firkin";
            bool r0 = (ar0 == er0 ? true : false);
            printResult(r0, "UnitTestSystemUnits", "fullUnitName", ar0, er0);

            string ar1 = ubs.rawUnitName("pound(UK-Imperial)");
            string er1 = "pound(UK-Imperial)";
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "UnitTestSystemUnits", "rawUnitName", ar1, er1);

            List<string> ar3 = ubs.systemNames("Swiss");
            List<string> er3 = new List<string> { "UK_US_Avdp", "Swiss" };
            bool r3 = compareList(ar3, er3);
            printResult(r3, "UnitTestSystemUnits", "systemNames", 
                            bool_to_str(ubs.valid()) + ", " + listToString(ar3), 
                            listToString(er3));

            List<string> ar4 = ubs.systemNames();
            List<string> er4 = new List<string> { "UK_US_Avdp", "Swiss" };
            bool r4 = compareList(ar4, er4);
            printResult(r4, "UnitTestSystemUnits", "systemNames", 
                            listToString(ar4), listToString(er4));


            List<string> ar5 = ubs.typeNames();
            List<string> er5 = new List<string> { "Length","Area","Mass",
                                                 "Liquid","Dry", "Volume"};
            bool r5 = compareList(ar5, er5);
            printResult(r5, "UnitTestSystemUnits", "typeNames", 
                            listToString(ar5), listToString(er5));


            List<string> ar6 = ubs.unitNames("Length", "Swiss");
            List<string> er6 = new List<string> { "Length[fuss]", "Length[douzieme]" };
            bool r6 = compareList(ar6, er6);
            printResult(r6, "UnitTestSystemUnits", "unitNames", 
                            listToString(ar6), listToString(er6));

            List<string> ar7 = ubs.unitNames();
            List<string> er7 = new List<string> {"Length[foot]",            "Length[foot(UK-old)]",
                                                 "Length[foot(US-survey)]", "Length[vara(US-Texas)]",
                                                 "Area[square-foot]",       "Area[vara(US-Texas)]",
                                                 "Mass[pound]",             "Mass[pound(UK-Imperial)]",
                                                 "Mass[pound(apothecary)]", "Liquid[gallon(UK)]",
                                                 "Liquid[gallon(US)]",      "Liquid[gallon(UK-beer)]",
                                                 "Liquid[liter(old)]",      "Dry[gallon(UK)]",
                                                 "Dry[gallon(US)]",         "Length[fuss]",
                                                 "Length[douzieme]",        "Area[arpent]",
                                                 "Mass[livre]",             "Mass[livre(apothecary)]",
                                                 "Liquid[pot]",             "Dry[emine]"};
            bool r7 = compareList(ar7, er7);
            printResult(r7, "UnitTestSystemUnits", "unitNames", 
                            listToString(ar7), listToString(er7));

            double ar8 = ubs.value("Liquid", "UK_US_Avdp", "gallon(UK)");
            double er8 = 4.546092000000000E-03;
            bool r8 = (ar8 == er8 ? true : false);
            printResult(r8, "UnitTestSingleSystem", "value",
                            ar8.ToString("E15"), er8.ToString("E15"));

            Console.WriteLine("");
        }
    }
}
// EOF
