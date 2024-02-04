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
// File UnitTestConstants.java
//
// Unit test for Constants class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import UnitConversion.*;
import java.time.LocalDateTime;
import java.time.Duration;
import java.io.PrintStream;
import java.util.*;

public class UnitTestConstants extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestConstants(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestConstants.txt");
    }

   /*
    * Run the tests; output results to screen and file.
    * 
    * @param out - (input) stream to write results to.
    */
    @Override
    protected void runOut(PrintStream out)
    {
        LocalDateTime start = LocalDateTime.now();
        printHeader("UnitTestConstants", out);

        Constants constant = Constants.Instance();

        boolean r0 = constant.check();
        String er0 = "true";
        String ar0 = bool_to_str(r0);
        printResult(r0, "UnitTestConstants", "check", ar0, er0, out);

        List<String> er1 = makeList("DerivedUnits",       "PhysicalConstants", 
                                    "PhysialDefinitions", "PhysicalMeasurements", 
                                    "SI",                 "WGS84Model", 
                                    "Invalid");
        List<String> ar1 = constant.names();
        boolean r1 = compareList(ar1, er1);
        printResult(r1, "UnitTestConstants", "names", listToString(ar1), 
                        listToString(er1), out);

        List<String> uNames = makeList("planck-constant",   "h",
                                       "speed-of-light",    "c",
                                       "elementary-charge", "e",
                                       "boltzman-constant", "k",
                                       "avogadro-constant", "N" );
        ConstantGroup ucb = constant.constant("PhysicalConstants");
        boolean ans = compareList(ucb.constantNames(), uNames);
        boolean r2 = (ucb.valid() && ucb.check() && ucb.name() == "PhysicalConstants" 
                                  && ans ? true : false);
        String ar2 = bool_to_str(ucb.valid()) + ", " 
                                              + bool_to_str(ucb.check()) 
                                              + ", " + ucb.name() 
                                              + ", " 
                                              + listToString(ucb.constantNames());
        String er2 = "true, true, PhysicalConstants, " + listToString(uNames);
        printResult(r2, "UnitTestConstants", "unitNames", ar2, er2, out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestConstants", duration, out);
    }
}
// EOF
