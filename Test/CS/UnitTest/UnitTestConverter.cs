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
// File UnitTestConverter.cs
//
// Unit test for Converter class. 
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
    /// Test Converter class.
    ///</summary>
    public class UnitTestConverter : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the 
        ///                              test results are written.</param>
        public UnitTestConverter(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestConverter.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestConverter");

            Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();
            unit.Add("Imperial[kipf]",       new UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[kip-force]",  new UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[odl]",        new UBASE("Imperial", "ouncedal",         8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[lbf]",        new UBASE("Imperial", "pound-force",      4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[tondal]",     new UBASE("Imperial", "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("Imperial[tdl]",        new UBASE("Imperial", "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[kgf]",            new UBASE("MKpS",     "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[kgp]",            new UBASE("MKpS",     "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[kgw]",            new UBASE("MKpS",     "kilogram-weight",  9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[pond]",           new UBASE("MKpS",     "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("MKpS[p]",              new UBASE("MKpS",     "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("SI[newton]",           new UBASE("SI",       "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("SI[N]",                new UBASE("SI",       "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("UK[ounce-force]",      new UBASE("UK",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("UK[ozf]",              new UBASE("UK",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("UK[ton-force(long)]",  new UBASE("UK",       "ton-force(long)",  9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("US[ounce-force]",      new UBASE("US",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("US[ozf]",              new UBASE("US",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
            unit.Add("US[ton-force(short)]", new UBASE("US",       "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0"));

            Dictionary<string, BaseSystem> map = new Dictionary<string, BaseSystem>();
            map.Add("force", new BaseSystem("force", unit, "1.0"));
            SingleSystem usb = new SingleSystem("force", map);
            Converter con1 = new Converter("Force", "force", "SI", "SI", usb);
            Converter con2 = new Converter("Force", "force", "force", "force", 
                                            "SI", "SI", usb);

            testConverter(con1, "Constructor");
            testConverter(con2, "Constructor (two types)");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestConverter", ts);
        }

        ///<summary>
        /// Test a Converter.
        ///<summary>
        /// <param><c>con</c>   (input)  - Converter to test.</param>
        /// <param><c>label</c> (input)  - identifying label for output.</param>
        private void testConverter(Converter con, 
                                   string label)
        {
            Console.WriteLine(label);

            string er1 = "force";
            string ar1 = con.fromType();
            bool r1 = (ar1 == "force" ? true : false);
            printResult(r1, "UnitTestConverter", "fromType", ar1, er1);

            string er2 = "false";
            bool r2 = !con.fromType("angle");
            string ar2 = bool_to_str(r2);
            printResult(r2, "UnitTestConverter", "fromType", ar2, er2);

            string er3 = "force";
            string ar3 = con.toType();
            bool r3 = (ar3 == "force" ? true : false);
            printResult(r3, "UnitTestConverter", "toType", ar3, er3);

            string er4 = "false";
            bool r4 = !con.toType("angle");
            printResult(r4, "UnitTestConverter", "toType", bool_to_str(r4), er4);

            UBASE unit = con.unit("UK", "ounce-force");
            bool r5 = (unit.valid() && unit.system() == "UK" 
                                    && unit.name() == "ounce-force" ? true : false);
            string er5 = "true, UK, ounce-force";
            string ar5 = bool_to_str(unit.valid()) + ", " + unit.system() 
                                                   + ", " + unit.unit();
            printResult(r5, "UnitTestConverter", "unit", ar5, er5);

            string er6 = "force";
            string ar6 = con.type();
            bool r6 = (ar6 == er6 ? true : false);
            printResult(r6, "UnitTestConverter", "type", ar6, er6);

            TypeGroup us = con.typeGroup("UK");
            List<string> ar7 = us.unitNames();
            List <string> er7 = new List<string> { "UK[ounce-force]", 
                                                   "UK[ozf]",
                                                   "UK[ton-force(long)]" };
            bool r7 = (us.valid() && compareList(ar7, er7) ? true : false);
            printResult(r7, "UnitTestConverter", "typeGroup", 
                        bool_to_str(us.valid()) + ", " + listToString(ar7), 
                        "true, " + listToString(er7));

            List<string> ar8 = con.systemNames();
            List<string> er8 = new List<string> { "Imperial", "MKpS", 
                                                   "SI", "UK","US" };
            bool r8 = compareList(ar8, er8);
            printResult(r8, "UnitTestConverter", "systemNames", 
                            listToString(ar8), listToString(er8));

            List<string> ar9 = con.unitNames("US");
            List<string> er9 = new List<string> {"US[ounce-force]", 
                                                 "US[ozf]", 
                                                 "US[ton-force(short)]"};
            bool r9 = compareList(ar9, er9);
            printResult(r9, "UnitTestConverter", "unitNames", 
                            listToString(ar9), listToString(er9));

            List<string> ar10 = con.unitNames();
            List<string> er10 = new List<string>{"Imperial[kipf]", 
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
                                                 "US[ton-force(short)]"};
            bool r10 = compareList(ar10, er10);
            printResult(r10, "UnitTestConverter", "unitNames", 
                             listToString(ar10), listToString(er10));


            UBASE newUnit = new UBASE("SI", "kilonewton", 1.000000000000000E+03, 
                                       "kg.m/s2", "M.L/T2", "1.0");
            bool ans = con.addUnit("SI", "kilonewton", newUnit);
            UBASE addedUnit = con.unit("SI", "kilonewton");
            bool r11 = (ans && addedUnit.valid() && addedUnit.system() == "SI" 
                            && addedUnit.name() == "kilonewton" ? true : false);
            string er11 = "true, true, SI, kilonewton";
            string ar11 = bool_to_str(ans) + ", " 
                                           + bool_to_str(addedUnit.valid()) 
                                           + ", " + addedUnit.system() + ", " 
                                           + addedUnit.name();
            printResult(r11, "UnitTestConverter", "addUnit", ar11, er11);

            bool result = con.removeUnit("SI", "kilonewton");
            UBASE removedUnit = con.unit("SI", "kilonewton");
            bool r12 = (ans && !removedUnit.valid() ? true : false);
            string er12 = "true, false";
            string ar12 = bool_to_str(ans) + ", " + bool_to_str(removedUnit.valid());
            printResult(r12, "UnitTestConverter", "removeUnit", ar12, er12);

            con.toSystem("Imperial");
            double x1 = con.convert(1.0, "newton", "kipf");
            con.toSystem("SI");
            double x2 = con.convert(1.0, "SI[newton]", "Imperial[kipf]", true);
            double cvtAns = 1.0 / 4.448221615260500E+03;
            bool r13 = (x1 == cvtAns && x2 == cvtAns ? true : false);
            string er13 = cvtAns.ToString("E15") + ", " + cvtAns.ToString("E15");
            string ar13 = x1.ToString("E15") + ", " + x2.ToString("E15");
            printResult(r13, "UnitTestConverter", "convert", ar13, er13);

            double x3 = con.convert(1.0, "newton", "SI", "kipf", "Imperial");
            bool r14 = (x2 == cvtAns ? true : false);
            string er14 = cvtAns.ToString("E15");
            string ar14 = x3.ToString("E15");
            printResult(r14, "UnitTestConverter", "convert", ar14, er14);

            Console.WriteLine("");
        }
    }
}
// EOF
