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
// File UnitTestConverter.java
//
// Unit test for Converter class. 
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

public class UnitTestConverter extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestConverter(boolean brief, String path) 
    {
         super(brief, path);
         openFile("UnitTestConverter.txt");
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
        printHeader("UnitTestConverter", out);

        HashMap<String, UBASE> unit = new HashMap<String, UBASE>();
        unit.put("Imperial[kipf]",       new UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[kip-force]",  new UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[odl]",        new UBASE("Imperial", "ouncedal",         8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[lbf]",        new UBASE("Imperial", "pound-force",      4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[tondal]",     new UBASE("Imperial", "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[tdl]",        new UBASE("Imperial", "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[kgf]",            new UBASE("MKpS",     "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[kgp]",            new UBASE("MKpS",     "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[kgw]",            new UBASE("MKpS",     "kilogram-weight",  9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[pond]",           new UBASE("MKpS",     "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[p]",              new UBASE("MKpS",     "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("SI[newton]",           new UBASE("SI",       "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("SI[N]",                new UBASE("SI",       "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("UK[ounce-force]",      new UBASE("UK",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("UK[ozf]",              new UBASE("UK",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("UK[ton-force(long)]",  new UBASE("UK",       "ton-force(long)",  9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("US[ounce-force]",      new UBASE("US",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("US[ozf]",              new UBASE("US",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("US[ton-force(short)]", new UBASE("US",       "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0"));

        HashMap<String, BaseSystem> map = new HashMap<String, BaseSystem>();
        map.put("force", new BaseSystem("force", unit, "1.0"));
        SingleSystem usb = new SingleSystem("force", map);
        Converter con1 = new Converter("Force", "force", "SI", "SI", usb);
        Converter con2 = new Converter("Force", "force", "force", "force", 
                                       "SI", "SI", usb);

        testConverter(con1, "Constructor", out);
        testConverter(con2, "Constructor (two types)", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestConverter", duration, out);
    }

    /*
     * Test a Converter.
     * 
     * @param usb   - (input) Converter to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testConverter(Converter con, 
                               String label,
                               PrintStream out)
    {
        out.println(label);

        String er1 = "force";
        String ar1 = con.fromType();
        boolean r1 = (ar1 == "force" ? true : false);
        printResult(r1, "UnitTestConverter", "fromType", ar1, er1, out);

        String er2 = "false";
        boolean r2 = !con.fromType("angle");
        String ar2 = bool_to_str(r2);
        printResult(r2, "UnitTestConverter", "fromType", ar2, er2, out);

        String er3 = "force";
        String ar3 = con.toType();
        boolean r3 = (ar3 == "force" ? true : false);
        printResult(r3, "UnitTestConverter", "toType", ar3, er3, out);

        String er4 = "false";
        boolean r4 = !con.toType("angle");
        printResult(r4, "UnitTestConverter", "toType", bool_to_str(r4),
                        er4, out);

        UBASE unit = con.unit("UK", "ounce-force");
        boolean r5 = (unit.valid() && unit.system() == "UK" 
                                   && unit.name() == "ounce-force" ? true : false);
        String er5 = "true, UK, ounce-force";
        String ar5 = bool_to_str(unit.valid()) + ", " + unit.system()
                                               + ", " + unit.unit();
        printResult(r5, "UnitTestConverter", "unit", ar5, er5, out);

        String er6 = "force";
        String ar6 = con.type();
        boolean r6 = (ar6 == er6 ? true : false);
        printResult(r6, "UnitTestConverter", "type", ar6, er6, out);

        TypeGroup us = con.typeGroup("UK");
        List<String> ar7 = us.unitNames();
        List<String> er7 = makeList("UK[ounce-force]", "UK[ozf]",
                                    "UK[ton-force(long)]");
        boolean r7 = (us.valid() && compareList(ar7, er7) ? true : false);
        printResult(r7, "UnitTestConverter", "typeGroup", bool_to_str(us.valid()) 
                    + ", "+ listToString(ar7), "true, "+listToString(er7), out);

        List<String> ar8 = con.systemNames(); 
        List<String> er8 = makeList( "Imperial", "MKpS", "SI", "UK","US" );
        boolean r8 = compareList(ar8, er8);
        printResult(r8, "UnitTestConverter", "systemNames", listToString(ar8), 
                        listToString(er8), out);

        List<String> ar9 = con.unitNames("US");
        List<String> er9 = makeList("US[ounce-force]", "US[ozf]", 
                                       "US[ton-force(short)]");
        boolean r9 = compareList(ar9, er9);
        printResult(r9, "UnitTestConverter", "unitNames", listToString(ar9), 
                        listToString(er9), out);

        List<String> ar10 = con.unitNames();
        List<String> er10 = makeList("Imperial[kipf]",   "Imperial[kip-force]", 
                                     "Imperial[odl]",    "Imperial[lbf]", 
                                     "Imperial[tondal]", "Imperial[tdl]", 
                                     "MKpS[kgf]",        "MKpS[kgp]", 
                                     "MKpS[kgw]",        "MKpS[pond]", 
                                     "MKpS[p]",          "SI[newton]", 
                                     "SI[N]",            "UK[ounce-force]", 
                                     "UK[ozf]",          "UK[ton-force(long)]", 
                                     "US[ounce-force]",  "US[ozf]", 
                                     "US[ton-force(short)]");
        boolean r10 = compareList(ar10, er10);
        printResult(r10, "UnitTestConverter", "unitNames", listToString(ar10), 
                         listToString(er10), out);


        UBASE newUnit = new UBASE("SI", "kilonewton", 1.000000000000000E+03, 
                                  "kg.m/s2",  "M.L/T2", "1.0");
        boolean ans = con.addUnit("SI", "kilonewton", newUnit);
        UBASE addedUnit = con.unit("SI", "kilonewton");
        boolean r11 = (ans && addedUnit.valid() && addedUnit.system() == "SI" 
                           && addedUnit.name() == "kilonewton" ? true : false);
        String er11 = "true, true, SI, kilonewton";
        String ar11 = bool_to_str(ans) + ", " + bool_to_str(addedUnit.valid()) 
                         + ", " + addedUnit.system() + ", " + addedUnit.name();
        printResult(r11, "UnitTestConverter", "addUnit", ar11, er11, out);

        boolean result = con.removeUnit("SI", "kilonewton");
        UBASE removedUnit = con.unit("SI", "kilonewton");
        boolean r12 = (ans && !removedUnit.valid() ? true : false);
        String er12 = "true, false";
        String ar12 = bool_to_str(ans) + ", " + bool_to_str(removedUnit.valid());
        printResult(r12, "UnitTestConverter", "removeUnit", ar12, er12, out);

        con.toSystem("Imperial");
        double x1 = con.convert(1.0, "newton", "kipf");
        con.toSystem("SI");
        double x2 = con.convert(1.0, "SI[newton]","Imperial[kipf]", true);
        double cvtAns = 1.0 / 4.448221615260500E+03;
        boolean r13 = (x1 == cvtAns && x2 == cvtAns ? true : false);
        String er13 = ""+cvtAns + ", " + cvtAns;
        String ar13 = ""+x1 + ", " + x2;
        printResult(r13, "UnitTestConverter", "convert", ar13, er13, out);

        double x3 = con.convert(1.0, "newton","SI","kipf", "Imperial");
        boolean r14 = (x2 == cvtAns ? true : false);
        String er14 = ""+cvtAns;
        String ar14 = ""+x3;
        printResult(r14, "UnitTestConverter", "convert", ar14, er14, out);

        out.println("");
    }
}
// EOF
