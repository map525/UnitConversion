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
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File UnitTestConstants.py
#
# Unit test for Constants class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import Constants
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestConstants(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Unit test for UnitConstantGroup class.
    
    Methods
    -------
    
    __init__ - constructor.
    
    runOut   - Run the tests; output results to screen and file.
   
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
        self.openFile("UnitTestConstants.txt")

    def runOut(self, out):
        """
        Run the tests; output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestConstants", out)

        constant = Constants.Constants.Instance()

        er0 = "True"
        ar0 = constant.check()
        r0 = ar0
        self.printResult(r0, "UnitTestConstants", "check", ar0, er0, out)
        
        er1 = ["DerivedUnits", "PhysicalConstants", 
               "PhysialDefinitions", "PhysicalMeasurements", 
               "SI", "WGS84Model", "Invalid"]
        ar1 = constant.names()
        r1 = self.compareList(ar1, er1)
        self.printResult(r1, "UnitTestConstants", "names", 
                         self.listToString(ar1), self.listToString(er1), out)

        uNames = ["planck-constant",  "h",
                  "speed-of-light",   "c",
                  "elementary-charge","e",
                  "boltzman-constant","k",
                  "avogadro-constant","N" ]
        ucb = constant.constant("PhysicalConstants")
        ans = self.compareList(ucb.constantNames(), uNames)
        r2 = self.choose(ucb.valid() and ucb.check() 
                                     and ucb.name() == "PhysicalConstants" 
                                     and ans, True, False)
        ar2 = self.bool_to_str(ucb.valid()) + ", " \
                                            + self.bool_to_str(ucb.check()) \
                                            + ", " + ucb.name() \
                                            + ", " \
                                            + self.listToString(ucb.constantNames())
        er2 = "true, true, PhysicalConstants, " + self.listToString(uNames)
        self.printResult(r2, "UnitTestConstants", "constantNames", ar2, er2, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestConstants", diff, out)

# EOF
