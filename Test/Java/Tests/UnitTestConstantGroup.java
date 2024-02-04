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
// File UnitTestConstantGroup.java
//
// Unit test for ConstantGroup class. 
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

public class UnitTestConstantGroup extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestConstantGroup(boolean brief, String path)
    {
        super(brief, path);
        openFile("UnitTestConstantGroup.txt");
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
        printHeader("UnitTestConstantGroup", out);

        ConstantGroup ucb0 = new ConstantGroup();
        ConstantGroup ucb1 = new ConstantGroup("physicalConstants", "1.0");

        HashMap<String, UBASE> constants = new HashMap<String, UBASE>();
        constants.put("Planck-constant",   new UBASE("SI", "Planck-constant",   6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0"));
        constants.put("h",                 new UBASE("SI", "h",                 6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0"));
        constants.put("speed-of-light",    new UBASE("SI", "speed-of-light",    2.997924580000000E+08, "m/s",        "L/T",        "1.0"));
        constants.put("c",                 new UBASE("SI", "c",                 2.997924580000000E+08, "m/s",        "L/T",        "1.0"));
        constants.put("elementary-charge", new UBASE("SI", "elementary-charge", 1.602176634000000E-19, "A.s",        "T.I",        "1.0"));
        constants.put("e",                 new UBASE("SI", "e",                 1.602176634000000E-19, "A.s",        "T.I",        "1.0"));
        constants.put("Boltzman-constant", new UBASE("SI", "Boltzman-constant", 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0"));
        constants.put("k",                 new UBASE("SI", "k",                 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0"));
        constants.put("Avogadro-constant", new UBASE("SI", "Avogadro-constant", 6.022140760000000E+23, "1/mol",      "1/N",        "1.0"));
        constants.put("N",                 new UBASE("SI", "N",                 6.022140760000000E+23, "1/mol",      "1/N",        "1.0"));
        ConstantGroup ucb2 = new ConstantGroup("physicalConstants", "1.0", constants);

        ConstantGroup ucb3 = new ConstantGroup(ucb2);
        //ConstantGroup ucb4 = ucb2;

        out.println("Default Constructor");
        boolean r1 = !ucb0.valid();
        String ar1 = bool_to_str(ucb0.valid());
        String er1 = "false";
        printResult(r1, "UnitTestConstantGroup", "Default Constructor", 
                        ar1, er1, out);
        out.println("");

        out.println("Constructor (no constants)");
        boolean r2 = (ucb1.valid() && ucb1.name() == "physicalConstants" ? true : false);
        String ar2 = bool_to_str(ucb1.valid()) + ", " + ucb1.name();
        String er2 = "true, physicalConstants";
        printResult(r2, "UnitTestConstantGroup", "Constructor (no constants)", 
                        ar2, er2, out);
        out.println("");

        testConstantGroup(ucb2, "Constructor", out);
        testConstantGroup(ucb3, "Copy Constructor", out);
        //testConstantGroup(ucb4, "Assignment Operator", out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestConstantGroup", duration, out);
    }

    /*
     * Test a ConstantGroup.
     * 
     * @param usb   - (input) ConstantGroup to test.
     * @param label - (input) identifying label for output.
     * @param out   - (input) stream to write results to.
     */
    private void testConstantGroup(ConstantGroup ucb, 
                                   String label,
                                   PrintStream out)
    {
        out.println(label);

        boolean r1 = ucb.check();
        String ar1 = bool_to_str(r1);
        String er1 = "true";
        printResult(r1, "UnitTestConstantGroup", "check", ar1, er1, out);

        String er2 = "physicalConstants";
        boolean r2 = (ucb.name() == er2 ? true : false);
        String ar2 = ucb.name();
        printResult(r2, "UnitTestConstantGroup", "name", ar2, er2, out);

        boolean r3 = ucb.valid();
        String ar3 = bool_to_str(r3);
        String er3 = "true";
        printResult(r3, "UnitTestConstantGroup", "valid", ar3, er3,out);

        String er4 = "1.0";
        boolean r4 = (ucb.version() == er4 ? true : false);
        String ar4 = ucb.version();
        printResult(r4, "UnitTestConstantGroup", "version", ar4, er4, out);

        UBASE unit = ucb.constant("speed-of-light");
        boolean r5 = (unit.valid() && unit.name() == "speed-of-light" 
                                   && unit.type() == "L/T" 
                                   && unit.version() == "1.0"
                                   && unit.offset().asDouble() == 0 
                                   && unit.value().asDouble() == 2.997924580000000E+08
                                   && unit.system() == "SI" 
                                   && unit.unit() == "m/s" ? true : false);
        String ar5 = unit.toString();
        String er5a = "type: L/T, system: SI, name: speed-of-light, ";
        String er5b = "value: 2.997924580000000E+08, offset: 0.000000, ";
        String er5c = "unit: m/s, version: 1.0, valid: true";
        String er5 = er5a + er5b + er5c;
        printResult(r5, "UnitTestConstantGroup", "constant", ar5, er5, out);

        List<String> er6 = makeList( "SI" );
        List<String> ar6 = ucb.systemNames();
        boolean r6 = compareList(er6, ar6);
        printResult(r6, "UnitTestConstantGroup", "systemNames", listToString(ar6), 
                        listToString(er6), out);

        List<String> er7 = makeList("Planck-constant",   "h",
                                    "speed-of-light",    "c",
                                    "elementary-charge", "e",
                                    "Boltzman-constant", "k",
                                    "Avogadro-constant", "N");
        List<String> ar7 = ucb.constantNames();
        boolean r7 = compareList(er7, ar7);
        printResult(r7, "UnitTestConstantGroup", "constantNames", listToString(ar7), 
                        listToString(er7), out);

        List<String> er8 = makeList( "physicalConstants" );
        List<String> ar8 = ucb.typeNames();
        boolean r8 = compareList(er8, ar8);
        printResult(r8, "UnitTestConstantGroup", "typeNames", listToString(ar8), 
                        listToString(er8), out);

        double k = ucb.value("k");
        double ek = 1.380649000000000E-23;
        boolean r9 = (k == ek ? true : false);
        String ar9 = ""+k;
        String er9 = ""+ek;
        printResult(r9, "UnitTestConstantGroup", "value", ar9, er9, out);


        out.println("");
    }
}
// EOF
