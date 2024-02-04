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
# File UnitTestTypeGroup.py
#
# Unit test for TypeGroup class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import TypeGroup
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestTypeGroup(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for TypeGroup class.
    
    Methods
    -------
    
    __init__      - constructor.
    
    runOut        - Run the tests output results to screen and file.
    
    testTypeGroup - Test a TypeGroup.
    
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
        self.openFile("UnitTestTypeGroup.txt")


    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestTypeGroup", out)

        us0 = TypeGroup.TypeGroup()
        us5 = TypeGroup.TypeGroup("Volume","1.0")

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
        us1 = TypeGroup.TypeGroup("linearDensity", unit,"1.0")

        us2 = TypeGroup.TypeGroup(us1)
        #us3 = us1

        out.write("Default Constructor"+'\n')
        self.printResult(not us0.valid(), "UnitTestTypeGroup", 
                         "Default Constructor", 
                         self.bool_to_str(us0.valid()), "False", out)
        out.write('\n')

        out.write("Empty Constructor"+'\n')
        self.printResult(us5.valid(), "UnitTestTypeGroup", "Empty Constructor", 
                         self.bool_to_str(us0.valid())+", "+us5.name(), 
                         "True, Volume", out)
        
        out.write('\n')

        self.testTypeGroup(us1, "Constructor", out)
        self.testTypeGroup(us2, "Copy Constructor", out)
        #self.testTypeGroup(us3, "Assignment Operator", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestTypeGroup", diff, out)

    def testTypeGroup(self, usys, label, out):
        """
        Test a TypeGroup.
        
        Parameters
        ----------
        usb   - (input, TypeGroup) TypeGroup to test.
        label - (input) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        self.printResult(usys.check(), "UnitTestTypeGroup", "check", 
                         self.bool_to_str(usys.check()), "True",  out)
        self.printResult(usys.valid(), "UnitTestTypeGroup", "valid", 
                         self.bool_to_str(usys.valid()), "True", out)

        er1 = "linearDensity"
        ar1 = usys.name()
        r1 = self.choose(ar1 == er1, True, False)
        self.printResult(r1, "UnitTestTypeGroup", "name", ar1, er1, out)

        er2 = "1.0"
        ar2 = usys.version()
        r2 = self.choose(ar2 == er2, True, False)
        self.printResult(r2, "UnitTestTypeGroup", "version", ar2, er2, out)


        unit = usys.unit("UK[ton-per-foot]")
        r3 = self.choose(unit.valid() and unit.name() == "ton-per-foot" 
                           and unit.type() == "M/L" 
                           and unit.version() == "1.0"
                           and unit.offset() == 0 
                           and unit.value() == 3.333487233595800E+03
                           and unit.system() == "UK" 
                           and unit.unit() == "kg/m", True, False)
        ar3 = unit.toString()
        er3a = "type: M/L, system: UK,  name: UK[ton-per-foot], "
        er3b = "value: 3.333487233595800E+03, offset: 0, unit: kg/m, "
        er3c = "version: 1.0, valid: True"
        er3 = er3a + er3b + er3c
        self.printResult(r3, "UnitTestTypeGroup", "unit", ar3, er3, out)

        newUnit = UBASE.UBASE("Imperial", "pound-per-yard",  
                              4.960546478565180E-01,  
                              "kg/m", "M/L", "1.0")
        ans1 = usys.addUnit("Imperial[pound-per-yard]", newUnit)
        addUnit = usys.unit("Imperial[pound-per-yard]")
        r4 = self.choose(ans1 and addUnit.valid(), True, False)
        er4 = "True, True"
        ar4 = self.bool_to_str(ans1) + ", " + self.bool_to_str(addUnit.valid())
        self.printResult(r4, "UnitTestTypeGroup", "addUnit", ar4, er4, out)

        result = usys.removeUnit("Imperial[pound-per-yard]")
        removeUnit = usys.unit("Imperial[pound-per-yard]")
        r5 = self.choose(result and not removeUnit.valid(), True, False)
        er5 = "True, False"
        ar5 = self.bool_to_str(result) + ", " + self.bool_to_str(not removeUnit.valid())
        self.printResult(r5, "UnitTestTypeGroup", "removeUnit", ar5, er5, out)

        er6 = ["UK","SI" ]
        ar6 = usys.systemNames()
        r6 = self.compareList(er6, ar6)
        self.printResult(r6, "UnitTestTypeGroup", "systemNames", 
                         self.listToString(ar6), self.listToString(er6), out)

        er7 = ["UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
               "UK[ton-per-mile]",       "UK[t/mi]",
               "UK[ton-per-yard]",       "UK[t/yd]", 
               "UK[ton-per-foot]",       "UK[t/ft]",
                "UK[ton-per-meter]",     "UK[t/m]", 
               "SI[ton-per-kilometer]",  "SI[t/km]"]
        ar7 = usys.unitNames()
        r7 = self.compareList(er7, ar7)
        self.printResult(r7, "UnitTestTypeGroup", "unitNames", 
                         self.listToString(ar7), self.listToString(er7), out)

        out.write('\n')
# EOF
