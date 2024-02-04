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
// File UnitConversionConvertTest.java
//
// Program to test unit conversion methods. 
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

public class UnitConversionConvertTest extends UnitConversionBaseTest
{
    /* 
     * Constructor
     *
     * @param brief - (input) brief test output.
     * @param path  - (input) the path to the output folder where the
     *                        test results are written.
     */
    public UnitConversionConvertTest(boolean brief, String path)
    {
        super(brief, path);
        openFile("ConvertTest.txt");
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
         printHeader("UnitConversionConvertTest",out);
         UnitConversions units =  UnitConversions.Instance();

         UnitConversion.Converter solidAngle       = units.converter("SolidAngle");
         UnitConversion.Converter surfaceDensity   = units.converter("SurfaceDensity");
         UnitConversion.Converter current          = units.converter("Current");
         UnitConversion.Converter energy           = units.converter("Energy");
         UnitConversion.Converter flow             = units.converter("Flow");
         UnitConversion.Converter action           = units.converter("Action");
         UnitConversion.Converter frequency        = units.converter("Frequency");
         UnitConversion.Converter illuminance      = units.converter("Illuminance");
         UnitConversion.Converter molarCharge      = units.converter("MolarCharge");
         UnitConversion.Converter power            = units.converter("Power");
         UnitConversion.Converter pressure         = units.converter("Pressure");
         UnitConversion.Converter specificEnergy   = units.converter("SpecificEnergy");
         UnitConversion.Converter specificVolume   = units.converter("SpecificVolume");
         UnitConversion.Converter temperature      = units.converter("Temperature");
         UnitConversion.Converter time             = units.converter("Time");
         UnitConversion.Converter velocity         = units.converter("Velocity");
         UnitConversion.Converter dynamicViscosity = units.converter("DynamicViscosity");
         UnitConversion.Converter wavenumber       = units.converter("Wavenumber");
         UnitConversion.Converter count            = units.converter("Count");
         UnitConversion.Converter computer         = units.converter("Computer");

         UnitConversion.Converter length           = units.converter("Length");
         UnitConversion.Converter area             = units.converter("Area");
         UnitConversion.Converter mass             = units.converter("Mass");
         UnitConversion.Converter liquid           = units.converter("Liquid");
         UnitConversion.Converter dry              = units.converter("Dry");


        testUnit("SolidAngle",      "Imperial",         "Imperial[sp]",                 solidAngle,       out, true);
        testUnit("SurfaceDensity",  "SI",               "SI[kg/cm2]",                   surfaceDensity,   out, true);
        testUnit("Current",         "cgs",              "cgs[gilbert]",                 current,          out, true);
        testUnit("Energy",          "Scientific",       "Scientific[calorie]",          energy,           out, true);
        testUnit("Flow",            "US",               "US[gallon-per-second]",        flow,             out, true);
        testUnit("Action",          "Scientific",       "Scientific[planck]",           action,           out, true);
        testUnit("Frequency",       "Imperial",         "Imperial[PD]",                 frequency,        out, true);
        testUnit("Illuminance",     "UK",               "UK[ft-C]",                     illuminance,      out, true);
        testUnit("MolarCharge",     "Scientific",       "Scientific[F(12C)]",           molarCharge,      out, true);
        testUnit("Power",           "FPS",              "FPS[ft-pdl/sec]",              power,            out, true);
        testUnit("Pressure",        "INT",              "INT[torr]",                    pressure,         out, true);
        testUnit("SpecificEnergy",  "UK",               "UK[Btu(IT)/lb]",               specificEnergy,   out, true);
        testUnit("SpecificVolume",  "UK",               "UK[in3/lb]",                   specificVolume,   out, true);
        testUnit("Time",            "Scientific",       "Scientific[year(solar-mean)]", time,             out, true);
        testUnit("Velocity",        "SI",               "SI[mm/min]",                   velocity,         out, true);
        testUnit("DynamicViscosity","FPS",              "FPS[reynolds]",                dynamicViscosity, out, true);
        testUnit("Wavenumber",      "Scientific",       "Scientific[1/ft]",             wavenumber,       out, true);
        testUnit("Temperature",     "French",           "French[reaumur]",              temperature,      out, true);
        testUnit("Count",           "Imperial",         "Imperial[dozen]",              count,            out, true);
        testUnit("Computer",        "Computer",         "Computer[gigabyte]",           computer,         out, true);

        testUnit("Length",          "Welsh",            "leap",                         length,           out, false);
        testUnit("Area",            "Welsh",            "serf-town",                    area,             out, false);
        testUnit("Mass",            "Welsh",            "pwys",                         mass,             out, false);
        testUnit("Liquid",          "Welsh",            "hewstawr",                     liquid,           out, false);
        testUnit("Dry",             "Welsh",            "cubic-palf",                   dry,              out, false);

         LocalDateTime end = LocalDateTime.now();
         Duration duration = Duration.between(start, end);
         printFooter("UnitConversionConvertTest",duration,out);
    }
    

    /*
     * Test double unit. Call all methods in input Convert object.
     *
     * @param className - (input) the class or type of unit e.g. Angle, 
     *                            Force, etc.
     * @param sysName   - (input) the specific type of unit e.g. SolidAngle
     * @param unitName  - (input) the unit name.
     * @param sysUnit   - (input) the converter object.
     * @param out       - (input) the output stream to print to.
     * @param nameMod   - (input) if true modify full unit name when adding a 
     *                            unit.
     */
    private void  testUnit(String className, 
                           String sysName, 
                           String unitName, 
                           UnitConversion.Converter sysUnit, 
                           PrintStream out, 
                           boolean nameMod)
    {
        TypeGroup xSys = sysUnit.typeGroup(sysName);
        UBASE u = xSys.unit(unitName);
        String newName = unitName;
        if (nameMod)
        {
            int idx = newName.indexOf("]");
            newName = newName.substring(0,idx-1) +  "_2x]";
        }
        else
        {
            newName = newName + "_2x";
        }
        out.println(" ");
        // Check TypeGroup is valid
        printResult(xSys.valid(), className + " " + sysName + " " + xSys.name(), 
                    "valid", bool_to_str(xSys.valid()), "true",  out);
   
        // Check unit from TypeGroup is valid
        printResult(u.valid(), className + " " + sysName + " " + unitName, 
                    "valid", bool_to_str(u.valid()) + " "+ u.toString(), 
                    "true  " + u.toString(),  out);

        // Create a unit and added it to the TypeGroup
        UBASE db = new UBASE(u.system(), newName, 2*u.value().dvalue(), 
                             u.unit(), u.type(), Version.Instance().version(), 
                             u.offset().dvalue());
        boolean ax = xSys.addUnit(newName,db);

        // Check that the unit was added
        printResult(ax, className + " " + sysName + " " + newName, 
                    "addUnit", bool_to_str(ax), "true ",  out);

        UBASE u2x = xSys.unit(newName);
        printResult(u2x.valid(), className + " " + sysName + " " + newName, 
                    "valid", bool_to_str(u2x.valid()) + " "+ u2x.toString(), 
                    "true  "+u2x.toString(),  out);

        // remove the added unit
        boolean rx = xSys.removeUnit(newName);
        printResult(rx, className + " " + sysName + " " + newName, 
                    "removeUnit", bool_to_str(rx), "true",  out);
                    
        UBASE u2r = xSys.unit(newName);
        printResult(!u2r.valid(), className + " " + sysName + " " + newName, 
                    "valid", bool_to_str(u2r.valid()) + " "+ u2r.toString(), 
                    "true  "+u2r.toString(),  out);
                
        printList(sysUnit.unitNames(),   "unit  ", className, out);
        printList(sysUnit.systemNames(), "system", className, out);
        printList(sysUnit.typeNames(),   "type  ", className, out);
        out.println(" ");
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
}
// EOF
