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
// File UnitConversions.java
//
// Container class for all units and their conversions.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
package UnitConversion;

import java.util.*;
import Generated.*;

public class UnitConversions 
{
    /*
     * The Instance static method creates an instance of the UnitConversions  
     * class. This class is a singleton and is used to provide access to all the  
     * available unit conversions. See the Converter class for more details.
     *
     * @return - an instance of the UnitConversions class.
     */
    public static UnitConversions Instance()
    {
        return singleton_;
    }

    /*
     * The check method checks if the software version matches
     * with the unit versions of its units.
     * 
     * @return - true if software and unit versions match, false otherwise.
     */
    public boolean check()
    {
        for (Map.Entry<String, Converter> entry : _map.entrySet())
        {
            Converter cv = entry.getValue();
            if (cv.check())
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

    /*
     * Get a Converter object for the given unit.
     *
     * @param type - (input) name of unit type for which
     *                       unit conversions are desired.
     *
     * @return - a Converter object for performing unit conversions
     *           on units of the type specified.
     */
    public Converter converter(String type)
    {
        if (_map.containsKey(type))
        {
            return _map.get(type);  
        }
        else
        {
            return _map.get("Invalid");
        }
    }

    /*
     * Get a list of single unit type names available for unit conversion.
     *
     * @return - a list of unit types available for unit conversion.
     */
    public List<String> names()
    {
        ArrayList<String> keys = new ArrayList<String>();
        for (Map.Entry<String,Converter> entry : _map.entrySet())
        {
               keys.add(entry.getKey());
        }
        return keys;
    }

    /*
     * Default constructor (private); this class is a singleton.
     * A Converter object is created for each unit type that has one
     * or more type groups containing one or more units. The Converter
     * object is used to perform unit conversions on that unit type and
     * and contains all systems and their corresponding units of that
     * type. The Converter objects are created from the code generated 
     * from the Excel spreadsheet containing a list of all the supported
     * units.
     */
    private UnitConversions()  
    {
        _conversion = new Conversion();
        _map = new HashMap<String, Converter>();

        _map.put("Angle",                      new Converter("Angle",            "angle",                     "Angle",      "Angle",      Angle.Instance()));
        _map.put("SolidAngle",                 new Converter("Angle",            "solidAngle",                "SI",         "SI",         Angle.Instance()));
        _map.put("AngularVelocity",            new Converter("Angle",            "angularVelocity",           "Scientific", "Scientific", Angle.Instance()));
        _map.put("AngularAcceleration",        new Converter("Angle",            "angularAcceleration",       "SI",         "SI",         Angle.Instance()));

        _map.put("Computer",                   new Converter("Computer",         "computer",                  "Computer",   "Computer",   Computer.Instance()));
        _map.put("ScreenResolution",           new Converter("Computer",         "screenResolution",          "Computer",   "Computer",   Computer.Instance()));
        _map.put("Voxel",                      new Converter("Computer",         "voxel",                     "Computer",   "Computer",   Computer.Instance()));

        _map.put("Count",                      new Converter("Count",            "count",                     "Count",      "Count",      Count.Instance()));

        _map.put("LinearDensity",              new Converter("Density",          "linearDensity",             "Scientific", "Scientific", Density.Instance()));
        _map.put("SurfaceDensity",             new Converter("Density",          "surfaceDensity",            "Scientific", "Scientific", Density.Instance()));
        _map.put("Density",                    new Converter("Density",          "density",                   "Scientific", "Scientific", Density.Instance()));

        _map.put("Current",                    new Converter("EM",               "current",                   "SI",         "SI",         EM.Instance()));
        _map.put("Charge",                     new Converter("EM",               "charge",                    "SI",         "SI",         EM.Instance()));
        _map.put("MagneticFieldStrength",      new Converter("EM",               "magneticFieldStrength",     "SI",         "SI",         EM.Instance()));
        _map.put("Permeability",               new Converter("EM",               "permeability",              "US",         "US",         EM.Instance()));
        _map.put("MagneticDipoleMoment",       new Converter("EM",               "magneticDipoleMoment",      "Scientific", "Scientific" ,EM.Instance()));
        _map.put("CurrentDensity",             new Converter("EM",               "currentDensity",            "SI",         "SI",         EM.Instance()));
        _map.put("SurfaceChargeDensity",       new Converter("EM",               "surfaceChargeDensity",      "SI",         "SI",         EM.Instance()));
        _map.put("ChargeDensity",              new Converter("EM",               "chargeDensity",             "SI",         "SI",         EM.Instance()));
        _map.put("MagneticReluctance",         new Converter("EM",               "magneticReluctance",        "Scientific", "Scientific", EM.Instance()));
        _map.put("ElectricElastance",          new Converter("EM",               "electricElastance",         "Scientific", "Scientific", EM.Instance()));
        _map.put("ElectricConductance",        new Converter("EM",               "electricConductance",       "SI",         "SI",         EM.Instance()));
        _map.put("Capacitance",                new Converter("EM",               "capacitance",               "SI",         "SI",         EM.Instance()));
        _map.put("Conductivity",               new Converter("EM",               "conductivity",              "Scientific", "Scientific", EM.Instance()));
        _map.put("SpecificAcousticImpedance",  new Converter("EM",               "specificAcousticImpedance", "cgs",        "cgs",        EM.Instance()));
        _map.put("MagneticInduction",          new Converter("EM",               "magneticInduction",         "SI",         "SI",         EM.Instance()));
        _map.put("Inductance",                 new Converter("EM",               "inductance",                "SI",         "SI",         EM.Instance()));
        _map.put("Potential",                  new Converter("EM",               "potential",                 "SI",         "SI",         EM.Instance()));
        _map.put("Resistance",                 new Converter("EM",               "resistance",                "SI",         "SI",         EM.Instance()));
        _map.put("Resistivity",                new Converter("EM",               "resistivity",               "SI",         "SI",         EM.Instance()));
        _map.put("AcousticImpedance",          new Converter("EM",               "acousticImpedance",         "SI",         "SI",         EM.Instance()));
        _map.put("ElectricFieldStrength",      new Converter("EM",               "electricFieldStrength",     "SI",         "SI",         EM.Instance()));
        _map.put("MagneticFluxDensity",        new Converter("EM",               "magneticFluxDensity",       "SI",         "SI",         EM.Instance()));
        _map.put("ElectricFieldGradient",      new Converter("EM",               "electricFieldGradient",     "cgs",        "cgs",        EM.Instance()));
        _map.put("MagneticPotential",          new Converter("EM",               "magneticPotential",         "SI",         "SI",         EM.Instance()));
        _map.put("MagneticPermeability",       new Converter("EM",               "magneticPermeability",      "SI",         "SI",         EM.Instance()));

        _map.put("Energy",                     new Converter("Energy",           "energy",                    "SI",         "SI",         Energy.Instance()));
        _map.put("HeatFlux",                   new Converter("Energy",           "heatFlux",                  "Scientific", "Scientific", Energy.Instance()));
        _map.put("ThermalConductance",         new Converter("Energy",           "thermalConductance",        "SI",         "SI",         Energy.Instance()));
        _map.put("HeatTransfer",               new Converter("Energy",           "heatTransfer",              "Imperial",   "Imperial",   Energy.Instance()));
        _map.put("ThermalConductivity",        new Converter("Energy",           "thermalConductivity",       "SI",         "SI",         Energy.Instance()));
        _map.put("RadiantEnergy",              new Converter("Energy",           "radiantEnergy",             "SI",         "SI",         Energy.Instance()));
        _map.put("Entropy",                    new Converter("Energy",           "entropy",                   "SI",         "SI",         Energy.Instance()));
        _map.put("MolarEntropy",               new Converter("Energy",           "molarEntropy",              "SI",         "SI",         Energy.Instance()));
        _map.put("HeatInsulation",             new Converter("Energy",           "heatInsulation",            "UK",         "UK",         Energy.Instance()));
        _map.put("EnergyConsumption",          new Converter("Energy",           "energyConsumption",         "US",         "US",         Energy.Instance()));
        _map.put("SpecificHeatCapacity",       new Converter("Energy",           "specificHeatCapacity",      "UK",         "UK",         Energy.Instance()));
        _map.put("SpecificHeat",               new Converter("Energy",           "specificHeat",              "Scientific", "Scientific", Energy.Instance()));

        _map.put("Flow",                       new Converter("Flow",             "flow",                      "SI",         "SI",         Flow.Instance()));

        _map.put("Force",                       new Converter("Force",           "force",                     "SI",         "SI",         Force.Instance()));
        _map.put("Momentum",                    new Converter("Force",           "momentum",                  "SI",         "SI",         Force.Instance()));
        _map.put("Action",                      new Converter("Force",           "action",                    "SI",         "SI",         Force.Instance()));
        _map.put("MassFlow",                    new Converter("Force",           "massFlow",                  "SI",         "SI",         Force.Instance()));
        _map.put("QuadMoment",                  new Converter("Force",           "quadMoment",                "SI",         "SI",         Force.Instance()));

        _map.put("Frequency",                   new Converter("Frequency",       "frequency",                 "SI",         "SI",         Frequency.Instance()));
 
        _map.put("LuminousIntensity",           new Converter("Luminosity",      "luminousIntensity",         "SI",         "SI",         Luminosity.Instance()));
        _map.put("LuminousFlux",                new Converter("Luminosity",      "luminousFlux",              "SI",         "SI",         Luminosity.Instance()));
        _map.put("Luminance",                   new Converter("Luminosity",      "luminance",                 "Scientific", "Scientific", Luminosity.Instance()));
        _map.put("Illuminance",                 new Converter("Luminosity",      "illuminance",               "SI",         "SI",         Luminosity.Instance()));
        _map.put("RadiantIntensity",            new Converter("Luminosity",      "radiantIntensity",          "SI",         "SI",         Luminosity.Instance()));

        _map.put("Molarity",                    new Converter("Molarity",        "molarity",                  "Scientific", "Scientific", Molarity.Instance()));
        _map.put("SurfaceMolarity",             new Converter("Molarity",        "surfaceMolarity",           "Scientific", "Scientific", Molarity.Instance()));
        _map.put("MolarDensity",                new Converter("Molarity",        "molarDensity",              "SI",         "SI",         Molarity.Instance()));
        _map.put("MolarAbsorption",             new Converter("Molarity",        "molarAbsorption",           "SI",         "SI",         Molarity.Instance()));
        _map.put("RadiochemicalYield",          new Converter("Molarity",        "radiochemicalYield",        "SI",         "SI",         Molarity.Instance()));
        _map.put("Quantity",                    new Converter("Molarity",        "quantity",                  "SI",         "SI",         Molarity.Instance()));
        _map.put("EnzymaticActivity",           new Converter("Molarity",        "enzymaticActivity",         "SI",         "SI",         Molarity.Instance()));
        _map.put("MolarCharge",                 new Converter("Molarity",        "molarCharge",               "Scientific", "Scientific", Molarity.Instance()));

        _map.put("Power",                       new Converter("Power",           "power",                     "SI",         "SI",         Power.Instance()));

        _map.put("Pressure",                    new Converter("Pressure",        "pressure",                  "SI",         "SI",         Pressure.Instance()));
  
        _map.put("ParticleFlux",                new Converter("Radiation",       "particleFlux",              "Scientific", "Scientific", Radiation.Instance()));
        _map.put("SpecificEnergy",              new Converter("Radiation",       "specificEnergy",            "SI",         "SI",         Radiation.Instance()));
        _map.put("RadioactiveConcentration",    new Converter("Radiation",       "radioactiveConcentration",  "Scientific", "Scientific", Radiation.Instance()));
        _map.put("ExposureRate",                new Converter("Radiation",       "exposureRate",              "German",     "German",     Radiation.Instance()));
        _map.put("SpecificRadioactivity",       new Converter("Radiation",       "specificRadioactivity",     "SI",         "SI",         Radiation.Instance()));
        _map.put("Exposure",                    new Converter("Radiation",       "exposure",                  "Scientific", "Scientific", Radiation.Instance()));

        _map.put("SpecificLength",              new Converter("SpecificDensity", "specificLength",            "Imperial",   "Imperial",   SpecificDensity.Instance()));
        _map.put("SpecificVolume",              new Converter("SpecificDensity", "specificVolume",            "UK",         "UK",         SpecificDensity.Instance()));

        _map.put("Temperature",                 new Converter("Temperature",     "temperature",               "SI",         "SI",         Temperature.Instance()));

        _map.put("Time",                        new Converter("Time",            "time",                      "Time",       "Time",       Time.Instance()));

        _map.put("Velocity",                    new Converter("VelAccJrk",       "velocity",                  "Scientific", "Scientific", VelAccJrk.Instance()));
        _map.put("Acceleration",                new Converter("VelAccJrk",       "acceleration",              "Scientific", "Scientific", VelAccJrk.Instance()));
        _map.put("Jerk",                        new Converter("VelAccJrk",       "jerk",                      "SI",         "SI",         VelAccJrk.Instance()));

        _map.put("KinematicViscosity",          new Converter("Viscosity",       "kinematicViscosity",        "SI",         "SI",         Viscosity.Instance()));
        _map.put("DynamicViscosity",            new Converter("Viscosity",       "dynamicViscosity",          "SI",         "SI",         Viscosity.Instance()));

        _map.put("Wavenumber",                  new Converter("Wavenumber",      "wavenumber",                "SI",         "SI",         Wavenumber.Instance()));

        _map.put("Length",                      new Converter("Length",          "Length",                    "SI",         "SI",         GLOBAL_UNITS.Instance()));
        _map.put("Area",                        new Converter("Area",            "Area",                      "SI",         "SI",         GLOBAL_UNITS.Instance()));
        _map.put("Mass",                        new Converter("Mass",            "Mass",                      "SI",         "SI",         GLOBAL_UNITS.Instance()));
        _map.put("Liquid",                      new Converter("Liquid",          "Liquid",                    "SI",         "SI",         GLOBAL_UNITS.Instance()));
        _map.put("Dry",                         new Converter("Dry",             "Dry",                       "SI",         "SI",         GLOBAL_UNITS.Instance()));

        _map.put("Volume",                      new Converter("Volume",          "Volume", "Liquid", "Dry",   "SI",         "SI",         GLOBAL_UNITS.Instance()));

        _map.put("Invalid",                     new Converter("Invalid",         "Invalid",                   "Invalid",     "Invalid",   _conversion));
        

    }
    //**************************************************************************
    // Class data members
    //**************************************************************************
    /* 
     * An invalid conversion object used for reporting unsupported unit types. 
     */
    private Conversion _conversion;
    
    /* 
     * Convert objects are stored in a HashMap indexed by unit type. The map 
     * contains all the unit types for which unit conversions are supported.      
     */
    private HashMap<String, Converter> _map;
    
    /*
     * The one and only UnitConversion object.
     */
    private static UnitConversions singleton_ = new UnitConversions();
}
//EOF