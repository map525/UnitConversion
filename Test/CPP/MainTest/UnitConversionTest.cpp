/////////////////////////////////////////////////////////////////////////////////
//2345678901234567890123456789012345678901234567890123456789012345678901234567890
/////////////////////////////////////////////////////////////////////////////////
// PROJECT: Unit Conversion
//
// Copyright Copyright 2024 MAP
//
// Unpublished - Rights reserved under the Copyright Laws of the United States
//
/////////////////////////////////////////////////////////////////////////////////
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
//
/////////////////////////////////////////////////////////////////////////////////
//
// File: UnitConversionTest.cpp
//
// Program to test unit Conversion classes. 
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitConversionBasicTest.hpp"
#include "UnitConversionConstantTest.hpp"
#include "UnitConversionConvertTest.hpp"
#include "UnitConversionUnitsTest.hpp"

#include "UnitTestVersion.hpp"
#include "UnitTestValue.hpp"
#include "UnitTestUBase.hpp"
#include "UnitTestTypeGroup.hpp"
#include "UnitTestBaseSystem.hpp"
#include "UnitTestConstantGroup.hpp"
#include "UnitTestConstants.hpp"
#include "UnitTestConversionBase.hpp"
#include "UnitTestConversion.hpp"
#include "UnitTestCanonicalSystem.hpp"
#include "UnitTestSingleSystem.hpp"
#include "UnitTestConvert.hpp"
#include "UnitTestConverter.hpp"
#include "UnitTestUnitConversions.hpp"
#include "SystemTestUnitConversions.hpp"
#include "SystemTestConstants.hpp"
#include "UnitTestSystemUnits.hpp"
#include "SystemTestSystemUnits.hpp"

#include <algorithm> 
#include <iostream>

/*
 * @brief run test cases.
 */ 
int main(int argc, char *argv[])
{
    clock_t start = clock();
    bool all  = false;
    bool full = false;
    bool comp = false;
    std::string path = "../";

    std::cout << "START UnitConversionTest" <<  std::endl;

    if (argc > 2)
    {
        path = std::string(argv[2]);
    }
    std::cout << "Path: " << path << std::endl;

    if (argc > 1)
    {
        std::string cmd = argv[1];
        std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);
        if (cmd == "FULL")
        {
            full = true;
        }
        else if (cmd == "ALL")
        {
            all = true;
        }
        else if (cmd == "COMP")
        {
            comp = true;
        }
        else
        {
            full = true;
        }
    }
    else
    {
        full = true;
    }

    if (full || all)
    {
        UnitTestVersion           versionTest(true, path+"TestOutput/");
        versionTest.run();
        UnitTestValue             valueTest(true,   path+"TestOutput/");
        valueTest.run();
        UnitTestUBase             ubaseTest(true,   path+"TestOutput/");
        ubaseTest.run();
        UnitTestTypeGroup         us(true,          path+"TestOutput/");
        us.run();
        UnitTestBaseSystem        bs(true,          path+"TestOutput/");
        bs.run();
        UnitTestConstantGroup     ucb(true,         path+"TestOutput/");
        ucb.run();
        UnitTestConstants         constants(true,   path+"TestOutput/");
        constants.run();
        UnitTestConversionBase    convb(true,       path+"TestOutput/");
        convb.run();
        UnitTestConversion        conv(true,        path+"TestOutput/");
        conv.run();
        UnitTestCanonicalSystem   ubs(true,         path+"TestOutput/");
        ubs.run();
        UnitTestSingleSystem      usb(true,         path+"TestOutput/");
        usb.run();
        UnitTestSystemUnits       sysUnitTest(true, path+"TestOutput/");
        sysUnitTest.run();
        UnitTestConvert           cvt(true,         path+"TestOutput/");
        cvt.run();
        UnitTestConverter         con(true,         path+"TestOutput/");
        con.run();
        UnitTestUnitConversions   cons(true,        path+"TestOutput/");
        cons.run();
        SystemTestUnitConversions sysTest(false,    path+"TestOutput/");
        sysTest.run();
        SystemTestConstants       constTest(true,   path+"TestOutput/");
        constTest.run();
        SystemTestSystemUnits     sysUTest(true,    path+"TestOutput/");
        sysUTest.run();
    }

    if (all || comp)
    {
        UnitConversionBasicTest    bTest(false, path+"TestOutput/");
        bTest.run();
        UnitConversionConvertTest  vTest(false, path+"TestOutput/");
        vTest.run();
        UnitConversionConstantTest cTest(false, path+"TestOutput/");
        cTest.run();
        UnitConversionUnitsTest    uTest(false, path+"TestOutput/");
        uTest.run();
    }
    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    std::cout << "END UnitConversionTest Duration: " << diff << std::endl;
}
// EOF
