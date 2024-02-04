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
// File SystemUnits.java
//
// All unit systems, ancient, historical, and modern contain the four unit types
// for measuring distance, area, weight (mass), and volume. Volume is divided
// into two types: liquid and dry. Within these five types of units, there are
// are subset from which all the other units in a system are derived. These 
// units are termed System Units. This class is the base class for all the
// System Units.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package UnitConversion;

import java.util.*;

public class SystemUnits extends ConversionBase
{
    /*
     * Default constructor.
     */
    public SystemUnits()
    {
        super();
    }

    /*
     * Constructor.
     *
     * @param - name (input) name of the CanonicalSystem.
     */
    public SystemUnits(String name)
    {
        super(name);
    }

    /*
     * Constructor.
     *
     * @param name - (input) the name of the CanonicalSystem.
     * @param map  - (input) the units in the CanonicalSystem.
     */
    public SystemUnits(String name, 
                       HashMap<String, BaseSystem> map)
    {
        super(name, map);
    }

    /*
     * Copy constructor.
     *
     * @param other - (input) the other CanonicalSystem to copy.
     */
    public SystemUnits(SystemUnits other) 
    {
        super(other);
    }

     /*
     * Construct the actual type name. Type name is dependent on
     * on the system: either CanonicalSystem or SingleSystem.
     * 
     * @param type   - (input) the type.
     * @param system - (input) the system.
     * 
     * @return - system specific type.
     */
    @Override
    protected String actualType(String type, 
                                String system)
    {
        return system;
    }

    /*
     * Eeturn a list of type or system names in the BaseSystem.
     *
     * @param bs - (input) BaseSystem whose names are required.
     *
     * @return - a list of names.
     */
    @Override
    protected List<String> baseSystemNames(BaseSystem bs)
    {
        return bs.typeNames();
    }

    /*
     * Check is system is part of unit name.
     *
     * @param sysName  - (input) the system name.
     * @param unitName - (input) the unit name.
     *
     * @return - the full unit name.
     */
    @Override
    protected boolean checkName(String sysName,
                                String unitName)
    { 
        return false;
    }

    /*
     * Check is system is part of unit name.
     *
     * @param sysName  - (input) the system name.
     * @param unitName - (input) the unit name.
     *
     * @return - the full unit name.
     */
    @Override
    protected String fullName(String sysName,
                              String unitName)
    {
        return unitName;
    }

    /*
     * Construct a full unit name from system and unit name. A full  
     * unit name is of the form systeName[unitName] e.g. SI[newton].
     * This method is overridden in the child class.
     *
     * @param sysName  - (input) the system name.
     * @param unitName - (input) the unit name.
     *
     * @return - the full unit name.
     */ 
    @Override
    public String fullUnitName(String systemName,
                               String unitName)
    {
        return super.rawUnitName(unitName);
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
     * Construct the local unit name from the system and unit names.
     *
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return -  the full unit name (unit name plus the system name).
     */
    @Override
    protected String localName(String systemName,
                               String unitName)
    {
        return super.fullName(systemName, unitName);
    }

    /*
     * Get the unit name from the full unit name.
     *
     * @param unitName - (input) the full unit name.
     *
     * @return - the unit name stripped of the system name.
     */
    @Override
    public String rawUnitName(String unitName)
    {
        return unitName;
    }


    /*
     * Get a list of system names in the CanonicalSystem.
     *
     * @param type   - (input) the unit type.
     *
     * @return - list of system name in the CanonicalSystem.
     */ 
    @Override
    public List<String> systemNames(String type)
    {
        return systemNames();
    }

    /*
     * Get a list of all system names in the CanonicalSystem.
     *
     * @return - list of system name in the CanonicalSystem.
     */ 
    @Override
    public List<String> systemNames()
    {
        return mapNames();
    }

    /*
     * Get a list of type names in the CanonicalSystem.
     *
     * @return - list of type name in the CanonicalSystem.
     */ 
    @Override
    public List<String> typeNames()
    {
        return coreNames();
    }

    /*
     * Get value of a system unit.
     *
     * @param type     - (input) the unit type
     * @param system   - (input) the unit system
     * @param name     - (input) the unit name.
     *
     * @return - the value of the requested system unit.
     */
    public double value(String type, 
                        String system, 
                        String name)
    {
         UBASE u = unit(type, system, name);
         return u.value().asDouble();
    }
 }
// EOF
