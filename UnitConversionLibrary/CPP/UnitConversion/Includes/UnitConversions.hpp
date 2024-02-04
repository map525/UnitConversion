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
// File UnitConversions.hpp
//
// Container class for all units and their conversions.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Conversion.hpp"
#include "Converter.hpp"

class UnitConversions
{
public:
    /**
     * @brief The Instance static method creates and instance of the 
     *        UnitConversion class. 
     */
    static UnitConversions& Instance(void);

    /**
     * @brief The check method checks if the software version matches
     *        with the unit versions of its units.
     */
    bool check(void) const;

    /**
     * @brief Get a Converter object for the given unit.
     */
    Converter& converter(const std::string& unit);

    /**
     * @brief Get a is of unit single type names available for unit conversion.
     */
    std::list<std::string> names(void) const;

private:
    /**
     * @brief Default constructor (private); this class is a singleton.
     */
    UnitConversions(void);

private:
    // Singletons should not be cloneable.
    UnitConversions(UnitConversions& other) = delete;

    // Singletons should not be assignable.
    void operator=(const UnitConversions&) = delete;

private:
    /** 
     * An invalid conversion object used for reporting unsupported unit types. 
     */
    Conversion _conversion;

    /** 
    * Converter objects are stored in a map indexed by unit type. The map 
    * contains all the single unit types for which unit conversions are 
    * supported.      
    */
    std::map<std::string, Converter*> _map;
};
// EOF