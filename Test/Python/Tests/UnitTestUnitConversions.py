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
# File UnitTestUnitConversions.py
#
# Unit test for UnitConversions class. 
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

class UnitTestUnitConversions(UnitConversionBaseTest.UnitConversionBaseTest):
    """
    # Unit test for UnitConversions class.
    
    Methods
    -------
    
    __init__ - constructor.
    
    runOut   - Run the tests output results to screen and file.
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
        self.openFile("UnitTestUnitConversions.txt")

    def runOut(self, out):
        """
        Run the tests output results to screen and file.
        
        Parameters
        ----------
        out - (input, TextIOWrapper) stream to write results to.
        """
        start = datetime.now()
        self.printHeader("UnitTestUnitConversions", out);

        unitConversions =  UnitConversions.UnitConversions.Instance();

        er0 = "True"
        ar0 = unitConversions.check()
        r0 = ar0
        self.printResult(r0, "UnitTestUnitConversions", "check", ar0, er0, out)

        er1 = ["Angle",                     "SolidAngle", 
               "AngularVelocity",           "AngularAcceleration", 
               "Computer",                  "ScreenResolution", 
               "Voxel",                     "Count", 
               "LinearDensity",             "SurfaceDensity", 
               "Density",                   "Current", 
               "Charge",                    "MagneticFieldStrength",
               "Permeability",              "MagneticDipoleMoment",
               "CurrentDensity",            "SurfaceChargeDensity", 
               "ChargeDensity",             "MagneticReluctance", 
               "ElectricElastance",         "ElectricConductance", 
               "Capacitance",               "Conductivity", 
               "SpecificAcousticImpedance", "MagneticInduction", 
               "Inductance",                "Potential", 
               "Resistance",                "Resistivity", 
               "AcousticImpedance",         "ElectricFieldStrength", 
               "MagneticFluxDensity",       "ElectricFieldGradient", 
               "MagneticPotential",         "MagneticPermeability", 
               "Energy",                    "HeatFlux", 
               "ThermalConductance",        "HeatTransfer", 
               "ThermalConductivity",       "RadiantEnergy", 
               "Entropy",                   "MolarEntropy", 
               "HeatInsulation",            "EnergyConsumption",
               "SpecificHeatCapacity",      "SpecificHeat", 
               "Flow",                      "Force", 
               "Momentum",                  "Action",
               "MassFlow",                  "QuadMoment", 
               "Frequency",                 "LuminousIntensity", 
               "LuminousFlux",              "Luminance", 
               "Illuminance",               "RadiantIntensity", 
               "Molarity",                  "SurfaceMolarity",
               "MolarDensity",              "MolarAbsorption", 
               "RadiochemicalYield",        "Quantity", 
               "EnzymaticActivity",         "MolarCharge", 
               "Power",                     "Pressure", 
               "ParticleFlux",              "SpecificEnergy",
               "RadioactiveConcentration",  "ExposureRate", 
               "SpecificRadioactivity",     "Exposure", 
               "SpecificLength",            "SpecificVolume", 
               "Temperature",               "Time", 
               "Velocity",                  "Acceleration", 
               "Jerk",                      "KinematicViscosity", 
               "DynamicViscosity",          "Wavenumber", 
               "Length",                    "Area",
               "Mass",                      "Liquid", 
               "Dry",                       "Volume", 
               "Invalid"]

        ar1 = unitConversions.names()
        r1 = self.compareList(ar1, er1)
        self.printResult(r1, "UnitTestUnitConversions", "names", 
                         self.listToString(ar1), self.listToString(er1), out)

        cvt1 = unitConversions.converter("Area")
        r2 = cvt1.valid()
        ar2 = self.bool_to_str(r2)
        er2 = "True"
        self.printResult(r2, "UnitTestUnitConversions", "converter (Area)", 
                         ar2, er2, out)


        cvt2 = unitConversions.converter("Angle")
        r3 = cvt2.valid()
        ar3 = self.bool_to_str(r3)
        er3 = "True"
        self.printResult(r3, "UnitTestUnitConversions", "converter (Angle)", 
                         ar3, er3, out)

        end = datetime.now()
        diff = end - start
        self.printFooter("UnitTestUnitConversions", diff, out);
# EOF
