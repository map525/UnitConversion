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
// File UnitTestConvert.java
//
// Unit test for Convert class. 
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

public class UnitTestConvert extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestConvert(boolean brief, String path)
    {
        super(brief, path);
        openFile("UnitTestConvert.txt");
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
        printHeader("UnitTestConvert", out);

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
        map.put("linearDensity", new BaseSystem("linearDensity", unit, "1.0"));
        SingleSystem cv = new SingleSystem("linearDensity", map);

        Convert cvt1 = new Convert("Density","UK","UK",cv);
        Convert cvt2 = new Convert(cvt1);

        testConvert(cvt1, "Constructor", out); 
        testConvert(cvt2, "Copy Constructor", out); 

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestConvert", duration, out);
    }

    /*
     * Test a Convert.
     * 
     * @param usb   - (input) Convert to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testConvert(Convert cvt, 
                             String label,
                             PrintStream out)
    {
        out.println(label);

        boolean r0 = cvt.check();
        String er0 = "true";
        String ar0 = bool_to_str(r0);
        printResult(r0, "UnitTestConvert", "check", ar0, er0, out);

        String er1 = "Density";
        String ar1 = cvt.name();
        boolean r1 = (ar1 == er1 ? true : false);
        printResult(r1, "UnitTestConvert", "name", ar1, er1, out);

        String er2 = "true";
        String ar2 = bool_to_str(cvt.valid());
        boolean r2 = cvt.valid();
        printResult(r2, "UnitTestConvert", "valid", ar2, er2, out);

        String er3 = "UK[ton-per-yard]";
        String ar3 = cvt.fullUnitName("UK", "ton-per-yard");
        boolean r3 = (ar3.equals(er3) ? true : false);
        printResult(r3, "UnitTestConvert", "fullUnitName", ar3, er3, out);

        String er4 = "ton-per-yard";
        String ar4 = cvt.rawUnitName("UK[ton-per-yard]");
        boolean r4 = (ar4.equals(er4) ? true : false);
        printResult(r4, "UnitTestConvert", "rawUnitName", ar4, er4, out);

        List<String> ar5 = cvt.allSystemNames();
        List<String> er5 = makeList("UK", "SI");
        boolean r5 = compareList(ar5, er5);
        printResult(r5, "UnitTestConvert", "allSystemNames", listToString(ar5), 
                        listToString(er5), out);

        List<String> ar6 = cvt.allUnitNames();
        List<String> er6 = makeList("UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
                                    "UK[ton-per-mile]",       "UK[t/mi]", 
                                    "UK[ton-per-yard]",       "UK[t/yd]", 
                                    "UK[ton-per-foot]",       "UK[t/ft]", 
                                    "UK[ton-per-meter]",      "UK[t/m]", 
                                    "SI[ton-per-kilometer]",  "SI[t/km]");
        boolean r6 = compareList(ar6, er6);
        printResult(r6, "UnitTestConvert", "allUnitNames", listToString(ar6), 
                        listToString(er6), out);

        String er7 = "UK";
        String ar7 = cvt.fromSystem();
        boolean r7 = (ar7 == er7 ? true : false);
        printResult(r7, "UnitTestConvert", "fromSystem", ar7, er7, out);

        String er8 = "UK";
        String ar8 = cvt.toSystem();
        boolean r8 = (ar8 == er8 ? true : false);
        printResult(r8, "UnitTestConvert", "toSystem", ar8, er8, out);

        cvt.fromSystem("SI");
        String er9 = "SI";
        String ar9 = cvt.fromSystem();
        boolean r9 = (ar9 == er9 ? true : false);
        printResult(r9, "UnitTestConvert", "fromSystem", ar9, er9, out);
        cvt.fromSystem("UK");


        cvt.toSystem("SI");
        String er10 = "SI";
        String ar10 = cvt.toSystem();
        boolean r10 = (ar10 == er10 ? true : false);
        printResult(r10, "UnitTestConvert", "toSystem", ar10, er10, out);
        cvt.toSystem("UK");

        List<String> ar11 = cvt.typeNames();
        List<String> er11 = makeList( "linearDensity" );
        boolean r11 = compareList(ar11, er11);
        printResult(r11, "UnitTestConvert", "typeNames", listToString(ar11), 
                         listToString(er11), out);
                     
        out.println("");
     }
}
// EOF
