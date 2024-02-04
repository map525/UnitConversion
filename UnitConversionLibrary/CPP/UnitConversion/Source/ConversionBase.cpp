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
// File ConversionBase.cpp
//
// Base class for conversions. This class provides methods for accessing
// the units, systems, and type groups that constitute a system of units 
// for a particular unit type. 
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#include "ConversionBase.hpp"

/**
 * @brief Default constructor.
 */
ConversionBase::ConversionBase(void) :  _map(), 
                                        _name("Invalid"), 
                                        _valid(false)
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name - the name of the conversion base.
 */
ConversionBase::ConversionBase(const std::string& name) :  _map(), 
                                                           _name(name), 
                                                           _valid(true)
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name - the name of the conversion base.
 * @param[in] map  - the units in the conversion base.
 */
ConversionBase::ConversionBase(const std::string& name, 
                               const std::map<std::string, 
                               BaseSystem>& map) : _map(map), 
                                                   _name(name), 
                                                   _valid(true)
{
}

/**
 * @brief Copy constructor.
 *
 * @param[in] other - the ConversionBase object to copy.
 */
ConversionBase::ConversionBase(const ConversionBase& other) :  _map(other._map),
                                                               _name(other._name), 
                                                               _valid(other._valid)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the ConversionBase object to copy.
 */
ConversionBase& ConversionBase::operator=(const ConversionBase& other)
{
    _map   = other._map;
    _name  = other._name;
    _valid = other._valid;
    return *this;
}

/**
  * @brief Construct a actual type name. Type name is dependent on
  *        on the system: either CanonicalSystem or SingleSystem.
  * 
  * @param[in] type   - the type.
  * @param[in] system - the system.
  * 
  * @return - system specific type.
  */
std::string ConversionBase::actualType(const std::string& type, 
                                       const std::string& system) const
{
    return type;
}

/*
 * @brief return a list of type or system names in the BaseSystem
 * 
 * @param[in] bs - BaseSystem whose names are required.
 * 
 * @ return - a list of names.
 */
std::list<std::string> ConversionBase::baseSystemNames(const BaseSystem& bs) const
{
    return std::list<std::string>();
}

/**
 * @brief The check method checks if the software version matches
 *        with the unit versions of its units.
 * 
 * @return - true if software and unit versions match, false otherwise.
 */
bool ConversionBase::check(void) const
{
    for (std::map<std::string, BaseSystem>::const_iterator it = _map.begin(); 
                                                           it != _map.end(); ++it)
    {
        BaseSystem bs = it->second;
        if (bs.check())
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
 * @brief Check is system is part of unit name. 
 *
 * @param[in] sysName  - the system name.
 * @param[in] unitName - the unit name.
 *
 * @return - the full unit name.
 */ 
bool ConversionBase::checkName(const std::string& sysName, 
                               const std::string& unitName) const
{
    if (unitName.find(sysName) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
 * @brief return a list of type or system names.
 * 
 * @ return - a list of names.
 */
std::list<std::string> ConversionBase::coreNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, BaseSystem>::const_iterator it = _map.begin(); 
                                                           it != _map.end(); ++it) 
    {
        singleCoreNames(it->first, keys);
    }
    return keys;
}

/**
 * @brief Construct a full unit name from system and unit name. A full  
 *        unit name is of the form systemName[unitName] e.g. SI[newton].
 *        This method is overridden in the child class.
 *
 * @param[in] sysName  - the system name.
 * @param[in] unitName - the unit name.
 *
 * @return - the full unit name.
 */ 
std::string ConversionBase::fullName(const std::string& sysName, 
                                     const std::string& unitName) const
{
    std::string fullName = sysName + "[" + unitName + "]";
    return fullName;
}

/**
 * @brief Construct a full type name. Type name is dependent on
 *        on the system: either CanonicalSystem or SingleSystem.
 * 
 * @param[in] type   - the type.
 * @param[in] system - the system.
 * 
 * @return - system specific type.
 */
std::string ConversionBase::fullType(const std::string& type, 
                                     const std::string& system) const
{
    return type;
}

/**
 * @brief Construct the full unit name from the system and unit names.
 * 
 * @param[in] systemName - the system name.
 * @param[in] unitName   - the unit name.
 *
 * @return - the full unit name (unit name plus the system name).
 */
std::string ConversionBase::fullUnitName(const std::string& systemName, 
                                         const std::string& unitName) const
{
    return unitName;
}

/**
 * @brief Construct the local unit name from the system and unit names.
 * 
 * @param[in] systemName - the system name.
 * @param[in] unitName   - the unit name.
 *
 * @return - the full unit name (unit name plus the system name).
 */
std::string ConversionBase::localName(const std::string& systemName, 
                                      const std::string& unitName) const
{
    return unitName;
}

/**
 * @brief Construct a local type name. 
 *
 * param[in]  - type - the unit type.
 * 
 * @return - type for the unit based on class.
 */
std::string ConversionBase::localType(const std::string& type) const
{
    return type;
}

/*
 * @breif Construct list of map names.
 * 
 * @retrun a list of map keys.
 */
std::list<std::string> ConversionBase::mapNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, BaseSystem>::const_iterator it = _map.begin(); 
                                                           it != _map.end(); ++it) 
    {
        keys.push_back(it->first);
    }
    return keys;
}

/*
 * @brief Get the name of the conversion.
 *
 * @return the conversion name.
 */
std::string ConversionBase::name(void) const
{
    return _name;
}

/**
 * @brief Get the unit name from the full unit name.
 *
 * @param[in] unitName - the full unit name.
 *
 * @return - the unit name stripped of the full name.
 */
std::string ConversionBase::rawUnitName(const std::string& unitName) const
{
    size_t first = unitName.find('[');
    size_t last = unitName.find(']');
    first = (first == std::string::npos ? 0 : first+1);
    last = (last == std::string::npos ? unitName.length() : last);
    std::string uName = unitName.substr (first,last-first);
    return uName;
}

/*
 * @brief return a list of type or system names.
 * 
 * @param[in] name - unit type or system name.
 * @param[i] list  - list to place results into.
 */
void ConversionBase::singleCoreNames(const std::string& name, 
                                     std::list<std::string>& list) const
{
    if (_map.count(name) == 0)
    {
        return;
    }
    else
    {
        BaseSystem us = _map.at(name);
        std::list<std::string> names = baseSystemNames(us);
        for (std::list<std::string>::const_iterator i = names.begin(); 
                                                    i != names.end(); ++i)
        {
            bool found = (std::find(list.begin(), list.end(), *i) != list.end());
            if(found)
            {
                continue;
            }
            else
            {
                list.push_back(*i);
            }
        }
    }
}

/**
 * @brief Get a BaseSystem in the conversion.
 *
 * @ param[in] name - the name of the requested BaseSystem.
 *
 * @return the specified BaseSystem or an invalid BaseSystem if the
 *         requested BaseSystem was not found.
 */
BaseSystem ConversionBase::system(const std::string& name) const
{
    if (_map.count(name) == 0)
    {
        return BaseSystem();
    }
    else
    {
        return _map.at(name);
    }
}

/**
 * @brief Get a list of system names in the conversion. This method
 *        is overridden in the child class.
 *
 * @param[in] type - the unit type.
 *
 * @return - list of system names in the conversion.
 */ 
std::list<std::string> ConversionBase::systemNames(const std::string& type) const
{
    return std::list<std::string>();
}

/**
 * @brief Get a list of all system names in the conversion.
 *
 * @return - list of system names in the conversion.
 */ 
std::list<std::string> ConversionBase::systemNames(void) const
{
    return std::list<std::string>();
}

/**
 * @brief Get a type group from the conversion. This method is 
 *        overridden in the child class.
 *
 * @param[in] type   - the unit type.
 * @param[in] tgroup - the type group.
 *
 * @return - the requested type group or an invalid type 
 *           group if the unit system was not found.
 */ 
TypeGroup ConversionBase::typeGroup(const std::string& type, 
                                    const std::string& tgroup) const
{
    if (_map.count(actualType(type,tgroup)) == 0)
    {
        return TypeGroup();
    }
    else
    {
        TypeGroup tg = _map.at(actualType(type,tgroup)).typeGroup(localType(type));
        typeGroupFilter(tgroup, tg);
        return tg;
    }
}

/**
 * @brief filter TypeGroup
 * 
 * @param[in] name - type group name to keep.
 * @param[in] tg   - type group to filter.
 */
void ConversionBase::typeGroupFilter(const std::string& name, 
                                     TypeGroup& tg) const
{
    return;
}



/**
 * @brief Get a list of type names in the conversion. This
 *        method is overridden in the child class.
 *
 * @return - list of type name in the conversion.
 */ 
std::list<std::string> ConversionBase::typeNames(void) const
{
    return std::list<std::string>();
}

/**
 * @brief Get a unit from the conversion. This method is 
 *        overridden in the child class.
 *
 * @param[in] type   - the unit type.
 * @param[in] system - the unit system.
 * @param[in] name   - the unit name.
 *
 * @return - the requested unit or an invalid unit if the
 *           unit was not found.
 */ 
UBASE ConversionBase::unit(const std::string& type, 
                           const std::string& system, 
                           const std::string& name) const
{
    std::string typeName = actualType(type, system);
    if (_map.count(typeName) == 0)
    {
        return UBASE();
    }
    else
    {
        std::string unitName = fullName(system, name);
        std::string fullTypeName = fullType(type, system);
        return _map.at(typeName).unit(fullTypeName, unitName);
    }
}

/**
 * @brief Get a list of unit names in the conversion. This method
 *        is overridden in the child class.     
 *
 * @param[in] type   - the unit type.
 * @param[in] system - the unit system.
 *
 * @return - a list of unit names in the conversion.
 */ 
std::list<std::string> ConversionBase::unitNames(const std::string& type, 
                                                 const std::string& system) const
{
    std::list<std::string> keys;
    if (_map.count(actualType(type,system)) == 0)
    {
        return keys;
    }
    else
    {
        BaseSystem us = _map.at(actualType(type,system));
        std::list<std::string> names = us.unitNames(localType(type));
        for (std::list<std::string>::const_iterator i = names.begin(); 
            i != names.end(); ++i)
        {
            if(checkName(system, *i))
            {
                continue;
            }
            else
            {
                keys.push_back(localName(type, *i));
            }
        }
        return keys;
    }
}

/**
 * @brief Get a list of all unit names in the conversion. This method
 * is overridden in the child class.     
 *
 * @return - a list of all unit names in the conversion.
 */ 
std::list<std::string> ConversionBase::unitNames(void) const
{
    std::list<std::string> keys;
    for (std::map<std::string, BaseSystem>::const_iterator it = _map.begin(); 
        it != _map.end(); ++it) 
    {
        BaseSystem us = it->second;
        std::list<std::string> types = us.typeNames();
        for (std::list<std::string>::iterator itl = types.begin(); 
                                              itl != types.end(); ++itl)
        {
            std::list<std::string> names = us.unitNames(*itl);
            for (std::list<std::string>::const_iterator i = names.begin(); 
                i != names.end(); ++i)
            {
                bool found = (std::find(keys.begin(), keys.end(), *i) != keys.end());
                if (found)
                {
                    continue;
                }
                else
                {
                    keys.push_back(localName(*itl,*i));
                }
            }
        }
    }
    return keys;
}

/**
 * @brief Get the validity of the conversion.
 *
 * @return true if the conversion is valid, false otherwise.
 */
bool ConversionBase::valid(void) const
{
    return _valid;
}
// EOF
