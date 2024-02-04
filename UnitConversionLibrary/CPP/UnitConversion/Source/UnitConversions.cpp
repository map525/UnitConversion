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
// File UnitConversions.cpp
//
// Container class for all units and their conversions.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#include "UnitConversions.hpp"

#include "Angle.hpp"
#include "Computer.hpp"
#include "Count.hpp"
#include "Density.hpp"
#include "EM.hpp"
#include "Energy.hpp"
#include "Flow.hpp"
#include "Force.hpp"
#include "Frequency.hpp"
#include "Luminosity.hpp"
#include "Molarity.hpp"
#include "Power.hpp"
#include "Pressure.hpp"
#include "Radiation.hpp"
#include "SpecificDensity.hpp"
#include "Temperature.hpp"
#include "Time.hpp"
#include "VelAccJrk.hpp"
#include "Viscosity.hpp"
#include "Wavenumber.hpp"

#include "Global_UNITS.hpp"
#include "SYSTEM_UNITS.hpp"

/**
 * @brief The Instance static method creates and instance of the UnitConversion  
 * class. This class is a singleton and is used provides access to all the 
 * available unit conversions. See the Convert class for more details.
 *
 * @return - an instance of the UnitConversions class.
 */
UnitConversions& UnitConversions::Instance(void)
{
    static UnitConversions singleton;
    return singleton;
}

/**
 * @brief The check method checks if the software version matches
 *        with the unit versions of its units.
 * 
 * @return - true if software and unit versions match, false otherwise.
 */
bool UnitConversions::check(void) const
{
    for (std::map<std::string, Converter*>::const_iterator it = _map.begin(); 
                                                           it != _map.end(); ++it)
    {
        Converter* cv = it->second;
        if (cv->check())
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

/**
 * @brief Get a Converter object for the given unit.
 *
 * @param[in] type - name of unit type for which
 *                   unit conversions are desired.
 *
 * @return - a Converter object for performing unit conversions
 *           on units of the type specified.
 */
Converter& UnitConversions::converter(const std::string& unit)
{
    if (_map.count(unit) == 0)
    {
        return *_map.at("Invalid");
    }
    else
    {
        return *_map.at(unit);
    }
}

/**
 * @brief Get a list of unit type names available for unit conversion.
 *
 * @return - a list of unit types available for unit conversion.
 */
std::list<std::string> UnitConversions::names(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, Converter*>::const_iterator it = _map.begin(); 
        it != _map.end(); ++it) 
    {
        keys.push_back(it->first);
    }
    return keys;
}

/**
 * @brief Default constructor (private); this class is a singleton.
 * A Converter object is created for each unit type that has one
 * or more unit systems containing one or more units. The Converter
 * object is used to perform unit conversions on that unit type and
 * and contains all systems and their corresponding units of that
 * type. The Converter objects are created from the code generated 
 * from the Excel spreadsheet containing a list of all the supported
 * units.
 */
UnitConversions::UnitConversions(void) : _conversion() 
{
    _map["Angle"]                     = new Converter("Angle",          "angle",                    "Angle",      "Angle",      Angle::Instance());
    _map["SolidAngle"]                = new Converter("Angle",          "solidAngle",               "SI",         "SI",         Angle::Instance());
    _map["AngularVelocity"]           = new Converter("Angle",          "angularVelocity",          "Scientific", "Scientific", Angle::Instance());
    _map["AngularAcceleration"]       = new Converter("Angle",          "angularAcceleration",      "SI",         "SI",         Angle::Instance());
     
    _map["Computer"]                  = new Converter("Computer",       "computer",                 "Computer",   "Computer",   Computer::Instance());
    _map["ScreenResolution"]          = new Converter("Computer",       "screenResolution",         "Computer",   "Computer",   Computer::Instance());
    _map["Voxel"]                     = new Converter("Computer",       "voxel",                    "Computer",   "Computer",   Computer::Instance());

    _map["Count"]                     = new Converter("Count",          "count",                    "Count",      "Count",      Count::Instance());

    _map["LinearDensity"]             = new Converter("Density",        "linearDensity",            "Scientific", "Scientific", Density::Instance());
    _map["SurfaceDensity"]            = new Converter("Density",        "surfaceDensity",           "Scientific", "Scientific", Density::Instance());
    _map["Density"]                   = new Converter("Density",        "density",                  "Scientific", "Scientific", Density::Instance());

    _map["Current"]                   = new Converter("EM",             "current",                  "SI",          "SI",        EM::Instance());
    _map["Charge"]                    = new Converter("EM",             "charge",                   "SI",          "SI",        EM::Instance());
    _map["MagneticFieldStrength"]     = new Converter("EM",             "magneticFieldStrength",    "SI",          "SI",        EM::Instance());
    _map["Permeability"]              = new Converter("EM",             "permeability",             "US",          "US",        EM::Instance());
    _map["MagneticDipoleMoment"]      = new Converter("EM",             "magneticDipoleMoment",     "Scientific",  "Scientific",EM::Instance());
    _map["CurrentDensity"]            = new Converter("EM",             "currentDensity",           "SI",          "SI",        EM::Instance());
    _map["SurfaceChargeDensity"]      = new Converter("EM",             "surfaceChargeDensity",     "SI",          "SI",        EM::Instance());
    _map["ChargeDensity"]             = new Converter("EM",             "chargeDensity",            "SI",          "SI",        EM::Instance());
    _map["MagneticReluctance"]        = new Converter("EM",             "magneticReluctance",       "Scientific",  "Scientific",EM::Instance());
    _map["ElectricElastance"]         = new Converter("EM",             "electricElastance",        "Scientific",  "Scientific",EM::Instance());
    _map["ElectricConductance"]       = new Converter("EM",             "electricConductance",      "SI",          "SI",        EM::Instance());
    _map["Capacitance"]               = new Converter("EM",             "capacitance",              "SI",          "SI",        EM::Instance());
    _map["Conductivity"]              = new Converter("EM",             "conductivity",             "Scientific",  "Scientific",EM::Instance());
    _map["SpecificAcousticImpedance"] = new Converter("EM",             "specificAcousticImpedance","cgs",         "cgs",       EM::Instance());
    _map["MagneticInduction"]         = new Converter("EM",             "magneticInduction",        "SI",          "SI",        EM::Instance());
    _map["Inductance"]                = new Converter("EM",             "inductance",               "SI",          "SI",        EM::Instance());
    _map["Potential"]                 = new Converter("EM",             "potential",                "SI",          "SI",        EM::Instance());
    _map["Resistance"]                = new Converter("EM",             "resistance",               "SI",          "SI",        EM::Instance());
    _map["Resistivity"]               = new Converter("EM",             "resistivity",              "SI",          "SI",        EM::Instance());
    _map["AcousticImpedance"]         = new Converter("EM",             "acousticImpedance",        "SI",          "SI",        EM::Instance());
    _map["ElectricFieldStrength"]     = new Converter("EM",             "electricFieldStrength",    "SI",          "SI",        EM::Instance());
    _map["MagneticFluxDensity"]       = new Converter("EM",             "magneticFluxDensity",      "SI",          "SI",        EM::Instance());
    _map["ElectricFieldGradient"]     = new Converter("EM",             "electricFieldGradient",    "cgs",         "cgs",       EM::Instance());
    _map["MagneticPotential"]         = new Converter("EM",             "magneticPotential",        "SI",          "SI",        EM::Instance());
    _map["MagneticPermeability"]      = new Converter("EM",             "magneticPermeability",     "SI",          "SI",        EM::Instance());

    _map["Energy"]                    = new Converter("Energy",         "energy",                   "SI",          "SI",        Energy::Instance());
    _map["HeatFlux"]                  = new Converter("Energy",         "heatFlux",                 "Scientific",  "Scientific",Energy::Instance());
    _map["ThermalConductance"]        = new Converter("Energy",         "thermalConductance",       "SI",          "SI",        Energy::Instance());
    _map["HeatTransfer"]              = new Converter("Energy",         "heatTransfer",             "Imperial",    "Imperial",  Energy::Instance());
    _map["ThermalConductivity"]       = new Converter("Energy",         "thermalConductivity",      "SI",          "SI",        Energy::Instance());
    _map["RadiantEnergy"]             = new Converter("Energy",         "radiantEnergy",            "SI",          "SI",        Energy::Instance());
    _map["Entropy"]                   = new Converter("Energy",         "entropy",                  "SI",          "SI",        Energy::Instance());
    _map["MolarEntropy"]              = new Converter("Energy",         "molarEntropy",             "SI",          "SI",        Energy::Instance());
    _map["HeatInsulation"]            = new Converter("Energy",         "heatInsulation",           "UK",          "UK",        Energy::Instance());
    _map["EnergyConsumption"]         = new Converter("Energy",         "energyConsumption",        "US",          "US",        Energy::Instance());
    _map["SpecificHeatCapacity"]      = new Converter("Energy",         "specificHeatCapacity",     "UK",          "UK",        Energy::Instance());
    _map["SpecificHeat"]              = new Converter("Energy",         "specificHeat",             "Scientific",  "Scientific",Energy::Instance());
     
    _map["Flow"]                      = new Converter("Flow",           "flow",                     "SI",          "SI",        Flow::Instance());

    _map["Force"]                     = new Converter("Force",          "force",                    "SI",          "SI",        Force::Instance());
    _map["Momentum"]                  = new Converter("Force",          "momentum",                 "SI",          "SI",        Force::Instance());
    _map["Action"]                    = new Converter("Force",          "action",                   "SI",          "SI",        Force::Instance());
    _map["MassFlow"]                  = new Converter("Force",          "massFlow",                 "SI",          "SI",        Force::Instance());
    _map["QuadMoment"]                = new Converter("Force",          "quadMoment",               "SI",          "SI",        Force::Instance());

    _map["Frequency"]                 = new Converter("Frequency",      "frequency",                "SI",          "SI",        Frequency::Instance());

    _map["LuminousIntensity"]         = new Converter("Luminosity",     "luminousIntensity",        "SI",          "SI",        Luminosity::Instance());
    _map["LuminousFlux"]              = new Converter("Luminosity",     "luminousFlux",             "SI",          "SI",        Luminosity::Instance());
    _map["Luminance"]                 = new Converter("Luminosity",     "luminance",                "Scientific",  "Scientific",Luminosity::Instance());
    _map["Illuminance"]               = new Converter("Luminosity",     "illuminance",              "SI",          "SI",        Luminosity::Instance());
    _map["RadiantIntensity"]          = new Converter("Luminosity",     "radiantIntensity",         "SI",          "SI"        ,Luminosity::Instance());

    _map["Molarity"]                  = new Converter("Molarity",       "molarity",                 "Scientific",  "Scientific",Molarity::Instance());
    _map["SurfaceMolarity"]           = new Converter("Molarity",       "surfaceMolarity",          "Scientific",  "Scientific",Molarity::Instance());
    _map["MolarDensity"]              = new Converter("Molarity",       "molarDensity",             "SI",          "SI",        Molarity::Instance());
    _map["MolarAbsorption"]           = new Converter("Molarity",       "molarAbsorption",          "SI",          "SI",        Molarity::Instance());
    _map["RadiochemicalYield"]        = new Converter("Molarity",       "radiochemicalYield",       "SI",          "SI",        Molarity::Instance());
    _map["Quantity"]                  = new Converter("Molarity",       "quantity",                 "SI",          "SI",        Molarity::Instance());
    _map["EnzymaticActivity"]         = new Converter("Molarity",       "enzymaticActivity",        "SI",          "SI",        Molarity::Instance());
    _map["MolarCharge"]               = new Converter("Molarity",       "molarCharge",              "Scientific",  "Scientific",Molarity::Instance());

    _map["Power"]                     = new Converter("Power",          "power",                    "SI",          "SI",        Power::Instance());

    _map["Pressure"]                  = new Converter("Pressure",       "pressure",                 "SI",          "SI",        Pressure::Instance());

    _map["ParticleFlux"]              = new Converter("Radiation",      "particleFlux",             "Scientific",  "Scientific",Radiation::Instance());
    _map["SpecificEnergy"]            = new Converter("Radiation",      "specificEnergy",           "SI",          "SI",        Radiation::Instance());
    _map["RadioactiveConcentration"]  = new Converter("Radiation",      "radioactiveConcentration", "Scientific",  "Scientific",Radiation::Instance());
    _map["ExposureRate"]              = new Converter("Radiation",      "exposureRate",             "German",      "German",    Radiation::Instance());
    _map["SpecificRadioactivity"]     = new Converter("Radiation",      "specificRadioactivity",    "SI",          "SI",        Radiation::Instance());
    _map["Exposure"]                  = new Converter("Radiation",      "exposure",                 "Scientific",  "Scientific",Radiation::Instance());

    _map["SpecificLength"]            = new Converter("SpecificDensity","specificLength",           "Imperial",    "Imperial",  SpecificDensity::Instance());
    _map["SpecificVolume"]            = new Converter("SpecificDensity","specificVolume",           "UK",          "UK",        SpecificDensity::Instance());

    _map["Temperature"]               = new Converter("Temperature",    "temperature",              "SI",          "SI",        Temperature::Instance());

    _map["Time"]                      = new Converter("Time",           "time",                     "Time",        "Time",      Time::Instance());

    _map["Velocity"]                  = new Converter("VelAccJrk",      "velocity",                 "Scientific",  "Scientific",VelAccJrk::Instance());
    _map["Acceleration"]              = new Converter("VelAccJrk",      "acceleration",             "Scientific",  "Scientific",VelAccJrk::Instance());
    _map["Jerk"]                      = new Converter("VelAccJrk",      "jerk",                     "SI",          "SI",        VelAccJrk::Instance());

    _map["KinematicViscosity"]        = new Converter("Viscosity",      "kinematicViscosity",       "SI",          "SI",        Viscosity::Instance());
    _map["DynamicViscosity"]          = new Converter("Viscosity",      "dynamicViscosity",         "SI",          "SI",        Viscosity::Instance());

    _map["Wavenumber"]                = new Converter("Wavenumber",     "wavenumber",               "SI",          "SI",        Wavenumber::Instance());

    _map["Length"]                    = new Converter("Length",         "Length",                   "SI",          "SI",        GLOBAL_UNITS::Instance());
    _map["Area"]                      = new Converter("Area",           "Area",                     "SI",          "SI",        GLOBAL_UNITS::Instance());
    _map["Mass"]                      = new Converter("Mass",           "Mass",                     "SI",          "SI",        GLOBAL_UNITS::Instance());
    _map["Liquid"]                    = new Converter("Liquid",         "Liquid",                   "SI",          "SI",        GLOBAL_UNITS::Instance());
    _map["Dry"]                       = new Converter("Dry",            "Dry",                      "SI",          "SI",        GLOBAL_UNITS::Instance());

    _map["Volume"]                    = new Converter("Volume",         "Volume", "Liquid","Dry",   "SI",          "SI",        GLOBAL_UNITS::Instance());

    _map["Invalid"]                   = new Converter("Invalid",        "Invalid",                  "Invalid",     "Invalid",   _conversion);
}
//EOF
