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
// File ConstantGroup.java
//
// ConstantGroup is the base class for derived units, physical constants, 
// physical  definition, physical measurements, WGS84 Model,  and some 
// SI units. These  'units'  are used as the basis for other units but are not 
// directly convertible as such. They are stored as UBASE objects, as other units 
// are, and placed in a map and are accessible for reference or other purposes.     
//
//Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class ConstantGroup
{
   /*
    * Default constructor.
    */
    public ConstantGroup()
    {
        _map = new HashMap<String, UBASE>();
        _name = "Invalid";
        _valid = false;
        _version = "Invalid";
    }

   /*
    * Constructor.
    *
    * @param name    - (input) name of the constant group.
    * @param version - (input) software version.
    */
    public ConstantGroup(String name, 
                         String version)
    {
        _map = new HashMap<String, UBASE>();
        _name = name;
        _valid = true;
        _version = version;
    }

   /*
    * Constructor.
    *
    * @param name      - (input) name of the constant group.
    * @param version   - (input) software version.
    * @param constants - (input) constants in the group.
    */
    public ConstantGroup(String name, 
                         String version, 
                         HashMap<String, UBASE> constants)
    {
        _map = copyMap(constants);
        _name = name;
        _valid = true;
        _version = version;
    }

   /*
    * Copy constructor
    *
    * @param other - (input) the other ConstantGroup to be copied.
    */
    public ConstantGroup(ConstantGroup other)
    {
        _map = new HashMap<String, UBASE>();
        for(Map.Entry<String, UBASE> entry : other._map.entrySet())
        {
            _map.put(entry.getKey(),new UBASE(entry.getValue()));
        }
        _name = other._name;
        _valid = other._valid;
        _version = other._version;
    }

   /*
    * The check method checks if the software version matches with the unit
    * versions of the units in the ConstantGroup. Units are auto generated from 
    * an Excel spreadsheet using VBA code.
    * 
    * @return - true if software and unit versions match, false otherwise.
    */
    public boolean check()
    {
        Version v = Version.Instance();
        for(Map.Entry<String, UBASE> entry : _map.entrySet())
        {
            UBASE db = entry.getValue();
            if (db.version() == v.version())
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
    * Get named constant.
    *
    * @param name - (input) name of constant to get.
    *
    * @return - the specified constant or invalid constant if not found.
    */
    public UBASE constant(String name)
    {
       if (_map.containsKey(name))
       {
           return _map.get(name);
                
       }
       else
       {
           return new UBASE();
       }
    }

   /*
    * Get list of constant names.
    *
    * @return - a list of constant names.
    */
     public List<String> constantNames()
    {
        return new ArrayList<String>(_map.keySet());
    }

   /*
    * Get the name of the ConstantGroup.
    *
    * @return - the name of the ConstantGroup.
    */
    public String name()
    {
        return _name;
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
    * Get list of system names.
    *
    * @return - a list of system names.
    */
    public List<String> systemNames()
    {
        ArrayList<String> sys = new ArrayList<String>();
        for(Map.Entry<String, UBASE> entry : _map.entrySet())
        {
            UBASE db = entry.getValue();
            if(sys.contains(db.system()))
            {
               continue;
            }
            else
            {
                sys.add(db.system());
            }
        }
        return sys;
    }

   /*
    * Get list of constant types.
    *
    * @return - a list of constant types.
    */
     public List<String> typeNames()
    {
        ArrayList<String> al = new ArrayList<String>();
        al.add(_name);
        return al;
    }

   /*
    * Get the validity of the ConstantGroup.
    *
    * @return - true if ConstantGroup is valid, false otherwise.
    */
    public boolean valid()
    {
        return _valid;
    }
        
    /*
     * Get the value of a constant.
     *
     * @param constName - (input) the name of the constant.
     *
     * @return the value of the named constant.
     */
    public double value(String constName)
    {
         return constant(constName).value().asDouble();
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
    private HashMap<String, UBASE> copyMap(HashMap<String, UBASE> map)
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
     * ConstantGroup is the base class for derived unit, physical constants,  
     * physical definitions.physical measurements, WGS84 Model,  and SI units.  
     * These 'units' are used as the basis for other units but are not directly 
     * convertible as such. They are stored as UBASE objects, as other units 
     * are, and placed in a HashMap and are accessible for reference or other 
     * purposes.     
     */
    protected HashMap<String, UBASE> _map;
    
    /*
     * Name for the class of constants stored.
     */
    protected String _name;
    
    /*
     * Flag that is set to true if ConstantGroup contains one or more valid 
     * constants.
     */
    protected boolean _valid;
    
    /*
     * The software version.
     */
    protected String _version;
}
// EOF
