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
// File UBASE.java
//
// Base class defining a single base unit of measurement.
// 
// Base class defining a single unit of measurement.
// This class contains members used to define a single unit of
// measurement. These are:
//
// 1. system  - the unit system e.g. SI, MKS, etc.
// 2. type    - the unit type (dimensions) e.g. M/L, L/S, etc. 
// 3. name    - the unit name e.g. miles, minute, gallon, etc.
// 4. unit    - the unit SI components e.g. kg/m, m/s, etc.
// 5. valid   - true if a valid unit.
// 6. value   - conversion factor to SI units.
// 7. offset  - unit offset.
// 8. version - software version number.
//
// The class methods include two constructors and accessors for
// the class members. Once create a UBASE object cannot be altered.
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class UBASE
{
    /* 
     * Default constructor.
     */
    public UBASE() 
    {
        _value   = new Value(); 
        _offset  = new Value();
        _system  = "Invalid";
        _name    = "Invalid";
        _type    = "Invalid";
        _unit    = "Invalid";
        _valid   = false;
        _version = "Invalid";
    }

    /* 
     * Constructor.
     *
     * @param system  - (input) the unit system e.g.  SI, MKS, etc.
     * @param name    - (input) the unit name e.g. miles, minute, gallon, etc.
     * @param value   - (input) conversion factor to SI units.
     * @param unit    - (input) the unit SI components e.g. kg/m, m/s, etc.
     * @param type    - (input) the unit type e.g. M/L, L/S, etc.  
     * @param version - (input) software version number.
     * @param offset  - (input) unit offset.
     */
    public UBASE(String system, 
                 String name, 
                 double value, 
                 String unit, 
                 String type, 
                 String version, 
                 double offset)
    {
        _value   = new Value(value);
        _offset  = new Value(offset);
        _system  = system;
        _name    = name;
        _unit    = unit;
        _type    = type;
        _valid   = true;
        _version = version;
    }

    /* 
     * Constructor.
     *
     * @param system  - (input) the unit system e.g.  SI, MKS, etc.
     * @param name    - (input) the unit name e.g. miles, minute, gallon, etc.
     * @param value   - (input) conversion factor to SI units.
     * @param unit    - (input) the unit SI components e.g. kg/m, m/s, etc.
     * @param type    - (input) the unit type e.g. M/L, L/S, etc.  
     * @param version - (input) software version number.
     */
    public UBASE(String system, 
                 String name, 
                 double value, 
                 String unit, 
                 String type, 
                 String version)
    {
        _value   = new Value(value);
        _offset  = new Value(0.0);
        _system  = system;
        _name    = name;
        _unit    = unit;
        _type    = type;
        _valid   = true;
        _version = version;
    }

    /* 
     * Constructor.
     *
     * @param system  - (input) the unit system e.g.  SI, MKS, etc.
     * @param name    - (input) the unit name e.g. miles, minute, gallon, etc.
     * @param value   - (input) conversion factor to SI units.
     * @param unit    - (input) the unit SI components e.g. kg/m, m/s, etc.
     * @param type    - (input) the unit type e.g. M/L, L/S, etc. 
     * @param version - (input) software version number.
     */
    public UBASE(String system, 
                 String name, 
                 long value, 
                 String unit, 
                 String type, 
                 String version)
    {
        _value   = new Value(value);
        _offset  = new Value(0);
        _system  = system;
        _name    = name;
        _unit    = unit;
        _type    = type;
        _valid   = true;
        _version = version;
    }

    /* 
     * Copy constructor.
     *
     * @param other - the other UBASE to copy.
     */
    public UBASE(UBASE other) 
    {
        _value   = new Value(other._value);
        _offset  = new Value(other._offset);
        _system  = other._system;
        _name    = other._name;
        _unit    = other._unit;
        _type    = other._type;
        _valid   = other._valid;
        _version = other._version;
    }

     /* 
      * Check if input is error code..
      *
      * @param x       - (input) value to check.
      *
      * @return - true if input is error code, false otherwise.
      */
    public static boolean isERROR(double x)
    {
        return Double.isNaN(x);
    }
    
    /* 
     * The name method returns the unit name.
     *
     * @return - return the unit name.
     */
    public String name()
    {
        return _name;
    }
    
    /* 
     * The offset method returns the unit offset value.
     *
     * @return - return the unit offset value.
     */
    public Value offset()
    {
        return _offset;
    }

    /* 
     * The system method returns the name of the system to
     * which the unit belongs.
     *
     * @return - return the unit system name.
     */
    public String system()
    {
        return _system;
    }

    /*
     * Convert UBASE to string
     * 
     * @return UBASE as a string
     */
    public String toString()
    {
        String valid = (_valid ? "true" : "false");

        String s = "type: " + _type + ", system: " + _system 
                            + ", name: " + _name
                            + ", value: " + String.format("%.15e",_value.asDouble())
                            + ", offset: " + String.format("%.15e",_offset.asDouble())
                            + ", unit: " + _unit 
                            + ", version: " + _version 
                            + ", valid: " + valid;  
        return s;
    }
    
    /* 
     * The type method returns the unit type.
     *
     * @return - return the unit type.
     */
    public String type()
    {
        return _type;
    }

    /* 
     * The unit method returns the unit SI component units.
     *
     * @return - return the unit SI components.
     */
    public String unit()
    {
        return _unit;
    }
    
    /* 
     * The valid method returns true if the unit is OK to use, 
     * false otherwise.
     *
     * @return - return true if the unit is valid.
     */
    public boolean valid()
    {
        return _valid;
    }
    
    /* 
     * The value method returns the unit value. 
     *
     * @return - return the unit value.
     */    
    public Value value()
    {
        return _value;
    } 

    /*
     * The version method return the software version as a string.
     *
     * @return - the software version as a string e.g. "1.0"
     */
    public String version()
    {
        return _version;
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
    /* 
     * Static value used to identify an error. Expect for temperature all units
     * have positive values. The Kelvin scale has absolute zero as its smallest 
     * value while Fahrenheit's smallest (theoretical) value is -459.67 which 
     * is the most negative value of any unit.     
     */    
    public static double ERROR = Double.NaN; //-65536;
    
    /* 
     * The unit name e.g. feet, meters, etc.
     */
    private String _name;
    
    /* 
     * The offset is used for converting temperatures. For example 
     * Celsius = 1.0*Kelvin - 273.15 so that 1.0 is the value and 
     * -273.15 is the offset.
     */
    private Value _offset;
    
    /* 
     * The system of units the unit belongs to e.g. SI, UK, US, etc.
     */
    private String _system;
    
    /* 
     * The type of unit e.g. the unit expressed in terms of fundamental SI 
     * dimensions. For example force has a type of M.L/T2 that is mass times 
     * length divided by time squared.
     */
    private String _type;
    
    /* 
     * The unit expressed in terms of fundamental SI units. For example
     * force has a type of kg.m/s2 that is kilograms times meters divided by
     * seconds squared.
     */
    private String _unit;
    
    /* 
     * A flag that identifies the unit as 'valid' i.e. OK to use.
     */
    private boolean _valid;
    /* 
     * The "value' of the unit. The value converts the unit to SI units. 
     */
    private Value _value;
    
    /* 
     * The software version.
     */
    private String _version;
}
// EOF