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
// File SystemTestSystemUnits.cpp
//
// System test for interface. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "SystemTestSystemUnits.hpp"
#include "SystemUnits.hpp"
#include "SYSTEM_UNITS.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
*/
SystemTestSystemUnits::SystemTestSystemUnits(bool brief, 
                                             const std::string& path) 
                                             : UnitConversionBaseTest(brief, path)
{
    openFile("SystemTestSystemUnits.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
*/
void SystemTestSystemUnits::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("SystemTestSystemUnits", out);

     SystemUnits sysUnits =  SYSTEM_UNITS::Instance();

     bool r0 = sysUnits.valid();
     bool er0 = true;
     printResult(r0, "SystemTestSystemUnits", "valid", bool_to_str(r0),
                     bool_to_str(er0), out);

    std::string ar1 = sysUnits.name();
    std::string er1 = "SystemUnits";
    bool r1 = (ar1 == er1 ? true : false);
    printResult(r1, "SystemTestSystemUnits", "name", ar1, er1, out);

    bool r2 = sysUnits.check();
    bool er2 = true;
    printResult(r2, "SystemTestSystemUnits", "check", bool_to_str(r2),
                    bool_to_str(er2), out);



    std::list<std::string> types = sysUnits.typeNames();
    std::list<std::string> expected = {"Length", 
                                       "Area", 
                                       "Mass", 
                                       "Liquid",
                                       "Dry", 
                                       "Volume"};
    bool r3 = compareList(types, expected);
    printResult(r3, "SystemTestSystemUnits", "typeNames", listToString(types),
                    listToString(expected), out);

    std::list<std::string> sysNames = sysUnits.systemNames();
    std::list<std::string> eSysNames = { "@",            "a.u.",          "UK",
                                        "US",           "UK_US_Apoth",   "Imperial",
                                        "CAN",          "cgs",           "FPS",
                                        "MKpS",         "MTS",           "SI",
                                        "Troy",         "Abyssinian",    "Algerian",
                                        "Annamese",     "Arabic",        "Argentinian",
                                        "Attic",        "Austrian",      "Belearic",
                                        "Belgian",      "Brazilian",     "Burmese",
                                        "Cambodian",    "Ceylonese",     "Chilean",
                                        "Chinese",      "Colombian",     "Costa-Rican",
                                        "Cuban",        "Cypriot",       "Czech",
                                        "Danish",       "Dutch",         "Egyptian",
                                        "Eritrean",     "Estonian",      "Ethiopian",
                                        "Finnish",      "French",        "German",
                                        "Greek",        "Guatemalan",    "Guinean",
                                        "Haitian",      "Hebrew",        "Honduran",
                                        "Hungarian",    "Icelandic",     "Indian",
                                        "Indonesian",   "Irish",         "Italian",
                                        "Japanese",     "Latvian",       "Libyan",
                                        "Maltese",      "Mauritius",     "Mexican",
                                        "Mozambican",   "Moroccan",      "Nicaraguan",
                                        "Norwegian",    "Paraguayan",    "Persian",
                                        "Peruvian",     "Philippine",    "Polish",
                                        "Portuguese",   "Puerto-Rican",  "Roman",
                                        "Romanian",     "Russian",       "Salvadoran",
                                        "Saudi-Arabian","Scottish",      "Somalian",
                                        "Spanish",      "Swedish",       "Swiss",
                                        "Syrian",       "Thai",          "Tunisian",
                                        "Turkish",      "Turkmenian",    "Venezuelan",
                                        "Yugoslavian",  "South-African", "Far-East",
                                        "East-Med",     "Myanmar",       "Welsh",
                                        "Sri-Lankan",   "Malagasy",      "Tanzanian",
                                        "Afghan",       "Korean",        "Omani",
                                        "Pakistani",    "Taiwanese",     "Tamil",
                                        "Nepalese",     "Byzantine",     "Tatar",
                                        "Sumerian" };
        bool r4 = compareList(sysNames, eSysNames);
        printResult(r4, "SystemTestSystemUnits", "systemNames", listToString(sysNames),
                        listToString(eSysNames), out);

    std::list<std::string> sysNamesLength = sysUnits.systemNames("Length");
    std::list<std::string> sysNamesArea   = sysUnits.systemNames("Area");
    std::list<std::string> sysNamesMass   = sysUnits.systemNames("Mass");
    std::list<std::string> sysNamesLiquid = sysUnits.systemNames("Liquid");
    std::list<std::string> sysNamesDry    = sysUnits.systemNames("Dry");
    bool r5a = compareList(sysNamesLength, eSysNames);
    bool r5b = compareList(sysNamesArea, eSysNames);
    bool r5c = compareList(sysNamesMass, eSysNames);
    bool r5d = compareList(sysNamesLiquid, eSysNames);
    bool r5e = compareList(sysNamesDry, eSysNames);
    printResult(r5a, "SystemTestSystemUnits", "systemNames", listToString(sysNamesLength),
                     listToString(eSysNames), out);
    printResult(r5b, "SystemTestSystemUnits", "systemNames", listToString(sysNamesArea),
                     listToString(eSysNames), out);
    printResult(r5c, "SystemTestSystemUnits", "systemNames", listToString(sysNamesMass),
                     listToString(eSysNames), out);
    printResult(r5d, "SystemTestSystemUnits", "systemNames", listToString(sysNamesLiquid),
                     listToString(eSysNames), out);
    printResult(r5e, "SystemTestSystemUnits", "systemNames", listToString(sysNamesDry),
                     listToString(eSysNames), out);

    std::list<std::string> unitName = sysUnits.unitNames("Mass", "UK");
    std::list<std::string> eUnitNames = {"Mass[pound]",
                                         "Mass[pound(UK-Imperial)]"};
    bool r6 = compareList(unitName, eUnitNames);
    printResult(r6, "SystemTestSystemUnits", "unitNames", listToString(unitName),
                    listToString(eUnitNames), out);

    testSystemUnitValue(sysUnits, "Length", "@",             "au",                                1.495978707000000E+011, out);
    testSystemUnitValue(sysUnits, "Area",   "@",             "square-parsec",                     9.521406136918410E+032, out);
    testSystemUnitValue(sysUnits, "Mass",   "@",             "solar-mass",                        1.988470000000000E+030, out);
    testSystemUnitValue(sysUnits, "Liquid", "@",             "cubic-parsec",                      2.937998946096350E+049, out);
    testSystemUnitValue(sysUnits, "Dry",    "@",             "cubic-parsec",                      2.937998946096350E+049, out);
    testSystemUnitValue(sysUnits, "Length", "a.u.",          "bohr-radius",                       5.291772109060850E-011, out);
    testSystemUnitValue(sysUnits, "Area",   "a.u.",          "atomic-cross-section",              8.797355429314450E-021, out);
    testSystemUnitValue(sysUnits, "Mass",   "a.u.",          "electron-mass",                     9.109383701500001E-031, out);
    testSystemUnitValue(sysUnits, "Liquid", "a.u.",          "atomic-volume",                     6.207146679245500E-031, out);
    testSystemUnitValue(sysUnits, "Dry",    "a.u.",          "atomic-volume",                     6.207146679245500E-031, out);
    testSystemUnitValue(sysUnits, "Length", "UK",            "foot",                              3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "UK",            "foot(UK-old)",                      3.047997347632710E-001, out);
    testSystemUnitValue(sysUnits, "Length", "US",            "foot(US-survey)",                   3.048006096012190E-001, out);
    testSystemUnitValue(sysUnits, "Length", "US",            "vara(US-Texas)",                    8.466666666666670E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "US",            "square-foot",                       9.290304000000001E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "US",            "vara(US-Texas)",                    7.168601466640000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "US",            "pound",                             4.535923700000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "UK",            "pound(UK-Imperial)",                4.535923380000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "UK_US_Apoth",   "pound(apothecary)",                 3.732417216000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "UK",            "gallon(UK)",                        4.546092000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "US",            "gallon(US)",                        3.785411784000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "UK",            "gallon(UK-beer)",                   4.621152048000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "French",        "liter(old)",                        1.000002800100000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "UK",            "gallon(UK)",                        4.546092000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "US",            "gallon(US)",                        4.404883770860000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "CAN",           "foot",                              3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "CAN",           "square-foot",                       9.290304000000001E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "CAN",           "pound",                             4.535923380000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "CAN",           "gallon",                            4.546092000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "CAN",           "gallon",                            4.546092000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "cgs",           "centimeter",                        1.000000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "cgs",           "square-centimeter",                 1.000000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Mass",   "cgs",           "gram",                              1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "cgs",           "liter",                             1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "cgs",           "cubic-centimeter",                  1.000000000000000E-006, out);
    testSystemUnitValue(sysUnits, "Length", "FPS",           "foot",                              3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "FPS",           "square-foot",                       9.290304000000001E-002, out);
    testSystemUnitValue(sysUnits, "Mass",    "FPS",          "pound",                             4.535923700000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "FPS",           "gallon",                            3.785411784000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "FPS",           "cubic-foot",                        2.831684659200000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "MKpS",          "meter",                             1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "MKpS",          "square-meter",                      1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "MKpS",          "hyl",                               9.806649999999999E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "MKpS",          "cubic-meter",                       1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "MKpS",          "cubic-meter",                       1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "MTS",           "meter",                             1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "MTS",           "square-meter",                      1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "MTS",           "tonne",                             1.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Liquid", "MTS",           "stere",                             1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "MTS",           "cubic-meter",                       1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "SI",            "meter",                             1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "SI",            "square-meter",                      1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "SI",            "kilogram",                          1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "SI",            "cubic-meter",                       1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "SI",            "cubic-meter",                       1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Troy",          "ounce",                             3.110347680000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Abyssinian",    "pic",                               6.860000000000001E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Abyssinian",    "square-pic",                        4.705960000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Abyssinian",    "rottolo",                           3.110000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Abyssinian",    "madega",                            4.400000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Abyssinian",    "cubic-pic",                         3.228288560000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Algerian",      "pic(dzera-a-torky)",                6.230000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Algerian",      "pic(dzera-a-raby)",                 4.670000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Algerian",      "square-pic(dzera-a-torky)",         3.881290000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Algerian",      "square-pic(dzera-a-raby)",          2.180890000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Algerian",      "ukkia",                             3.413000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Algerian",      "khoul",                             1.666666666666670E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Algerian",      "metalli",                           1.790000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Algerian",      "caffiso",                           3.174700000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Annamese",      "thuoc-moc",                         4.250000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Annamese",      "thuoc-de-ruong",                    4.700000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Annamese",      "thuoc-vai",                         6.440000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Annamese",      "ngu",                               2.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Annamese",      "square-ngu",                        5.522500000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Annamese",      "thon",                              2.400000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Annamese",      "dong",                              3.775000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Annamese",      "hao",                               2.826000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Annamese",      "dau",                               1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Annamese",      "thang(cochinchina)",                2.766000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Annamese",      "than",                              1.600000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Arabic",        "foot",                              3.200000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Arabic",        "feddan",                            5.898240000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Arabic",        "rotl",                              3.400000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Arabic",        "sa",                                4.212500000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Arabic",        "cafiz",                             3.264000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Argentinian",   "vara",                              8.666000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Argentinian",   "square-vara",                       7.509955600000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Argentinian",   "libra",                             4.594000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Argentinian",   "frasco",                            2.375000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Argentinian",   "fanega",                            1.371977000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Attic",         "pous",                              3.085600000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Attic",         "square-pous",                       9.520927360000001E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Attic",         "talent",                            2.592000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Attic",         "cotyle",                            2.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Attic",         "cotyle",                            2.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Attic",         "chenix",                            1.080000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Austrian",      "fuss",                              3.160800000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Austrian",      "ell",                               7.792000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Austrian",      "joch",                              5.754618224640000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Austrian",      "pfund",                             5.600100000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Austrian",      "pfund(apothecary)",                 4.200075000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Austrian",      "mass",                              1.415100000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Austrian",      "metzel",                            6.148900000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Belearic",      "canna",                             1.564000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Belearic",      "square-canna",                      2.446096000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Belearic",      "rottolo",                           4.080000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Belearic",      "quartera",                          7.197000000000001E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Belearic",      "quartin",                           2.714000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Belgian",       "perche",                            6.497000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Belgian",       "arpent",                            4.221100900000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Belgian",       "livre",                             4.895000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Belgian",       "pot",                               5.000000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Belgian",       "pot",                               1.500000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Brazilian",     "pe",                                3.333333333333330E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Brazilian",     "salamis(nominal)",                  4.537500000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Brazilian",     "salamis(min)",                      3.025000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Brazilian",     "salamis(max)",                      6.050000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Brazilian",     "tarefa(nominal)",                   3.500000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Brazilian",     "tarefa(min)",                       3.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Brazilian",     "tarefa(max)",                       4.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Brazilian",     "libra",                             4.590500000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Brazilian",     "alquiera",                          5.324000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Brazilian",     "alquiera(Bahia)",                   3.524000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Brazilian",     "alquiera(common)",                  3.626000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Brazilian",     "cubic-pe",                          3.703703703703700E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Brazilian",     "alquiera(salt)",                    4.076000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Burmese",       "sandong",                           5.588000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Burmese",       "square-sandong",                    3.122574400000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Burmese",       "catty",                             5.440000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Burmese",       "byee",                              5.050000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Burmese",       "cubic-sandong",                     1.744894574720000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Cambodian",     "muoi",                              1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Cambodian",     "square-muoi",                       1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Cambodian",     "neal",                              6.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Cambodian",     "sesep",                             4.000000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Cambodian",     "cubic-muoi",                        1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Ceylonese",     "covid(Ceylon)",                     4.640000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Ceylonese",     "covid(Madras)",                     4.720000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Ceylonese",     "square-covid(Ceylon)",              2.152960000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Ceylonese",     "square-covid(Madras)",              2.227840000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Ceylonese",     "seer",                              2.834950000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Ceylonese",     "cubic-covid(Ceylon)",               9.989734400000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Ceylonese",     "cubic-covid(Madras)",               1.051540480000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Ceylonese",     "chundroon",                         2.649000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Length", "Chilean",       "bara",                              8.360000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Chilean",       "square-bara",                       6.988960000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Chilean",       "libbra",                            4.600930000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Chilean",       "almude",                            8.083000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Chilean",       "cubic-bara",                        5.842770560000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Chinese",       "tchi",                              3.200000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Chinese",       "chek",                              3.714750000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Chinese",       "meou",                              6.144000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Area",   "Chinese",       "fang-chi",                          1.024000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Chinese",       "mau5",                              7.614000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Chinese",       "jin",                               5.968160000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Chinese",       "cheng",                             1.035468800000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Chinese",       "cyut3",                             1.031000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Chinese",       "cubic-tchi",                        3.276800000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Colombian",     "vara",                              8.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Colombian",     "square-vara",                       6.400000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Colombian",     "libbra",                            5.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Colombian",     "cubic-vara",                        5.120000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Colombian",     "cubic-vara",                        5.120000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Costa-Rican",   "vara",                              8.393000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Costa-Rican",   "manzana",                           7.044244900000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Costa-Rican",   "fanega",                            9.200000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Costa-Rican",   "botella(nominal)",                  6.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Costa-Rican",   "botella(min)",                      6.300000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Costa-Rican",   "botella(max)",                      6.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Costa-Rican",   "cubic-vara",                        5.912234744570000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Cuban",         "vara",                              8.479536000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Cuban",         "cabaliera",                         1.342020000000000E+005, out);
    testSystemUnitValue(sysUnits, "Mass",   "Cuban",         "libra",                             4.608951746418000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Cuban",         "bocoy",                             1.362700000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Cuban",         "fanega",                            5.634727319684110E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Cypriot",       "pic",                               6.096000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Cypriot",       "scala",                             1.337803776000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Cypriot",       "oke",                               1.270058636000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Cypriot",       "oke",                               1.278550000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Cypriot",       "cubic-pic",                         2.265347727360000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Czech",         "stopa(Bohemian)",                   2.960000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Czech",         "stopa(Praha)",                      2.965000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Czech",         "stopa(Moravian)",                   2.840000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Czech",         "stopa(Silesian)",                   2.895000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Czech",         "merice",                            2.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Czech",         "quintal",                           5.000000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Czech",         "merice",                            7.060000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Czech",         "cubic-stopa(Bohemian)",             2.593433600000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Czech",         "cubic-stopa(Praha)",                2.606598212500000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Czech",         "cubic-stopa(Moravian)",             2.290630400000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Czech",         "cubic-stopa(Silesian)",             2.426306737500000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Danish",        "fod",                               3.138570000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Danish",        "danskmil",                          7.532500000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Danish",        "square-ruthe",                      1.418489516865600E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "Danish",        "tondelande",                        5.516230000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Danish",        "pund",                              5.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Danish",        "pott",                              9.661520492510560E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Danish",        "korntonde",                         1.391258950921520E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Dutch",         "voeten",                            2.830594000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Dutch",         "morgen",                            8.244346000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Dutch",         "pond(Amsterdam)",                   4.940903200000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Dutch",         "pond(ordinary)",                    4.921677200000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Dutch",         "pond(apothecary)",                  3.691257900000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Dutch",         "mingelen",                          1.200000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Dutch",         "schepel",                           2.726000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Egyptian",      "derah(royal-cubit)",                5.235000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Egyptian",      "diraa",                             5.800000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Egyptian",      "derah(cubit)",                      4.495800000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Egyptian",      "palm(short)",                       7.485714286000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Egyptian",      "pekeis",                            2.740522500000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "Egyptian",      "feddan-masri",                      4.200080000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Egyptian",      "deben",                             1.365000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Egyptian",      "oke",                               1.248000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Egyptian",      "keddah",                            2.062500000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Egyptian",      "khar",                              3.400000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Eritrean",      "cubi",                              3.200000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Eritrean",      "square-cubi",                       1.024000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Eritrean",      "rottolo",                           4.480000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Eritrean",      "messe",                             1.500000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Eritrean",      "cubic-cubi",                        3.276800000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Estonian",      "arshine",                           3.071120000000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "Estonian",      "lofstelle",                         1.855000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Estonian",      "tonnland",                          5.462700000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Estonian",      "pfund",                             4.600000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Estonian",      "hulmit",                            1.148000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Estonian",      "kulimet",                           1.150161280000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Estonian",      "cubic-elle",                        9.619307168929790E+002, out);
    testSystemUnitValue(sysUnits, "Length", "Ethiopian",     "kend",                              4.900000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Ethiopian",     "square-kend",                       2.401000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Ethiopian",     "farasula(ivory)",                   1.347840000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Ethiopian",     "farasula(coffee)",                  1.684800000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Ethiopian",     "farasula(rubber)",                  1.797120000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Ethiopian",     "kuba",                              1.016000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Ethiopian",     "madega",                            4.400000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Length", "Finnish",       "jalka",                             2.969000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Finnish",       "kannunala",                         8.814961000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Finnish",       "naula",                             4.250797024000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Finnish",       "tunna",                             1.634900000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Finnish",       "tuoppi",                            1.308580960450000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Finnish",       "tuoppi",                            1.327400000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "toise",                             1.949036500200000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "pied(metric)",                      3.333333333333330E-001, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "pied(de-Paris/du-Roi)",             3.248394167000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "bourgeois",                         3.175000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "canne(Provence)",                   1.968500000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "point-didot",                       3.759715471075000E-004, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "pied(commum)",                      2.236067977500000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "pied(d'ordonance)",                 3.248400000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "French",        "toise(du-Chatelet)",                1.949090000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "pied-carre",                        1.055206466419960E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "journal(Nantes)",                   2.671000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "ares",                              1.000000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "exots(Agen)",                       1.687500000000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "dextres(Montpellier)",              1.920000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "corterade(Montpellier)",            2.877000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "journal(Bretagne)",                 4.863000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "becheree(Lyonnais)",                1.367000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "French",        "journal(Lyonnais)",                 4.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "French",        "livre(de-Paris)",                   4.895058500000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "French",        "livre(Charlemange)",                3.671280000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "French",        "livre(metric)",                     1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "French",        "pinte",                             9.521462584750000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "French",        "chopine(Provence-wine)",            2.299250000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "French",        "setier",                            1.516800000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "French",        "picotins",                          3.125000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "German",        "fuss",                              3.138570000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "German",        "klafter",                           1.440020334575000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "German",        "pfund",                             4.677110000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "German",        "zollpfund",                         5.144821000000001E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "German",        "quart",                             1.145069095408660E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "German",        "metzen",                            3.705960000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "German",        "metze",                             3.435890000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Greek",         "piki(short)",                       6.480000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Greek",         "piki(long)",                        6.690000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Greek",         "piki(mansonary)",                   7.500000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Greek",         "amma",                              2.100000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "Greek",         "stremma",                           1.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Greek",         "oka",                               1.280000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Greek",         "oka(average)",                      1.336500000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Greek",         "baril",                             7.423600000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Greek",         "sexte",                             5.400000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Length", "Guatemalan",    "vara",                              8.359000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Guatemalan",    "manzana",                           6.987288100000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Guatemalan",    "fanega",                            9.200000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Guatemalan",    "botella(nominal)",                  6.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Guatemalan",    "botella(min)",                      6.300000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Guatemalan",    "botella(max)",                      6.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Guatemalan",    "cubic-vera",                        5.840674122790001E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Guinean",       "pic",                               5.780000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Guinean",       "square-pic",                        3.340840000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Guinean",       "benda",                             6.419999999999999E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Guinean",       "cubic-pic",                         1.931005520000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Guinean",       "cubic-pic",                         1.931005520000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Haitian",       "toise",                             1.948800000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Haitian",       "carreau",                           1.292300000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Haitian",       "gwo-mamit",                         1.700000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Haitian",       "baril",                             1.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Haitian",       "cubic-toise",                       7.401194422272000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Hebrew",        "cubit",                             5.550000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Hebrew",        "cubit(acared)",                     6.400000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Hebrew",        "geris",                             3.141592653589790E-004, out);
    testSystemUnitValue(sysUnits, "Mass",   "Hebrew",        "mina(sacred)",                      8.500000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Hebrew",        "mina(Talmudic)",                    3.542000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Hebrew",        "bath(old)",                         2.937600000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Hebrew",        "bath(new)",                         2.142000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Hebrew",        "ephah(old)",                        2.937600000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Hebrew",        "ephah(new)",                        2.142000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Honduran",      "vara",                              8.128000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Honduran",      "manzana",                           6.606438400000001E+004, out);
    testSystemUnitValue(sysUnits, "Mass",   "Honduran",      "fanega",                            9.200000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Honduran",      "botella(nominal)",                  6.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Honduran",      "botella(min)",                      6.300000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Honduran",      "botella(max)",                      6.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Honduran",      "cubic-vara",                        5.369713131520000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Hungarian",     "faust",                             1.053600000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Hungarian",     "square-meile",                      6.978262126496050E+007, out);
    testSystemUnitValue(sysUnits, "Mass",   "Hungarian",     "oka",                               1.329479142678000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Hungarian",     "eimer",                             5.430000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Hungarian",     "cubic-faust",                       1.169572870656000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Icelandic",     "fet",                               3.138570000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Icelandic",     "ferfaomur",                         3.546223792164000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Icelandic",     "pund",                              5.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Icelandic",     "cubic-fet",                         3.091686557603380E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Icelandic",     "pottar",                            9.661520492510560E-004, out);
    testSystemUnitValue(sysUnits, "Length", "Indian",        "hasta",                             4.570000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Indian",        "guz(Bombay)",                       6.858000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Indian",        "guz(Calcutta)",                     9.150000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Indian",        "cawnie",                            5.400000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Area",   "Indian",        "square-guz(Bombay)",                4.703216400000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Indian",        "square-guz(Calcutta)",              8.372250000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Indian",        "ground",                            2.030000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "Indian",        "kani",                              3.075000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Area",   "Indian",        "chahar",                            2.962000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Indian",        "pala",                              4.700000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Indian",        "seer",                              9.330400000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Indian",        "drona",                             1.320000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Indian",        "parah",                             1.101000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Indian",        "drona",                             1.320000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Indian",        "seer",                              1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Indonesian",    "depa",                              1.700000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Indonesian",    "bahoe",                             7.096500000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Indonesian",    "picul",                             6.176130250000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Indonesian",    "thail(precious-metal)",             5.409000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Indonesian",    "thail(opium)",                      3.860100000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Indonesian",    "kan",                               1.575100000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Indonesian",    "cubic-depa",                        4.913000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Irish",         "foot",                              3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Irish",         "troighid",                          2.500000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Irish",         "achar",                             4.046856422400000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Irish",         "penginn",                           4.000000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Irish",         "gallon",                            3.565825126400000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Irish",         "meisrin",                           6.600000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Irish",         "cubic-foot",                        2.831684659200000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Irish",         "cubic-troighid",                    1.562500000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Italian",       "piedi-liprando",                    5.137699999999999E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Italian",       "giornata",                          3.800000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Italian",       "libbra",                            3.070000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Italian",       "barile(Florence-oil)",              3.343000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Italian",       "barile(Florence-wine)",             4.560000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Italian",       "cubic-piedi-liprando",              1.356145303196330E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Japanese",      "shaku",                             3.030303030303030E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Japanese",      "tsubo",                             3.305785123966940E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Japanese",      "kwan",                              3.750000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Japanese",      "tael",                              3.751000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Japanese",      "sho",                               1.803906836964690E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Japanese",      "cubic-shaku",                       2.782647410746580E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Latvian",       "elle",                              5.370000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Latvian",       "kapp",                              1.486400000000000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Latvian",       "pfund",                             4.190000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Latvian",       "stoof",                             1.275200000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Latvian",       "faden",                             4.077000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "Latvian",       "kulmet",                            1.091062080000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Libyan",        "pic",                               6.800000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",    "Libyan",       "square-pic",                        4.624000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",    "Libyan",       "rottolo",                           5.128000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Libyan",        "barile",                            6.249750000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Libyan",        "orba",                              7.692000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Maltese",       "canna",                             2.088000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Maltese",       "qasba-kwadra",                      4.359744000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Maltese",       "rottolo",                           7.937900000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Maltese",       "salma",                             2.909440000000000E+002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Maltese",       "baril",                             4.316200000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Maltese",       "caffiso",                           2.045700000000000E+001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Maltese",       "tomna",                             1.818436800000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Mauritius",     "cash",                              2.271100000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Mexican",       "vara",                              8.380000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Mexican",       "fanega",                            3.566275929600000E+004, out);
    testSystemUnitValue(sysUnits, "Mass",   "Mexican",       "libbra",                            4.602463400000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Mexican",       "cuartillo(wine)",                   4.562640000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Mexican",       "cuartillo(oil)",                    5.061620000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Mexican",       "cuartillo",                         1.891800000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Mozambican",    "aldan",                             1.600000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Mozambican",    "square-aldan",                      2.560000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Mozambican",    "bahar",                             1.090000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Mozambican",    "cubic-aldan",                       4.096000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "Mozambican",    "cubic-aldan",                       4.096000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Moroccan",      "pic",                               6.100000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Moroccan",      "square-pic",                        3.721000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Moroccan",      "rotal",                             5.075000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Moroccan",      "mud",                               1.400000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Moroccan",      "cubic-pic",                         2.269810000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Nicaraguan",    "vara",                              8.128000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Nicaraguan",    "manzana",                           6.988921041000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Nicaraguan",    "fanega",                            9.200000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Nicaraguan",    "botella(nominal)",                  6.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Nicaraguan",    "botella(min)",                      6.300000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Nicaraguan",    "botella(max)",                      6.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Nicaraguan",    "cubic-vara",                        5.369713131520000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Norwegian",     "fod",                               3.137000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Norwegian",     "kvadrat-rode",                      9.840769000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Norwegian",     "skaalpund",                         4.981000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Norwegian",     "pot",                               9.651000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Norwegian",     "korntonde",                         1.389744000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Paraguayan",    "vara",                              8.660000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Paraguayan",    "vara(old)",                         8.385600000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Paraguayan",    "lifio",                             7.499560000000000E+001, out);
    testSystemUnitValue(sysUnits, "Area",   "Paraguayan",    "lifio(old)",                        4.883605057152000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Paraguayan",    "libbra",                            4.590000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Paraguayan",    "libbra(old)",                       4.600800000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Paraguayan",    "fanega",                            2.880000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Paraguayan",    "cubic-vara",                        6.494618960000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Persian",       "zereth",                            3.200000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Persian",       "farsakh",                           5.486400000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Persian",       "gar",                               1.474560000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Persian",       "talent",                            3.260000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Persian",       "rottel",                            4.600000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Persian",       "sextario",                          3.300000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Persian",       "chenica",                           1.320000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Persian",       "amphora",                           3.260000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Peruvian",      "vara",                              8.359799999999999E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Peruvian",      "pie",                               2.786600000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Peruvian",      "fanegada",                          3.144881521800000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Peruvian",      "topo",                              2.705995833868800E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Peruvian",      "libbra",                            4.600900000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Peruvian",      "cubic-vara",                        5.842351232431920E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Peruvian",      "cubic-vara",                        5.842351232431920E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Philippine",    "talampakan",                        3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Philippine",    "balita",                            2.795000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Philippine",    "catty",                             6.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Philippine",    "kaban",                             9.990000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Philippine",    "cubic-talampakan",                  2.831684659200000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Polish",        "stopa(new)",                        2.880000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Polish",        "stopa(Warsaw)",                     2.978000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Polish",        "stopa(Cracow)",                     2.356400000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Polish",        "square-stopa(new)",                 8.294400000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Polish",        "square-stopa(Warsaw)",              8.868484000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Polish",        "square-stopa(Cracow)",              5.552620960000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Polish",        "funt",                              4.055040000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Polish",        "kwarta",                            1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Polish",        "cubic-stopa",                       2.388787200000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Portuguese",    "pe",                                3.285000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Portuguese",    "square-vera",                       1.199025000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Portuguese",    "libra",                             4.590000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Portuguese",    "almude",                            1.650000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Portuguese",    "fanga",                             5.400000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Puerto-Rican",  "cuerda",                            3.930395625000000E+003, out);
    testSystemUnitValue(sysUnits, "Length", "Roman",         "pes(common)",                       2.944000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Roman",         "pes(1st-legal)",                    2.962000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Roman",         "pes(2nd-legal)",                    2.967000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Roman",         "pes(Druisian)",                     3.196000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Roman",         "quadratus(common)",                 8.667136000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Roman",         "quadratus(1st-legal)",              8.773444000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Roman",         "quadratus(2nd-legal)",              8.803089000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Roman",         "quadratus(Druisian)",               1.021441600000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Roman",         "uncia",                             2.725000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Roman",         "sextarius",                         5.492800000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Roman",         "modius",                            8.788480000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Romanian",      "halibiu",                           7.010000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Romanian",      "palma",                             2.500000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Romanian",      "feredela",                          1.250000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Romanian",      "cantar",                            5.600000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Romanian",      "font",                              5.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Romanian",      "viacka",                            1.415000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Romanian",      "litra",                             2.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Romanian",      "dimerla",                           2.460000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Russian",       "foute",                             3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Russian",       "funt",                              4.095171792456690E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Russian",       "doli",                              4.443494030000000E-005, out);
    testSystemUnitValue(sysUnits, "Liquid", "Russian",       "vedro",                             1.229941000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Russian",       "garnetz",                           3.279842666666670E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Salvadoran",    "vara",                              8.128000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Salvadoran",    "square-vara",                       6.606438400000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Salvadoran",    "fanega",                            9.200000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Salvadoran",    "botella(nominal)",                  6.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Salvadoran",    "botella(min)",                      6.300000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Salvadoran",    "botella(max)",                      6.700000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Salvadoran",    "cubic-vara",                        5.369713131520000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Saudi-Arabian", "farsakh",                           4.830000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Saudi-Arabian", "square-covid",                      2.323240000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Saudi-Arabian", "maund",                             1.350000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Saudi-Arabian", "nusfiah",                           9.500000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Saudi-Arabian", "teman",                             8.500000000000001E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Scottish",      "foot(traditional)",                 3.064460845920000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Scottish",      "foot",                              3.064500000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Scottish",      "square-foot",                       9.390920276176720E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Scottish",      "pound",                             6.168856232000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Scottish",      "gallon",                            1.355590372684800E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Scottish",      "jug",                               1.694918130000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Scottish",      "lippy(oat-barley-malt)",            3.283066337080000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Scottish",      "lippy(wheat-peas-beans-rice-salt)", 2.250484660312000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Somalian",      "top",                               3.920000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Somalian",      "darat",                             8.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Somalian",      "rottolo",                           4.480000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Somalian",      "chela",                             1.359000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Somalian",      "cubic-top",                         6.023628800000000E+001, out);
    testSystemUnitValue(sysUnits, "Length", "Spanish",       "vara",                              8.359050000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Spanish",       "square-vara",                       6.987371690250000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Spanish",       "libra",                             4.600930000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Spanish",       "arroba(water)",                     1.564316200000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Spanish",       "arroba(wine)",                      1.613300000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Spanish",       "arroba(oil)",                       1.256300000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Spanish",       "fanega",                            5.550100000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Swedish",       "fot",                               2.969000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Swedish",       "kvadratfot",                        8.814961000000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Swedish",       "skalpund",                          4.250797024000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Swedish",       "kanna",                             2.617161920900000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Swedish",       "kanna",                             2.617161920900000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Swiss",         "fuss",                              3.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Swiss",         "douzieme",                          1.880000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Area",   "Swiss",         "arpent",                            3.600000000000000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Swiss",         "livre",                             5.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Swiss",         "livre(apothecary)",                 3.750000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Swiss",         "pot",                               1.500000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Swiss",         "emine",                             1.500000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Syrian",        "pic",                               5.820000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Syrian",        "square-pic",                        3.387240000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Syrian",        "rottolo",                           1.785000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Syrian",        "rotl",                              3.200000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Syrian",        "cubic-pic",                         1.971373680000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Thai",          "wah",                               2.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Thai",          "square-wah",                        4.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Thai",          "tchang",                            1.200000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Thai",          "tanan(nomial)",                     1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "Thai",          "tanan(min)",                        9.000000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Thai",          "tanan(max)",                        1.200000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Thai",          "cubic-wah",                         8.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Tunisian",      "pic(Tunisian)",                     5.625000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Tunisian",      "pic(Endezian)",                     6.730000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Tunisian",      "pic(Arabic)",                       4.880000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Tunisian",      "square-pic",                        3.164062500000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Tunisian",      "uckir",                             3.149500000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Tunisian",      "cafisso",                           4.960000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Tunisian",      "cubic-pic",                         1.779785156250000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Turkish",       "pic",                               7.553972464870000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Turkish",       "square-pic",                        5.706250000001410E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Turkish",       "oka",                               1.283000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Turkish",       "cubic-zira",                        1.000000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Turkish",       "fortin",                            4.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Turkish",       "cubic-pic",                         4.310485537767510E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Turkmenian",    "hasch/altschin",                    7.112000000000001E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Turkmenian",    "square-hasch",                      5.058054400000001E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Turkmenian",    "batman(nomial)",                    1.265000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Turkmenian",    "batman(min)",                       1.250000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Turkmenian",    "batman(max)",                       1.280000000000000E+002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Turkmenian",    "cubic-hasch",                       3.597288289280000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Turkmenian",    "cubic-hasch",                       3.597288289280000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Venezuelan",    "vara",                              8.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Venezuelan",    "square-vara",                       6.400000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Venezuelan",    "libbra",                            5.000000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Venezuelan",    "arroba",                            1.613700000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Venezuelan",    "cubic-vara",                        5.120000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Yugoslavian",   "stopa",                             3.160000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Yugoslavian",   "square-stopa",                      9.985600000000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Yugoslavian",   "oka",                               1.280000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Yugoslavian",   "cubic-stopa",                       3.155449600000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Yugoslavian",   "cubic-stopa",                       3.155449600000000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "South-African", "cape-foot",                         3.148580000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "South-African", "rijnlandse-voet",                   3.139440000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "South-African", "morgen",                            8.565320000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "South-African", "pond",                              4.940903200000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "South-African", "kanne",                             1.329000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Liquid", "South-African", "firkin",                            4.091482800000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "South-African", "schepel",                           2.727500000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "South-African", "gantang",                           9.200000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Far-East",      "catty",                             6.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "East-Med",      "pik",                               7.112000000000001E-001, out);
    testSystemUnitValue(sysUnits, "Length", "East-Med",      "arshin",                            7.112000000000001E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "East-Med",      "square-pik",                        5.058054400000001E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "East-Med",      "square-arshin",                     5.058054400000001E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "East-Med",      "oka",                               1.270058636000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "East-Med",      "cubic-pik",                         3.597288289280000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "East-Med",      "krina",                             2.000000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "East-Med",      "cubic-pik",                         3.597288289280000E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "East-Med",      "cubic-arshin",                      3.597288289280000E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Myanmar",       "taung",                             4.572000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Myanmar",       "square-taung",                      2.090318400000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Myanmar",       "aseittha",                          4.082330000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Myanmar",       "hkwet",                             1.278590000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Myanmar",       "cubic-taung",                       9.556935724800000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Welsh",         "palf",                              3.048000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Welsh",         "erw(Venedotian)",                   1.426990694400000E+003, out);
    testSystemUnitValue(sysUnits, "Area",   "Welsh",         "erw(Dimetian)",                     8.561944166400000E+002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Welsh",         "pwys",                              4.535923380000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Welsh",         "hestawr",                           7.047814033376000E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Welsh",         "cubic-palf",                        2.831684659200000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Sri-Lankan",    "paramaanuwa",                       3.306670000000000E-008, out);
    testSystemUnitValue(sysUnits, "Area",   "Sri-Lankan",    "laaha",                             4.598700000000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Sri-Lankan",    "gunja",                             1.200000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Sri-Lankan",    "seer",                              1.135623535200000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Sri-Lankan",    "seer",                              7.062500000000000E-004, out);
    testSystemUnitValue(sysUnits, "Length", "Malagasy",      "rahf",                              1.180084000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Malagasy",      "square-rahf",                       1.392598247056000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Malagasy",      "nanki",                             6.479891000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Malagasy",      "cubic-rahf",                        1.643382909778830E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "Malagasy",      "bambou",                            2.001579185478780E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Tanzanian",     "ohra",                              5.709920000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Tanzanian",     "square-ohra",                       3.260318640640000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Tanzanian",     "mane",                              9.104052458270000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Tanzanian",     "cubic-ohra",                        1.861615861256320E-001, out);
    testSystemUnitValue(sysUnits, "Dry",    "Tanzanian",     "djezla",                            2.574214075690580E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Afghan",        "gaz-i-shah",                        1.065000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Afghan",        "jareeb",                            2.000000000000000E+003, out);
    testSystemUnitValue(sysUnits, "Mass",   "Afghan",        "nakhud",                            1.900000000000000E-004, out);
    testSystemUnitValue(sysUnits, "Liquid", "Afghan",        "cubic-gaz-i-shah",                  1.207949625000000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "Afghan",        "cubic-gaz-i-shah",                  1.207949625000000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Korean",        "cheok",                             3.030303030303030E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Korean",        "pyeong",                            3.305785123966940E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Korean",        "gwan",                              3.750000000000000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Korean",        "doe",                               1.803906836964690E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Korean",        "cubic-cheok",                       2.782647410746580E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Omani",         "muscat",                            9.939020000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Omani",         "square-muscat",                     9.878411856040000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Omani",         "maund",                             3.968933237500000E+000, out);
    testSystemUnitValue(sysUnits, "Liquid", "Omani",         "ferren",                            3.000090255291360E-002, out);
    testSystemUnitValue(sysUnits, "Dry",    "Omani",         "cubic-muscat",                      9.818173300541870E-001, out);
    testSystemUnitValue(sysUnits, "Length", "Pakistani",     "karam",                             1.676400000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Pakistani",     "square-karam",                      2.810316960000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Pakistani",     "tola",                              1.166375000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Pakistani",     "cubic-karam",                       4.711215351744000E+000, out);
    testSystemUnitValue(sysUnits, "Dry",    "Pakistani",     "cubic-karam",                       4.711215351744000E+000, out);
    testSystemUnitValue(sysUnits, "Length", "Taiwanese",     "chhioh",                            3.030303030303030E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Taiwanese",     "pe",                                3.305785123966940E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Taiwanese",     "nu",                                3.750000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Taiwanese",     "liter",                             1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Taiwanese",     "cubic-chhioh",                      2.782647410746580E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Tamil",         "yaar",                              9.333123317760000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Tamil",         "cent",                              4.046856422400000E+001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Tamil",         "palam",                             4.800000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Tamil",         "padi",                              1.344000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Tamil",         "padi",                              1.344000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Length", "Nepalese",      "angul",                             1.905000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Area",   "Nepalese",      "dam",                               1.987254090000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Nepalese",      "tola",                              1.166000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Nepalese",      "pathi",                             4.545960000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Nepalese",      "cubic-angul",                       6.913292625000000E-006, out);
    testSystemUnitValue(sysUnits, "Length", "Byzantine",     "pous",                              3.085000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Byzantine",     "pous",                              9.517225000000000E-002, out);
    testSystemUnitValue(sysUnits, "Mass",   "Byzantine",     "ogkia",                             2.725000000000000E-002, out);
    testSystemUnitValue(sysUnits, "Liquid", "Byzantine",     "xestes",                            5.492800000000000E-004, out);
    testSystemUnitValue(sysUnits, "Dry",    "Byzantine",     "cubic-pous",                        2.936063912500000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Tatar",         "sajin",                             2.133600000000000E+000, out);
    testSystemUnitValue(sysUnits, "Area",   "Tatar",         "quadrat-sajin",                     4.552248960000000E+000, out);
    testSystemUnitValue(sysUnits, "Mass",   "Tatar",         "qadaq",                             4.095000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Tatar",         "garnets",                           3.279733333333330E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Tatar",         "cubic-qadaq",                       6.866915737500000E-002, out);
    testSystemUnitValue(sysUnits, "Length", "Sumerian",      "kus",                               5.186000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Area",   "Sumerian",      "gin",                               2.689459600000000E-001, out);
    testSystemUnitValue(sysUnits, "Mass",   "Sumerian",      "mana",                              5.040000000000000E-001, out);
    testSystemUnitValue(sysUnits, "Liquid", "Sumerian",      "sila",                              1.000000000000000E-003, out);
    testSystemUnitValue(sysUnits, "Dry",    "Sumerian",      "cubic-kus",                         1.394753748560000E-001, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("SystemTestSystemUnits", diff, out);
}

/*
* @brief Verify system unit value.
* 
* @param[in] su            - system unit containing value.
* @param[in] type          - unit type.
* @param[in] system        - unit system.
* @param[in] name          - unit name.
* @param[in] expectedValue - expected value.
* @param[in] out           - stream to write results to.
*/

void SystemTestSystemUnits::testSystemUnitValue(const SystemUnits& su, 
                                                const std::string& type, 
                                                const std::string& system, 
                                                const std::string& name, 
                                                double expectedValue, 
                                                std::ostream& out)
{
    UBASE ub = su.unit(type, system, name);
    double value = ub.value().asDouble();
    bool result = (value == expectedValue ? true : false);
    printResult(result, "SystemTestSystemUnits - " + type + "[" + system + "]" + " - ", name,
                        std::to_string(value), std::to_string(expectedValue), out);
}
// EOF