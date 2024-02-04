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
// File: UnitConversionBsicTest.java
//
// Test generated unit code and base class code the generated code that inherits 
// from it.
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


public class UnitConversionBasicTest extends UnitConversionBaseTest
{
    /* 
     * Constructor
     *
     * @param brief - (input) brief test output.
     * @param path  - (input) the path to the output folder where the
     *                 test results are written.
     */
    public UnitConversionBasicTest(boolean brief, String path) 
    { 
        super(brief, path);
        openFile("BasicTest.txt");
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
        printHeader("UnitConversionBasicTest",out);

        
        testUnitT("SYSTEM_UNITS", "US", "foot", "square-foot", "pound", 
                  "gallon(US)", "gallon(US)",SYSTEM_UNITS.Instance(), out);
        testUnitS("GLOBAL_UNITS", "Welsh", "leap", "serf-town", "pwys", 
                  "hewstawr", "cubic-palf",GLOBAL_UNITS.Instance(),out);
        
        testUnitD("SI_UNITS", "kilogram",          SI_UNITS.Instance(),out);
        testUnitD("DU_UNITS", "henry",             DU_UNITS.Instance(),out);
        testUnitD("PD_UNITS", "minute",            PD_UNITS.Instance(),out);
        testUnitD("PC_UNITS", "elementary-charge", PC_UNITS.Instance(),out);
        testUnitD("PM_UNITS", "dalton",            PM_UNITS.Instance(),out);
        
        testUnit("Angle",           "solidAngle",       "Imperial[sp]",                 Angle.Instance(),           out);
        testUnit("Density",         "surfaceDensity",   "SI[kg/cm2]",                   Density.Instance(),         out);
        testUnit("EM",              "current",          "cgs[gilbert]",                 EM.Instance(),              out);
        testUnit("Energy",          "energy",           "Scientific[calorie]",          Energy.Instance(),          out);
        testUnit("Flow",            "flow",             "US[gallon-per-second]",        Flow.Instance(),            out);
        testUnit("Force",           "action",           "Scientific[planck]",           Force.Instance(),           out);
        testUnit("Frequency",       "frequency",        "Imperial[PD]",                 Frequency.Instance(),       out);
        testUnit("Luminosity",      "illuminance",      "UK[ft-C]",                     Luminosity.Instance(),      out);
        testUnit("Molarity",        "molarCharge",      "Scientific[F(12C)]",           Molarity.Instance(),        out);
        testUnit("Power",           "power",            "FPS[ft-pdl/sec]",              Power.Instance(),           out);
        testUnit("Pressure",        "pressure",         "INT[torr]",                    Pressure.Instance(),        out);
        testUnit("Radiation",       "specificEnergy",   "UK[Btu(IT)/lb]",               Radiation.Instance(),       out);
        testUnit("SpecificDensity", "specificVolume",   "UK[in3/lb]",                   SpecificDensity.Instance(), out);
        testUnit("Time",            "time",             "Scientific[year(solar-mean)]", Time.Instance(),            out);
        testUnit("VelAccJrk",       "velocity",         "SI[mm/min]",                   VelAccJrk.Instance(),       out);
        testUnit("Viscosity",       "dynamicViscosity", "FPS[reynolds]",                Viscosity.Instance(),       out);
        testUnit("Wavenumber",      "wavenumber",       "Scientific[1/ft]",             Wavenumber.Instance(),      out);
        testUnit("Temperature",     "temperature",      "French[reaumur]",              Temperature.Instance(),     out);
        testUnit("Count",           "count",            "Imperial[dozen]",              Count.Instance(),           out);
        testUnit("Computer",        "computer",         "Computer[gigabyte]",           Computer.Instance(),        out);
        
        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("UnitConversionBasicTest",duration,out);

        out.println(" ");
    }

    /*
     * Test double unit. Call all methods in input SingleSystem parent class.
     *
     * @param className - (input) the class or type of unit e.g. Angle, 
     *                             Force, etc.
     * @param sysName   - (input) the specific type of unit e.g. SolidAngle
     * @param unitName  - (input) the unit name.
     * @param sysUnit   - (input) the SingleSystem parent class.
     * @param out       - (input) the output stream to print to.
     */
    private void  testUnit(String className, 
                           String sysName, 
                           String unitName, 
                           SingleSystem sysUnit, 
                           PrintStream out)
    {
        BaseSystem xSys = sysUnit.system(sysName);
        UBASE u = xSys.unit("unit",unitName);
        String newName = unitName.replace("]","_2x]");
        out.println(" ");
        // Check BaseSystem is valid
        printResult(xSys.valid(), className + " " + sysName + " " + unitName, 
                    "valid", bool_to_str(xSys.valid()), "true",  out);

        // Check unit from BaseSystem is valid
        printResult(u.valid(), className + " " + sysName + " " + xSys.name(), 
                    "valid", bool_to_str(u.valid()) + " "+ u.toString(), 
                    "true  "+u.toString(),  out);

        // Create a unit and added it to the BaseSystem
        UBASE db = new UBASE(u.system(), newName, 2*u.value().dvalue(),  
                             u.unit(), u.type(), Version.Instance().version(),
                             u.offset().dvalue());
        boolean ax = xSys.addUnit("unit",newName,db);

        // Check that the unit was added
        printResult(ax, className + " " + sysName + " " + newName, 
                    "addUnit", bool_to_str(ax), "true ",  out);

        UBASE u2x = xSys.unit("unit",newName);
        printResult(u2x.valid(), className + " " + sysName + " " + newName, 
                    "valid", bool_to_str(u2x.valid()) + " "+ u2x.toString(), 
                    "true  "+u2x.toString(),  out);

        // remove the added unit
        boolean rx = xSys.removeUnit("unit",newName);
        printResult(rx, className + " " + sysName + " " + newName, 
                    "removeUnit", bool_to_str(rx), "true",  out);

        UBASE u2r = xSys.unit("unit",newName);
        printResult(!u2r.valid(), className + " " + sysName + " " + newName, 
                    "valid", bool_to_str(u2r.valid()) + " "+ u2r.toString(), 
                    "true  "+u2r.toString(),  out);

        List<String> unames = sysUnit.unitNames();
        List<String> snames = sysUnit.systemNames();
        List<String> tnames = sysUnit.typeNames();
        out.println(className+" "+ tnames.toString());
        out.println(className+" "+ snames.toString());
        out.println(className+" "+ unames.toString());
        out.println(" ");
    }

    /*
     * Test constants and their underlying parent class.
     *
     * @param className - (input) the class or type of unit e.g. Angle, 
     *                            Force, etc.
     * @param unitName  - (input) the unit name.
     * @param sysUnit   - (input) the ConstantGroup object (parent c
     *                             lass to all constants).
     * @param out       - (input) the output stream to print to.
     */
    private void  testUnitD(String className,
                            String unitName, 
                            ConstantGroup sysUnit, 
                            PrintStream out)
    {
        UBASE u = sysUnit.constant(unitName);
        
        printResult(u.valid(), className + " " + unitName, 
                    "valid", bool_to_str(u.valid()) + " "+ u.toString(), 
                    "true  "+ u.toString(),  out);
               
        List<String> unames = sysUnit.constantNames();
        List<String> snames = sysUnit.systemNames();
        List<String> tnames = sysUnit.typeNames();
        out.println(className+" "+ tnames.toString());
        out.println(className+" "+ snames.toString());
        out.println(className+" "+ unames.toString());
        out.println(" ");
    }
    
    /*
     * Test length, area, mass, liquid and dry volume units and their 
     * underlying parent class.
     *
     * @param className - (input) the class or type of unit e.g. Angle, 
     *                            Force, etc.
     * @param sysName   - (input) the specific type of unit e.g. SolidAngle
     * @param lenName   - (input) the length unit name.
     * @param areaName  - (input) the area unit name.
     * @param massName  - (input) the mass unit name.
     * @param liqName   - (input) the liquid volume unit name.
     * @param dryName   - (input) the dry volume unit name.
     * @param sysUnit   - (input) the UnitBaseSytem object containing the 
     *                            length, area, 
     *                     mass, liquid and dry volume units.
     * @param out       - (input) the output stream to write to.
     */
    private void  testUnitS(String className, 
                            String sysName, 
                            String lenName, 
                            String areaName, 
                            String massName, 
                            String liqName, 
                            String dryName, 
                            CanonicalSystem sysUnit, 
                            PrintStream out)
    {
        BaseSystem s = sysUnit.system(sysName);
        UBASE l = s.unit("Length",lenName);
        UBASE a = s.unit("Area",areaName);
        UBASE m = s.unit("Mass",massName);
        UBASE q = s.unit("Liquid",liqName);
        UBASE d = s.unit("Dry",dryName);
       
        printResult(s.valid(), className + " system = " + sysName + " " + s.name(), 
                    "valid", bool_to_str(s.valid()), "true ", out);


        printResult(l.valid(), "Length " + className + " " + sysName + " " + lenName, 
                    "valid", bool_to_str(l.valid()) + " "+ l.toString(), 
                    "true  "+ l.toString(),  out);

        printResult(a.valid(), "Area " + className + " " + sysName + " " + areaName, 
                    "valid", bool_to_str(a.valid()) + " "+ a.toString(), 
                    "true  "+ a.toString(),  out);

        printResult(m.valid(), "Mass " + className + " " + sysName + " " + massName, 
                    "valid", bool_to_str(m.valid()) + " "+ m.toString(), 
                     "true  "+ m.toString(), out);

        printResult(q.valid(), "Liquid " + className + " " + sysName + " " + liqName, 
                    "valid", bool_to_str(q.valid()) + " "+ q.toString(), 
                    "true  "+ q.toString(), out);

        printResult(d.valid(), "Dry " + className + " " + sysName + " " + dryName, 
                    "valid", bool_to_str(d.valid()) + " "+ d.toString(), 
                    "true  "+ d.toString(), out);
       
        boolean al = s.addUnit("Length", lenName+"_2x",  
                                new UBASE(l.system(), lenName+"_2x",  
                                          2*l.value().dvalue(), l.unit(), 
                                          l.type(), Version.Instance().version()));
        boolean aa = s.addUnit("Area",   areaName+"_2x", 
                                new UBASE(a.system(), areaName+"_2x", 
                                          2*a.value().dvalue(), a.unit(), 
                                          a.type(), Version.Instance().version()));
        boolean am = s.addUnit("Mass",   massName+"_2x", 
                                new UBASE(m.system(), massName+"_2x", 
                                          2*m.value().dvalue(), m.unit(), 
                                          m.type(), Version.Instance().version()));
        boolean aq = s.addUnit("Liquid", liqName+"_2x",  
                                new UBASE(q.system(), liqName+"_2x",  
                                          2*q.value().dvalue(), q.unit(), 
                                           q.type(), Version.Instance().version()));
        boolean ad = s.addUnit("Dry",    dryName+"_2x",  
                                new UBASE(d.system(), dryName+"_2x",  
                                          2*d.value().dvalue(), d.unit(), 
                                          d.type(), Version.Instance().version()));

        printResult(al, className + " " + sysName + " Length", 
                    "addUnit", bool_to_str(al), "true ", out);
        printResult(aa, className + " " + sysName + " Area", 
                    "addUnit", bool_to_str(aa), "true ", out);
        printResult(am, className + " " + sysName + " Mass", 
                    "addUnit", bool_to_str(am), "true ", out);
        printResult(aq, className + " " + sysName + " Liquid", 
                    "addUnit", bool_to_str(aq), "true ", out);
        printResult(ad, className + " " + sysName + " Dry", 
                    "addUnit", bool_to_str(ad), "true ", out);

       
        UBASE l2x = s.unit("Length",lenName+"_2x");
        UBASE a2x = s.unit("Area",areaName+"_2x");
        UBASE m2x = s.unit("Mass",massName+"_2x");
        UBASE q2x = s.unit("Liquid",liqName+"_2x");
        UBASE d2x = s.unit("Dry",dryName+"_2x");

        printResult(l2x.valid(), "Length ADD" + className + " " + sysName + " " + lenName+"_2x", 
                    "valid", bool_to_str(l2x.valid()) + " "+ l2x.toString(), 
                    "true  "+ l2x.toString(), out);

        printResult(a2x.valid(), "Area ADD" + className + " " + sysName + " " + areaName+"_2x", 
                    "valid", bool_to_str(a2x.valid()) + " "+ a2x.toString(), 
                    "true  "+ a2x.toString(), out);

        printResult(m2x.valid(), "Mass ADD" + className + " " + sysName + " " + massName+"_2x", 
                    "valid", bool_to_str(m2x.valid()) + " "+ m2x.toString(), 
                     "true  "+ m2x.toString(), out);

        printResult(q2x.valid(), "Liquid ADD" + className + " " + sysName + " " + liqName+"_2x", 
                    "valid", bool_to_str(q2x.valid()) + " "+ q2x.toString(), 
                    "true  "+ q2x.toString(), out);

        printResult(d2x.valid(), "Dry ADD" + className + " " + sysName + " " + dryName+"_2x", 
                    "valid", bool_to_str(d2x.valid()) + " "+ d2x.toString(), 
                    "true  "+ d2x.toString(), out);
       
        boolean rl = s.removeUnit("Length",lenName+"_2x");
        boolean ra = s.removeUnit("Area",areaName+"_2x");
        boolean rm = s.removeUnit("Mass",massName+"_2x");
        boolean rq = s.removeUnit("Liquid",liqName+"_2x");
        boolean rd = s.removeUnit("Dry",dryName+"_2x");

        printResult(rl, className + " " + sysName + " Length", 
                    "removeUnit", bool_to_str(rl), "true ",  out);
        printResult(ra, className + " " + sysName + " Area", 
                    "removeUnit", bool_to_str(ra), "true ",  out);
        printResult(rm, className + " " + sysName + " Mass", 
                    "removeUnit", bool_to_str(rm), "true ",  out);
        printResult(rq, className + " " + sysName + " Liquid", 
                    "removeUnit", bool_to_str(rq), "true ",  out);
        printResult(rd, className + " " + sysName + " Dry", 
                    "removeUnit", bool_to_str(rd), "true ",  out);

        UBASE l2r = s.unit("Length",lenName+"_2x");
        UBASE a2r = s.unit("Area",areaName+"_2x");
        UBASE m2r = s.unit("Mass",massName+"_2x");
        UBASE q2r = s.unit("Liquid",liqName+"_2x");
        UBASE d2r = s.unit("Dry",dryName+"_2x");

        printResult(!l2r.valid(), "Length REMOVE" + className + " " + sysName + " " + lenName+"_2x", 
                    "valid", bool_to_str(l2r.valid()) + " "+ l2r.toString(), 
                    "false  "+ l2r.toString(),  out);

        printResult(!a2r.valid(), "Area REMOVE" + className + " " + sysName + " " + areaName+"_2x", 
                    "valid", bool_to_str(a2r.valid()) + " "+ a2r.toString(), 
                    "false  "+ a2r.toString(),  out);

        printResult(!m2r.valid(), "Mass REMOVE" + className + " " + sysName + " " + massName+"_2x", 
                    "valid", bool_to_str(m2r.valid()) + " "+ m2r.toString(), 
                    "false  "+ m2r.toString(),  out);

        printResult(!q2r.valid(), "Liquid REMOVE" + className + " " + sysName + " " + liqName+"_2x", 
                    "valid", bool_to_str(q2r.valid()) + " "+ q2r.toString(), 
                    "false  "+ q2r.toString(),  out);

        printResult(!d2r.valid(), "Dry REMOVE" + className + " " + sysName + " " + dryName+"_2x", 
                    "valid", bool_to_str(d2r.valid()) + " "+ d2r.toString(), 
                    "false  "+ d2r.toString(),  out);
       
        List<String> unames = sysUnit.unitNames();
        List<String> snames = sysUnit.systemNames();
        List<String> tnames = sysUnit.typeNames();
        out.println(className+" "+ tnames.toString());
        out.println(className+" "+ snames.toString());
        out.println(className+" "+ unames.toString());
        out.println(" ");
    }

    /*
     * Test length, area, mass, liquid and dry volume units and their 
     * underlying parent class.
     *
     * @param className - (input) the class or type of unit e.g. Angle, 
     *                            Force, etc.
     * @param sysName   - (input) the specific type of unit e.g. SolidAngle
     * @param lenName   - (input) the length unit name.
     * @param areaName  - (input) the area unit name.
     * @param massName  - (input) the mass unit name.
     * @param liqName   - (input) the liquid volume unit name.
     * @param dryName   - (input) the dry volume unit name.
     * @param sysUnit   - (input) the UnitBaseSytem object containing the 
     *                            length, area, 
     *                     mass, liquid and dry volume units.
     * @param out       - (input) the output stream to write to.
     */
    private void  testUnitT(String className, 
                            String sysName, 
                            String lenName, 
                            String areaName, 
                            String massName, 
                            String liqName, 
                            String dryName, 
                            SystemUnits sysUnit, 
                            PrintStream out)
    {
        BaseSystem s = sysUnit.system(sysName);
        UBASE l = s.unit("Length",lenName);
        UBASE a = s.unit("Area",areaName);
        UBASE m = s.unit("Mass",massName);
        UBASE q = s.unit("Liquid",liqName);
        UBASE d = s.unit("Dry",dryName);
       
        printResult(s.valid(), className + " system = " + sysName + " " + s.name(), 
                    "valid", bool_to_str(s.valid()), "true ", out);

        printResult(l.valid(), "Length " + className + " " + sysName + " " + lenName, 
                    "valid", bool_to_str(l.valid()) + " "+ l.toString(), 
                    "true  "+ l.toString(),  out);

        printResult(a.valid(), "Area " + className + " " + sysName + " " + areaName, 
                    "valid", bool_to_str(a.valid()) + " "+ a.toString(), 
                    "true  "+ a.toString(),  out);

        printResult(m.valid(), "Mass " + className + " " + sysName + " " + massName, 
                    "valid", bool_to_str(m.valid()) + " "+ m.toString(), 
                     "true  "+ m.toString(), out);

        printResult(q.valid(), "Liquid " + className + " " + sysName + " " + liqName, 
                    "valid", bool_to_str(q.valid()) + " "+ q.toString(), 
                    "true  "+ q.toString(), out);

        printResult(d.valid(), "Dry " + className + " " + sysName + " " + dryName, 
                    "valid", bool_to_str(d.valid()) + " "+ d.toString(), 
                    "true  "+ d.toString(), out);
       
       
        List<String> unames = sysUnit.unitNames();
        List<String> snames = sysUnit.systemNames();
        List<String> tnames = sysUnit.typeNames();
        out.println(className+" "+ tnames.toString());
        out.println(className+" "+ snames.toString());
        out.println(className+" "+ unames.toString());
        out.println(" ");
    }
    
    //**************************************************************************
    // Class data members
    //**************************************************************************
}
// EOF 
