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
# File UnitConversionBaseTest.py
#
# Base or parent class for tests. 
#
# Version 1.0
#
##############################################################################
import sys
from io import StringIO
from datetime import datetime

from UnitConversion import Version

class UnitConversionBaseTest:
    """
    Base class for all tests.
    
    Attributes
    ----------
    
    _path - path to output directory for writing results.
    
    _fout - output stream to write results to.
    
    Methods
    -------
    
    __init__     - constructor.
    
    closeFile    - Flush and close output file.
    
    choose       - Choose between two alternatives.
    
    compareList  - Compare two lists.
    
    getTime      - Get the current time and format it as a string.
    
    listToString - Covert list to string.
    
    openFile     - Open output file to write results to.
    
    printFooter  - Print footer to output stream.
    
    printHeader  - Print header to output stream.
    
    printList    - Print a list. The list contains unit names or system 
                   names or type names.
                   
    printReult   - print test result.
    
    run          - Run tests.
    
    runOut       - Run test and output to stream.  
    """

    def __init__(self, brief, path):  
        """
        Constructor. Store path.
        
        Parameters
        ----------
        brief - (input, boolean) print brief test results.
        path  - (input, string)  path to output folder for writing results.
        """
        self._brief = brief
        self._path = path
        self._fout = None
        
    def bool_to_str(self, b):
        """
        Convert boolean to string
        
        Parameters
        ----------
        b - (input boolean) boolean to convert.
        
        Return
        ------
        A string containing "True" or "False"
        Return type is string.
        """
        if b:
            return "True"
        else:
            return "False"
            
    def choose(self, b, x, y):
        """
        Choose between two alternatives.
        
        Parameters
        ----------
        b - (input boolean) if true, chose x, if false, y
        x - (input, anything) first alternative.
        y - (input, anything) second alternative.
        """
        if b:
            return x
        else:
            return y

    def closeFile(self):
        """
        Flush and close output file.
        """
        self._fout.flush()
        self._fout.close()

       
    def compareList(self, l1, l2):
        """
        Compare two lists.
        
        Parameters
        ----------
        l1 - (input, list of strings) fist list
        l2 - (input, list of strings) second list
        
        Return
        ------
        True if size and contents of both lists are the same, false otherwise.
        Return type is boolean.
        """
        if len(l1) != len(l2):
             return False;
        else:
            for itr in l1:
                if itr in l2:
                    continue
                else:
                    return False
            return True
            
    def flush(stef):
        """
        Flush output file.
        """
        self._fout.flush()
    
    def getTime(self):
        """
        Get the current time and format it as a string.
        
        Return
        ------
        A string containing the current date and time
        formatted as Month day, year hours:minutes:seconds.
        Return type is string.
        """
        start = datetime.now()
        startStr = start.strftime("%m/%d/%Y %H:%M:%S")
        return startStr

    def listToString(self, lst):
        """
        Covert list to string.
        
        Parameters
        ----------
        lst - (input, list of strings) list to convert to string
        
        Return
        ------
        A string with the contents of the list.
        Return type is string.
        """
        result = "[";
        for itr in lst:
            result = result + itr + ", "

        if len(result) != 0:
            result = result[:-2] + "]"
        else:
            result = result + "]"
        return result   

    def openFile(self, name):
        """
        Open output file to write results to.
        
        Parameters
        ----------
        name - (input, string) the name of the output file.
        """
        fname = self._path + name
        self._fout = open(fname, 'w')

    def printFooter(self, label, duration, out):
        """
        Print footer to output stream. 
        
        Parameters
        ----------
        label    - (input, string) identifying label.
        duration - (input, timedelta) elapsed time.
        out      - (input, TextIOWrapper) stream to write to.
        """
        out.write('\n' + "END " + label + " " + self.getTime() + " Duration: " 
                       + str(duration) 
                       + " Version : " + Version.Version.Instance().version() 
                       + '\n' +'\n')
        out.write("****************************************")
        out.write("****************************************"+'\n')
        

    def printHeader(self, label,  out):
        """
        Print header to output stream. 
        
        Parameters
        ----------
        label    - (input, string) identifying label.
        out      - (input, TextIOWrapper) stream to write to.
        """
        out.write("****************************************")
        out.write("****************************************"+'\n')
        out.write('\n' + "START " + label + " " + self.getTime() + " Version : "
                         + Version.Version.Instance().version() + '\n' + '\n')

    def printList(self,  lsts, label, className, out):
        """
        Print a list. The list contains unit names or system names or type names.
        
        Parameters
        ----------
        lsts      - (input, list of strings) the list to print.
        label     - (input, string) identifying label for list.
        className - (input, string) the class or type of unit e.g. Angle, Force, etc.
        out       - (input, TextIOWrapper) stream to write to.
        """
        strg = label + " " + className + " ["
        space = " " * len(strg) 
        out.write(label + " " + className + " [")
        size = len(lsts)
        count = 0
        line = len(strg)
        for i in lsts:
            if (count + 1) < size:
                line = line + (len(i) + 2)
                if line > 119 and count > 0:
                    out.write('\n')
                    out.write(space)
                    out.write(i + ", ")
                    line = len(space) + (len(i) + 2)
                else:
                    out.write(i + ", ")
            else:
                line = line + (len(i) + 2)
                if line > 119:
                    out.write('\n')
                    out.write(space + i)
                else:
                    out.write(i)
            count = count + 1
        out.write("]" + '\n' + '\n')
        
    def printResult(self, result, label, method, value, expected, out):
        """
        Print test result
        
        Parameters
        ----------
        result   - (input, boolean) test result: true is success.
        label    - (input, string)  test name.
        method   - (input, string)  method tested.
        value    - (input, string)  value returned by tested method.
        expected - (input, string)  expected value.
        out      - (input, TextIOWrapper) stream to write to.
        """
        if result:
            if self._brief:
                out.write(label + " (" + method + "): PASS "+'\n')
            else:
                out.write(label + " (" + method + "): PASS value: "+value+'\n')
        else:
            out.write(label + " (" + method + "): Fail " + " returned value: " 
                            + value + " expected: " + expected 
                            + " ***ERROR***"+'\n')

    def runTest(self):
        """
        Run tests.
        """
        self.runOut(sys.stdout);
        self.runOut(self._fout);
        self.closeFile();

    def runOut(self, out):
        """
        Run test and output to stream.
        
        Parameters
        ----------
        out       - (input, TextIOWrapper) stream to write to.
        """
        return
# EOF
