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
// File SystemTestUnitConversions.java
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

public class SystemTestUnitConversions extends UnitConversionBaseTest
{
   /* 
    * Constructor
    *
    * @param brief - (input) brief test ouput.
    * @param path  - (input) the path to the output folder where the
    *                        test results are written.
    */
    public SystemTestUnitConversions(boolean brief, String path)
    {
        super(brief, path);
        openFile("SystemTestUnitConversions.txt");
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
        printHeader("SystemTestUnitConversions", out);

        UnitConversions unitConversions =  UnitConversions.Instance();

        testType(unitConversions.converter("Angle"),                     "Angle",                     "SI",         "radian",                       "INT",        "degree",                      out);
        testType(unitConversions.converter("SolidAngle"),                "SolidAngle",                "SI",         "steradian",                    "French",     "square-gon",                  out);
        testType(unitConversions.converter("AngularVelocity"),           "AngularVelocity",           "SI",         "rad/sec",                      "Scientific", "deg/sec",                     out);
        testType(unitConversions.converter("AngularAcceleration"),       "AngularAcceleration",       "SI",         "rad/sec2",                     "Scientific", "deg/sec2",                    out);

        testType(unitConversions.converter("Computer"),                  "Computer",                  "Computer",   "kilobyte",                     "Computer",   "nibble",                      out);
        testType(unitConversions.converter("Count"),                     "Count",                     "Roman",      "hecatomb",                     "Imperial",   "dozen",                       out);

        testType(unitConversions.converter("LinearDensity"),             "LinearDensity",             "SI",         "kg/m",                         "UK",         "ton-per-yard",                out);
        testType(unitConversions.converter("SurfaceDensity"),            "SurfaceDensity",            "SI",         "kg/m2",                        "Imperial",   "lb/yd2",                      out);
        testType(unitConversions.converter("Density"),                   "Density",                   "Scientific", "g/mm3",                        "UK",         "oz/gal",                      out);

        testType(unitConversions.converter("Current"),                   "Current",                   "SI",         "ampere",                       "cgs",        "gilbert",                     out);
        testType(unitConversions.converter("Charge"),                    "Charge",                    "SI",         "coulomb",                      "cgs",        "abcoulomb",                   out);
        testType(unitConversions.converter("MagneticFieldStrength"),     "MagneticFieldStrength",     "SI",         "ampere-per-meter",             "cgs",        "oersted",                     out);
        testType(unitConversions.converter("Permeability"),              "Permeability",              "US",         "perm(0oC)",                    "US",         "perm(23oC)",                  out);
        testType(unitConversions.converter("MagneticDipoleMoment"),      "MagneticDipoleMoment",      "SI",         "ampere-square-meter",          "Scientific", "bohr-magneton",               out);
        testType(unitConversions.converter("CurrentDensity"),            "CurrentDensity",            "SI",         "ampere-per-square-meter",      "Imperial",   "microampere-per-square-yard", out);
        testType(unitConversions.converter("SurfaceChargeDensity"),      "SurfaceChargeDensity",      "SI",         "coulomb-per-square-meter",     "Scientific", "coulomb-per-square-yard",     out);
        testType(unitConversions.converter("ChargeDensity"),             "ChargeDensity",             "SI",         "coulomb-per-cubic-meter",      "Scientific", "coulomb-per-cubic-yard",      out);
        testType(unitConversions.converter("MagneticReluctance"),        "MagneticReluctance",        "SI",         "sturgeon",                     "Scientific", "farad-per-square-minute",     out);
        testType(unitConversions.converter("ElectricConductance"),       "ElectricConductance",       "SI",         "siemens",                      "cgs",        "statmho",                     out);
        testType(unitConversions.converter("ElectricElastance"),         "ElectricElastance",         "Scientific", "henry-per-square-second",      "Scientific", "henry-per-square-minute",     out);
        testType(unitConversions.converter("ElectricConductance"),       "ElectricConductance",       "SI",         "siemens",                      "cgs",        "abmho",                       out);
        testType(unitConversions.converter("Capacitance"),               "Capacitance",               "SI",         "farad",                        "cgs",        "statfarad",                   out);
        testType(unitConversions.converter("Conductivity"),              "Conductivity",              "Scientific", "reciprocal-ohm-per-meter",     "Scientific", "reciprocal-ohm-per-foot",     out);
        testType(unitConversions.converter("SpecificAcousticImpedance"), "SpecificAcousticImpedance", "cgs",        "rayl",                         "MKSA",       "rayl",                        out);
        testType(unitConversions.converter("MagneticInduction"),         "MagneticInduction",         "SI",         "weber",                        "Scientific", "debye",                       out);
        testType(unitConversions.converter("Inductance"),                "Inductance",                "SI",         "henry",                        "cgs",        "stathenry",                   out);
        testType(unitConversions.converter("Potential"),                 "Potential",                 "SI",         "volt",                         "cgs",        "statvolt",                    out);
        testType(unitConversions.converter("Resistance"),                "Resistance",                "SI",         "ohm",                          "cgs",        "statohm",                     out);
        testType(unitConversions.converter("Resistivity"),               "Resistivity",               "SI",         "ohm-meter",                    "Imperial",   "ohm-cmi/ft",                  out);
        testType(unitConversions.converter("AcousticImpedance"),         "AcousticImpedance",         "SI",         "acoustic-ohm",                 "cgs",        "acoustic-ohm",                out);
        testType(unitConversions.converter("ElectricFieldStrength"),     "ElectricFieldStrength",     "SI",         "volt-per-meter",               "Scientific", "volt-per-yard",               out);
        testType(unitConversions.converter("MagneticFluxDensity"),       "MagneticFluxDensity",       "SI",         "tesla",                        "SI",         "kiloctesla",                  out);
        testType(unitConversions.converter("ElectricFieldGradient"),     "ElectricFieldGradient",     "cgs",        "townsend",                     "a.u.",       "ao",                          out);
        testType(unitConversions.converter("MagneticPotential"),         "MagneticPotential",         "SI",         "weber-per-meter",              "Scientific", "weber-per-yard",              out);
        testType(unitConversions.converter("MagneticPermeability"),      "MagneticPermeability",      "SI",         "henry-per-meter",              "Scientific", "henry-per-yard",              out);

        testType(unitConversions.converter("Energy"),                    "Energy",                    "SI",         "joule",                        "Scientific", "kilowatt-hour",               out);
        testType(unitConversions.converter("HeatFlux"),                  "HeatFlux",                  "Imperial",   "Btu(IT)/hr-ft",                "US",         "gurley-unit",                 out);
        testType(unitConversions.converter("ThermalConductance"),        "ThermalConductance",        "SI",         "thermal-ampere",               "SI",         "watt-per-per-kelvin",         out);
        testType(unitConversions.converter("HeatTransfer"),              "HeatTransfer",              "Imperial",   "Btu(IT)/hr-ft2-oF",            "Imperial",   "USI",                         out);
        testType(unitConversions.converter("ThermalConductivity"),       "ThermalConductivity",       "Imperial",   "Btu(IT)-in/hr-ft2-oF",         "cgs",        "fourier",                     out);
        testType(unitConversions.converter("RadiantEnergy"),             "RadiantEnergy",             "cgs",        "dyne-per-centimeter",          "SI",         "joule-per-square-meter",      out);
        testType(unitConversions.converter("Entropy"),                   "Entropy",                   "SI",         "joule-per-kelvin",             "Scientific", "carnot",                      out);
        testType(unitConversions.converter("MolarEntropy"),              "MolarEntropy",              "SI",         "joule-per-mole-per-kelvin",    "Scientific", "entropy-unit",                out);
        testType(unitConversions.converter("HeatInsulation"),            "HeatInsulation",            "Imperial",   "R-value",                      "UK",         "tog",                         out);
        testType(unitConversions.converter("EnergyConsumption"),         "EnergyConsumption",         "cgs",        "brewster",                     "US",         "EF",                          out);
        testType(unitConversions.converter("SpecificHeatCapacity"),      "SpecificHeatCapacity",      "Scientific", "mayer",                        "UK",         "Btu(IT)/lb-oF",               out);
        testType(unitConversions.converter("SpecificHeat"),              "SpecificHeat",              "Scientific", "cal(IT)/kg",                   "Scientific", "cal/g",                       out); 

        testType(unitConversions.converter("Flow"),                      "Flow",                      "SI",         "cubic-meter-per-hour",         "Imperial",   "cubic-foot-per-minute",       out);

        testType(unitConversions.converter("Force"),                     "Force",                     "SI",         "newton",                       "FPS",        "poundal",                     out);
        testType(unitConversions.converter("Momentum"),                  "Momentum",                  "SI",         "newton-second",                "cgs",        "bole",                        out);
        testType(unitConversions.converter("Action"),                    "Action",                    "SI",         "joule-second",                 "a.u.",       "aua",                         out);
        testType(unitConversions.converter("MassFlow"),                  "MassFlow",                  "SI",         "newton-per-meter",             "Scientific", "sumner-unit",                 out);
        testType(unitConversions.converter("QuadMoment"),                "QuadMoment",                "SI",         "bisquare-meter",               "Imperial",   "bisquare-inch",               out);

        testType(unitConversions.converter("Frequency"),                 "Frequency",                 "SI",         "kilohertz",                    "Imperial",   "fit",                         out);

        testType(unitConversions.converter("LuminousIntensity"),         "LuminousIntensity",         "SI",         "candela",                      "INT",        "candle",                      out);
        testType(unitConversions.converter("LuminousFlux"),              "LuminousFlux",              "SI",         "lumen",                        "Imperial",   "candlepower(spherical)",      out);
        testType(unitConversions.converter("Luminance"),                 "Luminance",                 "Scientific", "luxon",                        "US",         "foot-lambert",                out);
        testType(unitConversions.converter("Illuminance"),               "Illuminance",               "SI",         "lux",                          "German",     "nox",                         out);
        testType(unitConversions.converter("RadiantIntensity"),          "RadiantIntensity",          "SI",         "milliwatt-per-steradian",      "cgs",        "lumberg",                     out);

        testType(unitConversions.converter("Molarity"),                  "Molarity",                  "Scientific", "amagat(atm)",                  "INT",        "chlorometric-degree",         out);
        testType(unitConversions.converter("SurfaceMolarity"),           "SurfaceMolarity",           "Scientific", "gibbs",                        "Scientific", "mole/ft2",                    out);
        testType(unitConversions.converter("MolarDensity"),              "MolarDensity",              "Scientific", "amagat(bar)",                  "Scientific", "ft3/mol",                     out);
        testType(unitConversions.converter("MolarAbsorption"),           "MolarAbsorption",           "SI",         "m2/mol",                       "Scientific", "yd2/mol",                     out);
        testType(unitConversions.converter("RadiochemicalYield"),        "RadiochemicalYield",        "INT",        "G-vaIue(old)",                 "SI",         "G-value",                     out);
        testType(unitConversions.converter("Quantity"),                  "Quantity",                  "SI",         "mole",                         "Imperial",   "pound-mole",                  out);
        testType(unitConversions.converter("EnzymaticActivity"),         "EnzymaticActivity",         "SI",         "katal",                        "Scientific", "UI",                          out);
        testType(unitConversions.converter("MolarCharge"),               "MolarCharge",               "Scientific", "faraday(chemical)",            "Scientific", "faraday(physical)",           out);

        testType(unitConversions.converter("Power"),                     "Power",                     "SI",         "watt",                         "Scientific", "horsepower",                  out);
        testType(unitConversions.converter("Pressure"),                  "Pressure",                  "SI",         "pascal",                       "INT",        "atmosphere",                  out);

        testType(unitConversions.converter("ParticleFlux"),              "ParticleFlux",              "Scientific", "rayleigh",                     "Scientific", "particle-flux-unit",          out);
        testType(unitConversions.converter("SpecificEnergy"),            "SpecificEnergy",            "SI",         "gray",                         "INT",        "cal(IT)/g",                   out);
        testType(unitConversions.converter("RadioactiveConcentration"),  "RadioactiveConcentration",  "SI",         "Bq/m3",                        "Scientific", "curie-per-liter",             out);
        testType(unitConversions.converter("ExposureRate"),              "ExposureRate",              "German",     "R-unit(German)",               "Scientific", "E-unit",                      out);
        testType(unitConversions.converter("SpecificRadioactivity"),     "SpecificRadioactivity",     "SI",         "Bq/kg",                        "Scientific", "strontium-unit",              out);
        testType(unitConversions.converter("Exposure"),                  "Exposure",                  "Scientific", "e-unit",                       "INT",        "sievert-unit",                out);

        testType(unitConversions.converter("SpecificLength"),            "SpecificLength",            "Imperial",   "linen",                        "Imperial",   "worsted",                     out);
        testType(unitConversions.converter("SpecificVolume"),            "SpecificVolume",            "SI",         "m3/kg",                        "FPS",        "ft3/lb",                      out);

        testType(unitConversions.converter("Temperature"),               "Temperature",               "SI",         "kelvin",                       "French",     "reaumur",                     out);
        testType(unitConversions.converter("Time"),                      "Time",                      "SI",         "second",                       "Time",       "minute",                      out);

        testType(unitConversions.converter("Velocity"),                  "Velocity",                  "SI",         "meter-per-second",             "Imperial",   "foot-per-second",             out);
        testType(unitConversions.converter("Acceleration"),              "Acceleration",              "SI",         "meter-per-square-second",      "Imperial",   "foot-per-square-second",      out);
        testType(unitConversions.converter("Jerk"),                      "Jerk",                      "SI",         "jolt",                         "Imperial",   "jerk",                        out);

        testType(unitConversions.converter("KinematicViscosity"),        "KinematicViscosity",        "SI",         "square-centimeter-per-second", "Imperial",   "square-inch-per-second",      out);
        testType(unitConversions.converter("DynamicViscosity"),          "DynamicViscosity",          "SI",         "poiseuille",                   "FPS",        "reynolds",                    out);

        testType(unitConversions.converter("Wavenumber"),                "Wavenumber",                "SI",         "dioptre",                      "Imperial",   "gauge",                       out);

        testType(unitConversions.converter("Length"),                    "Length",                    "Venezuelan", "cuarta",                       "Hungarian",   "marok",                      out);
        testType(unitConversions.converter("Area"),                      "Area",                      "Annamese",   "khau",                         "Dutch",       "voet",                       out);
        testType(unitConversions.converter("Mass"),                      "Mass",                      "Egyptian",   "talent",                       "US",          "pound",                      out);
        testType(unitConversions.converter("Liquid"),                    "Liquid",                    "Tunisian",   "cafisso",                      "UK",          "ounce",                      out);
        testType(unitConversions.converter("Dry"),                       "Dry",                       "Swiss",      "emine",                        "Hebrew",      "gomor",                      out);

        testVolume(unitConversions, out);

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        printFooter("SystemTestUnitConversions", duration, out);
    }

    /*
     *  @brief Compute and write results of Converter test for volume.
     * 
     * @param unitConversions - (input) conversion to extract volume for testing.
     * @param out             - (input) stream to write results to.
     */
    private void testVolume(UnitConversions unitConversions, PrintStream out)
    {
        UBASE liq = unitConversions.converter("Liquid").unit("US", "fluid-ounce");
        UBASE dry = unitConversions.converter("Dry").unit("UK", "cubic-inch");

        boolean ans1 = unitConversions.converter("Volume").addUnit("US", "fluid-ounce", liq);
        boolean ans2 = unitConversions.converter("Volume").addUnit("UK", "cubic-inch", dry);
        testType(unitConversions.converter("Volume"), "Volume", "US", "fluid-ounce", 
                                                 "UK", "cubic-inch", out); 

        unitConversions.converter("Volume").fromType("Dry");
        unitConversions.converter("Volume").toType("Liquid");
        testType(unitConversions.converter("Volume"), "Volume", "UK", "cubic-inch", 
                                                 "US", "fluid-ounce", out); 

        boolean ans3 = unitConversions.converter("Volume").removeUnit("US", "fluid-ounce");
        boolean ans4 = unitConversions.converter("Volume").removeUnit("UK", "cubic-inch");

        unitConversions.converter("Volume").fromType("Liquid");
        unitConversions.converter("Volume").toType("Dry");
    }


    /*
     * Compute and write results of Converter test.
     * 
     * @param con        - (input) Converter to test.
     * @param label      - (input) label to identify output results.
     * @param fromSystem - (input) name of 'from' system.
     * @param fromUnit   - (input) name of 'from' unit.
     * @param toSystem   - (input) name of 'to' system.
     * @param toUnit     - (input) name of 'to' unit.
     * @param out        - (input) stream to write results to.
     */
    private void testType(Converter con, 
                          String label, 
                          String fromSystem, 
                          String fromUnit, 
                          String toSystem, 
                          String toUnit,
                          PrintStream out)
    {
        UBASE uFrom = con.unit(fromSystem, fromUnit);
        UBASE uTo = con.unit(toSystem, toUnit);
        double delta = uFrom.offset().asDouble() - uTo.offset().asDouble();
        double fromValue = uFrom.value().asDouble();
        double toValue = uTo.value().asDouble();
        double result = (fromValue + delta) / toValue;

        String saveFromSystem = con.fromSystem();
        String saveToSystem = con.toSystem();

        con.toSystem(toSystem);
        con.fromSystem(fromSystem);

        String fullNameFrom = con.fullUnitName(fromSystem, fromUnit);
        String fullNameTo   = con.fullUnitName(toSystem, toUnit);
        String fromSysName = (fullNameFrom == fromUnit ? fromSystem : "");
        String toSysName   = (fullNameTo == toUnit ? toSystem : "");

        double x0 = 1.0;
        double x1 = con.convert(x0, fromUnit, toUnit);
        double x2 = con.convert(x0, fullNameFrom,fullNameTo, true);
        double x3 = con.convert(x0, fromUnit,fromSystem,toUnit, toSystem);
        con.fromSystem(saveFromSystem);
        con.toSystem(saveToSystem);

        printResult(x1 == result, "SystemTestUnitConversions " + label, "convert",
                    ""+x0 + " " + fromSysName + " " + fullNameFrom + " = " + ""+x1 + " " + toSysName + " "+ fullNameTo, 
                    ""+x0 + " " + fromSysName + " " + fullNameFrom + " = " + ""+result + " " + toSysName + " "+ fullNameTo, 
                    out);

        printResult(x2 == result, "SystemTestUnitConversions " + label, "convert",
                    ""+x0 + " " + fromSysName + " " + fullNameFrom + " = " + ""+x2 + " " + toSysName + " "+ fullNameTo, 
                    ""+x0 + " " + fromSysName + " " + fullNameFrom + " = " + ""+result + " " + toSysName + " "+ fullNameTo, 
                    out);

        printResult(x3 == result, "SystemTestUnitConversions " + label, "convert",
                    ""+x0 + " " + fromSysName + " " + fullNameFrom + " = " + ""+x3 + " " + toSysName + " "+ fullNameTo, 
                    ""+x0 + " " + fromSysName + " " + fullNameFrom + " = " + ""+result + " " + toSysName + " "+ fullNameTo, 
                    out);
    }
}
// EOF
