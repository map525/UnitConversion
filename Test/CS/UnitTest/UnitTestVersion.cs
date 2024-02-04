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
// File UnitTestVersion.cs
//
// Unit test for Version class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversionTestCS
{
    using System;
    /// <summary>
    /// Test Version class.
    /// </summary>
    public class UnitTestVersion : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param><c>brief</c> (input) brief output for test results.</param>
        /// <param><c>path</c>  (input) the path to the output folder where the 
        ///                             test results are written.</param>
        public UnitTestVersion(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestVersion.txt");
        }

        /// <summary>
        /// Run the tests; output results to screen and file.
        /// </summary>
        /// <param><c>out</c> (input) stream to write results to.</param>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestVersion");

            UnitConversion.Version version = UnitConversion.Version.Instance();

            string er1 = "1.0";
            string ar1 = version.version();
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "UnitTestVersion", "version", ar1, er1);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestVersion", ts);
        }
    }
}
// EOF
