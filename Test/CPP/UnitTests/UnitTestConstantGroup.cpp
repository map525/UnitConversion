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
// File UnitTestConstantGroup.cpp
//
// Unit test for ConstantGroup class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestConstantGroup.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestConstantGroup::UnitTestConstantGroup(bool brief,
                                             const std::string& path) 
                                             : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestConstantGroup.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestConstantGroup::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestConstantGroup", out);

    ConstantGroup ucb0;
    ConstantGroup ucb1("physicalConstants", "1.0");

    std::map<std::string, UBASE> constants;
    constants["Planck-constant"]   = UBASE("SI", "Planck-constant",   6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0");
    constants["h"]                 = UBASE("SI", "h",                 6.626070150000000E-34, "kg.m2/s",    "M.L2/T",     "1.0");
    constants["speed-of-light"]    = UBASE("SI", "speed-of-light",    2.997924580000000E+08, "m/s",        "L/T",        "1.0");
    constants["c"]                 = UBASE("SI", "c",                 2.997924580000000E+08, "m/s",        "L/T",        "1.0");
    constants["elementary-charge"] = UBASE("SI", "elementary-charge", 1.602176634000000E-19, "A.s",        "T.I",        "1.0");
    constants["e"]                 = UBASE("SI", "e",                 1.602176634000000E-19, "A.s",        "T.I",        "1.0");
    constants["Boltzman-constant"] = UBASE("SI", "Boltzman-constant", 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0");
    constants["k"]                 = UBASE("SI", "k",                 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0");
    constants["Avogadro-constant"] = UBASE("SI", "Avogadro-constant", 6.022140760000000E+23, "1/mol",      "1/N",        "1.0");
    constants["N"]                 = UBASE("SI", "N",                 6.022140760000000E+23, "1/mol",      "1/N",        "1.0");
    ConstantGroup ucb2("physicalConstants", "1.0", constants);

    ConstantGroup ucb3(ucb2);
    ConstantGroup ucb4 = ucb2;

    out << "Default Constructor" << std::endl;
    bool r1 = !ucb0.valid();
    std::string ar1 = bool_to_str(ucb0.valid());
    std::string er1 = "false";
    printResult(r1, "UnitTestConstantGroup", "Default Constructor", 
                    ar1, er1, out);
    out << std::endl;

    out << "Constructor (no constants)" << std::endl;
    bool r2 = (ucb1.valid() && ucb1.name() == "physicalConstants" ? true : false);
    std::string ar2 = bool_to_str(ucb1.valid()) + ", " + ucb1.name();
    std::string er2 = "true, physicalConstants";
    printResult(r2, "UnitTestConstantGroup", "Constructor (no constants)", 
                    ar2, er2, out);
    out << std::endl;

    testConstantGroup(ucb2, "Constructor",  out);
    testConstantGroup(ucb3, "Copy Constructor", out);
    testConstantGroup(ucb4, "Assignment Operator", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestConstantGroup", diff, out);
}

/*
 * @brief Test UnitConstantBase.
 * 
 * @param[in] ucb   - ConstantGroup to test.
 * @param[in] label - identifying label for output.
 * @param[in] out   - stream to write results to.
 */
void UnitTestConstantGroup::testConstantGroup(ConstantGroup& ucb, 
                                              const std::string& label,  
                                              std::ostream& out)
{
    out << label << std::endl;
    bool r1 = ucb.check();
    std::string ar1 = bool_to_str(r1);
    std::string er1 = "true";
    printResult(r1, "UnitTestConstantGroup", "check", ar1, er1, out);

    std::string er2 = "physicalConstants";
    bool r2 = (ucb.name() == er2 ? true : false);
    std::string ar2 = ucb.name();
    printResult(r2, "UnitTestConstantGroup", "name", ar2, er2, out);

    bool r3 = ucb.valid();
    std::string ar3 = bool_to_str(r3);
    std::string er3 = "true";
    printResult(r3, "UnitTestConstantGroup", "valid", ar3, er3, out);

    std::string er4 = "1.0";
    bool r4 = (ucb.version() == er4 ? true : false);
    std::string ar4 = ucb.version();
    printResult(r4, "UnitTestConstantGroup", "version", ar4, er4, out);

    UBASE unit = ucb.constant("speed-of-light");
    bool r5 = (unit.valid() && unit.name() == "speed-of-light" 
                            && unit.type() == "L/T"
                            && unit.version() == "1.0"
                            && unit.offset().asDouble() == 0 
                            && unit.value().asDouble() == 2.997924580000000E+08
                            && unit.system() == "SI" 
                            && unit.unit() == "m/s" ? true : false);
    std::string ar5 = unit.toString();
    std::string er5 = "type: L/T, system: SI, name: speed-of-light, \
                       value: 2.997924580000000E+08, offset: 0.000000, \
                       unit: m/s, version: 1.0, valid: true";
    printResult(r5, "UnitTestConstantGroup", "constant", ar5, er5, out);

    std::list<std::string> er6 = { "SI" };
    std::list<std::string> ar6 = ucb.systemNames();
    bool r6 = compareList(er6, ar6);
    printResult(r6, "UnitTestConstantGroup", "systemNames", listToString(ar6), 
                     listToString(er6), out);

    std::list<std::string> er7 = { "Planck-constant",   "h",
                                   "speed-of-light",    "c",
                                   "elementary-charge", "e",
                                   "Boltzman-constant", "k",
                                   "Avogadro-constant", "N" };
    std::list<std::string> ar7 = ucb.constantNames();
    bool r7 = compareList(er7, ar7);
    printResult(r7, "UnitTestConstantGroup", "constantNames", listToString(ar7), 
                    listToString(er7), out);

    std::list<std::string> er8 = { "physicalConstants" };
    std::list<std::string> ar8 = ucb.typeNames();
    bool r8 = compareList(er8, ar8);
    printResult(r8, "UnitTestConstantGroup", "typeNames", listToString(ar8), 
                     listToString(er8), out);

    double k  = ucb.value("k");
    double ek = 1.380649000000000E-23;
    bool r9 = (k == ek ? true : false);
    std::string ar9 = std::to_string(k);
    std::string er9 = std::to_string(ek);
    printResult(r9, "UnitTestConstantGroup", "value", ar9, er9, out);

    out << std::endl;
}
// EOF
