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
# File UnitTestUBase.py
#
# Unit test for UBASE class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestUBase(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for UBASE class.
    
    Methods
    -------
    
    __init__  - constructor.
    
    runOut    - Run the tests output results to screen and file.
    
    testUBase - Test a UBASE.
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
        self.openFile("UnitTestUBase.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestUBase", out)

        u = UBASE.UBASE()
        ud = UBASE.UBASE("system", "double",  3.5, "unit", "type", "1.0", 5.3)
        ui = UBASE.UBASE("system", "integer", 3,   "unit", "type", "1.0", 1)
        uc = UBASE.UBASE(ud)
        #UBASE ux = ui


        out.write("Default Constructor"+'\n')
        self.printResult(not u.valid(), "UnitTestUBase", "Default Constructor", 
                                        self.bool_to_str(u.valid()), 
                                        "false", out)           
        out.write('\n')

        self.testUBase(ud, "Double Constructor", True, out)
        self.testUBase(ui, "Integer Constructor", False, out)
        self.testUBase(uc, "Copy Constructor With Double", True, out)
        #self.testUBase(ux, "Assignment Operator With Integer", False, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestUBase", diff, out)

    def testUBase(self, ubase, label, isDouble, out):
        """
        Test a UBASE.
        
        Parameters
        ----------
        usb   - (input, UBASE) UBASE to test.
        label - (input) identifying label for output.
        out - (input, TextIOWrapper) stream to write results to.
        """
        out.write('\n'+label+'\n')

        er1 = self.choose(isDouble, "double" , "integer")
        ar1 = ubase.name()
        r1 = self.choose(ar1 ==  er1, True , False)
        self.printResult(r1, "UnitTestUBase", "name", ar1, er1, out)

        er2 = self.choose(isDouble, 5.3, 1.0)
        ar2 = ubase.offset()
        r2 = self.choose(ar2 == er2, True, False)
        self.printResult(r2, "UnitTestUBase", "offset", str(ar2), 
                         str(er2), out)

        er3 = "system"
        ar3 = ubase.system()
        r3 = self.choose(ar3 == er3, True, False)
        self.printResult(r3, "UnitTestUBase", "system", ar3, er3, out)

        er4 = "type"
        ar4 = ubase.type()
        r4 = self.choose(ar4 == er4, True, False)
        self.printResult(r4, "UnitTestUBase", "type", ar4, er4,out)

        er5 = "unit"
        ar5 = ubase.unit()
        r5 = self.choose(ar5 == er5, True, False)
        self.printResult(r5, "UnitTestUBase", "unit", ar5, er5, out)

        er6 = "true"
        ar6 = ubase.valid()
        r6 = self.choose(ar6, True, False)
        self.printResult(r6, "UnitTestUBase", "valid", 
                             self.bool_to_str(ar6), er6, out)

        er7 = self.choose(isDouble, 3.5, 3.0)
        ar7 = ubase.value()
        r7 = self.choose(ar7 == er7, True, False)
        self.printResult(r7, "UnitTestUBase", "value", str(ar7), 
                         str(er7), out)

        er8 = "1.0"
        ar8 = ubase.version()
        r8 = self.choose(ar8 == er8, True, False)
        self.printResult(r8, "UnitTestUBase", "version", ar8, er8,out)

        if isDouble:
            ar9 = ubase.toString()
            er9a = "type: type, system: system, name: double, "
            er9b = "value: 3.500000000000000e+00, "
            er9c = "offset: 5.300000000000000e+00, "
            er9d = "unit: unit, version: 1.0, valid: True"
            er9 = er9a + er9b + er9c + er9d
            ans = self.choose(ar9 == er9, True, False)
            self.printResult(ans, "UnitTestUBase", "toString", ar9, er9, out)
        else:
            ar9 = ubase.toString()
            er9a = "type: type, system: system, name: integer, "
            er9b = "value: 3.000000000000000e+00, "
            er9c = "offset: 1.000000000000000e+00, "
            er9d = "unit: unit, version: 1.0, valid: True"
            er9 = er9a + er9b + er9c + er9d
            ans = self.choose(ar9 == er9, True, False)
            self.printResult(ans, "UnitTestUBase", "toString", ar9, er9,out)

        out.write('\n')
# EOF
