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
# File UnitConversionConvertTest.py
#
# Program to test unit conversion methods.  
#
# Version 1.0
#
#################################################################################

from UnitConversion import UnitConversions
from UnitConversion import Converter
from UnitConversion import UBASE
from UnitConversion import Version
from Tests import UnitConversionBaseTest
import sys
from datetime import datetime

class UnitConversionConvertTest(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Program to test unit conversion methods. 

    Attributes
    ----------
    
     _path - path to output directory for writing results.
    
    _fout - output stream to write results to.
    
    Methods
    -------
    
    __init__  - constructor.
    
    runOut    - run tests; output results to screen or file.

    testUnit  - test double unit. Call all methods in input CanonicalSystem parent class.
    
    testIUnit - test long unit. Call all methods in input CanonicalSystem parent class.   
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
        self.openFile("ConvertTest.txt")

    def runOut(self, out):
        """
        Run tests; output results to screen or file.

        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write output to.
        """
        start = datetime.now()
        self.printHeader("UnitConversionConvertTest", out)
        units =  UnitConversions.UnitConversions.Instance()

        solidAngle       = units.converter("SolidAngle")
        surfaceDensity   = units.converter("SurfaceDensity")
        current          = units.converter("Current")
        energy           = units.converter("Energy")
        flow             = units.converter("Flow")
        action           = units.converter("Action")
        frequency        = units.converter("Frequency")
        illuminance      = units.converter("Illuminance")
        molarCharge      = units.converter("MolarCharge")
        power            = units.converter("Power")
        pressure         = units.converter("Pressure")
        specificEnergy   = units.converter("SpecificEnergy")
        specificVolume   = units.converter("SpecificVolume")
        temperature      = units.converter("Temperature")
        time             = units.converter("Time")
        velocity         = units.converter("Velocity")
        dynamicViscosity = units.converter("DynamicViscosity")
        wavenumber       = units.converter("Wavenumber")
        count            = units.converter("Count")
        computer         = units.converter("Computer")

        length           = units.converter("Length")
        area             = units.converter("Area")
        mass             = units.converter("Mass")
        liquid           = units.converter("Liquid")
        dry              = units.converter("Dry")


        self.testUnit("SolidAngle",      "Imperial",         "Imperial[sp]",                 solidAngle,       out, True)
        self.testUnit("SurfaceDensity",  "SI",               "SI[kg/cm2]",                   surfaceDensity,   out, True)
        self.testUnit("Current",         "cgs",              "cgs[gilbert]",                 current,          out, True)
        self.testUnit("Energy",          "Scientific",       "Scientific[calorie]",          energy,           out, True)
        self.testUnit("Flow",            "US",               "US[gallon-per-second]",        flow,             out, True)
        self.testUnit("Action",          "Scientific",       "Scientific[planck]",           action,           out, True)
        self.testUnit("Frequency",       "Imperial",         "Imperial[PD]",                 frequency,        out, True)
        self.testUnit("Illuminance",     "UK",               "UK[ft-C]",                     illuminance,      out, True)
        self.testUnit("MolarCharge",     "Scientific",       "Scientific[F(12C)]",           molarCharge,      out, True)
        self.testUnit("Power",           "FPS",              "FPS[ft-pdl/sec]",              power,            out, True)
        self.testUnit("Pressure",        "INT",              "INT[torr]",                    pressure,         out, True)
        self.testUnit("SpecificEnergy",  "UK",               "UK[Btu(IT)/lb]",               specificEnergy,   out, True)
        self.testUnit("SpecificVolume",  "UK",               "UK[in3/lb]",                   specificVolume,   out, True)
        self.testUnit("Time",            "Scientific",       "Scientific[year(solar-mean)]", time,             out, True)
        self.testUnit("Velocity",        "SI",               "SI[mm/min]",                   velocity,         out, True)
        self.testUnit("DynamicViscosity","FPS",              "FPS[reynolds]",                dynamicViscosity, out, True)
        self.testUnit("Wavenumber",      "Scientific",       "Scientific[1/ft]",             wavenumber,       out, True)
        self.testUnit("Temperature",     "French",           "French[reaumur]",              temperature,      out, True)
        self.testUnit("Count",           "Imperial",         "Imperial[dozen]",              count,            out, True)
        self.testUnit("Computer",        "Computer",         "Computer[gigabyte]",           computer,         out, True)

        self.testUnit("Length",        "Welsh",      "leap",        length,       out, False)
        self.testUnit("Area",          "Welsh",      "serf-town",   area,         out, False)
        self.testUnit("Mass",          "Welsh",      "pwys",        mass,         out, False)
        self.testUnit("Liquid",        "Welsh",      "hewstawr",    liquid,       out, False)
        self.testUnit("Dry",           "Welsh",      "cubic-palf",  dry,          out, False)
         
        end = datetime.now()
        diff = end - start
        self.printFooter("UnitConversionConvertTest", diff,out)

    def testUnit(self, className, sysName, unitName, sysUnit, out, nameMod):
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
        xSys = sysUnit.typeGroup(sysName)
        u = xSys.unit(unitName)
        newName = unitName
        if nameMod:
            idx = newName.index("]")
            newName = newName[0:idx] +  "_2x]"
        else:
            newName = newName + "_2x"

        out.write("\n")
        # Check TypeGroup is valid
        self.printResult(xSys.valid(), className + " " + sysName + " " + xSys.name(), 
                         "valid", self.bool_to_str(xSys.valid()), "True",  out)
   
        # Check unit from TypeGroup is valid
        self.printResult(u.valid(), className + " " + sysName + " " + unitName, 
                         "valid", self.bool_to_str(u.valid()) + " "+ u.toString(), 
                         "True  " + u.toString(),  out)

        # Create a unit and added it to the TypeGroup
        db = UBASE.UBASE(u.system(), newName, 2*u.value(), u.unit(), u.type(), 
                         Version.Version.Instance().version(), u.offset())
        ax = xSys.addUnit(newName,db)

        # Check that the unit was added
        self.printResult(ax, className + " " + sysName + " " + newName, 
                         "addUnit", self.bool_to_str(ax), "True ",  out)

        u2x = xSys.unit(newName)
        self.printResult(u2x.valid(), className + " " + sysName + " " + newName, 
                         "valid", self.bool_to_str(u2x.valid()) + " "+ u2x.toString(), 
                         "True  "+u2x.toString(),  out)

        # remove the added unit
        rx = xSys.removeUnit(newName)
        self.printResult(rx, className + " " + sysName + " " + newName, 
                         "removeUnit", self.bool_to_str(rx), "True",  out)

        u2r = xSys.unit(newName)
        self.printResult(not u2r.valid(), className + " " + sysName + " " + newName, 
                        "valid", self.bool_to_str(u2r.valid()) + " "+ u2r.toString(), 
                        "True  "+u2r.toString(),  out)
        
        self.printList(sysUnit.unitNames(),   "unit  ", className, out)
        self.printList(sysUnit.systemNames(), "system", className, out)
        self.printList(sysUnit.typeNames(),   "type  ", className, out)
        out.write("\n")        
# EOF
