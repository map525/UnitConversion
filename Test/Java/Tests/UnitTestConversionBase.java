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
// File UnitTestConversionBase.java
//
// Unit test for ConversionBase class. 
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

public class UnitTestConversionBase extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestConversionBase(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestConversionBase.txt");
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
        printHeader("UnitTestConversionBase", out);

        ConversionBase cv0 = new ConversionBase();
        ConversionBase cv1 = new ConversionBase("force");

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
        ConversionBase cv2 = new ConversionBase("linearDensity", map);

        ConversionBase cv3 = new ConversionBase(cv2);
        //ConversionBase cv4 = cv2;

        out.println("Default Constructor");
        boolean r0 = !cv0.valid();
        String ar0 = bool_to_str(cv0.valid());
        String er0 = "false";
        printResult(r0, "UnitTestConversionBase", "Default Constructor", 
                        ar0, er0, out);
        out.println("");

        out.println("Name Constructor");
        boolean r1 = (cv1.valid() && cv1.name() == "force" ? true : false);
        String ar1 = bool_to_str(cv1.valid()) + ", " + cv1.name();
        String er1 = "true, force";
        printResult(r1, "UnitTestConversionBase", "Name Constructor", 
                        ar1, er1, out);
        out.println("");

        testConversionBase(cv2, "Constructor", out);
        testConversionBase(cv3, "Copy Constructor", out);
        //testConversion(cv4, "Assignment", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestConversionBase", duration, out);
    }

    /*
     * Test a Conversion.
     * 
     * @param usb   - (input) ConversionBase to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testConversionBase(ConversionBase cv, 
                                    String label,
                                    PrintStream out)
    {
        out.println(label);

        boolean r0 = cv.check();
        String er0 = "true";
        String ar0 = bool_to_str(r0);
        printResult(r0, "UnitTestConversionBase", "check", ar0, er0, out);

        String er1 = "linearDensity";
        String ar1 = cv.name();
        boolean r1 = (ar1 == er1 ? true : false);
        printResult(r1, "UnitTestConversionBase", "name", ar1, er1, out);

        boolean r2 = cv.valid();
        String ar2 = bool_to_str(r2);
        String er2 = "true";
        printResult(r2, "UnitTestConversionBase", "valid", ar2, er2, out);

        String er3 = "ton-per-mile";
        String ar3 = cv.fullUnitName("UK", "ton-per-mile");
        boolean r3 = (ar3 == er3 ? true : false);
        printResult(r3, "UnitTestConversionBase", "fullUnitName", ar3, er3, out);

        String er4 = "ton-per-mile";
        String ar4 = cv.rawUnitName("ton-per-mile");
        boolean r4 = (ar4 == er4 ? true : false);
        printResult(r4, "UnitTestConversionBase", "rawUnitName", ar4, er4, out);

        UBASE unit = cv.unit("unit", "UK", "ton-per-foot");
        boolean r5 = unit.valid();
        String er5 = "true";
        String ar5 = bool_to_str(unit.valid());
        printResult(r5, "UnitTestConversionBase", "unit", ar5, er5, out);

        BaseSystem bs = cv.system("unit");
        boolean r6 = bs.valid();
        String er6 = "true";
        String ar6 = bool_to_str(r6);
        printResult(r6, "UnitTestConversionBase", "system", ar6, er6, out);

        TypeGroup us = cv.typeGroup("linearDensity","UK");
        boolean r7 = !us.valid();
        String er7 = "false";
        String ar7 = bool_to_str(us.valid());
        printResult(r7, "UnitTestConversionBase", "system", ar7, er7, out);

        List<String> l8 = cv.systemNames("linearDensity");
        boolean r8 = (l8.size() == 0 ? true : false);
        String er8 = "0";
        String ar8 = ""+l8.size();
        printResult(r8, "UnitTestConversionBase", "systemNames", 
                        ar8, er8, out);

        List<String> l9 = cv.systemNames();
        boolean r9 = (l9.size() == 0 ? true : false);
        String er9 = "0";
        String ar9 = ""+l9.size();
        printResult(r9, "UnitTestConversionBase", "systemNames", 
                        ar9, er9, out);

        List<String> l10 = cv.typeNames();
        boolean r10 = (l10.size() == 0 ? true : false);
        String er10 = "0";
        String ar10 = ""+l10.size();
        printResult(r10, "UnitTestConversionBase", "typeNames", 
                         ar10, er10, out);

        List<String> l11 = cv.unitNames("linearDensity", "UK");
        boolean r11 = (l11.size() == 0 ? true : false);
        String er11 = "0";
        String ar11 = ""+l11.size();
        printResult(r11, "UnitTestConversionBase", "unitNames", 
                         ar11, er11, out);

        List<String> ar12 = cv.unitNames();
        List<String> er12 = makeList("SI[ton-per-kilometer]", "UK[t/1000-yd]",
                                     "UK[t/ft]",              "UK[t/m]",
                                     "UK[t/mi]",              "UK[t/yd]",
                                     "UK[ton-per-1000-yards]","UK[ton-per-foot]",
                                     "UK[ton-per-meter]",     "UK[ton-per-mile]",
                                     "UK[ton-per-yard]",      "SI[t/km]");
        boolean r12 = compareList(ar12, er12);
        printResult(r12, "UnitTestConversionBase", "unitNames", 
                         listToString(ar12), listToString(er12), out);


        out.println("");
    }
}
// EOF
