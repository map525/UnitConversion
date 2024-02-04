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
// File UnitTestVersion.cpp
//
// Unit test for Version class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestVersion.hpp"
#include "Version.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestVersion::UnitTestVersion(bool brief, 
                                 const std::string& path) 
                                 : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestVersion.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 *  @param[in] out - stream to write results to.
 */
void UnitTestVersion::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestVersion", out);

    Version& version =  Version::Instance();

    std::string er1 = "1.0";
    std::string ar1 = version.version();
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "UnitTestVersion", "version", ar1, er1, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestVersion", diff, out);
}
// EOF
