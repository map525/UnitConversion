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
// File UnitTestCanonicalSystem.java
//
// Unit test for CanonicalSystem class. 
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

public class UnitTestCanonicalSystem extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestCanonicalSystem(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestCanonicalSystem.txt");
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
        printHeader("UnitTestCanonicalSystem", out);

        CanonicalSystem ubs0 = new CanonicalSystem();
        CanonicalSystem ubs1 = new CanonicalSystem("force");

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
        HashMap<String, BaseSystem> map = new HashMap<String, BaseSystem>();
        map.put("US", new BaseSystem("US", length, area, mass, liquid, dry, "1.0"));

        length.clear();
        area.clear();
        mass.clear();
        liquid.clear();
        dry.clear();
        length.put("nmi",         new UBASE("UK", "nmi",     1.853184000000000E+03, "m",  "L",  "1.0"));
        length.put("pace",        new UBASE("UK", "pace",    7.620000000000000E-01, "m",  "L",  "1.0"));
        length.put("palm",        new UBASE("UK", "palm",    7.620000000000000E-02, "m",  "L",  "1.0"));
        length.put("point",       new UBASE("UK", "point",   1.763888888888890E-04, "m",  "L",  "1.0"));
        length.put("rope",        new UBASE("UK", "rope",    6.096000000000000E+00, "m",  "L",  "1.0"));
        area.put("rood",          new UBASE("UK", "rood",    1.011714105600000E+03, "m2", "L2", "1.0"));
        area.put("shed",          new UBASE("UK", "shed",    1.000000000000000E-52, "m2", "L2", "1.0"));
        area.put("skein",         new UBASE("UK", "skein",   1.204023398400000E+04, "m2", "L2", "1.0"));
        area.put("hundred",       new UBASE("UK", "hundred", 4.856227706880000E+05, "m2", "L2", "1.0"));
        mass.put("slug",          new UBASE("UK", "slug",    1.459390293720640E+01, "kg", "M",  "1.0"));
        mass.put("stone",         new UBASE("UK", "stone",   6.350293180000000E+00, "kg", "M",  "1.0"));
        mass.put("truss",         new UBASE("UK", "truss",   1.632932532000000E+01, "kg", "M",  "1.0"));
        mass.put("tub",           new UBASE("UK", "tub",     3.810175908000000E+01, "kg", "M",  "1.0"));
        liquid.put("butt",        new UBASE("UK", "butt",    4.909779360000000E-01, "m3", "L3", "1.0"));
        liquid.put("barrel",      new UBASE("UK", "barrel",  1.663614737280000E-01, "m3", "L3", "1.0"));
        liquid.put("firkin",      new UBASE("UK", "firkin",  4.091482800000000E-02, "m3", "L3", "1.0"));
        dry.put("deal",           new UBASE("UK", "deal",    2.477724076800000E-01, "m3", "L3", "1.0"));
        dry.put("amber",          new UBASE("UK", "amber",   1.454749440000000E-01, "m3", "L3", "1.0"));
        dry.put("peck",           new UBASE("UK", "peck",    9.092184000000000E-03, "m3", "L3", "1.0"));
        dry.put("bag",            new UBASE("UK", "bag",     1.091062080000000E-01, "m3", "L3", "1.0"));
        map.put("UK",             new BaseSystem("UK", length, area, mass, liquid, dry, "1.0"));
        CanonicalSystem ubs2 = new CanonicalSystem("Imperial", map);

        CanonicalSystem ubs3 = new CanonicalSystem(ubs2);
        //CanonicalSystem ubs4 = ubs2;

        out.println("Default Constructor");
        printResult(!ubs0.valid(), "UnitTestCanonicalSystem", 
                                   "Default Constructor", 
                                   bool_to_str(ubs0.valid()), 
                                   "false", out);
        out.println("");

        out.println("Name Constructor");
        printResult(ubs1.valid(), "UnitTestCanonicalSystem", 
                                  "Name Constructor", 
                                  bool_to_str(ubs1.valid()), 
                                  "true", out);
        out.println("");

        testCanonicalSystem(ubs2, "Unit Constructor", out);
        testCanonicalSystem(ubs3, "Copy Constructor", out);
        //testCanonicalSystem(ubs4, "Assignment Operator", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestCanonicalSystem", duration, out);
    }

    /*
     * Test a CanonicalSystem.
     * 
     * @param usb   - (input) CanonicalSystem to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testCanonicalSystem(CanonicalSystem ubs, 
                                     String label,
                                     PrintStream out)
    {
        out.println(label);

        String ar0 = ubs.fullUnitName("UK", "liquid[firkin]");
        String er0 = "firkin";
        boolean r0 = (ar0.equals(er0) ? true : false);
        printResult(r0, "UnitTestCanonicalSystem", "fullUnitName", 
                         ar0, er0, out);

        String er1 = "true, false, true, true";
        boolean r1 = (ubs.validateType("Length", "Length") 
                      && !ubs.validateType("Length", "Area") 
                      && ubs.validateType("Liquid", "Dry") 
                      && ubs.validateType("Dry", "Liquid") ? true : false);
        String ar1 = bool_to_str(ubs.validateType("Length", "Length")) + ", "  
                                 + bool_to_str(ubs.validateType("Length", "Area")) + ", " 
                                 + bool_to_str(ubs.validateType("Liquid", "Dry")) + ", " 
                                 + bool_to_str(ubs.validateType("Dry", "Liquid"));
        printResult(r1, "UnitTestCanonicalSystem", "validateType", 
                        ar1, er1, out);

        TypeGroup us = ubs.typeGroup("Area", "UK");
        List<String> ar2 = us.unitNames();
        List<String> er2 = makeList( "rood", "shed", "skein", "hundred" );
        boolean r2 = (us.valid() && compareList(ar2, er2) ? true : false);
        printResult(r2, "UnitTestCanonicalSystem", "typeGroup", 
                        bool_to_str(us.valid())+", "+listToString(ar2), 
                        "true, "+ listToString(er2),  out);


        List<String> ar3 = ubs.systemNames("Mass"); 
        List<String> er3 = makeList( "US","UK" ); 
        boolean r3 = compareList(ar3, er3);
        printResult(r3, "UnitTestCanonicalSystem", "systemNames", 
                        bool_to_str(us.valid())+", "+listToString(ar3), 
                        listToString(er3), out);


        List<String> ar4 = ubs.systemNames();  
        List<String> er4 = makeList("US","UK");
        boolean r4 = compareList(ar4, er4);
        printResult(r4, "UnitTestCanonicalSystem", "systemNames", 
                        listToString(ar4), 
                        listToString(er4), out);


        List<String> ar5 = ubs.typeNames();  
        List<String> er5 = makeList("Length","Area","Mass","Liquid",
                                    "Dry", "Volume"); 
        boolean r5 = compareList(ar5, er5);
        printResult(r5, "UnitTestCanonicalSystem", "typeNames", 
                        listToString(ar5), 
                        listToString(er5),  out);


        List<String> ar6 = ubs.unitNames("Dry", "UK");
        List<String> er6 = makeList( "Dry[deal]","Dry[amber]","Dry[peck]",
                                     "Dry[bag]" );
        boolean r6 = compareList(ar6, er6);
        printResult(r6, "UnitTestCanonicalSystem", "unitNames", 
                        listToString(ar6), 
                        listToString(er6), out);

        List<String> ar7 = ubs.unitNames();
        List<String> er7 = makeList("Area[hundred]",        "Area[rood]",
                                     "Area[shed]",          "Area[skein]", 
                                     "Dry[amber]",          "Dry[bag]", 
                                     "Dry[deal]",           "Dry[peck]", 
                                     "Length[nmi]",         "Length[pace]",        
                                     "Length[palm]",        "Length[point]", 
                                     "Length[rope]",        "Liquid[barrel]", 
                                     "Liquid[butt]",        "Liquid[firkin]",  
                                     "Mass[slug]",          "Mass[stone]",        
                                     "Mass[truss]",         "Mass[tub]", 
                                     "Area[acre]",          "Area[square-foot]", 
                                     "Area[square-inch]",   "Area[square-mile]", 
                                     "Area[square-yard]",   "Dry[bushel]", 
                                     "Dry[cubic-feet]",     "Dry[cubic-in]", 
                                     "Dry[cubic-yard]",     "Length[foot]", 
                                     "Length[furlong]",     "Length[inch]", 
                                     "Length[league]",      "Length[mile]", 
                                     "Length[yard]",        "Liquid[cup]", 
                                     "Liquid[gallon]",      "Liquid[quart]", 
                                     "Mass[hundredweight]", "Mass[ounce]", 
                                     "Mass[pound]");
        boolean r7 = compareList(ar7, er7);
        printResult(r7, "UnitTestCanonicalSystem", "unitNames", listToString(ar7), 
                        listToString(er7), out);


        double ar8 = ubs.convertUnit(1.0, "Length","Length","foot","US",
                                          "pace","UK", false);
        double er8 = 0.4;
        boolean r8 = (ar8 == er8 ? true : false);
        printResult(r8, "UnitTestCanonicalSystem", "convertUnit", 
                    ""+ar8, ""+er8, out);

        out.println("");
    }
}
// EOF
