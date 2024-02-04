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
# File UnitTestConversion.py
#
# Unit test for Conversion class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import ConversionBase
from Tests import UnitConversionBaseTest

from datetime import datetime
import math

class UnitTestConversionBase(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Unit test for Conversion class.
    
    Methods
    -------
    
    __init__       - constructor.
    
    runOut         - Run the tests output results to screen and file.
    
    testConversion - test a Conversion
   
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
        self.openFile("UnitTestConversionBase.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestConversionBase", out)

        cv0 = ConversionBase.ConversionBase()
        cv1 = ConversionBase.ConversionBase("force")

        unit = dict()
        unit.update({"UK[ton-per-1000-yards]": UBASE.UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/1000-yd]"         : UBASE.UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-mile]"      : UBASE.UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/mi]"              : UBASE.UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-yard]"      : UBASE.UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/yd]"              : UBASE.UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-foot]"      : UBASE.UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/ft]"              : UBASE.UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-meter]"     : UBASE.UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/m]"               : UBASE.UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0")})
        unit.update({"SI[ton-per-kilometer]" : UBASE.UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        unit.update({"SI[t/km]"              : UBASE.UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        mapp = dict()
        mapp.update({"unit" : BaseSystem.BaseSystem("linearDensity", unit, "1.0")})
        cv2 = ConversionBase.ConversionBase("linearDensity", mapp)

        cv3 = ConversionBase.ConversionBase(cv2)
        #cv4 = cv2

        out.write("Default Constructor"+'\n')
        r1 = self.choose(cv1.valid() and cv1.name() == "force", True, False)
        ar1 = self.bool_to_str(cv1.valid()) + ", " + cv1.name()
        er1 = "True, force"
        self.printResult(r1, "UnitTestConversionBase", "Name Constructor", 
                             ar1, er1, out)
        out.write('\n')

        out.write("Name Constructor"+'\n')
        r1 = self.choose(cv1.valid() and cv1.name() == "force", True, False)
        ar1 = self.bool_to_str(cv1.valid()) + ", " + cv1.name()
        er1 = "True, force"
        self.printResult(r1, "UnitTestConversionBase", "Name Constructor", 
                             ar1, er1, out)
        out.write('\n')

        self.testConversionBase(cv2, "Constructor", out)
        self.testConversionBase(cv3, "Copy Constructor", out)
        #self.testConversionBase(cv4, "Assignment", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestConversionBase", diff, out)

    def testConversionBase(self, cv, label, out):
        """
        Test a Conversion.
        
        Parameters
        ----------
        cv   - (input, ConversionBase) ConversionBase to test.
        label - (input) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        er0 = "True"
        ar0 = cv.check()
        r0 = ar0
        self.printResult(r0, "UnitTestConversionBase", "check", ar0, er0, out)
        
        er1 = "linearDensity"
        ar1 = cv.name()
        r1 = self.choose(ar1 == er1, True, False)
        self.printResult(r1, "UnitTestConversionBase", "name", ar1, er1, out)

        r2 = cv.valid()
        ar2 = self.bool_to_str(r2)
        er2 = "True"
        self.printResult(r2, "UnitTestConversionBase", "valid", ar2, er2, out)

        er3 = "ton-per-mile"
        ar3 = cv.fullUnitName("UK", "ton-per-mile")
        r3 = self.choose(ar3 == er3, True, False)
        self.printResult(r3, "UnitTestConversionBase", "fullUnitName", ar3, er3, out)

        er4 = "ton-per-mile"
        ar4 = cv.rawUnitName("ton-per-mile")
        r4 = self.choose(ar4 == er4, True, False)
        self.printResult(r4, "UnitTestConversionBase", "rawUnitName", ar4, er4, out)

        unit = cv.unit("unit", "UK", "ton-per-foot")
        r5 = unit.valid()
        er5 = "True"
        ar5 = self.bool_to_str(unit.valid())
        self.printResult(r5, "UnitTestConversionBase", "unit", ar5, er5, out)

        bs = cv.system("unit")
        r6 = bs.valid()
        er6 = "True"
        ar6 = self.bool_to_str(r6)
        self.printResult(r6, "UnitTestConversionBase", "system", ar6, er6, out)

        us = cv.typeGroup("linearDensity","UK")
        r7 = not us.valid()
        er7 = "False"
        ar7 = self.bool_to_str(us.valid())
        self.printResult(r7, "UnitTestConversionBase", "typeGroup", ar7, er7, out)

        l8 = cv.systemNames("linearDensity")
        r8 = self.choose(len(l8) == 0, True, False)
        er8 = "0"
        ar8 = str(len(l8))
        self.printResult(r8, "UnitTestConversionBase", "systemNames", ar8, er8, out)

        l9 = cv.systemNames()
        r9 = self.choose(len(l9) == 0, True, False)
        er9 = "0"
        ar9 = str(len(l9))
        self.printResult(r9, "UnitTestConversionBase", "systemNames", ar9, er9, out)

        l10 = cv.typeNames()
        r10 = self.choose(len(l10) == 0, True, False)
        er10 = "0"
        ar10 = str(len(l10))
        self.printResult(r10, "UnitTestConversionBase", "typeNames", ar10, er10, out)

        l11 = cv.unitNames("linearDensity", "UK")
        r11 = self.choose(len(l11) == 0, True, False)
        er11 = "0"
        ar11 = str(len(l11))
        self.printResult(r11, "UnitTestConversionBase", "unitNames", ar11, er11, out)

        ar12 = cv.unitNames()
        er12 = ["SI[ton-per-kilometer]", "UK[t/1000-yd]",
                "UK[t/ft]",              "UK[t/m]",
                "UK[t/mi]",              "UK[t/yd]",
                "UK[ton-per-1000-yards]","UK[ton-per-foot]",
                "UK[ton-per-meter]",     "UK[ton-per-mile]",
                "UK[ton-per-yard]",      "SI[t/km]"]
        r12 = self.compareList(ar12,er12)
        self.printResult(r12, "UnitTestConversionBase", "unitNames", 
                         self.listToString(ar12), self.listToString(er12), out)
        
        out.write('\n')
# EOF
