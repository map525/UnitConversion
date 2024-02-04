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
// File TypeGroup.cpp
//
// A type group consists of one or more units of the same type (having the same 
// dimensions). Units are contained in the UBASE class which contains the unit 
// value, name, system, and type information. A type group is a collection
// of related units with the same type and belonging to a system or some other 
// collection of units.
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "TypeGroup.hpp"
#include "Version.hpp"

/**
 * @brief Default Constructor
 */
TypeGroup::TypeGroup(void) : _base(), 
                             _name("Invalid"), 
                             _units(),
                             _valid(false),
                             _version("Invalid")
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name    - name of the TypeGroup.
 * @param[in] version - software version.
 */
TypeGroup::TypeGroup(const std::string& name, 
                     const std::string& version) : _base(), 
                                                   _name(name),  
                                                   _units(), 
                                                   _valid(true),
                                                   _version(version)
{
}


/**
 * @brief Constructor.
 *
 * @param[in] name    - name of the TypeGroup.
 * @param[in] unit    - a map of units comprising the TypeGroup.
 * @param[in] version - software version.
 */
TypeGroup::TypeGroup(const std::string& name, 
                     const std::map<std::string, UBASE>& units,
                     const std::string& version) : _base(), 
                                                   _name(name),  
                                                   _units(units), 
                                                   _valid(true),
                                                   _version(version)
{
}

/**
 * @brief Copy constructor.
 *
 * @param[in] other - the TypeGroup to copy.
 */
TypeGroup::TypeGroup(const TypeGroup& other) : _base(other._base), 
                                               _name(other._name),
                                               _units(other._units),
                                               _valid(other._valid),
                                               _version(other._version)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the TypeGroup to copy.
 */
TypeGroup& TypeGroup::operator=(const TypeGroup& other)
{
    _base    = other._base;
    _name    = other._name;
    _units   = other._units;
    _valid   = other._valid;
    _version = other._version;
    return *this;
}

/**
 * @briefAdd a unit from the TypeGroup.
 *
 * @param[in] name  - name of unit to add.
 * @param[in] dbase - unit to add.
 *
 * @return - true if the unit was successfully added, false otherwise.
 */
bool TypeGroup::addUnit(const std::string& name, 
                         const UBASE& dbase)
{
    if (_units.count(name) == 0)
    {
        _units[name] = dbase;
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief The check method checks if the software version matches with the unit
 *        versions. Units are auto generated from an Excel spreadsheet using VBA
 *        code.
 * 
 * @return - true if software and unit versions match, false otherwise.
 */
bool TypeGroup::check(void) const
{
    Version& v = Version::Instance();

    for (std::map<std::string, UBASE>::const_iterator it = _units.begin(); 
                                                      it != _units.end(); ++it)
    {
        UBASE ub = it->second;
        if (ub.version() != v.version())
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}

/**
 * @brief Get the name of the TypeGroup.
 *
 * @return - the TypeGroup name.
 */
std::string TypeGroup::name(void) const
{
    return _name;
}

/**
 * @brief Remove a unit from the TypeGroup.
 *
 * @param[in] name - name of unit to remove.
 *
 * @return - true if the unit was successfully removed, false otherwise.
 */
bool TypeGroup::removeUnit(const std::string& name)
{
    size_t n = _units.erase(name);
    if (n == 0) return false;
    else return true;
}

/**
 * @brief Get a list of the names of all the systems in the TypeGroup.
 *
 * @return - a list of system names.
 */
std::list<std::string> TypeGroup::systemNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, UBASE>::const_iterator it = _units.begin(); 
                                                      it != _units.end(); ++it) 
    {
        UBASE us = it->second;
        std::string name = us.system();
        bool found = (std::find(keys.begin(), keys.end(), name) != keys.end());
        if(found)
        {
            continue;
        }
        else
        {
            keys.push_back(name);
        }
    }
    return keys;
}

/**
 * @brief Get the named unit.
 *
 * @param[in] name - name of unit to get.
 *
 * @return - the named unit or an invalid unit if a unit
 *            having the specified name could not be found.
 */
const UBASE& TypeGroup::unit(const std::string& name) const
{
    if (_units.count(name) == 0)
    {
        return _base;
    }
    else
    {
        return _units.at(name);
    }
}

/**
 * @brief Get a list of the names of all the units in the TypeGroup.
 *
 * @return - a list of unit names.
 */
std::list<std::string> TypeGroup::unitNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, UBASE>::const_iterator it = _units.begin(); 
                                                      it != _units.end(); ++it) 
    {
        keys.push_back(it->first);
    }
    return keys;
}

/**
 * @brief Get the validity of the TypeGroup.
 *
 * @return - true if the TypeGroup is valid i.e. it contains
 *           one or more valid units.
 */
bool TypeGroup::valid(void) const
{
    return _valid;
}

/**
 * @brief Get the software version.
 *
 * @return  - the software version.
 */
std::string TypeGroup::version(void) const
{
    return _version;
}
// EOF
