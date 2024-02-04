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
// File UnitTestUBase.cpp
//
// Unit test for UBASE class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestUBase.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestUBase::UnitTestUBase(bool brief,
                             const std::string& path) 
                             : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestUBase.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestUBase::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestUBase", out);

    UBASE u;
    UBASE ud("system", "double",  3.5,  "unit", "type", "1.0", 5.3);
    UBASE ui("system", "integer", 3ULL, "unit", "type", "1.0", 1ULL);
    UBASE uc(ud);
    UBASE ux = ui;


    out << "Default Constructor" << std::endl;
    printResult(!u.valid(), "UnitTestUBase", "Default Constructor", 
                            bool_to_str(u.valid()), "false", out);
    out << std::endl;

    testUBase(ud, "Double Constructor", true, out);
    testUBase(ui, "Integer Constructor", false, out);
    testUBase(uc, "Copy Constructor With Double", true, out);
    testUBase(ux, "Assignment Operator With Integer", false, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestUBase", diff, out);
}

/*
 * @brief Test UBASE.
 * 
 * @param[in] ubase    - UBASE to test.
 * @param[in] label    - identifying label for output.
 * @param[in] isDouble - true if value is a double, otherwise value is integer.
 * @param[in] out      - stream to write results to.
 */
void UnitTestUBase::testUBase(UBASE& ubase, 
                              const std::string& label, 
                              bool isDouble, 
                              std::ostream& out)
{
    out << label << std::endl;

    std::string er1 = (isDouble ? "double" : "integer");
    std::string ar1 = ubase.name();
    bool r1 = (ar1 ==  er1 ? true : false);
    printResult(r1, "UnitTestUBase", "name", ar1, er1, out);

    double er2 = (isDouble ? 5.3 : 1.0);
    double ar2 = ubase.offset().asDouble();
    bool r2 = (ar2 == er2 ? true : false);
    printResult(r2, "UnitTestUBase", "offset", std::to_string(ar2), 
                    std::to_string(er2), out);

    std::string er3 = "system";
    std::string ar3 = ubase.system();
    bool r3 = (ar3 == er3 ? true : false);
    printResult(r3, "UnitTestUBase", "system", ar3, er3, out);

    std::string er4 = "type";
    std::string ar4 = ubase.type();
    bool r4 = (ar4 == er4 ? true : false);
    printResult(r4, "UnitTestUBase", "type", ar4, er4, out);

    std::string er5 = "unit";
    std::string ar5 = ubase.unit();
    bool r5 = (ar5 == er5 ? true : false);
    printResult(r5, "UnitTestUBase", "unit", ar5, er5, out);

    std::string er6 = "true";
    bool ar6 = ubase.valid();
    bool r6 = (ar6 ? true : false);
    printResult(r6, "UnitTestUBase", "valid", bool_to_str(ar6), er6, out);

    double er7 = (isDouble ? 3.5 : 3.0);
    double ar7 = ubase.value().asDouble();
    bool r7 = (ar7 == er7 ? true : false);
    printResult(r7, "UnitTestUBase", "value", std::to_string(ar7), 
                    std::to_string(er7), out);

    std::string er8 = "1.0";
    std::string ar8 = ubase.version();
    bool r8 = (ar8 == er8 ? true : false);
    printResult(r8, "UnitTestUBase", "version", ar8, er8, out);

    if (isDouble)
    {
        std::string ar9 = ubase.toString();
        std::string er9a = "type: type, system: system, name: double, ";
        std::string er9b = "value: 3.500000000000000e+00, ";
        std::string er9c = "offset: 5.300000000000000e+00, ";
        std::string er9d = "unit: unit, version: 1.0, valid: true";
        std::string er9 = er9a + er9b + er9c + er9d;
        bool ans = (ar9 == er9 ? true : false);
        printResult(ans, "UnitTestUBase", "toString", ar9, er9, out);
    }
    else
    {
        std::string ar9 = ubase.toString();
        std::string er9a = "type: type, system: system, name: integer, ";
        std::string er9b = "value: 3.000000000000000e+00, ";
        std::string er9c = "offset: 1.000000000000000e+00, ";
        std::string er9d = "unit: unit, version: 1.0, valid: true";
        std::string er9 = er9a + er9b + er9c + er9d;
        bool ans = (ar9 == er9 ? true : false);
        printResult(ans, "UnitTestUBase", "toString", ar9, er9, out);
    }

    out << std::endl;
}
// EOF
