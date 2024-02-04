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
// File UnitTestConversion.java
//
// Unit test for Conversion class. 
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

public class UnitTestConversion extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestConversion(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestConversion.txt");
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
        printHeader("UnitTestConversion", out);

        Conversion cv0 = new Conversion();
        Conversion cv1 = new Conversion("force");

        HashMap<String, UBASE> unit = new HashMap<String, UBASE>();
        unit.put("UK[ton-per-1000-yards]", new UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0"));
        unit.put("UK[t/1000-yd]",          new UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0"));
        unit.put("UK[ton-per-mile]",       new UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0"));
        unit.put("UK[t/mi]",               new UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0"));
        unit.put("UK[ton-per-yard]",       new UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0"));
        unit.put("UK[t/yd]",               new UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0"));
        unit.put("UK[ton-per-foot]",       new UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0"));
        unit.put("UK[t/ft]",               new UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0"));
        unit.put("UK[ton-per-meter]",      new UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0"));
        unit.put("UK[t/m]",                new UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0"));
        unit.put("SI[ton-per-kilometer]",  new UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0"));
        unit.put("SI[t/km]",               new UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0"));
        HashMap<String, BaseSystem> map = new HashMap<String, BaseSystem>();
        map.put("unit", new BaseSystem("linearDensity", unit, "1.0"));
        Conversion cv2 = new Conversion("linearDensity", map);

        Conversion cv3 = new Conversion(cv2);
        //Conversion cv4 = cv2;

        out.println("Default Constructor");
        boolean r0 = !cv0.valid();
        String ar0 = bool_to_str(cv0.valid());
        String er0 = "false";
        printResult(r0, "UnitTestConversion", "Default Constructor", 
                        ar0, er0, out);
        out.println("");

        out.println("Name Constructor");
        boolean r1 = (cv1.valid() && cv1.name() == "force" ? true : false);
        String ar1 = bool_to_str(cv1.valid()) + ", " + cv1.name();
        String er1 = "true, force";
        printResult(r1, "UnitTestConversion", "Name Constructor", 
                        ar1, er1, out);
        out.println("");

        testConversion(cv2, "Constructor", out);
        testConversion(cv3, "Copy Constructor", out);
        //testConversion(cv4, "Assignment", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestConversion", duration, out);
    }

    /*
     * Test a Conversion.
     * 
     * @param usb   - (input) Conversion to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testConversion(Conversion cv, 
                                String label,
                                PrintStream out)
    {
        out.println(label);

        boolean r1 = (cv.validateType("linearDensity", "linearDensity") 
                      && !cv.validateType("linearDensity", "density") ? true : false);
        String ar1 = bool_to_str(cv.validateType("linearDensity", "linearDensity")) 
                                 + ", " + bool_to_str(cv.validateType("linearDensity", "density"));
        String er1 = "true, false";
        printResult(r1, "UnitTestConversion", "validateType", ar1, er1, out);

        UBASE newUnit = new UBASE("Imperial", "pound-per-yard", 
                                  4.960546478565180E-01, "kg/m", "M/L", "1.0");
        boolean ans2 = cv.addUnit("unit", "Imperial", "pound-per-yard", newUnit);
        UBASE addUnit = cv.unit("unit", "Imperial","pound-per-yard");
        boolean r2 = (ans2 && addUnit.valid() ? true : false);
        String ar2 = bool_to_str(ans2) + ", " + bool_to_str(addUnit.valid());
        String er2 = "true, true";
        printResult(r2, "UnitTestConversion", "addUnit", ar2, er2, out);

        boolean ans3 = cv.removeUnit("unit", "Imperial","pound-per-yard");
        UBASE removeUnit = cv.unit("unit", "Imperial","pound-per-yard");
        boolean r3 = (ans3 && !removeUnit.valid() ? true : false);
        String ar3 = bool_to_str(ans3) + ", " + bool_to_str(removeUnit.valid());
        String er3 = "true, false";
        printResult(r3, "UnitTestConversion", "removeUnit", ar3, er3, out);

        double x = cv.convertUnit(1.0, "linearDensity",  "linearDensity",  
                                  "ton-per-foot", "UK",  "ton-per-yard", 
                                  "UK", false);
        double ex = UBASE.ERROR;
        boolean r4 = UBASE.isERROR(x); //(x == ex ? true : false);
        String ar4 = ""+x;
        String er4 = ""+ex;
        printResult(r4, "UnitTestConversion", "convertUnit", 
                         ar4, er4, out);

        out.println("");
    }
}
// EOF
