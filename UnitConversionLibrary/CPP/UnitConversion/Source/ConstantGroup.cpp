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
// File ConstantGroup.cpp
//
// ConstantGroup is the base class for derived units, physical constants, 
// physical  definition, physical measurements, WGS84 Model,  and some 
// SI units. These  'units'  are used as the basis for other units but are not 
// directly convertible as such. They are stored as UBASE objects, as other units 
// are, and placed in a map and are accessible for reference or other purposes.     
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include"ConstantGroup.hpp"
#include "Version.hpp"

/**
 * @brief Default constructor
 */
ConstantGroup::ConstantGroup(void) : _map(), 
                                     _name("Invalid"),
                                     _valid(false),
                                     _version("Invalid")
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name    - name of the constant group.
 * @param[in] version - software version.
*/
ConstantGroup::ConstantGroup(const std::string& name,
                             const std::string& version) : _map(),
                                                           _name(name),
                                                           _valid(true),
                                                           _version(version)
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name      - name of the constant group.
 * @param[in] version   - software version.
 * @param[in] constants - constants in the group.
 */
ConstantGroup::ConstantGroup(const std::string& name,
                             const std::string& version,
                             const std::map<std::string, UBASE>& constants) 
                             : _map(constants),
                               _name(name),
                               _valid(true),
                               _version(version)
{
}

/**
 * @brief Copy Constructor.
 *
 * @param[in] other - the other ConstantGroup to be copied.
 */
ConstantGroup::ConstantGroup(const ConstantGroup& other) : _map(other._map),
                                                           _name(other._name),
                                                           _valid(other._valid),
                                                           _version(other._version)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - name of other ConstantGroup to be copied.
 */
ConstantGroup& ConstantGroup::operator=(const ConstantGroup& other)
{
    _map     = other._map;
    _name    = other._name;
    _valid   = other._valid;
    _version = other._version;
    return *this;
}

/**
 * @brief The check method checks if the software version matches with the unit
 *        versions of the constants in the ConstantGroup. Constants are auto 
 *        generated from an Excel spreadsheet using VBA code.
 * 
 * @return - true if software and constant versions match, false otherwise.
 */
bool ConstantGroup::check(void) const
{
    Version& v = Version::Instance();
    for (std::map<std::string, UBASE>::const_iterator it = _map.begin(); 
                                                      it != _map.end(); ++it) 
    {
        UBASE db = it->second;
        if (db.version() == v.version())
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
 * @brief Get named constant.
 *
 * @param[in] name - name of constant to get.
 *
 * @return - the specified constant or invalid constant if not found.
 */
UBASE ConstantGroup::constant(const std::string& name) const
{
    if (_map.count(name) == 0)
    {
        return UBASE();
    }
    else
    {
        return _map.at(name);
    }
}

/**
 * @brief Get list of constant names.
 *
 * @return - a list of constant names.
 */
std::list<std::string> ConstantGroup::constantNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, UBASE>::const_iterator it = _map.begin(); 
        it != _map.end(); ++it) 
    {
        keys.push_back(it->first);
    }
    return keys;
}

/**
 * @brief Check if input is ERROR code.
 * 
 * @param[in] x - value to check.
 * 
 * @return true if input is ERROR code, false otherwise.
*/
bool ConstantGroup::isError(double x)
{
    return UBASE::isERROR(x);
}

/**
 * @brief Get the name of the ConstantGroup.
 *
 * @return - the name of the ConstantGroup.
 */
std::string ConstantGroup::name(void) const
{
    return _name;
}

/**
 * @brief Get list of system names.
 *
 * @return - a list of system names.
 */
std::list<std::string> ConstantGroup::systemNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, UBASE>::const_iterator it = _map.begin(); 
                                                      it != _map.end(); ++it) 
    {
        UBASE db = it->second;
        bool found = (std::find(keys.begin(), keys.end(), 
                                db.system()) != keys.end());
        if (found)
        {
            continue;
        }
        else
        {
            keys.push_back(db.system());
        }
    }
    return keys;
}

/**
 * @brief Get list of constant types.
 *
 * @return - a list of constant types.
 */
std::list<std::string> ConstantGroup::typeNames(void) const
{
    std::list<std::string> keys;
    keys.push_back(_name);
    return keys;
}

/**
 * @brief Get the validity of the ConstantGroup.
 *
 * @return - true if ConstantGroup is valid, false otherwise.
 */
bool ConstantGroup::valid(void) const
{
    return _valid;
}

/**
 * @brief Get the value of a constant.
 *
 * @param[in] constName - the name of the constant.
 *
 * @return the value of the named constant.
 */
double ConstantGroup::value(const std::string& constName) const
{
    return constant(constName).value().asDouble();
}

/**
 * @brief Get the software version.
 *
 * @return  - the software version.
 */
std::string ConstantGroup::version(void) const
{
    return _version;
}
// EOF
