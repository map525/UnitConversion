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
// File SystemTestUnitConstants.cs
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
    public class SystemTestConstants : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where the 
        ///                              test results are written.</param>
        public SystemTestConstants(bool brief, string path) : base(brief, path)
        {
             openFile("SystemTestConstants.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("SystemTestConstants");

            Constants constants =  Constants.Instance();

             List<string> names = constants.names();
             List<string> expected = new List<string> {"DerivedUnits", 
                                                       "PhysicalConstants", 
                                                       "PhysialDefinitions", 
                                                       "PhysicalMeasurements",
                                                       "SI", 
                                                       "WGS84Model", 
                                                       "Invalid"};
            bool r0 = compareList(names, expected);
            printResult(r0, "SystemTestConstants", "names", listToString(names),
                            listToString(expected));


            ConstantGroup derivedUnits = constants.constant("DerivedUnits");
            ConstantGroup physicalConstants = constants.constant("PhysicalConstants");
            ConstantGroup physialDefinitions = constants.constant("PhysialDefinitions");
            ConstantGroup physicalMeasurements = constants.constant("PhysicalMeasurements");
            ConstantGroup si = constants.constant("SI");
            ConstantGroup WGS84Model = constants.constant("WGS84Model");

            testConstantValue(derivedUnits, "becquerel",  1.0);
            testConstantValue(derivedUnits, "Bq",         1.0);
            testConstantValue(derivedUnits, "coulomb",    1.0);
            testConstantValue(derivedUnits, "C",          1.0);
            testConstantValue(derivedUnits, "farad",      1.0);
            testConstantValue(derivedUnits, "F",          1.0);
            testConstantValue(derivedUnits, "gray",       1.0);
            testConstantValue(derivedUnits, "Gy",         1.0);
            testConstantValue(derivedUnits, "henry",      1.0);
            testConstantValue(derivedUnits, "H",          1.0);
            testConstantValue(derivedUnits, "hertz",      1.0);
            testConstantValue(derivedUnits, "Hz",         1.0);
            testConstantValue(derivedUnits, "joule",      1.0);
            testConstantValue(derivedUnits, "J",          1.0);
            testConstantValue(derivedUnits, "katal",      1.0);
            testConstantValue(derivedUnits, "kt",         1.0);
            testConstantValue(derivedUnits, "lumen",      1.0);
            testConstantValue(derivedUnits, "lm",         1.0);
            testConstantValue(derivedUnits, "lux",        1.0);
            testConstantValue(derivedUnits, "lx",         1.0);
            testConstantValue(derivedUnits, "newton",     1.0);
            testConstantValue(derivedUnits, "N",          1.0);
            testConstantValue(derivedUnits, "ohm",        1.0);
            testConstantValue(derivedUnits, "w",          1.0);
            testConstantValue(derivedUnits, "pascal",     1.0);
            testConstantValue(derivedUnits, "Pa",         1.0);
            testConstantValue(derivedUnits, "poiseuille", 1.0);
            testConstantValue(derivedUnits, "Po",         1.0);
            testConstantValue(derivedUnits, "siemens",    1.0);
            testConstantValue(derivedUnits, "S",          1.0);
            testConstantValue(derivedUnits, "sievert",    1.0);
            testConstantValue(derivedUnits, "Sv",         1.0);
            testConstantValue(derivedUnits, "tesla",      1.0);
            testConstantValue(derivedUnits, "T",          1.0);
            testConstantValue(derivedUnits, "volt",       1.0);
            testConstantValue(derivedUnits, "V",          1.0);
            testConstantValue(derivedUnits, "watt",       1.0);
            testConstantValue(derivedUnits, "W",          1.0);
            testConstantValue(derivedUnits, "weber",      1.0);
            testConstantValue(derivedUnits, "Wb",         1.0);

            testConstantValue(physicalConstants, "planck-constant",                    6.626070150000000E-34);
            testConstantValue(physicalConstants, "h",                                  6.626070150000000E-34);
            testConstantValue(physicalConstants, "speed-of-light",                     2.997924580000000E+08);
            testConstantValue(physicalConstants, "c",                                  2.997924580000000E+08);
            testConstantValue(physicalConstants, "elementary-charge",                  1.602176634000000E-19);
            testConstantValue(physicalConstants, "e",                                  1.602176634000000E-19);
            testConstantValue(physicalConstants, "boltzman-constant",                  1.380649000000000E-23);
            testConstantValue(physicalConstants, "k",                                  1.380649000000000E-23);
            testConstantValue(physicalConstants, "avogadro-constant",                  6.022140760000000E+23);
            testConstantValue(physicalConstants, "N",                                  6.022140760000000E+23);

            testConstantValue(physialDefinitions, "atm",                               1.013250000000000E+05);
            testConstantValue(physialDefinitions, "bar",                               1.000000000000000E+05);
            testConstantValue(physialDefinitions, "minute",                            6.000000000000000E+01);
            testConstantValue(physialDefinitions, "min",                               6.000000000000000E+01);
            testConstantValue(physialDefinitions, "hour",                              3.600000000000000E+03);
            testConstantValue(physialDefinitions, "hr",                                3.600000000000000E+03);
            testConstantValue(physialDefinitions, "day",                               8.640000000000000E+04);
            testConstantValue(physialDefinitions, "year(common)",                      3.153600000000000E+07);
            testConstantValue(physialDefinitions, "yr(common)",                        3.153600000000000E+07);
            testConstantValue(physialDefinitions, "year(Julian)",                      3.155760000000000E+07);
            testConstantValue(physialDefinitions, "yr(Julian)",                        3.155760000000000E+07);
            testConstantValue(physialDefinitions, "liter",                             1.000000000000000E-03);
            testConstantValue(physialDefinitions, "l",                                 1.000000000000000E-03);
            testConstantValue(physialDefinitions, "kg-water",                          1.000000000000000E-03);
            testConstantValue(physialDefinitions, "kgH2O",                             1.000000000000000E-03);
            testConstantValue(physialDefinitions, "ream",                              5.000000000000000E+02);
            testConstantValue(physialDefinitions, "ream(old)",                         4.800000000000000E+02);
            testConstantValue(physialDefinitions, "standard-gravity",                  9.806650000000000E+00);
            testConstantValue(physialDefinitions, "gN",                                9.806650000000000E+00);
            testConstantValue(physialDefinitions, "carat",                             2.000000000000000E-04);
            testConstantValue(physialDefinitions, "ct",                                2.000000000000000E-04);
            testConstantValue(physialDefinitions, "BTU(IT)",                           1.055055852620000E+03);
            testConstantValue(physialDefinitions, "Btu",                               1.055055852620000E+03);
            testConstantValue(physialDefinitions, "thermochemical-calorie",            4.184000000000000E+00);
            testConstantValue(physialDefinitions, "cal",                               4.184000000000000E+00);
            testConstantValue(physialDefinitions, "international-nautical-mile",       1.852000000000000E+03);
            testConstantValue(physialDefinitions, "ni",                                1.852000000000000E+03);
            testConstantValue(physialDefinitions, "international-steam-table-calorie", 4.186800000000000E+00);
            testConstantValue(physialDefinitions, "cal(IST)",                          4.186800000000000E+00);
            testConstantValue(physialDefinitions, "roentgen",                          2.580000000000000E-04);
            testConstantValue(physialDefinitions, "R",                                 2.580000000000000E-04);
            testConstantValue(physialDefinitions, "dozen",                             1.200000000000000E+01);
            testConstantValue(physialDefinitions, "doz",                               1.200000000000000E+01);
            testConstantValue(physialDefinitions, "millimeter",                        1.000000000000000E-03);
            testConstantValue(physialDefinitions, "mm",                                1.000000000000000E-03);
            testConstantValue(physialDefinitions, "centimeter",                        1.000000000000000E-02);
            testConstantValue(physialDefinitions, "cm",                                1.000000000000000E-02);
            testConstantValue(physialDefinitions, "hertz",                             1.000000000000000E+00);
            testConstantValue(physialDefinitions, "Hz",                                1.000000000000000E+00);
            testConstantValue(physialDefinitions, "dyne",                              1.000000000000000E-05);
            testConstantValue(physialDefinitions, "dyn",                               1.000000000000000E-05);
            testConstantValue(physialDefinitions, "decimeter",                         1.000000000000000E-01);
            testConstantValue(physialDefinitions, "dm",                                1.000000000000000E-01);
            testConstantValue(physialDefinitions, "gram",                              1.000000000000000E-03);
            testConstantValue(physialDefinitions, "g",                                 1.000000000000000E-03);
            testConstantValue(physialDefinitions, "carat(metric)",                     2.000000000000000E-04);
            testConstantValue(physialDefinitions, "ct(metric)",                        2.000000000000000E-04);
            testConstantValue(physialDefinitions, "angstrom",                          1.000000000000000E-10);
            testConstantValue(physialDefinitions, "A",                                 1.000000000000000E-10);
            testConstantValue(physialDefinitions, "nautical-mile",                     1.852000000000000E+03);
            testConstantValue(physialDefinitions, "nmi",                               1.852000000000000E+03);
            testConstantValue(physialDefinitions, "ream(perfect)",                     5.120000000000000E+02);
            testConstantValue(physialDefinitions, "astronomical-unit",                 1.495978707000000E+11);
            testConstantValue(physialDefinitions, "au",                                1.495978707000000E+11);
            testConstantValue(physialDefinitions, "earth-equatorial-radius-WGS-84",    6.378137000000000E+06);
            testConstantValue(physialDefinitions, "a",                                 6.378137000000000E+06);
            testConstantValue(physialDefinitions, "room-temperature",                  2.931500000000000E+02);
            testConstantValue(physialDefinitions, "T",                                 2.931500000000000E+02);
            testConstantValue(physialDefinitions, "curie",                             3.700000000000000E+10);
            testConstantValue(physialDefinitions, "Ci",                                3.700000000000000E+10);

            testConstantValue(physicalMeasurements, "permittivity-of-free-space",      8.854187812800000E-12);
            testConstantValue(physicalMeasurements, "eo",                              8.854187812800000E-12);
            testConstantValue(physicalMeasurements, "permeability-of-free-space",      1.256637062000000E-06);
            testConstantValue(physicalMeasurements, "mo",                              1.256637062000000E-06);
            testConstantValue(physicalMeasurements, "electron-mass",                   9.109383701500000E-31);
            testConstantValue(physicalMeasurements, "me",                              9.109383701500000E-31);
            testConstantValue(physicalMeasurements, "bohr-radius",                     5.291772109030000E-11);
            testConstantValue(physicalMeasurements, "ao",                              5.291772109030000E-11);
            testConstantValue(physicalMeasurements, "density-of-water(40C)",           9.998395000000000E+02);
            testConstantValue(physicalMeasurements, "pH2O(4oC)",                       9.998395000000000E+02);
            testConstantValue(physicalMeasurements, "density-of-water(600F)",          9.990141000000000E+02);
            testConstantValue(physicalMeasurements, "pH2O(4oF)",                       9.990141000000000E+02);
            testConstantValue(physicalMeasurements, "density-of-mercury(00C)",         1.359508000000000E+04);
            testConstantValue(physicalMeasurements, "pH2O(0oC)",                       1.359508000000000E+04);
            testConstantValue(physicalMeasurements, "density-of-mercury(600F)",        1.355679000000000E+04);
            testConstantValue(physicalMeasurements, "pH2O(60oF)",                      1.355679000000000E+04);
            testConstantValue(physicalMeasurements, "electron-radius",                 2.817940326200000E-15);
            testConstantValue(physicalMeasurements, "re",                              2.817940326200000E-15);
            testConstantValue(physicalMeasurements, "loschmidt's-number",              2.686777400000000E+25);
            testConstantValue(physicalMeasurements, "no",                              2.686777400000000E+25);
            testConstantValue(physicalMeasurements, "roentgen",                        2.580000000000000E-04);
            testConstantValue(physicalMeasurements, "Rt",                              2.580000000000000E-04);
            testConstantValue(physicalMeasurements, "dalton",                          1.660539066600000E-27);
            testConstantValue(physicalMeasurements, "Da",                              1.660539066600000E-27);
            testConstantValue(physicalMeasurements, "u",                               1.660539066600000E-27);
            testConstantValue(physicalMeasurements, "proton-mass",                     1.672621923690000E-27);
            testConstantValue(physicalMeasurements, "mp",                              1.672621923690000E-27);
            testConstantValue(physicalMeasurements, "solar-mass",                      1.988470000000000E+30);
            testConstantValue(physicalMeasurements, "MO",                              1.988470000000000E+30);
            testConstantValue(physicalMeasurements, "density-of-mercury(230C)",        1.353770000000000E+04);
            testConstantValue(physicalMeasurements, "pHg(23oC)",                       1.353770000000000E+04);
            testConstantValue(physicalMeasurements, "density-of-sea-water",            1.025000000000000E+03);
            testConstantValue(physicalMeasurements, "st",                              1.025000000000000E+03);
            testConstantValue(physicalMeasurements, "gas-constant-for-air",            2.860000000000000E+02);
            testConstantValue(physicalMeasurements, "R",                               2.860000000000000E+02);
            testConstantValue(physicalMeasurements, "ratio-of-specific-heat-for-air",  1.400000000000000E+00);
            testConstantValue(physicalMeasurements, "g",                               1.400000000000000E+00);
            testConstantValue(physicalMeasurements, "BTU(Mean)",                       1.055870000000000E+03);
            testConstantValue(physicalMeasurements, "calorie(15oC)",                   4.185500000000000E+00);
            testConstantValue(physicalMeasurements, "cal(15oC)",                       4.185500000000000E+00);
            testConstantValue(physicalMeasurements, "calorie(20oC)",                   4.190020000000000E+00);
            testConstantValue(physicalMeasurements, "cal(20oC)",                       4.190020000000000E+00);
            testConstantValue(physicalMeasurements, "calorie(4oC)",                    4.204500000000000E+00);
            testConstantValue(physicalMeasurements, "cal(4oC)",                        4.204500000000000E+00);
            testConstantValue(physicalMeasurements, "calorie(mean)",                   4.190020000000000E+00);
            testConstantValue(physicalMeasurements, "cal(mean)",                       4.190020000000000E+00);
            testConstantValue(physicalMeasurements, "density-of-mercury(40C)",         1.360000000000000E+04);
            testConstantValue(physicalMeasurements, "pHg(4oC)",                        1.360000000000000E+04);

            testConstantValue(si, "kilogram",                                          1.000000000000000E+00);
            testConstantValue(si, "kg",                                                1.000000000000000E+00);
            testConstantValue(si, "meter",                                             1.000000000000000E+00);
            testConstantValue(si, "m",                                                 1.000000000000000E+00);
            testConstantValue(si, "second",                                            1.000000000000000E+00);
            testConstantValue(si, "s",                                                 1.000000000000000E+00);
            testConstantValue(si, "kelvin",                                            1.000000000000000E+00);
            testConstantValue(si, "K",                                                 1.000000000000000E+00);
            testConstantValue(si, "mole",                                              1.000000000000000E+00);
            testConstantValue(si, "mol",                                               1.000000000000000E+00);
            testConstantValue(si, "ampere",                                            1.000000000000000E+00);
            testConstantValue(si, "A",                                                 1.000000000000000E+00);
            testConstantValue(si, "candela",                                           1.000000000000000E+00);
            testConstantValue(si, "cd",                                                1.000000000000000E+00);
            testConstantValue(si, "radian",                                            1.000000000000000E+00);
            testConstantValue(si, "rad",                                               1.000000000000000E+00);
            testConstantValue(si, "steradian",                                         1.000000000000000E+00);
            testConstantValue(si, "sr",                                                1.000000000000000E+00);
            testConstantValue(si, "unitless",                                          1.000000000000000E+00);
            testConstantValue(si, "ct",                                                1.000000000000000E+00);

            testConstantValue(WGS84Model, "equatorial-radius",                         6.378137000000000E+06);
            testConstantValue(WGS84Model, "a",                                         6.378137000000000E+06);
            testConstantValue(WGS84Model, "inverse-flattening",                        2.982572235630000E+02);
            testConstantValue(WGS84Model, "if",                                        2.982572235630000E+02);
            testConstantValue(WGS84Model, "flattening",                                3.352810664747480E-03);
            testConstantValue(WGS84Model, "f",                                         3.352810664747480E-03);
            testConstantValue(WGS84Model, "angular-velocity",                          7.292110000000000E-05);
            testConstantValue(WGS84Model, "w",                                         7.292110000000000E-05);
            testConstantValue(WGS84Model, "polar-radius",                              6.356752314245180E+06);
            testConstantValue(WGS84Model, "b",                                         6.356752314245180E+06);
            testConstantValue(WGS84Model, "eccentricity-squared",                      6.694379990141330E-03);
            testConstantValue(WGS84Model, "e2",                                        6.694379990141330E-03);
            testConstantValue(WGS84Model, "eccentricity",                              8.181919084262160E-02);
            testConstantValue(WGS84Model, "e",                                         8.181919084262160E-02);
            testConstantValue(WGS84Model, "equatorial-gravity",                        9.780325335900000E+00);
            testConstantValue(WGS84Model, "ge",                                        9.780325335900000E+00);
            testConstantValue(WGS84Model, "polar-gravity",                             9.832184937800000E+00);
            testConstantValue(WGS84Model, "gp",                                        9.832184937800000E+00);
            testConstantValue(WGS84Model, "gravity-constant",                          1.931852646396040E-03);
            testConstantValue(WGS84Model, "cg",                                        1.931852646396040E-03);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("SystemTestConstants", ts);
        }

        ///<summary>
        /// Verify constant value.
        ///</summary>
        /// <param><c>cg</c>            (input)  ConstantGroup containing 
        ///                                      value.</param>
        /// <param><c>cname</c>         (input)  constant name.</param>
        /// <param><c>expectedValue</c> (input) expected value.</param>

        void testConstantValue(ConstantGroup cg, 
                               string cname,
                               double expectedValue)
        {
            double value = cg.value(cname);
            bool result = (value == expectedValue ? true : false);
            printResult(result, "SystemTestConstants - " + cg.name() + " - ", cname,
                        value.ToString("E15"), expectedValue.ToString("E15"));
        }
    }
}
// EOF
