#################################################################################
#12345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
#################################################################################
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File UnitConversionBasicTest.py
#
# This class tests the UnitConversion classes and their methods that provide the 
# basic functionality for units and access to their data.
#
# Version 1.0
#
#################################################################################

from Generated import SI_UNITS
from Generated import SYSTEM_UNITS
from Generated import DU_UNITS
from Generated import PD_UNITS
from Generated import PC_UNITS
from Generated import PM_UNITS
from Generated import GLOBAL_UNITS

from Generated import Angle
from Generated import Density
from Generated import EM
from Generated import Energy
from Generated import Flow
from Generated import Force
from Generated import Frequency
from Generated import Luminosity
from Generated import Molarity
from Generated import Power
from Generated import Pressure
from Generated import Radiation
from Generated import Time
from Generated import SpecificDensity
from Generated import VelAccJrk
from Generated import Viscosity
from Generated import Wavenumber
from Generated import Temperature
from Generated import Count
from Generated import Computer
from UnitConversion import UBASE
from UnitConversion import Version
from Tests import UnitConversionBaseTest

import sys
from io import StringIO
from datetime import datetime

class UnitConversionBasicTest(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Test generated unit code and base class code the generated code that  
    inherits from it.
    
    Attributes
    ----------
    
    _path - path to output directory for writing results.
    
    _fout - output stream to write results to.
    
    Methods
    -------
    
    __init__  - constructor.
    
    testIUnit - test long unit.
    
    testUnit  - test double unit.
    
    testUnitD - test constants and their underlying parent class.
    
    testUnitS - test length, area, mass, liquid and dry volume units 
                and their underlying parent class.
    
    runOut - run tests; output results to screen or file.
    """
    def __init__(self, brief, path):  
        """
        Constructor. Store path, open output file.
        
        Parameters
        ----------
        brief - (input, boolean) print brief test results.
        path  - (input, string) path to output folder for writing results.
        """
        super().__init__(brief, path)
        self.openFile("BasicTest.txt")

  
    def runOut(self,out):
        """
        Run tests; output results to screen or file.

       Parameters
       ----------
       out - (input, TextIOWrapper) stream to write output to.
       """

        start = datetime.now()
        self.printHeader("UnitConversionBasicTest", out)
        self.testUnitS("SYSTEM_UNITS", "US", "foot", "square-foot", 
                       "pound", "gallon(US)", "gallon(US)",
                       SYSTEM_UNITS.SYSTEM_UNITS.Instance(), out)
        self.testUnitS("GLOBAL_UNITS", "Welsh", "leap", "serf-town", "pwys", 
                       "hewstawr", "cubic-palf",
                       GLOBAL_UNITS.GLOBAL_UNITS.Instance(), out)


        self.testUnitD("SI_UNITS", "kilogram",          SI_UNITS.SI_UNITS.Instance(), out)
        self.testUnitD("DU_UNITS", "henry",             DU_UNITS.DU_UNITS.Instance(), out)
        self.testUnitD("PD_UNITS", "minute",            PD_UNITS.PD_UNITS.Instance(), out)
        self.testUnitD("PC_UNITS", "elementary-charge", PC_UNITS.PC_UNITS.Instance(), out)
        self.testUnitD("PM_UNITS", "dalton",            PM_UNITS.PM_UNITS.Instance(), out)


        self.testUnit("Angle",           "solidAngle",       "Imperial[sp]",                 Angle.Angle.Instance(),                     out)
        self.testUnit("Density",         "surfaceDensity",   "SI[kg/cm2]",                   Density.Density.Instance(),                 out)
        self.testUnit("EM",              "current",          "cgs[gilbert]",                 EM.EM.Instance(),                           out)
        self.testUnit("Energy",          "energy",           "Scientific[calorie]",          Energy.Energy.Instance(),                   out)
        self.testUnit("Flow",            "flow",             "US[gallon-per-second]",        Flow.Flow.Instance(),                       out)
        self.testUnit("Force",           "action",           "Scientific[planck]",           Force.Force.Instance(),                     out)
        self.testUnit("Frequency",       "frequency",        "Imperial[PD]",                 Frequency.Frequency.Instance(),             out)
        self.testUnit("Luminosity",      "illuminance",      "UK[ft-C]",                     Luminosity.Luminosity.Instance(),           out)
        self.testUnit("Molarity",        "molarCharge",      "Scientific[F(12C)]",           Molarity.Molarity.Instance(),               out)
        self.testUnit("Power",           "power",            "FPS[ft-pdl/sec]",              Power.Power.Instance(),                     out)
        self.testUnit("Pressure",        "pressure",         "INT[torr]",                    Pressure.Pressure.Instance(),               out)
        self.testUnit("Radiation",       "specificEnergy",   "UK[Btu(IT)/lb]",               Radiation.Radiation.Instance(),             out)
        self.testUnit("SpecificDensity", "specificVolume",   "UK[in3/lb]",                   SpecificDensity.SpecificDensity.Instance(), out)
        self.testUnit("Time",            "time",             "Scientific[year(solar-mean)]", Time.Time.Instance(),                       out)
        self.testUnit("VelAccJrk",       "velocity",         "SI[mm/min]",                   VelAccJrk.VelAccJrk.Instance(),             out)
        self.testUnit("Viscosity",       "dynamicViscosity", "FPS[reynolds]",                Viscosity.Viscosity.Instance(),             out)
        self.testUnit("Wavenumber",      "wavenumber",       "Scientific[1/ft]",             Wavenumber.Wavenumber.Instance(),           out)
        self.testUnit("Temperature",     "temperature",      "French[reaumur]",              Temperature.Temperature.Instance(),         out)
        self.testUnit("Count",           "count",            "Imperial[dozen]",              Count.Count.Instance(),                     out)
        self.testUnit("Computer",        "computer",         "Computer[gigabyte]",           Computer.Computer.Instance(),               out)
        
        end = datetime.now()
        diff = end - start
        self.printFooter("UnitConversionBasicTest", diff,out)

    def testUnit(self,className, sysName, unitName, sysUnit, out):
        """
        Test double unit. Call all methods in input CanonicalSystem parent class.

        Parameters
        ----------
        className - (input, string) the class or type of unit e.g. Angle, Force, etc.
        sysName   - (input, string) the specific type of unit e.g. SolidAngle
        unitName  - (input, string) the unit name.
        sysUnit   - input, CanonicalSystem) the CanonicalSystem parent class.
        out       - input, TextIOWrapper) the output stream to print to.
        """
        xSys = sysUnit.system(sysName)
        chk = xSys.check()
        u = xSys.unit("unit",unitName)
        newName = unitName.replace("]","_2x]")
        out.write("\n")
        # Check BaseSystem is valid
        self.printResult(xSys.valid(), className + " " + sysName + " " + unitName, 
                         "valid", self.bool_to_str(xSys.valid()), "True",  out)

        # Check unit from BaseSystem is valid
        self.printResult(u.valid(), className + " " + sysName + " " + xSys.name(), 
                         "valid", self.bool_to_str(u.valid()) + " "+ u.toString(), 
                         "True  "+u.toString(),  out)

        # Create a unit and added it to the BaseSystem
        db = UBASE.UBASE(u.system(), newName, 2*u.value(), u.unit(), u.type(),
                         Version.Version.Instance().version(),  u.offset())
        ax = xSys.addUnit("unit",newName,db)

        # Check that the unit was added
        self.printResult(ax, className + " " + sysName + " " + newName, 
                         "addUnit", self.bool_to_str(ax), "True ",  out)
                    
        u2x = xSys.unit("unit",newName)
        self.printResult(u2x.valid(), className + " " + sysName + " " + newName, 
                         "valid", self.bool_to_str(u2x.valid()) + " "+ u2x.toString(), 
                         "True  "+u2x.toString(),  out)

        # remove the added unit
        rx = xSys.removeUnit("unit",newName)
        self.printResult(rx, className + " " + sysName + " " + newName, 
                         "removeUnit", self.bool_to_str(rx), "True",  out)
                    
        u2r = xSys.unit("unit",newName)
        self.printResult(not u2r.valid(), className + " " + sysName + " " + newName, 
                         "valid", self.bool_to_str(u2r.valid()) + " "+ u2r.toString(), 
                          "True  "+u2r.toString(),  out)
                    
        self.printList(sysUnit.unitNames(),   "unit  ", className, out)
        self.printList(sysUnit.systemNames(), "system", className, out)
        self.printList(sysUnit.typeNames(),   "type  ", className, out)
        out.write("\n")
   
    def testUnitD(self, className, unitName, sysUnit, out):
        """
        Test constants and their underlying parent class.

        Parameters
        ----------
        className - (input, string) the class or type of unit e.g. Angle, Force, etc.
        unitName  - (input, string) the unit name.
        sysUnit   - (input, ConstantGroup) the ConstantGroup object (parent 
                                           class to all constants).
        out       - (input, TextIOWrapper) the output stream to print to.
        """
        u = sysUnit.constant(unitName)
        self.printResult(u.valid(), className + " " + unitName, 
                    "valid", self.bool_to_str(u.valid()) + " "+ u.toString(), 
                    "True  "+ u.toString(),  out)

        self.printList(sysUnit.constantNames(), "unit  ", className, out)
        self.printList(sysUnit.systemNames(),   "system", className, out)
        self.printList(sysUnit.typeNames(),     "type  ", className, out)
        out.write("\n")

    def testUnitS(self, className, sysName, lenName, areaName, 
                  massName, liqName, dryName,sysUnit, out):
        """
        Test length, area, mass, liquid and dry volume units and their 
        underlying parent class.

        Parameters
        ----------
        className - (input, string) the class or type of unit e.g. Angle, Force, etc.
        sysName   - (input, string) the specific type of unit e.g. SolidAngle
        lenName   - (input, string) the length unit name.
        areaName  - (input, string) the area unit name.
        massName  - (input, string) the mass unit name.
        liqName   - (input, string) the liquid volume unit name.
        dryName   - (input, string) the dry volume unit name.
        sysUnit   - (input, CanonicalSystem) the UnitBaseSytem object 
                                             containing the length, 
                    area, mass, liquid and dry volume units.
        out       - (input, TextIOWrapper) the output stream to write to.
        """
        s = sysUnit.system(sysName)
        l = s.unit("Length",lenName)
        a = s.unit("Area",areaName)
        m = s.unit("Mass",massName)
        q = s.unit("Liquid",liqName)
        d = s.unit("Dry",dryName)


        self.printResult(s.valid(), className + " system = " + sysName + " " + s.name(), 
                         "valid", self.bool_to_str(s.valid()), "True ", out)

        self.printResult(l.valid(), "Length " + className + " " + sysName + " " + lenName, 
                         "valid", self.bool_to_str(l.valid()) + " "+ l.toString(), 
                         "True  "+ l.toString(),  out)

        self.printResult(a.valid(), "Area " + className + " " + sysName + " " + areaName, 
                         "valid", self.bool_to_str(a.valid()) + " "+ a.toString(), 
                         "True  "+ a.toString(),  out);

        self.printResult(m.valid(), "Mass " + className + " " + sysName + " " + massName, 
                         "valid", self.bool_to_str(m.valid()) + " "+ m.toString(), 
                         "True  "+ m.toString(), out)

        self.printResult(q.valid(), "Liquid " + className + " " + sysName + " " + liqName, 
                         "valid", self.bool_to_str(q.valid()) + " "+ q.toString(), 
                         "True  "+ q.toString(), out)

        self.printResult(d.valid(), "Dry " + className + " " + sysName + " " + dryName, 
                         "valid", self.bool_to_str(d.valid()) + " "+ d.toString(), 
                         "True  "+ d.toString(), out)
    
        al = s.addUnit("Length", lenName+"_2x",  UBASE.UBASE(l.system(), lenName+"_2x",  
                       2*l.value(), l.unit(), l.type(), Version.Version.Instance().version()))
        aa = s.addUnit("Area",   areaName+"_2x", UBASE.UBASE(a.system(), areaName+"_2x",
                       2*a.value(), a.unit(), a.type(), Version.Version.Instance().version()))
        am = s.addUnit("Mass",   massName+"_2x", UBASE.UBASE(m.system(), massName+"_2x", 
                       2*m.value(), m.unit(), q.type(), Version.Version.Instance().version()))
        aq = s.addUnit("Liquid", liqName+"_2x",  UBASE.UBASE(q.system(), liqName+"_2x",  
                       2*q.value(), q.unit(), m.type(), Version.Version.Instance().version()))
        ad = s.addUnit("Dry",    dryName+"_2x",  UBASE.UBASE(d.system(), dryName+"_2x",  
                       2*d.value(), d.unit(), d.type(), Version.Version.Instance().version()))
    
        self.printResult(al, className + " " + sysName + " Length", 
                         "addUnit", self.bool_to_str(al), "True ", out)
        self.printResult(aa, className + " " + sysName + " Area", 
                         "addUnit", self.bool_to_str(aa), "True ", out)
        self.printResult(am, className + " " + sysName + " Mass", 
                         "addUnit", self.bool_to_str(am), "True ", out)
        self.printResult(aq, className + " " + sysName + " Liquid", 
                         "addUnit", self.bool_to_str(aq), "True ", out)
        self.printResult(ad, className + " " + sysName + " Dry", 
                         "addUnit", self.bool_to_str(ad), "True ", out)

        l2x = s.unit("Length",lenName+"_2x")
        a2x = s.unit("Area",areaName+"_2x")
        m2x = s.unit("Mass",massName+"_2x")
        q2x = s.unit("Liquid",liqName+"_2x")
        d2x = s.unit("Dry",dryName+"_2x")

        self.printResult(l2x.valid(), "Length ADD" + className + " " + sysName + " " + lenName+"_2x", 
                         "valid", self.bool_to_str(l2x.valid()) + " "+ l2x.toString(), 
                         "True  "+ l2x.toString(), out)

        self.printResult(a2x.valid(), "Area ADD" + className + " " + sysName + " " + areaName+"_2x", 
                         "valid", self.bool_to_str(a2x.valid()) + " "+ a2x.toString(), 
                         "True  "+ a2x.toString(), out)

        self.printResult(m2x.valid(), "Mass ADD" + className + " " + sysName + " " + massName+"_2x", 
                         "valid", self.bool_to_str(m2x.valid()) + " "+ m2x.toString(), 
                         "True  "+ m2x.toString(), out)

        self.printResult(q2x.valid(), "Liquid ADD" + className + " " + sysName + " " + liqName+"_2x", 
                         "valid", self.bool_to_str(q2x.valid()) + " "+ q2x.toString(), 
                         "True  "+ q2x.toString(), out)

        self.printResult(d2x.valid(), "Dry ADD" + className + " " + sysName + " " + dryName+"_2x", 
                         "valid", self.bool_to_str(d2x.valid()) + " "+ d2x.toString(), 
                         "True  "+ d2x.toString(), out)
    
        rl = s.removeUnit("Length", lenName+"_2x")
        ra = s.removeUnit("Area",   areaName+"_2x")
        rm = s.removeUnit("Mass",   massName+"_2x")
        rq = s.removeUnit("Liquid", liqName+"_2x")
        rd = s.removeUnit("Dry",    dryName+"_2x")
    
        self.printResult(rl, className + " " + sysName + " Length", 
                         "removeUnit", self.bool_to_str(rl), "True ",  out)
        self.printResult(ra, className + " " + sysName + " Area", 
                         "removeUnit", self.bool_to_str(ra), "True ",  out)
        self.printResult(rm, className + " " + sysName + " Mass", 
                         "removeUnit", self.bool_to_str(rm), "True ",  out)
        self.printResult(rq, className + " " + sysName + " Liquid", 
                         "removeUnit", self.bool_to_str(rq), "True ",  out)
        self.printResult(rd, className + " " + sysName + " Dry", 
                         "removeUnit", self.bool_to_str(rd), "True ",  out)
    
        l2r = s.unit("Length",lenName+"_2x")
        a2r = s.unit("Area", areaName+"_2x")
        m2r = s.unit("Mass", massName+"_2x")
        q2r = s.unit("Liquid", liqName+"_2x")
        d2r = s.unit("Dry",dryName+"_2x")

        self.printResult(not l2r.valid(), "Length REMOVE" + className + " " + sysName + " " + lenName+"_2x", 
                         "valid", self.bool_to_str(l2r.valid()) + " "+ l2r.toString(), 
                         "False  "+ l2r.toString(),  out)

        self.printResult(not a2r.valid(), "Area REMOVE" + className + " " + sysName + " " + areaName+"_2x", 
                         "valid", self.bool_to_str(a2r.valid()) + " "+ a2r.toString(), 
                         "False  "+ a2r.toString(),  out)

        self.printResult(not m2r.valid(), "Mass REMOVE" + className + " " + sysName + " " + massName+"_2x", 
                         "valid", self.bool_to_str(m2r.valid()) + " "+ m2r.toString(), 
                         "False  "+ m2r.toString(),  out)

        self.printResult(not q2r.valid(), "Liquid REMOVE" + className + " " + sysName + " " + liqName+"_2x", 
                         "valid", self.bool_to_str(q2r.valid()) + " "+ q2r.toString(), 
                         "False  "+ q2r.toString(),  out)

        self.printResult(not d2r.valid(), "Dry REMOVE" + className + " " + sysName + " " + dryName+"_2x", 
                         "valid", self.bool_to_str(d2r.valid()) + " "+ d2r.toString(), 
                         "False  "+ d2r.toString(),  out)
    
        self.printList(sysUnit.unitNames(),   "unit  ", className, out)
        self.printList(sysUnit.systemNames(), "system", className, out)
        self.printList(sysUnit.typeNames(),   "type  ", className, out)
        out.write("\n")
# EOF
