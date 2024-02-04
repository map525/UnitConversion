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
# File UnitTestCanonicalSystem.py
#
# Unit test for CanonicalSystem class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import BaseSystem
from UnitConversion import CanonicalSystem
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestCanonicalSystem(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Unit test for CanonicalSystem class.
    
    Methods
    -------
    
    __init__            - constructor.
    
    runOut              - Run the tests output results to screen and file.
    
    testCanonicalSystem - test a CanonicalSystem
   
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
        self.openFile("UnitTestCanonicalSystem.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestCanonicalSystem", out)

        ubs0 = CanonicalSystem.CanonicalSystem()
        ubs1 = CanonicalSystem.CanonicalSystem("force")

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
        mapp = dict()
        mapp.update({"US"            : BaseSystem.BaseSystem("US", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()
        length.update({"nmi"         : UBASE.UBASE("UK", "nmi",     1.853184000000000E+03, "m",  "L",  "1.0")})
        length.update({"pace"        : UBASE.UBASE("UK", "pace",    7.620000000000000E-01, "m",  "L",  "1.0")})
        length.update({"palm"        : UBASE.UBASE("UK", "palm",    7.620000000000000E-02, "m",  "L",  "1.0")})
        length.update({"point"       : UBASE.UBASE("UK", "point",   1.763888888888890E-04, "m",  "L",  "1.0")})
        length.update({"rope"        : UBASE.UBASE("UK", "rope",    6.096000000000000E+00, "m",  "L",  "1.0")})
        area.update({"rood"          : UBASE.UBASE("UK", "rood",    1.011714105600000E+03, "m2", "L2", "1.0")})
        area.update({"shed"          : UBASE.UBASE("UK", "shed",    1.000000000000000E-52, "m2", "L2", "1.0")})
        area.update({"skein"         : UBASE.UBASE("UK", "skein",   1.204023398400000E+04, "m2", "L2", "1.0")})
        area.update({"hundred"       : UBASE.UBASE("UK", "hundred", 4.856227706880000E+05, "m2", "L2", "1.0")})
        mass.update({"slug"          : UBASE.UBASE("UK", "slug",    1.459390293720640E+01, "kg", "M",  "1.0")})
        mass.update({"stone"         : UBASE.UBASE("UK", "stone",   6.350293180000000E+00, "kg", "M",  "1.0")})
        mass.update({"truss"         : UBASE.UBASE("UK", "truss",   1.632932532000000E+01, "kg", "M",  "1.0")})
        mass.update({"tub"           : UBASE.UBASE("UK", "tub",     3.810175908000000E+01, "kg", "M",  "1.0")})
        liquid.update({"butt"        : UBASE.UBASE("UK", "butt",    4.909779360000000E-01, "m3", "L3", "1.0")})
        liquid.update({"barrel"      : UBASE.UBASE("UK", "barrel",  1.663614737280000E-01, "m3", "L3", "1.0")})
        liquid.update({"firkin"      : UBASE.UBASE("UK", "firkin",  4.091482800000000E-02, "m3", "L3", "1.0")})
        dry.update({"deal"           : UBASE.UBASE("UK", "deal",    2.477724076800000E-01, "m3", "L3", "1.0")})
        dry.update({"amber"          : UBASE.UBASE("UK", "amber",   1.454749440000000E-01, "m3", "L3", "1.0")})
        dry.update({"peck"           : UBASE.UBASE("UK", "peck",    9.092184000000000E-03, "m3", "L3", "1.0")})
        dry.update({"bag"            : UBASE.UBASE("UK", "bag",     1.091062080000000E-01, "m3", "L3", "1.0")})
        mapp.update({"UK"            : BaseSystem.BaseSystem("UK", length, area, mass, liquid, dry, "1.0")})
        ubs2 = CanonicalSystem.CanonicalSystem("Imperial", mapp)

        ubs3 = CanonicalSystem.CanonicalSystem(ubs2)
        # ubs4 = ubs2

        out.write("Default Constructor"+'\n')
        self.printResult(not ubs0.valid(), "UnitTestCanonicalSystem", 
                                           "Default Constructor", 
                                           self.bool_to_str(ubs0.valid()), 
                                           "False", out)           
        out.write('\n')

        out.write("Name Constructor"+'\n')
        self.printResult(ubs1.valid(), "UnitTestCanonicalSystem", 
                                       "Name Constructor", 
                                       self.bool_to_str(ubs1.valid()), 
                                       "True", out)
        out.write('\n')

        self.testCanonicalSystem(ubs2, "Unit Constructor", out)
        self.testCanonicalSystem(ubs3, "Copy Constructor", out)
        #self.testCanonicalSystem(ubs4, "Assignment Operator", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestCanonicalSystem", diff, out)

    def testCanonicalSystem(self, ubs, label, out):
        """
        Test a CanonicalSystem.
        
        Parameters
        ----------
        usb   - (input, CanonicalSystem) CanonicalSystem to test.
        label - (input) identifying label for output.
        out   - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        ar0 = ubs.fullUnitName("UK", "liquid[firkin]")
        er0 = "firkin"
        r0 = self.choose(ar0 == er0, True, False)
        self.printResult(r0, "UnitTestCanonicalSystem", "fullUnitName", 
                             ar0, er0, out)

        er1 = "True, False, True, True"
        r1 = self.choose(ubs.validateType("Length", "Length") 
                         and not ubs.validateType("Length", "Area") 
                         and ubs.validateType("Liquid", "Dry") 
                         and ubs.validateType("Dry", "Liquid"), True, False)
        ar1 = self.bool_to_str(ubs.validateType("Length", "Length")) + ", "  \
                               + self.bool_to_str(ubs.validateType("Length", "Area")) + ", " \
                               + self.bool_to_str(ubs.validateType("Liquid", "Dry")) + ", " \
                               + self.bool_to_str(ubs.validateType("Dry", "Liquid"))
        self.printResult(r1, "UnitTestCanonicalSystem", "validateType", 
                         ar1, er1, out)

        us = ubs.typeGroup("Area", "UK")
        ar2 = us.unitNames()
        er2 = ["rood", "shed", "skein", "hundred" ]
        r2 = self.choose(us.valid() and self.compareList(ar2, er2), True, False)
        self.printResult(r2, "UnitTestCanonicalSystem", "typeGroup", 
                         self.bool_to_str(us.valid())+", "+ self.listToString(ar2), 
                         "True, "+ self.listToString(er2), out)


        ar3 = ubs.systemNames("Mass") 
        er3 = [ "US","UK" ] 
        r3 = self.compareList(ar3, er3)
        self.printResult(r3, "UnitTestCanonicalSystem", "systemNames", 
                         self.bool_to_str(us.valid())+", "+ self.listToString(ar3), 
                         self.listToString(er3), out)


        ar4 = ubs.systemNames()  
        er4 = ["US","UK"]
        r4 = self.compareList(ar4, er4)
        self.printResult(r4, "UnitTestCanonicalSystem", "systemNames", 
                         self.listToString(ar4), self.listToString(er4), out)


        ar5 = ubs.typeNames()  
        er5 = ["Length","Area","Mass","Liquid", "Dry", "Volume"] 
        r5 = self.compareList(ar5, er5)
        self.printResult(r5, "UnitTestCanonicalSystem", "typeNames", 
                         self.listToString(ar5), self.listToString(er5), out)


        ar6 = ubs.unitNames("Dry", "UK")
        er6 = [ "Dry[deal]","Dry[amber]","Dry[peck]", "Dry[bag]" ]
        r6 = self.compareList(ar6, er6)
        self.printResult(r6, "UnitTestCanonicalSystem", "unitNames", 
                         self.listToString(ar6), self.listToString(er6), out)

        ar7 = ubs.unitNames()
        er7 = ["Area[hundred]",       "Area[rood]", 
               "Area[shed]",          "Area[skein]",
               "Dry[amber]",          "Dry[bag]", 
               "Dry[deal]",           "Dry[peck]", 
               "Length[nmi]",         "Length[pace]",
               "Length[palm]",        "Length[point]", 
               "Length[rope]",        "Liquid[barrel]", 
               "Liquid[butt]",        "Liquid[firkin]", 
               "Mass[slug]",          "Mass[stone]", 
               "Mass[truss]",         "Mass[tub]", 
               "Area[acre]",          "Area[square-foot]", 
               "Area[square-inch]",   "Area[square-mile]", 
               "Area[square-yard]",   "Dry[bushel]", 
               "Dry[cubic-feet]",     "Dry[cubic-in]", 
               "Dry[cubic-yard]",     "Length[foot]", 
               "Length[furlong]",     "Length[inch]", 
               "Length[league]",      "Length[mile]", 
               "Length[yard]",        "Liquid[cup]", 
               "Liquid[gallon]",      "Liquid[quart]", 
               "Mass[hundredweight]", "Mass[ounce]", 
               "Mass[pound]"]
        r7 = self.compareList(ar7, er7)
        self.printResult(r7, "UnitTestCanonicalSystem", "unitNames", 
                         self.listToString(ar7), self.listToString(er7), out)


        ar8 = ubs.convertUnit(1.0, "Length","Length","foot","US",
                                   "pace","UK", False)
        er8 = 0.4
        r8 = self.choose(ar8 == er8, True, False)
        self.printResult(r8, "UnitTestCanonicalSystem", "convertUnit", 
                             str(ar8), str(er8), out)
                             
        out.write('\n')
# EOF
