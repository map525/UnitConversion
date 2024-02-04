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
// File UnitTestTypeGroup.java
//
// Unit test for TypeGroup class. 
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

public class UnitTestTypeGroup extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestTypeGroup(boolean brief, String path)
    {
        super(brief, path);
        openFile("UnitTestTypeGroup.txt");
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
        printHeader("UnitTestTypeGroup", out);

        TypeGroup us0 = new TypeGroup();
        TypeGroup us5 = new TypeGroup("Volume","1.0");

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
        TypeGroup us1 = new TypeGroup("linearDensity", unit,"1.0");

        TypeGroup us2 = new TypeGroup(us1);
        //TypeGroup us3 = us1;

        out.println("Default Constructor");
        printResult(!us0.valid(), "UnitTestTypeGroup", "Default Constructor", 
                                  bool_to_str(us0.valid()), "false", out);
        out.println("");

        out.println("Empty Constructor");
        printResult(us5.valid(), "UnitTestTypeGroup", "Empty Constructor", 
                    bool_to_str(us0.valid())+", "+us5.name(), 
                    "true, Volume", out);
        out.println("");

        testTypeGroup(us1, "Constructor", out);
        testTypeGroup(us2, "Copy Constructor", out);
        //testTypeGroup(us3, "Assignment Operator", out);

       LocalDateTime end = LocalDateTime.now();
       Duration duration = Duration.between(start, end);
       printFooter("UnitTestTypeGroup", duration, out);
    }

    /*
     * Test a TypeGroup.
     * 
     * @param usb   - (input) TypeGroup to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testTypeGroup(TypeGroup usys, String label, PrintStream out)
    {
        out.println(label);

        printResult(usys.check(), "UnitTestTypeGroup", "check", 
                                  bool_to_str(usys.check()), "true", out);
        printResult(usys.valid(), "UnitTestTypeGroup", "valid", 
                                  bool_to_str(usys.valid()), "true", out);

        String er1 = "linearDensity";
        String ar1 = usys.name();
        boolean r1 = (ar1 == er1 ? true : false);
        printResult(r1, "UnitTestTypeGroup", "name", ar1, er1, out);

        String er2 = "1.0";
        String ar2 = usys.version();
        boolean r2 = (ar2 == er2 ? true : false);
        printResult(r2, "UnitTestTypeGroup", "version", ar2, er2, out);


        UBASE unit = usys.unit("UK[ton-per-foot]");
        boolean r3 = (unit.valid() && unit.name() == "ton-per-foot" 
                                   && unit.type() == "M/L" 
                                   && unit.version() == "1.0"
                                   && unit.offset().asDouble() == 0 
                                   && unit.value().asDouble() == 3.333487233595800E+03
                                   && unit.system() == "UK" 
                                   && unit.unit() == "kg/m" ? true : false);
        String ar3 = unit.toString();
        String er3a = "type: M/L, system: UK,  name: UK[ton-per-foot], ";
        String er3b = "value: 3.333487233595800E+03, offset: 0, unit: kg/m, ";
        String er3c = "version: 1.0, valid: true";
        String er3 = er3a + er3b + er3c;
        printResult(r3, "UnitTestTypeGroup", "unit", ar3, er3, out);

        UBASE newUnit = new UBASE("Imperial", "pound-per-yard",  
                                  4.960546478565180E-01,  
                                  "kg/m", "M/L", "1.0");
        boolean ans1 = usys.addUnit("Imperial[pound-per-yard]", newUnit);
        UBASE addUnit = usys.unit("Imperial[pound-per-yard]");
        boolean r4 = (ans1 && addUnit.valid() ? true : false);
        String er4 = "true, true";
        String ar4 = bool_to_str(ans1) + ", " + bool_to_str(addUnit.valid());
        printResult(r4, "UnitTestTypeGroup", "addUnit", ar4, er4, out);

        boolean result = usys.removeUnit("Imperial[pound-per-yard]");
        UBASE removeUnit = usys.unit("Imperial[pound-per-yard]");
        boolean r5 = (result && !removeUnit.valid() ? true : false);
        String er5 = "true, false";
        String ar5 = bool_to_str(result) + ", " + bool_to_str(!removeUnit.valid());
        printResult(r5, "UnitTestTypeGroup", "removeUnit", ar5, er5, out);

        List<String> er6 = makeList( "UK","SI" );
        List<String> ar6 = usys.systemNames();
        boolean r6 = compareList(er6, ar6);
        printResult(r6, "UnitTestTypeGroup", "systemNames", listToString(ar6), 
                         listToString(er6), out);

        List<String> er7 = makeList("UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
                                    "UK[ton-per-mile]",       "UK[t/mi]",
                                    "UK[ton-per-yard]",       "UK[t/yd]", 
                                    "UK[ton-per-foot]",       "UK[t/ft]", 
                                    "UK[ton-per-meter]",      "UK[t/m]", 
                                    "SI[ton-per-kilometer]",  "SI[t/km]");
        List<String> ar7 = usys.unitNames();
        boolean r7 = compareList(er7, ar7);
        printResult(r7, "UnitTestTypeGroup", "unitNames", listToString(ar7), 
                        listToString(er7), out);

        out.println("");
    }
}
// EOF
