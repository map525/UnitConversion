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
// File Convert.java
//
// Base class for the converter. The converter is the interface used for 
// converting units. A converter exists for each type. The Convert base
// class contains methods for obtaining lists of unit names, system names,
// the default 'to' and 'from' systems, and type names for the Converter.
// Base class for systems.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;
import java.lang.reflect.*;

public class Convert
{
    /*
     * Constructor
     *
     * @param name       - (input) name of the Converter.
     * @param from       - (input) the name of the 'from' system.
     * @param to         - (input) the name of the 'to' system.
     * @param conversion - (input) a conversion object containing the systems
     *                     and associated units for the unit type.
     */
    public Convert(String name, 
                   String from, 
                   String to, 
                   Conversion conversion)
    {
        _name       = name;
        _toSystem   = to;
        _fromSystem = from;
        _valid      = true;
        _conversion = conversion;
    }

    /*
     * Copy Constructor
     *
     * @param other      - (input) Convert to copy.
     */
    public Convert(Convert other)
    {
        _name       = other._name;
        _toSystem   = other._toSystem;
        _fromSystem = other._fromSystem;
        _valid      = other._valid;
        try
        {
           Class<?> cClass = other._conversion.getClass();
           Class<?>[] types = new Class[] { cClass };
           Constructor<?> constructor = cClass.getConstructor(types);
           _conversion = (Conversion) constructor.newInstance(other._conversion);
        }
        catch(Exception e)
        {
            _name       = "Invalid";
            _toSystem   = "Invalid";
            _fromSystem = "Invalid";
            _valid      = false;
            _conversion = new Conversion();
        }
    }

    /*
     * Get a list of all the system names in the convert.
     *
     * @return - a list of system names in the convert.
     */
    public List<String> allSystemNames()
    {
        return _conversion.systemNames();
    }

    /*
     * Get a list of all the unit names in the convert.
     *
     * @return - a list of unit names in the convert.
     */
    public List <String> allUnitNames()
    {
        return _conversion.unitNames();
    }

    /*
     * The check method checks if the software version matches
     *        with the unit versions of its units.
     * 
     * @return - true if software and unit versions match, false otherwise.
     */
    public boolean check()
    {
        return _conversion.check();
    }
    
     /* 
      * Check if input is error code..
      *
      * @param x       - (input) value to check.
      *
      * @return - true if input is error code, false otherwise.
      */
    public boolean isError(double x)
    {
        return UBASE.isERROR(x);
    }

    /*
     * Get the name of the current 'from' system.
     *
     * @return - the name of the current 'from' system.
     */
    public String fromSystem()
    {
        return _fromSystem;
    }

    /*
     * Set the name of the current 'from' system.
     *
     * @param fSys - (input) name of the new 'from' system.
     */
    public void fromSystem(String fSys)
    {
        _fromSystem = fSys;
    }

    /*
     * Construct the full unit name from the system and unit names.
     * 
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return - the full unit name (unit name plus the system name).
     */
    public String fullUnitName(String systemName, 
                               String unitName)
    {
        return _conversion.fullUnitName(systemName, unitName);
    }
    
    /*
     * Get the names of the convert.
     *
     * @return - the name of the convert.
     */
    public String name()
    {
        return _name;
    }

    /*
     * Get the unit name from the full unit name.
     *
     * @param unitName - (input) the full unit name.
     *
     * @return - the unit name stripped of the system name.
     */
    public String rawUnitName(String unitName)
    {
        return _conversion.rawUnitName(unitName);
    }
    
    /*
     * Get the name of the current 'to' system.
     *
     * @return - the name of the current 'to' system.
     */
    public String toSystem()
    {
        return _toSystem;
    }

    /*
     * Set the name of the current 'to' system.
     *
     * @param tSys - (input) name of the new 'to' system.
     */
    public void toSystem(String tSys)
    {
        _toSystem = tSys;
    }

    /*
     * Get a list of all the unit type names in the convert.
     *
     * @return - a list of unit type names in the convert.
     */
    public List<String> typeNames()
    {
        return _conversion.typeNames();
    }

    /*
     * Get a flag that specifies if the convert is valid or not.
     *
     * @return - true if the convert contains one or more type groups 
     *           having one or more valid units.
     */
    public boolean valid()
    {
        return _valid;
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
    /*
     * The conversion object containing a unit type along with its associated 
     * type groups and units.     
     */
    protected Conversion _conversion;
    
    /*
     * Name of the Convert object; typically the unit type.
     */
    protected String     _name;
    
    /*
     * The name of the current 'from' system. During conversion, the unit to be
     * converted will be a member of this unit system.
     */
    protected String     _fromSystem;
    
    /*
     * The name of the current 'to' system. During conversion, the unit to be
     * converted will be converted to a unit in this unit system.
     */
    protected String     _toSystem;
    
    /*
     * A flag indicating if the Convert object is valid i.e. contains at least
     * one unit types consisting of one or more valid type groups having one or
     * more valid units.
     */
    protected boolean    _valid;
}

// EOF