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
// File CanonicalSystem.cpp
//
// All unit systems, ancient, historical, and modern contain the four unit types
// for measuring distance, area, weight (mass), and volume. Volume is divided
// into two types: liquid and dry. These five types are termed canonical types
// since (almost) all other types can be expressed as some combination of these
// five types. For example density is mass divided by volume and force is
// mass times length divided by time. The CanonicalSystem class contains systems
// containing these five canonical types. It is a child class of the Conversion
// class which defines the interface to this class.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include"CanonicalSystem.hpp"

/**
 * @brief Default constructor.
 */
CanonicalSystem::CanonicalSystem(void) : Conversion()
{
}

/**
 * @brief Constructor.
 * 
 * @param[in] name - name of the CanonicalSystem.
 */
CanonicalSystem::CanonicalSystem(const std::string name) : Conversion(name)
{
}

/**
 * @brief Constructor.
 * 
 * @param[in] name - name of the CanonicalSystem.
 * @param[in] map  - units in the CanonicalSystem. 
 */
CanonicalSystem::CanonicalSystem(const std::string& name, 
                                 const std::map<std::string, BaseSystem>& map) 
                                 : Conversion(name, map)
{
}

/**
 * @brief Copy constructor.
 *
 * @param[in] other - the other CanonicalSystem to copy.
 */
CanonicalSystem::CanonicalSystem(CanonicalSystem& other) : Conversion(other)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the other CanonicalSystem to copy.
*/
CanonicalSystem& CanonicalSystem::operator=(const CanonicalSystem& other)
{
    Conversion::operator=(other);
    return *this;
}

/**
 * @brief Construct an actual type name. Type name is dependent on
 *        on the system: either CanonicalSystem or SingleSystem.
 * 
 * @param[in] type   - the type.
 * @param[in] system - the system.
 * 
 * @return - system specific type.
 */
std::string CanonicalSystem::actualType(const std::string& type, 
                                        const std::string& system) const
{
    return system;
}

/*
 * @brief return a list of type or system names in the BaseSystem
 * 
 * @param[in] bs - BaseSystem whose names are required.
 * 
 * @ return - a list of names.
*/
std::list<std::string> CanonicalSystem::baseSystemNames(const BaseSystem& bs) const
{
    return bs.typeNames();
}

/**
* @brief Check is system is part of unit name. 
*
* @param[in] sysName  - the system name.
* @param[in] unitName - the unit name.
*
* @return - the full unit name.
*/ 
bool CanonicalSystem::checkName(const std::string& sysName, 
                                const std::string& unitName) const
{
    return false;
}

/**
 * @brief Convert from one unit to another. Example of usage is as follows:
 * 
 *   double tempCelsius = usb.convertUnit(300.0,  "temperature", "Kelvin", 
                                          "SI", "Celsius", "INT", false);
 *
 * converts two meters (SI system) to equivalent feet (US system).
 *     
 * @param[in] value    - value of the unit to be converted
 * @param[in] fromType - 'from' unit type
 * @param[in] toType   - 'to' unit type
 * @param[in] from     - name of 'from' unit.
 * @param[in] fromSys  - name of 'from' system.
 * @param[in] to       - name of 'to' unit.
 * @param[in] toSys    - name of 'to' system.
 * @param[in] asIs     - if false construct full unit names from inputs.
 *
 * @return - the value of the converted unit.
 */ 
double CanonicalSystem::convertUnit(double value, 
                                    const std::string& fromType, 
                                    const std::string& toType, 
                                    const std::string& from, 
                                    const std::string& fromSys, 
                                    const std::string& to, 
                                    const std::string& toSys, 
                                    bool asIs) const
{
    if (_map.count(fromSys) == 0 || _map.count(toSys) == 0 )
    {
        return UBASE::ERROR;
    }
    else
    {
        BaseSystem fromBS = _map.at(fromSys);
        BaseSystem toBS = _map.at(toSys);
        UBASE dbTo = toBS.unit(toType, to);
        UBASE dbFrom = fromBS.unit(fromType, from);

        if (dbTo.valid() && dbFrom.valid() && dbTo.value().dvalue() != 0 
                         && dbTo.type() == dbFrom.type())
        {
            double fromValue = value * dbFrom.value().dvalue() + dbFrom.offset().dvalue();
            return (fromValue - dbTo.offset().dvalue()) / dbTo.value().dvalue();
        }
        else
        {
            return UBASE::ERROR;
        }
    }
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
std::string CanonicalSystem::fullName(const std::string& sysName, 
                                      const std::string& unitName) const
{
    return unitName;
}

/**
 * @brief Construct the full unit name from the system and unit names.
 * 
 * @param[in] systemName - the system name.
 * @param[in] unitName   - the unit name.
 *
 * @return - the full unit name (unit name plus the system name).
 */
std::string CanonicalSystem::fullUnitName(const std::string& systemName, 
                                          const std::string& unitName) const
{
    return ConversionBase::rawUnitName(unitName);
}

/**
 * @brief Construct the local unit name from the system and unit names.
 * 
 * @param[in] systemName - the system name.
 * @param[in] unitName   - the unit name.
 *
 * @return - the full unit name (unit name plus the system name).
 */
std::string CanonicalSystem::localName(const std::string& systemName, 
                                       const std::string& unitName) const
{
    return ConversionBase::fullName(systemName, unitName);
}

/**
 * @brief Get the unit name from the full unit name.
 *
 * @param[in] unitName - the full unit name.
 *
 * @return - the unit name stripped of the full name.
*/
std::string CanonicalSystem::rawUnitName(const std::string& unitName) const
{
    return unitName;
}

/**
 * @brief Get a list of system names in the CanonicalSystem.
 *
 * @param[in] type   - the unit type.
 *
 * @return - list of system names in the CanonicalSystem.
 */ 
std::list<std::string> CanonicalSystem::systemNames(const std::string& type) const
{
    /*
    std::list<std::string> keys;
    for (std::map<std::string, BaseSystem>::const_iterator it = _map.begin(); 
                                                       it != _map.end(); ++it) 
    {
        if (it->first == type)
        {
            keys.push_back(it->first);
        }
        else
        {
            continue;
        }
    }
    return keys;
    */
    return systemNames();
}

/**
 * @brief Get a list of all system names in the CanonicalSystem.
 *
 * @return - list of system names in the CanonicalSystem.
 */ 
std::list<std::string> CanonicalSystem::systemNames(void) const
{
    return mapNames();
}

/**
 * @brief Get a list of type names in the CanonicalSystem.
 *
 * @return - list of type names in the CanonicalSystem.
 */ 
std::list<std::string> CanonicalSystem::typeNames(void) const
{
    return coreNames();
}

/**
 * @brief Return true if conversion between types is allowed, false otherwise.
 * 
 * @param[in] fromType - the 'from' unit type.
 * @param[in] toType   - the 'to' unit type.
 *
 * @return - true if conversion between types is allowed, false otherwise.
 */
bool CanonicalSystem::validateType(const std::string& fromType,
                                   const std::string& toType) const
{
    std::list<std::string> tName = typeNames();
    std::list<std::string> aName{"Dry","Liquid","Volume"};
    std::list<std::string>::const_iterator fromIter = std::find(tName.begin(), 
                                                                tName.end(), 
                                                                fromType);
    std::list<std::string>::const_iterator toIter   = std::find(tName.begin(), 
                                                                tName.end(), 
                                                                toType);
    bool fromOK = (tName.size() == 0 ? true : fromIter != tName.end());
    bool toOK   = (tName.size() == 0 ? true : toIter   != tName.end());
    if (fromOK && toOK)
    {
        fromIter = std::find(aName.begin(), aName.end(), fromType);
        toIter = std::find(aName.begin(), aName.end(), toType);
        if (fromType == toType)
        {
            return true;
        }
        else if (fromIter != aName.end() && toIter != aName.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
// EOF
