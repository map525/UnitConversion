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
// File UnitTestSystemUnits.cpp
//
// Unit test for SystemUnits class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestSystemUnits.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestSystemUnits::UnitTestSystemUnits(bool brief,
                                         const std::string& path) 
                                        : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestSystemUnits.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestSystemUnits::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestSystemUnits", out);

    SystemUnits ubs0;
    SystemUnits ubs1("force");

    std::map<std::string, UBASE> length;
    std::map<std::string, UBASE> area;
    std::map<std::string, UBASE> mass;
    std::map<std::string, UBASE> liquid;
    std::map<std::string, UBASE> dry;

    length["foot"]             = UBASE("UK_US_Avdp", "foot",               3.048000000000000E-01, "m","L",    "1.0");
    length["foot(UK-old)"]     = UBASE("UK_US_Avdp", "foot(UK-old)",       3.047997347632710E-01, "m","L",    "1.0");
    length["foot(US-survey)"]  = UBASE("UK_US_Avdp", "foot(US-survey)",    3.048006096012190E-01, "m","L",    "1.0");
    length["vara(US-Texas)"]   = UBASE("UK_US_Avdp", "vara(US-Texas)",     8.466666666666670E-01, "m","L",    "1.0");
    area["square-foot"]        = UBASE("UK_US_Avdp", "square-foot",        9.290304000000000E-02, "m2","L2",  "1.0");
    area["vara(US-Texas)"]     = UBASE("UK_US_Avdp", "vara(US-Texas)",     7.168601466640000E+02, "m2","L2",  "1.0");
    mass["pound"]              = UBASE("UK_US_Avdp", "pound",              4.535923700000000E-01, "kg","M",   "1.0");
    mass["pound(UK-Imperial)"] = UBASE("UK_US_Avdp", "pound(UK-Imperial)", 4.535923380000000E-01, "kg","M",   "1.0");
    mass["pound(apothecary)"]  = UBASE("UK_US_Avdp", "pound(apothecary)",  3.732417216000000E-01, "kg","M",   "1.0");
    liquid["gallon(UK)"]       = UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3","L3",  "1.0");
    liquid["gallon(US)"]       = UBASE("UK_US_Avdp", "gallon(US)",         3.785411784000000E-03, "m3","L3",  "1.0");
    liquid["gallon(UK-beer)"]  = UBASE("UK_US_Avdp", "gallon(UK-beer)",    4.621152048000000E-03, "m3","L3",  "1.0");
    liquid["liter(old)"]       = UBASE("UK_US_Avdp", "liter(old)",         1.000002800100000E-03, "m3","L3",  "1.0");
    dry["gallon(UK)"]          = UBASE("UK_US_Avdp", "gallon(UK)",         4.546092000000000E-03, "m3","L3",  "1.0");
    dry["gallon(US)"]          = UBASE("UK_US_Avdp", "gallon(US)",         4.404883770860000E-03, "m3","L3",  "1.0");
    std::map<std::string, BaseSystem> map;
    map["UK_US_Avdp"] = BaseSystem("UK_US_Avdp", length, area, mass, liquid, dry, "1.0");

    length.clear();
    area.clear();
    mass.clear();
    liquid.clear();
    dry.clear();

    length["fuss"]            = UBASE("Swiss", "fuss",              3.000000000000000E-01, "m", "L",  "1.0");
    length["douzieme"]        = UBASE("Swiss", "douzieme",          1.880000000000000E-04, "m", "L",  "1.0");
    area["arpent"]            = UBASE("Swiss", "arpent",            3.600000000000000E+01, "m2","L2", "1.0");
    mass["livre"]             = UBASE("Swiss", "livre",             5.000000000000000E-01, "kg","M",  "1.0");
    mass["livre(apothecary)"] = UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg","M",  "1.0");
    liquid["pot"]             = UBASE("Swiss", "pot",               1.500000000000000E-03, "m3","L3", "1.0");
    dry["emine"]              = UBASE("Swiss", "emine",             1.500000000000000E-02, "m3","L3", "1.0");
    map["Swiss"]              = BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0");


    SystemUnits ubs2("SystemUnits", map);

    SystemUnits ubs3(ubs2);
    SystemUnits ubs4 = ubs2;

    out << "Default Constructor" << std::endl;
    printResult(!ubs0.valid(), "UnitTestSystemUnits", "Default Constructor", 
                               bool_to_str(ubs0.valid()), "false", out);
    out << std::endl;

    out << "Name Constructor" << std::endl;
    printResult(ubs1.valid(), "UnitTestSystemUnits", "Name Constructor", 
                              bool_to_str(ubs1.valid()), "true", out);
    out << std::endl;

    testSystemUnits(ubs2, "Unit Constructor",  out);
    testSystemUnits(ubs3, "Copy Constructor", out);
    testSystemUnits(ubs4, "Assignment Operator", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestSystemUnits", diff, out);
}

/*
 * @brief Test CanonicalSystem.
 * 
 * @param[in] ubs   - CanonicalSystem to test.
 * @param[in] label - identifying label for output.
 * @param[in] out   - stream to write results to.
 */
void UnitTestSystemUnits::testSystemUnits(SystemUnits& ubs, 
                                          const std::string& label, 
                                          std::ostream& out)
{
    out << label << std::endl;
    std::string ar0 = ubs.fullUnitName("Swiss", "livre");
    std::string er0 = "livre";
    bool r0 = (ar0 == er0 ? true : false);
    printResult(r0, "UnitTestSystemUnits", "fullUnitName", ar0, er0, out);

    std::string ar1 = ubs.rawUnitName("pound(UK-Imperial)");
    std::string er1 = "pound(UK-Imperial)";
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "UnitTestSystemUnits", "rawUnitName", ar1, er1, out);

    std::list<std::string> ar3 = ubs.systemNames("Swiss"); 
    std::list<std::string> er3 = {"UK_US_Avdp", "Swiss" }; 
    bool r3 = compareList(ar3, er3);
    printResult(r3, "UnitTestSystemUnits", "systemNames", 
                    bool_to_str(ubs.valid()) + ", " + listToString(ar3), 
                    listToString(er3), out);


    std::list<std::string> ar4 = ubs.systemNames();  
    std::list<std::string> er4 = {"UK_US_Avdp","Swiss"};
    bool r4 = compareList(ar4, er4);
    printResult(r4, "UnitTestSystemUnits", "systemNames", listToString(ar4), 
                    listToString(er4), out);


    std::list<std::string> ar5 = ubs.typeNames();  
    std::list<std::string> er5 = {"Length","Area","Mass","Liquid",
                                  "Dry", "Volume"}; 
    bool r5 = compareList(ar5, er5);
    printResult(r5, "UnitTestSystemUnits", "typeNames", listToString(ar5), 
                     listToString(er5), out);


    std::list<std::string> ar6 = ubs.unitNames("Length", "Swiss");
    std::list<std::string> er6 = { "Length[fuss]","Length[douzieme]" };
    bool r6 = compareList(ar6, er6);
    printResult(r6, "UnitTestSystemUnits", "unitNames", listToString(ar6), 
                    listToString(er6), out);

    std::list<std::string> ar7 = ubs.unitNames();
    std::list<std::string> er7 = {"Length[foot]",            "Length[foot(UK-old)]",
                                  "Length[foot(US-survey)]", "Length[vara(US-Texas)]",
                                  "Area[square-foot]",       "Area[vara(US-Texas)]",
                                  "Mass[pound]",             "Mass[pound(UK-Imperial)]", 
                                  "Mass[pound(apothecary)]", "Liquid[gallon(UK)]",
                                  "Liquid[gallon(US)]",      "Liquid[gallon(UK-beer)]",
                                  "Liquid[liter(old)]",      "Dry[gallon(UK)]",
                                  "Dry[gallon(US)]",         "Length[fuss]",
                                  "Length[douzieme]",        "Area[arpent]",
                                  "Mass[livre]",             "Mass[livre(apothecary)]",
                                  "Liquid[pot]",             "Dry[emine]"};
    bool r7 = compareList(ar7, er7);
    printResult(r7, "UnitTestSystemUnits", "unitNames", listToString(ar7), 
                    listToString(er7), out);

    double ar8 = ubs.value("Liquid", "UK_US_Avdp", "gallon(UK)");
    double er8 = 4.546092000000000E-03;
    bool r8 = (ar8 == er8 ? true : false);
    printResult(r8, "UnitTestSystemUnits", "value",  std::to_string(ar8), 
                 std::to_string(er8), out);

    out << std::endl;
}
// EOF
