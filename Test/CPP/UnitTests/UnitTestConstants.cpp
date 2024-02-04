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
// File UnitTestConstants.cpp
//
// Unit test for Constants class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestConstants.hpp"
#include "Constants.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestConstants::UnitTestConstants(bool brief, 
                                     const std::string& path) 
                                     : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestConstants.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestConstants::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestConstants", out);

    Constants& constant = Constants::Instance();

    bool r0 = constant.check();
    std::string er0 = "true";
    std::string ar0 = bool_to_str(r0);
    printResult(r0, "UnitTestConstants", "check", ar0, er0, out);

    std::list<std::string> er1 = {"DerivedUnits",       "PhysicalConstants", 
                                  "PhysialDefinitions", "PhysicalMeasurements", 
                                  "SI",                 "WGS84Model", 
                                  "Invalid"};
    std::list<std::string> ar1 = constant.names();
    bool r1 = compareList(ar1, er1);
    printResult(r1, "UnitTestConstants", "names", listToString(ar1), 
                     listToString(er1), out);


    std::list<std::string> uNames = { "planck-constant",   "h",
                                      "speed-of-light",    "c",
                                      "elementary-charge", "e",
                                      "boltzman-constant", "k",
                                      "avogadro-constant", "N" };
    ConstantGroup ucb = constant.constant("PhysicalConstants");
    bool ans = compareList(ucb.constantNames(), uNames);
    bool r2 = (ucb.valid() && ucb.check() && ucb.name() == "PhysicalConstants" 
                           && ans ? true : false);
    std::string ar2 = bool_to_str(ucb.valid()) + ", " 
                                               + bool_to_str(ucb.check()) 
                                               + ", " 
                                               + ucb.name() 
                                               + ", " 
                                               + listToString(ucb.constantNames());
    std::string er2 = "true, true, PhysicalConstants, " + listToString(uNames);
    printResult(r2, "UnitTestConstants", "unitNames", ar2, er2, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestConstants", diff, out);
}
// EOF
