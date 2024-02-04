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
// File UnitTestUnitConversions.cpp
//
// Unit test for UnitConversions class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitTestUnitConversions.hpp"
#include "UnitConversions.hpp"
#include <iostream>

/** 
 * @brief Constructor
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitTestUnitConversions::UnitTestUnitConversions(bool brief,
                                                 const std::string& path) 
                                                 : UnitConversionBaseTest(brief, path)
{
    openFile("UnitTestUnitConversions.txt");
}

/*
 * @brief Run the tests; output results to screen and file.
 * 
 * @param[in] out - stream to write results to.
 */
void UnitTestUnitConversions::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitTestUnitConversions", out);

    

    UnitConversions& unitConversions =  UnitConversions::Instance();

    bool r0 = unitConversions.check();
    std::string er0 = "true";
    std::string ar0 = bool_to_str(r0);
    printResult(r0, "UnitTestUnitConversions", "check", ar0, er0, out);

    std::list<std::string> er1 = {"Angle", "SolidAngle",      "AngularVelocity", 
                                  "AngularAcceleration",      "Computer", 
                                  "ScreenResolution",         "Voxel", 
                                  "Count",                    "LinearDensity", 
                                  "SurfaceDensity",           "Density", 
                                  "Current",                  "Charge", 
                                  "MagneticFieldStrength",    "Permeability", 
                                  "MagneticDipoleMoment",     "CurrentDensity", 
                                  "SurfaceChargeDensity",     "ChargeDensity", 
                                  "MagneticReluctance",       "ElectricElastance", 
                                  "ElectricConductance",      "Capacitance", 
                                  "Conductivity",             "SpecificAcousticImpedance", 
                                  "Potential",                "MagneticInduction", 
                                  "Inductance",               "Resistance", 
                                  "Resistivity",              "AcousticImpedance", 
                                  "ElectricFieldStrength",    "MagneticFluxDensity",
                                  "ElectricFieldGradient",    "MagneticPotential",
                                  "MagneticPermeability",     "Energy", 
                                  "HeatFlux",                 "ThermalConductance", 
                                  "HeatTransfer",             "ThermalConductivity", 
                                  "RadiantEnergy",            "Entropy", 
                                  "MolarEntropy",             "HeatInsulation", 
                                  "EnergyConsumption",        "SpecificHeatCapacity",
                                  "SpecificHeat",             "Flow", 
                                  "Force",                    "Momentum",
                                  "Action",                   "MassFlow", 
                                  "QuadMoment",               "Frequency", 
                                  "LuminousIntensity",        "LuminousFlux", 
                                  "Luminance",                "Illuminance", 
                                  "RadiantIntensity",         "Molarity", 
                                  "SurfaceMolarity",          "MolarDensity", 
                                  "MolarAbsorption",          "RadiochemicalYield", 
                                  "Quantity",                 "EnzymaticActivity", 
                                  "MolarCharge", "Power",     "Pressure", 
                                  "ParticleFlux",             "SpecificEnergy", 
                                  "RadioactiveConcentration", "ExposureRate", 
                                  "SpecificRadioactivity",    "Exposure", 
                                  "SpecificLength",           "SpecificVolume", 
                                  "Temperature", "Time",      "Velocity", 
                                  "Acceleration", "Jerk",     "KinematicViscosity", 
                                  "DynamicViscosity",         "Wavenumber", 
                                  "Length",  "Area", "Mass",  "Liquid",
                                   "Dry", "Volume",           "Invalid"};
    std::list<std::string> ar1 = unitConversions.names();
    bool r1 = compareList(ar1, er1);
    printResult(r1, "UnitTestUnitConversions", "names", listToString(ar1), 
                    listToString(er1), out);


    Converter& cvt1 = unitConversions.converter("Area");
    bool r2 = cvt1.valid();
    std::string ar2 = bool_to_str(r2);
    std::string er2 = "true";
    printResult(r2, "UnitTestUnitConversions", "converter (Area)", ar2, er2, out);


    Converter& cvt2 = unitConversions.converter("Angle");
    bool r3 = cvt2.valid();
    std::string ar3 = bool_to_str(r3);
    std::string er3 = "true";
    printResult(r3, "UnitTestUnitConversions", "converter (Angle)", ar3, er3, out);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitTestUnitConversions", diff, out);
}
// EOF