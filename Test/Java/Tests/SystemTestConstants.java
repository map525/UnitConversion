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
// File SystemTestUnitConstants.java
//
// System test for interface. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import UnitConversion.*;
import java.time.LocalDateTime;
import java.time.Duration;
import java.io.PrintStream;
import java.util.*;

public class SystemTestConstants extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test ouput.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public SystemTestConstants(boolean brief, String path) 
    {
        super(brief, path);
        openFile("SystemTestConstants.txt");
    }

   /*
    * Run the tests; output results to screen and file.
    * 
    * @param out - (input) stream to write results to.
    */
    @Override
    protected void runOut(PrintStream out)
    {
        LocalDateTime start = LocalDateTime.now();
        printHeader("SystemTestConstants", out);

        Constants constants =  Constants.Instance();

        List<String> names = constants.names();
        List<String> expected = makeList("DerivedUnits", 
                                         "PhysicalConstants", 
                                         "PhysialDefinitions", 
                                         "PhysicalMeasurements",
                                         "SI", 
                                         "WGS84Model", 
                                         "Invalid");
        boolean r0 = compareList(names, expected);
        printResult(r0, "SystemTestConstants", "names", listToString(names), 
                        listToString(expected),  out);


        ConstantGroup derivedUnits = constants.constant("DerivedUnits");
        ConstantGroup physicalConstants = constants.constant("PhysicalConstants");
        ConstantGroup physialDefinitions = constants.constant("PhysialDefinitions");
        ConstantGroup physicalMeasurements = constants.constant("PhysicalMeasurements");
        ConstantGroup si = constants.constant("SI");
        ConstantGroup WGS84Model = constants.constant("WGS84Model");

        testConstantValue(derivedUnits, "becquerel",  1.0, out);
        testConstantValue(derivedUnits, "Bq",         1.0, out);
        testConstantValue(derivedUnits, "coulomb",    1.0, out);
        testConstantValue(derivedUnits, "C",          1.0, out);
        testConstantValue(derivedUnits, "farad",      1.0, out);
        testConstantValue(derivedUnits, "F",          1.0, out);
        testConstantValue(derivedUnits, "gray",       1.0, out);
        testConstantValue(derivedUnits, "Gy",         1.0, out);
        testConstantValue(derivedUnits, "henry",      1.0, out);
        testConstantValue(derivedUnits, "H",          1.0, out);
        testConstantValue(derivedUnits, "hertz",      1.0, out);
        testConstantValue(derivedUnits, "Hz",         1.0, out);
        testConstantValue(derivedUnits, "joule",      1.0, out);
        testConstantValue(derivedUnits, "J",          1.0, out);
        testConstantValue(derivedUnits, "katal",      1.0, out);
        testConstantValue(derivedUnits, "kt",         1.0, out);
        testConstantValue(derivedUnits, "lumen",      1.0, out);
        testConstantValue(derivedUnits, "lm",         1.0, out);
        testConstantValue(derivedUnits, "lux",        1.0, out);
        testConstantValue(derivedUnits, "lx",         1.0, out);
        testConstantValue(derivedUnits, "newton",     1.0, out);
        testConstantValue(derivedUnits, "N",          1.0, out);
        testConstantValue(derivedUnits, "ohm",        1.0, out);
        testConstantValue(derivedUnits, "w",          1.0, out);
        testConstantValue(derivedUnits, "pascal",     1.0, out);
        testConstantValue(derivedUnits, "Pa",         1.0, out);
        testConstantValue(derivedUnits, "poiseuille", 1.0, out);
        testConstantValue(derivedUnits, "Po",         1.0, out);
        testConstantValue(derivedUnits, "siemens",    1.0, out);
        testConstantValue(derivedUnits, "S",          1.0, out);
        testConstantValue(derivedUnits, "sievert",    1.0, out);
        testConstantValue(derivedUnits, "Sv",         1.0, out);
        testConstantValue(derivedUnits, "tesla",      1.0, out);
        testConstantValue(derivedUnits, "T",          1.0, out);
        testConstantValue(derivedUnits, "volt",       1.0, out);
        testConstantValue(derivedUnits, "V",          1.0, out);
        testConstantValue(derivedUnits, "watt",       1.0, out);
        testConstantValue(derivedUnits, "W",          1.0, out);
        testConstantValue(derivedUnits, "weber",      1.0, out);
        testConstantValue(derivedUnits, "Wb",         1.0, out);

        testConstantValue(physicalConstants, "planck-constant",                    6.626070150000000E-34, out);
        testConstantValue(physicalConstants, "h",                                  6.626070150000000E-34, out);
        testConstantValue(physicalConstants, "speed-of-light",                     2.997924580000000E+08, out);
        testConstantValue(physicalConstants, "c",                                  2.997924580000000E+08, out);
        testConstantValue(physicalConstants, "elementary-charge",                  1.602176634000000E-19, out);
        testConstantValue(physicalConstants, "e",                                  1.602176634000000E-19, out);
        testConstantValue(physicalConstants, "boltzman-constant",                  1.380649000000000E-23, out);
        testConstantValue(physicalConstants, "k",                                  1.380649000000000E-23, out);
        testConstantValue(physicalConstants, "avogadro-constant",                  6.022140760000000E+23, out);
        testConstantValue(physicalConstants, "N",                                  6.022140760000000E+23, out);

        testConstantValue(physialDefinitions, "atm",                               1.013250000000000E+05, out);
        testConstantValue(physialDefinitions, "bar",                               1.000000000000000E+05, out);
        testConstantValue(physialDefinitions, "minute",                            6.000000000000000E+01, out);
        testConstantValue(physialDefinitions, "min",                               6.000000000000000E+01, out);
        testConstantValue(physialDefinitions, "hour",                              3.600000000000000E+03, out);
        testConstantValue(physialDefinitions, "hr",                                3.600000000000000E+03, out);
        testConstantValue(physialDefinitions, "day",                               8.640000000000000E+04, out);
        testConstantValue(physialDefinitions, "year(common)",                      3.153600000000000E+07, out);
        testConstantValue(physialDefinitions, "yr(common)",                        3.153600000000000E+07, out);
        testConstantValue(physialDefinitions, "year(Julian)",                      3.155760000000000E+07, out);
        testConstantValue(physialDefinitions, "yr(Julian)",                        3.155760000000000E+07, out);
        testConstantValue(physialDefinitions, "liter",                             1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "l",                                 1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "kg-water",                          1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "kgH2O",                             1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "ream",                              5.000000000000000E+02, out);
        testConstantValue(physialDefinitions, "ream(old)",                         4.800000000000000E+02, out);
        testConstantValue(physialDefinitions, "standard-gravity",                  9.806650000000000E+00, out);
        testConstantValue(physialDefinitions, "gN",                                9.806650000000000E+00, out);
        testConstantValue(physialDefinitions, "carat",                             2.000000000000000E-04, out);
        testConstantValue(physialDefinitions, "ct",                                2.000000000000000E-04, out);
        testConstantValue(physialDefinitions, "BTU(IT)",                           1.055055852620000E+03, out);
        testConstantValue(physialDefinitions, "Btu",                               1.055055852620000E+03, out);
        testConstantValue(physialDefinitions, "thermochemical-calorie",            4.184000000000000E+00, out);
        testConstantValue(physialDefinitions, "cal",                               4.184000000000000E+00, out);
        testConstantValue(physialDefinitions, "international-nautical-mile",       1.852000000000000E+03, out);
        testConstantValue(physialDefinitions, "ni",                                1.852000000000000E+03, out);
        testConstantValue(physialDefinitions, "international-steam-table-calorie", 4.186800000000000E+00, out);
        testConstantValue(physialDefinitions, "cal(IST)",                          4.186800000000000E+00, out);
        testConstantValue(physialDefinitions, "roentgen",                          2.580000000000000E-04, out);
        testConstantValue(physialDefinitions, "R",                                 2.580000000000000E-04, out);
        testConstantValue(physialDefinitions, "dozen",                             1.200000000000000E+01, out);
        testConstantValue(physialDefinitions, "doz",                               1.200000000000000E+01, out);
        testConstantValue(physialDefinitions, "millimeter",                        1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "mm",                                1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "centimeter",                        1.000000000000000E-02, out);
        testConstantValue(physialDefinitions, "cm",                                1.000000000000000E-02, out);
        testConstantValue(physialDefinitions, "hertz",                             1.000000000000000E+00, out);
        testConstantValue(physialDefinitions, "Hz",                                1.000000000000000E+00, out);
        testConstantValue(physialDefinitions, "dyne",                              1.000000000000000E-05, out);
        testConstantValue(physialDefinitions, "dyn",                               1.000000000000000E-05, out);
        testConstantValue(physialDefinitions, "decimeter",                         1.000000000000000E-01, out);
        testConstantValue(physialDefinitions, "dm",                                1.000000000000000E-01, out);
        testConstantValue(physialDefinitions, "gram",                              1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "g",                                 1.000000000000000E-03, out);
        testConstantValue(physialDefinitions, "carat(metric)",                     2.000000000000000E-04, out);
        testConstantValue(physialDefinitions, "ct(metric)",                        2.000000000000000E-04, out);
        testConstantValue(physialDefinitions, "angstrom",                          1.000000000000000E-10, out);
        testConstantValue(physialDefinitions, "A",                                 1.000000000000000E-10, out);
        testConstantValue(physialDefinitions, "nautical-mile",                     1.852000000000000E+03, out);
        testConstantValue(physialDefinitions, "nmi",                               1.852000000000000E+03, out);
        testConstantValue(physialDefinitions, "ream(perfect)",                     5.120000000000000E+02, out);
        testConstantValue(physialDefinitions, "astronomical-unit",                 1.495978707000000E+11, out);
        testConstantValue(physialDefinitions, "au",                                1.495978707000000E+11, out);
        testConstantValue(physialDefinitions, "earth-equatorial-radius-WGS-84",    6.378137000000000E+06, out);
        testConstantValue(physialDefinitions, "a",                                 6.378137000000000E+06, out);
        testConstantValue(physialDefinitions, "room-temperature",                  2.931500000000000E+02, out);
        testConstantValue(physialDefinitions, "T",                                 2.931500000000000E+02, out);
        testConstantValue(physialDefinitions, "curie",                             3.700000000000000E+10, out);
        testConstantValue(physialDefinitions, "Ci",                                3.700000000000000E+10, out);

        testConstantValue(physicalMeasurements, "permittivity-of-free-space",      8.854187812800000E-12, out);
        testConstantValue(physicalMeasurements, "eo",                              8.854187812800000E-12, out);
        testConstantValue(physicalMeasurements, "permeability-of-free-space",      1.256637062000000E-06, out);
        testConstantValue(physicalMeasurements, "mo",                              1.256637062000000E-06, out);
        testConstantValue(physicalMeasurements, "electron-mass",                   9.109383701500000E-31, out);
        testConstantValue(physicalMeasurements, "me",                              9.109383701500000E-31, out);
        testConstantValue(physicalMeasurements, "bohr-radius",                     5.291772109030000E-11, out);
        testConstantValue(physicalMeasurements, "ao",                              5.291772109030000E-11, out);
        testConstantValue(physicalMeasurements, "density-of-water(40C)",           9.998395000000000E+02, out);
        testConstantValue(physicalMeasurements, "pH2O(4oC)",                       9.998395000000000E+02, out);
        testConstantValue(physicalMeasurements, "density-of-water(600F)",          9.990141000000000E+02, out);
        testConstantValue(physicalMeasurements, "pH2O(4oF)",                       9.990141000000000E+02, out);
        testConstantValue(physicalMeasurements, "density-of-mercury(00C)",         1.359508000000000E+04, out);
        testConstantValue(physicalMeasurements, "pH2O(0oC)",                       1.359508000000000E+04, out);
        testConstantValue(physicalMeasurements, "density-of-mercury(600F)",        1.355679000000000E+04, out);
        testConstantValue(physicalMeasurements, "pH2O(60oF)",                      1.355679000000000E+04, out);
        testConstantValue(physicalMeasurements, "electron-radius",                 2.817940326200000E-15, out);
        testConstantValue(physicalMeasurements, "re",                              2.817940326200000E-15, out);
        testConstantValue(physicalMeasurements, "loschmidt's-number",              2.686777400000000E+25, out);
        testConstantValue(physicalMeasurements, "no",                              2.686777400000000E+25, out);
        testConstantValue(physicalMeasurements, "roentgen",                        2.580000000000000E-04, out);
        testConstantValue(physicalMeasurements, "Rt",                              2.580000000000000E-04, out);
        testConstantValue(physicalMeasurements, "dalton",                          1.660539066600000E-27, out);
        testConstantValue(physicalMeasurements, "Da",                              1.660539066600000E-27, out);
        testConstantValue(physicalMeasurements, "u",                               1.660539066600000E-27, out);
        testConstantValue(physicalMeasurements, "proton-mass",                     1.672621923690000E-27, out);
        testConstantValue(physicalMeasurements, "mp",                              1.672621923690000E-27, out);
        testConstantValue(physicalMeasurements, "solar-mass",                      1.988470000000000E+30, out);
        testConstantValue(physicalMeasurements, "MO",                              1.988470000000000E+30, out);
        testConstantValue(physicalMeasurements, "density-of-mercury(230C)",        1.353770000000000E+04, out);
        testConstantValue(physicalMeasurements, "pHg(23oC)",                       1.353770000000000E+04, out);
        testConstantValue(physicalMeasurements, "density-of-sea-water",            1.025000000000000E+03, out);
        testConstantValue(physicalMeasurements, "st",                              1.025000000000000E+03, out);
        testConstantValue(physicalMeasurements, "gas-constant-for-air",            2.860000000000000E+02, out);
        testConstantValue(physicalMeasurements, "R",                               2.860000000000000E+02, out);
        testConstantValue(physicalMeasurements, "ratio-of-specific-heat-for-air",  1.400000000000000E+00, out);
        testConstantValue(physicalMeasurements, "g",                               1.400000000000000E+00, out);
        testConstantValue(physicalMeasurements, "BTU(Mean)",                       1.055870000000000E+03, out);
        testConstantValue(physicalMeasurements, "calorie(15oC)",                   4.185500000000000E+00, out);
        testConstantValue(physicalMeasurements, "cal(15oC)",                       4.185500000000000E+00, out);
        testConstantValue(physicalMeasurements, "calorie(20oC)",                   4.190020000000000E+00, out);
        testConstantValue(physicalMeasurements, "cal(20oC)",                       4.190020000000000E+00, out);
        testConstantValue(physicalMeasurements, "calorie(4oC)",                    4.204500000000000E+00, out);
        testConstantValue(physicalMeasurements, "cal(4oC)",                        4.204500000000000E+00, out);
        testConstantValue(physicalMeasurements, "calorie(mean)",                   4.190020000000000E+00, out);
        testConstantValue(physicalMeasurements, "cal(mean)",                       4.190020000000000E+00, out);
        testConstantValue(physicalMeasurements, "density-of-mercury(40C)",         1.360000000000000E+04, out);
        testConstantValue(physicalMeasurements, "pHg(4oC)",                        1.360000000000000E+04, out);

        testConstantValue(si, "kilogram",  1.000000000000000E+00, out);
        testConstantValue(si, "kg",        1.000000000000000E+00, out);
        testConstantValue(si, "meter",     1.000000000000000E+00, out);
        testConstantValue(si, "m",         1.000000000000000E+00, out);
        testConstantValue(si, "second",    1.000000000000000E+00, out);
        testConstantValue(si, "s",         1.000000000000000E+00, out);
        testConstantValue(si, "kelvin",    1.000000000000000E+00, out);
        testConstantValue(si, "K",         1.000000000000000E+00, out);
        testConstantValue(si, "mole",      1.000000000000000E+00, out);
        testConstantValue(si, "mol",       1.000000000000000E+00, out);
        testConstantValue(si, "ampere",    1.000000000000000E+00, out);
        testConstantValue(si, "A",         1.000000000000000E+00, out);
        testConstantValue(si, "candela",   1.000000000000000E+00, out);
        testConstantValue(si, "cd",        1.000000000000000E+00, out);
        testConstantValue(si, "radian",    1.000000000000000E+00, out);
        testConstantValue(si, "rad",       1.000000000000000E+00, out);
        testConstantValue(si, "steradian", 1.000000000000000E+00, out);
        testConstantValue(si, "sr",        1.000000000000000E+00, out);
        testConstantValue(si, "unitless",  1.000000000000000E+00, out);
        testConstantValue(si, "ct",        1.000000000000000E+00, out);

        testConstantValue(WGS84Model, "equatorial-radius",    6.378137000000000E+06, out);
        testConstantValue(WGS84Model, "a",                    6.378137000000000E+06, out);
        testConstantValue(WGS84Model, "inverse-flattening",   2.982572235630000E+02, out);
        testConstantValue(WGS84Model, "if",                   2.982572235630000E+02, out);
        testConstantValue(WGS84Model, "flattening",           3.352810664747480E-03, out);
        testConstantValue(WGS84Model, "f",                    3.352810664747480E-03, out);
        testConstantValue(WGS84Model, "angular-velocity",     7.292110000000000E-05, out);
        testConstantValue(WGS84Model, "w",                    7.292110000000000E-05, out);
        testConstantValue(WGS84Model, "polar-radius",         6.356752314245180E+06, out);
        testConstantValue(WGS84Model, "b",                    6.356752314245180E+06, out);
        testConstantValue(WGS84Model, "eccentricity-squared", 6.694379990141330E-03, out);
        testConstantValue(WGS84Model, "e2",                   6.694379990141330E-03, out);
        testConstantValue(WGS84Model, "eccentricity",         8.181919084262160E-02, out);
        testConstantValue(WGS84Model, "e",                    8.181919084262160E-02, out);
        testConstantValue(WGS84Model, "equatorial-gravity",   9.780325335900000E+00, out);
        testConstantValue(WGS84Model, "ge",                   9.780325335900000E+00, out);
        testConstantValue(WGS84Model, "polar-gravity",        9.832184937800000E+00, out);
        testConstantValue(WGS84Model, "gp",                   9.832184937800000E+00, out);
        testConstantValue(WGS84Model, "gravity-constant",     1.931852646396040E-03, out);
        testConstantValue(WGS84Model, "cg",                   1.931852646396040E-03, out);



        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("SystemTestConstants", duration, out);
    }

    /*
     * Verify Constant value.
     * 
     * @param usb           - (input) ConstantGroup to test.
     * @param cname         - (input) constant name.
     * @param expectedValue - (input) expected value of constant.
     * @param out           - (input) stream to write results to.
     */
    private void testConstantValue(ConstantGroup cg, 
                                   String cname,
                                   double expectedValue,
                                   PrintStream out)
    {
         double value = cg.value(cname);
         boolean result = (value == expectedValue ? true : false);
         printResult(result, "SystemTestConstants - " + cg.name() + " - ",  
                     cname, ""+value, ""+expectedValue, out);
    }
}
// EOF
