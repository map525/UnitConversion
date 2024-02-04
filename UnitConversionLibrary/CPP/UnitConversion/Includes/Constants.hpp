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
// File Constants.hpp
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
#pragma once
#include "ConstantGroup.hpp"

class Constants
{
public:
    /**
     * @brief The Instance static method creates and instance of the Constants 
     *        class. The Constants class is a singleton and is used to return 
     *        a Constant.
     */
    static Constants& Instance(void);

    /**
     * @brief The check method checks if the software version matches
     *        with the unit versions of its units.
     */
    bool check(void) const;

    /**
     * @brief  Get a constant.
     */
    const ConstantGroup& constant(const std::string& constName) const;

    /**
     * @brief Get a list of all the constant names.
     */
    std::list<std::string> names(void) const;

private:
    /**
     * @brief Default constructor. The constructor is private; the 
     *        class is a singleton. 
     */
    Constants(void);

    // Singletons should not be cloneable.
    Constants(Constants& other) = delete;

    // Singletons should not be assignable.
    void operator=(const Constants&) = delete;

private:
    /**
     * All the constants are stored in a map and accessed 
     * though this class.
     */
    std::map<std::string, ConstantGroup> _map;
};
// EOF