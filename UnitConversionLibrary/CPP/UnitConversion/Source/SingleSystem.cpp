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
// File SingleSystem.cpp
//
// The SingleSystem class contains unit systems all having units of the same
// type. Examples include density, force, power, and angle. A SingleSystem
// contains only a single type group but can consist of units from many
// different systems. Typically, a SingleSystem is either modern or historical
// but not ancient. It is a child class of Conversion which defines its 
// interface.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include"SingleSystem.hpp"

/**
 * @brief Default Constructor.
 */
SingleSystem::SingleSystem(void) : Conversion()
{
}

/**
 * @brief Constructor.
 * 
 * @param[in] name - name of the SingleSystem.
 */
SingleSystem::SingleSystem(const std::string name) : Conversion(name)
{
}

/**
 * @brief Constructor.
 * 
 * @param[in] name - name the SingleSystem.
 * @param[in] map  - units in the SingleSystem. 
 */
SingleSystem::SingleSystem(const std::string& name, 
                           const std::map<std::string, BaseSystem>& map) 
                           : Conversion(name, map)
{
}

/**
 * @brief Copy Constructor.
 *
 * @param[in] other - the other SingleSystem to copy.
 */
SingleSystem::SingleSystem(SingleSystem& other) : Conversion(other)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the other SingleSystem to copy.
 */
SingleSystem& SingleSystem::operator=(const SingleSystem& other)
{
    Conversion::operator=(other);
    return *this;
}

/*
 * @brief return a list of type or system names in the BaseSystem
 * 
 * @param[in] bs - BaseSystem whose names are required.
 * 
 * @ return - a list of names.
*/
std::list<std::string> SingleSystem::baseSystemNames(const BaseSystem& bs) const
{
    return bs.systemNames("unit");
}

/**
 * @brief Convert from one unit to another. Example of usage is as follows:
 * 
 *   double tempCelsius = usb.convertUnit(300.0,  "temperature", "Kelvin", 
 *                                        "SI", "Celsius", "INT", false);
 *
 * converts two meters (SI system) to equivalent feet (US system).
 *     
 * @param[in] value     - value of the unit to be converted.
 * @param[in] fromType  - 'from' unit type. 
 * @param[in] toType    - 'to' unit type.
 * @param[in] from    - name of 'from' unit.
 * @param[in] fromSys - name of 'from' system.
 * @param[in] to      - name of 'to' unit.
 * @param[in] toSys   - name of 'to' system.
 * @param[in] asIs    - if false construct full unit names from inputs.
 *
 * @return - the value of the converted unit.
 */ 
double SingleSystem::convertUnit(double value,  
                                 const std::string& fromType, 
                                 const std::string& toType, 
                                 const std::string& from, 
                                 const std::string& fromSys, 
                                 const std::string& to, 
                                 const std::string& toSys, 
                                 bool asIs) const
{
    std::string type = fromType;
    if (_map.count(type) == 0 || fromType != toType)
    {
        return UBASE::ERROR;
    }
    else
    {
        std::string sysFrom = (asIs ? from : fromSys + "[" + from + "]");
        std::string sysTo   = (asIs ? to : toSys + "[" + to + "]");

        BaseSystem system = _map.at(type);
        UBASE dbTo = system.unit("unit",sysTo);
        UBASE dbFrom = system.unit("unit",sysFrom);
        if (dbFrom.valid() && dbTo.valid() &&  dbTo.value().asDouble() != 0 
                           && dbTo.type() == dbFrom.type())
        { 
            double fromValue = value * dbFrom.value().asDouble() + dbFrom.offset().asDouble();
            return (fromValue - dbTo.offset().asDouble()) / dbTo.value().asDouble();
        }
        else
        {
            return UBASE::ERROR;
        }

    }
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
std::string SingleSystem::fullType(const std::string& type,
                                   const std::string& system) const
{
    return "unit";
}

/**
 * @brief Construct the full unit name from the system and unit names.
 * 
 * @param[in] systemName - the system name.
 * @param[in] unitName   - the unit name.
 *
 * @return - the full unit name (unit name plus of the system name).
 */
std::string SingleSystem::fullUnitName(const std::string& systemName, 
                                       const std::string& unitName) const
{
    return Conversion::fullName(systemName,unitName);
}

/**
 * @brief Construct a local type name. 
 *
 * param[in]  - type - the unit type.
 * 
 * @return - type for the unit based on class.
 */
std::string SingleSystem::localType(const std::string& type) const
{
    return "unit";
}

/**
 * @brief Get a list of system names in the SingleSystem.
 *
 * @param[in] type - the unit type.
 *
 * @return - list of system names in the SingleSystem.
 */ 
std::list<std::string> SingleSystem::systemNames(const std::string& type) const
{
    std::list<std::string> keys;
    singleCoreNames(type,keys);
    return keys;
}

/**
 * @brief Get a list of all system names in the SingleSystem.
 *
 * @return - list of system names in the SingleSystem.
 */ 
std::list<std::string> SingleSystem::systemNames(void) const
{
    return coreNames();
}

/**
 * @brief filter TypeGroup
 * 
 * @param[in] name - type group name to keep.
 * @param[in] tg   - type group to filter.
 */
void SingleSystem::typeGroupFilter(const std::string& name, 
                                   TypeGroup& tg) const
{
    std::list<std::string> names = tg.unitNames();
    for (std::list<std::string>::iterator it = names.begin(); 
        it != names.end(); ++it)
    {
        if (it->find(name) != std::string::npos)
        {
            continue;
        }
        else
        {
            tg.removeUnit(*it);
        }
    }
}

/**
 * @brief Get a list of type names in the SingleSystem.
 *
 * @return - list of type names in the SingleSystem.
 */ 
std::list<std::string> SingleSystem::typeNames(void) const
{
    return mapNames();
}
// EOF
