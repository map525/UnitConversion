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
# File UnitConversionUnitsTest.py
#
# Program to test unit conversion methods.
#
# Version 1.0
#
#################################################################################

from UnitConversion import UnitConversions
from UnitConversion import UBASE
from UnitConversion import Version
from Tests import UnitConversionBaseTest
import sys
from datetime import datetime


class UnitConversionUnitsTest(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Program to test unit conversion methods. 

    Attributes
    ----------
    
     _path - path to output directory for writing results.
    
    _fout  - output stream to write results to.
    
    Methods
    -------
    
    __init__     - constructor.
    
    printUnit    - write Convert object to output.
    
    printConvert - perform unit conversion and write results to output.
    
    rawUnitName  - Get the unit name from the full unit name.
    
    runTest      - run the tests; output results to screen and file. 
    """
    
    def __init__(self, brief, path):  
        """
        Constructor. Store path.
        
        Parameters
        ----------
        brief - (input, boolean) print brief test results.
        path  - (input, string) path to output folder for writing results.
        """        
        super().__init__(brief, path)

    def printUnit(self, unit, name, out):
        """
        Write Convert object to output.
        
        Parameters
        ----------
        unit - (input, string) the Convert 'unit' to write.
        name - (input, string) name of the Convert 'unit'.
        out  - (input, TextIOWrapper) the output stream to write to.
        """
        out.write("name: " + unit.name() + " type: " + unit.type() + " valid: " + str(unit.valid())+'\n')
        out.write("To System: " + unit.toSystem() + " From System: " + unit.fromSystem() + '\n')
        self.printList(unit.typeNames(), name, "Types", out)
        self.printList(unit.allSystemNames(), name, "All Systems", out)
        self.printList(unit.allUnitNames(), name, "All Units", out)

        self.printList(unit.systemNames(),   name, "Systems", out) 
        self.printList(unit.unitNames(),   "Units", name, out)

        sysNames = unit.systemNames()
        for it in sysNames:
            unitNames = unit.unitNames(it)
            for itr in unitNames:
                uName = self.rawUnitName(itr)
                ubase = unit.unit(it, uName)
                out.write(name + " " + it + " " + uName  
                               + " " + ubase.system() 
                               + " " + str(ubase.valid()) 
                               + " " + str(ubase.value()) + " " + ubase.name() 
                               + " " + ubase.unit() + " " + ubase.type() 
                               + " " + str(ubase.offset())+'\n')
        out.write('\n'+'\n')

    def printConvert(self, unit, name, out):
        """
        Perform unit conversion and write results to output.

        Parameters
        ----------
        unit - (input, Convert) the Convert 'unit' to write.
        name - (input, string) name of the Convert 'unit'.
        out  - (input, TextIOWrapper) the output stream to write to.
        """
        out.write("name: " + unit.name() + " type: " + unit.type() + " valid: " + str(unit.valid())+'\n')

        sysNames = unit.systemNames()
        for oit in sysNames:
            ounitNames = unit.unitNames(oit)
            for oitr in ounitNames:
                oName = self.rawUnitName(oitr)
                ofullName = unit.fullUnitName(oit,oName)
                obase = unit.unit(oit, oName)
                fromValue = obase.value()

                for iit in sysNames:
                    iunitNames = unit.unitNames(iit)
                    for iitr in iunitNames:
                        iName = self.rawUnitName(iitr)
                        ifullName = unit.fullUnitName(iit,iName)
                        ibase = unit.unit(iit, iName)
                        value1 = unit.convert(1.0,oName,oit,iName,iit)
                        toValue = ibase.value()
                        delta = obase.offset() - ibase.offset()
                        result = (fromValue + delta) / toValue
                        unit.toSystem(iit)
                        unit.fromSystem(oit)
                        value2 = unit.convert(1.0,oName,iName)
                        value3 = unit.convert(1.0,ofullName,ifullName, True)
                        ans = UBASE.UBASE.isERROR(value1 ) or UBASE.UBASE.isERROR(value2) \
                                                           or UBASE.UBASE.isERROR(value3)
                        self.printResult(not ans,
                                         unit.type() + " from " + oit + " " + oName  + " to " + iit + " " + iName,
                                         "convert",
                                         "1: " + str(value1) + " 2: " + str(value2) + " 3: " + str(value3),
                                         "1: " + str(result) + " 2: " + str(result) + " 3: " + str(result),
                                         out)
        out.write('\n'+'\n')
   

    def rawUnitName(self, unintName):
        """
        Get the unit name from the full unit name.

        Return
        ------
        The unit name stripped of the system name as a string.
        """        
        try:
            first = unintName.index('[') + 1
            last = unintName.index(']')
        except:
            first =  0 
            last =  len(unintName) 
        size = last - first
        uName = unintName[first : first + size]
        return uName;

    def runTest(self):
        """
        Run the tests; output results to screen and file. A file is created
        for each unit type and the results outputted to that file.
        """
        start = datetime.now()
        self.printHeader("UnitConversionUnitsTest", sys.stdout)
        units =  UnitConversions.UnitConversions.Instance()

        unitNames = units.names()
        self.printList(unitNames,   "Units", "UNITS", sys.stdout)
        
        self.openFile("ConvertUnitTest.txt")
        sx = datetime.now()
        self.printHeader("UnitConversionUnitsTest", self._fout)
        self.printList(unitNames,   "Units", "UNITS", self._fout)
        ex = datetime.now()
        dx = ex - sx
        self.printFooter("UnitConversionBasicTest", dx,self._fout)
        self.closeFile()

        for  it in unitNames:
             if it == "Invalid":
                continue
             else:
                 self.printUnit(units.converter(it), it, sys.stdout)
                 self.printConvert(units.converter(it), it, sys.stdout)


                 self.openFile(it + ".txt")
                 sx = datetime.now()
                 self.printHeader("UnitConversionUnitsTest", self._fout)
                 self.printUnit(units.converter(it), it, self._fout)
                 self.printConvert(units.converter(it), it, self._fout)
                 ex = datetime.now()
                 dx = ex - sx
                 self.printFooter("UnitConversionBasicTest", dx,self._fout)
                 self.closeFile()

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitConversionUnitsTest", diff,sys.stdout)

# EOF
