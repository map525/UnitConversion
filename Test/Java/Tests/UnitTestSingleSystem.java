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
// File UnitTestSingleSystem.java
//
// Unit test for SingleSystem class. 
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

public class UnitTestSingleSystem extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestSingleSystem(boolean brief, String path)
    {
        super(brief, path);
        openFile("UnitTestSingleSystem.txt");
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
        printHeader("UnitTestSingleSystem", out);

        SingleSystem usb0 = new SingleSystem();
        SingleSystem usb1 = new SingleSystem("force");

        HashMap<String, UBASE> unit = new HashMap<String, UBASE>();
        unit.put("Imperial[kipf]",       new  UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[kip-force]",  new UBASE("Imperial",  "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[odl]",        new UBASE("Imperial",  "ouncedal",         8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[lbf]",        new UBASE("Imperial",  "pound-force",      4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[tondal]",     new UBASE("Imperial",  "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("Imperial[tdl]",        new UBASE("Imperial",  "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[kgf]",            new UBASE("MKpS",      "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[kgp]",            new UBASE("MKpS",      "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[kgw]",            new UBASE("MKpS",      "kilogram-weight",  9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[pond]",           new UBASE("MKpS",      "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("MKpS[p]",              new UBASE("MKpS",      "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("SI[newton]",           new UBASE("SI",        "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("SI[N]",                new UBASE("SI",        "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("UK[ounce-force]",      new UBASE("UK",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("UK[ozf]",              new UBASE("UK",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("UK[ton-force(long)]",  new UBASE("UK",        "ton-force(long)",  9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("US[ounce-force]",      new UBASE("US",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("US[ozf]",              new UBASE("US",        "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
        unit.put("US[ton-force(short)]", new UBASE("US",        "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0"));

        HashMap<String, BaseSystem> map = new HashMap<String, BaseSystem>();
        map.put("force", new BaseSystem("force", unit, "1.0"));

        unit.clear();
        unit.put("a.u.[au-of-linear-momentum]",    new UBASE("a.u.", "au-of-linear-momentum",     1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0"));
        unit.put("a.u.[aulm]",                     new UBASE("a.u.", "au-of-linear-momentum",     1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0"));
        unit.put("cgs[bole]",                      new UBASE("cgs",  "bole",                      1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
        unit.put("cgs[gramcentimeter-per-second]", new UBASE("cgs",  "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
        unit.put("cgs[gcm/sec]",                   new UBASE("cgs",  "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
        unit.put("SI[newton-second]",              new UBASE("SI",   "newton-second",             1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0"));
        unit.put("SI[N-sec]",                      new UBASE("SI",   "newton-second",             1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0"));

        map.put("momentum", new BaseSystem("momentum", unit, "1.0"));
        SingleSystem usb2 = new SingleSystem("force", map);

        SingleSystem usb3 = new SingleSystem(usb2);
        //SingleSystem usb4 = usb2;

        out.println("Default Constructor");
        printResult(!usb0.valid(), "UnitTestSingleSystem", "Default Constructor", 
                    bool_to_str(usb0.valid()), "false", out);
        out.println("");

        out.println("Name Constructor");
        printResult(usb1.valid(), "UnitTestSingleSystem", "Name Constructor",
                   bool_to_str(usb1.valid()), "true", out);
        out.println("");

        testSingleSystem(usb2, "Unit Constructor", out);
        testSingleSystem(usb3, "Copy Constructor", out);
        //testSingleSystem(usb4, "Assignment Operator", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestSingleSystem", duration, out);
    }

    /*
     * Test a SingleSystem.
     * 
     * @param usb   - (input) CanonicalSystem to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testSingleSystem(SingleSystem usb, String label, PrintStream out) 
    {
        out.println(label);

        TypeGroup us = usb.typeGroup("momentum", "cgs");
        List<String> ar1 = us.unitNames();
        List<String> er1 = makeList("cgs[bole]", 
                                    "cgs[gramcentimeter-per-second]", 
                                    "cgs[gcm/sec]");
        boolean r1 = us.valid();
        printResult(r1, "UnitTestSingleSystem", "typeGroup, unitNames", 
                    bool_to_str(us.valid())+", "+listToString(ar1), "true, "
                                                + listToString(er1), out);

        String er2 = "ton-per-mile";
        String ar2 = usb.rawUnitName("UK[ton-per-mile]");
        boolean r2 = (ar2.equals(er2) ? true : false);
        printResult(r2, "UnitTestSingleSystem", "rawUnitName", 
                        ar2, er2, out);

        String er3 = "UK[ton-per-mile]";
        String ar3 = usb.fullUnitName("UK", "ton-per-mile");
        boolean r3 = (ar3.equals(er3) ? true : false);
        printResult(r3, "UnitTestSingleSystem", "fullUnitName", 
                        ar3, er3, out);


        List<String> ar4 = usb.systemNames("momentum");  
        List<String> er4 = makeList( "a.u.", "cgs","SI" );
        boolean r4 = compareList(ar4, er4);
        printResult(r4, "UnitTestSingleSystem", "systemNames", listToString(ar4), 
                        listToString(er4), out);


        List<String> ar5 = usb.systemNames(); 
        List<String> er5 = makeList( "US", "UK", "Imperial", "MKpS", "a.u.", 
                                           "cgs","SI" );
        boolean r5 = compareList(ar5, er5);
        printResult(r5, "UnitTestSingleSystem", "systemNames", listToString(ar5), 
                        listToString(er5), out);

        List<String> ar6 = usb.typeNames();  
        List<String> er6 = makeList( "force","momentum" );
        boolean r6 = compareList(ar6, er6);
        printResult(r6, "UnitTestSingleSystem", "typeNames", listToString(ar6), 
                        listToString(er6), out);


        List<String> ar7 = usb.unitNames("force", "UK");
        List<String> er7 = makeList( "UK[ounce-force]", "UK[ozf]", 
                                     "UK[ton-force(long)]" );
        boolean r7 = compareList(ar7, er7);
        printResult(r7, "UnitTestSingleSystem", "unitNames", listToString(ar7), 
                        listToString(er7), out);

        List<String> ar8 = usb.unitNames();
        List<String> er8 = makeList("Imperial[kipf]",        "Imperial[kip-force]",
                                    "Imperial[odl]",         "Imperial[lbf]",
                                    "Imperial[tondal]",      "Imperial[tdl]",
                                    "MKpS[kgf]","MKpS[kgp]", "MKpS[kgw]",
                                    "MKpS[pond]",            "MKpS[p]",
                                    "SI[newton]",            "SI[N]",
                                    "UK[ounce-force]",       "UK[ozf]", 
                                    "UK[ton-force(long)]",   "US[ounce-force]",
                                    "US[ozf]",               "US[ton-force(short)]",
                                    "a.u.[au-of-linear-momentum]",
                                    "a.u.[aulm]",            "cgs[bole]",
                                    "cgs[gramcentimeter-per-second]",
                                    "cgs[gcm/sec]",          "SI[newton-second]",
                                    "SI[N-sec]");
        boolean r8 = compareList(ar8, er8);
        printResult(r8, "UnitTestSingleSystem", "unitNames", listToString(ar8), 
                        listToString(er8), out);


        double ar9 = usb.convertUnit(1.0, "force","force","lbf","Imperial",
                                     "newton","SI", false);
        double er9 = 4.448221615260500E+00;
        boolean r9 = (ar9 == er9 ? true : false);
        printResult(r9, "UnitTestSingleSystem", "convertUnit", 
                        ""+ar9, ""+er9, out);
        out.println("");
    }
}
// EOF
