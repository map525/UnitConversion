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
# File UnitTestConverter.py
#
# Unit test for Converter class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import SingleSystem
from UnitConversion import Converter
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestConverter(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for Converter class.
    
    Methods
    -------
    
    __init__      - constructor.
    
    runOut        - Run the tests output results to screen and file.
    
    testConverter - Test a Converter.
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
        self.openFile("UnitTestConverter.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestConverter", out)

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
        usb = SingleSystem.SingleSystem("force", mapp)
        con1 = Converter.Converter("Force", "force", "SI", "SI", usb)
        con2 = Converter.Converter("Force", "force", "force", "force", "SI", "SI", usb)

        self.testConverter(con1, "Constructor", out)
        self.testConverter(con2, "Constructor (two types)", out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestConverter", diff, out)

    def testConverter(self, con, label, out):
        """
        Test a Converter.
        
        Parameters
        ----------
        con   - (input, Converter) Converter to test.
        label - (input, string) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write(label+'\n')

        er1 = "force"
        ar1 = con.fromType()
        r1 = self.choose(ar1 == "force", True, False)
        self.printResult(r1, "UnitTestConverter", "fromType", ar1, er1, out)

        er2 = "False"
        r2 = not con.fromType("angle")
        ar2 = self.bool_to_str(r2)
        self.printResult(r2, "UnitTestConverter", "fromType", ar2, er2,  out)

        er3 = "force"
        ar3 = con.toType()
        r3 = self.choose(ar3 == "force", True, False)
        self.printResult(r3, "UnitTestConverter", "toType", ar3, er3, out)

        er4 = "False"
        r4 = not con.toType("angle")
        self.printResult(r4, "UnitTestConverter", "toType", 
                         self.bool_to_str(r4), er4, out)

        unit = con.unit("UK", "ounce-force")
        r5 = self.choose(unit.valid() and unit.system() == "UK" 
                                      and unit.name() == "ounce-force", True, False)
        er5 = "True, UK, ounce-force"
        ar5 = self.bool_to_str(unit.valid()) + ", " + unit.system() \
                                                    + ", " + unit.unit()
        self.printResult(r5, "UnitTestConverter", "unit", ar5, er5, out)

        er6 = "force"
        ar6 = con.type()
        r6 = self.choose(ar6 == er6, True, False)
        self.printResult(r6, "UnitTestConverter", "type", ar6, er6, out)

        us = con.typeGroup("UK")
        ar7 = us.unitNames()
        er7 = ["UK[ounce-force]", "UK[ozf]","UK[ton-force(long)]"]
        r7 = self.choose(us.valid() and self.compareList(ar7, er7), True, False)
        self.printResult(r7, "UnitTestConverter", "typeGroup", 
                         self.bool_to_str(us.valid()) + ", "+ self.listToString(ar7), 
                         "True, " + self.listToString(er7), out)

        ar8 = con.systemNames() 
        er8 = [ "Imperial", "MKpS", "SI", "UK","US" ]
        r8 = self.compareList(ar8, er8)
        self.printResult(r8, "UnitTestConverter", "systemNames", 
                         self.listToString(ar8), self.listToString(er8), out)

        ar9 = con.unitNames("US")
        er9 = ["US[ounce-force]", "US[ozf]", "US[ton-force(short)]"]
        r9 = self.compareList(ar9, er9)
        self.printResult(r9, "UnitTestConverter", "unitNames", 
                         self.listToString(ar9), self.listToString(er9), out)

        ar10 = con.unitNames()
        er10 = ["Imperial[kipf]",   "Imperial[kip-force]", 
                "Imperial[odl]",    "Imperial[lbf]", 
                "Imperial[tondal]", "Imperial[tdl]", 
                "MKpS[kgf]",        "MKpS[kgp]", 
                "MKpS[kgw]",        "MKpS[pond]",
                "MKpS[p]",          "SI[newton]", 
                "SI[N]",            "UK[ounce-force]", 
                "UK[ozf]",          "UK[ton-force(long)]",
                "US[ounce-force]" , "US[ozf]", 
                "US[ton-force(short)]"]
        r10 = self.compareList(ar10, er10)
        self.printResult(r10, "UnitTestConverter", "unitNames", 
                         self.listToString(ar10), self.listToString(er10), out)


        newUnit = UBASE.UBASE("SI", "kilonewton", 1.000000000000000E+03, 
                              "kg.m/s2",  "M.L/T2", "1.0")
        ans = con.addUnit("SI", "kilonewton", newUnit)
        addedUnit = con.unit("SI", "kilonewton")
        r11 = self.choose(ans and addedUnit.valid() and addedUnit.system() == "SI" 
                              and addedUnit.name() == "kilonewton", True, False)
        er11 = "True, True, SI, kilonewton"
        ar11 = self.bool_to_str(ans) + ", " + self.bool_to_str(addedUnit.valid()) \
                                     + ", " + addedUnit.system() + ", " + addedUnit.name()
        self.printResult(r11, "UnitTestConverter", "addUnit", ar11, er11, out)

        result = con.removeUnit("SI", "kilonewton")
        removedUnit = con.unit("SI", "kilonewton")
        r12 = self.choose(ans and not removedUnit.valid(), True, False)
        er12 = "True, False"
        ar12 = self.bool_to_str(ans) + ", " + self.bool_to_str(removedUnit.valid())
        self.printResult(r12, "UnitTestConverter", "removeUnit", ar12, er12, out)

        con.toSystem("Imperial")
        x1 = con.convert(1.0, "newton", "kipf")
        con.toSystem("SI")
        x2 = con.convert(1.0, "SI[newton]","Imperial[kipf]", True)
        cvtAns = 1.0 / 4.448221615260500E+03
        r13 = self.choose(x1 == cvtAns and x2 == cvtAns, True, False)
        er13 = str(cvtAns) + ", " + str(cvtAns)
        ar13 = str(x1) + ", " + str(x2)
        self.printResult(r13, "UnitTestConverter", "convert", ar13, er13, out)

        x3 = con.convert(1.0, "newton","SI","kipf", "Imperial")
        r14 = self.choose(x2 == cvtAns, True, False)
        er14 = str(cvtAns)
        ar14 = str(x3)
        self.printResult(r14, "UnitTestConverter", "convert", ar14, er14, out)

        out.write('\n')
# EOF
