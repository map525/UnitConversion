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
# This program is free software you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File UnitTestConstantGroup.py
#
# Unit test for ConstantGroup class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import ConstantGroup
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestConstantGroup(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Unit test for UnitConstantGroup class.
    
    Methods
    -------
    
    __init__          - constructor.
    
    runOut            - Run the tests output results to screen and file.
    
    testConstantGroup - Test a UnitConstantGroup.
    
    """

    def __init__(self, brief, path):
        """
        Constructor
    
        Parameters
        ----------
        brief - (input, boolean) print brief test results.
        path  - (input, string) the path to the output folder where the
                                test results are written.
        """
        super().__init__(brief, path)
        self.openFile("UnitTestConstantGroup.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestConstantGroup", out)

        ucb0 = ConstantGroup.ConstantGroup()
        ucb1 = ConstantGroup.ConstantGroup("physicalConstants", "1.0")

        constants = dict()
        constants.update({"Planck-constant"   : UBASE.UBASE("SI", "Planck-constant",   6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0")})
        constants.update({"h"                 : UBASE.UBASE("SI", "h",                 6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0")})
        constants.update({"speed-of-light"    : UBASE.UBASE("SI", "speed-of-light",    2.997924580000000E+08, "m/s",        "L/T",        "1.0")})
        constants.update({"c"                 : UBASE.UBASE("SI", "c",                 2.997924580000000E+08, "m/s",        "L/T",        "1.0")})
        constants.update({"elementary-charge" : UBASE.UBASE("SI", "elementary-charge", 1.602176634000000E-19, "A.s",        "T.I",        "1.0")})
        constants.update({"e"                 : UBASE.UBASE("SI", "e",                 1.602176634000000E-19, "A.s",        "T.I",        "1.0")})
        constants.update({"Boltzman-constant" : UBASE.UBASE("SI", "Boltzman-constant", 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0")})
        constants.update({"k"                 : UBASE.UBASE("SI", "k",                 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0")})
        constants.update({"Avogadro-constant" : UBASE.UBASE("SI", "Avogadro-constant", 6.022140760000000E+23, "1/mol",      "1/N",        "1.0")})
        constants.update({"N"                 : UBASE.UBASE("SI", "N",                 6.022140760000000E+23, "1/mol",      "1/N",        "1.0")})
        ucb2 = ConstantGroup.ConstantGroup("physicalConstants", "1.0", constants)

        ucb3 = ConstantGroup.ConstantGroup(ucb2)
        #ucb4 = ucb2

        out.write("Default Constructor"+'\n')
        r1 = not ucb0.valid()
        ar1 = self.bool_to_str(ucb0.valid())
        er1 = "False"
        self.printResult(r1, "UnitTestConstantGroup", "Default Constructor", 
                             ar1, er1, out)
        out.write('\n')

        out.write("Constructor (no constants)"+'\n')
        r2 = self.choose(ucb1.valid() and ucb1.name() == "physicalConstants", True, False)
        ar2 = self.bool_to_str(ucb1.valid()) + ", " + ucb1.name()
        er2 = "True, physicalConstants"
        self.printResult(r2, "UnitTestConstantGroup", 
                             "Constructor (no constants)", 
                             ar2, er2, out)
        out.write('\n')

        self.testConstantGroup(ucb2, "Constructor", out)
        self.testConstantGroup(ucb3, "Copy Constructor", out)
        #self.testConstantGroup(ucb4, "Assignment Operator", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestConstantGroup", diff, out)

    def testConstantGroup(self, ucb, label,out):
        """
        Test a ConstantGroup.
        
        Parameters
        ----------
        bsys   - (input, ConstantGroup) ConstantGroup to test.
        label  - (input) identifying label for output.
        out    - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        r1 = ucb.check()
        ar1 = self.bool_to_str(r1)
        er1 = "True"
        self.printResult(r1, "UnitTestConstantGroup", "check", ar1, er1, out)

        er2 = "physicalConstants"
        r2 = self.choose(ucb.name() == er2, True, False)
        ar2 = ucb.name()
        self.printResult(r2, "UnitTestConstantGroup", "name", ar2, er2, out)

        r3 = ucb.valid()
        ar3 = self.bool_to_str(r3)
        er3 = "True"
        self.printResult(r3, "UnitTestConstantGroup", "valid", ar3, er3, out)

        er4 = "1.0"
        r4 = self.choose(ucb.version() == er4, True, False)
        ar4 = ucb.version()
        self.printResult(r4, "UnitTestConstantGroup", "version", ar4, er4, out)

        unit = ucb.constant("speed-of-light")
        r5 = self.choose(unit.valid() and unit.name() == "speed-of-light" 
                                      and unit.type() == "L/T" 
                                      and unit.version() == "1.0"
                                      and unit.offset() == 0 
                                      and unit.value() == 2.997924580000000E+08
                                      and unit.system() == "SI" 
                                      and unit.unit() == "m/s", True, False)
        ar5 = unit.toString()
        er5a = "type: L/T, system: SI, name: speed-of-light, "
        er5b = "value: 2.997924580000000E+08, offset: 0.000000, "
        er5c = "unit: m/s, version: 1.0, valid: True"
        er5 = er5a + er5b + er5c
        self.printResult(r5, "UnitTestConstantGroup", "constant", ar5, er5, out)

        er6 = [ "SI" ]
        ar6 = ucb.systemNames()
        r6 = self.compareList(er6, ar6)
        self.printResult(r6, "UnitTestConstantGroup", "systemNames", 
                         self.listToString(ar6), self.listToString(er6), out)

        er7 = [ "Planck-constant",  "h",
                "speed-of-light",   "c",
                "elementary-charge","e",
                "Boltzman-constant","k",
                "Avogadro-constant","N" ]
        ar7 = ucb.constantNames()
        r7 = self.compareList(er7, ar7)
        self.printResult(r7, "UnitTestConstantGroup", "constantNames", 
                         self.listToString(ar7), self.listToString(er7), out)

        er8 = [ "physicalConstants" ]
        ar8 = ucb.typeNames()
        r8 = self.compareList(er8, ar8)
        self.printResult(r8, "UnitTestConstantGroup", "typeNames", 
                         self.listToString(ar8), self.listToString(er8), out)

        k = ucb.value("k")
        ek = 1.380649000000000E-23
        r9 = self.choose(k == ek, True, False)
        ar9 = str(k)
        er9 = str(ek)
        self.printResult(r9, "UnitTestConstantGroup", "value", ar9, er9, out)

        out.write('\n')
# EOF
