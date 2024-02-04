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
// File UnitConversionConstantTest.cs
//
// Program to test constant methods. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversionTestCS
{
    using System.Collections.Generic;
    using System;
    using UnitConversion;

    /// <summary>
    /// Program to test constant methods.
    /// </summary>
    public class UnitConversionConstantTest : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor. 
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input) path to directory for output 
        ///                             files.</param>
        public UnitConversionConstantTest(bool brief, string path) : base(brief, path)
        {
             openFile("ConstantTest.txt");
        }

        /// <summary>
        /// Write constant to output stream. 
        /// </summary>
        /// <param><c>constant</c> (input) constant to output.</param>
        /// <param><c>name</c>     (input) constant name.</param>
        private void printConstant(ConstantGroup constant, string name)
        {
            List<string> unitNames = constant.constantNames();
            printList(unitNames,   "Constants", name);
            foreach(string it in unitNames)
            {
               UBASE u = constant.constant(it);
               double val = constant.value(it);
               printResult(u.valid(), name + " " + it, "valid",
                           bool_to_str(u.valid()) + ", " + u.toString(),
                           "true");
            }
            Console.WriteLine(" ");
        }

        /// <summary>
        /// Run tests; output results to screen or file.
        /// </summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitConversionConstantTest");

            Constants constants =  Constants.Instance();

           List<string> constantNames = constants.names();
           printList(constantNames,   "Constants", "CONSTANTS");
           
           foreach (string it in constantNames)
           {
               if( it == "Invalid")
               {
                   continue;
               }
               else
               {
                   printConstant(constants.constant(it), it);
               }
           }
            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitConversionConstantTest", ts);
            Console.WriteLine(" ");
        }
    }
}
// EOF
