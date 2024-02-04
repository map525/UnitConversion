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
# File UnitConversionTest.py
#
# Run all units tests.
# 
# Version 1.0
#
#################################################################################

import os
import sys
from datetime import datetime

from Tests import UnitConversionBasicTest
from Tests import UnitConversionConstantTest
from Tests import UnitConversionConvertTest
from Tests import UnitConversionUnitsTest

from Tests import UnitTestVersion
from Tests import UnitTestUBase
from Tests import UnitTestTypeGroup
from Tests import UnitTestBaseSystem
from Tests import UnitTestConstantGroup
from Tests import UnitTestConstants
from Tests import UnitTestConversionBase
from Tests import UnitTestConversion
from Tests import UnitTestCanonicalSystem
from Tests import UnitTestSingleSystem
from Tests import UnitTestConvert
from Tests import UnitTestConverter
from Tests import UnitTestUnitConversions
from Tests import UnitTestSystemUnits
from Tests import SystemTestUnitConversions
from Tests import SystemTestConstants
from Tests import SystemTestSystemUnits

def main():
    """
    Instantiate and run tests.
    """
    print("START UnitConversionTest")
    start = datetime.now()
    cmd = ""
    if len(sys.argv) > 1:
        cmd = str(sys.argv[1]).upper()
    else:
        cmd = "FULL"
        
    
    if cmd == "ALL" or cmd == "COMP":
        bt = UnitConversionBasicTest.UnitConversionBasicTest(False, "./TestOutput/")
        bt.runTest()

        ct = UnitConversionConstantTest.UnitConversionConstantTest(False, "./TestOutput/")
        ct.runTest()

        vt = UnitConversionConvertTest.UnitConversionConvertTest(False, "./TestOutput/")
        vt.runTest()

        tt = UnitConversionUnitsTest.UnitConversionUnitsTest(False, "./TestOutput/")
        tt.runTest()
       
    
    if cmd == "ALL" or cmd == "FULL":
        ver = UnitTestVersion.UnitTestVersion(True, "./TestOutput/")
        ver.runTest()
    
        ubase = UnitTestUBase.UnitTestUBase(True, "./TestOutput/")
        ubase.runTest()
    
        usys = UnitTestTypeGroup.UnitTestTypeGroup(True, "./TestOutput/")
        usys.runTest()
    
        bs = UnitTestBaseSystem.UnitTestBaseSystem(True, "./TestOutput/")
        bs.runTest()
    
        cg = UnitTestConstantGroup.UnitTestConstantGroup(True, "./TestOutput/")
        cg.runTest()

        cs = UnitTestConstants.UnitTestConstants(True, "./TestOutput/")
        cs.runTest()
    
        conb = UnitTestConversionBase.UnitTestConversionBase(True, "./TestOutput/")
        conb.runTest()
    
        con = UnitTestConversion.UnitTestConversion(True, "./TestOutput/")
        con.runTest()
    
        ubs = UnitTestCanonicalSystem.UnitTestCanonicalSystem(True, "./TestOutput/")
        ubs.runTest()

        usb = UnitTestSingleSystem.UnitTestSingleSystem(True, "./TestOutput/")
        usb.runTest()
    
        conv = UnitTestConvert.UnitTestConvert(True, "./TestOutput/")
        conv.runTest()
    
        conr = UnitTestConverter.UnitTestConverter(True, "./TestOutput/")
        conr.runTest()
    
        ucon = UnitTestUnitConversions.UnitTestUnitConversions(True, "./TestOutput/")
        ucon.runTest()
    
        sysUnit = UnitTestSystemUnits.UnitTestSystemUnits(True, "./TestOutput/")
        sysUnit.runTest()
    
        sysUnits = SystemTestUnitConversions.SystemTestUnitConversions(True, "./TestOutput/")
        sysUnits.runTest()
    
        conVals = SystemTestConstants.SystemTestConstants(True, "./TestOutput/")
        conVals.runTest()
        
        sUnits = SystemTestSystemUnits.SystemTestSystemUnits(True, "./TestOutput/")
        sUnits.runTest()
        
        end = datetime.now()
        diff = end - start
        print("END UnitConversionTest Duration : "+str(diff))

if __name__ == '__main__':
    """ Main Program """
    main()   
# EOF