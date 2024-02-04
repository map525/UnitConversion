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
// File UnitConversionConstantTest.java
//
// Program to test constant methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import java.io.*;
import java.util.*;
import javafx.util.*;
import java.time.format.DateTimeFormatter; 
import java.time.LocalDateTime;
import java.time.Duration;

import UnitConversion.*;
import Generated.*;

public class UnitConversionConstantTest extends UnitConversionBaseTest
{
    /* 
     * Constructor
     *
     * @param brief  - (input) brief test output.
     * @param path   - (input) the path to the output folder where the
     *                         test results are written.
     */
    public UnitConversionConstantTest(boolean brief, String path)
    {
        super(brief, path);
        openFile("ConstantTest.txt");
     }

    /*
     * Write constant to output stream.
     *
     * @param constant - (input) constant to output.
     * @param name     - (input) constant name.
     * @param out      - (input) stream to write output to.
     *
     */
    private void printConstant(ConstantGroup constant, 
                               String name, 
                               PrintStream out)
    {
        List<String> unitNames = constant.constantNames();
        printList(unitNames,   "Constants", name, out);
        for(String it : unitNames)
        {
           UBASE u = constant.constant(it);
           double val = constant.value(it);
           printResult(u.valid(), name + " " + it, "valid",
                       bool_to_str(u.valid()) +", "+ u.toString(), 
                       "true",out);
        }
        out.println(" ");
    }

    /*
     * Run tests; output results to screen or file.
     *
     * @param out - (input) stream to write output to.
     */
    @Override 
    protected void runOut(PrintStream out)
    {        
        LocalDateTime start = LocalDateTime.now();
        printHeader("UnitConversionConstantTest",out);
        Constants constants =  Constants.Instance();

        List<String> constantNames = constants.names();
        printList(constantNames,   "Constants", "CONSTANTS", out);
       
        for (String it : constantNames)
        {
           if( it == "Invalid")
           {
               continue;
           }
           else
           {
               printConstant(constants.constant(it), it, out);
           }
        }
        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitConversionConstantTest",duration,out);
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
}
// EOF
