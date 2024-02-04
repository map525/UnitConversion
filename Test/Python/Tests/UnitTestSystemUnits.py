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
# File UnitTetsSystemUnits.py
#
# Unit test for SystemUnits class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import SystemUnits
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestSystemUnits(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Unit test for SystemUnits class.
    
    Methods
    -------
    
    __init__        - constructor.
    
    runOut          - Run the tests output results to screen and file.
    
    testSystemUnits - test a SystemUnits
   
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
        self.openFile("UnitTestSystemUnits.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestSystemUnits", out)

        ubs0 = SystemUnits.SystemUnits()
        ubs1 = SystemUnits.SystemUnits("force")

        length = dict()
        area   = dict()
        mass   = dict()
        liquid = dict()
        dry    = dict()
        
        length.update({"foot"             : UBASE.UBASE("UK_US_Avdp", "foot",               3.048000000000000E-01, "m",  "L",  "1.0")})
        length.update({"foot(UK-old)"     : UBASE.UBASE("UK_US_Avdp", "foot(UK-old)",       3.047997347632710E-01, "m",  "L",  "1.0")})
        length.update({"foot(US-survey)"  : UBASE.UBASE("UK_US_Avdp", "foot(US-survey)",    3.048006096012190E-01, "m",  "L",  "1.0")})
        length.update({"vara(US-Texas)"   : UBASE.UBASE("UK_US_Avdp", "vara(US-Texas)",     8.466666666666670E-01, "m",  "L",  "1.0")})
        area.update({"square-foot"        : UBASE.UBASE("UK_US_Avdp", "square-foot",        9.290304000000000E-02, "m2", "L2", "1.0")})
        area.update({"vara(US-Texas)"     : UBASE.UBASE("UK_US_Avdp", "vara(US-Texas)",     7.168601466640000E+02, "m2", "L2", "1.0")})
        mass.update({"pound"              : UBASE.UBASE("UK_US_Avdp", "pound",              4.535923700000000E-01, "kg", "M",  "1.0")})
        mass.update({"pound(UK-Imperial)" : UBASE.UBASE("UK_US_Avdp", "pound(UK-Imperial)", 4.535923380000000E-01, "kg", "M",  "1.0")})
        mass.update({"pound(apothecary)"  : UBASE.UBASE("UK_US_Avdp", "pound(apothecary)",  3.732417216000000E-01, "kg", "M",  "1.0")})
        liquid.update({"gallon(UK)"       : UBASE.UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3", "L3", "1.0")})
        liquid.update({"gallon(US)"       : UBASE.UBASE("UK_US_Avdp", "gallon(US)",         3.785411784000000E-03, "m3", "L3", "1.0")})
        liquid.update({"gallon(UK-beer)"  : UBASE.UBASE("UK_US_Avdp", "gallon(UK-beer)",    4.621152048000000E-03, "m3", "L3", "1.0")})
        liquid.update({"liter(old)"       : UBASE.UBASE("UK_US_Avdp", "liter(old)",         1.000002800100000E-03, "m3", "L3", "1.0")})
        dry.update({"gallon(UK)"          : UBASE.UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3", "L3", "1.0")})
        dry.update({"gallon(US)"          : UBASE.UBASE("UK_US_Avdp", "gallon(US)",         4.404883770860000E-03, "m3", "L3", "1.0")})
        mapp = dict()
        mapp.update({"UK_US_Avdp"         : BaseSystem.BaseSystem("UK_US_Avdp", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()
        
        length.update({"fuss"            : UBASE.UBASE("Swiss", "fuss",              3.000000000000000E-01, "m",  "L",  "1.0")})
        length.update({"douzieme"        : UBASE.UBASE("Swiss", "douzieme",          1.880000000000000E-04, "m",  "L",  "1.0")})
        area.update({"arpent"            : UBASE.UBASE("Swiss", "arpent",            3.600000000000000E+01, "m2", "L2", "1.0")})
        mass.update({"livre"             : UBASE.UBASE("Swiss", "livre",             5.000000000000000E-01, "kg", "M",  "1.0")})
        mass.update({"livre(apothecary)" : UBASE.UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg", "M",  "1.0")})
        liquid.update({"pot"             : UBASE.UBASE("Swiss", "pot",               1.500000000000000E-03, "m3", "L3", "1.0")})
        dry.update({"emine"              : UBASE.UBASE("Swiss", "emine",             1.500000000000000E-02, "m3", "L3", "1.0")})
        mapp.update({"Swiss"             : BaseSystem.BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0")})
        ubs2 = SystemUnits.SystemUnits("SystemUnits", mapp)

        ubs3 = SystemUnits.SystemUnits(ubs2)
        # ubs4 = ubs2

        out.write("Default Constructor"+'\n')
        self.printResult(not ubs0.valid(), "UnitTestSystemUnits", 
                                           "Default Constructor", 
                                           self.bool_to_str(ubs0.valid()), 
                                           "False", out)           
        out.write('\n')

        out.write("Name Constructor"+'\n')
        self.printResult(ubs1.valid(), "UnitTestSystemUnits", 
                                       "Name Constructor", 
                                       self.bool_to_str(ubs1.valid()), 
                                       "True", out)
        out.write('\n')

        self.testSystemUnits(ubs2, "Unit Constructor", out)
        self.testSystemUnits(ubs3, "Copy Constructor", out)
        #self.testSystemUnits(ubs4, "Assignment Operator", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestSystemUnits", diff, out)

    def testSystemUnits(self, ubs, label, out):
        """
        Test a SystemUnits.
        
        Parameters
        ----------
        usb   - (input, SystemUnits) SystemUnits to test.
        label - (input) identifying label for output.
        out   - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        ar0 = ubs.fullUnitName("UK", "Liquid[firkin]")
        er0 = "firkin"
        r0 = self.choose(ar0 == er0, True, False)
        self.printResult(r0, "UnitTestSystemUnits", "fullUnitName", 
                             ar0, er0, out)

        ar1 = ubs.rawUnitName("pound(UK-Imperial)");
        er1 = "pound(UK-Imperial)";
        r1 = self.choose(ar1 == er1,  True, False);
        self.printResult(r1, "UnitTestSystemUnits", "rawUnitName", ar1, er1, out);


        ar3 = ubs.systemNames("Swiss") 
        er3 = [ "UK_US_Avdp", "Swiss"  ] 
        r3 = self.compareList(ar3, er3)
        self.printResult(r3, "UnitTestSystemUnits", "systemNames", 
                         self.bool_to_str(ubs.valid())+", "+ self.listToString(ar3), 
                         self.listToString(er3), out)


        ar4 = ubs.systemNames()  
        er4 = [ "UK_US_Avdp", "Swiss"]
        r4 = self.compareList(ar4, er4)
        self.printResult(r4, "UnitTestSystemUnits", "systemNames", 
                         self.listToString(ar4), self.listToString(er4), out)


        ar5 = ubs.typeNames()  
        er5 = ["Length","Area","Mass","Liquid", "Dry", "Volume"] 
        r5 = self.compareList(ar5, er5)
        self.printResult(r5, "UnitTestSystemUnits", "typeNames", 
                         self.listToString(ar5), self.listToString(er5), out)


        ar6 = ubs.unitNames("Length", "Swiss")
        er6 = [ "Length[fuss]", "Length[douzieme]"  ]
        r6 = self.compareList(ar6, er6)
        self.printResult(r6, "UnitTestSystemUnits", "unitNames", 
                         self.listToString(ar6), self.listToString(er6), out)

        ar7 = ubs.unitNames()
        er7 = ["Length[foot]",            "Length[foot(UK-old)]",
               "Length[foot(US-survey)]", "Length[vara(US-Texas)]",
               "Area[square-foot]",       "Area[vara(US-Texas)]",
               "Mass[pound]",             "Mass[pound(UK-Imperial)]",
               "Mass[pound(apothecary)]", "Liquid[gallon(UK)]",
               "Liquid[gallon(US)]",      "Liquid[gallon(UK-beer)]",
               "Liquid[liter(old)]",      "Dry[gallon(UK)]",
               "Dry[gallon(US)]",         "Length[fuss]",
               "Length[douzieme]",        "Area[arpent]",
               "Mass[livre]",             "Mass[livre(apothecary)]",
               "Liquid[pot]",             "Dry[emine]"]
        r7 = self.compareList(ar7, er7)
        self.printResult(r7, "UnitTestSystemUnits", "unitNames", 
                         self.listToString(ar7), self.listToString(er7), out)


        ar8 = ubs.value("Liquid", "UK_US_Avdp", "gallon(UK)")
        er8 = 4.546092000000000E-03
        r8 = self.choose(ar8 == er8, True, False)
        self.printResult(r8, "UnitTestSingleSystem", "value",
                         str(ar8), str(er8), out)
                             
        out.write('\n')
# EOF
