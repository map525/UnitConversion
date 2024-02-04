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
// File UnitTestConverter.cpp
//
// Unit test for Converter class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestConverter.hpp"
#include "SingleSystem.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestConverter::UnitTestConverter(bool brief, 
                                     const std::string& path) 
                                     : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestConverter.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestConverter::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestConverter", out);

    std::map<std::string, UBASE> unit;
    unit["Imperial[kipf]"]       = UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0");
    unit["Imperial[kip-force]"]  = UBASE("Imperial", "kilopound-force",  4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0");
    unit["Imperial[odl]"]        = UBASE("Imperial", "ouncedal",         8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0");
    unit["Imperial[lbf]"]        = UBASE("Imperial", "pound-force",      4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0");
    unit["Imperial[tondal]"]     = UBASE("Imperial", "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0");
    unit["Imperial[tdl]"]        = UBASE("Imperial", "tondal",           3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0");
    unit["MKpS[kgf]"]            = UBASE("MKpS",     "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
    unit["MKpS[kgp]"]            = UBASE("MKpS",     "kilogram-force",   9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
    unit["MKpS[kgw]"]            = UBASE("MKpS",     "kilogram-weight",  9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
    unit["MKpS[pond]"]           = UBASE("MKpS",     "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
    unit["MKpS[p]"]              = UBASE("MKpS",     "pond",             9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
    unit["SI[newton]"]           = UBASE("SI",       "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
    unit["SI[N]"]                = UBASE("SI",       "newton",           1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
    unit["UK[ounce-force]"]      = UBASE("UK",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
    unit["UK[ozf]"]              = UBASE("UK",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
    unit["UK[ton-force(long)]"]  = UBASE("UK",       "ton-force(long)",  9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0");
    unit["US[ounce-force]"]      = UBASE("US",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
    unit["US[ozf]"]              = UBASE("US",       "ounce-force",      2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
    unit["US[ton-force(short)]"] = UBASE("US",       "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0");

    std::map<std::string, BaseSystem> map;
    map["force"] = BaseSystem("force", unit, "1.0");
    SingleSystem usb("force", map);
    Converter con1("Force", "force", "SI", "SI", usb);
    Converter con2("Force", "force", "force", "force", "SI", "SI", usb);

    testConverter(con1, "Constructor",  out);
    testConverter(con2, "Constructor (two types)",  out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestConverter", diff, out);
}

/*
 * @brief Test a Converter.
 * 
 * @param[in] con      - Converter to test.
 * @param[in] label    - identifying label for output.
 * @param[in] out      - stream to write results to.
 */
void UnitTestConverter::testConverter(Converter& con, 
                                      const std::string& label, 
                                      std::ostream& out)
{
    out << label << std::endl;

    std::string er1 = "force";
    std::string ar1 = con.fromType();
    bool r1 = (ar1 == "force" ? true : false);
    printResult(r1, "UnitTestConverter", "fromType", ar1, er1, out);

    std::string er2 = "false";
    bool r2 = !con.fromType("angle");
    std::string ar2 = bool_to_str(r2);
    printResult(r2, "UnitTestConverter", "fromType", ar2, er2, out);

    std::string er3 = "force";
    std::string ar3 = con.toType();
    bool r3 = (ar3 == "force" ? true : false);
    printResult(r3, "UnitTestConverter", "toType", ar3, er3, out);

    std::string er4 = "false";
    bool r4 = !con.toType("angle");
    printResult(r4, "UnitTestConverter", "toType", bool_to_str(r4), er4, out);

    UBASE unit = con.unit("UK", "ounce-force");
    bool r5 = (unit.valid() && unit.system() == "UK" 
                            && unit.name() == "ounce-force" ? true : false);
    std::string er5 = "true, UK, ounce-force";
    std::string ar5 = bool_to_str(unit.valid()) + ", " + unit.system()
                                                + ", " + unit.unit();
    printResult(r5, "UnitTestConverter", "unit", ar5, er5, out);

    std::string er6 = "force";
    std::string ar6 = con.type();
    bool r6 = (ar6 == er6 ? true : false);
    printResult(r6, "UnitTestConverter", "type", ar6, er6, out);

    TypeGroup us = con.typeGroup("UK");
    std::list<std::string> ar7 = us.unitNames();
    std::list<std::string> er7 = { "UK[ounce-force]", "UK[ozf]","UK[ton-force(long)]" };
    bool r7 = (us.valid() && compareList(ar7, er7) ? true : false);
    printResult(r7, "UnitTestConverter", "typeGroup", bool_to_str(us.valid()) 
                + ", "+ listToString(ar7), "true, "+listToString(er7), out);

    std::list<std::string> ar8 = con.systemNames(); 
    std::list<std::string> er8 = { "Imperial", "MKpS", "SI", "UK","US" };
    bool r8 = compareList(ar8, er8);
    printResult(r8, "UnitTestConverter", "systemNames", listToString(ar8), 
                    listToString(er8), out);

    std::list<std::string> ar9 = con.unitNames("US");
    std::list<std::string> er9 = { "US[ounce-force]", "US[ozf]", 
                                   "US[ton-force(short)]" };
    bool r9 = compareList(ar9, er9);
    printResult(r9, "UnitTestConverter", "unitNames", listToString(ar9), 
                    listToString(er9), out);

    std::list<std::string> ar10 = con.unitNames();
    std::list<std::string> er10 = {"Imperial[kipf]",   "Imperial[kip-force]", 
                                   "Imperial[odl]",    "Imperial[lbf]", 
                                   "Imperial[tondal]", "Imperial[tdl]", 
                                   "MKpS[kgf]",        "MKpS[kgp]",  
                                   "MKpS[kgw]",        "MKpS[pond]", 
                                   "MKpS[p]",          "SI[newton]", 
                                   "SI[N]",            "UK[ounce-force]", 
                                   "UK[ozf]",          "UK[ton-force(long)]", 
                                   "US[ounce-force]",  "US[ozf]", 
                                   "US[ton-force(short)]"};
    bool r10 = compareList(ar10, er10);
    printResult(r10, "UnitTestConverter", "unitNames", listToString(ar10), 
                     listToString(er10), out);


    UBASE newUnit("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", 
                  "M.L/T2", "1.0");
    bool ans = con.addUnit("SI", "kilonewton", newUnit);
    UBASE addedUnit = con.unit("SI", "kilonewton");
    bool r11 = (ans && addedUnit.valid() && addedUnit.system() == "SI" 
                    && addedUnit.name() == "kilonewton" ? true : false);
    std::string er11 = "true, true, SI, kilonewton";
    std::string ar11 = bool_to_str(ans) + ", " + bool_to_str(addedUnit.valid()) 
                     + ", " + addedUnit.system() + ", " + addedUnit.name();
    printResult(r11, "UnitTestConverter", "addUnit", ar11, er11, out);

    bool result = con.removeUnit("SI", "kilonewton");
    UBASE removedUnit = con.unit("SI", "kilonewton");
    bool r12 = (ans && !removedUnit.valid() ? true : false);
    std::string er12 = "true, false";
    std::string ar12 = bool_to_str(ans) + ", " + bool_to_str(removedUnit.valid());
    printResult(r12, "UnitTestConverter", "removeUnit", ar12, er12, out);

    con.toSystem("Imperial");
    double x1 = con.convert(1.0, "newton", "kipf");
    con.toSystem("SI");
    double x2 = con.convert(1.0, "SI[newton]","Imperial[kipf]", true);
    double cvtAns = 1.0 / 4.448221615260500E+03;
    bool r13 = (x1 == cvtAns && x2 == cvtAns ? true : false);
    std::string er13 = std::to_string(cvtAns) + ", " + std::to_string(cvtAns);
    std::string ar13 = std::to_string(x1) + ", " + std::to_string(x2);
    printResult(r13, "UnitTestConverter", "convert", ar13, er13, out);

    double x3 = con.convert(1.0, "newton","SI","kipf", "Imperial");
    bool r14 = (x2 == cvtAns ? true : false);
    std::string er14 = std::to_string(cvtAns);
    std::string ar14 = std::to_string(x3);
    printResult(r14, "UnitTestConverter", "convert", ar14, er14, out);

    out << std::endl;
}
// EOF
