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
// File UnitTestConvert.cpp
//
// Unit test for Convert class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestConvert.hpp"
#include "SingleSystem.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestConvert::UnitTestConvert(bool brief,
                                 const std::string& path) 
                                 : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestConvert.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestConvert::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestConvert", out);

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
    map["linearDensity"] = BaseSystem("linearDensity", unit, "1.0");
    SingleSystem cv("linearDensity", map);

    Convert cvt1("Density","UK","UK",cv);
    Convert cvt2(cvt1);
    Convert cvt3 = cvt1;

    testConvert(cvt1, "Constructor", out); 
    testConvert(cvt2, "Copy Constructor", out); 
    testConvert(cvt3, "Assignment Operator", out); 

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestConvert", diff, out);
}

/*
 * @brief Test Convert.
 * 
 * @param[in] cvt      - Convert to test.
 * @param[in] label    - identifying label for output.
 * @param[in] out      - stream to write results to.
 */
void UnitTestConvert::testConvert(Convert& cvt, 
                                  const std::string& label, 
                                  std::ostream& out)
{
    out << label << std::endl;

    bool r0 = cvt.check();
    std::string er0 = "true";
    std::string ar0 = bool_to_str(r0);
    printResult(r0, "UnitTestConvert", "check", ar0, er0, out);


    std::string er1 = "Density";
    std::string ar1 = cvt.name();
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "UnitTestConvert", "name", ar1, er1, out);

    std::string er2 = "true";
    std::string ar2 = bool_to_str(cvt.valid());
    bool r2 = cvt.valid();
    printResult(r2, "UnitTestConvert", "valid", ar2, er2, out);

    std::string er3 = "UK[ton-per-yard]";
    std::string ar3 = cvt.fullUnitName("UK", "ton-per-yard");
    bool r3 = (ar3 == er3 ? true : false);
    printResult(r3, "UnitTestConvert", "fullUnitName", ar3, er3, out);

    std::string er4 = "ton-per-yard";
    std::string ar4 = cvt.rawUnitName("UK[ton-per-yard]");
    bool r4 = (ar4 == er4);
    printResult(r4, "UnitTestConvert", "rawUnitName", ar4, er4, out);

    std::list<std::string> ar5 = cvt.allSystemNames();
    std::list<std::string> er5 = {"UK", "SI"};
    bool r5 = compareList(ar5, er5);
    printResult(r5, "UnitTestConvert", "allSystemNames", listToString(ar5), 
                   listToString(er5), out);

    std::list<std::string> ar6 = cvt.allUnitNames();
    std::list<std::string> er6 = {"UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
                                  "UK[ton-per-mile]",       "UK[t/mi]", 
                                  "UK[ton-per-yard]",       "UK[t/yd]", 
                                  "UK[ton-per-foot]",       "UK[t/ft]", 
                                  "UK[ton-per-meter]",      "UK[t/m]", 
                                  "SI[ton-per-kilometer]",  "SI[t/km]"};
    bool r6 = compareList(ar6, er6);
    printResult(r6, "UnitTestConvert", "allUnitNames", listToString(ar6), 
                    listToString(er6), out);

    std::string er7 = "UK";
    std::string ar7 = cvt.fromSystem();
    bool r7 = (ar7 == er7 ? true : false);
    printResult(r7, "UnitTestConvert", "fromSystem", ar7, er7, out);

    std::string er8 = "UK";
    std::string ar8 = cvt.toSystem();
    bool r8 = (ar8 == er8 ? true : false);
    printResult(r8, "UnitTestConvert", "toSystem", ar8, er8, out);

    cvt.fromSystem("SI");
    std::string er9 = "SI";
    std::string ar9 = cvt.fromSystem();
    bool r9 = (ar9 == er9 ? true : false);
    printResult(r9, "UnitTestConvert", "fromSystem", ar9, er9, out);
    cvt.fromSystem("UK");


    cvt.toSystem("SI");
    std::string er10 = "SI";
    std::string ar10 = cvt.toSystem();
    bool r10 = (ar10 == er10 ? true : false);
    printResult(r10, "UnitTestConvert", "toSystem", ar10, er10, out);
    cvt.toSystem("UK");

    std::list<std::string> ar11 = cvt.typeNames();
    std::list<std::string> er11 = { "linearDensity" };
    bool r11 = compareList(ar11, er11);
    printResult(r11, "UnitTestConvert", "typeNames", listToString(ar11), 
                     listToString(er11),  out);

    out << std::endl;
}
// EOF
