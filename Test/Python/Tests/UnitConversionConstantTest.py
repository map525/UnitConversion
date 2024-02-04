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
# File UnitConversionConstantTest.py
#
# Program to test constant methods. 
#
# Version 1.0
#
#################################################################################

from UnitConversion import Constants
from UnitConversion import Version
from Tests import UnitConversionBaseTest
import sys
from datetime import datetime

class UnitConversionConstantTest(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    Program to test constant methods. 
    
    Attributes
    ----------
    
     _path - path to output directory for writing results.
    
    _fout - output stream to write results to.
    
    Methods
    -------
    
    __init__      - constructor.
    
    printConstant - write constant to output stream.
    
    runOut        - run the tests; output results to screen and file.
    """
    def __init__(self, brief, path):
        """
        Constructor. Store path, open output file.
        
        Parameters
        ----------
        brief - (input, boolean) print brief test results.
        path  - (input, string) path to output folder for writing results.
        """
        super().__init__(brief, path)   
        self.openFile("ConstantTest.txt")        
        self._path = path


    def printConstant(self, constant, name, out):
        """
        Write constant to output stream.

        Parameters
        ----------
        param constant - (input, string) constant to output.
        param name     - (input, string) constant name.
        param out      - (input, TextIOWrapper) stream to write output to.
       """        
        unitNames = constant.constantNames()
        self.printList(unitNames,   "Constants", name, out)
        for it in unitNames:
            u = constant.constant(it)
            val = constant.value(it)
            self.printResult(u.valid(), name + " " + it, "valid",
                             self.bool_to_str(u.valid()) +", "+ u.toString(), 
                             "True",out);
        out.write(" ")


    def runOut(self, out):
        """
        Run the tests; output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write output to. 
        """        
        start = datetime.now()
        self.printHeader("UnitConversionConstantTest", out)
        constants =  Constants.Constants.Instance()

        constantNames = constants.names()
        self.printList(constantNames, "Constants", "CONSTANTS", out)
	   
        for  it in constantNames:
            if it == "Invalid":
                continue
            else:
                self.printConstant(constants.constant(it), it, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitConversionConstantTest", diff,out)

# EOF
