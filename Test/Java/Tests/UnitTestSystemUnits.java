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
// File UnitTestSystemUnits.java
//
// Unit test for SystemUnits class. 
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


public class UnitTestSystemUnits extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestSystemUnits(boolean brief, String path)
    {
        super(brief, path);
        openFile("UnitTestSystemUnits.txt");
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
        printHeader("UnitTestSystemUnits", out);

        SystemUnits ubs0 = new SystemUnits();
        SystemUnits ubs1 = new SystemUnits("force");

        HashMap<String, UBASE> length = new HashMap<String, UBASE>();
        HashMap<String, UBASE> area   = new HashMap<String, UBASE>();
        HashMap<String, UBASE> mass   = new HashMap<String, UBASE>();
        HashMap<String, UBASE> liquid = new HashMap<String, UBASE>();
        HashMap<String, UBASE> dry    = new HashMap<String, UBASE>();

        length.put("foot",             new UBASE("UK_US_Avdp", "foot",               3.048000000000000E-01, "m",  "L",  "1.0"));
        length.put("foot(UK-old)",     new UBASE("UK_US_Avdp", "foot(UK-old)",       3.047997347632710E-01, "m",  "L",  "1.0"));
        length.put("foot(US-survey)",  new UBASE("UK_US_Avdp", "foot(US-survey)",    3.048006096012190E-01, "m",  "L",  "1.0"));
        length.put("vara(US-Texas)",   new UBASE("UK_US_Avdp", "vara(US-Texas)",     8.466666666666670E-01, "m",  "L",  "1.0"));
        area.put("square-foot",        new UBASE("UK_US_Avdp", "square-foot",        9.290304000000000E-02, "m2", "L2", "1.0"));
        area.put("vara(US-Texas)",     new UBASE("UK_US_Avdp", "vara(US-Texas)",     7.168601466640000E+02, "m2", "L2", "1.0"));
        mass.put("pound",              new UBASE("UK_US_Avdp", "pound",              4.535923700000000E-01, "kg", "M",  "1.0"));
        mass.put("pound(UK-Imperial)", new UBASE("UK_US_Avdp", "pound(UK-Imperial)", 4.535923380000000E-01, "kg", "M",  "1.0"));
        mass.put("pound(apothecary)",  new UBASE("UK_US_Avdp", "pound(apothecary)",  3.732417216000000E-01, "kg", "M",  "1.0"));
        liquid.put("gallon(UK)",       new UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3", "L3", "1.0"));
        liquid.put("gallon(US)",       new UBASE("UK_US_Avdp", "gallon(US)",         3.785411784000000E-03, "m3", "L3", "1.0"));
        liquid.put("gallon(UK-beer)",  new UBASE("UK_US_Avdp", "gallon(UK-beer)",    4.621152048000000E-03, "m3", "L3", "1.0"));
        liquid.put("liter(old)",       new UBASE("UK_US_Avdp", "liter(old)",         1.000002800100000E-03, "m3", "L3", "1.0"));
        dry.put("gallon(UK)",          new UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3", "L3", "1.0"));
        dry.put("gallon(US)",          new UBASE("UK_US_Avdp", "gallon(US)",         4.404883770860000E-03, "m3", "L3", "1.0"));
        HashMap<String, BaseSystem> map = new HashMap<String, BaseSystem>();
        map.put("UK_US_Avdp", new BaseSystem("UK_US_Avdp", length, area, mass, liquid, dry, "1.0"));

        length.clear();
        area.clear();
        mass.clear();
        liquid.clear();
        dry.clear();

        length.put("fuss",            new UBASE("Swiss", "fuss",              3.000000000000000E-01, "m",  "L",  "1.0"));
        length.put("douzieme",        new UBASE("Swiss", "douzieme",          1.880000000000000E-04, "m",  "L",  "1.0"));
        area.put("arpent",            new UBASE("Swiss", "arpent",            3.600000000000000E+01, "m2", "L2", "1.0"));
        mass.put("livre",             new UBASE("Swiss", "livre",             5.000000000000000E-01, "kg", "M",  "1.0"));
        mass.put("livre(apothecary)", new UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg", "M",  "1.0"));
        liquid.put("pot",             new UBASE("Swiss", "pot",               1.500000000000000E-03, "m3", "L3", "1.0"));
        dry.put("emine",              new UBASE("Swiss", "emine",             1.500000000000000E-02, "m3", "L3", "1.0"));
        map.put("Swiss",              new BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0"));
        SystemUnits ubs2 = new SystemUnits("SystemUnits", map);

        SystemUnits ubs3 = new SystemUnits(ubs2);
        //SystemUnits ubs4 = ubs2;

        out.println("Default Constructor");
        printResult(!ubs0.valid(), "UnitTestSystemUnits", "Default Constructor", 
                                   bool_to_str(ubs0.valid()), "false", out);
        out.println("");

        out.println("Name Constructor");
        printResult(ubs1.valid(), "UnitTestSystemUnits", "Name Constructor",
                                  bool_to_str(ubs1.valid()), "true", out);
       out.println("");

        testSystemUnits(ubs2, "Unit Constructor", out);
        testSystemUnits(ubs3, "Copy Constructor", out);
        //testSystemUnits(ubs4, "Assignment Operator", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestSystemUnits", duration, out);
    }

    /*
     * Test a SystemUnits.
     * 
     * @param ubs   - (input) SystemUnits to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testSystemUnits(SystemUnits ubs, 
                                 String label,
                                 PrintStream out)
    {
        out.println(label);

        String ar0 = ubs.fullUnitName("UK", "liquid[firkin]");
        String er0 = "firkin";
        boolean r0 = ar0.equals(er0);
        printResult(r0, "UnitTestSystemUnits", "fullUnitName", ar0, er0, out);

        String ar1 = ubs.rawUnitName("pound(UK-Imperial)");
        String er1 = "pound(UK-Imperial)";
        boolean r1 = ar1.equals(er1);
        printResult(r1, "UnitTestSystemUnits", "rawUnitName", ar1, er1, out);

        List<String> ar3 = ubs.systemNames("Swiss");
        List<String> er3 = makeList( "UK_US_Avdp", "Swiss" );
        boolean r3 = compareList(ar3, er3);
        printResult(r3, "UnitTestSystemUnits", "systemNames", 
                        bool_to_str(ubs.valid()) + ", " + listToString(ar3), 
                        listToString(er3), out);

        List<String> ar4 = ubs.systemNames();
        List<String> er4 = makeList( "UK_US_Avdp", "Swiss" );
        boolean r4 = compareList(ar4, er4);
        printResult(r4, "UnitTestSystemUnits", "systemNames", 
                        listToString(ar4), listToString(er4), out);


        List<String> ar5 = ubs.typeNames();
        List<String> er5 = makeList( "Length","Area","Mass",
                                     "Liquid","Dry", "Volume");
        boolean r5 = compareList(ar5, er5);
        printResult(r5, "UnitTestSystemUnits", "typeNames", 
                        listToString(ar5), listToString(er5), out);


        List<String> ar6 = ubs.unitNames("Length", "Swiss");
        List<String> er6 = makeList( "Length[fuss]", "Length[douzieme]" );
        boolean r6 = compareList(ar6, er6);
        printResult(r6, "UnitTestSystemUnits", "unitNames", 
                        listToString(ar6), listToString(er6), out);

        List<String> ar7 = ubs.unitNames();
        List<String> er7 = makeList("Length[foot]",            "Length[foot(UK-old)]",
                                    "Length[foot(US-survey)]", "Length[vara(US-Texas)]",
                                    "Area[square-foot]",       "Area[vara(US-Texas)]",
                                    "Mass[pound]",             "Mass[pound(UK-Imperial)]",
                                    "Mass[pound(apothecary)]", "Liquid[gallon(UK)]",
                                    "Liquid[gallon(US)]",      "Liquid[gallon(UK-beer)]",
                                    "Liquid[liter(old)]",      "Dry[gallon(UK)]",
                                    "Dry[gallon(US)]",         "Length[fuss]",
                                    "Length[douzieme]",        "Area[arpent]",
                                    "Mass[livre]",             "Mass[livre(apothecary)]",
                                    "Liquid[pot]",             "Dry[emine]");
        boolean r7 = compareList(ar7, er7);
        printResult(r7, "UnitTestSystemUnits", "unitNames", 
                        listToString(ar7), listToString(er7), out);

        double ar8 = ubs.value("Liquid", "UK_US_Avdp", "gallon(UK)");
        double er8 = 4.546092000000000E-03;
        boolean r8 = (ar8 == er8 ? true : false);
        printResult(r8, "UnitTestSingleSystem", "value",
                        ""+ar8, ""+er8, out);

        out.println("");
    }
}
// EOF
