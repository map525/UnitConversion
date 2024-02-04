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
// File Value.cpp
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
#include "Value.hpp"
#include <cmath>

/**
 * @brief Default constructor. Type stored is set to INVALID but byte buffer
 *        is allocated.
 */
Value::Value(void) 
{
    _value.i = 0; 
    _type = INVALID;
}

/**
 * @brief Double constructor. The input value (a double) is stored and the  
 * type is set to DOUBLE.
 *
 * @param[in] v - the double to be stored in the class.
 */    
Value::Value(double v) 
{
    _value.d = v; 
    _type = DOUBLE;
}

/**
 * @brief Integer constructor. The input value (a long) is stored and the  
 * type is set to long.
 *
 * @param[in] v - the long to be stored in the class.
 */
Value::Value(uint64_t v)
{
    _value.i=v;
    _type = UINT;
}

/**
 * @brief Copy Constructor. A copy is made of the input Value.
 *
 * @param[in] other - the Value object to make a copy of.
 */
Value::Value(const Value& other) : _type(other._type),
                                   _value(other._value)                                
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the Value object to make a copy of.
 */
Value& Value::operator=(const Value& other)
{
    _type = other._type;
    _value = other._value;
    return *this;
}

/**
 * @brief The asDouble method returns the stored value as a double. 
 *
 * @return - returns the value as a double.
 */
double Value::asDouble(void) const
{
    if (_type == DOUBLE)
    {
        return _value.d;
    }
    else if (_type == UINT)
    {
        return (double)_value.i;
    }
    else
    {
        return nanl("NaN");
    }
}

/**
 * @briefThe asInteger method returns the stored value as a long. 
 *
 * @return - returns the value as a long.
 */
uint64_t Value::asInteger(void) const
{
    if (_type == DOUBLE)
    {
        return (uint64_t) _value.d;
    }
    else if (_type == UINT)
    {
        return _value.i;
    }
    else
    {
        return -1;
    }
}

/**
 * @brief The dvalue method returns the stored value as a double.
 *        No checking of type is performed. 
 *
 * @return - returns the value as a double.
 */
double Value::dvalue(void) const
{
    return _value.d;
}

/**
 * @brief The ivalue method returns the stored value as a long. 
 *        No checking of type is performed. 
 *
 * @return - returns the value as a long.
 */
uint64_t Value::ivalue(void) const
{
    return _value.i;
}

/**
 * @brief The type method returns the type (DOUBLE or UINT) of the store value. 
 *
 * @return - returns the type of the stored value.
 */
Value::TYPE Value::type(void) const
{
    return _type;
}

/**
 * @brief The value method stores the input double as a double in the class. The
 *        existing value is lost and the type is set to DOUBLE.
 *
 * @param[in] v - the double to store in the class object.
 */
void Value::value(double v)
{
    _value.d = v;
    _type = DOUBLE;
}

/**
 * @brief The value method stores the input long as a long in the class. The
 *        existing value is lost and the type is set to UINT.
 *
 * @param[in] v - the long to store in the class object.
 */
void Value::value(uint64_t v)
{
    _value.i = v;
    _type = UINT;
}

/**
 * @brief The valid method checks that a valid type (double or long) value
 *        is contained in the class. If so, true is returned, otherwise false.
 *
 * @return - true if a value is stored in the class, false otherwise.
 */
bool Value::valid(void) const
{
    if (_type == INVALID) return false;
    else return true;
}
// EOF
