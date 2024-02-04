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
// File Conversion.java
//
// Base class for the CanonicalSystem and SingleSystem classes. This class 
// provides an interface for unit conversions between units of the same 
// type but in different systems e.g. feet to  meters, etc.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class Conversion extends ConversionBase
{
    /*
     * Default constructor
     */
    public Conversion()
    {
        super();
    }

    /*
     * Constructor
     *
     * @param name - (input) the name of the conversion.
     */
    public Conversion(String name)
    {
        super(name);
    }

    /*
     * Constructor
     *
     * @param name - (input) the name of the conversion.
     * @param map  - (input) the units for conversion.
     */
    public Conversion(String name, 
                      HashMap<String, BaseSystem> map)
    {
       super(name,map);
    }

    /*
     * Copy constructor
     *
     * @param other - (input) the Conversion object to copy.
     */
    public Conversion(Conversion other)
    {
       super(other);
    }
    
    /*
     * Add a unit to the converter.
     *
     * @param typeName   - (input) the name of the unit type being added.
     * @param sysName    - (input) name of unit system new unit belongs to.
     * @param unitName   - (input) the name of the new unit.
     * @param bse        - (input) the new unit.
     *
     * @return - true if the unit as successfully added, false otherwise.
     */
    public boolean addUnit(String typeName, 
                           String sysName, 
                           String unitName, 
                           UBASE bse)
    {
        String type = actualType(typeName, sysName);
        if (_map.containsKey(type))
        {
            String name = fullName(sysName, unitName);
            String fullTypeName  = fullType(typeName, sysName);
            return _map.get(type).addUnit(fullTypeName, name, bse);
        }
        else
        {
            return false;
        }
    }

    /*
     * Convert input value from its specified 'from' units in 'from' system to 
     * the specified 'to' units in 'to' system. This method is overridden in the 
     * child class.     
     *
     * @param value      - (input) value of unit in 'from' units.
     * @param fromType   - (input) the 'from' unit type.
     * @param toType     - (input) the 'to' unit type.
     * @param from       - (input) the name of the 'from' unit.
     * @param fromSys    - (input) the name of the 'from' system.
     * @param to         - (input) the name of the 'to' unit.
     * @param toSys      - (input) the name of the 'to' system.
     * @param asIs       - (input) if true, do not construct full unit names, but
     *                             use the unit names supplied 'as is'.
     *
     * @return - the converted unit value.
     */
    public double convertUnit(double value,  
                              String fromType, 
                              String toType, 
                              String from, 
                              String fromSys,  
                              String to, 
                              String toSys, 
                              boolean asIs)
    {
        return UBASE.ERROR;
    }
    
    /*
     * Remove a unit from the conversion.
     *
     * @param typeName   - (input) the name of the unit type being removed.
     * @param sysName    - (input) name of unit system the unit belongs to.
     * @param unitName   - (input) the name of the unit to remove.
     *
     * @return - true if the unit as successfully removed, false otherwise.
     */
    public boolean  removeUnit(String typeName, 
                               String sysName, 
                               String unitName)
    {
        String type = actualType(typeName, sysName);
        if (_map.containsKey(type))
        {
            String name = fullName(sysName, unitName);
            String fullTypeName  = fullType(typeName, sysName);
            return _map.get(type).removeUnit(fullTypeName , name);
        }
        else
        {
            return false;
        }
    }

    /*
     * Return true if conversion between types is allowed, false otherwise.
     * 
     * @param fromType - (input) the 'from' unit type.
     * @param toType   - (input) the 'to' unit type.
     *
     * @return - true if conversion between types is allowed, false otherwise.
     */
    public Boolean validateType(String fromType,
                                String toType)
    {
        List<String> tNames = typeNames();
        boolean fromOK = (tNames.size() == 0 ? true : tNames.contains(fromType));
        boolean toOK   = (tNames.size() == 0 ? true : tNames.contains(toType));
        
        if (fromType == toType && fromOK && toOK)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    //**************************************************************************
    // Class data members
    //**************************************************************************
}
// EOF