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
// File SystemUnits.cpp
//
// All unit systems, ancient, historical, and modern contain the four unit types
// for measuring distance, area, weight (mass), and volume. Volume is divided
// into two types: liquid and dry. Within these five types of units, there are
// are subset from which all the other units in a system are derived. These 
// units are termed System Units. This class is the base class for all the
// System Units.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include"SystemUnits.hpp"

/**
 * @brief Default constructor.
 */
SystemUnits::SystemUnits(void) : ConversionBase()
{
}

/**
 * @brief Constructor.
 * 
 * @param[in] name - name of the SystemUnits.
 */
SystemUnits::SystemUnits(const std::string name) : ConversionBase(name)
{
}

/**
 * @brief Constructor.
 * 
 * @param[in] name - name of the SystemUnits.
 * @param[in] map  - units in the SystemUnits. 
 */
SystemUnits::SystemUnits(const std::string& name, 
                         const std::map<std::string, BaseSystem>& map) 
                                 : ConversionBase(name, map) 
{
}

/**
 * @brief Copy constructor.
 *
 * @param[in] other - the other SystemUnits to copy.
 */
SystemUnits::SystemUnits(SystemUnits& other) : ConversionBase(other)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the SystemUnits object to copy.
 */
SystemUnits& SystemUnits::operator=(const SystemUnits& other)
{
    ConversionBase::operator=(other);
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
std::string SystemUnits::actualType(const std::string& type, 
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
std::list<std::string> SystemUnits::baseSystemNames(const BaseSystem& bs) const
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
bool SystemUnits::checkName(const std::string& sysName, 
                            const std::string& unitName) const
{
    return false;
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
std::string SystemUnits::fullName(const std::string& sysName, 
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
std::string SystemUnits::fullUnitName(const std::string& systemName, 
                                      const std::string& unitName) const
{
    return ConversionBase::rawUnitName(unitName);
}

/**
 * @brief Check if input is ERROR code.
 * 
 * @param[in] x - value to check.
 * 
 * @return true if input is ERROR code, false otherwise.
*/
bool SystemUnits::isError(double x)
{
    return UBASE::isERROR(x);
}

/**
* @brief Construct the local unit name from the system and unit names.
* 
* @param[in] systemName - the system name.
* @param[in] unitName   - the unit name.
*
* @return - the full unit name (unit name plus the system name).
*/
std::string SystemUnits::localName(const std::string& systemName, 
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
std::string SystemUnits::rawUnitName(const std::string& unitName) const
{
    return unitName;
}

/**
 * @brief Get a list of system names in the SystemUnits.
 *
 * @param[in] type   - the unit type.
 *
 * @return - list of system names in the SystemUnits.
 */ 
std::list<std::string> SystemUnits::systemNames(const std::string& type) const
{
    return systemNames();
}
/**
 * @brief Get a list of all system names in the CanonicalSystem.
 *
 * @return - list of system names in the CanonicalSystem.
 */ 
std::list<std::string> SystemUnits::systemNames(void) const
{
    return mapNames();
}

/**
 * @brief Get a list of type names in the CanonicalSystem.
 *
 * @return - list of type names in the CanonicalSystem.
 */ 
std::list<std::string> SystemUnits::typeNames(void) const
{
    return coreNames();
}

/**
 * @brief Get value of a system unit.
 * 
 * @param[in] type    - the unit type.
 * @param[in] system  - the unit system.
 * @param[in] name    - the unit name.
*/
double SystemUnits::value(const std::string& type, 
                          const std::string& system, 
                          const std::string& name) const
{
    UBASE u = unit(type, system, name);
    return u.value().asDouble();
}
// EOF
