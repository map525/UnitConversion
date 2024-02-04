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
# File UnitTestVersion.py
#
# Unit test for Version class. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import Version
from Tests import UnitConversionBaseTest

from datetime import datetime

class UnitTestVersion(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Unit test for Version class. 
    
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
        path - (input, string) the path to the output folder where the
                               test results are written.
        """
        super().__init__(brief, path)
        self.openFile("UnitTestVersion.txt")


    def runOut(self, out):
        """
        Run the tests; output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestVersion", out)

        version = Version.Version.Instance()


        er1 = "1.0";
        ar1 = version.version()
        r1 = (ar1 == er1)
        self.printResult(r1, "UnitTestVersion", "version", ar1, er1, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestVersion", diff, out)
# EOF
