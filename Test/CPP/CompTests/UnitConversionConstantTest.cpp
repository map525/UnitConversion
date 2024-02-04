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
// File UnitConversionConstantTest.cpp
//
// Program to test constant methods. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitConversionConstantTest.hpp"
#include "Constants.hpp"
#include "Version.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitConversionConstantTest::UnitConversionConstantTest(bool brief, 
                                                       const std::string& path) 
                                                       : UnitConversionBaseTest(brief, path)
{
    openFile("ConstantTest.txt");
}

/**
 * @brief Write constant to output stream.
 *
 * @param[in] constant - constant to output.
 * @param[in] name     - constant name.
 * @param[in] out      - stream to write output to.
 *
 */
void UnitConversionConstantTest::printConstant(const ConstantGroup& constant, 
                                               const std::string& name, 
                                               std::ostream& out)
{
    std::list<std::string> unitNames = constant.constantNames();
    printList(unitNames, "Constants", name,out);
    for (std::list<std::string>::iterator it = unitNames.begin(); 
                                          it != unitNames.end(); ++it)
    {
        UBASE u    = constant.constant(*it);
        double val = constant.value(*it);

        printResult(u.valid(), name + " " + *it, "valid",
                    bool_to_str(u.valid()) +", "+ u.toString(), 
                    "true",out);
    }
    out << std::endl;
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write to.
 */
void UnitConversionConstantTest::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitConversionConstantTest", out);

    Constants& constants = Constants::Instance();

    std::list<std::string> constantNames = constants.names();
    printList(constantNames, "Constants", "CONSTANTS",out);

    for (std::list<std::string>::iterator it = constantNames.begin(); 
                                          it != constantNames.end(); ++it)
    {
        if (*it == "Invalid")
        {
            continue;
        }
        else
        {
            printConstant(constants.constant(*it), *it,out);
        }
    }

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitConversionConstantTest", diff, out);
}
// EOF
