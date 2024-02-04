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
// File UnitTestTypeGroup.cpp
//
// Unit test for TypeGroup class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestTypeGroup.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestTypeGroup::UnitTestTypeGroup(bool brief,
                                     const std::string& path) 
                                     : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestTypeGroup.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestTypeGroup::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestTypeGroup", out);

    TypeGroup us0;
    TypeGroup us5("Volume","1.0");

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
    TypeGroup us1("linearDensity", unit,"1.0");

    TypeGroup us2(us1);
    TypeGroup us3 = us1;

    out << "Default Constructor" << std::endl;
    printResult(!us0.valid(), "UnitTestTypeGroup", "Default Constructor", 
                              bool_to_str(us0.valid()), "false", out);
    out << std::endl;

    out << "Empty Constructor" << std::endl;
    printResult(us5.valid(), "UnitTestTypeGroup", "Empty Constructor", 
                bool_to_str(us0.valid())+", "+us5.name(), "true, Volume", out);
    out << std::endl;

    testTypeGroup(us1, "Constructor",  out);
    testTypeGroup(us2, "Copy Constructor", out);
    testTypeGroup(us3, "Assignment Operator", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestTypeGroup", diff, out);
}

/*
 * @brief Test TypeGroup.
 * 
 * @param[in] usys  - TypeGroup to test.
 * @param[in] label - identifying label for output.
 * @param[in] out   - stream to write results to.
*/
void UnitTestTypeGroup::testTypeGroup(TypeGroup& usys, 
                                      const std::string& label,  
                                      std::ostream& out)
{
    out << label << std::endl;

    printResult(usys.check(), "UnitTestTypeGroup", "check", 
                              bool_to_str(usys.check()), "true", out);
    printResult(usys.valid(), "UnitTestTypeGroup", "valid", 
                              bool_to_str(usys.valid()), "true", out);

    std::string er1 = "linearDensity";
    std::string ar1 = usys.name();
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "UnitTestTypeGroup", "name", ar1, er1, out);

    std::string er2 = "1.0";
    std::string ar2 = usys.version();
    bool r2 = (ar2 == er2 ? true : false);
    printResult(r2, "UnitTestTypeGroup", "version", ar2, er2, out);


    UBASE unit = usys.unit("UK[ton-per-foot]");
    bool r3 = (unit.valid() && unit.name() == "ton-per-foot" 
                            && unit.type() == "M/L" 
                            && unit.version() == "1.0"
                            && unit.offset().asDouble() == 0 
                            && unit.value().asDouble() == 3.333487233595800E+03
                            && unit.system() == "UK" 
                            && unit.unit() == "kg/m" ? true : false);
    std::string ar3 = unit.toString();
    std::string er3 = "type: M/L, system: UK,  name: UK[ton-per-foot], \
                       value: 3.333487233595800E+03, offset: 0, unit: kg/m, \
                       version: 1.0, valid: true";
    printResult(r3, "UnitTestTypeGroup", "unit", ar3, er3, out);

    UBASE newUnit("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", 
                  "M/L", "1.0");
    bool ans1 = usys.addUnit("Imperial[pound-per-yard]", newUnit);
    UBASE addUnit = usys.unit("Imperial[pound-per-yard]");
    bool r4 = (ans1 && addUnit.valid() ? true : false);
    std::string er4 = "true, true";
    std::string ar4 = bool_to_str(ans1) + ", " + bool_to_str(addUnit.valid());
    printResult(r4, "UnitTestTypeGroup", "addUnit", ar4, er4,  out);

    bool result = usys.removeUnit("Imperial[pound-per-yard]");
    UBASE removeUnit = usys.unit("Imperial[pound-per-yard]");
    bool r5 = (result && !removeUnit.valid() ? true : false);
    std::string er5 = "true, false";
    std::string ar5 = bool_to_str(result) + ", " + bool_to_str(!removeUnit.valid());
    printResult(r5, "UnitTestTypeGroup", "removeUnit", ar5, er5, out);

    std::list<std::string> er6 = { "UK","SI" };
    std::list<std::string> ar6 = usys.systemNames();
    bool r6 = compareList(er6, ar6);
    printResult(r6, "UnitTestTypeGroup", "systemNames", listToString(ar6), 
                     listToString(er6), out);

    std::list<std::string> er7 = {"UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
                                  "UK[ton-per-mile]",       "UK[t/mi]",
                                  "UK[ton-per-yard]",       "UK[t/yd]", 
                                  "UK[ton-per-foot]",       "UK[t/ft]",
                                  "UK[ton-per-meter]",      "UK[t/m]",
                                  "SI[ton-per-kilometer]",  "SI[t/km]"};
    std::list<std::string> ar7 = usys.unitNames();
    bool r7 = compareList(er7, ar7);
    printResult(r7, "UnitTestTypeGroup", "unitNames", listToString(ar7), 
                    listToString(er7), out);

    out << std::endl;
}
// EOF
