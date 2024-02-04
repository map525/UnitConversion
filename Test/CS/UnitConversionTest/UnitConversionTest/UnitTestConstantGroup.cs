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
// File UnitTestConstantGroup.cs
//
// Unit test for ConstantGroup class. 
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
    /// Test ConstantGroup class.
    ///</summary>
    public class UnitTestConstantGroup : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where 
        ///                              the test results are written.</param>
        public UnitTestConstantGroup(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestConstantGroup.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestConstantGroup");

            ConstantGroup ucb0 = new ConstantGroup();
            ConstantGroup ucb1 = new ConstantGroup("physicalConstants", "1.0");

           Dictionary<string, UBASE> constants = new Dictionary<string, UBASE>();
           constants.Add("Planck-constant",   new UBASE("SI", "Planck-constant",   6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0"));
           constants.Add("h",                 new UBASE("SI", "h",                 6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0"));
           constants.Add("speed-of-light",    new UBASE("SI", "speed-of-light",    2.997924580000000E+08, "m/s",        "L/T",        "1.0"));
           constants.Add("c",                 new UBASE("SI", "c",                 2.997924580000000E+08, "m/s",        "L/T",        "1.0"));
           constants.Add("elementary-charge", new UBASE("SI", "elementary-charge", 1.602176634000000E-19, "A.s",        "T.I",        "1.0"));
           constants.Add("e",                 new UBASE("SI", "e",                 1.602176634000000E-19, "A.s",        "T.I",        "1.0"));
           constants.Add("Boltzman-constant", new UBASE("SI", "Boltzman-constant", 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0"));
           constants.Add("k",                 new UBASE("SI", "k",                 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0"));
           constants.Add("Avogadro-constant", new UBASE("SI", "Avogadro-constant", 6.022140760000000E+23, "1/mol",      "1/N",        "1.0"));
           constants.Add("N",                 new UBASE("SI", "N",                 6.022140760000000E+23, "1/mol",      "1/N",        "1.0"));
           ConstantGroup ucb2 = new ConstantGroup("physicalConstants", "1.0", constants);

           ConstantGroup ucb3 = new ConstantGroup(ucb2);
           //ConstantGroup ucb4 = ucb2;

            Console.WriteLine("Default Constructor");
            bool r1 = !ucb0.valid();
            string ar1 = bool_to_str(ucb0.valid());
            string er1 = "false";
            printResult(r1, "UnitTestConstantGroup", "Default Constructor", 
                            ar1, er1);
            Console.WriteLine("");

            Console.WriteLine("Constructor (no constants)");
            bool r2 = (ucb1.valid() && ucb1.name() == "physicalConstants" ? true : false);
            string ar2 = bool_to_str(ucb1.valid()) + ", " + ucb1.name();
            string er2 = "true, physicalConstants";
            printResult(r2, "UnitTestConstantGroup", 
                            "Constructor (no constants)", ar2, er2);

            Console.WriteLine("");

            testConstantGroup(ucb2, "Constructor");
            testConstantGroup(ucb3, "Copy Constructor");
            //testConstantGroup(ucb4, "Assignment Operator");

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestConstantGroup", ts);
        }

        ///<summary>
        /// Test UnitConstantBase.
        ///</summary>
        /// <param><c> ucb</c>      (input)  ConstantGroup to test.</param>
        /// <param><c>label</c>     (input)  identifying label for output.</param>
        private void testConstantGroup(ConstantGroup ucb, 
                                       string label)
        {
            Console.WriteLine(label);

            bool r1 = ucb.check();
            string ar1 = bool_to_str(r1);
            string er1 = "true";
            printResult(r1, "UnitTestConstantGroup", "check", ar1, er1);

            string er2 = "physicalConstants";
            bool r2 = (ucb.name() == er2 ? true : false);
            string ar2 = ucb.name();
            printResult(r2, "UnitTestConstantGroup", "name", ar2, er2);

            bool r3 = ucb.valid();
            string ar3 = bool_to_str(r3);
            string er3 = "true";
            printResult(r3, "UnitTestConstantGroup", "valid", ar3, er3);

            string er4 = "1.0";
            bool r4 = (ucb.version() == er4 ? true : false);
            string ar4 = ucb.version();
            printResult(r4, "UnitTestConstantGroup", "version", ar4, er4);

            UBASE unit = ucb.constant("speed-of-light");
            bool r5 = (unit.valid() && unit.name() == "speed-of-light" 
                                    && unit.type() == "L/T" 
                                    && unit.version() == "1.0"
                                    && unit.offset().asDouble() == 0 
                                    && unit.value().asDouble() == 2.997924580000000E+08
                                    && unit.system() == "SI" 
                                    && unit.unit() == "m/s" ? true : false);
            string ar5 = unit.toString();
            string er5a = "type: L/T, system: SI, name: speed-of-light, ";
            string er5b = "value: 2.997924580000000E+08, offset: 0.000000, ";
            string er5c = "unit: m/s, version: 1.0, valid: true";
            string er5 = er5a + er5b + er5c;
            printResult(r5, "UnitTestConstantGroup", "constant", ar5, er5);

            List<string> er6 = new List<string> { "SI" };
            List<string> ar6 = ucb.systemNames();
            bool r6 = compareList(er6, ar6);
            printResult(r6, "UnitTestConstantGroup", "systemNames", 
                             listToString(ar6), listToString(er6));

            List<string> er7 = new List<string> {"Planck-constant",  "h",
                                                 "speed-of-light",   "c",
                                                 "elementary-charge","e",
                                                 "Boltzman-constant","k",
                                                 "Avogadro-constant","N" };
            List<string> ar7 = ucb.constantNames();
            bool r7 = compareList(er7, ar7);
            printResult(r7, "UnitTestConstantGroup", "constantNames", 
                            listToString(ar7), listToString(er7));

            List<string> er8 = new List<string> { "physicalConstants" };
            List<string> ar8 = ucb.typeNames();
            bool r8 = compareList(er8, ar8);
            printResult(r8, "UnitTestConstantGroup", "typeNames", 
                            listToString(ar8), listToString(er8));

            double k = ucb.value("k");
            double ek = 1.380649000000000E-23;
            bool r9 = (k == ek ? true : false);
            string ar9 = k.ToString("E15");
            string er9 = ek.ToString("E15");
            printResult(r9, "UnitTestConstantGroup", "value", ar9, er9);
            Console.WriteLine("");
        }
    }
}
// EOF
