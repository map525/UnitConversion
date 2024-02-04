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
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File UnitConversions.java
#
# Container class for all units and their conversions.
#
# Version 1.0
# 
#################################################################################
from . import Conversion
from . import Converter

from Generated import Angle
from Generated import Computer
from Generated import Count
from Generated import Density
from Generated import EM
from Generated import Energy
from Generated import Flow
from Generated import Force
from Generated import Frequency
from Generated import Luminosity
from Generated import Molarity
from Generated import Power
from Generated import Pressure
from Generated import Radiation
from Generated import SpecificDensity
from Generated import Temperature
from Generated import Time
from Generated import VelAccJrk
from Generated import Viscosity
from Generated import Wavenumber
from Generated import GLOBAL_UNITS


class UnitConversions(object):
    """
    Container class for all units and their conversions.
    
    Attributes
    ----------
    
    _conversion  - An invalid conversion object used for reporting unsupported 
                   unit types. 
        
    _map         - Converter objects are stored in a HashMap indexed by unit 
                   type. The map contains all the unit types for which unit 
                   conversions are supported.
           
    __instance   - (static) the one and only instance of the class.
                     
    Methods
    -------
    __init__  - constructor.
    
    _new__    - create and return a new instance of the class.
     
    Instance - returns the one and only instance of the class.
    
    check     - check that software and uit versions match.

    converter - get a Converter object for performing unit conversions. 

    names     - get a list of unit type names available for unit conversion.    
    """
 

    __instance = None
    """
    The one and only Version object.
    """
    
    @staticmethod 
    def Instance():
        """ 
        Static access method. 
        The Instance static method creates and instance of the UnitConversion  
        class. This class is a singleton and is used provides access to all the 
        available unit conversions. See the Convert class for more details.
        """
        if UnitConversions.__instance == None:
            UnitConversions.__instance = UnitConversions()
        return UnitConversions.__instance

    def __new__(self):
        """ Create and return a new instance of the class. """
        if UnitConversions.__instance == None:
            UnitConversions.__instance = super(UnitConversions, self).__new__(self)

        return  UnitConversions.__instance
   
    def check(self):
        """
        The check method checks if the software version matches
        with the unit versions of its units.
        
        Return
        ------
        True if software and unit versions match, false otherwise.
        """
        for item in self._map.items():
            if item[1].check() == True:
                continue
            else:
                return False
        return True

    def converter(self, tpe):
        """
        Get a Converter object for the given unit.

        Parameters
        ----------
        tpe - (input, string) name of unit type for which
                              conversions are desired.
              
        Return
        ------
        A Converter object for performing unit conversions on
        units type specified.
        Returns a Converter.
        """
        if tpe in self._map:
            return self._map.get(tpe)	
        else:
            return self._map.get("Invalid")

    def names(self):
        """
        Get a is of unit type names available for unit conversion.

        Return
        ------
        A list of unit types available for unit conversion.
        Return type is a list of strings.
        """
        keys = list()
        for key in self._map:
            keys.append(key)
        return keys

    def __init__(self):
        """
        Constructor ('private'); this class is a 'singleton'.
        A Convert object is created for each unit type that has one
        or more unit systems containing one or more units. The Convert
        object is used to perform unit conversions on that unit type and
        and contains all systems and their corresponding units of that
        type. The Convert objects are created from the code generated 
        from the Excel spreadsheet containing a list of all the supported
        units.
        """
        super().__init__()
        self._conversion = Conversion.Conversion();
        self._map = dict();

        self._map.update({"Angle"                      : Converter.Converter("Angle",           "angle",                     "Angle",      "Angle",      Angle.Angle.Instance())})
        self._map.update({"SolidAngle"                 : Converter.Converter("Angle",           "solidAngle",                "SI",         "SI",         Angle.Angle.Instance())})
        self._map.update({"AngularVelocity"            : Converter.Converter("Angle",           "angularVelocity",           "Scientific", "Scientific", Angle.Angle.Instance())})
        self._map.update({"AngularAcceleration"        : Converter.Converter("Angle",           "angularAcceleration",       "SI",         "SI",         Angle.Angle.Instance())})

        self._map.update({"Computer"                   : Converter.Converter("Computer",        "computer",                  "Computer",   "Computer",   Computer.Computer.Instance())})
        self._map.update({"ScreenResolution"           : Converter.Converter("Computer",        "screenResolution",          "Computer",   "Computer",   Computer.Computer.Instance())})
        self._map.update({"Voxel"                      : Converter.Converter("Computer",        "voxel",                     "Computer",   "Computer",   Computer.Computer.Instance())})

        self._map.update({"Count"                      : Converter.Converter("Count",           "count",                     "Count",      "Count",      Count.Count.Instance())})

        self._map.update({"LinearDensity"              : Converter.Converter("Density",         "linearDensity",             "Scientific", "Scientific", Density.Density.Instance())})
        self._map.update({"SurfaceDensity"             : Converter.Converter("Density",         "surfaceDensity",            "Scientific", "Scientific", Density.Density.Instance())})
        self._map.update({"Density"                    : Converter.Converter("Density",         "density",                   "Scientific", "Scientific", Density.Density.Instance())})

        self._map.update({"Current"                    : Converter.Converter("EM",              "current",                   "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Charge"                     : Converter.Converter("EM",              "charge",                    "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"MagneticFieldStrength"      : Converter.Converter("EM",              "magneticFieldStrength",     "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Permeability"               : Converter.Converter("EM",              "permeability",              "US",         "US",         EM.EM.Instance())})
        self._map.update({"MagneticDipoleMoment"       : Converter.Converter("EM",              "magneticDipoleMoment",      "Scientific", "Scientific", EM.EM.Instance())})
        self._map.update({"CurrentDensity"             : Converter.Converter("EM",              "currentDensity",            "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"SurfaceChargeDensity"       : Converter.Converter("EM",              "surfaceChargeDensity",      "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"ChargeDensity"              : Converter.Converter("EM",              "chargeDensity",             "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"MagneticReluctance"         : Converter.Converter("EM",              "magneticReluctance",        "Scientific", "Scientific", EM.EM.Instance())})
        self._map.update({"ElectricElastance"          : Converter.Converter("EM",              "electricElastance",         "Scientific", "Scientific", EM.EM.Instance())})
        self._map.update({"ElectricConductance"        : Converter.Converter("EM",              "electricConductance",       "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Capacitance"                : Converter.Converter("EM",              "capacitance",               "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Conductivity"               : Converter.Converter("EM",              "conductivity",              "Scientific", "Scientific", EM.EM.Instance())})
        self._map.update({"SpecificAcousticImpedance"  : Converter.Converter("EM",              "specificAcousticImpedance", "cgs",        "cgs",        EM.EM.Instance())})
        self._map.update({"MagneticInduction"          : Converter.Converter("EM",              "magneticInduction",         "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Inductance"                 : Converter.Converter("EM",              "inductance",                "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Potential"                  : Converter.Converter("EM",              "potential",                 "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Resistance"                 : Converter.Converter("EM",              "resistance",                "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"Resistivity"                : Converter.Converter("EM",              "resistivity",               "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"AcousticImpedance"          : Converter.Converter("EM",              "acousticImpedance",         "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"ElectricFieldStrength"      : Converter.Converter("EM",              "electricFieldStrength",     "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"MagneticFluxDensity"        : Converter.Converter("EM",              "magneticFluxDensity",       "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"ElectricFieldGradient"      : Converter.Converter("EM",              "electricFieldGradient",     "cgs",        "cgs",        EM.EM.Instance())})
        self._map.update({"MagneticPotential"          : Converter.Converter("EM",              "magneticPotential",         "SI",         "SI",         EM.EM.Instance())})
        self._map.update({"MagneticPermeability"       : Converter.Converter("EM",              "magneticPermeability",      "SI",         "SI",         EM.EM.Instance())})

        self._map.update({"Energy"                     : Converter.Converter("Energy",          "energy",                    "SI",         "SI",         Energy.Energy.Instance())})
        self._map.update({"HeatFlux"                   : Converter.Converter("Energy",          "heatFlux",                  "Scientific", "Scientific", Energy.Energy.Instance())})
        self._map.update({"ThermalConductance"         : Converter.Converter("Energy",          "thermalConductance",        "SI",         "SI",         Energy.Energy.Instance())})
        self._map.update({"HeatTransfer"               : Converter.Converter("Energy",          "heatTransfer",              "Imperial",   "Imperial",   Energy.Energy.Instance())})
        self._map.update({"ThermalConductivity"        : Converter.Converter("Energy",          "thermalConductivity",       "SI",         "SI",         Energy.Energy.Instance())})
        self._map.update({"RadiantEnergy"              : Converter.Converter("Energy",          "radiantEnergy",             "SI",         "SI",         Energy.Energy.Instance())})
        self._map.update({"Entropy"                    : Converter.Converter("Energy",          "entropy",                   "SI",         "SI",         Energy.Energy.Instance())})
        self._map.update({"MolarEntropy"               : Converter.Converter("Energy",          "molarEntropy",              "SI",         "SI",         Energy.Energy.Instance())})
        self._map.update({"HeatInsulation"             : Converter.Converter("Energy",          "heatInsulation",            "UK",         "UK",         Energy.Energy.Instance())})
        self._map.update({"EnergyConsumption"          : Converter.Converter("Energy",          "energyConsumption",         "US",         "US",         Energy.Energy.Instance())})
        self._map.update({"SpecificHeatCapacity"       : Converter.Converter("Energy",          "specificHeatCapacity",      "UK",         "UK",         Energy.Energy.Instance())})
        self._map.update({"SpecificHeat"               : Converter.Converter("Energy",          "specificHeat",              "Scientific", "Scientific", Energy.Energy.Instance())})

        self._map.update({"Flow"                       : Converter.Converter("Flow",            "flow",                      "SI",         "SI",         Flow.Flow.Instance())})

        self._map.update({"Force"                      : Converter.Converter("Force",           "force",                     "SI",         "SI",         Force.Force.Instance())})
        self._map.update({"Momentum"                   : Converter.Converter("Force",           "momentum",                  "SI",         "SI",         Force.Force.Instance())})
        self._map.update({"Action"                     : Converter.Converter("Force",           "action",                    "SI",         "SI",         Force.Force.Instance())})
        self._map.update({"MassFlow"                   : Converter.Converter("Force",           "massFlow",                  "SI",         "SI",         Force.Force.Instance())})
        self._map.update({"QuadMoment"                 : Converter.Converter("Force",           "quadMoment",                "SI",         "SI",         Force.Force.Instance())})

        self._map.update({"Frequency"                  : Converter.Converter("Frequency",       "frequency",                 "SI",         "SI",         Frequency.Frequency.Instance())})

        self._map.update({"LuminousIntensity"          : Converter.Converter("Luminosity",      "luminousIntensity",         "SI",         "SI",         Luminosity.Luminosity.Instance())})
        self._map.update({"LuminousFlux"               : Converter.Converter("Luminosity",      "luminousFlux",              "SI",         "SI",         Luminosity.Luminosity.Instance())})
        self._map.update({"Luminance"                  : Converter.Converter("Luminosity",      "luminance",                 "Scientific", "Scientific", Luminosity.Luminosity.Instance())})
        self._map.update({"Illuminance"                : Converter.Converter("Luminosity",      "illuminance",               "SI",         "SI",         Luminosity.Luminosity.Instance())})
        self._map.update({"RadiantIntensity"           : Converter.Converter("Luminosity",      "radiantIntensity",          "SI",         "SI",         Luminosity.Luminosity.Instance())})

        self._map.update({"Molarity"                   : Converter.Converter("Molarity",        "molarity",                  "Scientific", "Scientific", Molarity.Molarity.Instance())})
        self._map.update({"SurfaceMolarity"            : Converter.Converter("Molarity",        "surfaceMolarity",           "Scientific", "Scientific", Molarity.Molarity.Instance())})
        self._map.update({"MolarDensity"               : Converter.Converter("Molarity",        "molarDensity",              "SI",         "SI",         Molarity.Molarity.Instance())})
        self._map.update({"MolarAbsorption"            : Converter.Converter("Molarity",        "molarAbsorption",           "SI",         "SI",         Molarity.Molarity.Instance())})
        self._map.update({"RadiochemicalYield"         : Converter.Converter("Molarity",        "radiochemicalYield",        "SI",         "SI",         Molarity.Molarity.Instance())})
        self._map.update({"Quantity"                   : Converter.Converter("Molarity",        "quantity",                  "SI",         "SI",         Molarity.Molarity.Instance())})
        self._map.update({"EnzymaticActivity"          : Converter.Converter("Molarity",        "enzymaticActivity",         "SI",         "SI",         Molarity.Molarity.Instance())})
        self._map.update({"MolarCharge"                : Converter.Converter("Molarity",        "molarCharge",               "Scientific", "Scientific", Molarity.Molarity.Instance())})

        self._map.update({"Power"                      : Converter.Converter("Power",           "power",                     "SI",         "SI",         Power.Power.Instance())})

        self._map.update({"Pressure"                   : Converter.Converter("Pressure",        "pressure",                  "SI",         "SI",         Pressure.Pressure.Instance())})

        self._map.update({"ParticleFlux"               : Converter.Converter("Radiation",       "particleFlux",              "Scientific", "Scientific", Radiation.Radiation.Instance())})
        self._map.update({"SpecificEnergy"             : Converter.Converter("Radiation",       "specificEnergy",            "SI",         "SI",         Radiation.Radiation.Instance())})
        self._map.update({"RadioactiveConcentration"   : Converter.Converter("Radiation",       "radioactiveConcentration",  "Scientific", "Scientific", Radiation.Radiation.Instance())})
        self._map.update({"ExposureRate"               : Converter.Converter("Radiation",       "exposureRate",              "German",     "German",     Radiation.Radiation.Instance())})
        self._map.update({"SpecificRadioactivity"      : Converter.Converter("Radiation",       "specificRadioactivity",     "SI",         "SI",         Radiation.Radiation.Instance())})
        self._map.update({"Exposure"                   : Converter.Converter("Radiation",       "exposure",                  "Scientific", "Scientific", Radiation.Radiation.Instance())})

        self._map.update({"SpecificLength"             : Converter.Converter("SpecificDensity", "specificLength",            "Imperial",   "Imperial",   SpecificDensity.SpecificDensity.Instance())})
        self._map.update({"SpecificVolume"             : Converter.Converter("SpecificDensity", "specificVolume",            "UK",         "UK",         SpecificDensity.SpecificDensity.Instance())})

        self._map.update({"Temperature"                : Converter.Converter("Temperature",     "temperature",               "SI",         "SI",         Temperature.Temperature.Instance())})

        self._map.update({"Time"                       : Converter.Converter("Time",            "time",                      "Time",       "Time",       Time.Time.Instance())})

        self._map.update({"Velocity"                   : Converter.Converter("VelAccJrk",       "velocity",                  "Scientific", "Scientific", VelAccJrk.VelAccJrk.Instance())})
        self._map.update({"Acceleration"               : Converter.Converter("VelAccJrk",       "acceleration",              "Scientific", "Scientific", VelAccJrk.VelAccJrk.Instance())})
        self._map.update({"Jerk"                       : Converter.Converter("VelAccJrk",       "jerk",                      "SI",         "SI",         VelAccJrk.VelAccJrk.Instance())})

        self._map.update({"KinematicViscosity"         : Converter.Converter("Viscosity",       "kinematicViscosity",        "SI",         "SI",         Viscosity.Viscosity.Instance())})
        self._map.update({"DynamicViscosity"           : Converter.Converter("Viscosity",       "dynamicViscosity",          "SI",         "SI",         Viscosity.Viscosity.Instance())})

        self._map.update({"Wavenumber"                 : Converter.Converter("Wavenumber",      "wavenumber",                "SI",         "SI",         Wavenumber.Wavenumber.Instance())})

        self._map.update({"Length"                     : Converter.Converter("Length",          "Length",                    "SI",         "SI",         GLOBAL_UNITS.GLOBAL_UNITS.Instance())})
        self._map.update({"Area"                       : Converter.Converter("Area",            "Area",                      "SI",         "SI",         GLOBAL_UNITS.GLOBAL_UNITS.Instance())})
        self._map.update({"Mass"                       : Converter.Converter("Mass",            "Mass",                      "SI",         "SI",         GLOBAL_UNITS.GLOBAL_UNITS.Instance())})
        self._map.update({"Liquid"                     : Converter.Converter("Liquid",          "Liquid",                    "SI",         "SI",         GLOBAL_UNITS.GLOBAL_UNITS.Instance())})
        self._map.update({"Dry"                        : Converter.Converter("Dry",             "Dry",                       "SI",         "SI",         GLOBAL_UNITS.GLOBAL_UNITS.Instance())})
        
        self._map.update({"Volume"                     : Converter.Converter("Volume",          "Volume","Liquid", "Dry",    "SI",         "SI",         GLOBAL_UNITS.GLOBAL_UNITS.Instance())})

        self._map.update({"Invalid"                    : Converter.Converter("Invalid",         "Invalid",                   "Invalid",    "Invalid",    self._conversion)})
             
# EOF