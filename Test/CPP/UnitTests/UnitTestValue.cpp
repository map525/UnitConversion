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
// File UnitTestValue.cpp
//
// Unit test for Value class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestValue.hpp"
#include <iostream>
#include <string>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestValue::UnitTestValue(bool brief,
                             const std::string& path) 
                             : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestValue.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestValue::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestValue", out);

    Value v;
    Value vd(3.5);
    Value vi(3ULL);
    Value vod(vd);
    Value voi(vi);
    Value vxd = vd;
    Value vxi = vi;

    out << "Default Constructor" << std::endl;
    printResult(!v.valid(), "UnitTestValue", "Default Constructor", 
                             bool_to_str(v.valid()), "false", out);
    out << std::endl;

    testValue(vd,  "Double Constructor",               true,  out);
    testValue(vi,  "Integer Constructor",              false, out);
    testValue(vod, "Copy Constructor With Double",     true,  out);
    testValue(voi, "Copy Constructor With Integer",    false, out);
    testValue(vxd, "Assignment Operator With Double",  true,  out);
    testValue(vxi, "Assignment Operator With Integer", false, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestValue", diff, out);
}

/*
 * @brief Test a value.
 * 
 * @param[in] v - value to test.
 * @param[in] label - identifying label for output.
 * @param[in] isDouble - true if value is a double, otherwise value is integer.
 * @param[in] out - stream to write results to.
 */
void UnitTestValue::testValue(Value& v, 
                              const std::string& label, 
                              bool isDouble, 
                              std::ostream& out)
{
    out << label << std::endl;

    double ar0 = v.asDouble();
    double er0 = (isDouble ? 3.5 : 3.0);
    bool r0 = (ar0 == er0 ? true : false);
    printResult(r0, "UnitTestValue", "asDouble", std::to_string(ar0), 
                    std::to_string(er0), out);

    uint64_t ar1 = v.asInteger();
    uint64_t er1 = 3;
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "UnitTestValue", "asInteger", std::to_string(ar1), 
                    std::to_string(er1), out);

    if (isDouble)
    {
        double ar2 = v.dvalue();
        double er2 = 3.5;
        bool r2 = (ar2 == er2 ? true : false);
        printResult(r2, "UnitTestValue", "dvalue", std::to_string(ar2), 
                        std::to_string(er2), out);

        bool r3 = (v.type() == Value::DOUBLE ? true : false);
        Value::TYPE ar3 = v.type();
        Value::TYPE er3 = Value::DOUBLE;
        printResult(r3, "UnitTestValue", "type (DOUBLE)", std::to_string(ar3), 
                        std::to_string(er3), out);
    }
    else
    {
        uint64_t ar2 = v.ivalue();
        uint64_t er2 = 3;
        bool r2 = (ar2 == er2 ? true : false);
        printResult(r2, "UnitTestValue", "ivalue", std::to_string(ar2), 
                        std::to_string(er2), out);

        bool r3 = (v.type() == Value::UINT ? true : false);
        Value::TYPE ar3 = v.type();
        Value::TYPE er3 = Value::UINT;
        printResult(r3, "UnitTestValue", "type (UINT)", std::to_string(ar3), 
                        std::to_string(er3), out);
    }

    bool r5 = v.valid();
    std::string ar5 = bool_to_str(r5);
    std::string er5 = "true";
    printResult(r5, "UnitTestValue", "valid", ar5, er5, out);

    v.value(4ULL);
    uint64_t ar6 = v.asInteger();
    uint64_t er6 = 4;
    bool r6 = (ar6 == er6 ? true : false);
    printResult(r6, "UnitTestValue", "value:integer", std::to_string(ar6), 
                    std::to_string(er6), out);

    v.value(5.3);
    double ar7 = v.asDouble();
    double er7 = 5.3;
    bool r7 = (ar7 == er7 ? true : false);
    printResult(r7, "UnitTestValue", "value:double", std::to_string(ar7), 
                    std::to_string(er7), out);
    out << std::endl;
}
// EOF
