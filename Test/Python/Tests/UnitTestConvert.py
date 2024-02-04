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
# File UnitTestConvert.py
#
# Unit test for Convert class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import SingleSystem
from UnitConversion import Convert
from Tests import UnitConversionBaseTest

from datetime import datetime


class UnitTestConvert(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for Convert class.
    
    Methods
    -------
    
    __init__    - constructor.
    
    runOut      - Run the tests output results to screen and file.
    
    testConvert - Test a Convert.
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
        self.openFile("UnitTestConvert.txt")


    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestConvert", out)

        unit = dict()
        unit.update({"UK[ton-per-1000-yards]" : UBASE.UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/1000-yd]"          : UBASE.UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-mile]"       : UBASE.UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/mi]"               : UBASE.UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-yard]"       : UBASE.UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/yd]"               : UBASE.UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-foot]"       : UBASE.UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/ft]"               : UBASE.UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-meter]"      : UBASE.UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/m]"                : UBASE.UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0")})
        unit.update({"SI[ton-per-kilometer]"  : UBASE.UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        unit.update({"SI[t/km]"               : UBASE.UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        mapp = dict()
        mapp.update({"linearDensity" : BaseSystem.BaseSystem("linearDensity", unit, "1.0")})
        cv = SingleSystem.SingleSystem("linearDensity", mapp)

        cvt1 = Convert.Convert("Density","UK","UK",cv)
        cvt2 = Convert.Convert(cvt1)

        self.testConvert(cvt1, "Constructor", out) 
        self.testConvert(cvt2, "Copy Constructor", out) 

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestConvert", diff, out)

    def testConvert(self, cvt, label, out):
        """
        Test a Convert.
        
        Parameters
        ----------
        usb   - (input, Convert) Convert to test.
        label - (input, string) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        er0 = "True"
        ar0 = cvt.check()
        r0 = ar0
        self.printResult(r0, "UnitTestConvert", "check", ar0, er0, out)
        
        er1 = "Density"
        ar1 = cvt.name()
        r1 = self.choose(ar1 == er1, True, False)
        self.printResult(r1, "UnitTestConvert", "name", ar1, er1, out)

        er2 = "True"
        ar2 = self.bool_to_str(cvt.valid())
        r2 = cvt.valid()
        self.printResult(r2, "UnitTestConvert", "valid", ar2, er2, out)

        er3 = "UK[ton-per-yard]"
        ar3 = cvt.fullUnitName("UK", "ton-per-yard")
        r3 = self.choose(ar3 == er3, True, False)
        self.printResult(r3, "UnitTestConvert", "fullUnitName", ar3, er3, out)

        er4 = "ton-per-yard"
        ar4 = cvt.rawUnitName("UK[ton-per-yard]")
        r4 = self.choose(ar4 == er4,  True, False)
        self.printResult(r4, "UnitTestConvert", "rawUnitName", ar4, er4, out)

        ar5 = cvt.allSystemNames()
        er5 = ["UK", "SI"]
        r5 = self.compareList(ar5, er5)
        self.printResult(r5, "UnitTestConvert", "allSystemNames", 
                         self.listToString(ar5), self.listToString(er5), out)

        ar6 = cvt.allUnitNames()
        er6 = ["UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
               "UK[ton-per-mile]",       "UK[t/mi]", 
               "UK[ton-per-yard]",       "UK[t/yd]", 
               "UK[ton-per-foot]",       "UK[t/ft]", 
               "UK[ton-per-meter]",      "UK[t/m]", 
               "SI[ton-per-kilometer]",  "SI[t/km]"]
        r6 = self.compareList(ar6, er6)
        self.printResult(r6, "UnitTestConvert", "allUnitNames",  
                         self.listToString(ar6), self.listToString(er6), out)

        er7 = "UK"
        ar7 = cvt.fromSystem()
        r7 = self.choose(ar7 == er7, True, False)
        self.printResult(r7, "UnitTestConvert", "fromSystem", ar7, er7, out)

        er8 = "UK"
        ar8 = cvt.toSystem()
        r8 = self.choose(ar8 == er8, True, False)
        self.printResult(r8, "UnitTestConvert", "toSystem", ar8, er8, out)

        cvt.fromSystem("SI")
        er9 = "SI"
        ar9 = cvt.fromSystem()
        r9 = self.choose(ar9 == er9, True, False)
        self.printResult(r9, "UnitTestConvert", "fromSystem", ar9, er9, out)
        cvt.fromSystem("UK")


        cvt.toSystem("SI")
        er10 = "SI"
        ar10 = cvt.toSystem()
        r10 = self.choose(ar10 == er10, True, False)
        self.printResult(r10, "UnitTestConvert", "toSystem", ar10, er10, out)
        cvt.toSystem("UK")

        ar11 = cvt.typeNames()
        er11 = [ "linearDensity" ]
        r11 = self.compareList(ar11, er11)
        self.printResult(r11, "UnitTestConvert", "typeNames",  
                         self.listToString(ar11),self.listToString(er11), out)
        out.write('\n')
# EOF
