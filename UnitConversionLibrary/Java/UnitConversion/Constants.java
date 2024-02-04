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
// File Constants.java
//
// Physical, measured, and other constants. Non-canonical units are generated
// using various physical and measured constants. The SI system is defined in
// terms of physical constants such as the speed of light and these constants
// (and others) are used to determine the value of the various units. Constants 
// can be accessed but cannot be 'converted'.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
package UnitConversion;

import java.util.*;
import Generated.*;

public class Constants
{
    /*
     * The Instance static method creates and instance of the Constants 
     * class. The Constants class is a singleton and is used to return 
     * a Constant.
     *
     * @return - the single instance of the class.
     */
    public static Constants Instance()
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
        for (Map.Entry<String, ConstantGroup> entry : _map.entrySet())
        {
            ConstantGroup cg = entry.getValue();
            if (cg.check())
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
     * Get a constant.
     *
     * @param constName - (input) the name of the constant to get.
     *
     * @return - the specified constant or an invalid constant if the
     *           specified constant is not found.
     */
    public ConstantGroup constant(String constName)
    {
        if (_map.containsKey(constName))
        {
            return _map.get(constName);
            
        }
        else
        {
            return _map.get("Invalid");
        }
    }

    /*
     * Get a list of all the constant names.
     *
     * @return - a list of constant names.
     */
    public List<String> names()
    {
        ArrayList<String> keys = new ArrayList<String>();
        for (Map.Entry<String,ConstantGroup> entry : _map.entrySet())
        {
           keys.add(entry.getKey());
        }
        return keys;
    }
    
    /*
     * Constructor. The constructor is private; the class is a singleton. It 
     * creates Constant objects which contain groups of constants.
     */
    private Constants() 
    {
        _map = new HashMap<String, ConstantGroup>();
        _map.put("DerivedUnits",         DU_UNITS.Instance());
        _map.put("PhysicalConstants",    PC_UNITS.Instance());
        _map.put("PhysialDefinitions",   PD_UNITS.Instance());
        _map.put("PhysicalMeasurements", PM_UNITS.Instance());
        _map.put("SI",                   SI_UNITS.Instance());
        _map.put("WGS84Model",           WGS84_MODEL.Instance());
        _map.put("Invalid",new ConstantGroup());
    }
    //**************************************************************************
    // Class data members
    //**************************************************************************
    /*
     * All the constants are stores in a HasMap and accessed though this class.
     */
    private HashMap<String, ConstantGroup> _map;
    
    /*
     * The one and only Constants object; this class is a singleton.
     */
    private static Constants singleton_ = new Constants();
}

//EOF