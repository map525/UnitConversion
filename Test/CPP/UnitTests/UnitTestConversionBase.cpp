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
// File UnitTestConversionBase.cpp
//
// Unit test for ConversionBase class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestConversionBase.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestConversionBase::UnitTestConversionBase(bool brief, 
                                               const std::string& path) 
                                               : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestConversionBase.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestConversionBase::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestConversionBase", out);

    ConversionBase cv0;
    ConversionBase cv1("force");

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
    ConversionBase cv2("linearDensity", map);

    ConversionBase cv3(cv2);
    ConversionBase cv4 = cv2;

    out << "Default Constructor" << std::endl;
    bool r0 = !cv0.valid();
    std::string ar0 = bool_to_str(cv0.valid());
    std::string er0 = "false";
    printResult(r0, "UnitTestConversionBase", "Default Constructor", ar0, er0, out);
    out << std::endl;

    out << "Name Constructor" << std::endl;
    bool r1 = (cv1.valid() && cv1.name() == "force" ? true : false);
    std::string ar1 = bool_to_str(cv1.valid()) + ", " + cv1.name();
    std::string er1 = "true, force";
    printResult(r1, "UnitTestConversionBase", "Name Constructor", ar1, er1, out);
    out << std::endl;

    testConversionBase(cv2, "Constructor", out);
    testConversionBase(cv3, "Copy Constructor", out);
    testConversionBase(cv4, "Assignment", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestConversionBase", diff, out);
}

/*
 * @brief Test Conversion.
 * 
 * @param[in] cv       - Conversion to test.
 * @param[in] label    - identifying label for output.
 * @param[in] out      - stream to write results to.
 */
void UnitTestConversionBase::testConversionBase(ConversionBase& cv, 
                                                const std::string& label,
                                                std::ostream& out)
{
    out << label << std::endl;

    bool r0 = cv.check();
    std::string er0 = "true";
    std::string ar0 = bool_to_str(r0);
    printResult(r0, "UnitTestConversionBase", "check", ar0, er0, out);

    std::string er1 = "linearDensity";
    std::string ar1 = cv.name();
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "UnitTestConversionBase", "name", ar1, er1, out);

    bool r3 = cv.valid();
    std::string ar3 = bool_to_str(r3);
    std::string er3 = "true";
    printResult(r3, "UnitTestConversionBase", "valid", ar3, er3, out);

    std::string er4 = "ton-per-mile";
    std::string ar4 = cv.fullUnitName("UK", "ton-per-mile");
    bool r4 = (ar4 == er4 ? true : false);
    printResult(r4, "UnitTestConversionBase", "fullUnitName", ar4, er4, out);

    std::string er5 = "ton-per-mile";
    std::string ar5 = cv.rawUnitName("ton-per-mile");
    bool r5 = (ar5 == er4 ? true : false);
    printResult(r5, "UnitTestConversionBase", "rawUnitName", ar5, er5, out);

    UBASE unit = cv.unit("unit", "UK", "ton-per-foot");
    bool r6 = unit.valid();
    std::string er6 = "true";
    std::string ar6 = bool_to_str(unit.valid());
    printResult(r6, "UnitTestConversionBase", "unit", ar6, er6, out);

    BaseSystem bs = cv.system("unit");
    bool r9 = bs.valid();
    std::string er9 = "true";
    std::string ar9 = bool_to_str(r9);
    printResult(r9, "UnitTestConversionBase", "system", ar9, er9, out);

    TypeGroup us = cv.typeGroup("linearDensity","UK");
    bool r10 = !us.valid();
    std::string er10 = "false";
    std::string ar10 = bool_to_str(us.valid());
    printResult(r10, "UnitTestConversionBase", "typeGroup", ar10, er10, out);

    std::list<std::string> l11 = cv.systemNames("linearDensity");
    bool r11 = (l11.size() == 0 ? true : false);
    std::string er11 = "0";
    std::string ar11 = std::to_string(l11.size());
    printResult(r11, "UnitTestConversionBase", "systemNames", ar11, er11, out);

    std::list<std::string> l12 = cv.systemNames();
    bool r12 = (l12.size() == 0 ? true : false);
    std::string er12 = "0";
    std::string ar12 = std::to_string(l12.size());
    printResult(r12, "UnitTestConversionBase", "systemNames", ar12, er12, out);

    std::list<std::string> l13 = cv.typeNames();
    bool r13 = (l13.size() == 0 ? true : false);
    std::string er13 = "0";
    std::string ar13 = std::to_string(l13.size());
    printResult(r13, "UnitTestConversionBase", "typeNames", ar13, er13, out);

    std::list<std::string> l14 = cv.unitNames("linearDensity", "UK");
    bool r14 = (l14.size() == 0 ? true : false);
    std::string er14 = "0";
    std::string ar14 = std::to_string(l14.size());
    printResult(r14, "UnitTestConversionBase", "unitNames", ar14, er14, out);

    std::list<std::string> ar15 = cv.unitNames();
    std::list<std::string> er15 = {"SI[ton-per-kilometer]", "UK[t/1000-yd]",
                                   "UK[t/ft]",              "UK[t/m]",
                                   "UK[t/mi]",              "UK[t/yd]",
                                   "UK[ton-per-1000-yards]","UK[ton-per-foot]",
                                   "UK[ton-per-meter]",     "UK[ton-per-mile]",
                                   "UK[ton-per-yard]",      "SI[t/km]"};
    bool r15 = compareList(ar15, er15);
    printResult(r15, "UnitTestConversionBase", "unitNames", listToString(ar15),  listToString(er15), out);

    out << std::endl;
}
// EOF
