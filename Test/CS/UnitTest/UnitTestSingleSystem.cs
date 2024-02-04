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
// File UnitTestSingleSystem.cs
//
// Unit test for SingleSystem class. 
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
    /// Test UniSystemBase class.
    /// </summary>
    public class UnitTestSingleSystem : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor
        /// <summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input) the path to the output folder where the 
        ///                             test results are written.</param>
        public UnitTestSingleSystem(bool brief, string path) : base(brief, path)
        {
            openFile("UnitTestSingleSystem.txt");
        }

        /// <summary>
        /// Run the tests; output results to screen and file.
        /// </summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestSingleSystem");

            SingleSystem usb0 = new SingleSystem();
            SingleSystem usb1 = new SingleSystem("force");

            Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();
            unit.Add("Imperial[kipf]",       new  UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[kip-force]",  new UBASE("Imperial",  "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[odl]",        new UBASE("Imperial",  "ouncedal",         8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[lbf]",        new UBASE("Imperial",  "pound-force",      4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[tondal]",     new UBASE("Imperial",  "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[tdl]",        new UBASE("Imperial",  "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[kgf]",            new UBASE("MKpS",      "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[kgp]",            new UBASE("MKpS",      "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[kgw]",            new UBASE("MKpS",      "kilogram-weight",  9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[pond]",           new UBASE("MKpS",      "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[p]",              new UBASE("MKpS",      "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("SI[newton]",           new UBASE("SI",        "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("SI[N]",                new UBASE("SI",        "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("UK[ounce-force]",      new UBASE("UK",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("UK[ozf]",              new UBASE("UK",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("UK[ton-force(long)]",  new UBASE("UK",        "ton-force(long)",  9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("US[ounce-force]",      new UBASE("US",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("US[ozf]",              new UBASE("US",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("US[ton-force(short)]", new UBASE("US",        "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0"));

            Dictionary<string, BaseSystem> map = new Dictionary<string, BaseSystem>();
            map.Add("force", new BaseSystem("force", unit, "1.0"));

            unit.Clear();
            unit.Add("a.u.[au-of-linear-momentum]",    new UBASE("a.u.", "au-of-linear-momentum",    1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0"));
            unit.Add("a.u.[aulm]",                     new UBASE("a.u.", "au-of-linear-momentum",    1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0"));
            unit.Add("cgs[bole]",                      new UBASE("cgs", "bole",                      1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
            unit.Add("cgs[gramcentimeter-per-second]", new UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
            unit.Add("cgs[gcm/sec]",                   new UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
            unit.Add("SI[newton-second]",              new UBASE("SI", "newton-second",              1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0"));
            unit.Add("SI[N-sec]",                      new UBASE("SI", "newton-second",              1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0"));
    
            map.Add("momentum", new BaseSystem("momentum", unit, "1.0"));
            SingleSystem usb2 = new SingleSystem("force", map);

            SingleSystem usb3 = new SingleSystem(usb2);
            //SingleSystem usb4 = usb2;

            Console.WriteLine("Default Constructor");
            printResult(!usb0.valid(), "UnitTestSingleSystem", 
                                       "Default Constructor", 
                                       bool_to_str(usb0.valid()), "false");
            Console.WriteLine("");

            Console.WriteLine("Name Constructor");
            printResult(usb1.valid(), "UnitTestSingleSystem", 
                                      "Name Constructor", 
                                      bool_to_str(usb1.valid()), "true");
            Console.WriteLine("");

            testSingleSystem(usb2, "Unit Constructor");
            testSingleSystem(usb3, "Copy Constructor");
            //testSingleSystem(usb4, "Assignment Operator");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestSingleSystem", ts);
        }

        /// <summary>
        /// Test a SingleSystem.
        /// <summary>
        /// <param><c>usb</c> (input)  SingleSystem to test.</param>
        /// <param><c>label</c> (input)  identifying label for output.</param>
        private void testSingleSystem(SingleSystem usb, string label) 
        {
            Console.WriteLine(label);

            TypeGroup us = usb.typeGroup("momentum", "cgs");
            List<string> ar1 = us.unitNames();
            List<string> er1 = new List<string> {"cgs[bole]", 
                                                 "cgs[gramcentimeter-per-second]", 
                                                 "cgs[gcm/sec]"};
            bool r1 = us.valid();
            printResult(r1, "UnitTestSingleSystem", "typeGroup, unitNames",
                            bool_to_str(us.valid()) + ", " + listToString(ar1), 
                            "true, " + listToString(er1));

            string er2 = "ton-per-mile";
            string ar2 = usb.rawUnitName("UK[ton-per-mile]");
            bool r2 = (ar2 == er2 ? true : false);
            printResult(r2, "UnitTestSingleSystem", "rawUnitName", ar2, er2);

            string er3 = "UK[ton-per-mile]";
            string ar3 = usb.fullUnitName("UK", "ton-per-mile");
            bool r3 = (ar3 == er3 ? true : false);
            printResult(r3, "UnitTestSingleSystem", "fullUnitName", ar3, er3);

            List<string> ar4 = usb.systemNames("momentum");
            List<string> er4 = new List<string> { "a.u.", "cgs","SI" };
            bool r4 = compareList(ar4, er4);
            printResult(r4, "UnitTestSingleSystem", "systemNames", 
                            listToString(ar4), listToString(er4));


            List<string> ar5 = usb.systemNames();
            List<string> er5 = new List<string> { "US", "UK", "Imperial", 
                                                  "MKpS", "a.u.", "cgs", "SI" };
            bool r5 = compareList(ar5, er5);
            printResult(r5, "UnitTestSingleSystem", "systemNames", 
                            listToString(ar5), listToString(er5));

            List<string> ar6 = usb.typeNames();
            List<string> er6 = new List<string> { "force", "momentum" };
            bool r6 = compareList(ar6, er6);
            printResult(r6, "UnitTestSingleSystem", "typeNames", 
                            listToString(ar6), listToString(er6));

            List<string> ar7 = usb.unitNames("force", "UK");
            List<string> er7 = new List<string> { "UK[ounce-force]", 
                                                  "UK[ozf]", 
                                                  "UK[ton-force(long)]" };
            bool r7 = compareList(ar7, er7);
            printResult(r7, "UnitTestSingleSystem", "unitNames", 
                            listToString(ar7), listToString(er7));

            List<string> ar8 = usb.unitNames();
            List<string> er8 = new List<string> {"Imperial[kipf]",
                                                 "Imperial[kip-force]",
                                                 "Imperial[odl]",
                                                 "Imperial[lbf]",
                                                 "Imperial[tondal]",
                                                 "Imperial[tdl]",
                                                 "MKpS[kgf]",
                                                 "MKpS[kgp]",
                                                 "MKpS[kgw]",
                                                 "MKpS[pond]",
                                                 "MKpS[p]",
                                                 "SI[newton]",
                                                 "SI[N]",
                                                 "UK[ounce-force]",
                                                 "UK[ozf]",
                                                 "UK[ton-force(long)]",
                                                 "US[ounce-force]",
                                                 "US[ozf]",
                                                 "US[ton-force(short)]",
                                                 "a.u.[au-of-linear-momentum]",
                                                 "a.u.[aulm]",
                                                 "cgs[bole]",
                                                 "cgs[gramcentimeter-per-second]",
                                                 "cgs[gcm/sec]",
                                                 "SI[newton-second]", 
                                                 "SI[N-sec]"};
            bool r8 = compareList(ar8, er8);
            printResult(r8, "UnitTestSingleSystem", "unitNames", 
                            listToString(ar8), listToString(er8));

            double ar9 = usb.convertUnit(1.0, "force", "force", "lbf", 
                                              "Imperial", "newton", "SI", false);
            double er9 = 4.448221615260500E+00;
            bool r9 = (ar9 == er9 ? true : false);
            printResult(r9, "UnitTestSingleSystem", "convertUnit", 
                            ar9.ToString("E15"), er9.ToString("E15"));

            Console.WriteLine("");
        }
    }
}
// EOF
