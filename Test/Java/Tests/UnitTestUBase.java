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
// File UnitTestUBase.java
//
// Unit test for UBASE class. 
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

public class UnitTestUBase extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestUBase(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestUBase.txt");
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
        printHeader("UnitTestUBase", out);

        UBASE u = new UBASE();
        UBASE ud = new UBASE("system", "double",  3.5, "unit", "type", "1.0", 5.3);
        UBASE ui = new UBASE("system", "integer", 3,   "unit", "type", "1.0", 1);
        UBASE uc = new UBASE(ud);
        //UBASE ux = ui;


        out.println("Default Constructor");
        printResult(!u.valid(), "UnitTestUBase", "Default Constructor", 
                                bool_to_str(u.valid()), "false",  out);
        out.println("");

        testUBase(ud, "Double Constructor", true, out);
        testUBase(ui, "Integer Constructor", false, out);
        testUBase(uc, "Copy Constructor With Double", true, out);
        //testUBase(ux, "Assignment Operator With Integer", false, out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestUBase", duration, out);
    }

    /*
     * Test a UBASE.
     * 
     * @param usb   - (input) UBASE to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testUBase(UBASE ubase, 
                           String label, 
                           boolean isDouble,
                           PrintStream out)
    {
        out.println(label);

        String er1 = (isDouble ? "double" : "integer");
        String ar1 = ubase.name();
        boolean r1 = (ar1 ==  er1 ? true : false);
        printResult(r1, "UnitTestUBase", "name", ar1, er1, out);

        double er2 = (isDouble ? 5.3 : 1.0);
        double ar2 = ubase.offset().asDouble();
        boolean r2 = (ar2 == er2 ? true : false);
        printResult(r2, "UnitTestUBase", "offset", ""+ar2, 
                        ""+er2, out);

        String er3 = "system";
        String ar3 = ubase.system();
        boolean r3 = (ar3 == er3 ? true : false);
        printResult(r3, "UnitTestUBase", "system", ar3, er3, out);

        String er4 = "type";
        String ar4 = ubase.type();
        boolean r4 = (ar4 == er4 ? true : false);
        printResult(r4, "UnitTestUBase", "type", ar4, er4, out);

        String er5 = "unit";
        String ar5 = ubase.unit();
        boolean r5 = (ar5 == er5 ? true : false);
        printResult(r5, "UnitTestUBase", "unit", ar5, er5, out);

        String er6 = "true";
        boolean ar6 = ubase.valid();
        boolean r6 = (ar6 ? true : false);
        printResult(r6, "UnitTestUBase", "valid", bool_to_str(ar6), er6, out);

        double er7 = (isDouble ? 3.5 : 3.0);
        double ar7 = ubase.value().asDouble();
        boolean r7 = (ar7 == er7 ? true : false);
        printResult(r7, "UnitTestUBase", "value", ""+ar7, ""+er7, out);

        String er8 = "1.0";
        String ar8 = ubase.version();
        boolean r8 = (ar8 == er8 ? true : false);
        printResult(r8, "UnitTestUBase", "version", ar8, er8, out);

        if (isDouble)
        {
            String ar9 = ubase.toString();
            String er9a = "type: type, system: system, name: double, ";
            String er9b = "value: 3.500000000000000e+00, ";
            String er9c = "offset: 5.300000000000000e+00, ";
            String er9d = "unit: unit, version: 1.0, valid: true";
            String er9 = er9a + er9b + er9c + er9d;
            boolean ans = (ar9.equals(er9) ? true : false);
            printResult(ans, "UnitTestUBase", "toString", ar9, er9, out);
        }
        else
        {
            String ar9 = ubase.toString();
            String er9a = "type: type, system: system, name: integer, ";
            String er9b = "value: 3.000000000000000e+00, ";
            String er9c = "offset: 1.000000000000000e+00, ";
            String er9d = "unit: unit, version: 1.0, valid: true";
            String er9 = er9a + er9b + er9c + er9d;
            boolean ans = (ar9.equals(er9) ? true : false);
            printResult(ans, "UnitTestUBase", "toString", ar9, er9, out);
        }
        out.println("");
    }
}
// EOF
