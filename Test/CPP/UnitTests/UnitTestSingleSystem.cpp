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
// File UnitTestSingleSystem.cpp
//
// Unit test for SingleSystem class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestSingleSystem.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestSingleSystem::UnitTestSingleSystem(bool brief, 
                                           const std::string& path) 
                                           : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestSingleSystem.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestSingleSystem::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestSingleSystem", out);

    SingleSystem usb0;
    SingleSystem usb1("force");

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

    unit.clear();
    unit["a.u.[au-of-linear-momentum]"]    = UBASE("a.u.", "au-of-linear-momentum",    1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0");
    unit["a.u.[aulm]"]                     = UBASE("a.u.", "au-of-linear-momentum",    1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0");
    unit["cgs[bole]"]                      = UBASE("cgs", "bole",                      1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0");
    unit["cgs[gramcentimeter-per-second]"] = UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0");
    unit["cgs[gcm/sec]"]                   = UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0");
    unit["SI[newton-second]"]              = UBASE("SI", "newton-second",              1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0");
    unit["SI[N-sec]"]                      = UBASE("SI", "newton-second",              1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0");
    
    map["momentum"] = BaseSystem("momentum", unit, "1.0");
    SingleSystem usb2("force", map);

    SingleSystem usb3(usb2);
    SingleSystem usb4 = usb2;

    out << "Default Constructor" << std::endl;
    printResult(!usb0.valid(), "UnitTestSingleSystem", "Default Constructor", 
                bool_to_str(usb0.valid()), "false", out);
    out << std::endl;

    out << "Name Constructor" << std::endl;
    printResult(usb1.valid(), "UnitTestSingleSystem", "Name Constructor",
                bool_to_str(usb1.valid()), "true", out);
    out << std::endl;

    testSingleSystem(usb2, "Unit Constructor",  out);
    testSingleSystem(usb3, "Copy Constructor", out);
    testSingleSystem(usb4, "Assignment Operator", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestSingleSystem", diff, out);
}

/*
 * @brief Test a SingleSystem.
 * 
 * @param[in] usb - CanonicalSystem to test.
 * @param[in] label - identifying label for output.
 * @param[in] out - stream to write results to.
 */
void UnitTestSingleSystem::testSingleSystem(SingleSystem& usb, 
                                            const std::string& label, 
                                            std::ostream& out)
{
    out << label << std::endl;

    TypeGroup us = usb.typeGroup("momentum", "cgs");
    std::list<std::string> ar1 = us.unitNames();
    std::list<std::string> er1 = {"cgs[bole]", 
                                  "cgs[gramcentimeter-per-second]", 
                                  "cgs[gcm/sec]"};
    bool r1 = us.valid();
    printResult(r1, "UnitTestSingleSystem", "typeGroup, unitNames", 
                bool_to_str(us.valid())+", "+listToString(ar1), "true, "
                                            + listToString(er1), out);

    std::string er2 = "ton-per-mile";
    std::string ar2 = usb.rawUnitName("UK[ton-per-mile]");
    bool r2 = (ar2 == er2 ? true : false);
    printResult(r2, "UnitTestSingleSystem", "rawUnitName", ar2, er2, out);

    std::string er3 = "UK[ton-per-mile]";
    std::string ar3 = usb.fullUnitName("UK", "ton-per-mile");
    bool r3 = (ar3 == er3 ? true : false);
    printResult(r3, "UnitTestSingleSystem", "fullUnitName", ar3, er3, out);


    std::list<std::string> ar4 = usb.systemNames("momentum");  
    std::list<std::string> er4 = { "a.u.", "cgs","SI" };
    bool r4 = compareList(ar4, er4);
    printResult(r4, "UnitTestSingleSystem", "systemNames", listToString(ar4), 
                    listToString(er4), out);


    std::list<std::string> ar5 = usb.systemNames(); 
    std::list<std::string> er5 = { "US", "UK", "Imperial", "MKpS", "a.u.", 
                                   "cgs","SI" };
    bool r5 = compareList(ar5, er5);
    printResult(r5, "UnitTestSingleSystem", "systemNames", listToString(ar5), 
                     listToString(er5), out);

    std::list<std::string> ar6 = usb.typeNames();  
    std::list<std::string> er6 = { "force","momentum" };
    bool r6 = compareList(ar6, er6);
    printResult(r6, "UnitTestSingleSystem", "typeNames", listToString(ar6), 
                    listToString(er6),  out);


    std::list<std::string> ar7 = usb.unitNames("force", "UK");
    std::list<std::string> er7 = { "UK[ounce-force]", "UK[ozf]", 
                                   "UK[ton-force(long)]" };
    bool r7 = compareList(ar7, er7);
    printResult(r7, "UnitTestSingleSystem", "unitNames", listToString(ar7), 
                     listToString(er7), out);

    std::list<std::string> ar8 = usb.unitNames();
    std::list<std::string> er8 = {"Imperial[kipf]",                 "Imperial[kip-force]",
                                  "Imperial[odl]",                  "Imperial[lbf]",
                                  "Imperial[tondal]",               "Imperial[tdl]",
                                  "MKpS[kgf]",                      "MKpS[kgp]",
                                  "MKpS[kgw]",                      "MKpS[pond]",
                                  "MKpS[p]",                        "SI[newton]",
                                  "SI[N]",                          "UK[ounce-force]",
                                  "UK[ozf]",                        "UK[ton-force(long)]",
                                  "US[ounce-force]",                "US[ozf]",
                                  "US[ton-force(short)]",           "a.u.[au-of-linear-momentum]",
                                  "a.u.[aulm]",                     "cgs[bole]",
                                  "cgs[gramcentimeter-per-second]", "cgs[gcm/sec]",
                                  "SI[newton-second]",              "SI[N-sec]"};
    bool r8 = compareList(ar8, er8);
    printResult(r8, "UnitTestSingleSystem", "unitNames", listToString(ar8), 
                     listToString(er8), out);


    double ar9 = usb.convertUnit(1.0, "force","force","lbf","Imperial",
                                 "newton","SI", false);
    double er9 = 4.448221615260500E+00;
    bool r9 = (ar9 == er9 ? true : false);
    printResult(r9, "UnitTestSingleSystem", "convertUnit", std::to_string(ar9), 
                    std::to_string(er9), out);

    out << std::endl;
}
// EOF
