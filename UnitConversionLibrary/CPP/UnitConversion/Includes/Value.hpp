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
// File Value.hpp
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
#pragma once
#include <cstdint>

class Value
{
public:
    /**
     * The Value class stores either a double or an unsigned 64-bit integer. The
     * type stored is captured by the enumeration. INVAILD is used by the 
     * default constructor when no initialization of the stored type is 
     * provided.
     */
    enum TYPE { DOUBLE, UINT, INVALID };

    /**
     * @brief Default constructor. 
     */
    Value(void);

    /**
     * @brief Double constructor. The input value (a double) is stored and the 
     *        type is set to DOUBLE.
     */
    Value(double v);

    /**
     * @brief Integer constructor. The input value (a long) is stored and the 
     *         type is set to UINT.
     */
    Value(uint64_t v);

    /**
     * @brief Copy Constructor. A copy is made of the input Value.
     */
    Value(const Value& other);

    /**
     * @brief Assignment Operator. 
     */
    Value&  operator=(const Value& other);


    /**
     * @brief The asDouble method returns the stored value as a double. 
     */
    double asDouble(void) const;

    /**
     * @brief The asInteger method returns the stored value as a long. 
     */
    uint64_t asInteger(void) const;

    /**
     * @brief The dvalue method returns the stored value as a double. 
     */
    double dvalue(void) const;

    /**
     * @brief The ivalue method returns the stored value as a long. 
     */
    uint64_t ivalue(void) const;

    /**
     * @brief The type method returns the type (DOUBLE or UINT) of the store 
     *        value. 
     */
    TYPE type(void) const;

    /**
     * @brief The value method stores the input double as a double in the class. 
     *        The existing value is lost and the type is set to DOUBLE.
     */
    void value(double v);

    /**
     * @brief The value method stores the input long as a long in the class. The
     *        existing value is lost and the type is set to UINT.
     */
    void value(uint64_t v);

    /**
     * @brief The valid method checks that a valid type (double or long) value
     *        is contained in the class. If so, true is returned, otherwise 
     *        false.
     */
    bool valid(void) const;

private:
    /* 
     * Enumeration defining the type of value stored (double or 64-bit integer). 
     */
    TYPE _type;

    /* 
     * Type of value stored (double or long). 
     */
    union
    {
        double d;
        uint64_t i;
    } _value;
};
// EOF