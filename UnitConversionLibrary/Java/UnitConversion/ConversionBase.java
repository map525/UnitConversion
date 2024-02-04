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
// File ConversionBase.java
//
// Base class for conversions. This class provides methods for accessing
// the units, systems, and type groups that constitute a system of units 
// for a particular unit type. 
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class ConversionBase extends Object
{
    /*
     * Default constructor
     */
    public ConversionBase()
    {
        _map   = new HashMap<String, BaseSystem>();
        _name  = "Invalid";
        _valid = false;
    }

    /*
     * Constructor
     *
     * @param name - (input) the name of the conversion.
     */
    public ConversionBase(String name)
    {
        _map   = new HashMap<String, BaseSystem>();
        _name  = name;
        _valid = true;
    }

    /*
     * Constructor
     *
     * @param name - (input) the name of the conversion.
     * @param map  - (input) the units for conversion.
     */
    public ConversionBase(String name, HashMap<String, BaseSystem> map)
    {
        _map   = new HashMap<String, BaseSystem>(map);
        for(Map.Entry<String, BaseSystem> entry : map.entrySet())
        {
            _map.put(entry.getKey(),new BaseSystem(entry.getValue()));
        }
        _name  = name;
        _valid = true;
    }

    /*
     * Copy constructor
     *
     * @param other - (input) the Conversion object to copy.
     */
    public ConversionBase(ConversionBase other)
    {
        _map = new HashMap<String, BaseSystem> ();
        for(Map.Entry<String, BaseSystem> entry : other._map.entrySet())
        {
            _map.put(entry.getKey(),new BaseSystem(entry.getValue()));
        }
        _name = other._name;
        _valid = other._valid;
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
    protected String actualType(String type, 
                                String system)
    {
        return type;
    }

    /*
     * Eeturn a list of type or system names in the BaseSystem.
     *
     * @param bs - (input) BaseSystem whose names are required.
     *
     * @return - a list of names.
     */
    protected List<String> baseSystemNames(BaseSystem bs)
    {
         return new ArrayList<String>();
    }

    /*
     * The check method checks if the software version matches
     * with the unit versions of its units.
     * 
     * @return - true if software and unit versions match, false otherwise.
     */
    public boolean check()
    {
        for (Map.Entry<String, BaseSystem> entry : _map.entrySet())
        {
            BaseSystem bs = entry.getValue();
            if (bs.check())
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
     * Check is system is part of unit name.
     *
     * @param sysName  - (input) the system name.
     * @param unitName - (input) the unit name.
     *
     * @return - the full unit name.
     */
    protected boolean checkName(String sysName, 
                                String unitName)
    {
        if (unitName.indexOf(sysName) == 0)
        {
            return false;
        }
        else
        {
             return true;
        }
    }

    /*
     * Return a list of type or system names.
     *
     * @return - a list of names.
     */
    protected List<String> coreNames()
    {
        List<String> keys = new ArrayList<String>();
        for (Map.Entry<String, BaseSystem> entry : _map.entrySet())
        {
            singleCoreNames(entry.getKey(), keys);
        }
        return keys;
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
    protected String fullName(String sysName, 
                              String unitName)
    {
        String fullName = sysName + "[" + unitName + "]";
        return fullName;
    }

    /*
     * Construct a full type name. Type name is dependent on
     * on the system: either CanonicalSystem or SingleSystem.
     *
     * @param type   -   (input) the type
     * @param system -   (input) the system.
     *
     * @return - the system specific type name.
     */

    protected String fullType(String type, 
                              String system)
    {
        return type;
    }

    /*
     * Construct the full unit name from the system and unit names.
     * 
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return - the full unit name (unit name plus of the system name).
     */
    public String fullUnitName(String systemName, 
                               String unitName)
    {
         return unitName;
    }

    /*
     * Construct the local unit name from the system and unit names.
     *
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return -  the full unit name (unit name plus the system name).
     */
    protected String localName(String systemName, 
                               String unitName)
    {
         return unitName;
    }

    /*
     * Construct a local type name.
     *
     * @param type  - (input) the unit type.
     *
     * @returns - type for the unit based on class.
     */
    protected String localType(String type)
    {
         return type;
    }

    /*
     * Construct list of map names.
     *
     * @returns - a list of map keys.
     */
    protected List<String> mapNames()
    {
        List<String> keys = new ArrayList<String>();
        for (Map.Entry<String, BaseSystem> entry : _map.entrySet())
        {
             keys.add(entry.getKey());
        }
        return keys;
     }

    /*
     * Get the name of the conversion.
     *
     * @return the conversion name.
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
         int first = unitName.indexOf('[');
         int last = unitName.indexOf(']');
         first = (first == -1 ? 0 : first + 1);
         last = (last == -1 ? unitName.length() : last);
         String uName = unitName.substring(first, last);
         return uName;
    }

    /*
     * Return a list of type or system names.
     * 
     * @param name  - (input)  unit type or system name.
     * @param list  - (output) list to place results into.
     */
    protected void singleCoreNames(String name,
                                   List<String> list)
    {
        if (_map.containsKey(name))
        {
            BaseSystem us = _map.get(name);
            List<String> names = baseSystemNames(us);
            for (String aname : names)
            {
                if (list.contains(aname))
                {
                    continue;
                }
                else
                {
                    list.add(aname);
                }
            }
        }
        else
        {
            return;
        }
    }

    /*
     * Get a BaseSystem in the conversion.
     *
     * @ param name - (input) the name of the requested BaseSystem.
     *
     * @return the specified BaseSystem or an invalid BaseSystem if the
     *         requested BaseSystem was not found.
     */
    public BaseSystem system(String name)
    {
        if (_map.containsKey(name))
        {
            return _map.get(name);
        }
        else
        {
            return new BaseSystem();
        }
    }

    /*
     * Get a type group from the Conversion. This method is overridden
     * in the child class.
     *
     * @param type   - (input) the unit type.
     * @param system - (input) the unit system.
     *
     * @return - the requested type group or an invalid type 
     *           group if the type group was not found.
     */ 
    public TypeGroup typeGroup(String type, 
                               String tgroup)
    {
        if (_map.containsKey(actualType(type, tgroup)))
        {
            TypeGroup tg =  new TypeGroup(_map.get(actualType(type, tgroup)).typeGroup(localType(type)));
            typeGroupFilter(tgroup, tg);
            return tg;
        }
        else
        {
            return new TypeGroup();
        }
    }

    /*
     * Get a list of system names in the conversion. This method
     * is overridden in the child class.
     *
     * @param type   - (input) the unit type.
     *
     * @return - list of system names in the conversion.
     */ 
    public List<String> systemNames(String type)
    {
        return new ArrayList<String>();
    }

    /*
     * Get a list of all system names in the conversion.
     *
     * @return - list of system name in the conversion.
     */ 
    public List<String> systemNames()
    {
       return new ArrayList<String>();
    }

    /*
     * Filter TypeGroup.
     *
     * @param name - (input0 type group name to keep
     * @param tg   - (input) type group to filter
     */
    protected void typeGroupFilter(String name, 
                                   TypeGroup tg)
    {
        return;
    }

    /*
     * Get a list of type names in the conversion. This
     * method is overridden in the child class.
     *
     * @return - list of type names in the conversion.
     */ 
    public List<String> typeNames()
    {
        return new ArrayList<String>();
    }

    /*
     * Get a unit from the conversion. This method is overridden
     * in the child class.
     *
     * @param type   - (input) the unit type.
     * @param system - (input) the unit system.
     * @param name   - (input) the unit name.
     *
     * @return - the requested unit or an invalid unit if the
     *           unit was not found.
     */ 
    public UBASE unit(String type, 
                      String system, 
                      String name)
    {
        String typeName = actualType(type, system);
        if (_map.containsKey(typeName))
        {
            String unitName = fullName(system, name);
            String fullTypeName = fullType(type,system);
            return _map.get(typeName).unit(fullTypeName, unitName);
        }
        else
        {
            return new UBASE();
        }
    }

    /*
     * Get a list of unit names in the conversion. This method is
     * overridden in the child class.     
     *
     * @param type   - (input) the unit type.
     * @param system - (input) the unit system.
     *
     * @return - a list of unit names in the conversion.
     */ 
    public List<String> unitNames(String type, 
                                  String system)
    {
        List<String> keys = new ArrayList<String>();
        if (_map.containsKey(actualType(type, system)))
        {
            BaseSystem us = _map.get(actualType(type, system));
            List<String> names = us.unitNames(localType(type));
            for (String name : names)
            {
                if (checkName(system, name))
                {
                    continue;
                }
                else
                {
                    keys.add(localName(type, name));
                }
            }
            return keys;
        }
        else
        {
            return keys;
        }
    }

    /*
     * Get a list of all unit names in the conversion. This method is
     * overridden in the child class.     
     *
     * @return - a list of all unit names in the conversion.
     */ 
    public List<String> unitNames()
    {
        List<String> lst = new ArrayList<String>();
        for (Map.Entry<String, BaseSystem> entry : _map.entrySet())
        {
            BaseSystem us = entry.getValue();
            List<String> types = us.typeNames();
            for (String itl : types)
            {
                List<String> names = us.unitNames(itl);
                for (String i : names)
                {
                    if (lst.contains(i))
                    {
                        continue;
                    }
                    else
                    {
                        lst.add(localName(itl,i));
                    }
                }
            }
        }
        return lst;
    }

    /*
     * Get the validity of the conversion.
     *
     * @return true if the conversion is valid, false otherwise.
     */
    public Boolean valid()
    {
        return _valid;
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
    /*
     * Name of the Conversion object; typically the unit type.
     */
    private String _name;
    
    /*
     * A Conversion consists of one or more BaseSystems with each BaseSystem 
     * containing one or more type groups each containing one or more units.
     */
    protected HashMap<String, BaseSystem> _map;
    
    /*
     * A flag indicating if the conversion is valid or not i.e. it contains one 
     * or one or more valid BaseSystems.
     */
    private Boolean _valid;

}
// EOF