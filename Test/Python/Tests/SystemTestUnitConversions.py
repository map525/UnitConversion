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
# File SystemTestUnitConversions.py
#
# System test for interface. 
# 
# Version 1.0
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import BaseSystem
from UnitConversion import SingleSystem
from UnitConversion import UnitConversions
from Tests import UnitConversionBaseTest

from datetime import datetime

class SystemTestUnitConversions(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # System test for UnitConversions class.
    
    Methods
    -------
    
    __init__   - constructor.
    
    runOut     - Run the tests output results to screen and file.
    
    testType   - Compute and write results of Converter test.
    
    testVolume - Compute and write results of Converter test for volume.    
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
        self.openFile("SystemTestUnitConversions.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("SystemTestUnitConversions", out)

        unitConversions =  UnitConversions.UnitConversions.Instance()

        self.testType(unitConversions.converter("Angle"),                     "Angle",                     "SI",         "radian",                       "INT",        "degree",                      out)
        self.testType(unitConversions.converter("SolidAngle"),                "SolidAngle",                "SI",         "steradian",                    "French",     "square-gon",                  out)
        self.testType(unitConversions.converter("AngularVelocity"),           "AngularVelocity",           "SI",         "rad/sec",                      "Scientific", "deg/sec",                     out)
        self.testType(unitConversions.converter("AngularAcceleration"),       "AngularAcceleration",       "SI",         "rad/sec2",                     "Scientific", "deg/sec2",                    out)

        self.testType(unitConversions.converter("Computer"),                  "Computer",                  "Computer",   "kilobyte",                     "Computer",   "nibble",                      out)
        self.testType(unitConversions.converter("Count"),                     "Count",                     "Roman",      "hecatomb",                     "Imperial",   "dozen",                       out)

        self.testType(unitConversions.converter("LinearDensity"),             "LinearDensity",             "SI",         "kg/m",                         "UK",         "ton-per-yard",                out)
        self.testType(unitConversions.converter("SurfaceDensity"),            "SurfaceDensity",            "SI",         "kg/m2",                        "Imperial",   "lb/yd2",                      out) 
        self.testType(unitConversions.converter("Density"),                   "Density",                   "Scientific", "g/mm3",                        "UK",         "oz/gal",                      out)

        self.testType(unitConversions.converter("Current"),                   "Current",                   "SI",         "ampere",                       "cgs",        "gilbert",                     out)
        self.testType(unitConversions.converter("Charge"),                    "Charge",                    "SI",         "coulomb",                      "cgs",        "abcoulomb",                   out)
        self.testType(unitConversions.converter("MagneticFieldStrength"),     "MagneticFieldStrength",     "SI",         "ampere-per-meter",             "cgs",        "oersted",                     out)
        self.testType(unitConversions.converter("Permeability"),              "Permeability",              "US",         "perm(0oC)",                    "US",         "perm(23oC)",                  out)
        self.testType(unitConversions.converter("MagneticDipoleMoment"),      "MagneticDipoleMoment",      "SI",         "ampere-square-meter",          "Scientific", "bohr-magneton",               out)
        self.testType(unitConversions.converter("CurrentDensity"),            "CurrentDensity",            "SI",         "ampere-per-square-meter",      "Imperial",   "microampere-per-square-yard", out)
        self.testType(unitConversions.converter("SurfaceChargeDensity"),      "SurfaceChargeDensity",      "SI",         "coulomb-per-square-meter",     "Scientific", "coulomb-per-square-yard",     out)
        self.testType(unitConversions.converter("ChargeDensity"),             "ChargeDensity",             "SI",         "coulomb-per-cubic-meter",      "Scientific", "coulomb-per-cubic-yard",      out)
        self.testType(unitConversions.converter("MagneticReluctance"),        "MagneticReluctance",        "SI",         "sturgeon",                     "Scientific", "farad-per-square-minute",     out)
        self.testType(unitConversions.converter("ElectricConductance"),       "ElectricConductance",       "SI",         "siemens",                      "cgs",        "statmho",                     out)
        self.testType(unitConversions.converter("ElectricElastance"),         "ElectricElastance",         "Scientific", "henry-per-square-second",      "Scientific", "henry-per-square-minute",     out)
        self.testType(unitConversions.converter("ElectricConductance"),       "ElectricConductance",       "SI",         "siemens",                      "cgs",        "abmho",                       out)
        self.testType(unitConversions.converter("Capacitance"),               "Capacitance",               "SI",         "farad",                        "cgs",        "statfarad",                   out)
        self.testType(unitConversions.converter("Conductivity"),              "Conductivity",              "Scientific", "reciprocal-ohm-per-meter",     "Scientific", "reciprocal-ohm-per-foot",     out)
        self.testType(unitConversions.converter("SpecificAcousticImpedance"), "SpecificAcousticImpedance", "cgs",        "rayl",                         "MKSA",       "rayl",                        out)
        self.testType(unitConversions.converter("MagneticInduction"),         "MagneticInduction",         "SI",         "weber",                        "Scientific", "debye",                       out)
        self.testType(unitConversions.converter("Inductance"),                "Inductance",                "SI",         "henry",                        "cgs",        "stathenry",                   out)
        self.testType(unitConversions.converter("Potential"),                 "Potential",                 "SI",         "volt",                         "cgs",        "statvolt",                    out)
        self.testType(unitConversions.converter("Resistance"),                "Resistance",                "SI",         "ohm",                          "cgs",        "statohm",                     out)
        self.testType(unitConversions.converter("Resistivity"),               "Resistivity",               "SI",         "ohm-meter",                    "Imperial",   "ohm-cmi/ft",                  out)
        self.testType(unitConversions.converter("AcousticImpedance"),         "AcousticImpedance",         "SI",         "acoustic-ohm",                 "cgs",        "acoustic-ohm",                out)
        self.testType(unitConversions.converter("ElectricFieldStrength"),     "ElectricFieldStrength",     "SI",         "volt-per-meter",               "Scientific", "volt-per-yard",               out)
        self.testType(unitConversions.converter("MagneticFluxDensity"),       "MagneticFluxDensity",       "SI",         "tesla",                        "SI",         "kiloctesla",                  out)
        self.testType(unitConversions.converter("ElectricFieldGradient"),     "ElectricFieldGradient",     "cgs",        "townsend",                     "a.u.",       "ao",                          out)
        self.testType(unitConversions.converter("MagneticPotential"),         "MagneticPotential",         "SI",         "weber-per-meter",              "Scientific", "weber-per-yard",              out)
        self.testType(unitConversions.converter("MagneticPermeability"),      "MagneticPermeability",      "SI",         "henry-per-meter",              "Scientific", "henry-per-yard",              out)

        self.testType(unitConversions.converter("Energy"),                    "Energy",                    "SI",         "joule",                        "Scientific", "kilowatt-hour",               out)
        self.testType(unitConversions.converter("HeatFlux"),                  "HeatFlux",                  "Imperial",   "Btu(IT)/hr-ft",                "US",         "gurley-unit",                 out)
        self.testType(unitConversions.converter("ThermalConductance"),        "ThermalConductance",        "SI",         "thermal-ampere",               "SI",         "watt-per-per-kelvin",         out)
        self.testType(unitConversions.converter("HeatTransfer"),              "HeatTransfer",              "Imperial",   "Btu(IT)/hr-ft2-oF",            "Imperial",   "USI",                         out)
        self.testType(unitConversions.converter("ThermalConductivity"),       "ThermalConductivity",       "Imperial",   "Btu(IT)-in/hr-ft2-oF",         "cgs",        "fourier",                     out)
        self.testType(unitConversions.converter("RadiantEnergy"),             "RadiantEnergy",             "cgs",        "dyne-per-centimeter",          "SI",         "joule-per-square-meter",      out)
        self.testType(unitConversions.converter("Entropy"),                   "Entropy",                   "SI",         "joule-per-kelvin",             "Scientific", "carnot",                      out)
        self.testType(unitConversions.converter("MolarEntropy"),              "MolarEntropy",              "SI",         "joule-per-mole-per-kelvin",    "Scientific", "entropy-unit",                out)
        self.testType(unitConversions.converter("HeatInsulation"),            "HeatInsulation",            "Imperial",   "R-value",                      "UK",         "tog",                         out) 
        self.testType(unitConversions.converter("EnergyConsumption"),         "EnergyConsumption",         "cgs",        "brewster",                     "US",         "EF",                          out)
        self.testType(unitConversions.converter("SpecificHeatCapacity"),      "SpecificHeatCapacity",      "Scientific", "mayer",                        "UK",         "Btu(IT)/lb-oF",               out)
        self.testType(unitConversions.converter("SpecificHeat"),              "SpecificHeat",              "Scientific", "cal(IT)/kg",                   "Scientific", "cal/g",                       out)

        self.testType(unitConversions.converter("Flow"),                      "Flow",                      "SI",         "cubic-meter-per-hour",         "Imperial",   "cubic-foot-per-minute",       out)

        self.testType(unitConversions.converter("Force"),                     "Force",                     "SI",         "newton",                       "FPS",        "poundal",                     out)
        self.testType(unitConversions.converter("Momentum"),                  "Momentum",                  "SI",         "newton-second",                "cgs",        "bole",                        out)
        self.testType(unitConversions.converter("Action"),                    "Action",                    "SI",         "joule-second",                 "a.u.",       "aua",                         out)
        self.testType(unitConversions.converter("MassFlow"),                  "MassFlow",                  "SI",         "newton-per-meter",             "Scientific", "sumner-unit",                 out)
        self.testType(unitConversions.converter("QuadMoment"),                "QuadMoment",                "SI",         "bisquare-meter",               "Imperial",   "bisquare-inch",               out)

        self.testType(unitConversions.converter("Frequency"),                 "Frequency",                 "SI",         "kilohertz",                    "Imperial",   "fit",                         out)

        self.testType(unitConversions.converter("LuminousIntensity"),         "LuminousIntensity",         "SI",         "candela",                      "INT",        "candle",                      out)
        self.testType(unitConversions.converter("LuminousFlux"),              "LuminousFlux",              "SI",         "lumen",                        "Imperial",   "candlepower(spherical)",      out)
        self.testType(unitConversions.converter("Luminance"),                 "Luminance",                 "Scientific", "luxon",                        "US",         "foot-lambert",                out)
        self.testType(unitConversions.converter("Illuminance"),               "Illuminance",               "SI",         "lux",                          "German",     "nox",                         out)
        self.testType(unitConversions.converter("RadiantIntensity"),          "RadiantIntensity",          "SI",         "milliwatt-per-steradian",      "cgs",        "lumberg",                     out)

        self.testType(unitConversions.converter("Molarity"),                  "Molarity",                  "Scientific", "amagat(atm)",                  "INT",        "chlorometric-degree",         out)
        self.testType(unitConversions.converter("SurfaceMolarity"),           "SurfaceMolarity",           "Scientific", "gibbs",                        "Scientific", "mole/ft2",                    out)
        self.testType(unitConversions.converter("MolarDensity"),              "MolarDensity",              "Scientific", "amagat(bar)",                  "Scientific", "ft3/mol",                     out)
        self.testType(unitConversions.converter("MolarAbsorption"),           "MolarAbsorption",           "SI",         "m2/mol",                       "Scientific", "yd2/mol",                     out)
        self.testType(unitConversions.converter("RadiochemicalYield"),        "RadiochemicalYield",        "INT",        "G-vaIue(old)",                 "SI",         "G-value",                     out)
        self.testType(unitConversions.converter("Quantity"),                  "Quantity",                  "SI",         "mole",                         "Imperial",   "pound-mole",                  out)
        self.testType(unitConversions.converter("EnzymaticActivity"),         "EnzymaticActivity",         "SI",         "katal",                        "Scientific", "UI",                          out)
        self.testType(unitConversions.converter("MolarCharge"),               "MolarCharge",               "Scientific", "faraday(chemical)",            "Scientific", "faraday(physical)",           out)

        self.testType(unitConversions.converter("Power"),                     "Power",                     "SI",         "watt",                         "Scientific", "horsepower",                  out)
        self.testType(unitConversions.converter("Pressure"),                  "Pressure",                  "SI",         "pascal",                       "INT",        "atmosphere",                  out)

        self.testType(unitConversions.converter("ParticleFlux"),              "ParticleFlux",              "Scientific", "rayleigh",                     "Scientific", "particle-flux-unit",          out)
        self.testType(unitConversions.converter("SpecificEnergy"),            "SpecificEnergy",            "SI",         "gray",                         "INT",        "cal(IT)/g",                   out)
        self.testType(unitConversions.converter("RadioactiveConcentration"),  "RadioactiveConcentration",  "SI",         "Bq/m3",                        "Scientific", "curie-per-liter",             out)
        self.testType(unitConversions.converter("ExposureRate"),              "ExposureRate",              "German",     "R-unit(German)",               "Scientific", "E-unit",                      out)
        self.testType(unitConversions.converter("SpecificRadioactivity"),     "SpecificRadioactivity",     "SI",         "Bq/kg",                        "Scientific", "strontium-unit",              out)
        self.testType(unitConversions.converter("Exposure"),                  "Exposure",                  "Scientific", "e-unit",                       "INT",        "sievert-unit",                out)

        self.testType(unitConversions.converter("SpecificLength"),            "SpecificLength",            "Imperial",   "linen",                        "Imperial",   "worsted",                     out)
        self.testType(unitConversions.converter("SpecificVolume"),            "SpecificVolume",            "SI",         "m3/kg",                        "FPS",        "ft3/lb",                      out)

        self.testType(unitConversions.converter("Temperature"),               "Temperature",               "SI",         "kelvin",                       "French",     "reaumur",                     out)
        self.testType(unitConversions.converter("Time"),                      "Time",                      "SI",         "second",                       "Time",       "minute",                      out)

        self.testType(unitConversions.converter("Velocity"),                  "Velocity",                  "SI",         "meter-per-second",             "Imperial",   "foot-per-second",             out)
        self.testType(unitConversions.converter("Acceleration"),              "Acceleration",              "SI",         "meter-per-square-second",      "Imperial",   "foot-per-square-second",      out)
        self.testType(unitConversions.converter("Jerk"),                      "Jerk",                      "SI",         "jolt",                         "Imperial",   "jerk",                        out)

        self.testType(unitConversions.converter("KinematicViscosity"),        "KinematicViscosity",        "SI",         "square-centimeter-per-second", "Imperial",   "square-inch-per-second",      out)
        self.testType(unitConversions.converter("DynamicViscosity"),          "DynamicViscosity",          "SI",         "poiseuille",                   "FPS",        "reynolds",                    out)

        self.testType(unitConversions.converter("Wavenumber"),                "Wavenumber",                "SI",         "dioptre",                      "Imperial",   "gauge",                       out)

        self.testType(unitConversions.converter("Length"),                    "Length",                    "Venezuelan", "cuarta",                       "Hungarian",  "marok",                       out)
        self.testType(unitConversions.converter("Area"),                      "Area",                      "Annamese",   "khau",                         "Dutch",      "voet",                        out)
        self.testType(unitConversions.converter("Mass"),                      "Mass",                      "Egyptian",   "talent",                       "US",         "pound",                       out)
        self.testType(unitConversions.converter("Liquid"),                    "Liquid",                    "Tunisian",   "cafisso",                      "UK",         "ounce",                       out)
        self.testType(unitConversions.converter("Dry"),                       "Dry",                       "Swiss",      "emine",                        "Hebrew",     "gomor",                       out)

        self.testVolume(unitConversions, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("SystemTestUnitConversions", diff, out)


    def testVolume(self, unitConversions, out):
        """
        Compute and write results of Converter test for volume.
        
        Parameters
        ----------
        unitConversions - (input, UnitConversions) conversion to extract volume 
                                  for testing.
        out             - (input, TextIOWrapper) stream to write results to.
        """
        liq = unitConversions.converter("Liquid").unit("US", "fluid-ounce")
        dry = unitConversions.converter("Dry").unit("UK", "cubic-inch")

        ans1 = unitConversions.converter("Volume").addUnit("US", "fluid-ounce", liq)
        ans2 = unitConversions.converter("Volume").addUnit("UK", "cubic-inch", dry)
        self.testType(unitConversions.converter("Volume"), "Volume",      "US", 
                                                      "fluid-ounce", "UK", 
                                                      "cubic-inch", out) 

        unitConversions.converter("Volume").fromType("Dry")
        unitConversions.converter("Volume").toType("Liquid")
        self.testType(unitConversions.converter("Volume"), "Volume",     "UK", 
                                                      "cubic-inch", "US", 
                                                      "fluid-ounce", out) 

        ans3 = unitConversions.converter("Volume").removeUnit("US", "fluid-ounce")
        ans4 = unitConversions.converter("Volume").removeUnit("UK", "cubic-inch")
        unitConversions.converter("Volume").fromType("Liquid")
        unitConversions.converter("Volume").toType("Dry")

    def testType(self, con, label, fromSystem, fromUnit, toSystem, toUnit, out):
        """
        Compute and write results of Converter test.
        
        Parameters
        ----------
        con        - (input, Converter) Converter to test.
        label      - (input, string) label to identify output results.
        fromSystem - (input, string) name of 'from' system.
        fromUnit   - (input, string) name of 'from' unit.
        toSystem   - (input, string) name of 'to' system.
        toUnit     - (input, string) name of 'to' unit.
        out        - (input, TextIOWrapper) stream to write results to.
       
        """
        uFrom = con.unit(fromSystem, fromUnit)
        uTo = con.unit(toSystem, toUnit)
        delta = uFrom.offset() - uTo.offset()
        fromValue = uFrom.value()
        toValue = uTo.value()
        result = (fromValue + delta) / toValue

        saveFromSystem = con.fromSystem()
        saveToSystem = con.toSystem()

        con.toSystem(toSystem)
        con.fromSystem(fromSystem)

        fullNameFrom = con.fullUnitName(fromSystem, fromUnit)
        fullNameTo   = con.fullUnitName(toSystem, toUnit)
        fromSysName = self.choose(fullNameFrom == fromUnit, fromSystem, "") 
        toSysName   = self.choose(fullNameTo == toUnit, toSystem, "")

        x0 = 1.0
        x1 = con.convert(x0, fromUnit, toUnit)
        x2 = con.convert(x0, fullNameFrom,fullNameTo, True)
        x3 = con.convert(x0, fromUnit,fromSystem,toUnit, toSystem)
        con.fromSystem(saveFromSystem)
        con.toSystem(saveToSystem)

        self.printResult(x1 == result, "SystemTestUnitConversions " + label, "convert",
                         str(x0) + " " + fromSysName + " " + fullNameFrom + " = " + str(x1)     + " " + toSysName + " "+ fullNameTo, 
                         str(x0) + " " + fromSysName + " " + fullNameFrom + " = " + str(result) + " " + toSysName + " "+ fullNameTo, 
                         out)

        self.printResult(x2 == result, "SystemTestUnitConversions " + label, "convert",
                         str(x0) + " " + fromSysName + " " + fullNameFrom + " = " + str(x2)     + " " + toSysName + " "+ fullNameTo, 
                         str(x0) + " " + fromSysName + " " + fullNameFrom + " = " + str(result) + " " + toSysName + " "+ fullNameTo, 
                         out)

        self.printResult(x3 == result, "SystemTestUnitConversions " + label, "convert",
                         str(x0) + " " + fromSysName + " " + fullNameFrom + " = " + str(x3)     + " " + toSysName + " "+ fullNameTo, 
                         str(x0) + " " + fromSysName + " " + fullNameFrom + " = " + str(result) + " " + toSysName + " "+ fullNameTo, 
                         out)

# EOF
