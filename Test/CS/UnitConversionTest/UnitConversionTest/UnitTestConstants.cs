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
// File UnitTestConstants.cs
//
// Unit test for Constants class. 
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
    /// Test Constants class.
    ///</summary>
    public class UnitTestConstants : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where 
        ///                              the test results are written.</param>
        public UnitTestConstants(bool brief, string path) : base(brief, path)
        {
             openFile("UnitTestConstants.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestConstants");

            Constants constant = Constants.Instance();

            bool r0 = constant.check();
            string er0 = "true";
            string ar0 = bool_to_str(r0);
            printResult(r0, "UnitTestConstants", "check", ar0, er0);

            List<string> er1 = new List<string> {"DerivedUnits", 
                                                 "PhysicalConstants", 
                                                 "PhysialDefinitions", 
                                                 "PhysicalMeasurements", 
                                                 "SI", 
                                                 "WGS84Model", 
                                                 "Invalid"};

            List<string> ar1 = constant.names();
            bool r1 = compareList(ar1, er1);
            printResult(r1, "UnitTestConstants", "names", listToString(ar1), 
                                                          listToString(er1));

            List<string> uNames = new List<string> {"planck-constant", "h",
                                                    "speed-of-light",  "c",
                                                    "elementary-charge","e",
                                                    "boltzman-constant","k",
                                                    "avogadro-constant","N"};
            ConstantGroup ucb = constant.constant("PhysicalConstants");
            bool ans = compareList(ucb.constantNames(), uNames);
            bool r2 = (ucb.valid() && ucb.check() 
                                   && ucb.name() == "PhysicalConstants" 
                                   && ans ? true : false);
            string ar2 = bool_to_str(ucb.valid()) + ", " 
                                                  + bool_to_str(ucb.check()) 
                                                  + ", " + ucb.name() + ", " 
                                                  + listToString(ucb.constantNames());
            string er2 = "true, true, PhysicalConstants, " + listToString(uNames);
            printResult(r2, "UnitTestConstants", "unitNames", ar2, er2);
            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestConstants", ts);
        }
    }
}
// EOF
