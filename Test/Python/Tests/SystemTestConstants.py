#################################################################################
#12345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
#################################################################################
#
# This program is free software you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File SystemTestUnitConstants.py
#
# System test for interface. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import SingleSystem
from UnitConversion import Constants
from Tests import UnitConversionBaseTest

from datetime import datetime

class SystemTestConstants(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # System test for Constants class.
    
    Methods
    -------
    
    __init__          - constructor.
    
    runOut            - Run the tests output results to screen and file.
    
    testConstantValue - Verify Constant value.
    """

    def __init__(self, brief, path):
        """
        Constructor
    
        Parameters
        ----------
        brief - (input, boolean) print brief test results.
        path  - (input, string) the path to the output folder where the
                                test results are written.
        """
        super().__init__(brief, path)
        self.openFile("SystemTestConstants.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("SystemTestConstants", out)

        constants =  Constants.Constants.Instance()

        names = constants.names()
        expected = ["DerivedUnits", "PhysicalConstants", \
                    "PhysialDefinitions", "PhysicalMeasurements", \
                    "SI", "WGS84Model", "Invalid"]
                    
        r0 = self.compareList(names, expected)           
        self.printResult(r0, "SystemTestConstants", "names", 
                         self.listToString(names), 
                         self.listToString(expected),  out);



        derivedUnits = constants.constant("DerivedUnits")
        physicalConstants = constants.constant("PhysicalConstants")
        physialDefinitions = constants.constant("PhysialDefinitions")
        physicalMeasurements = constants.constant("PhysicalMeasurements")
        si = constants.constant("SI")
        WGS84Model = constants.constant("WGS84Model")

        self.testConstantValue(derivedUnits, "becquerel",  1.0, out)
        self.testConstantValue(derivedUnits, "Bq",         1.0, out)
        self.testConstantValue(derivedUnits, "coulomb",    1.0, out)
        self.testConstantValue(derivedUnits, "C",          1.0, out)
        self.testConstantValue(derivedUnits, "farad",      1.0, out)
        self.testConstantValue(derivedUnits, "F",          1.0, out)
        self.testConstantValue(derivedUnits, "gray",       1.0, out)
        self.testConstantValue(derivedUnits, "Gy",         1.0, out)
        self.testConstantValue(derivedUnits, "henry",      1.0, out)
        self.testConstantValue(derivedUnits, "H",          1.0, out)
        self.testConstantValue(derivedUnits, "hertz",      1.0, out)
        self.testConstantValue(derivedUnits, "Hz",         1.0, out)
        self.testConstantValue(derivedUnits, "joule",      1.0, out)
        self.testConstantValue(derivedUnits, "J",          1.0, out)
        self.testConstantValue(derivedUnits, "katal",      1.0, out)
        self.testConstantValue(derivedUnits, "kt",         1.0, out)
        self.testConstantValue(derivedUnits, "lumen",      1.0, out)
        self.testConstantValue(derivedUnits, "lm",         1.0, out)
        self.testConstantValue(derivedUnits, "lux",        1.0, out)
        self.testConstantValue(derivedUnits, "lx",         1.0, out)
        self.testConstantValue(derivedUnits, "newton",     1.0, out)
        self.testConstantValue(derivedUnits, "N",          1.0, out)
        self.testConstantValue(derivedUnits, "ohm",        1.0, out)
        self.testConstantValue(derivedUnits, "w",          1.0, out)
        self.testConstantValue(derivedUnits, "pascal",     1.0, out)
        self.testConstantValue(derivedUnits, "Pa",         1.0, out)
        self.testConstantValue(derivedUnits, "poiseuille", 1.0, out)
        self.testConstantValue(derivedUnits, "Po",         1.0, out)
        self.testConstantValue(derivedUnits, "siemens",    1.0, out)
        self.testConstantValue(derivedUnits, "S",          1.0, out)
        self.testConstantValue(derivedUnits, "sievert",    1.0, out)
        self.testConstantValue(derivedUnits, "Sv",         1.0, out)
        self.testConstantValue(derivedUnits, "tesla",      1.0, out)
        self.testConstantValue(derivedUnits, "T",          1.0, out)
        self.testConstantValue(derivedUnits, "volt",       1.0, out)
        self.testConstantValue(derivedUnits, "V",          1.0, out)
        self.testConstantValue(derivedUnits, "watt",       1.0, out)
        self.testConstantValue(derivedUnits, "W",          1.0, out)
        self.testConstantValue(derivedUnits, "weber",      1.0, out)
        self.testConstantValue(derivedUnits, "Wb",         1.0, out)

        self.testConstantValue(physicalConstants, "planck-constant",   6.626070150000000E-34, out)
        self.testConstantValue(physicalConstants, "h",                 6.626070150000000E-34, out)
        self.testConstantValue(physicalConstants, "speed-of-light",    2.997924580000000E+08, out)
        self.testConstantValue(physicalConstants, "c",                 2.997924580000000E+08, out)
        self.testConstantValue(physicalConstants, "elementary-charge", 1.602176634000000E-19, out)
        self.testConstantValue(physicalConstants, "e",                 1.602176634000000E-19, out)
        self.testConstantValue(physicalConstants, "boltzman-constant", 1.380649000000000E-23, out)
        self.testConstantValue(physicalConstants, "k",                 1.380649000000000E-23, out)
        self.testConstantValue(physicalConstants, "avogadro-constant", 6.022140760000000E+23, out)
        self.testConstantValue(physicalConstants, "N",                 6.022140760000000E+23, out)

        self.testConstantValue(physialDefinitions, "atm",                               1.013250000000000E+05, out)
        self.testConstantValue(physialDefinitions, "bar",                               1.000000000000000E+05, out)
        self.testConstantValue(physialDefinitions, "minute",                            6.000000000000000E+01, out)
        self.testConstantValue(physialDefinitions, "min",                               6.000000000000000E+01, out)
        self.testConstantValue(physialDefinitions, "hour",                              3.600000000000000E+03, out)
        self.testConstantValue(physialDefinitions, "hr",                                3.600000000000000E+03, out)
        self.testConstantValue(physialDefinitions, "day",                               8.640000000000000E+04, out)
        self.testConstantValue(physialDefinitions, "year(common)",                      3.153600000000000E+07, out)
        self.testConstantValue(physialDefinitions, "yr(common)",                        3.153600000000000E+07, out)
        self.testConstantValue(physialDefinitions, "year(Julian)",                      3.155760000000000E+07, out)
        self.testConstantValue(physialDefinitions, "yr(Julian)",                        3.155760000000000E+07, out)
        self.testConstantValue(physialDefinitions, "liter",                             1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "l",                                 1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "kg-water",                          1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "kgH2O",                             1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "ream",                              5.000000000000000E+02, out)
        self.testConstantValue(physialDefinitions, "ream(old)",                         4.800000000000000E+02, out)
        self.testConstantValue(physialDefinitions, "standard-gravity",                  9.806650000000000E+00, out)
        self.testConstantValue(physialDefinitions, "gN",                                9.806650000000000E+00, out)
        self.testConstantValue(physialDefinitions, "carat",                             2.000000000000000E-04, out)
        self.testConstantValue(physialDefinitions, "ct",                                2.000000000000000E-04, out)
        self.testConstantValue(physialDefinitions, "BTU(IT)",                           1.055055852620000E+03, out)
        self.testConstantValue(physialDefinitions, "Btu",                               1.055055852620000E+03, out)
        self.testConstantValue(physialDefinitions, "thermochemical-calorie",            4.184000000000000E+00, out)
        self.testConstantValue(physialDefinitions, "cal",                               4.184000000000000E+00, out)
        self.testConstantValue(physialDefinitions, "international-nautical-mile",       1.852000000000000E+03, out)
        self.testConstantValue(physialDefinitions, "ni",                                1.852000000000000E+03, out)
        self.testConstantValue(physialDefinitions, "international-steam-table-calorie", 4.186800000000000E+00, out)
        self.testConstantValue(physialDefinitions, "cal(IST)",                          4.186800000000000E+00, out)
        self.testConstantValue(physialDefinitions, "roentgen",                          2.580000000000000E-04, out)
        self.testConstantValue(physialDefinitions, "R",                                 2.580000000000000E-04, out)
        self.testConstantValue(physialDefinitions, "dozen",                             1.200000000000000E+01, out)
        self.testConstantValue(physialDefinitions, "doz",                               1.200000000000000E+01, out)
        self.testConstantValue(physialDefinitions, "millimeter",                        1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "mm",                                1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "centimeter",                        1.000000000000000E-02, out)
        self.testConstantValue(physialDefinitions, "cm",                                1.000000000000000E-02, out)
        self.testConstantValue(physialDefinitions, "hertz",                             1.000000000000000E+00, out)
        self.testConstantValue(physialDefinitions, "Hz",                                1.000000000000000E+00, out)
        self.testConstantValue(physialDefinitions, "dyne",                              1.000000000000000E-05, out)
        self.testConstantValue(physialDefinitions, "dyn",                               1.000000000000000E-05, out)
        self.testConstantValue(physialDefinitions, "decimeter",                         1.000000000000000E-01, out)
        self.testConstantValue(physialDefinitions, "dm",                                1.000000000000000E-01, out)
        self.testConstantValue(physialDefinitions, "gram",                              1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "g",                                 1.000000000000000E-03, out)
        self.testConstantValue(physialDefinitions, "carat(metric)",                     2.000000000000000E-04, out)
        self.testConstantValue(physialDefinitions, "ct(metric)",                        2.000000000000000E-04, out)
        self.testConstantValue(physialDefinitions, "angstrom",                          1.000000000000000E-10, out)
        self.testConstantValue(physialDefinitions, "A",                                 1.000000000000000E-10, out)
        self.testConstantValue(physialDefinitions, "nautical-mile",                     1.852000000000000E+03, out)
        self.testConstantValue(physialDefinitions, "nmi",                               1.852000000000000E+03, out)
        self.testConstantValue(physialDefinitions, "ream(perfect)",                     5.120000000000000E+02, out)
        self.testConstantValue(physialDefinitions, "astronomical-unit",                 1.495978707000000E+11, out)
        self.testConstantValue(physialDefinitions, "au",                                1.495978707000000E+11, out)
        self.testConstantValue(physialDefinitions, "earth-equatorial-radius-WGS-84",    6.378137000000000E+06, out)
        self.testConstantValue(physialDefinitions, "a",                                 6.378137000000000E+06, out)
        self.testConstantValue(physialDefinitions, "room-temperature",                  2.931500000000000E+02, out)
        self.testConstantValue(physialDefinitions, "T",                                 2.931500000000000E+02, out)
        self.testConstantValue(physialDefinitions, "curie",                             3.700000000000000E+10, out)
        self.testConstantValue(physialDefinitions, "Ci",                                3.700000000000000E+10, out)

        self.testConstantValue(physicalMeasurements, "permittivity-of-free-space",      8.854187812800000E-12, out)
        self.testConstantValue(physicalMeasurements, "eo",                              8.854187812800000E-12, out)
        self.testConstantValue(physicalMeasurements, "permeability-of-free-space",      1.256637062000000E-06, out)
        self.testConstantValue(physicalMeasurements, "mo",                              1.256637062000000E-06, out)
        self.testConstantValue(physicalMeasurements, "electron-mass",                   9.109383701500000E-31, out)
        self.testConstantValue(physicalMeasurements, "me",                              9.109383701500000E-31, out)
        self.testConstantValue(physicalMeasurements, "bohr-radius",                     5.291772109030000E-11, out)
        self.testConstantValue(physicalMeasurements, "ao",                              5.291772109030000E-11, out)
        self.testConstantValue(physicalMeasurements, "density-of-water(40C)",           9.998395000000000E+02, out)
        self.testConstantValue(physicalMeasurements, "pH2O(4oC)",                       9.998395000000000E+02, out)
        self.testConstantValue(physicalMeasurements, "density-of-water(600F)",          9.990141000000000E+02, out)
        self.testConstantValue(physicalMeasurements, "pH2O(4oF)",                       9.990141000000000E+02, out)
        self.testConstantValue(physicalMeasurements, "density-of-mercury(00C)",         1.359508000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "pH2O(0oC)",                       1.359508000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "density-of-mercury(600F)",        1.355679000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "pH2O(60oF)",                      1.355679000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "electron-radius",                 2.817940326200000E-15, out)
        self.testConstantValue(physicalMeasurements, "re",                              2.817940326200000E-15, out)
        self.testConstantValue(physicalMeasurements, "loschmidt's-number",              2.686777400000000E+25, out)
        self.testConstantValue(physicalMeasurements, "no",                              2.686777400000000E+25, out)
        self.testConstantValue(physicalMeasurements, "roentgen",                        2.580000000000000E-04, out)
        self.testConstantValue(physicalMeasurements, "Rt",                              2.580000000000000E-04, out)
        self.testConstantValue(physicalMeasurements, "dalton",                          1.660539066600000E-27, out)
        self.testConstantValue(physicalMeasurements, "Da",                              1.660539066600000E-27, out)
        self.testConstantValue(physicalMeasurements, "u",                               1.660539066600000E-27, out)
        self.testConstantValue(physicalMeasurements, "proton-mass",                     1.672621923690000E-27, out)
        self.testConstantValue(physicalMeasurements, "mp",                              1.672621923690000E-27, out)
        self.testConstantValue(physicalMeasurements, "solar-mass",                      1.988470000000000E+30, out)
        self.testConstantValue(physicalMeasurements, "MO",                              1.988470000000000E+30, out)
        self.testConstantValue(physicalMeasurements, "density-of-mercury(230C)",        1.353770000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "pHg(23oC)",                       1.353770000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "density-of-sea-water",            1.025000000000000E+03, out)
        self.testConstantValue(physicalMeasurements, "st",                              1.025000000000000E+03, out)
        self.testConstantValue(physicalMeasurements, "gas-constant-for-air",            2.860000000000000E+02, out)
        self.testConstantValue(physicalMeasurements, "R",                               2.860000000000000E+02, out)
        self.testConstantValue(physicalMeasurements, "ratio-of-specific-heat-for-air",  1.400000000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "g",                               1.400000000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "BTU(Mean)",                       1.055870000000000E+03, out)
        self.testConstantValue(physicalMeasurements, "calorie(15oC)",                   4.185500000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "cal(15oC)",                       4.185500000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "calorie(20oC)",                   4.190020000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "cal(20oC)",                       4.190020000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "calorie(4oC)",                    4.204500000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "cal(4oC)",                        4.204500000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "calorie(mean)",                   4.190020000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "cal(mean)",                       4.190020000000000E+00, out)
        self.testConstantValue(physicalMeasurements, "density-of-mercury(40C)",         1.360000000000000E+04, out)
        self.testConstantValue(physicalMeasurements, "pHg(4oC)",                        1.360000000000000E+04, out)

        self.testConstantValue(si, "kilogram",  1.000000000000000E+00, out)
        self.testConstantValue(si, "kg",        1.000000000000000E+00, out)
        self.testConstantValue(si, "meter",     1.000000000000000E+00, out)
        self.testConstantValue(si, "m",         1.000000000000000E+00, out)
        self.testConstantValue(si, "second",    1.000000000000000E+00, out)
        self.testConstantValue(si, "s",         1.000000000000000E+00, out)
        self.testConstantValue(si, "kelvin",    1.000000000000000E+00, out)
        self.testConstantValue(si, "K",         1.000000000000000E+00, out)
        self.testConstantValue(si, "mole",      1.000000000000000E+00, out)
        self.testConstantValue(si, "mol",       1.000000000000000E+00, out)
        self.testConstantValue(si, "ampere",    1.000000000000000E+00, out)
        self.testConstantValue(si, "A",         1.000000000000000E+00, out)
        self.testConstantValue(si, "candela",   1.000000000000000E+00, out)
        self.testConstantValue(si, "cd",        1.000000000000000E+00, out)
        self.testConstantValue(si, "radian",    1.000000000000000E+00, out)
        self.testConstantValue(si, "rad",       1.000000000000000E+00, out)
        self.testConstantValue(si, "steradian", 1.000000000000000E+00, out)
        self.testConstantValue(si, "sr",        1.000000000000000E+00, out)
        self.testConstantValue(si, "unitless",  1.000000000000000E+00, out)
        self.testConstantValue(si, "ct",        1.000000000000000E+00, out)

        self.testConstantValue(WGS84Model, "equatorial-radius",    6.378137000000000E+06, out)
        self.testConstantValue(WGS84Model, "a",                    6.378137000000000E+06, out)
        self.testConstantValue(WGS84Model, "inverse-flattening",   2.982572235630000E+02, out)
        self.testConstantValue(WGS84Model, "if",                   2.982572235630000E+02, out)
        self.testConstantValue(WGS84Model, "flattening",           3.352810664747480E-03, out)
        self.testConstantValue(WGS84Model, "f",                    3.352810664747480E-03, out)
        self.testConstantValue(WGS84Model, "angular-velocity",     7.292110000000000E-05, out)
        self.testConstantValue(WGS84Model, "w",                    7.292110000000000E-05, out)
        self.testConstantValue(WGS84Model, "polar-radius",         6.356752314245180E+06, out)
        self.testConstantValue(WGS84Model, "b",                    6.356752314245180E+06, out)
        self.testConstantValue(WGS84Model, "eccentricity-squared", 6.694379990141330E-03, out)
        self.testConstantValue(WGS84Model, "e2",                   6.694379990141330E-03, out)
        self.testConstantValue(WGS84Model, "eccentricity",         8.181919084262160E-02, out)
        self.testConstantValue(WGS84Model, "e",                    8.181919084262160E-02, out)
        self.testConstantValue(WGS84Model, "equatorial-gravity",   9.780325335900000E+00, out)
        self.testConstantValue(WGS84Model, "ge",                   9.780325335900000E+00, out)
        self.testConstantValue(WGS84Model, "polar-gravity",        9.832184937800000E+00, out)
        self.testConstantValue(WGS84Model, "gp",                   9.832184937800000E+00, out)
        self.testConstantValue(WGS84Model, "gravity-constant",     1.931852646396040E-03, out)
        self.testConstantValue(WGS84Model, "cg",                   1.931852646396040E-03, out)



        end = datetime.now()
        diff = end - start
        self.printFooter("SystemTestConstants", diff, out)

    def testConstantValue(self, cg, cname, expectedValue, out):
        """
        Verify Constant value.
        
        Parameters
        ----------
        usb           - (input, ConstantGroup) ConstantGroup to test.
        cname         - (input, string) constant name.
        expectedValue - (input, double) expected value of constant.
        out           - (input, TextIOWrapper) stream to write results to.
        """

        value = cg.value(cname)
        result = self.choose(value == expectedValue, True, False)
        self.printResult(result, "SystemTestConstants - " + cg.name() + " - ", cname, 
                         str(value), str(expectedValue), out)
# EOF
