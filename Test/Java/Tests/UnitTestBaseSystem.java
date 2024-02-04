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
// File UnitTestBaseSystem.java
//
// Unit test for BaseSystem class. 
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

public class UnitTestBaseSystem extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param] path - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestBaseSystem(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestBaseSystem.txt");
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
        printHeader("UnitTestBaseSystem", out);

        BaseSystem bs0 = new BaseSystem();

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
        BaseSystem bs1 = new BaseSystem("linearDensity", unit, "1.0");

        HashMap<String, UBASE> length = new HashMap<String, UBASE>();
        HashMap<String, UBASE> area   = new HashMap<String, UBASE>();
        HashMap<String, UBASE> mass   = new HashMap<String, UBASE>();
        HashMap<String, UBASE> liquid = new HashMap<String, UBASE>();
        HashMap<String, UBASE> dry    = new HashMap<String, UBASE>();

        length.put("foot",        new UBASE("US", "foot",          3.048000000000000E-01, "m",  "L",  "1.0"));
        length.put("furlong",     new UBASE("US", "furlong",       2.011680000000000E+02, "m",  "L",  "1.0"));
        length.put("inch",        new UBASE("US", "inch",          2.540000000000000E-02, "m",  "L",  "1.0"));
        length.put("league",      new UBASE("US", "league",        5.559552000000000E+03, "m",  "L",  "1.0"));
        length.put("mile",        new UBASE("US", "mile",          1.609344000000000E+03, "m",  "L",  "1.0"));
        length.put("yard",        new UBASE("US", "yard",          9.144000000000000E-01, "m",  "L",  "1.0"));
        area.put("acre",          new UBASE("US", "acre",          4.046856422400000E+03, "m2", "L2", "1.0"));
        area.put("square-inch",   new UBASE("US", "square-inch",   6.451600000000000E-04, "m2", "L2", "1.0"));
        area.put("square-foot",   new UBASE("US", "square-foot",   9.290304000000000E-02, "m2", "L2", "1.0"));
        area.put("square-mile",   new UBASE("US", "square-mile",   2.589988110336000E+06, "m2", "L2", "1.0"));
        area.put("square-yard",   new UBASE("US", "square-yard",   8.361273600000000E-01, "m2", "L2", "1.0"));
        mass.put("hundredweight", new UBASE("US", "hundredweight", 5.080234544000000E+01, "kg", "M",  "1.0"));
        mass.put("ounce",         new UBASE("US", "ounce",         2.834952312500000E-02, "kg", "M",  "1.0"));
        mass.put("pound",         new UBASE("US", "pound",         4.535923700000000E-01, "kg", "M",  "1.0"));
        liquid.put("cup",         new UBASE("US", "cup",           2.365882365000000E-04, "m3", "L3", "1.0"));
        liquid.put("gallon",      new UBASE("US", "gallon",        3.785411784000000E-03, "m3", "L3", "1.0"));
        liquid.put("quart",       new UBASE("US", "quart",         9.463529460000000E-04, "m3", "L3", "1.0"));
        dry.put("bushel",         new UBASE("US", "bushel",        3.523907016688000E-02, "m3", "L3", "1.0"));
        dry.put("cubic-in",       new UBASE("US", "cubic-in",      1.638706400000000E-05, "m3", "L3", "1.0"));
        dry.put("cubic-feet",     new UBASE("US", "cubic-feet",    2.831684659200000E-02, "m3", "L3", "1.0"));
        dry.put("cubic-yard",     new UBASE("US", "cubic-yard",    7.645548579840000E-01, "m3", "L3", "1.0"));
        BaseSystem bs2 = new BaseSystem("US", length, area, 
                                              mass, liquid, dry, "1.0");

        BaseSystem bs3 = new BaseSystem(bs2);
        //BaseSystem bs4 = bs1;

        out.println("Default Constructor");
        printResult(!bs0.valid(), "UnitTestBaseSystem", "Default Constructor",
                                  bool_to_str(bs0.valid()), "false", out);
        out.println("");

        testBaseSystem(bs1, "Unit Constructor", true, out);
        testBaseSystem(bs2, "Length, area, mass, liquid, dry Constructor", false, out);
        testBaseSystem(bs3, "Copy Constructor With length, area, mass, liquid, dry", false, out);
        //testBaseSystem(bs4, "Assignment Operator With Unit", true, out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestBaseSystem", duration, out);
    }

    /*
     * Test a BaseSystem.
     * 
     * @param usb   - (input) BaseSystem to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testBaseSystem(BaseSystem bsys, 
                                String label, 
                                boolean isUnit,
                                PrintStream out)
    {
         out.println(label);

        boolean r1 = bsys.check();
        String er1 = "true";
        String ar1 = bool_to_str(r1);
        printResult(r1, "UnitTestBaseSystem", "check", ar1, er1, out);

        String er2 = (isUnit ? "linearDensity" : "US");
        String ar2 = bsys.name();
        boolean r2 = (ar2 == er2 ? true : false);
        printResult(r2, "UnitTestBaseSystem", "name", ar2, er2, out);

        boolean r3 = bsys.valid();
        String er3 = "true";
        String ar3 = bool_to_str(r3);
        printResult(r3, "UnitTestBaseSystem", "valid", ar3, er3, out);

        String er4 = "1.0";
        String ar4 = bsys.version();
        boolean r4 = (ar4 == er4 ? true : false);
        printResult(r4, "UnitTestBaseSystem", "version", ar4, er4, out);

        if (isUnit)
        {
            UBASE unit = bsys.unit("unit", "UK[ton-per-foot]");
            boolean r5 = (unit.valid() && unit.name() == "ton-per-foot" 
                                       && unit.type() == "M/L" 
                                       && unit.version() == "1.0"
                                       && unit.offset().asDouble() == 0 
                                       && unit.value().asDouble() == 3.333487233595800E+03
                                       && unit.system() == "UK" 
                                       && unit.unit() == "kg/m" ? true : false);

            String ar5 = unit.toString();
            String er5a = "type: M/L, system: UK, name: UK[ton-per-foot], ";
            String er5b = "value: 3.333487233595800E+03, offset: 0.000000, ";
            String er5c = "unit: kg/m, version: 1.0, valid: true";
            String er5 = er5a + er5b + er5c;
            printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5, out);


            UBASE newUnit = new UBASE("Imperial", "pound-per-yard", 
                                       4.960546478565180E-01, 
                                       "kg/m", "M/L", "1.0");
            boolean ans = bsys.addUnit("unit", "Imperial[pound-per-yard]", newUnit);
            UBASE addUnit = bsys.unit("unit", "Imperial[pound-per-yard]");
            boolean r6 = (ans && addUnit.valid() ? true : false);
            String ar6 = bool_to_str(ans) + ", " + bool_to_str(addUnit.valid());
            String er6 = "true, true";
            printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6, out);

            boolean result = bsys.removeUnit("unit", "Imperial[pound-per-yard]");
            UBASE removeUnit = bsys.unit("unit", "Imperial[pound-per-yard]");
            boolean r7 = (result && !removeUnit.valid() ? true : false);
            String ar7 = bool_to_str(result) + ", " + bool_to_str(removeUnit.valid());
            String er7 = "true, false";
            printResult(r7, "UnitTestBaseSystem", "removeUnit", 
                            ar7, er7, out);


            List<String> er8 = makeList( "unit" );
            List<String> ar8 = bsys.typeNames();
            boolean r8 = compareList(er8, ar8);
            printResult(r8, "UnitTestBaseSystem", "typeNames", listToString(ar8), 
                            listToString(er8), out);


            List<String> er9 = makeList( "UK","SI" );
            List<String> ar9 = bsys.systemNames("unit");
            boolean r9 = compareList(er9, ar9);
            printResult(r9, "UnitTestBaseSystem", "systemNames", listToString(ar9), 
                            listToString(er9), out);

            List<String> er10 = makeList("UK[ton-per-1000-yards]", 
                                         "UK[t/1000-yd]", "UK[ton-per-mile]", 
                                         "UK[t/mi]", "UK[ton-per-yard]", 
                                         "UK[t/yd]", "UK[ton-per-foot]", 
                                         "UK[t/ft]", "UK[ton-per-meter]", 
                                         "UK[t/m]", "SI[ton-per-kilometer]", 
                                         "SI[t/km]");
            List<String> ar10 = bsys.unitNames("unit");
            boolean r10 = compareList(er10, ar10);
            printResult(r10, "UnitTestBaseSystem", "unitNames", listToString(ar10), 
                             listToString(er10), out);

            TypeGroup us = bsys.typeGroup("unit");
            String er11 = "true, linearDensity";
            String ar11 = bool_to_str(us.valid()) + ", " + us.name();
            boolean r11 = (us.valid() && us.name() == "linearDensity" ? true : false);
            printResult(r11, "UnitTestBaseSystem", "typeGroup", 
                             ar11, er11, out);
        }
        else
        {
            UBASE unit = bsys.unit("Mass", "pound");
            boolean r5 = (unit.valid() && unit.name() == "pound" && unit.type() == "M" 
                                       && unit.version() == "1.0"
                                       && unit.offset().asDouble() == 0 
                                       && unit.value().asDouble() == 4.535923700000000E-01
                                       && unit.system() == "US" 
                                       && unit.unit() == "kg" ? true : false);
            String ar5 = unit.toString();
            String er5a = "type: M, system: US, name: pound, ";
            String er5b = "value: 4.535923700000000E-01, offset: 0.000000, ";
            String er5c = "unit: kg, version: 1.0, valid: true";
            String er5 = er5a + er5b + er5c;
            printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5, out);

            UBASE newUnit = new UBASE("US", "pint", 4.731764730000000E-04, 
                                            "m3", "L3", "1.0");
            boolean ans = bsys.addUnit("Liquid", "pint", newUnit);
            UBASE addUnit = bsys.unit("Liquid", "pint");
            boolean r6 = (ans && addUnit.valid() ? true : false);
            String ar6 = bool_to_str(ans) + ", " + bool_to_str(addUnit.valid());
            String er6 = "true, true";
            printResult(r6, "UnitTestBaseSystem", "addUnit", 
                            ar6, er6, out);

            boolean result = bsys.removeUnit("Liquid", "pint");
            UBASE removeUnit = bsys.unit("Liquid", "pint");
            boolean r7 = (result && !removeUnit.valid() ? true : false);
            String ar7 = bool_to_str(result) + ", " + bool_to_str(removeUnit.valid());
            String er7 = "true, false";
            printResult(r7, "UnitTestBaseSystem", "removeUnit", 
                            ar7, er7, out);

            List<String> er8 = makeList( "Length","Area","Mass","Liquid",
                                         "Dry", "Volume");
            List<String> ar8 = bsys.typeNames();
            boolean r8 = compareList(er8, ar8);
            printResult(r8, "UnitTestBaseSystem", "typeNames", listToString(ar8), 
                            listToString(er8), out);

            List<String> er9 = makeList( "US" );
            List<String> ar9 = bsys.systemNames("Dry");
            boolean r9 = compareList(er9, ar9);
            printResult(r9, "UnitTestBaseSystem", "systemNames", listToString(ar9), 
                            listToString(er9), out);

            List<String> er10 = makeList( "acre", "square-inch","square-foot",
                                          "square-mile","square-yard" );
            List<String> ar10 = bsys.unitNames("Area");
            boolean r10 = compareList(er10, ar10);
            printResult(r10, "UnitTestBaseSystem", "unitNames", listToString(ar10), 
                             listToString(er10), out);

            TypeGroup us = bsys.typeGroup("Length");
            String er11 = "true, Length";
            String ar11 = bool_to_str(us.valid()) + ", " + us.name();
            boolean r11 = (us.valid() && us.name() == "Length" ? true : false);
            printResult(r11, "UnitTestBaseSystem", "typeGroup", 
                             ar11, er11, out);
        }

        out.println("");
    }
}
// EOF
