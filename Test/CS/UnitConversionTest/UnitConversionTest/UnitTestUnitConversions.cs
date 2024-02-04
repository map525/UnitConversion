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
// File UnitTestUnitConversions.cs
//
// Unit test for UnitConversions class. 
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
    /// Test UnitConversions class.
    ///</summary>
    public class UnitTestUnitConversions : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input)  the path to the output folder where
        ///                              the test results are written.</param>
        public UnitTestUnitConversions(bool brief, string path) : base(brief, path)
        {
            openFile("UnitTestUnitConversions.txt");
        }

        ///<summary>
        /// Run the tests; output results to screen and file.
        /// </summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitTestUnitConversions");

            UnitConversions unitConversions =  UnitConversions.Instance();

            bool r0 = unitConversions.check();
            string er0 = "true";
            string ar0 = bool_to_str(r0);
            printResult(r0, "UnitTestUnitConversions", "check", ar0, er0);

            List<string> er1 = new List<string> {"Angle", 
                                                 "SolidAngle", 
                                                 "AngularVelocity", 
                                                 "AngularAcceleration", 
                                                 "Computer", 
                                                 "ScreenResolution", 
                                                 "Voxel", 
                                                 "Count", 
                                                 "LinearDensity", 
                                                 "SurfaceDensity", 
                                                 "Density", 
                                                 "Current", 
                                                 "Charge", 
                                                 "MagneticFieldStrength", 
                                                 "Permeability", 
                                                 "MagneticDipoleMoment", 
                                                 "CurrentDensity", 
                                                 "SurfaceChargeDensity", 
                                                 "ChargeDensity", 
                                                 "MagneticReluctance", 
                                                 "ElectricElastance", 
                                                 "ElectricConductance", 
                                                 "Capacitance", 
                                                 "Conductivity", 
                                                 "SpecificAcousticImpedance", 
                                                 "MagneticInduction", 
                                                 "Inductance", 
                                                 "Potential", 
                                                 "Resistance", 
                                                 "Resistivity", 
                                                 "AcousticImpedance", 
                                                 "ElectricFieldStrength", 
                                                 "MagneticFluxDensity", 
                                                 "ElectricFieldGradient", 
                                                 "MagneticPotential", 
                                                 "MagneticPermeability", 
                                                 "Energy", 
                                                 "HeatFlux", 
                                                 "ThermalConductance", 
                                                 "HeatTransfer", 
                                                 "ThermalConductivity", 
                                                 "RadiantEnergy",
                                                 "Entropy", 
                                                 "MolarEntropy", 
                                                 "HeatInsulation", 
                                                 "EnergyConsumption",
                                                 "SpecificHeatCapacity", 
                                                 "SpecificHeat", 
                                                 "Flow", 
                                                 "Force", 
                                                 "Momentum", 
                                                 "Action",
                                                 "MassFlow", 
                                                 "QuadMoment", 
                                                 "Frequency", 
                                                 "LuminousIntensity", 
                                                 "LuminousFlux",
                                                 "Luminance", 
                                                 "Illuminance", 
                                                 "RadiantIntensity", 
                                                 "Molarity", 
                                                 "SurfaceMolarity",
                                                 "MolarDensity", 
                                                 "MolarAbsorption", 
                                                 "RadiochemicalYield", 
                                                 "Quantity", 
                                                 "EnzymaticActivity",
                                                 "MolarCharge", 
                                                 "Power", 
                                                 "Pressure", 
                                                 "ParticleFlux", 
                                                 "SpecificEnergy",
                                                 "RadioactiveConcentration", 
                                                 "ExposureRate", 
                                                 "SpecificRadioactivity", 
                                                 "Exposure",
                                                 "SpecificLength", 
                                                 "SpecificVolume", 
                                                 "Temperature", 
                                                 "Time", 
                                                 "Velocity", 
                                                 "Acceleration",
                                                 "Jerk", 
                                                 "KinematicViscosity", 
                                                 "DynamicViscosity", 
                                                 "Wavenumber", 
                                                 "Length", 
                                                 "Area",
                                                 "Mass", 
                                                 "Liquid", 
                                                 "Dry", 
                                                 "Volume", 
                                                 "Invalid"};
            List<string> ar1 = unitConversions.names();
            bool r1 = compareList(ar1, er1);
            printResult(r1, "UnitTestUnitConversions", "names", 
                            listToString(ar1), listToString(er1));

            Converter cvt1 = unitConversions.converter("Area");
            bool r2 = cvt1.valid();
            string ar2 = bool_to_str(r2);
            string er2 = "true";
            printResult(r2, "UnitTestUnitConversions", "converter (Area)", ar2, er2);


            Converter  cvt2 = unitConversions.converter("Angle");
            bool r3 = cvt2.valid();
            string ar3 = bool_to_str(r3);
            string er3 = "true";
            printResult(r3, "UnitTestUnitConversions", "converter (Angle)", ar3, er3);

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitTestUnitConversions", ts);
        }
    }
}
// EOF
