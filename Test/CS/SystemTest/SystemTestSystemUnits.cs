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
// File SystemTestSystemUnits.cs
//
// System test for interface. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversionTestCS
{
    using System;
    using System.Collections.Generic;
    using UnitConversion;

    ///<summary>
    /// System test for interface.
    ///</summary>
    public class SystemTestSystemUnits : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the 
        ///                              test results are written.</param>
        public SystemTestSystemUnits(bool brief, string path) : base(brief, path)
        {
             openFile("SystemTestSystemUnits.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("SystemTestSystemUnits");

            SystemUnits sysUnits =  SYSTEM_UNITS.Instance();

            bool r0 = sysUnits.valid();
            bool er0 = true;
            printResult(r0, "SystemTestSystemUnits", "valid", bool_to_str(r0),
                            bool_to_str(er0));

            string ar1 = sysUnits.name();
            string er1 = "SystemUnits";
            bool r1 = (ar1 == er1 ? true : false);
            printResult(r1, "SystemTestSystemUnits", "name", ar1, er1);

            bool r2 = sysUnits.check();
            bool er2 = true;
            printResult(r2, "SystemTestSystemUnits", "check", bool_to_str(r2),
                            bool_to_str(er2));



            List<string> types = sysUnits.typeNames();
            List<string> expected = new List<string> {"length", 
                                                       "area", 
                                                       "mass", 
                                                       "liquid",
                                                       "dry", 
                                                       "volume"};
            bool r3 = compareList(types, expected);
            printResult(r3, "SystemTestSystemUnits", "typeNames", listToString(types),
                            listToString(expected));

            List<string> sysNames = sysUnits.systemNames();
            List<string> eSysNames = new List<string>{"@",            "a.u.",          "UK_US_Avdp",
                                                      "CAN",          "cgs",           "FPS",
                                                      "MKpS",         "MTS",           "SI",
                                                      "troy",         "Abyssinian",    "Algerian",
                                                      "Annamese",     "Arabic",        "Argentinian",
                                                      "Attic",        "Austrian",      "Belearic",
                                                      "Belgian",      "Brazilian",     "Burmese",
                                                      "Cambodian",    "Ceylonese",     "Chilean",
                                                      "Chinese",      "Colombian",     "Costa Rican",
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
                                                      "Portuguese",   "Puerto Rican",  "Roman",
                                                      "Romanian",     "Russian",       "Salvadoran",
                                                      "Saudi Arabian","Scottish",      "Somalian",
                                                      "Spanish",      "Swedish",       "Swiss",
                                                      "Syrian",       "Thai",          "Tunisian",
                                                      "Turkish",      "Turkmenian",    "Venezuelan",
                                                      "Yugoslavian",   "South African","Far East",
                                                      "East Med",      "Myanmar",      "Welsh",
                                                      "Sri Lankan"};
            bool r4 = compareList(sysNames, eSysNames);
            printResult(r4, "SystemTestSystemUnits", "systemNames", listToString(sysNames),
                            listToString(eSysNames));

            List<string> sysNamesLength = sysUnits.systemNames("length");
            List<string> sysNamesArea = sysUnits.systemNames("area");
            List<string> sysNamesMass = sysUnits.systemNames("mass");
            List<string> sysNamesLiquid = sysUnits.systemNames("liquid");
            List<string> sysNamesDry = sysUnits.systemNames("dry");
            bool r5a = compareList(sysNamesLength, eSysNames);
            bool r5b = compareList(sysNamesArea, eSysNames);
            bool r5c = compareList(sysNamesMass, eSysNames);
            bool r5d = compareList(sysNamesLiquid, eSysNames);
            bool r5e = compareList(sysNamesDry, eSysNames);
            printResult(r5a, "SystemTestSystemUnits", "systemNames", listToString(sysNamesLength),
                            listToString(eSysNames));
            printResult(r5b, "SystemTestSystemUnits", "systemNames", listToString(sysNamesArea),
                            listToString(eSysNames));
            printResult(r5c, "SystemTestSystemUnits", "systemNames", listToString(sysNamesMass),
                            listToString(eSysNames));
            printResult(r5d, "SystemTestSystemUnits", "systemNames", listToString(sysNamesLiquid),
                            listToString(eSysNames));
            printResult(r5e, "SystemTestSystemUnits", "systemNames", listToString(sysNamesDry),
                            listToString(eSysNames));

            List<string> unitName = sysUnits.unitNames("mass", "UK_US_Avdp");
            List<string> eUnitNames = new List<string> {"mass[pound]",
                                                        "mass[pound(UK-Imperial)]",
                                                        "mass[pound(apothecary)]"};
            bool r6 = compareList(unitName, eUnitNames);
            printResult(r6, "SystemTestSystemUnits", "unitNames", listToString(unitName),
                            listToString(eUnitNames));

            testSystemUnitValue(sysUnits, "length", "@",             "au",                                1.495978707000000E+011);
            testSystemUnitValue(sysUnits, "area",   "@",             "square-parsec",                     9.521406136918410E+032);
            testSystemUnitValue(sysUnits, "mass",   "@",             "solar-mass",                        1.988470000000000E+030);
            testSystemUnitValue(sysUnits, "liquid", "@",             "cubic-parsec",                      2.937998946096350E+049);
            testSystemUnitValue(sysUnits, "dry",    "@",             "cubic-parsec",                      2.937998946096350E+049);
            testSystemUnitValue(sysUnits, "length", "a.u.",          "Bohr-radius",                       5.291772109060850E-011);
            testSystemUnitValue(sysUnits, "area",   "a.u.",          "atomic-cross-section",              8.797355429314450E-021);
            testSystemUnitValue(sysUnits, "mass",   "a.u.",          "electron-mass",                     9.109383701500001E-031);
            testSystemUnitValue(sysUnits, "liquid", "a.u.",          "atomic-volume",                     6.207146679245500E-031);
            testSystemUnitValue(sysUnits, "dry",    "a.u.",          "atomic-volume",                     6.207146679245500E-031);
            testSystemUnitValue(sysUnits, "length", "UK_US_Avdp",    "foot",                              3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "UK_US_Avdp",    "foot(UK-old)",                      3.047997347632710E-001);
            testSystemUnitValue(sysUnits, "length", "UK_US_Avdp",    "foot(US-survey)",                   3.048006096012190E-001);
            testSystemUnitValue(sysUnits, "length", "UK_US_Avdp",    "vara(US-Texas)",                    8.466666666666670E-001);
            testSystemUnitValue(sysUnits, "area",   "UK_US_Avdp",    "square-foot",                       9.290304000000001E-002);
            testSystemUnitValue(sysUnits, "area",   "UK_US_Avdp",    "vara(US-Texas)",                    7.168601466640000E+002);
            testSystemUnitValue(sysUnits, "mass",   "UK_US_Avdp",    "pound",                             4.535923700000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "UK_US_Avdp",    "pound(UK-Imperial)",                4.535923380000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "UK_US_Avdp",    "pound(apothecary)",                 3.732417216000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "UK_US_Avdp",    "gallon(UK)",                        4.546092000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "UK_US_Avdp",    "gallon(US)",                        3.785411784000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "UK_US_Avdp",    "gallon(UK-beer)",                   4.621152048000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "UK_US_Avdp",    "liter(old)",                        1.000002800100000E-003);
            testSystemUnitValue(sysUnits, "dry",    "UK_US_Avdp",    "gallon(UK)",                        4.546092000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "UK_US_Avdp",    "gallon(US)",                        4.404883770860000E-003);
            testSystemUnitValue(sysUnits, "length", "CAN",           "foot",                              3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "CAN",           "square-foot",                       9.290304000000001E-002);
            testSystemUnitValue(sysUnits, "mass",   "CAN",           "pound",                             4.535923380000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "CAN",           "gallon",                            4.546092000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "CAN",           "gallon",                            4.546092000000000E-003);
            testSystemUnitValue(sysUnits, "length", "cgs",           "centimeter",                        1.000000000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "cgs",           "square-centimeter",                 1.000000000000000E-004);
            testSystemUnitValue(sysUnits, "mass",   "cgs",           "gram",                              1.000000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "cgs",           "liter",                             1.000000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "cgs",           "cubic-centimeter",                  1.000000000000000E-006);
            testSystemUnitValue(sysUnits, "length", "FPS",           "foot",                              3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "FPS",           "square-foot",                       9.290304000000001E-002);
            testSystemUnitValue(sysUnits, "mass",    "FPS",          "pound",                             4.535923700000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "FPS",           "gallon",                            3.785411784000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "FPS",           "cubic-foot",                        2.831684659200000E-002);
            testSystemUnitValue(sysUnits, "length", "MKpS",          "meter",                             1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "MKpS",          "square-meter",                      1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "MKpS",          "hyl",                               9.806649999999999E+000);
            testSystemUnitValue(sysUnits, "liquid", "MKpS",          "cubic-meter",                       1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "dry",    "MKpS",          "cubic-meter",                       1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "MTS",           "meter",                             1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "MTS",           "square-meter",                      1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "MTS",           "tonne",                             1.000000000000000E+003);
            testSystemUnitValue(sysUnits, "liquid", "MTS",           "stere",                             1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "dry",    "MTS",           "cubic-meter",                       1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "SI",            "meter",                             1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "SI",            "square-meter",                      1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "SI",            "kilogram",                          1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "SI",            "cubic-meter",                       1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "dry",    "SI",            "cubic-meter",                       1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "troy",          "ounce",                             3.110347680000000E-002);
            testSystemUnitValue(sysUnits, "length", "Abyssinian",    "pic",                               6.860000000000001E-001);
            testSystemUnitValue(sysUnits, "area",   "Abyssinian",    "square-pic",                        4.705960000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Abyssinian",    "rottolo",                           3.110000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Abyssinian",    "madega",                            4.400000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Abyssinian",    "cubic-pic",                         3.228288560000000E-001);
            testSystemUnitValue(sysUnits, "length", "Algerian",      "pic(dzera-a-torky)",                6.230000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Algerian",      "pic(dzera-a-raby)",                 4.670000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Algerian",      "square-pic(dzera-a-torky)",         3.881290000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Algerian",      "square-pic(dzera-a-raby)",          2.180890000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Algerian",      "ukkia",                             3.413000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Algerian",      "khoul",                             1.666666666666670E-002);
            testSystemUnitValue(sysUnits, "liquid", "Algerian",      "metalli",                           1.790000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Algerian",      "caffiso",                           3.174700000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Annamese",      "thuoc-moc",                         4.250000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Annamese",      "thuoc-de-ruong",                    4.700000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Annamese",      "thuoc-vai",                         6.440000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Annamese",      "ngu",                               2.000000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Annamese",      "square-ngu",                        5.522500000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Annamese",      "thon",                              2.400000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Annamese",      "dong",                              3.775000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Annamese",      "hao",                               2.826000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Annamese",      "dau",                               1.000000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Annamese",      "thang(cochinchina)",                2.766000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Annamese",      "than",                              1.600000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "Arabic",        "foot",                              3.200000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Arabic",        "feddan",                            5.898240000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Arabic",        "rotl",                              3.400000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Arabic",        "sa",                                4.212500000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Arabic",        "cafiz",                             3.264000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Argentinian",   "vara",                              8.666000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Argentinian",   "square-vara",                       7.509955600000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Argentinian",   "libra",                             4.594000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Argentinian",   "frasco",                            2.375000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Argentinian",   "fanega",                            1.371977000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Attic",         "pous",                              3.085600000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Attic",         "square-pous",                       9.520927360000001E-002);
            testSystemUnitValue(sysUnits, "mass",   "Attic",         "talent",                            2.592000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Attic",         "cotyle",                            2.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Attic",         "cotyle",                            2.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Attic",         "chenix",                            1.080000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Austrian",      "fuss",                              3.160800000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Austrian",      "ell",                               7.792000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Austrian",      "joch",                              5.754618224640000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Austrian",      "pfund",                             5.600100000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Austrian",      "pfund(apothecary)",                 4.200075000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Austrian",      "mass",                              1.415100000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Austrian",      "metzel",                            6.148900000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Belearic",      "canna",                             1.564000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Belearic",      "square-canna",                      2.446096000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Belearic",      "rottolo",                           4.080000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Belearic",      "quartera",                          7.197000000000001E-002);
            testSystemUnitValue(sysUnits, "dry",    "Belearic",      "quartin",                           2.714000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Belgian",       "perche",                            6.497000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Belgian",       "arpent",                            4.221100900000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Belgian",       "livre",                             4.895000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Belgian",       "pot",                               5.000000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Belgian",       "pot",                               1.500000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Brazilian",     "pe",                                3.333333333333330E-001);
            testSystemUnitValue(sysUnits, "area",   "Brazilian",     "salamis(nominal)",                  4.537500000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Brazilian",     "salamis(min)",                      3.025000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Brazilian",     "salamis(max)",                      6.050000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Brazilian",     "tarefa(nominal)",                   3.500000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Brazilian",     "tarefa(min)",                       3.000000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Brazilian",     "tarefa(max)",                       4.000000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Brazilian",     "libra",                             4.590500000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Brazilian",     "alquiera",                          5.324000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Brazilian",     "alquiera(Bahia)",                   3.524000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Brazilian",     "alquiera(common)",                  3.626000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Brazilian",     "cubic-pe",                          3.703703703703700E-002);
            testSystemUnitValue(sysUnits, "dry",    "Brazilian",     "alquiera(salt)",                    4.076000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Burmese",       "sandong",                           5.588000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Burmese",       "square-sandong",                    3.122574400000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Burmese",       "catty",                             5.440000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Burmese",       "byee",                              5.050000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Burmese",       "cubic-sandong",                     1.744894574720000E-001);
            testSystemUnitValue(sysUnits, "length", "Cambodian",     "muoi",                              1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Cambodian",     "square-muoi",                       1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Cambodian",     "neal",                              6.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Cambodian",     "sesep",                             4.000000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Cambodian",     "cubic-muoi",                        1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "Ceylonese",     "covid(Ceylon)",                     4.640000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Ceylonese",     "covid(Madras)",                     4.720000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Ceylonese",     "square-covid(Ceylon)",              2.152960000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Ceylonese",     "square-covid(Madras)",              2.227840000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Ceylonese",     "seer",                              2.834950000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Ceylonese",     "cubic-covid(Ceylon)",               9.989734400000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Ceylonese",     "cubic-covid(Madras)",               1.051540480000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Ceylonese",     "chundroon",                         2.649000000000000E-004);
            testSystemUnitValue(sysUnits, "length", "Chilean",       "bara",                              8.360000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Chilean",       "square-bara",                       6.988960000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Chilean",       "libbra",                            4.600930000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Chilean",       "almude",                            8.083000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Chilean",       "cubic-bara",                        5.842770560000000E-001);
            testSystemUnitValue(sysUnits, "length", "Chinese",       "tchi",                              3.200000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Chinese",       "chek",                              3.714750000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Chinese",       "meou",                              6.144000000000000E+002);
            testSystemUnitValue(sysUnits, "area",   "Chinese",       "fang-chi",                          1.024000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Chinese",       "mau5",                              7.614000000000000E+002);
            testSystemUnitValue(sysUnits, "mass",   "Chinese",       "jin",                               5.968160000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Chinese",       "cheng",                             1.035468800000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Chinese",       "cyut3",                             1.031000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Chinese",       "cubic-tchi",                        3.276800000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Colombian",     "vara",                              8.000000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Colombian",     "square-vara",                       6.400000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Colombian",     "libbra",                            5.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Colombian",     "cubic-vara",                        5.120000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Colombian",     "cubic-vara",                        5.120000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Costa Rican",   "vara",                              8.393000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Costa Rican",   "manzana",                           7.044244900000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Costa Rican",   "fanega",                            9.200000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Costa Rican",   "botella(nominal)",                  6.500000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Costa Rican",   "botella(min)",                      6.300000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Costa Rican",   "botella(max)",                      6.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Costa Rican",   "cubic-vara",                        5.912234744570000E-001);
            testSystemUnitValue(sysUnits, "length", "Cuban",         "vara",                              8.479536000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Cuban",         "cabaliera",                         1.342020000000000E+005);
            testSystemUnitValue(sysUnits, "mass",   "Cuban",         "libra",                             4.608951746418000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Cuban",         "bocoy",                             1.362700000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Cuban",         "fanega",                            5.634727319684110E-002);
            testSystemUnitValue(sysUnits, "length", "Cypriot",       "pic",                               6.096000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Cypriot",       "scala",                             1.337803776000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Cypriot",       "oke",                               1.270058636000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Cypriot",       "oke",                               1.278550000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Cypriot",       "cubic-pic",                         2.265347727360000E-001);
            testSystemUnitValue(sysUnits, "length", "Czech",         "stopa(Bohemian)",                   2.960000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Czech",         "stopa(Praha)",                      2.965000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Czech",         "stopa(Moravian)",                   2.840000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Czech",         "stopa(Silesian)",                   2.895000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Czech",         "merice",                            2.000000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Czech",         "quintal",                           5.000000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Czech",         "merice",                            7.060000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Czech",         "cubic-stopa(Bohemian)",             2.593433600000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Czech",         "cubic-stopa(Praha)",                2.606598212500000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Czech",         "cubic-stopa(Moravian)",             2.290630400000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Czech",         "cubic-stopa(Silesian)",             2.426306737500000E-002);
            testSystemUnitValue(sysUnits, "length", "Danish",        "fod",                               3.138570000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Danish",        "danskmil",                          7.532500000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Danish",        "square-ruthe",                      1.418489516865600E+001);
            testSystemUnitValue(sysUnits, "area",   "Danish",        "tondelande",                        5.516230000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Danish",        "pund",                              5.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Danish",        "pott",                              9.661520492510560E-004);
            testSystemUnitValue(sysUnits, "dry",    "Danish",        "korntonde",                         1.391258950921520E-001);
            testSystemUnitValue(sysUnits, "length", "Dutch",         "voeten",                            2.830594000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Dutch",         "morgen",                            8.244346000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Dutch",         "pond(Amsterdam)",                   4.940903200000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Dutch",         "pond(ordinary)",                    4.921677200000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Dutch",         "pond(apothecary)",                  3.691257900000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Dutch",         "mingelen",                          1.200000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Dutch",         "schepel",                           2.726000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Egyptian",      "derah(royal-cubit)",                5.235000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Egyptian",      "diraa",                             5.800000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Egyptian",      "derah(cubit)",                      4.495800000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Egyptian",      "palm(short)",                       7.485714286000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Egyptian",      "pekeis",                            2.740522500000000E+001);
            testSystemUnitValue(sysUnits, "area",   "Egyptian",      "feddan-masri",                      4.200080000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Egyptian",      "deben",                             1.365000000000000E-002);
            testSystemUnitValue(sysUnits, "mass",   "Egyptian",      "oke",                               1.248000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Egyptian",      "keddah",                            2.062500000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Egyptian",      "khar",                              3.400000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Eritrean",      "cubi",                              3.200000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Eritrean",      "square-cubi",                       1.024000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Eritrean",      "rottolo",                           4.480000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Eritrean",      "messe",                             1.500000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Eritrean",      "cubic-cubi",                        3.276800000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Estonian",      "arshine",                           3.071120000000000E+001);
            testSystemUnitValue(sysUnits, "area",   "Estonian",      "lofstelle",                         1.855000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Estonian",      "tonnland",                          5.462700000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Estonian",      "pfund",                             4.600000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Estonian",      "hulmit",                            1.148000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Estonian",      "kulimet",                           1.150161280000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Estonian",      "cubic-elle",                        9.619307168929790E+002);
            testSystemUnitValue(sysUnits, "length", "Ethiopian",     "kend",                              4.900000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Ethiopian",     "square-kend",                       2.401000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Ethiopian",     "farasula(ivory)",                   1.347840000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Ethiopian",     "farasula(coffee)",                  1.684800000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Ethiopian",     "farasula(rubber)",                  1.797120000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Ethiopian",     "kuba",                              1.016000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Ethiopian",     "madega",                            4.400000000000000E-004);
            testSystemUnitValue(sysUnits, "length", "Finnish",       "jalka",                             2.969000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Finnish",       "kannunala",                         8.814961000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Finnish",       "naula",                             4.250797024000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Finnish",       "tunna",                             1.634900000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Finnish",       "tuoppi",                            1.308580960450000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Finnish",       "tuoppi",                            1.327400000000000E-003);
            testSystemUnitValue(sysUnits, "length", "French",        "toise",                             1.949036500200000E+000);
            testSystemUnitValue(sysUnits, "length", "French",        "pied(metric)",                      3.333333333333330E-001);
            testSystemUnitValue(sysUnits, "length", "French",        "pied(de-Paris/du-Roi)",             3.248394167000000E-001);
            testSystemUnitValue(sysUnits, "length", "French",        "bourgeois",                         3.175000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "French",        "canne(Provence)",                   1.968500000000000E+000);
            testSystemUnitValue(sysUnits, "length", "French",        "point-didot",                       3.759715471075000E-004);
            testSystemUnitValue(sysUnits, "length", "French",        "pied(commum)",                      2.236067977500000E-001);
            testSystemUnitValue(sysUnits, "length", "French",        "pied(d'ordonance)",                 3.248400000000000E-001);
            testSystemUnitValue(sysUnits, "length", "French",        "toise(du-Chatelet)",                1.949090000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "French",        "pied-carre",                        1.055206466419960E-001);
            testSystemUnitValue(sysUnits, "area",   "French",        "journal(Nantes)",                   2.671000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "French",        "ares",                              1.000000000000000E+002);
            testSystemUnitValue(sysUnits, "area",   "French",        "exots(Agen)",                       1.687500000000000E+001);
            testSystemUnitValue(sysUnits, "area",   "French",        "dextres(Montpellier)",              1.920000000000000E+001);
            testSystemUnitValue(sysUnits, "area",   "French",        "corterade(Montpellier)",            2.877000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "French",        "journal(Bretagne)",                 4.863000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "French",        "becheree(Lyonnais)",                1.367000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "French",        "journal(Lyonnais)",                 4.000000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "French",        "livre(de-Paris)",                   4.895058500000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "French",        "livre(Charlemange)",                3.671280000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "French",        "livre(metric)",                     1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "French",        "pinte",                             9.521462584750000E-004);
            testSystemUnitValue(sysUnits, "liquid", "French",        "chopine(Provence-wine)",            2.299250000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "French",        "setier",                            1.516800000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "French",        "picotins",                          3.125000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "German",        "fuss",                              3.138570000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "German",        "klafter",                           1.440020334575000E+002);
            testSystemUnitValue(sysUnits, "mass",   "German",        "pfund",                             4.677110000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "German",        "zollpfund",                         5.144821000000001E-001);
            testSystemUnitValue(sysUnits, "liquid", "German",        "quart",                             1.145069095408660E-003);
            testSystemUnitValue(sysUnits, "dry",    "German",        "metzen",                            3.705960000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "German",        "metze",                             3.435890000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Greek",         "piki(short)",                       6.480000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Greek",         "piki(long)",                        6.690000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Greek",         "piki(mansonary)",                   7.500000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Greek",         "amma",                              2.100000000000000E+001);
            testSystemUnitValue(sysUnits, "area",   "Greek",         "stremma",                           1.000000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Greek",         "oka",                               1.280000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Greek",         "oka(average)",                      1.336500000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Greek",         "baril",                             7.423600000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Greek",         "sexte",                             5.400000000000000E-004);
            testSystemUnitValue(sysUnits, "length", "Guatemalan",    "vara",                              8.359000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Guatemalan",    "manzana",                           6.987288100000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Guatemalan",    "fanega",                            9.200000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Guatemalan",    "botella(nominal)",                  6.500000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Guatemalan",    "botella(min)",                      6.300000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Guatemalan",    "botella(max)",                      6.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Guatemalan",    "cubic-vera",                        5.840674122790001E-001);
            testSystemUnitValue(sysUnits, "length", "Guinean",       "pic",                               5.780000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Guinean",       "square-pic",                        3.340840000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Guinean",       "benda",                             6.419999999999999E-002);
            testSystemUnitValue(sysUnits, "liquid", "Guinean",       "cubic-pic",                         1.931005520000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Guinean",       "cubic-pic",                         1.931005520000000E-001);
            testSystemUnitValue(sysUnits, "length", "Haitian",       "toise",                             1.948800000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Haitian",       "carreau",                           1.292300000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Haitian",       "gwo-mamit",                         1.700000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Haitian",       "baril",                             1.000000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Haitian",       "cubic-toise",                       7.401194422272000E+000);
            testSystemUnitValue(sysUnits, "length", "Hebrew",        "cubit",                             5.550000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Hebrew",        "cubit(acared)",                     6.400000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Hebrew",        "geris",                             3.141592653589790E-004);
            testSystemUnitValue(sysUnits, "mass",   "Hebrew",        "mina(sacred)",                      8.500000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Hebrew",        "mina(Talmudic)",                    3.542000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Hebrew",        "bath(old)",                         2.937600000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Hebrew",        "bath(new)",                         2.142000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Hebrew",        "ephah(old)",                        2.937600000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Hebrew",        "ephah(new)",                        2.142000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Honduran",      "vara",                              8.128000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Honduran",      "manzana",                           6.606438400000001E+004);
            testSystemUnitValue(sysUnits, "mass",   "Honduran",      "fanega",                            9.200000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Honduran",      "botella(nominal)",                  6.500000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Honduran",      "botella(min)",                      6.300000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Honduran",      "botella(max)",                      6.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Honduran",      "cubic-vara",                        5.369713131520000E-001);
            testSystemUnitValue(sysUnits, "length", "Hungarian",     "faust",                             1.053600000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Hungarian",     "square-meile",                      6.978262126496050E+007);
            testSystemUnitValue(sysUnits, "mass",   "Hungarian",     "oka",                               1.329479142678000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Hungarian",     "eimer",                             5.430000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Hungarian",     "cubic-faust",                       1.169572870656000E-003);
            testSystemUnitValue(sysUnits, "length", "Icelandic",     "fet",                               3.138570000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Icelandic",     "ferfaomur",                         3.546223792164000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Icelandic",     "pund",                              5.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Icelandic",     "cubic-fet",                         3.091686557603380E-002);
            testSystemUnitValue(sysUnits, "dry",    "Icelandic",     "pottar",                            9.661520492510560E-004);
            testSystemUnitValue(sysUnits, "length", "Indian",        "hasta",                             4.570000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Indian",        "guz(Bombay)",                       6.858000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Indian",        "guz(Calcutta)",                     9.150000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Indian",        "cawnie",                            5.400000000000000E+002);
            testSystemUnitValue(sysUnits, "area",   "Indian",        "square-guz(Bombay)",                4.703216400000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Indian",        "square-guz(Calcutta)",              8.372250000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Indian",        "ground",                            2.030000000000000E+001);
            testSystemUnitValue(sysUnits, "area",   "Indian",        "kani",                              3.075000000000000E+002);
            testSystemUnitValue(sysUnits, "area",   "Indian",        "chahar",                            2.962000000000000E-002);
            testSystemUnitValue(sysUnits, "mass",   "Indian",        "pala",                              4.700000000000000E-002);
            testSystemUnitValue(sysUnits, "mass",   "Indian",        "seer",                              9.330400000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Indian",        "drona",                             1.320000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Indian",        "parah",                             1.101000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Indian",        "drona",                             1.320000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Indian",        "seer",                              1.000000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Indonesian",    "depa",                              1.700000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Indonesian",    "bahoe",                             7.096500000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Indonesian",    "picul",                             6.176130250000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Indonesian",    "thail(precious-metal)",             5.409000000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Indonesian",    "thail(opium)",                      3.860100000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Indonesian",    "kan",                               1.575100000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Indonesian",    "cubic-depa",                        4.913000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "Irish",         "foot",                              3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Irish",         "troighid",                          2.500000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Irish",         "achar",                             4.046856422400000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Irish",         "penginn",                           4.000000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Irish",         "gallon",                            3.565825126400000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Irish",         "meisrin",                           6.600000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Irish",         "cubic-foot",                        2.831684659200000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Irish",         "cubic-troighid",                    1.562500000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Italian",       "piedi-liprando",                    5.137699999999999E-001);
            testSystemUnitValue(sysUnits, "area",   "Italian",       "giornata",                          3.800000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Italian",       "libbra",                            3.070000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Italian",       "barile(Florence-oil)",              3.343000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Italian",       "barile(Florence-wine)",             4.560000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Italian",       "cubic-piedi-liprando",              1.356145303196330E-001);
            testSystemUnitValue(sysUnits, "length", "Japanese",      "shaku",                             3.030303030303030E-001);
            testSystemUnitValue(sysUnits, "area",   "Japanese",      "tsubo",                             3.305785123966940E+000);
            testSystemUnitValue(sysUnits, "mass",   "Japanese",      "kwan",                              3.750000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Japanese",      "tael",                              3.751000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Japanese",      "sho",                               1.803906836964690E-003);
            testSystemUnitValue(sysUnits, "dry",    "Japanese",      "cubic-shaku",                       2.782647410746580E-002);
            testSystemUnitValue(sysUnits, "length", "Latvian",       "elle",                              5.370000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Latvian",       "kapp",                              1.486400000000000E+002);
            testSystemUnitValue(sysUnits, "mass",   "Latvian",       "pfund",                             4.190000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Latvian",       "stoof",                             1.275200000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Latvian",       "faden",                             4.077000000000000E+000);
            testSystemUnitValue(sysUnits, "dry",    "Latvian",       "kulmet",                            1.091062080000000E-002);
            testSystemUnitValue(sysUnits, "length", "Libyan",        "pic",                               6.800000000000000E-001);
            testSystemUnitValue(sysUnits, "area",    "Libyan",       "square-pic",                        4.624000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",    "Libyan",       "rottolo",                           5.128000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Libyan",        "barile",                            6.249750000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Libyan",        "orba",                              7.692000000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Maltese",       "canna",                             2.088000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Maltese",       "qasba-kwadra",                      4.359744000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Maltese",       "rottolo",                           7.937900000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Maltese",       "salma",                             2.909440000000000E+002);
            testSystemUnitValue(sysUnits, "liquid", "Maltese",       "baril",                             4.316200000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Maltese",       "caffiso",                           2.045700000000000E+001);
            testSystemUnitValue(sysUnits, "dry",    "Maltese",       "tomna",                             1.818436800000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Mauritius",     "cash",                              2.271100000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Mexican",       "vara",                              8.380000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Mexican",       "fanega",                            3.566275929600000E+004);
            testSystemUnitValue(sysUnits, "mass",   "Mexican",       "libbra",                            4.602463400000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Mexican",       "cuartillo(wine)",                   4.562640000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Mexican",       "cuartillo(oil)",                    5.061620000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Mexican",       "cuartillo",                         1.891800000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Mozambican",    "aldan",                             1.600000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Mozambican",    "square-aldan",                      2.560000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Mozambican",    "bahar",                             1.090000000000000E+002);
            testSystemUnitValue(sysUnits, "liquid", "Mozambican",    "cubic-aldan",                       4.096000000000000E+000);
            testSystemUnitValue(sysUnits, "dry",    "Mozambican",    "cubic-aldan",                       4.096000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "Moroccan",      "pic",                               6.100000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Moroccan",      "square-pic",                        3.721000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Moroccan",      "rotal",                             5.075000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Moroccan",      "mud",                               1.400000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Moroccan",      "cubic-pic",                         2.269810000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Nicaraguan",    "vara",                              8.128000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Nicaraguan",    "manzana",                           6.988921041000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Nicaraguan",    "fanega",                            9.200000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Nicaraguan",    "botella(nominal)",                  6.500000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Nicaraguan",    "botella(min)",                      6.300000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Nicaraguan",    "botella(max)",                      6.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Nicaraguan",    "cubic-vara",                        5.369713131520000E-001);
            testSystemUnitValue(sysUnits, "length", "Norwegian",     "fod",                               3.137000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Norwegian",     "kvadrat-rode",                      9.840769000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Norwegian",     "skaalpund",                         4.981000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Norwegian",     "pot",                               9.651000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Norwegian",     "korntonde",                         1.389744000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Paraguayan",    "vara",                              8.660000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Paraguayan",    "vara(old)",                         8.385600000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Paraguayan",    "lifio",                             7.499560000000000E+001);
            testSystemUnitValue(sysUnits, "area",   "Paraguayan",    "lifio(old)",                        4.883605057152000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Paraguayan",    "libbra",                            4.590000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Paraguayan",    "libbra(old)",                       4.600800000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Paraguayan",    "fanega",                            2.880000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Paraguayan",    "cubic-vara",                        6.494618960000000E-001);
            testSystemUnitValue(sysUnits, "length", "Persian",       "zereth",                            3.200000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Persian",       "farsakh",                           5.486400000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Persian",       "gar",                               1.474560000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Persian",       "talent",                            3.260000000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Persian",       "rottel",                            4.600000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Persian",       "sextario",                          3.300000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Persian",       "chenica",                           1.320000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Persian",       "amphora",                           3.260000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Peruvian",      "vara",                              8.359799999999999E-001);
            testSystemUnitValue(sysUnits, "length", "Peruvian",      "pie",                               2.786600000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Peruvian",      "fanegada",                          3.144881521800000E+003);
            testSystemUnitValue(sysUnits, "area",   "Peruvian",      "topo",                              2.705995833868800E+003);
            testSystemUnitValue(sysUnits, "mass",   "Peruvian",      "libbra",                            4.600900000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Peruvian",      "cubic-vara",                        5.842351232431920E-001);
            testSystemUnitValue(sysUnits, "dry",    "Peruvian",      "cubic-vara",                        5.842351232431920E-001);
            testSystemUnitValue(sysUnits, "length", "Philippine",    "talampakan",                        3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Philippine",    "balita",                            2.795000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Philippine",    "catty",                             6.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Philippine",    "kaban",                             9.990000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Philippine",    "cubic-talampakan",                  2.831684659200000E-002);
            testSystemUnitValue(sysUnits, "length", "Polish",        "stopa(new)",                        2.880000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Polish",        "stopa(Warsaw)",                     2.978000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Polish",        "stopa(Cracow)",                     2.356400000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Polish",        "square-stopa(new)",                 8.294400000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Polish",        "square-stopa(Warsaw)",              8.868484000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Polish",        "square-stopa(Cracow)",              5.552620960000000E-002);
            testSystemUnitValue(sysUnits, "mass",   "Polish",        "funt",                              4.055040000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Polish",        "kwarta",                            1.000000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Polish",        "cubic-stopa",                       2.388787200000000E-002);
            testSystemUnitValue(sysUnits, "length", "Portuguese",    "pe",                                3.285000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Portuguese",    "square-vera",                       1.199025000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Portuguese",    "libra",                             4.590000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Portuguese",    "almude",                            1.650000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Portuguese",    "fanga",                             5.400000000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Puerto Rican",  "cuerda",                            3.930395625000000E+003);
            testSystemUnitValue(sysUnits, "length", "Roman",         "pes(common)",                       2.944000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Roman",         "pes(1st-legal)",                    2.962000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Roman",         "pes(2nd-legal)",                    2.967000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Roman",         "pes(Druisian)",                     3.196000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Roman",         "quadratus(common)",                 8.667136000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Roman",         "quadratus(1st-legal)",              8.773444000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Roman",         "quadratus(2nd-legal)",              8.803089000000000E-002);
            testSystemUnitValue(sysUnits, "area",   "Roman",         "quadratus(Druisian)",               1.021441600000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Roman",         "uncia",                             2.725000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Roman",         "sextarius",                         5.492800000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Roman",         "modius",                            8.788480000000000E-003);
            testSystemUnitValue(sysUnits, "length", "Romanian",      "halibiu",                           7.010000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Romanian",      "palma",                             2.500000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Romanian",      "feredela",                          1.250000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Romanian",      "cantar",                            5.600000000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Romanian",      "font",                              5.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Romanian",      "viacka",                            1.415000000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Romanian",      "litra",                             2.500000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Romanian",      "dimerla",                           2.460000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Russian",       "foute",                             3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Russian",       "funt",                              4.095171792456690E-001);
            testSystemUnitValue(sysUnits, "mass",   "Russian",       "doli",                              4.443494030000000E-005);
            testSystemUnitValue(sysUnits, "liquid", "Russian",       "vedro",                             1.229941000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Russian",       "garnetz",                           3.279842666666670E-003);
            testSystemUnitValue(sysUnits, "length", "Salvadoran",    "vara",                              8.128000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Salvadoran",    "square-vara",                       6.606438400000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Salvadoran",    "fanega",                            9.200000000000000E+001);
            testSystemUnitValue(sysUnits, "liquid", "Salvadoran",    "botella(nominal)",                  6.500000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Salvadoran",    "botella(min)",                      6.300000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Salvadoran",    "botella(max)",                      6.700000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Salvadoran",    "cubic-vara",                        5.369713131520000E-001);
            testSystemUnitValue(sysUnits, "length", "Saudi Arabian", "farsakh",                           4.830000000000000E+003);
            testSystemUnitValue(sysUnits, "area",   "Saudi Arabian", "square-covid",                      2.323240000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Saudi Arabian", "maund",                             1.350000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Saudi Arabian", "nusfiah",                           9.500000000000000E-004);
            testSystemUnitValue(sysUnits, "dry",    "Saudi Arabian", "teman",                             8.500000000000001E-002);
            testSystemUnitValue(sysUnits, "length", "Scottish",      "foot(traditional)",                 3.064460845920000E-001);
            testSystemUnitValue(sysUnits, "length", "Scottish",      "foot",                              3.064500000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Scottish",      "square-foot",                       9.390920276176720E-002);
            testSystemUnitValue(sysUnits, "mass",   "Scottish",      "pound",                             6.168856232000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Scottish",      "gallon",                            1.355590372684800E-002);
            testSystemUnitValue(sysUnits, "liquid", "Scottish",      "jug",                               1.694918130000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Scottish",      "lippy(oat-barley-malt)",            3.283066337080000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Scottish",      "lippy(wheat-peas-beans-rice-salt)", 2.250484660312000E-003);
            testSystemUnitValue(sysUnits, "length", "Somalian",      "top",                               3.920000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Somalian",      "darat",                             8.000000000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "Somalian",      "rottolo",                           4.480000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Somalian",      "chela",                             1.359000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Somalian",      "cubic-top",                         6.023628800000000E+001);
            testSystemUnitValue(sysUnits, "length", "Spanish",       "vara",                              8.359050000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Spanish",       "square-vara",                       6.987371690250000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Spanish",       "libra",                             4.600930000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Spanish",       "arroba(water)",                     1.564316200000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Spanish",       "arroba(wine)",                      1.613300000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Spanish",       "arroba(oil)",                       1.256300000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Spanish",       "fanega",                            5.550100000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Swedish",       "fot",                               2.969000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Swedish",       "kvadratfot",                        8.814961000000000E-002);
            testSystemUnitValue(sysUnits, "mass",   "Swedish",       "skalpund",                          4.250797024000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Swedish",       "kanna",                             2.617161920900000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Swedish",       "kanna",                             2.617161920900000E-003);
            testSystemUnitValue(sysUnits, "length", "Swiss",         "fuss",                              3.000000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Swiss",         "douzieme",                          1.880000000000000E-004);
            testSystemUnitValue(sysUnits, "area",   "Swiss",         "arpent",                            3.600000000000000E+001);
            testSystemUnitValue(sysUnits, "mass",   "Swiss",         "livre",                             5.000000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Swiss",         "livre(apothecary)",                 3.750000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Swiss",         "pot",                               1.500000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Swiss",         "emine",                             1.500000000000000E-002);
            testSystemUnitValue(sysUnits, "length", "Syrian",        "pic",                               5.820000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Syrian",        "square-pic",                        3.387240000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Syrian",        "rottolo",                           1.785000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Syrian",        "rotl",                              3.200000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Syrian",        "cubic-pic",                         1.971373680000000E-001);
            testSystemUnitValue(sysUnits, "length", "Thai",          "wah",                               2.000000000000000E+000);
            testSystemUnitValue(sysUnits, "area",   "Thai",          "square-wah",                        4.000000000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Thai",          "tchang",                            1.200000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Thai",          "tanan(nomial)",                     1.000000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "Thai",          "tanan(min)",                        9.000000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Thai",          "tanan(max)",                        1.200000000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Thai",          "cubic-wah",                         8.000000000000000E+000);
            testSystemUnitValue(sysUnits, "length", "Tunisian",      "pic(Tunisian)",                     5.625000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Tunisian",      "pic(Endezian)",                     6.730000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Tunisian",      "pic(Arabic)",                       4.880000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Tunisian",      "square-pic",                        3.164062500000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Tunisian",      "uckir",                             3.149500000000000E-002);
            testSystemUnitValue(sysUnits, "liquid", "Tunisian",      "cafisso",                           4.960000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Tunisian",      "cubic-pic",                         1.779785156250000E-001);
            testSystemUnitValue(sysUnits, "length", "Turkish",       "pic",                               7.553972464870000E-001);
            testSystemUnitValue(sysUnits, "area",   "Turkish",       "square-pic",                        5.706250000001410E-001);
            testSystemUnitValue(sysUnits, "mass",   "Turkish",       "oka",                               1.283000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Turkish",       "cubic-zira",                        1.000000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Turkish",       "fortin",                            4.000000000000000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Turkish",       "cubic-pic",                         4.310485537767510E-001);
            testSystemUnitValue(sysUnits, "length", "Turkmenian",    "hasch/altschin",                    7.112000000000001E-001);
            testSystemUnitValue(sysUnits, "area",   "Turkmenian",    "square-hasch",                      5.058054400000001E-001);
            testSystemUnitValue(sysUnits, "mass",   "Turkmenian",    "batman(nomial)",                    1.265000000000000E+002);
            testSystemUnitValue(sysUnits, "mass",   "Turkmenian",    "batman(min)",                       1.250000000000000E+002);
            testSystemUnitValue(sysUnits, "mass",   "Turkmenian",    "batman(max)",                       1.280000000000000E+002);
            testSystemUnitValue(sysUnits, "liquid", "Turkmenian",    "cubic-hasch",                       3.597288289280000E-001);
            testSystemUnitValue(sysUnits, "dry",    "Turkmenian",    "cubic-hasch",                       3.597288289280000E-001);
            testSystemUnitValue(sysUnits, "length", "Venezuelan",    "vara",                              8.000000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Venezuelan",    "square-vara",                       6.400000000000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Venezuelan",    "libbra",                            5.000000000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Venezuelan",    "arroba",                            1.613700000000000E-002);
            testSystemUnitValue(sysUnits, "dry",   "Venezuelan",     "cubic-vara",                        5.120000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "Yugoslavian",   "stopa",                             3.160000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Yugoslavian",   "square-stopa",                      9.985600000000000E-002);
            testSystemUnitValue(sysUnits, "mass",   "Yugoslavian",   "oka",                               1.280000000000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "Yugoslavian",   "cubic-stopa",                       3.155449600000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Yugoslavian",   "cubic-stopa",                       3.155449600000000E-002);
            testSystemUnitValue(sysUnits, "length", "South African", "cape-foot",                         3.148580000000000E-001);
            testSystemUnitValue(sysUnits, "length", "South African", "rijnlandse-voet",                   3.139440000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "South African", "morgen",                            8.565320000000000E+003);
            testSystemUnitValue(sysUnits, "mass",   "South African", "pond",                              4.940903200000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "South African", "kanne",                             1.329000000000000E-003);
            testSystemUnitValue(sysUnits, "liquid", "South African", "firkin",                            4.091482800000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "South African", "schepel",                           2.727500000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "South African", "gantang",                           9.200000000000000E-003);
            testSystemUnitValue(sysUnits, "mass",   "Far East",      "catty",                             6.048000000000000E-001);
            testSystemUnitValue(sysUnits, "length", "East Med",      "pik",                               7.112000000000001E-001);
            testSystemUnitValue(sysUnits, "length", "East Med",      "arshin",                            7.112000000000001E-001);
            testSystemUnitValue(sysUnits, "area",   "East Med",      "square-pik",                        5.058054400000001E-001);
            testSystemUnitValue(sysUnits, "area",   "East Med",      "square-arshin",                     5.058054400000001E-001);
            testSystemUnitValue(sysUnits, "mass",   "East Med",      "oka",                               1.270058636000000E+000);
            testSystemUnitValue(sysUnits, "liquid", "East Med",      "cubic-pik",                         3.597288289280000E-001);
            testSystemUnitValue(sysUnits, "liquid", "East Med",      "krina",                             2.000000000000000E-002);
            testSystemUnitValue(sysUnits, "dry",    "East Med",      "cubic-pik",                         3.597288289280000E-001);
            testSystemUnitValue(sysUnits, "dry",    "East Med",      "cubic-arshin",                      3.597288289280000E-001);
            testSystemUnitValue(sysUnits, "length", "Myanmar",       "taung",                             4.572000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Myanmar",       "square-taung",                      2.090318400000000E-001);
            testSystemUnitValue(sysUnits, "mass",   "Myanmar",       "aseittha",                          4.082330000000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Myanmar",       "hkwet",                             1.278590000000000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Myanmar",       "cubic-taung",                       9.556935724800000E-002);
            testSystemUnitValue(sysUnits, "length", "Welsh",         "palf",                              3.048000000000000E-001);
            testSystemUnitValue(sysUnits, "area",   "Welsh",         "erw(Venedotian)",                   1.426990694400000E+003);
            testSystemUnitValue(sysUnits, "area",   "Welsh",         "erw(Dimetian)",                     8.561944166400000E+002);
            testSystemUnitValue(sysUnits, "mass",   "Welsh",         "pwys",                              4.535923380000000E-001);
            testSystemUnitValue(sysUnits, "liquid", "Welsh",         "hestawr",                           7.047814033376000E-002);
            testSystemUnitValue(sysUnits, "dry",    "Welsh",         "cubic-palf",                        2.831684659200000E-002);
            testSystemUnitValue(sysUnits, "length", "Sri Lankan",    "paramaanuwa",                       3.306670000000000E-008);
            testSystemUnitValue(sysUnits, "area",   "Sri Lankan",    "laaha",                             4.598700000000000E+000);
            testSystemUnitValue(sysUnits, "mass",   "Sri Lankan",    "gunja",                             1.200000000000000E-004);
            testSystemUnitValue(sysUnits, "liquid", "Sri Lankan",    "seer",                              1.135623535200000E-003);
            testSystemUnitValue(sysUnits, "dry",    "Sri Lankan",    "seer",                              7.062500000000000E-004);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("SystemTestSystemUnits", ts);
        }

        ///<summary>
        /// Verify constant value.
        ///</summary>
        /// <param><c>cg</c>            (input)  ConstantGroup containing 
        ///                                      value.</param>
        /// <param><c>cname</c>         (input)  constant name.</param>
        /// <param><c>expectedValue</c> (input) expected value.</param>

        void testSystemUnitValue(SystemUnits su, 
                                 string type,
                                 string  system,
                                 string name,
                                 double expectedValue)
        {
            UBASE ub = su.unit(type, system, name);
            double value = ub.value().asDouble();
            bool result = (value == expectedValue ? true : false);
            printResult(result, "SystemTestSystemUnits - " + type + "["+system+"]" + " - ", name,
                        value.ToString("E15"), expectedValue.ToString("E15"));
        }
    }
}
// EOF
