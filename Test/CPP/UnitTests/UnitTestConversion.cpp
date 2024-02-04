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
// File UnitTestConversion.cpp
//
// Unit test for Conversion class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestConversion.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestConversion::UnitTestConversion(bool brief, 
                                       const std::string& path) 
                                       : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestConversion.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestConversion::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestConversion", out);

    Conversion cv0;
    Conversion cv1("force");

    std::map<std::string, UBASE> unit;
    unit["UK[ton-per-1000-yards]"] = UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0");
    unit["UK[t/1000-yd]"]          = UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0");
    unit["UK[ton-per-mile]"]       = UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0");
    unit["UK[t/mi]"]               = UBASE("UK", "ton-per-mile",       6.313422790901140E-01, "kg/m", "M/L", "1.0");
    unit["UK[ton-per-yard]"]       = UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0");
    unit["UK[t/yd]"]               = UBASE("UK", "ton-per-yard",       1.111162411198600E+03, "kg/m", "M/L", "1.0");
    unit["UK[ton-per-foot]"]       = UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0");
    unit["UK[t/ft]"]               = UBASE("UK", "ton-per-foot",       3.333487233595800E+03, "kg/m", "M/L", "1.0");
    unit["UK[ton-per-meter]"]      = UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0");
    unit["UK[t/m]"]                = UBASE("UK", "ton-per-meter",      1.000000000000000E+03, "kg/m", "M/L", "1.0");
    unit["SI[ton-per-kilometer]"]  = UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0");
    unit["SI[t/km]"]               = UBASE("SI", "ton-per-kilometer",  1.000000000000000E+00, "kg/m", "M/L", "1.0");
    std::map<std::string, BaseSystem> map;
    map["unit"] = BaseSystem("linearDensity", unit, "1.0");
    Conversion cv2("linearDensity", map);

    Conversion cv3(cv2);
    Conversion cv4 = cv2;

    out << "Default Constructor" << std::endl;
    bool r0 = !cv0.valid();
    std::string ar0 = bool_to_str(cv0.valid());
    std::string er0 = "false";
    printResult(r0, "UnitTestConversion", "Default Constructor", ar0, er0, out);
    out << std::endl;

    out << "Name Constructor" << std::endl;
    bool r1 = (cv1.valid() && cv1.name() == "force" ? true : false);
    std::string ar1 = bool_to_str(cv1.valid()) + ", " + cv1.name();
    std::string er1 = "true, force";
    printResult(r1, "UnitTestConversion", "Name Constructor", ar1, er1, out);
    out << std::endl;

    testConversion(cv2, "Constructor", out);
    testConversion(cv3, "Copy Constructor", out);
    testConversion(cv4, "Assignment", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestConversion", diff, out);
}

/*
 * @brief Test Conversion.
 * 
 * @param[in] cv       - Conversion to test.
 * @param[in] label    - identifying label for output.
 * @param[in] out      - stream to write results to.
 */
void UnitTestConversion::testConversion(Conversion& cv, 
                                        const std::string& label,
                                        std::ostream& out)
{
    out << label << std::endl;

    bool r1 = (cv.validateType("linearDensity", "linearDensity") 
               && !cv.validateType("linearDensity", "density") ? true : false);
    std::string ar1 = bool_to_str(cv.validateType("linearDensity", "linearDensity")) 
                      + ", " + bool_to_str(cv.validateType("linearDensity", "density"));
    std::string er1 = "true, false";
    printResult(r1, "UnitTestConversion", "validateType", ar1, er1, out);


    UBASE newUnit("Imperial", "pound-per-yard", 4.960546478565180E-01, 
                  "kg/m", "M/L", "1.0");
    bool ans3 = cv.addUnit("unit", "Imperial", "pound-per-yard", newUnit);
    UBASE addUnit = cv.unit("unit", "Imperial","pound-per-yard");
    bool r3 = (ans3 && addUnit.valid() ? true : false);
    std::string ar3 = bool_to_str(ans3) + ", " + bool_to_str(addUnit.valid());
    std::string er3 = "true, true";
    printResult(r3, "UnitTestConversion", "addUnit", ar3, er3, out);


    bool ans4 = cv.removeUnit("unit", "Imperial","pound-per-yard");
    UBASE removeUnit = cv.unit("unit", "Imperial","pound-per-yard");
    bool r4 = (ans4 && !removeUnit.valid() ? true : false);
    std::string ar4 = bool_to_str(ans4) + ", " + bool_to_str(removeUnit.valid());
    std::string er4 = "true, false";
    printResult(r4, "UnitTestConversion", "removeUnit", ar4, er4, out);

    double x=  cv.convertUnit(1.0, "linearDensity",  "linearDensity",  
                              "ton-per-foot", "UK",  "ton-per-yard", "UK", false);
    double ex = UBASE::ERROR;
    bool r5 = UBASE::isERROR(x); //(x == ex ? true : false);
    std::string ar5 = std::to_string(x);
    std::string er5 = std::to_string(ex);
    printResult(r5, "UnitTestConversion", "convertUnit", ar5, er5, out);

    out << std::endl;
}
// EOF
