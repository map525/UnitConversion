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
// File UnitTestValue.java
//
// Unit test for Value class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import UnitConversion.*;
import java.time.LocalDateTime;
import java.time.Duration;
import java.io.PrintStream;

public class UnitTestValue extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test output.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public UnitTestValue(boolean brief, String path) 
    {
        super(brief, path);
        openFile("UnitTestValue.txt");
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
        printHeader("UnitTestValue", out);

        Value v   = new Value();
        Value vd  = new Value(3.5);
        Value vi  = new Value(3);
        Value vod = new Value(vd);
        Value voi = new Value(vi);
        //Value vxd = vd;
        //Value vxi = vi;

        out.println("Default Constructor" +'\n');
        printResult(!v.valid(), "UnitTestValue", "Default Constructor", 
                                bool_to_str(v.valid()), "false",  out);
        out.println("");
 
        testValue(vd,  "Double Constructor",  true, out);
        testValue(vi,  "Integer Constructor", false, out);
        testValue(vod, "Copy Constructor With Double",  true,  out);
        testValue(voi, "Copy Constructor With Integer", false, out);
        //testValue(vxd, "Assignment Operator With Double", true, out);
        //testValue(vxi, "Assignment Operator With Integer", false, out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitTestValue", duration, out);
    }

   /*
    * Test a value.
    * 
    * @param v -        (input) value to test.
    * @param label -    (input) identifying label for output.
    * @param isDouble - (input) true if value is a double, otherwise value is integer.
    * @param out -      (input) stream to write results to.
    */
    private void testValue(Value v, 
                           String label, 
                           boolean isDouble,
                           PrintStream out)
    {
        out.println(label);

        double ar0 = v.asDouble();
        double er0 = (isDouble ? 3.5 : 3.0);
        boolean r0 = (ar0 == er0 ? true : false);
        printResult(r0, "UnitTestValue", "asDouble", ""+ar0, 
                        ""+er0, out);

        long ar1 = v.asInteger();
        long er1 = 3;
        boolean r1 = (ar1 == er1 ? true : false);
        printResult(r1, "UnitTestValue", "asInteger", ""+ar1, 
                        ""+er1, out);

        if (isDouble)
        {
            double ar2 = v.dvalue();
            double er2 = 3.5;
            boolean r2 = (ar2 == er2 ? true : false);
            printResult(r2, "UnitTestValue", "dvalue", ""+ar2, 
                            ""+er2,  out);

            boolean r3 = (v.type() == Value.TYPE.DOUBLE ? true : false);
            Value.TYPE ar3 = v.type();
            Value.TYPE er3 = Value.TYPE.DOUBLE;
            printResult(r3, "UnitTestValue", "type (DOUBLE)", ""+ar3, 
                            ""+er3, out);
        }
        else
        {
            long ar2 = v.ivalue();
            long er2 = 3;
            boolean r2 = (ar2 == er2 ? true : false);
            printResult(r2, "UnitTestValue", "ivalue", ""+ar2, 
                            ""+er2, out);

            boolean r3 = (v.type() == Value.TYPE.UINT ? true : false);
            Value.TYPE ar3 = v.type();
            Value.TYPE er3 = Value.TYPE.UINT;
            printResult(r3, "UnitTestValue", "type (UINT)", ""+ar3, 
                            ""+er3, out);
        }

        boolean r5 = v.valid();
        String ar5 = bool_to_str(r5);
        String er5 = "true";
        printResult(r5, "UnitTestValue", "valid", ar5, er5, out);

        v.value(4);
        long ar6 = v.asInteger();
        long er6 = 4;
        boolean r6 = (ar6 == er6 ? true : false);
        printResult(r6, "UnitTestValue", "value:integer", ""+ar6, 
                        ""+er6, out);

        v.value(5.3);
        double ar7 = v.asDouble();
        double er7 = 5.3;
        boolean r7 = (ar7 == er7 ? true : false);
        printResult(r7, "UnitTestValue", "value:double", ""+ar7, 
                        ""+er7, out);

        out.println("");
    }
}
// EOF
