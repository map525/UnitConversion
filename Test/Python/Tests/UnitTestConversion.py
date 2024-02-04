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
from UnitConversion import Conversion
from Tests import UnitConversionBaseTest

from datetime import datetime
import math

class UnitTestConversion(UnitConversionBaseTest.UnitConversionBaseTest):
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
        self.openFile("UnitTestConversion.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestConversion", out)

        cv0 = Conversion.Conversion()
        cv1 = Conversion.Conversion("force")

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
        cv2 = Conversion.Conversion("linearDensity", mapp)

        cv3 = Conversion.Conversion(cv2)
        #cv4 = cv2

        out.write("Default Constructor"+'\n')
        r1 = self.choose(cv1.valid() and cv1.name() == "force", True, False)
        ar1 = self.bool_to_str(cv1.valid()) + ", " + cv1.name()
        er1 = "True, force"
        self.printResult(r1, "UnitTestConversion", "Name Constructor", 
                             ar1, er1, out)
        out.write('\n')

        out.write("Name Constructor"+'\n')
        r1 = self.choose(cv1.valid() and cv1.name() == "force", True, False)
        ar1 = self.bool_to_str(cv1.valid()) + ", " + cv1.name()
        er1 = "True, force"
        self.printResult(r1, "UnitTestConversion", "Name Constructor", 
                             ar1, er1, out)
        out.write('\n')

        self.testConversion(cv2, "Constructor", out)
        self.testConversion(cv3, "Copy Constructor", out)
        #self.testConversion(cv4, "Assignment", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestConversion", diff, out)

    def testConversion(self, cv, label, out):
        """
        Test a Conversion.
        
        Parameters
        ----------
        usb   - (input, UnitSystem) UnitSystem to test.
        label - (input) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        r1 = (cv.validateType("linearDensity", "linearDensity") 
              and not cv.validateType("linearDensity", "density"), True, False)
        ar1 = self.bool_to_str(cv.validateType("linearDensity", "linearDensity")) \
                               + ", " + self.bool_to_str(cv.validateType("linearDensity", "density"))
        er1 = "True, False"
        self.printResult(r1, "UnitTestConversion", "validateType", ar1, er1, out)

        newUnit = UBASE.UBASE("Imperial", "pound-per-yard", 
                              4.960546478565180E-01, "kg/m", "M/L", "1.0")
        ans2 = cv.addUnit("unit", "Imperial", "pound-per-yard", newUnit)
        addUnit = cv.unit("unit", "Imperial","pound-per-yard")
        r2 = self.choose(ans2 and addUnit.valid(), True, False)
        ar2 = self.bool_to_str(ans2) + ", " + self.bool_to_str(addUnit.valid())
        er2 = "True, True"
        self.printResult(r2, "UnitTestConversion", "addUnit", ar2, er2, out)


        ans3 = cv.removeUnit("unit", "Imperial","pound-per-yard")
        removeUnit = cv.unit("unit", "Imperial","pound-per-yard")
        r3 = self.choose(ans3 and not removeUnit.valid(), True, False)
        ar3 = self.bool_to_str(ans3) + ", " + self.bool_to_str(removeUnit.valid())
        er3 = "True, False"
        self.printResult(r3, "UnitTestConversion", "removeUnit", ar3, er3, out)

        x = cv.convertUnit(1.0, "linearDensity",  "linearDensity",  
                                "ton-per-foot", "UK",  "ton-per-yard", "UK", False)
        ex   = UBASE.UBASE.ERROR
        r4  = UBASE.UBASE.isERROR(x) #self.choose(x == ex, True, False)
        ar4 = str(x)
        er4 = str(ex)
        self.printResult(r4, "UnitTestConversion", "convertUnit", ar4, er4, out)
        
        out.write('\n')
# EOF
