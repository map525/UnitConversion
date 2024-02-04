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
// File SystemTestUnitConversions.cs
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
    public class SystemTestUnitConversions : UnitConversionBaseTest
    {
        ///<summary>
        /// Constructor
        ///<summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c> (input)  the path to the output folder where the 
        ///                             test results are written.</param>
        public SystemTestUnitConversions(bool brief, string path) : base(brief, path)
        {
             openFile("SystemTestUnitConversions.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        ///<summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("SystemTestUnitConversions");

            UnitConversions unitConversions =  UnitConversions.Instance();

            testType(unitConversions.converter("Angle"),                     "Angle",                     "SI",          "radian",                       "INT",        "degree");
            testType(unitConversions.converter("SolidAngle"),                "SolidAngle",                "SI",          "steradian",                    "French",     "square-gon");
            testType(unitConversions.converter("AngularVelocity"),           "AngularVelocity",           "SI",          "rad/sec",                      "Scientific", "deg/sec");
            testType(unitConversions.converter("AngularAcceleration"),       "AngularAcceleration",       "SI",          "rad/sec2",                     "Scientific", "deg/sec2");

            testType(unitConversions.converter("Computer"),                  "Computer",                  "Computer",    "kilobyte",                     "Computer",   "nibble");
            testType(unitConversions.converter("Count"),                     "Count",                     "Roman",       "hecatomb",                     "Imperial",   "dozen");

            testType(unitConversions.converter("LinearDensity"),             "LinearDensity",             "SI",          "kg/m",                         "UK",         "ton-per-yard");
            testType(unitConversions.converter("SurfaceDensity"),            "SurfaceDensity",            "SI",          "kg/m2",                        "Imperial",   "lb/yd2");
            testType(unitConversions.converter("Density"),                   "Density",                   "Scientific",  "g/mm3",                        "UK",         "oz/gal");

            testType(unitConversions.converter("Current"),                   "Current",                   "SI",          "ampere",                       "cgs",        "gilbert");
            testType(unitConversions.converter("Charge"),                    "Charge",                    "SI",          "coulomb",                      "cgs",        "abcoulomb");
            testType(unitConversions.converter("MagneticFieldStrength"),     "MagneticFieldStrength",     "SI",          "ampere-per-meter",             "cgs",        "oersted");
            testType(unitConversions.converter("Permeability"),              "Permeability",              "US",          "perm(0oC)",                    "US",         "perm(23oC)");
            testType(unitConversions.converter("MagneticDipoleMoment"),      "MagneticDipoleMoment",      "SI",          "ampere-square-meter",          "Scientific", "Bohr-magneton");
            testType(unitConversions.converter("CurrentDensity"),            "CurrentDensity",            "SI",          "ampere-per-square-meter",      "Imperial",   "microampere-per-square-yard");
            testType(unitConversions.converter("SurfaceChargeDensity"),      "SurfaceChargeDensity",      "SI",          "coulomb-per-square-meter",     "Scientific", "coulomb-per-square-yard");
            testType(unitConversions.converter("ChargeDensity"),             "ChargeDensity",             "SI",          "coulomb-per-cubic-meter",      "Scientific", "coulomb-per-cubic-yard");
            testType(unitConversions.converter("MagneticReluctance"),        "MagneticReluctance",        "SI",          "sturgeon",                     "Scientific", "farad-per-square-minute");
            testType(unitConversions.converter("ElectricConductance"),       "ElectricConductance",       "SI",          "siemens",                      "cgs",        "statmho");
            testType(unitConversions.converter("ElectricElastance"),         "ElectricElastance",         "Scientific",  "henry-per-square-second",      "Scientific", "henry-per-square-minute");
            testType(unitConversions.converter("ElectricConductance"),       "ElectricConductance",       "SI",          "siemens",                      "cgs",        "abmho");
            testType(unitConversions.converter("Capacitance"),               "Capacitance",               "SI",          "farad",                        "cgs",        "statfarad");
            testType(unitConversions.converter("Conductivity"),              "Conductivity",              "Scientific",  "reciprocal-ohm-per-meter",     "Scientific", "reciprocal-ohm-per-foot");
            testType(unitConversions.converter("SpecificAcousticImpedance"), "SpecificAcousticImpedance", "cgs",         "rayl",                         "MKSA",       "rayl");
            testType(unitConversions.converter("MagneticInduction"),         "MagneticInduction",         "SI",          "weber",                        "Scientific", "debye");
            testType(unitConversions.converter("Inductance"),                "Inductance",                "SI",          "henry",                        "cgs",        "stathenry");
            testType(unitConversions.converter("Potential"),                 "Potential",                 "SI",          "volt",                         "cgs",        "statvolt");
            testType(unitConversions.converter("Resistance"),                "Resistance",                "SI",          "ohm",                          "cgs",        "statohm");
            testType(unitConversions.converter("Resistivity"),               "Resistivity",               "SI",          "ohm-meter",                    "Imperial",   "ohm-cmi/ft");
            testType(unitConversions.converter("AcousticImpedance"),         "AcousticImpedance",         "SI",          "acoustic-ohm",                 "cgs",        "acoustic-ohm");
            testType(unitConversions.converter("ElectricFieldStrength"),     "ElectricFieldStrength",     "SI",          "volt-per-meter",               "Scientific", "volt-per-yard");
            testType(unitConversions.converter("MagneticFluxDensity"),       "MagneticFluxDensity",       "SI",          "tesla",                        "SI",         "kiloctesla");
            testType(unitConversions.converter("ElectricFieldGradient"),     "ElectricFieldGradient",     "cgs",         "townsend",                     "a.u.",       "ao");
            testType(unitConversions.converter("MagneticPotential"),         "MagneticPotential",         "SI",          "weber-per-meter",              "Scientific", "weber-per-yard");
            testType(unitConversions.converter("MagneticPermeability"),      "MagneticPermeability",      "SI",          "henry-per-meter",              "Scientific", "henry-per-yard");

            testType(unitConversions.converter("Energy"),                    "Energy",                    "SI",          "joule",                        "Scientific", "kilowatt-hour");
            testType(unitConversions.converter("HeatFlux"),                  "HeatFlux",                  "Imperial",    "Btu(IT)/hr-ft",                "US",         "Gurley-unit");
            testType(unitConversions.converter("ThermalConductance"),        "ThermalConductance",        "SI",          "thermal-ampere",               "SI",         "watt-per-per-kelvin");
            testType(unitConversions.converter("HeatTransfer"),              "HeatTransfer",              "Imperial",    "Btu(IT)/hr-ft2-oF",            "Imperial",   "USI");
            testType(unitConversions.converter("ThermalConductivity"),       "ThermalConductivity",       "Imperial",    "Btu(IT)-in/hr-ft2-oF",         "cgs",        "fourier");
            testType(unitConversions.converter("RadiantEnergy"),             "RadiantEnergy",             "cgs",         "dyne-per-centimeter",          "SI",         "joule-per-square-meter");
            testType(unitConversions.converter("Entropy"),                   "Entropy",                   "SI",          "Joule-per-kelvin",             "Scientific", "carnot");
            testType(unitConversions.converter("MolarEntropy"),              "MolarEntropy",              "SI",          "joule-per-mole-per-kelvin",    "Scientific", "entropy-unit");
            testType(unitConversions.converter("HeatInsulation"),            "HeatInsulation",            "Imperial",    "R-value",                      "UK",         "tog");
            testType(unitConversions.converter("EnergyConsumption"),         "EnergyConsumption",         "cgs",         "brewster",                     "US",         "EF");
            testType(unitConversions.converter("SpecificHeatCapacity"),      "SpecificHeatCapacity",      "Scientific",  "mayer",                        "UK",         "Btu(IT)/lb-oF");
            testType(unitConversions.converter("SpecificHeat"),              "SpecificHeat",              "Scientific",  "cal(IT)/kg",                   "Scientific", "cal/g");

            testType(unitConversions.converter("Flow"),                      "Flow",                      "SI",          "cubic-meter-per-hour",         "Imperial",   "cubic-foot-per-minute");

            testType(unitConversions.converter("Force"),                     "Force",                     "SI",          "newton",                       "FPS",        "poundal");
            testType(unitConversions.converter("Momentum"),                  "Momentum",                  "SI",          "newton-second",                "cgs",        "bole");
            testType(unitConversions.converter("Action"),                    "Action",                    "SI",          "joule-second",                 "a.u.",       "aua");
            testType(unitConversions.converter("MassFlow"),                  "MassFlow",                  "SI",          "newton-per-meter",             "Scientific", "sumner-unit");
            testType(unitConversions.converter("QuadMoment"),                "QuadMoment",                "SI",          "bisquare-meter",               "Imperial",   "bisquare-inch");

            testType(unitConversions.converter("Frequency"),                 "Frequency",                 "SI",          "kilohertz",                    "Imperial",   "fit");

            testType(unitConversions.converter("LuminousIntensity"),         "LuminousIntensity",         "SI",          "candela",                      "INT",        "candle");
            testType(unitConversions.converter("LuminousFlux"),              "LuminousFlux",              "SI",          "lumen",                        "Imperial",   "candlepower(spherical)");
            testType(unitConversions.converter("Luminance"),                 "Luminance",                 "Scientific",  "luxon",                        "US",         "foot-lambert");
            testType(unitConversions.converter("Illuminance"),               "Illuminance",               "SI",          "lux",                          "German",     "nox");
            testType(unitConversions.converter("RadiantIntensity"),          "RadiantIntensity",          "SI",          "milliwatt-per-steradian",      "cgs",        "lumberg");

            testType(unitConversions.converter("Molarity"),                  "Molarity",                  "Scientific",  "amagat(atm)",                  "INT",        "chlorometric-degree");
            testType(unitConversions.converter("SurfaceMolarity"),           "SurfaceMolarity",           "Scientific",  "gibbs",                        "Scientific", "mole/ft2");
            testType(unitConversions.converter("MolarDensity"),              "MolarDensity",              "Scientific",  "amagat(bar)",                  "Scientific", "ft3/mol");
            testType(unitConversions.converter("MolarAbsorption"),           "MolarAbsorption",           "SI",          "m2/mol",                       "Scientific", "yd2/mol");
            testType(unitConversions.converter("RadiochemicalYield"),        "RadiochemicalYield",        "INT",         "G-vaIue(old)",                 "SI",         "G-value");
            testType(unitConversions.converter("Quantity"),                  "Quantity",                  "SI",          "mole",                         "Imperial",   "pound-mole");
            testType(unitConversions.converter("EnzymaticActivity"),         "EnzymaticActivity",         "SI",          "katal",                        "Scientific", "UI");
            testType(unitConversions.converter("MolarCharge"),               "MolarCharge",               "Scientific",  "faraday(chemical)",            "Scientific", "faraday(physical)");

            testType(unitConversions.converter("Power"),                     "Power",                     "SI",          "watt",                         "Scientific", "horsepower");
            testType(unitConversions.converter("Pressure"),                  "Pressure",                  "SI",          "pascal",                       "INT",        "atmosphere");

            testType(unitConversions.converter("ParticleFlux"),              "ParticleFlux",              "Scientific",  "rayleigh",                     "Scientific", "particle-flux-unit");
            testType(unitConversions.converter("SpecificEnergy"),            "SpecificEnergy",            "SI",          "gray",                         "INT",        "cal(IT)/g");
            testType(unitConversions.converter("RadioactiveConcentration"),  "RadioactiveConcentration",  "SI",          "Bq/m3",                        "Scientific", "curie-per-liter");
            testType(unitConversions.converter("ExposureRate"),              "ExposureRate",              "German",      "R-unit(German)",               "Scientific", "E-unit");
            testType(unitConversions.converter("SpecificRadioactivity"),     "SpecificRadioactivity",     "SI",          "Bq/kg",                        "Scientific", "strontium-unit");
            testType(unitConversions.converter("Exposure"),                  "Exposure",                  "Scientific",  "e-unit",                       "INT",        "sievert-unit");

            testType(unitConversions.converter("SpecificLength"),            "SpecificLength",            "Imperial",    "linen",                        "Imperial",   "worsted");
            testType(unitConversions.converter("SpecificVolume"),            "SpecificVolume",            "SI",          "m3/kg",                        "FPS",        "ft3/lb");

            testType(unitConversions.converter("Temperature"),               "Temperature",               "SI",          "Kelvin",                       "French",     "Reaumur");
            testType(unitConversions.converter("Time"),                      "Time",                      "SI",          "second",                       "Time",       "minute");

            testType(unitConversions.converter("Velocity"),                  "Velocity",                  "SI",          "meter-per-second",             "Imperial",   "foot-per-second");
            testType(unitConversions.converter("Acceleration"),              "Acceleration",              "SI",          "meter-per-square-second",      "Imperial",   "foot-per-square-second");
            testType(unitConversions.converter("Jerk"),                      "Jerk",                      "SI",          "jolt",                         "Imperial",   "jerk");

            testType(unitConversions.converter("KinematicViscosity"),        "KinematicViscosity",        "SI",          "square-centimeter-per-second", "Imperial",   "square-inch-per-second");
            testType(unitConversions.converter("DynamicViscosity"),          "DynamicViscosity",          "SI",          "poiseuille",                   "FPS",        "reynolds");

            testType(unitConversions.converter("Wavenumber"),                "Wavenumber",                "SI",          "dioptre",                      "Imperial",   "gauge");

            testType(unitConversions.converter("Length"),                    "Length",                    "Venezuelan",  "cuarta",                       "Hungarian",  "marok");
            testType(unitConversions.converter("Area"),                      "Area",                      "Annamese",    "khau",                         "Dutch",      "voet");
            testType(unitConversions.converter("Mass"),                      "Mass",                      "Egyptian",    "talent",                       "US",         "pound");
            testType(unitConversions.converter("Liquid"),                    "Liquid",                    "Tunisian",    "cafisso",                      "UK",         "ounce");
            testType(unitConversions.converter("Dry"),                       "Dry",                       "Swiss",       "emine",                        "Hebrew",     "gomor");

            testVolume(unitConversions);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("SystemTestUnitConversions", ts);
        }

        ///<summary>
        /// Compute and write results of Converter test for volume.
        ///<summary>
        /// <param><c>unitConversions</c> (input) conversion to extract volume 
        ///                                       for testing.</param>
        private void testVolume(UnitConversions unitConversions)
        {
            UBASE liq = unitConversions.converter("Liquid").unit("US", "fluid-ounce");
            UBASE dry = unitConversions.converter("Dry").unit("UK", "cubic-inch");

            bool ans1 = unitConversions.converter("Volume").addUnit("US", "fluid-ounce", liq);
            bool ans2 = unitConversions.converter("Volume").addUnit("UK", "cubic-inch", dry);
            testType(unitConversions.converter("Volume"), "Volume", "US", 
                                                          "fluid-ounce", "UK", "cubic-inch"); 

            unitConversions.converter("Volume").fromType("dry");
            unitConversions.converter("Volume").toType("liquid");
            testType(unitConversions.converter("Volume"), "Volume", "UK", 
                                                          "cubic-inch", "US", "fluid-ounce");

            bool ans3 = unitConversions.converter("Volume").removeUnit("US", "fluid-ounce");
            bool ans4 = unitConversions.converter("Volume").removeUnit("UK", "cubic-inch");

            unitConversions.converter("Volume").fromType("liquid");
            unitConversions.converter("Volume").toType("dry");
        }


        ///<summary>
        /// Compute and write results of Converter test.
        ///</summary>
        ///<param><c>con</c>        (input)  Converter to test.</param>
        ///<param><c>label</c>      (input)  label to identify output results.</param>
        ///<param><c>fromSystem</c> (input)  name of 'from' system.</param>
        ///<param><c>fromUnit</c>   (input)  name of 'from' unit.</param>
        ///<param><c>toSystem</c>   (input)  name of 'to' system.</param>
        ///<param><c>toUnit</c>     (input)  name of 'to' unit.</param>
        private void testType(Converter con, 
                              string label, 
                              string fromSystem, 
                              string fromUnit, 
                              string toSystem, 
                              string toUnit)
        {
            UBASE uFrom = con.unit(fromSystem, fromUnit);
            UBASE uTo = con.unit(toSystem, toUnit);
            double delta = uFrom.offset().asDouble() - uTo.offset().asDouble();
            double fromValue = uFrom.value().asDouble();
            double toValue = uTo.value().asDouble();
            double result = (fromValue + delta) / toValue;

            string saveFromSystem = con.fromSystem();
            string saveToSystem = con.toSystem();

            con.toSystem(toSystem);
            con.fromSystem(fromSystem);

            string fullNameFrom = con.fullUnitName(fromSystem, fromUnit);
            string fullNameTo   = con.fullUnitName(toSystem, toUnit);
            string fromSysName = (fullNameFrom == fromUnit ? fromSystem : "");
            string toSysName   = (fullNameTo == toUnit ? toSystem : "");

            double x0 = 1.0;
            double x1 = con.convert(x0, fromUnit, toUnit);
            double x2 = con.convert(x0, fullNameFrom,fullNameTo, true);
            double x3 = con.convert(x0, fromUnit,fromSystem,toUnit, toSystem);
            con.fromSystem(saveFromSystem);
            con.toSystem(saveToSystem);


            printResult(x1 == result, "SystemTestUnitConversions " + label, "convert",
                        x0.ToString("E15") + " " + fromSysName + " " + fullNameFrom + " = " + x1.ToString("E15")     + " " + toSysName + " " + fullNameTo,
                        x0.ToString("E15") + " " + fromSysName + " " + fullNameFrom + " = " + result.ToString("E15") + " " + toSysName + " " + fullNameTo);

            printResult(x2 == result, "SystemTestUnitConversions " + label, "convert",
                        x0.ToString("E15") + " " + fromSysName + " " + fullNameFrom + " = " + x2.ToString("E15")     + " " + toSysName + " " + fullNameTo,
                        x0.ToString("E15") + " " + fromSysName + " " + fullNameFrom + " = " + result.ToString("E15") + " " + toSysName + " " + fullNameTo);

            printResult(x3 == result, "SystemTestUnitConversions " + label, "convert",
                        x0.ToString("E15") + " " + fromSysName + " " + fullNameFrom + " = " + x3.ToString("E15")     + " " + toSysName + " " + fullNameTo,
                        x0.ToString("E15") + " " + fromSysName + " " + fullNameFrom + " = " + result.ToString("E15") + " " + toSysName + " " + fullNameTo);
        }
    }
}
// EOF
