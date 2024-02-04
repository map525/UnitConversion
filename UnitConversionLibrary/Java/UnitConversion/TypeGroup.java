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
// File TypeGroup.java
//
// A type group consists of one or more units of the same type (having the same 
// dimensions). Units are contained in the UBASE class which contains the unit 
// value, name, system, and type information. A type group is a collection
// of related units with the same type and belonging to a system or some other 
// collection of units.
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class  TypeGroup 
{
    /*
     *  Default Constructor
     */
    public TypeGroup() 
    {
        _unit    = new HashMap<String, UBASE>();
        _base    = new UBASE();
        _name    = "Invalid";
        _valid   = false;
        _version = "Invalid";
    }

    /*
     * Constructor
     *
     * @param name    - (input) name of the TypeGroup.
     * @param version - (input) software version.
     */
    public TypeGroup(String name, 
                     String version) 
    {
        _unit    =  new HashMap<String, UBASE>();
        _base    = new UBASE();
        _name    = name;
        _valid   = true;
        _version = version;
    }

    /*
     * Constructor
     *
     * @param name    - (input) name of the TypeGroup.
     * @param unit    - (input) a HashMap of units comprising the TypeGroup.
     * @param version - (input) software version.
     */
    public TypeGroup(String name, 
                     HashMap<String, UBASE> unit, 
                     String version) 
    {
        _unit    = copyMap(unit);
        _base    = new UBASE();
        _name    = name;
        _valid   = true;
        _version = version;
    }

    /*
     * Copy constructor
     *
     * @param other - (input) the TypeGroup to copy.
     */
    public TypeGroup(TypeGroup other) 
    {
        _unit    = copyMap(other._unit);
        _base    = new UBASE(other._base);
        _name    = other._name;
        _valid   = other._valid;
        _version = other._version;
    }

   /*
    * Add a unit to the TypeGroup.
    *
    * @param name  - (input) name of unit to add.
    * @param dbase - (input) unit to add.
    *
    * @return - true if the unit was successfully added, false otherwise.
    */
    public boolean addUnit(String name, UBASE dbase)
    {
        if(_unit.containsKey(name))
        {
            return false;
        }
        else
        {
           _unit.put(name,dbase);
           return true;
        }
    }
    
    /*
     * The check method checks if the software version matches with the unit
     * versions. Units are auto generated from an Excel spreadsheet using VBA
     * code.
     * 
     * @return - true if software and unit versions match, false otherwise.
     */
    public boolean check() 
    {
       Version v = Version.Instance();

        for (Map.Entry<String, UBASE> entry : _unit.entrySet())
        {
            UBASE ub = entry.getValue();
            if (ub.version() != v.version())
            {
                return false;
            }
            else
            {
                 continue;
            }
        }
        return true;
    }

   /*
    * Get the name of the TypeGroup.
    *
    * @return - the TypeGroup name.
    */
    public String name()
    {
        return _name;
    }

   /*
    * Remove a unit from the TypeGroup.
    *
    * @param name - (input) name of unit to remove.
    *
    * @return - true if the unit was successfully removed, false otherwise.
    */
    public boolean removeUnit(String name)
    {
        if(_unit.remove(name) == null)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

   /*
    * Get a list of the names of all the systems in the TypeGroup.
    *
    * @return - a list of system names.
    */
    public List<String> systemNames()
    {
        ArrayList<String> lst = new ArrayList<String>();
        for(Map.Entry<String, UBASE> entry : _unit.entrySet())
        {
            UBASE us = entry.getValue();
            String name = us.system();
            if (lst.contains(name))
            {
                continue;
            }
            else
            {
                lst.add(name);
            }
        }
        return lst;
    }

   /*
    * Get the named unit.
    *
    * @param name - (input) name of unit to get.
    *
    * @return - the named unit or an invalid unit if a unit
    *            having the specified name could not be found.
    */
   public UBASE unit(String name)
   {
        if (_unit.containsKey(name))
        {
           return _unit.get(name);
           
        }
        else
        {
            return _base;
        }
    }
    
   /*
    * Get a list of the names of all the units in the TypeGroup.
    *
    * @return - a list of unit names.
    */
    public List<String> unitNames()
    {
        return new ArrayList<String>(_unit.keySet());
    }
    
   /*
    * Get the validity of the TypeGroup.
    *
    * @return - true if the TypeGroup is valid i.e. it contains
    *           one or more valid units.
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

   /*
    * Create a deep copy of a HashMap.
    * 
    * @param - map - (input) the map to create a deep copy of.
    *
    * @return - a deep copy of the input map.
    */
    public static HashMap<String, UBASE> copyMap(HashMap<String, UBASE> map)
    {
        HashMap<String, UBASE> cpyMap = new HashMap<String, UBASE>();
        for(Map.Entry<String, UBASE> entry : map.entrySet())
        {
            cpyMap.put(entry.getKey(),new UBASE(entry.getValue()));
        }
        return cpyMap;
    }
          
    //**************************************************************************
    // Class data members
    //**************************************************************************
    /* 
     * An invalid unit to be returned in case of error (unit requested not in
     * the type group.     
     */    
    protected UBASE _base;
    
    /* 
     * The name of the type group.     
     */    
    private String _name;
    
    /* 
     * A TypeGroup consists of one or more units (UBASE) and these are stored in
     * a HashMap and accessed by the unit name.     
     */    
    protected HashMap<String, UBASE> _unit;
    
    /* 
     * Flag that is set to true if the type group contains one or more valid
     * units.     
     */    
    private boolean _valid;
    
    /*
     * The software version.
     */
    private String _version;
}
// EOF
