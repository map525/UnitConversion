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
// File Constants.cpp
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
#include "Constants.hpp"

#include "DU_UNITS.hpp"
#include "PC_UNITS.hpp"
#include "PD_UNITS.hpp"
#include "PM_UNITS.hpp"
#include "SI_UNITS.hpp"
#include "WGS84_MODEL.hpp"

/**
 * @brief The Instance static method creates and instance of the Constants 
 *        class. The Constants class is a singleton and is used to return 
 *        a Constant.
 *
 * @return - the single instance of the class.
 */
Constants& Constants::Instance(void)
{
    static Constants singleton;
    return singleton;
}

/**
 * @brief The check method checks if the software version matches
 *        with the unit versions of its units.
 * 
 * @return - true if software and unit versions match, false otherwise.
 */
bool Constants::check(void) const
{
    for (std::map<std::string, ConstantGroup>::const_iterator it = _map.begin(); 
                                                              it != _map.end(); ++it)
    {
        ConstantGroup cg = it->second;
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

/**
 *@brief  Get a constant.
 *
 * @param[in] constName - the name of the constant to get.
 *
 * @return - the specified constant or an invalid constant if the
 *           specified constant is not found.
 */
const ConstantGroup& Constants::constant(const std::string& constName) const
{
    if (_map.count(constName) == 0)
    {
        return _map.at("Invalid");
    }
    else
    {
        return _map.at(constName);
    }
}

/**
 * @brief Get a list of all the constant names.
 * 
 *  @return - a list of constant names.
 */
std::list<std::string> Constants::names(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, ConstantGroup>::const_iterator it = _map.begin(); 
                                                              it != _map.end(); 
                                                              ++it) 
    {
        keys.push_back(it->first);
    }
    return keys;
}

/**
 * @brief Constructor. The constructor is private; the class is a singleton. It 
 *                     creates Constant objects which contain groups of constants.
 */
Constants::Constants(void) 
{
    _map["DerivedUnits"]         = DU_UNITS::Instance();
    _map["PhysicalConstants"]    = PC_UNITS::Instance();
    _map["PhysialDefinitions"]   = PD_UNITS::Instance();
    _map["PhysicalMeasurements"] = PM_UNITS::Instance();
    _map["SI"]                   = SI_UNITS::Instance();
    _map["WGS84Model"]           = WGS84_MODEL::Instance();
    _map["Invalid"]              = ConstantGroup();
}
//EOF
