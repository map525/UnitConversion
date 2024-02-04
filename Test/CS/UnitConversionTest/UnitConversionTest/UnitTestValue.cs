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
// File UnitTestValue.cs
//
// Unit test for Value class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversionTestCS
{
    using System;
    using UnitConversion;
    /// <summary>
    /// Test Value class.
    /// </summary>
    public class UnitTestValue : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c> (input) the path to the output folder where 
        ///                            the test results are written.</param>
        public UnitTestValue(bool brief, string path) : base(brief, path)
        {
            openFile("UnitTestValue.txt");
        }

        /// <summary>
        /// Run the tests; output results to screen and file.
        /// <summary>
        /// <param><c>out</c> (input) stream to write results to.</param>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestValue");

            Value v = new Value();
            Value vd = new Value(3.5);
            Value vi = new Value(3);
            Value vod = new Value(vd);
            Value voi = new Value(vi);
            //Value vxd = vd;
            //Value vxi = vi;

            Console.WriteLine("Default Constructor" +'\n');
            printResult(!v.valid(), "UnitTestValue", "Default Constructor", 
                                    bool_to_str(v.valid()), "false");
            Console.WriteLine("");

            testValue(vd, "Double Constructor", true);
            testValue(vi, "Integer Constructor", false);
            testValue(vod, "Copy Constructor With Double", true);
            testValue(voi, "Copy Constructor With Integer", false);
            //testValue(vxd, "Assignment Operator With Double", true);
            //testValue(vxi, "Assignment Operator With Integer", false);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestValue", ts);
        }

        /// <summary>
        /// Test a value.
        /// </summary>
        /// <param><c>v</c> (input)  value to test.</param>
        /// <param><c>label</c> (input)  identifying label for output.</param>
        /// <param><c>isDouble</c> (input)  true if value is a double, 
        ///                                 otherwise value is integer.</param>
        private void testValue(Value v, 
                              string label, 
                              bool isDouble)
        {
            Console.WriteLine(label);

            double ar0 = v.asDouble();
            double er0 = (isDouble ? 3.5 : 3.0);
            bool r0 = (ar0 == er0 ? true : false);
            printResult(r0, "UnitTestValue", "asDouble", ar0.ToString("E15"), 
                            er0.ToString("E15"));


            ulong ar1 = v.asInteger();
            ulong er1 = 3;
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "UnitTestValue", "asInteger", 
                            ar1.ToString(), er1.ToString());

            if (isDouble)
            {

                double ar2 = v.dvalue();
                double er2 = 3.5;
                bool r2 = (ar2 == er2 ? true : false);
                printResult(r2, "UnitTestValue", "dvalue", 
                                ar2.ToString("E15"), er2.ToString("E15"));


                bool r3 = (v.type() == Value.TYPE.DOUBLE ? true : false);
                Value.TYPE ar3 = v.type();
                Value.TYPE er3 = Value.TYPE.DOUBLE;
                printResult(r3, "UnitTestValue", "type (DOUBLE)", 
                                ar3.ToString(), er3.ToString());
            }
            else
            {
                ulong ar2 = v.ivalue();
                ulong er2 = 3;
                bool r2 = (ar2 == er2 ? true : false);
                printResult(r2, "UnitTestValue", "ivalue", 
                                ar2.ToString(), er2.ToString());

                bool r3 = (v.type() == Value.TYPE.UINT ? true : false);
                Value.TYPE ar3 = v.type();
                Value.TYPE er3 = Value.TYPE.UINT;
                printResult(r3, "UnitTestValue", "type (UINT)", 
                                ar3.ToString(), er3.ToString());
            }

            bool r5 = v.valid();
            string ar5 = bool_to_str(r5);
            string er5 = "true";
            printResult(r5, "UnitTestValue", "valid", ar5, er5);

            v.value(4);
            ulong ar6 = v.asInteger();
            ulong er6 = 4;
            bool r6 = (ar6 == er6 ? true : false);
            printResult(r6, "UnitTestValue", "value:integer", 
                            ar6.ToString(), er6.ToString());

            v.value(5.3);
            double ar7 = v.asDouble();
            double er7 = 5.3;
            bool r7 = (ar7 == er7 ? true : false);
            printResult(r7, "UnitTestValue", "value:double", 
                            ar7.ToString("E15"), er7.ToString("E15"));

            Console.WriteLine("");
        }
    }
}
// EOF
