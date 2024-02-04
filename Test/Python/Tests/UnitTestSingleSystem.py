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
# File UnitTestSingleSystem.py
#
# Unit test for SingleSystem class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import SingleSystem
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestSingleSystem(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for SingleSystem class.
    
    Methods
    -------
    
    __init__         - constructor.
    
    runOut           - Run the tests output results to screen and file.
    
    testSingleSystem - Test a SingleSystem.
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
        self.openFile("UnitTestSingleSystem.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestSingleSystem", out)

        usb0 = SingleSystem.SingleSystem()
        usb1 = SingleSystem.SingleSystem("force")

        unit = dict()
        unit.update({"Imperial[kipf]"       : UBASE.UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[kip-force]"  : UBASE.UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[odl]"        : UBASE.UBASE("Imperial", "ouncedal",        8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[lbf]"        : UBASE.UBASE("Imperial", "pound-force",     4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[tondal]"     : UBASE.UBASE("Imperial", "tondal",          3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[tdl]"        : UBASE.UBASE("Imperial", "tondal",          3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kgf]"            : UBASE.UBASE("MKpS", "kilogram-force",      9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kgp]"            : UBASE.UBASE("MKpS", "kilogram-force",      9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kgw]"            : UBASE.UBASE("MKpS", "kilogram-weight",     9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[pond]"           : UBASE.UBASE("MKpS", "pond",                9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[p]"              : UBASE.UBASE("MKpS", "pond",                9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[newton]"           : UBASE.UBASE("SI", "newton",                1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[N]"                : UBASE.UBASE("SI", "newton",                1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"UK[ounce-force]"      : UBASE.UBASE("UK", "ounce-force",           2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"UK[ozf]"              : UBASE.UBASE("UK", "ounce-force",           2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"UK[ton-force(long)]"  : UBASE.UBASE("UK", "ton-force(long)",       9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"US[ounce-force]"      : UBASE.UBASE("US", "ounce-force",           2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"US[ozf]"              : UBASE.UBASE("US", "ounce-force",           2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"US[ton-force(short)]" : UBASE.UBASE("US", "ton-force(short)",      8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0")})

        mapp = dict()
        mapp.update({"force" : BaseSystem.BaseSystem("force", unit, "1.0")})

        unit.clear()
        unit.update({"a.u.[au-of-linear-momentum]"    : UBASE.UBASE("a.u.", "au-of-linear-momentum",    1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"a.u.[aulm]"                     : UBASE.UBASE("a.u.", "au-of-linear-momentum",    1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"cgs[bole]"                      : UBASE.UBASE("cgs", "bole",                      1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"cgs[gramcentimeter-per-second]" : UBASE.UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"cgs[gcm/sec]"                   : UBASE.UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"SI[newton-second]"              : UBASE.UBASE("SI", "newton-second",              1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"SI[N-sec]"                      : UBASE.UBASE("SI", "newton-second",              1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0")})

        mapp.update({"momentum" : BaseSystem.BaseSystem("momentum", unit, "1.0")})
        usb2 = SingleSystem.SingleSystem("force", mapp)

        usb3 = SingleSystem.SingleSystem(usb2)
        #SingleSystem usb4 = usb2

        out.write("Default Constructor"+'\n')
        self.printResult(not usb0.valid(), "UnitTestSingleSystem", 
                         "Default Constructor", 
                         self.bool_to_str(usb0.valid()), "False", out)
        out.write('\n')

        out.write("Name Constructor"+'\n')
        self.printResult(usb1.valid(), "UnitTestSingleSystem", 
                         "Name Constructor",
                         self.bool_to_str(usb1.valid()), "true", out)
        out.write('\n')

        self.testSingleSystem(usb2, "Unit Constructor", out)
        self.testSingleSystem(usb3, "Copy Constructor", out)
        #self.testSingleSystem(usb4, "Assignment Operator", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestSingleSystem", diff, out)

    def testSingleSystem(self, usb, label, out): 
        """
        Test a SingleSystem.
        
        Parameters
        ----------
        usb   - (input, SingleSystem) SingleSystem to test.
        label - (input, string) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        us = usb.typeGroup("momentum", "cgs")
        ar1 = us.unitNames()
        er1 = ["cgs[bole]", "cgs[gramcentimeter-per-second]", "cgs[gcm/sec]"]
        r1 = us.valid()
        self.printResult(r1, "UnitTestSingleSystem", "typeGroup, unitNames", 
                         self.bool_to_str(us.valid())+", "+self.listToString(ar1), 
                         "True, "+ self.listToString(er1), out)

        er2 = "ton-per-mile"
        ar2 = usb.rawUnitName("UK[ton-per-mile]")
        r2 = self.choose(ar2 == er2, True, False)
        self.printResult(r2, "UnitTestSingleSystem", "rawUnitName", 
                             ar2, er2, out)

        er3 = "UK[ton-per-mile]"
        ar3 = usb.fullUnitName("UK", "ton-per-mile")
        r3 = self.choose(ar3 == er3, True, False)
        self.printResult(r3, "UnitTestSingleSystem", "fullUnitName", 
                             ar3, er3, out)


        ar4 = usb.systemNames("momentum")  
        er4 = [ "a.u.", "cgs","SI" ]
        r4 = self.compareList(ar4, er4)
        self.printResult(r4, "UnitTestSingleSystem", "systemNames", 
                         self.listToString(ar4), self.listToString(er4), out)


        ar5 = usb.systemNames() 
        er5 = ["US", "UK", "Imperial", "MKpS", "a.u.", "cgs","SI" ]
        r5 = self.compareList(ar5, er5)
        self.printResult(r5, "UnitTestSingleSystem", "systemNames", 
                         self.listToString(ar5), self.listToString(er5), out)

        ar6 = usb.typeNames()  
        er6 = [ "force","momentum" ]
        r6 = self.compareList(ar6, er6)
        self.printResult(r6, "UnitTestSingleSystem", "typeNames", 
                         self.listToString(ar6), self.listToString(er6), out)


        ar7 = usb.unitNames("force", "UK")
        er7 = [ "UK[ounce-force]", "UK[ozf]", "UK[ton-force(long)]" ]
        r7 = self.compareList(ar7, er7)
        self.printResult(r7, "UnitTestSingleSystem", "unitNames", 
                         self.listToString(ar7), self.listToString(er7), out)

        ar8 = usb.unitNames()
        er8 = ["Imperial[kipf]",                   "Imperial[kip-force]",
               "Imperial[odl]",                    "Imperial[lbf]",
               "Imperial[tondal]",                 "Imperial[tdl]",
               "MKpS[kgf]",                        "MKpS[kgp]",
               "MKpS[kgw]",                        "MKpS[pond]",
               "MKpS[p]",                          "SI[newton]",
               "SI[N]",                            "UK[ounce-force]",
               "UK[ozf]",                          "UK[ton-force(long)]",
               "US[ounce-force]",                  "US[ozf]",
               "US[ton-force(short)]",             "a.u.[au-of-linear-momentum]",
               "a.u.[aulm]","cgs[bole]",           "cgs[gramcentimeter-per-second]",
               "cgs[gcm/sec]","SI[newton-second]", "SI[N-sec]"]
        r8 = self.compareList(ar8, er8)
        self.printResult(r8, "UnitTestSingleSystem", "unitNames", 
                         self.listToString(ar8), self.listToString(er8),  out)


        ar9 = usb.convertUnit(1.0, "force","force","lbf","Imperial",
                                     "newton","SI", False)
        er9 = 4.448221615260500E+00
        r9 = self.choose(ar9 == er9, True, False)
        self.printResult(r9, "UnitTestSingleSystem", "convertUnit", 
                         str(ar9), str(er9),  out)
        
        out.write('\n')

# EOF
