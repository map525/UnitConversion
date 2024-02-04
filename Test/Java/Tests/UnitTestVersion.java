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
// File UnitTestVersion.java
//
// Unit test for Version class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import UnitConversion.*;
import java.time.LocalDateTime;
import java.time.Duration;
import java.io.PrintStream;

public class UnitTestVersion extends UnitConversionBaseTest
{
    /* 
     * Constructor
     *
     * @param brief - (input) brief test output.
     * @param path  - (input) the path to the output folder where the
     *                        test results are written.
     */
    public UnitTestVersion(boolean brief, String path)
    {
         super(brief, path);
         openFile("UnitTestVersion.txt");
    }

   /*
    * @brief Run the tests; output results to screen and file.
    * 
    *  @param out - (input) stream to write results to.
    */
    @Override
    protected void runOut(PrintStream out)
    {
        LocalDateTime start = LocalDateTime.now();
        printHeader("UnitTestVersion", out);

        UnitConversion.Version version = Version.Instance();

        String er1 = "1.0";
        String ar1 = version.version();
        boolean r1 = (ar1 == er1 ? true : false);
        printResult(r1, "UnitTestVersion", "version", ar1, er1, out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestVersion", duration, out);
    }
}
// EOF
