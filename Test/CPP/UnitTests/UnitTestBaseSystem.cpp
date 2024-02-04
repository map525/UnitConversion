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
// File UnitTestBaseSystem.cpp
//
// Unit test for BaseSystem class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestBaseSystem.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path - the path to the output folder where the
 *                   test results are written.
 */
UnitTestBaseSystem::UnitTestBaseSystem(bool brief, 
                                       const std::string& path) 
                                       : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestBaseSystem.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestBaseSystem::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestBaseSystem", out);

    BaseSystem bs0;

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
    BaseSystem bs1("linearDensity", unit, "1.0");

    std::map<std::string, UBASE> length;
    std::map<std::string, UBASE> area;
    std::map<std::string, UBASE> mass;
    std::map<std::string, UBASE> liquid;
    std::map<std::string, UBASE> dry;

    length["foot"]        = UBASE("US", "foot",          3.048000000000000E-01, "m",  "L",  "1.0");
    length["furlong"]     = UBASE("US", "furlong",       2.011680000000000E+02, "m",  "L",  "1.0");
    length["inch"]        = UBASE("US", "inch",          2.540000000000000E-02, "m",  "L",  "1.0");
    length["league"]      = UBASE("US", "league",        5.559552000000000E+03, "m",  "L",  "1.0");
    length["mile"]        = UBASE("US", "mile",          1.609344000000000E+03, "m",  "L",  "1.0");
    length["yard"]        = UBASE("US", "yard",          9.144000000000000E-01, "m",  "L",  "1.0");
    area["acre"]          = UBASE("US", "acre",          4.046856422400000E+03, "m2", "L2", "1.0");
    area["square-inch"]   = UBASE("US", "square-inch",   6.451600000000000E-04, "m2", "L2", "1.0");
    area["square-foot"]   = UBASE("US", "square-foot",   9.290304000000000E-02, "m2", "L2", "1.0");
    area["square-mile"]   = UBASE("US", "square-mile",   2.589988110336000E+06, "m2", "L2", "1.0");
    area["square-yard"]   = UBASE("US", "square-yard",   8.361273600000000E-01, "m2", "L2", "1.0");
    mass["hundredweight"] = UBASE("US", "hundredweight", 5.080234544000000E+01, "kg", "M",  "1.0");
    mass["ounce"]         = UBASE("US", "ounce",         2.834952312500000E-02, "kg", "M",  "1.0");
    mass["pound"]         = UBASE("US", "pound",         4.535923700000000E-01, "kg", "M",  "1.0");
    liquid["cup"]         = UBASE("US", "cup",           2.365882365000000E-04, "m3", "L3", "1.0");
    liquid["gallon"]      = UBASE("US", "gallon",        3.785411784000000E-03, "m3", "L3", "1.0");
    liquid["quart"]       = UBASE("US", "quart",         9.463529460000000E-04, "m3", "L3", "1.0");
    dry["bushel"]         = UBASE("US", "bushel",        3.523907016688000E-02, "m3", "L3", "1.0");
    dry["cubic-in"]       = UBASE("US", "cubic-in",      1.638706400000000E-05, "m3", "L3", "1.0");
    dry["cubic-feet"]     = UBASE("US", "cubic-feet",    2.831684659200000E-02, "m3", "L3", "1.0");
    dry["cubic-yard"]     = UBASE("US", "cubic-yard",    7.645548579840000E-01, "m3", "L3", "1.0");
    BaseSystem bs2("US", length, area, mass, liquid, dry, "1.0");

    BaseSystem bs3(bs2);
    BaseSystem bs4 = bs1;

    out << "Default Constructor" << std::endl;
    printResult(!bs0.valid(), "UnitTestBaseSystem", "Default Constructor",
                 bool_to_str(bs0.valid()), "false",  out);
    out << std::endl;

    testBaseSystem(bs1, "Unit Constructor", true, out);
    testBaseSystem(bs2, "Length, area, mass, liquid, dry Constructor", false, out);
    testBaseSystem(bs3, "Copy Constructor With length, area, mass, liquid, dry", 
                   false, out);
    testBaseSystem(bs4, "Assignment Operator With Unit", true, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestBaseSystem", diff, out);
}

/*
 * @brief Test a BaseSystem.
 * 
 * @param[in] bsys     - BaseSystem to test.
 * @param[in] label    - identifying label for output.
 * @param[in] isUnit   - true if BaseSystem contains a single unit.
 * @param[in] out      - stream to write results to.
 */
void UnitTestBaseSystem::testBaseSystem(BaseSystem& bsys, 
                                        const std::string& label, 
                                        bool isUnit, 
                                        std::ostream& out)
{
    out << label << std::endl;

    bool r1 = bsys.check();
    std::string er1 = "true";
    std::string ar1 = bool_to_str(r1);
    printResult(r1, "UnitTestBaseSystem", "check", ar1, er1, out);

    std::string er2 = (isUnit ? "linearDensity" : "US");
    std::string ar2 = bsys.name();
    bool r2 = (ar2 == er2 ? true : false);
    printResult(r2, "UnitTestBaseSystem", "name", ar2, er2, out);

    bool r3 = bsys.valid();
    std::string er3 = "true";
    std::string ar3 = bool_to_str(r3);
    printResult(r3, "UnitTestBaseSystem", "valid", ar3, er3, out);

    std::string er4 = "1.0";
    std::string ar4 = bsys.version();
    bool r4 = (ar4 == er4 ? true : false);
    printResult(r4, "UnitTestBaseSystem", "version", ar4, er4, out);

    if (isUnit)
    {
        UBASE unit = bsys.unit("unit", "UK[ton-per-foot]");
        bool r5 = (unit.valid() && unit.name() == "ton-per-foot" 
                                && unit.type() == "M/L" 
                                && unit.version() == "1.0"
                                && unit.offset().asDouble() == 0 
                                && unit.value().asDouble() == 3.333487233595800E+03
                                && unit.system() == "UK" 
                                && unit.unit() == "kg/m" ? true : false);

        std::string ar5 = unit.toString();
        std::string er5 = "type: M/L, system: UK, name: UK[ton-per-foot], \
                           value: 3.333487233595800E+03, offset: 0.000000, \
                           unit: kg/m, version: 1.0, valid: true";
        printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5, out);


        UBASE newUnit("Imperial", "pound-per-yard", 4.960546478565180E-01, 
                       "kg/m", "M/L", "1.0");
        bool ans = bsys.addUnit("unit", "Imperial[pound-per-yard]", newUnit);
        UBASE addUnit = bsys.unit("unit", "Imperial[pound-per-yard]");
        bool r6 = (ans && addUnit.valid() ? true : false);
        std::string ar6 = bool_to_str(ans) + ", " + bool_to_str(addUnit.valid());
        std::string er6 = "true, true";
        printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6, out);

        bool result = bsys.removeUnit("unit", "Imperial[pound-per-yard]");
        UBASE removeUnit = bsys.unit("unit", "Imperial[pound-per-yard]");
        bool r7 = (result && !removeUnit.valid() ? true : false);
        std::string ar7 = bool_to_str(result) + ", " + bool_to_str(removeUnit.valid());
        std::string er7 = "true, false";
        printResult(r7, "UnitTestBaseSystem", "removeUnit", ar7, er7, out);


        std::list<std::string> er8 = { "unit" };
        std::list<std::string> ar8 = bsys.typeNames();
        bool r8 = compareList(er8, ar8);
        printResult(r8, "UnitTestBaseSystem", "typeNames", listToString(ar8), 
                         listToString(er8), out);


        std::list<std::string> er9 = { "UK","SI" };
        std::list<std::string> ar9 = bsys.systemNames("unit");
        bool r9 = compareList(er9, ar9);
        printResult(r9, "UnitTestBaseSystem", "systemNames", listToString(ar9), 
                         listToString(er9), out);

        std::list<std::string> er10 = {"UK[ton-per-1000-yards]", "UK[t/1000-yd]", 
                                       "UK[ton-per-mile]", "UK[t/mi]", "UK[ton-per-yard]", 
                                       "UK[t/yd]", "UK[ton-per-foot]", "UK[t/ft]", 
                                       "UK[ton-per-meter]", "UK[t/m]", 
                                       "SI[ton-per-kilometer]", "SI[t/km]"};
        std::list<std::string> ar10 = bsys.unitNames("unit");
        bool r10 = compareList(er10, ar10);
        printResult(r10, "UnitTestBaseSystem", "unitNames", listToString(ar10), 
                          listToString(er10), out);

        TypeGroup us = bsys.typeGroup("unit");
        std::string er11 = "true, linearDensity";
        std::string ar11 = bool_to_str(us.valid()) + ", " + us.name();
        bool r11 = (us.valid() && us.name() == "linearDensity" ? true : false);
        printResult(r11, "UnitTestBaseSystem", "typeGroup", ar11, er11, out);
    }
    else
    {
        UBASE unit = bsys.unit("Mass", "pound");
        bool r5 = (unit.valid() && unit.name() == "pound" && unit.type() == "M" 
                                && unit.version() == "1.0"
                                && unit.offset().asDouble() == 0 
                                && unit.value().asDouble() == 4.535923700000000E-01
                                && unit.system() == "US" 
                                && unit.unit() == "kg" ? true : false);
        std::string ar5 = unit.toString();
        std::string er5 = "type: M, system: US, name: pound, \
                           value: 4.535923700000000E-01, offset: 0.000000, \
                           unit: kg, version: 1.0, valid: true";
        printResult(r5, "UnitTestBaseSystem", "unit", ar5, er5, out);

        UBASE newUnit("US", "pint", 4.731764730000000E-04, "m3", "L3", "1.0");
        bool ans = bsys.addUnit("Liquid", "pint", newUnit);
        UBASE addUnit = bsys.unit("Liquid", "pint");
        bool r6 = (ans && addUnit.valid() ? true : false);
        std::string ar6 = bool_to_str(ans) + ", " + bool_to_str(addUnit.valid());
        std::string er6 = "true, true";
        printResult(r6, "UnitTestBaseSystem", "addUnit", ar6, er6, out);

        bool result = bsys.removeUnit("Liquid", "pint");
        UBASE removeUnit = bsys.unit("Liquid", "pint");
        bool r7 = (result && !removeUnit.valid() ? true : false);
        std::string ar7 = bool_to_str(result) + ", " + bool_to_str(removeUnit.valid());
        std::string er7 = "true, false";
        printResult(r7, "UnitTestBaseSystem", "removeUnit", ar7, er7, out);

        std::list<std::string> er8 = { "Length","Area","Mass","Liquid",
                                       "Dry", "Volume"};
        std::list<std::string> ar8 = bsys.typeNames();
        bool r8 = compareList(er8, ar8);
        printResult(r8, "UnitTestBaseSystem", "typeNames", listToString(ar8), 
                         listToString(er8), out);

        std::list<std::string> er9 = { "US" };
        std::list<std::string> ar9 = bsys.systemNames("Dry");
        bool r9 = compareList(er9, ar9);
        printResult(r9, "UnitTestBaseSystem", "systemNames", listToString(ar9), 
                        listToString(er9), out);

        std::list<std::string> er10 = { "acre","square-inch","square-foot",
                                        "square-mile","square-yard" };
        std::list<std::string> ar10 = bsys.unitNames("Area");
        bool r10 = compareList(er10, ar10);
        printResult(r10, "UnitTestBaseSystem", "unitNames", listToString(ar10), 
                          listToString(er10), out);

        TypeGroup us = bsys.typeGroup("Length");
        std::string er11 = "true, Length";
        std::string ar11 = bool_to_str(us.valid()) + ", " + us.name();
        bool r11 = (us.valid() && us.name() == "Length" ? true : false);
        printResult(r11, "UnitTestBaseSystem", "typeGroup", ar11, er11, out);
    }

    out << std::endl;
}
// EOF
