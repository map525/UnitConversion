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
// File BaseSystem.java
// 
// A Collection of one or more type groups. There are two types of BaseSystems:
// one consisting of a single type group and one containing the five canonical
// type groups (length, area, mass, liquid volume, and dry volume). BaseSystems
// with a single type group have units all having the same type (dimension).
// BaseSystems with the five canonical type groups have units tied to a
// place or origin (usually a country).
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class  BaseSystem
{
    /*
     * Default Constructor
     */
    public BaseSystem() 
    {
        _units = new HashMap<String, TypeGroup>();
        _name = "Invalid";
        _valid = false;
        _version = "Invalid";
    }
    
    /*
     * Constructor
     *
     * @param name    - (input) name of BaseSystem.
     * @param unit    - (input) units in the BaseSystem.
     * @param version - (input) software version.
     */
    public BaseSystem(String name, 
                      HashMap<String, UBASE> unit, 
                      String version)
    {
        _units = new HashMap<String, TypeGroup>();    
        _units.put("unit", new TypeGroup(name, unit, version));
        _name = name;
        _valid = true;
        _version = version;
    }
    
    /*
     * Constructor
     *
     * @param name    - (input) name of BaseSystem.
     * @param length  - (input) length units in the BaseSystem.
     * @param area    - (input) area units in the BaseSystem.
     * @param mass    - (input) mass units in the BaseSystem.
     * @param liquid  - (input) liquid volume units in the BaseSystem.
     * @param dry     - (input) dry volume units in the BaseSystem.
     * @param version - (input) software version.
     */
    public BaseSystem(String name, 
                      HashMap<String, UBASE> length, 
                      HashMap<String, UBASE> area, 
                      HashMap<String, UBASE> mass, 
                      HashMap<String, UBASE> liquid, 
                      HashMap<String, UBASE> dry, 
                      String version) 
    {
        _units = new HashMap<String, TypeGroup>();        
        _units.put("Length", new TypeGroup("Length", length, version));
        _units.put("Area",   new TypeGroup("Area",   area,   version));
        _units.put("Mass",   new TypeGroup("Mass",   mass,   version));
        _units.put("Liquid", new TypeGroup("Liquid", liquid, version));
        _units.put("Dry",    new TypeGroup("Dry",    dry,    version));
        _units.put("Volume", new TypeGroup("Volume", version));
        _name = name;
        _valid = true;
        _version = version;
    }
   
    /*
     * Copy Constructor
     *
     * @param other - (input) the other BaseSystem to copy.
     */
    public BaseSystem(BaseSystem other) 
    {
        _units = new HashMap<String, TypeGroup>();
        for(Map.Entry<String, TypeGroup> entry : other._units.entrySet())
        {
            _units.put(entry.getKey(),new TypeGroup(entry.getValue()));
        }
        _name    = other._name;
        _valid   = other._valid;
        _version = other._version;
    }

    /*
     * @brief Add a unit to the BaseSystem.
     *
     * @param type  - (input) the unit type.
     * @param name  - (input) the unit name.
     * @param dbase - (input) the unit to add.
     *
     * @return  - true if successful, false otherwise.
     */
    public boolean addUnit(String type, 
                           String name, 
                           UBASE dbase)
    {
        if (_units.containsKey(type))
        {
           return _units.get(type).addUnit(name,dbase);
        }
        else
        {
            return false;
        }
    }

   /*
    * The check method checks if the software version matches with 
    * the unit versions of the units in each TypeGroup. Units 
    * are auto generated from an Excel spreadsheet using VBA code.
    * 
    * @return - true if software and unit versions match, false otherwise.
    */
    public boolean check()
    {
       Version v = Version.Instance();

       if(_version == v.version())
       {
            for (Map.Entry<String, TypeGroup> entry : _units.entrySet())
            {
                 TypeGroup us = entry.getValue();
                 if (us.check())
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
       else
       {
           return false;
       }
    }

    /*
     * Get the name of the BaseSystem.
     *
     * @return  - the name of the BaseSystem.
     */
    public String name()
    {
        return _name;
    }

    /*
     * Remove a unit from the BaseSystem.
     *
     * @param type  - (input) the unit type.
     * @param name  - (input) the unit name.
     *
     * @return  - true if successful, false otherwise.
     */
    public boolean removeUnit(String type, 
                              String name)
    {
        if (_units.containsKey(type))
        {
           return _units.get(type).removeUnit(name);
        }
        else
        {
            return false;
        }        
    }

    /*
     * Get a list of system names in the BaseSystem.
     *
     * @param type  - (input) the unit type.
     *
     * @return  - a list of system names in the BaseSystem.
     */
    public List<String> systemNames(String type)
    {
        if (_units.containsKey(type))
        {
            return _units.get(type).systemNames();
        }
        else
        {
            return new ArrayList<String>();
        }
    }

    /*
     * Get a TypeGroup from the BaseSystem.
     *
     * @param type - (input) the unit type.
     *
     * @return  - the requested TypeGroup (if found) or an
     *            invalid TypeGroup if not found.
     */
    public TypeGroup typeGroup(String type)
    {
        if (_units.containsKey(type))
        {
            return _units.get(type);
        }
        else
        {
            return new TypeGroup();
        }
    }

    /*
     * The getTypeNames method returns a list of types of units
     * in the BaseSystem. Unit types examples are length, area, force,
     * angle, etc.
     *
     * @return  - a list of unit types in the BaseSystem.
     */
    public List<String> typeNames()
    {
        ArrayList<String> keys = new ArrayList<String>();
        for (Map.Entry<String,TypeGroup> entry : _units.entrySet())
        {
               keys.add(entry.getKey());
        }
        return keys;
    }

    /*
     * Get a  unit from the BaseSystem.
     *
     * @param type - (input) the unit type.
     * @param name - (input) the unit name.
     *
     * @return  - the requested unit (if found) or an
     *            invalid unit if not found.
     */
    public UBASE unit(String type, 
                      String name)
    {
        if (_units.containsKey(type))
        {
            return _units.get(type).unit(name);
        }
        else
        {
            return new UBASE();
        }
    }
    
    /*
     * Get a list of unit names in the BaseSystem.
     *
     * @param type  - (input) the unit type.
     *
     * @return  - a list of unit names in the BaseSystem.
     */
    public List<String> unitNames(String type)
    {
        if (_units.containsKey(type))
        {
            return _units.get(type).unitNames();
        }
        else
        {
            return new ArrayList<String>();
        }
    }


    /*
     * Get the validity of the BaseSystem.
     *
     * @return  - true if the BaseSystem contains one or more
     *            valid TypeGroup.
     */
    public Boolean valid()
    {
        return _valid;
    }

    /*
     * Get the software version.
     *
     * @return  - the software version.
     */
    public String version()
    {
        return _version;
    }
    
    //**************************************************************************
    // Class data members
    //**************************************************************************
    /*
     * The name of the BaseSystem.
     */
    private String _name;
    
    /* 
     * A BaseSystem consists of one or more TypeGroup. A TypeGroup contains one   
     * or more units (UBASE). The TypeGroup are stored in a HashMap and accessed 
     * by the name.     
     */    
    protected HashMap<String, TypeGroup> _units;
    
    /*
     * Flag that is set to true if the BaseSystem contains one or more
     * valid TypeGroup.
     */
    private boolean _valid;
    
    /*
     * The software version.
     */
    private String _version;
}
// EOF
