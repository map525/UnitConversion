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
# File UnitTestBaseSystem.py
#
# Unit test for BaseSystem class. 
#
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from Tests import UnitConversionBaseTest

from datetime import datetime


class UnitTestBaseSystem(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for BaseSystem class.
    
    Methods
    -------
    
    __init__       - constructor.
    
    runOut         - Run the tests output results to screen and file.
    
    testBaseSystem - Test a BaseSystem.
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
        self.openFile("UnitTestBaseSystem.txt")


    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestBaseSystem", out)

        bs0 = BaseSystem.BaseSystem()

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
        bs1 = BaseSystem.BaseSystem("linearDensity", unit, "1.0")

        length = dict()
        area   = dict()
        mass   = dict()
        liquid = dict()
        dry    = dict()

        length.update({"foot"        : UBASE.UBASE("US", "foot",          3.048000000000000E-01, "m",  "L",  "1.0")})
        length.update({"furlong"     : UBASE.UBASE("US", "furlong",       2.011680000000000E+02, "m",  "L",  "1.0")})
        length.update({"inch"        : UBASE.UBASE("US", "inch",          2.540000000000000E-02, "m",  "L",  "1.0")})
        length.update({"league"      : UBASE.UBASE("US", "league",        5.559552000000000E+03, "m",  "L",  "1.0")})
        length.update({"mile"        : UBASE.UBASE("US", "mile",          1.609344000000000E+03, "m",  "L",  "1.0")})
        length.update({"yard"        : UBASE.UBASE("US", "yard",          9.144000000000000E-01, "m",  "L",  "1.0")})
        area.update({"acre"          : UBASE.UBASE("US", "acre",          4.046856422400000E+03, "m2", "L2", "1.0")})
        area.update({"square-inch"   : UBASE.UBASE("US", "square-inch",   6.451600000000000E-04, "m2", "L2", "1.0")})
        area.update({"square-foot"   : UBASE.UBASE("US", "square-foot",   9.290304000000000E-02, "m2", "L2", "1.0")})
        area.update({"square-mile"   : UBASE.UBASE("US", "square-mile",   2.589988110336000E+06, "m2", "L2", "1.0")})
        area.update({"square-yard"   : UBASE.UBASE("US", "square-yard",   8.361273600000000E-01, "m2", "L2", "1.0")})
        mass.update({"hundredweight" : UBASE.UBASE("US", "hundredweight", 5.080234544000000E+01, "kg", "M",  "1.0")})
        mass.update({"ounce"         : UBASE.UBASE("US", "ounce",         2.834952312500000E-02, "kg", "M",  "1.0")})
        mass.update({"pound"         : UBASE.UBASE("US", "pound",         4.535923700000000E-01, "kg", "M",  "1.0")})
        liquid.update({"cup"         : UBASE.UBASE("US", "cup",           2.365882365000000E-04, "m3", "L3", "1.0")})
        liquid.update({"gallon"      : UBASE.UBASE("US", "gallon",        3.785411784000000E-03, "m3", "L3", "1.0")})
        liquid.update({"quart"       : UBASE.UBASE("US", "quart",         9.463529460000000E-04, "m3", "L3", "1.0")})
        dry.update({"bushel"         : UBASE.UBASE("US", "bushel",        3.523907016688000E-02, "m3", "L3", "1.0")})
        dry.update({"cubic-in"       : UBASE.UBASE("US", "cubic-in",      1.638706400000000E-05, "m3", "L3", "1.0")})
        dry.update({"cubic-feet"     : UBASE.UBASE("US", "cubic-feet",    2.831684659200000E-02, "m3", "L3", "1.0")})
        dry.update({"cubic-yard"     : UBASE.UBASE("US", "cubic-yard",    7.645548579840000E-01, "m3", "L3", "1.0")})
        bs2 = BaseSystem.BaseSystem("US", length, area, mass, liquid, dry, "1.0")

        bs3 = BaseSystem.BaseSystem(bs2)
        #bs4 = bs1

        out.write("Default Constructor"+'\n')
        self.printResult(not bs0.valid(), "UnitTestBaseSystem", 
                                          "Default Constructor",
                                          self.bool_to_str(bs0.valid()), 
                                          "False",  out)             
        out.write('\n')

        self.testBaseSystem(bs1, "Unit Constructor", True, out)
        self.testBaseSystem(bs2, "Length, area, mass, liquid, dry Constructor", False, out)
        self.testBaseSystem(bs3, "Copy Constructor With length, area, mass, liquid, dry", False, out)
        #self.testBaseSystem(bs4, "Assignment Operator With Unit", True, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestBaseSystem", diff, out)


    def testBaseSystem(self, bsys, label, isUnit, out):
        """
        Test a BaseSystem.
        
        Parameters
        ----------
        bsys   - (input, BaseSystem) UnitSystem to test.
        label  - (input) identifying label for output.
        isUnit - (input, boolean) True if BaseSytem contains a single unit system
        out    - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        r1 = bsys.check()
        er1 = "True"
        ar1 = self.bool_to_str(r1)
        self.printResult(r1, "UnitTestBaseSystem", "check", ar1, er1, out)

        er2 = self.choose(isUnit, "linearDensity", "US")
        ar2 = bsys.name()
        r2 = self.choose(ar2 == er2, True, False)
        self.printResult(r2, "UnitTestBaseSystem", "name", ar2, er2, out)

        r3 = bsys.valid()
        er3 = "True"
        ar3 = self.bool_to_str(r3)
        self.printResult(r3, "UnitTestBaseSystem", "valid", ar3, er3, out)

        er4 = "1.0"
        ar4 = bsys.version()
        r4 = self.choose(ar4 == er4, True, False)
        self.printResult(r4, "UnitTestBaseSystem", "version", ar4, er4, out)

        if isUnit:
            unit = bsys.unit("unit", "UK[ton-per-foot]")
            r5 = self.choose(unit.valid() and unit.name() == "ton-per-foot" 
                                          and unit.type() == "M/L" 
                                          and unit.version() == "1.0"
                                          and unit.offset() == 0 
                                          and unit.value() == 3.333487233595800E+03
                                          and unit.system() == "UK" 
                                          and unit.unit() == "kg/m", True, False)

            ar5 = unit.toString()
            er5a = "type: M/L, system: UK, name: UK[ton-per-foot], "
            er5b = "value: 3.333487233595800E+03, offset: 0.000000, "
            er5c = "unit: kg/m, version: 1.0, valid: True"
            er5 = er5a + er5b + er5c
            self.printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5, out)


            newUnit = UBASE.UBASE("Imperial", "pound-per-yard", 
                                   4.960546478565180E-01, 
                                   "kg/m", "M/L", "1.0")
            ans = bsys.addUnit("unit", "Imperial[pound-per-yard]", newUnit)
            addUnit = bsys.unit("unit", "Imperial[pound-per-yard]")
            r6 = self.choose(ans and addUnit.valid(), True, False)
            ar6 = self.bool_to_str(ans) + ", " + self.bool_to_str(addUnit.valid())
            er6 = "True, True"
            self.printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6,  out)

            result = bsys.removeUnit("unit", "Imperial[pound-per-yard]")
            removeUnit = bsys.unit("unit", "Imperial[pound-per-yard]")
            r7 = self.choose(result and not removeUnit.valid(), True, False)
            ar7 = self.bool_to_str(result) + ", " + self.bool_to_str(removeUnit.valid())
            er7 = "True, False"
            self.printResult(r7, "UnitTestBaseSystem", "removeUnit", ar7, er7, out)


            er8 = [ "unit" ]
            ar8 = bsys.typeNames()
            r8 = self.compareList(er8, ar8)
            self.printResult(r8, "UnitTestBaseSystem", "typeNames", 
                             self.listToString(ar8), self.listToString(er8), out)


            er9 = [ "UK","SI" ]
            ar9 = bsys.systemNames("unit")
            r9 = self.compareList(er9, ar9)
            self.printResult(r9, "UnitTestBaseSystem", "systemNames", 
                             self.listToString(ar9), self.listToString(er9), out)

            er10 = ["UK[ton-per-1000-yards]", 
                    "UK[t/1000-yd]", "UK[ton-per-mile]", 
                    "UK[t/mi]",      "UK[ton-per-yard]", 
                    "UK[t/yd]",      "UK[ton-per-foot]", 
                    "UK[t/ft]",      "UK[ton-per-meter]", 
                    "UK[t/m]",       "SI[ton-per-kilometer]", 
                    "SI[t/km]"]
            ar10 = bsys.unitNames("unit")
            r10 = self.compareList(er10, ar10)
            self.printResult(r10, "UnitTestBaseSystem", "unitNames", 
                             self.listToString(ar10), self.listToString(er10),  
                             out)

            us = bsys.typeGroup("unit")
            er11 = "True, linearDensity"
            ar11 = self.bool_to_str(us.valid()) + ", " + us.name()
            r11 = self.choose(us.valid() and us.name() == "linearDensity", True, False)
            self.printResult(r11, "UnitTestBaseSystem", "typeGroup", ar11, er11, 
                             out)
        else:
            unit = bsys.unit("Mass", "pound")
            r5 = self.choose(unit.valid() and unit.name() == "pound" 
                                          and unit.type() == "M" 
                                          and unit.version() == "1.0"
                                          and unit.offset() == 0 
                                          and unit.value() == 4.535923700000000E-01
                                          and unit.system() == "US" 
                                          and unit.unit() == "kg", True, False)
            ar5 = unit.toString()
            er5a = "type: M, system: US, name: pound, "
            er5b = "value: 4.535923700000000E-01, offset: 0.000000, "
            er5c = "unit: kg, version: 1.0, valid: True"
            er5 = er5a + er5b + er5c
            self.printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5, out)

            newUnit = UBASE.UBASE("US", "pint", 4.731764730000000E-04, 
                                        "m3", "L3", "1.0")
            ans = bsys.addUnit("Liquid", "pint", newUnit)
            addUnit = bsys.unit("Liquid", "pint")
            r6 = self.choose(ans and addUnit.valid(), True, False)
            ar6 = self.bool_to_str(ans) + ", " + self.bool_to_str(addUnit.valid())
            er6 = "True, True"
            self.printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6, out)

            result = bsys.removeUnit("Liquid", "pint")
            removeUnit = bsys.unit("Liquid", "pint")
            r7 = self.choose(result and not removeUnit.valid(), True, False)
            ar7 = self.bool_to_str(result) + ", " + self.bool_to_str(removeUnit.valid())
            er7 = "True, False"
            self.printResult(r7, "UnitTestBaseSystem", "removeUnit", ar7, er7, out)

            er8 = [ "Length","Area","Mass","Liquid","Dry", "Volume"]
            ar8 = bsys.typeNames()
            r8 = self.compareList(er8, ar8)
            self.printResult(r8, "UnitTestBaseSystem", "typeNames", 
                             self.listToString(ar8), self.listToString(er8), out)

            er9 = [ "US" ]
            ar9 = bsys.systemNames("Dry")
            r9 = self.compareList(er9, ar9)
            self.printResult(r9, "UnitTestBaseSystem", "systemNames", 
                             self.listToString(ar9), self.listToString(er9), out)

            er10 =["acre", "square-inch","square-foot",
                   "square-mile","square-yard" ]
            ar10 = bsys.unitNames("Area")
            r10 = self.compareList(er10, ar10)
            self.printResult(r10, "UnitTestBaseSystem", "unitNames", 
                             self.listToString(ar10), self.listToString(er10), out)

            us = bsys.typeGroup("Length")
            er11 = "True, Length"
            ar11 = self.bool_to_str(us.valid()) + ", " + us.name()
            r11 = self.choose(us.valid() and us.name() == "Length", True, False)
            self.printResult(r11, "UnitTestBaseSystem", "typeGroup", ar11, er11, out)

        out.write('\n')

# EOF
