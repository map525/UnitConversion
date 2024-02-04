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
// File UnitTestUBase.cs
//
// Unit test for UBASE class. 
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
    /// Test UBASE class.
    ///</summary>
    public class UnitTestUBase : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where 
        ///                              the test results are written.</param>
        public UnitTestUBase(bool brief, string path) : base(brief, path)
        {
            openFile("UnitTestUBase.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestUBase");

            UBASE u = new UBASE();
            UBASE ud = new UBASE("system", "double",  3.5, "unit", "type", "1.0", 5.3);
            UBASE ui = new UBASE("system", "integer", 3,   "unit", "type", "1.0", 1);
            UBASE uc = new UBASE(ud);
            //UBASE ux = ui;


            Console.WriteLine("Default Constructor");
            printResult(!u.valid(), "UnitTestUBase", "Default Constructor", 
                                    bool_to_str(u.valid()), "false");
            Console.WriteLine("");

            testUBase(ud, "Double Constructor", true);
            testUBase(ui, "Integer Constructor", false);
            testUBase(uc, "Copy Constructor With Double", true);
            //testUBase(ux, "Assignment Operator With Integer", false);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestUBase", ts);
        }

        ///<summary>
        /// Test UBASE.
        ///<summary>
        /// <param><c>ubase</c> (input) UBASE to test.</param>
        /// <param><c>label</c> (input) identifying label for output.</param>
        /// <param><c>isDouble</c> (input) true if value is a double, 
        ///                                otherwise value is integer.</param>
        private void testUBase(UBASE ubase, 
                              string label, 
                              bool isDouble)
        {
            Console.WriteLine(label);

            string er1 = (isDouble ? "double" : "integer");
            string ar1 = ubase.name();
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "UnitTestUBase", "name", ar1, er1);

            double er2 = (isDouble ? 5.3 : 1.0);
            double ar2 = ubase.offset().asDouble();
            bool r2 = (ar2 == er2 ? true : false);
            printResult(r2, "UnitTestUBase", "offset", ar2.ToString("E15"), 
                            er2.ToString("E15"));

            string er3 = "system";
            string ar3 = ubase.system();
            bool r3 = (ar3 == er3 ? true : false);
            printResult(r3, "UnitTestUBase", "system", ar3, er3);

            string er4 = "type";
            string ar4 = ubase.type();
            bool r4 = (ar4 == er4 ? true : false);
            printResult(r4, "UnitTestUBase", "type", ar4, er4);

            string er5 = "unit";
            string ar5 = ubase.unit();
            bool r5 = (ar5 == er5 ? true : false);
            printResult(r5, "UnitTestUBase", "unit", ar5, er5);

            string er6 = "true";
            bool ar6 = ubase.valid();
            bool r6 = (ar6 ? true : false);
            printResult(r6, "UnitTestUBase", "valid", bool_to_str(ar6), er6);

            double er7 = (isDouble ? 3.5 : 3.0);
            double ar7 = ubase.value().asDouble();
            bool r7 = (ar7 == er7 ? true : false);
            printResult(r7, "UnitTestUBase", "value", ar7.ToString("E15"), 
                            er7.ToString("E15"));

            string er8 = "1.0";
            string ar8 = ubase.version();
            bool r8 = (ar8 == er8 ? true : false);
            printResult(r8, "UnitTestUBase", "version", ar8, er8);

            if (isDouble)
            {
                string ar9 = ubase.toString();
                string er9a = "type: type, system: system, name: double, ";
                string er9b = "value: 3.500000000000000E+000, ";
                string er9c = "offset: 5.300000000000000E+000, unit: unit, ";
                string er9d = "version: 1.0, valid: true";
                string er9 = er9a + er9b + er9c + er9d;
                bool ans = (ar9 == er9 ? true : false);
                printResult(ans, "UnitTestUBase", "toString", ar9, er9);
            }
            else
            {
                string ar9 = ubase.toString();
                string er9a = "type: type, system: system, name: integer, ";
                string er9b = "value: 3.000000000000000E+000, ";
                string er9c = "offset: 1.000000000000000E+000, unit: unit, ";
                string er9d = "version: 1.0, valid: true";
                string er9 = er9a + er9b + er9c + er9d;
                bool ans = (ar9 == er9 ? true : false);
                printResult(ans, "UnitTestUBase", "toString", ar9, er9);
            }

            Console.WriteLine("");
        }
    }
}
// EOF
