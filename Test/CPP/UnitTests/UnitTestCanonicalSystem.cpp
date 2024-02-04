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
// File UnitTestCanonicalSystem.cpp
//
// Unit test for CanonicalSystem class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestCanonicalSystem.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestCanonicalSystem::UnitTestCanonicalSystem(bool brief,
                                                 const std::string& path) 
                                                 : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestCanonicalSystem.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestCanonicalSystem::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestCanonicalSystem", out);

    CanonicalSystem ubs0;
    CanonicalSystem ubs1("force");

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
    std::map<std::string, BaseSystem> map;
    map["US"] = BaseSystem("US", length, area, mass, liquid, dry, "1.0");

    length.clear();
    area.clear();
    mass.clear();
    liquid.clear();
    dry.clear();
    length["nmi"]    = UBASE("UK", "nmi",     1.853184000000000E+03, "m",  "L",  "1.0");
    length["pace"]   = UBASE("UK", "pace",    7.620000000000000E-01, "m",  "L",  "1.0");
    length["palm"]   = UBASE("UK", "palm",    7.620000000000000E-02, "m",  "L",  "1.0");
    length["point"]  = UBASE("UK", "point",   1.763888888888890E-04, "m",  "L",  "1.0");
    length["rope"]   = UBASE("UK", "rope",    6.096000000000000E+00, "m",  "L",  "1.0");
    area["rood"]     = UBASE("UK", "rood",    1.011714105600000E+03, "m2", "L2", "1.0");
    area["shed"]     = UBASE("UK", "shed",    1.000000000000000E-52, "m2", "L2", "1.0");
    area["skein"]    = UBASE("UK", "skein",   1.204023398400000E+04, "m2", "L2", "1.0");
    area["hundred"]  = UBASE("UK", "hundred", 4.856227706880000E+05, "m2", "L2", "1.0");
    mass["slug"]     = UBASE("UK", "slug",    1.459390293720640E+01, "kg", "M",  "1.0");
    mass["stone"]    = UBASE("UK", "stone",   6.350293180000000E+00, "kg", "M",  "1.0");
    mass["truss"]    = UBASE("UK", "truss",   1.632932532000000E+01, "kg", "M",  "1.0");
    mass["tub"]      = UBASE("UK", "tub",     3.810175908000000E+01, "kg", "M",  "1.0");
    liquid["butt"]   = UBASE("UK", "butt",    4.909779360000000E-01, "m3", "L3", "1.0");
    liquid["barrel"] = UBASE("UK", "barrel",  1.663614737280000E-01, "m3", "L3", "1.0");
    liquid["firkin"] = UBASE("UK", "firkin",  4.091482800000000E-02, "m3", "L3", "1.0");
    dry["deal"]      = UBASE("UK", "deal",    2.477724076800000E-01, "m3", "L3", "1.0");
    dry["amber"]     = UBASE("UK", "amber",   1.454749440000000E-01, "m3", "L3", "1.0");
    dry["peck"]      = UBASE("UK", "peck",    9.092184000000000E-03, "m3", "L3", "1.0");
    dry["bag"]       = UBASE("UK", "bag",     1.091062080000000E-01, "m3", "L3", "1.0");
    map["UK"]        = BaseSystem("UK", length, area, mass, liquid, dry, "1.0");
    CanonicalSystem ubs2("Imperial", map);

    CanonicalSystem ubs3(ubs2);
    CanonicalSystem ubs4 = ubs2;

    out << "Default Constructor" << std::endl;
    printResult(!ubs0.valid(), "UnitTestCanonicalSystem", "Default Constructor", 
                               bool_to_str(ubs0.valid()), "false", out);
    out << std::endl;

    out << "Name Constructor" << std::endl;
    printResult(ubs1.valid(), "UnitTestCanonicalSystem", "Name Constructor", 
                              bool_to_str(ubs1.valid()), "true", out);
    out << std::endl;

    testCanonicalSystem(ubs2, "Unit Constructor",  out);
    testCanonicalSystem(ubs3, "Copy Constructor", out);
    testCanonicalSystem(ubs4, "Assignment Operator", out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestCanonicalSystem", diff, out);
}

/*
 * @brief Test CanonicalSystem.
 * 
 * @param[in] ubs   - CanonicalSystem to test.
 * @param[in] label - identifying label for output.
 * @param[in] out   - stream to write results to.
 */
void UnitTestCanonicalSystem::testCanonicalSystem(CanonicalSystem& ubs, 
                                                  const std::string& label, 
                                                  std::ostream& out)
{
    out << label << std::endl;
    std::string ar0 = ubs.fullUnitName("UK", "liquid[firkin]");
    std::string er0 = "firkin";
    bool r0 = (ar0 == er0 ? true : false);
    printResult(r0, "UnitTestCanonicalSystem", "fullUnitName", ar0, er0, out);

    std::string er1 = "true, false, true, true";
    bool r1 = (ubs.validateType("Length", "Length") 
               && !ubs.validateType("Length", "Area") 
               && ubs.validateType("Liquid", "Dry") 
               && ubs.validateType("Dry", "Liquid") ? true : false);
    std::string ar1 = bool_to_str(ubs.validateType("Length", "Length")) + ", "  
                    + bool_to_str(ubs.validateType("Length", "Area"))   + ", " 
                    + bool_to_str(ubs.validateType("Liquid", "Dry"))    + ", " 
                    + bool_to_str(ubs.validateType("Dry", "Liquid"));
    printResult(r1, "UnitTestCanonicalSystem", "validateType", ar1, er1, out);

    TypeGroup us = ubs.typeGroup("Area", "UK");
    std::list<std::string> ar2 = us.unitNames();
    std::list<std::string> er2 = { "rood", "shed", "skein", "hundred" };
    bool r2 = (us.valid() && compareList(ar2, er2) ? true : false);
    printResult(r2, "UnitTestCanonicalSystem", "typeGroup", 
                     bool_to_str(us.valid()) + ", "+ listToString(ar2), 
                     "true, "+ listToString(er2), out);


    std::list<std::string> ar3 = ubs.systemNames("Mass"); 
    std::list<std::string> er3 = { "US","UK" }; 
    bool r3 = compareList(ar3, er3);
    printResult(r3, "UnitTestCanonicalSystem", "systemNames", 
                    bool_to_str(us.valid()) + ", " + listToString(ar3), 
                    listToString(er3), out);


    std::list<std::string> ar4 = ubs.systemNames();  
    std::list<std::string> er4 = {"US","UK"};
    bool r4 = compareList(ar4, er4);
    printResult(r4, "UnitTestCanonicalSystem", "systemNames", listToString(ar4), 
                    listToString(er4), out);


    std::list<std::string> ar5 = ubs.typeNames();  
    std::list<std::string> er5 = {"Length","Area","Mass","Liquid",
                                  "Dry", "Volume"}; 
    bool r5 = compareList(ar5, er5);
    printResult(r5, "UnitTestCanonicalSystem", "typeNames", listToString(ar5), 
                     listToString(er5), out);


    std::list<std::string> ar6 = ubs.unitNames("Dry", "UK");
    std::list<std::string> er6 = { "Dry[deal]","Dry[amber]",
                                   "Dry[peck]","Dry[bag]" };
    bool r6 = compareList(ar6, er6);
    printResult(r6, "UnitTestCanonicalSystem", "unitNames", listToString(ar6), 
                    listToString(er6), out);

    std::list<std::string> ar7 = ubs.unitNames();
    std::list<std::string> er7 = {"Area[hundred]",     "Area[rood]",        "Area[shed]", 
                                  "Area[skein]",       "Dry[amber]",        "Dry[bag]", 
                                  "Dry[deal]",         "Dry[peck]",         "Length[nmi]",
                                  "Length[pace]",      "Length[palm]",      "Length[point]",
                                  "Length[rope]",      "Liquid[barrel]",    "Liquid[butt]",
                                  "Liquid[firkin]",    "Mass[slug]",        "Mass[stone]", 
                                  "Mass[truss]",       "Mass[tub]",         "Area[acre]", 
                                  "Area[square-foot]", "Area[square-inch]", "Area[square-mile]", 
                                  "Area[square-yard]", "Dry[bushel]",       "Dry[cubic-feet]", 
                                  "Dry[cubic-in]",     "Dry[cubic-yard]",   "Length[foot]", 
                                  "Length[furlong]",   "Length[inch]",      "Length[league]", 
                                  "Length[mile]",      "Length[yard]",      "Liquid[cup]", 
                                  "Liquid[gallon]",    "Liquid[quart]",     "Mass[hundredweight]", 
                                  "Mass[ounce]",       "Mass[pound]"};
    bool r7 = compareList(ar7, er7);
    printResult(r7, "UnitTestCanonicalSystem", "unitNames", listToString(ar7), 
                    listToString(er7), out);


    double ar8 = ubs.convertUnit(1.0, "Length","Length","foot","US",
                                      "pace","UK", false);
    double er8 = 0.4;
    bool r8 = (ar8 == er8 ? true : false);
    printResult(r8, "UnitTestCanonicalSystem", "convertUnit", 
                std::to_string(ar8), std::to_string(er8), out);
               
    out << std::endl;
}
// EOF
