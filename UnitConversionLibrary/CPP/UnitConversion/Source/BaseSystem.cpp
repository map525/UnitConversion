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
//
// File BaseSystem.cpp
//
// A Collection of one or more type groups. There are two types of BaseSystems:
// one consisting of a single type group and one containing the five canonical
// type groups (length, area, mass, liquid volume, and dry volume). BaseSystems
// with a single type group have units all having the same type (dimension).
// BaseSystems with the five canonical type groups have units tied to a
// place or origin (usually a country).
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

#include "BaseSystem.hpp"
#include "Version.hpp"

/**
 * @brief Default Constructor.
 */
BaseSystem::BaseSystem(void) : _name("Invalid"),
                               _valid(false), 
                               _units(),  
                               _dbase(),
                               _tgroup(),
                               _version("Invalid")
{
}

/**
 * @brief Constructor
 *
 * @param[in] name    - name of BaseSystem.
 * @param[in] unit    - units in the BaseSystem.
 * @param[in] version - software version.
 */
BaseSystem::BaseSystem(const std::string& name, 
                       const std::map<std::string, UBASE>& unit, 
                       const std::string& version) : _dbase(),                                                     
                                                     _tgroup(),
                                                     _name(name), 
                                                     _valid(true), 
                                                     _version(version)
{
    _units["unit"] = TypeGroup(name,unit,version);
}

/**
 * @brief Constructor.
 *
 * @param[in] name    - name of BaseSystem.
 * @param[in] length  - length units in the BaseSystem.
 * @param[in] area    - area units in the BaseSystem.
 * @param[in] mass    - mass units in the BaseSystem.
 * @param[in] liquid  - liquid volume units in the BaseSystem.
 * @param[in] dry     - dry volume units in the BaseSystem.
 * @param[in] version - software version.
 */
BaseSystem::BaseSystem(const std::string& name, 
                       const std::map<std::string, UBASE>& length, 
                       const std::map<std::string, UBASE>& area, 
                       const std::map<std::string, UBASE>& mass, 
                       const std::map<std::string, UBASE>& liquid, 
                       const std::map<std::string, UBASE>& dry, 
                       const std::string& version) : _dbase(),
                                                     _tgroup(),
                                                     _name(name), 
                                                     _valid(true), 
                                                     _version(version)
{
    _units["Length"] = TypeGroup("Length",length,version);
    _units["Area"]   = TypeGroup("Area",area,version);
    _units["Mass"]   = TypeGroup("Mass",mass,version);
    _units["Liquid"] = TypeGroup("Liquid",liquid,version);
    _units["Dry"]    = TypeGroup("Dry",dry,version);
    _units["Volume"] = TypeGroup("Volume",version);
}

/**
 * @brief Copy Constructor.
 *
 * @param[in] other - the other BaseSystem to copy.
 */
BaseSystem::BaseSystem(const BaseSystem& other) :  _dbase(other._dbase), 
                                                   _tgroup(other._tgroup),  
                                                   _name(other._name), 
                                                   _units(other._units),  
                                                   _valid(other._valid),
                                                   _version(other._version)
{
}

/**
 * @brief Assignment operator.
 *
 * @param[in] other - the other BaseSystem to copy.
 */
BaseSystem& BaseSystem::operator=(const BaseSystem& other)
{
    _dbase   = other._dbase;
    _tgroup  = other._tgroup;
    _name    = other._name;
    _units   = other._units;
    _valid   = other._valid;
    _version = other._version;
    return *this;
}

/**
 * @brief Add a unit to the BaseSystem.
 *
 * @param[in] type  - the unit type.
 * @param[in] name  - the unit name.
 * @param[in] dbase - the unit to add.
 *
 * @return  - true if successful, false otherwise.
 */
bool BaseSystem::addUnit(const std::string& type, 
                         const std::string& name, 
                         const UBASE& dbase)
{
    if (_units.count(type) == 0)
    {
        return false;
    }
    else
    {
        _units[type].addUnit(name,dbase);
        return true;
    }
}

/**
 * @brief The check method checks if the software version matches with 
 *        the unit versions of the units in each TypeGroup. Units 
 *        are auto generated from an Excel spreadsheet using VBA code.
 * 
 * @return - true if software and unit versions match, false otherwise.
*/
bool BaseSystem::check(void) const
{
    Version& v = Version::Instance();

    if(_version == v.version())
    {
        for (std::map<std::string, TypeGroup>::const_iterator it = _units.begin(); 
                                                     it != _units.end(); ++it)
        {
            TypeGroup us = it->second;
            if (us.check())
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
    else
    {
        return false;
    }
}

/**
 * @brief Get the name of the BaseSystem.
 *
 * @return  - the name of the BaseSystem.
 */
std::string BaseSystem::name(void) const
{
    return _name;
}

/**
 * @brief Remove a unit from the BaseSystem.
 *
 * @param type  - (input) the unit type.
 * @param name  - (input) the unit name.
 *
 * @return  - true if successful, false otherwise.
 */
bool BaseSystem::removeUnit(const std::string& type, 
                            const std::string& name)
{
    if (_units.count(type) == 0)
    {
        return false;
    }
    else
    {
        _units[type].removeUnit(name);
        return true;
    }
}

/**
 * @brief Get a list of system names in the BaseSystem.
 *
 * @param[in] type  - the unit type.
 *
 * @return  - a list of system names in the BaseSystem.
 */
std::list<std::string> BaseSystem::systemNames(const std::string& type) const
{
    if (_units.count(type) == 0)
    {
        return std::list<std::string>();
    }
    else
    {
        return _units.at(type).systemNames();
    }
}

/**
 * @brief Get a TypeGroup from the BaseSystem.
 *
 * @param[in] type - the unit type.
 *
 * @return  - the requested TypeGroup (if found) or an
 *            invalid TypeGroup if not found.
 */
const TypeGroup& BaseSystem::typeGroup(const std::string& type) const
{
    if (_units.count(type) == 0)
    {
        return _tgroup;
    }
    else
    {
        return _units.at(type);
    }
}

/**
 * @brief The getTypeNames method returns a list of types of units
 *        in the BaseSystem. Unit types examples are length, area, force,
 *        angle, etc.
 *
 * @return  - a list of unit types in the BaseSystem.
 */
std::list<std::string> BaseSystem::typeNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, TypeGroup>::const_iterator it = _units.begin(); 
                                                       it != _units.end(); ++it)
    {
        keys.push_back(it->first);
    }
    return keys;
}

/**
 * @brief Get a  unit from the BaseSystem.
 *
 * @param[in] type - the unit type.
 * @param[in] name - the unit name.
 *
 * @return  - the requested unit (if found) or an
 *            invalid unit if not found.
 */
const UBASE& BaseSystem::unit(const std::string& type, 
                              const std::string& name) const
{
    if (_units.count(type) == 0)
    {
        return _dbase;
    }
    else
    {
        return _units.at(type).unit(name);
    }
}

/**
 * @brief Get a list of unit names in the BaseSystem.
 *
 * @param[in] type  - the unit type.
 *
 * @return  - a list of unit names in the BaseSystem.
 */
std::list<std::string> BaseSystem::unitNames(const std::string& type) const
{
    if (_units.count(type) == 0)
    {
        return std::list<std::string>();
    }
    else
    {
        return _units.at(type).unitNames();
    }
}

/**
 * @brief Get the validity of the BaseSystem.
 *
 * @return  - true if the BaseSystem contains one or more
 *            valid TypeGroups.
 */
bool BaseSystem::valid(void) const
{
    return _valid;
}

/**
 * @brief Get the software version.
 *
 * @return  - the software version.
 */
std::string BaseSystem::version(void) const
{
    return _version;
}
// EOF
