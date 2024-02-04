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
// File Value.java
//
// Class defining a value that can be a long int or double. Most unit values
// (conversion  factors) are double precision numbers. However some 'units' 
// such as counts (e.g. dozen) and bytes are integers. The Value class stores
// unit values (and offsets) are doubles or 64-bit unsigned integers. The class
// contains methods for returning the unit value (or offset) as either a double
// or integer. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package UnitConversion;

import java.nio.ByteBuffer;
import java.util.*;

public class Value
{
   /*
    * Default constructor. Type stored is set to INVALID but byte buffer
    * is allocated.
    */
    public Value() 
    {
        _value = ByteBuffer.allocate(8);
        _value.position(0);
        _type = TYPE.INVALID;
    }
    
   /*
    * Double constructor. The input value (a double) is stored and the type 
    * is set to DOUBLE.
    *
    * @param v - (input) the double to be stored in the class.
    */    
    public Value(double v) 
    {
        _value = ByteBuffer.allocate(8);
        _value.putDouble(0,v); 
        _value.position(0);
        _type = TYPE.DOUBLE;
    }
    
   /*
    * Integer constructor. The input value (a long) is stored and the type 
    * is set to UINT.
    *
    * @param v - (input) the long to be stored in the class.
    */
    public Value(long v)
    {
        _value = ByteBuffer.allocate(8);
        _value.putLong(0,v);
        _value.position(0);
        _type = TYPE.UINT;
    }

   /*
    * Copy constructor. A copy is made of the input Value.
    *
    * @param other - (input) the Value object to make a copy of.
    */
    public Value(Value other)
    {
        _value = ByteBuffer.allocate(8);
        _value.put(other._value);
        _value.position(0);
        _type = other._type;
    }

   /*
    * The asDouble method returns the stored value as a double. 
    *
    * @return - returns the value as a double.
    */
    public double asDouble()
    {
       if (_type == TYPE.DOUBLE)
       {
           double value = _value.getDouble(0);
           _value.position(0);
           return value;
       }
       else if (_type == TYPE.UINT)
       {
           double value = (double)_value.getLong(0);
           _value.position(0);
           return value;
       }
       else
       {
         return Double.NaN;
       }
    }

   /*
    * The asInteger method returns the stored value as a long. 
    *
    * @return - returns the value as a long.
    */
    public long asInteger()
    {
        if (_type == TYPE.DOUBLE)
        {
            long value = (long) _value.getDouble(0);
            _value.position(0);
            return value;
        }
        else if (_type == TYPE.UINT)
        {
             long value = _value.getLong(0);
             _value.position(0);
             return value;
        }
        else
        {
           return -1;
        }
    }

   /*
    * The dvalue method returns the stored value as a double. 
    *
    * @return - returns the value as a double.
    */
    public double dvalue()
    {
        double value = _value.getDouble(0);
        _value.position(0);
        return value;
    }

   /*
    * The ivalue method returns the stored value as a long. 
    *
    * @return - returns the value as a long.
    */
    public long ivalue()
    {
        long value = _value.getLong(0);
        _value.position(0);
        return value;
    }

   /*
    * The type method returns the type (DOUBLE or UINT) of the store value. 
    *
    * @return - returns the type of the stored value.
    */
    public TYPE type()
    {
        return _type;
    }

   /*
    * The value method stores the input double as a double in the class. The
    * existing value is lost and the type is set to DOUBLE.
    *
    * @param v - (input) the double to store in the class object.
    */
    public void value(double v)
    {
        _value.putDouble(0,v); 
        _value.position(0);
        _type = TYPE.DOUBLE;
    }

   /*
    * The value method stores the input long as a long in the class. The
    * existing value is lost and the type is set to UINT.
    *
    * @param v - (input) the long to store in the class object.
    */
    public void value(long v)
    {
        _value.putLong(0,v);
        _value.position(0);
        _type = TYPE.UINT;
    }
    
    /*
    * The valid method checks that a valid type (double or long) value
    * is contained in the class. If so, true is returned, otherwise false.
    *
    * @return - true if a value is stored in the class, false otherwise.
    */
    public boolean valid()
    {
        if (_type == TYPE.INVALID) return false;
        else return true;
    }

    //**************************************************************************
    // Class data members
    //**************************************************************************
    /* 
     * Enumeration defining the type of value stored (double or 64-bit integer). 
     */
    public enum TYPE { DOUBLE, UINT, INVALID };
    
    /* 
     * Type of value stored (double or long). 
     */
    private TYPE _type;
    
    /* 
     * Byte buffer for storing the value. 
     */
    private ByteBuffer _value;
}
// EOF