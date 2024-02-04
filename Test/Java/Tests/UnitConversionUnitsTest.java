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
// File UnitConversionUnitsTest.java
//
// Program to test unit conversion classes and methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import java.io.*;
import java.util.*;
import javafx.util.*;
import java.time.LocalDateTime;
import java.time.Duration;
import UnitConversion.*;
import Generated.*;

public class UnitConversionUnitsTest extends UnitConversionBaseTest
{
    /* 
     * Constructor
     *
     * @param brief - (input) brief test output.
     * @param path  - (input) the path to the output folder where the
     *                        test results are written.
     */
    public UnitConversionUnitsTest(boolean brief, String path)
    {
        super(brief, path);
    }

    /*
     * Perform unit conversion and write results to output.
     *
     * @param unit - (input) the Convert 'unit' to write.
     * @param name - (input) name of the Convert 'unit'.
     * @param out  - (input) the output stream to write to.
     */
    private void printConvert(Converter unit, String name, PrintStream out)
    {
        out.println("name: " + unit.name() + " type: " + unit.type() 
                             + " valid: " + unit.valid());

        List<String> sysNames = unit.systemNames();
        for(String oit : sysNames)
        {
            List<String> ounitNames = unit.unitNames(oit);
            for(String oitr : ounitNames)
            {
                String oName = rawUnitName(oitr);
                String ofullName = unit.fullUnitName(oit,oName);
                UBASE obase = unit.unit(oit, oName);
                double fromValue = obase.value().asDouble();

                for(String iit : sysNames)
                {
                    List<String> iunitNames = unit.unitNames(iit);
                    for(String iitr : iunitNames)
                    {
                        String iName = rawUnitName(iitr);
                        String ifullName = unit.fullUnitName(iit,iName);
                        UBASE ibase = unit.unit(iit, iName);
                        double value1 = unit.convert(1.0,oName,oit,iName,iit);
                        double toValue = ibase.value().asDouble();
                        double delta = obase.offset().asDouble() - ibase.offset().asDouble();
                        double result = (fromValue + delta) / toValue;
                        unit.toSystem(iit);
                        unit.fromSystem(oit);
                        double value2 = unit.convert(1.0,oName,iName);
                        double value3 = unit.convert(1.0,ofullName,ifullName, true);
                        boolean ans = UBASE.isERROR(value1) || UBASE.isERROR(value2)
                                                            || UBASE.isERROR(value3);
                        printResult(!ans,
                                    unit.type() + " from " + oit + " " + oName  + " to " + iit + " " + iName,
                                    "convert",
                                    "1: " + ""+value1 + " 2: " + ""+value2 + " 3: " + ""+value3,
                                    "1: " + ""+result + " 2: " + ""+result + " 3: " + ""+result,
                                    out);
                    }
                }
            }
        }
        out.println('\n');
    }

    /*
     * Write Convert object to output.
     *
     * @param unit - (input) the Convert 'unit' to write.
     * @param name - (input) name of the Convert 'unit'.
     * @param out  - (input) the output stream to write to.
     */
    private void printUnit(Converter unit, String name, PrintStream out)
    {
        out.println("name: " + unit.name() + " type: " + unit.type() 
                             + " valid: " + unit.valid());
        out.println("To System: " + unit.toSystem() + " From System: " 
                                  + unit.fromSystem());
        printList(unit.typeNames(), name, "Types", out);
        printList(unit.allSystemNames(), name, "All Systems", out);
        printList(unit.allUnitNames(), name, "All Units", out);

        printList(unit.systemNames(),   name, "Systems", out); 
        printList(unit.unitNames(),  "Units", name, out);

        List<String> sysNames = unit.systemNames();
        for(String it : sysNames)
        {
            List<String> unitNames = unit.unitNames(it);
            for (String itr : unitNames)
            {
                String uName = rawUnitName(itr);
                UBASE ubase = unit.unit(it, uName);
                out.println(name + " " + it + " " 
                                 + uName + " "  
                                 + ubase.system() + " " 
                                 + ubase.valid() + " " 
                                 + ubase.value().dvalue() + " " 
                                 + ubase.name() + " " + ubase.unit() + " " 
                                 + ubase.type() + " " 
                                 + ubase.offset().dvalue());
            }
         }
        out.println('\n');
    }
    
    /*
     * Get the unit name from the full unit name.
     *
     * @param unitName - (input) the full unit name.
     *
     * @return - the unit name stripped of the system name.
     */
    private String rawUnitName(String unitName)
    {
         int first = unitName.indexOf('[');
         int last = unitName.indexOf(']');
         first = (first == -1 ? 0 : first + 1);
         last = (last == -1 ? unitName.length() : last);
         String uName = unitName.substring(first, last);
         return uName;
    }

    /*
     * Run the tests; output results to screen and file. A file is created
     * for each unit type and the results outputted to that file.
     */
    @Override
    public void run()
    {
        String ver = Version.Instance().version();
        LocalDateTime start = LocalDateTime.now();
        printHeader("UnitConversionUnitsTest",System.out);
        UnitConversions units =  UnitConversions.Instance();

        List<String> unitNames = units.names();
        printList(unitNames,   "Units", "UNITS", System.out);
        openFile("ConvertUnitTest.txt");
        printHeader("UnitConversionUnitsTest",_fout);
        printList(unitNames,   "Units", "UNITS", _fout);
        LocalDateTime endx = LocalDateTime.now();
        Duration durationx = Duration.between(start, endx);
        printFooter("UnitConversionUnitsTest",durationx,_fout);
        closeFile();

        for(String it : unitNames)
        {
             if (it == "Invalid")
             {
                continue;
             }
             else
             {
                 printUnit(units.converter(it), it, System.out);
                 printConvert(units.converter(it), it, System.out);

                 openFile(it + ".txt");
                 LocalDateTime istart = LocalDateTime.now();
                 printHeader("UnitConversionUnitsTest",_fout);
                 printUnit(units.converter(it), it, _fout);
                 printConvert(units.converter(it), it, _fout);
                 LocalDateTime iend = LocalDateTime.now();
                 Duration iduration = Duration.between(istart, iend);
                 printFooter("UnitConversionUnitsTest",iduration,_fout);
                 closeFile();
             }
        }
        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitConversionUnitsTest",duration,System.out);
    }
    
    //**************************************************************************
    // Class data members
    //**************************************************************************
}
// EOF
