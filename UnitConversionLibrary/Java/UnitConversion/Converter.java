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
// File Converter.java
//
// A converter contains methods that perform unit conversions between units
// of the same type. Units may be added or removed from the converter.  In
// general conversion is allowed only between units of the same type. However,
// volume units are divided into liquid and dry and since these have the 
// same dimensions, unit conversion is allowed between them.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class Converter extends Convert
{
    /*
     * Constructor
     *
     * @param name       - (input) name of the Converter.
     * @param type       - (input) the unit type.
     * @param fromType   - (input) the 'from' unit type.
     * @param toType     - (input) the 'to' unit type.
     * @param from       - (input) the name of the 'from' system.
     * @param to         - (input) the name of the 'to' system.
     * @param conversion - (input) a conversion object containing the type
     *                             groups and associated units for the unit type.
     */
    public Converter(String name, 
                     String type, 
                     String fromType, 
                     String toType, 
                     String from, 
                     String to, 
                     Conversion conversion)
    {
        super(name, from, to, conversion);
        _type     = type;
        _fromType = fromType;
        _toType   = toType;
    }

    /*
     * Constructor
     *
     * @param name       - (input) name of the Converter.
     * @param type       - (input) the unit type.
     * @param from       - (input) the name of the 'from' system.
     * @param to         - (input) the name of the 'to' system.
     * @param conversion - (input) a conversion object containing the type
     *                             groups and associated units for the unit type.
     */
    public Converter(String name, 
                     String type, 
                     String from, 
                     String to, 
                     Conversion conversion)
    {
        super(name, from, to, conversion);
        _type     = type;
        _fromType = type;
        _toType   = type;
    }

    /*
     * Add a unit to the converter.
     *
     * @param sysName    - (input) name of unit system new unit belongs to.
     * @param unitName   - (input) the name of the new unit.
     * @param bse        - (input) the new unit.
     *
     * @return - true if the unit as successfully added, false otherwise.
     */
    public boolean addUnit(String sysName, String unitName, UBASE bse)
    {
        return _conversion.addUnit(_type, sysName, unitName, bse);
    }

    /*
     * Convert input value from its specified 'from' units to the 
     * specified 'to' units.
     *
     * @param value      - (input) value of unit in 'from' units.
     * @param from       - (input) the name of the 'from' unit.
     * @param to         - (input) the name of the 'to' unit.
     *
     * @return - the converted value of the input unit.
     */
    public double convert(double value, 
                          String from, 
                          String to)
    {
       return _conversion.convertUnit(value, _fromType, _toType, 
                                      from, _fromSystem, to, _toSystem, 
                                      false);
    }

    /*
     * Convert input value from its specified 'from' units in 'from' system 
     * to the specified 'to' units in 'to' system.
     *
     * @param value      - (input) value of unit in 'from' units.
     * @param from       - (input) the name of the 'from' unit.
     * @param to         - (input) the name of the 'to' unit.
     * @param asIs       - (input) if true, do not construct full unit names, 
     *                             but use the unit names supplied 'as is'.
     *
     * @return - the converted value of the input unit.
     */
    public double convert(double value, 
                          String from, 
                          String to, 
                          boolean asIs)
    {
       return _conversion.convertUnit(value, _fromType, _toType, 
                                      from, _fromSystem, to, _toSystem, 
                                      asIs);
    }

    /*
     * Convert input value from its specified (from) units in 'from' system to 
     * the specified 'to' units in 'to' system.
     *
     * @param value      - (input) value of unit in 'from' units.
     * @param from       - (input) the name of the 'from' unit.
     * @param fromSys    - (input) the name of the 'from' system.
     * @param to         - (input) the name of the 'to' unit.
     * @param toSys      - (input) the name of the 'to' system.
     *
     * @return - the converted value of the input unit.
     */
    public double convert(double value,  
                          String from, 
                          String fromSys, 
                          String to, 
                          String toSys)
    {
       return _conversion.convertUnit(value,  _type, _type, 
                                      from, fromSys, to, toSys, 
                                      false);
    }

    /*
     * Set the 'from' type.
     * 
     * @param fromType - (input) the 'from' unit type.
     * 
     * @returns = true of type change was made, false otherwise.
     */
    public boolean fromType(String fromType)
    {
        if (_conversion.validateType(fromType, _toType))
        {
            _fromType = fromType;
            return true;
        }
        else
        {
            return false;
        }
    }

    /*
     * Get the 'from' type.
     * 
     * @return - the 'from' unit type.
     */
    public String fromType()
    {
        return _fromType;
    } 
    
    /*
     * Remove a unit from the converter.
     *
     * @param sysName    - (input) name of unit system the unit belongs to.
     * @param unitName   - (input) the name of the unit to remove.
     *
     * @return - true if the unit as successfully removed, false otherwise.
     */
    public boolean removeUnit(String sysName, 
                              String unitName)
    {
        return _conversion.removeUnit(_type, sysName, unitName);
    }

    /*
     * Get a TypeGroup in the converter.
     *
     * @param tgName - (input) the name of the type group to get.
     *
     * @return - the specified type group or an invalid type group if
     *           the specified type group was not found.     
     */
    public TypeGroup typeGroup(String tgName)
    {
        return _conversion.typeGroup(_type, tgName);
    }
    
    /*
     * Get a list of all the system names in the converter.
     *
     * @return - a list of system names in the converter.
     */
    public List<String> systemNames()
    {
       return _conversion.systemNames(_type);
    }
    
    /*
     * Get the name of the unit type of the converter.
     *
     * @return - the name of the unit type of the converter.
     */
    public String type()
    {
        return _type;
    }
    
    /*
     * Set the 'to' type.
     * 
     * @param toType - (input) the 'to' unit type.
     * 
     * @returns = true of type change was made, false otherwise.
     */
    public boolean toType(String toType)
    {
        if (_conversion.validateType(_fromType, toType))
        {
            _toType = toType;
            return true;
        }
        else
        {
            return false;
        }
    }

    /*
     * Get the 'to' type.
     * 
     * @return - the 'to' unit type.
     */
    public String toType()
    {
        return _toType; 
    }

    /*
     * Get a unit in the converter.
     *
     * @param system - (input) the name of the unit system the 
     *                         requested unit belongs to.
     * @param name   - (input) the name of the requested unit.
     *
     * @return - the specified unit or an invalid unit  if
     *           the specified unit was not found.     
     */
    public UBASE unit(String system, 
                      String name)
    {
       return _conversion.unit(_type, system, name);
    }

    /*
     * Get a list of all the units names in the specified unit system.
     *
     * @param - system - (input) the unit system name of the system the 
     *                           requested unit belongs to.
     *
     * @return - a list of unit names in the specified system in the converter.
     */
    public List<String> unitNames(String system)
    {
       return _conversion.unitNames(_type, system);
    }

    /*
     * Get a list of all the unit names in the converter.
     *
     * @return - a list of unit names in the converter.
     */
    public List<String> unitNames()
    {
        List<String> sysNames = _conversion.systemNames();
        ArrayList <String> unitNames = new ArrayList<String>();
        for (String n : sysNames)
        {
             List <String> un = _conversion.unitNames(_type, n);
             unitNames.addAll(un);
        }
        return unitNames;
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
    /*
     * The unit type of the Converter object.
     */
    private String _type;
    
    /*
     * The 'from' unit type of the Converter object.
     */
    private String _fromType;
    
    /*
     * The 'to' unit type of the Converter object.
     */
    private String _toType;
}

// EOF