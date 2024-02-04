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
// File Convert.cpp
//
// Base class for the converter. The converter is the interface used for 
// converting units. A converter exists for each type. The Convert base
// class contains methods for obtaining lists of unit names, system names,
// the default 'to' and 'from' systems, and type names for the Converter.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////
#include "Convert.hpp"
#include "Conversion.hpp"

/**
 * @brief Constructor.
 *
 * @param[in] name       - name of the Converter.
 * @param[in] from       - the name of the 'from' system.
 * @param[in] to         - the name of the 'to' system.
 * @param[in] conversion - a conversion object containing the systems and
 *                         associated units for the unit type.
 */
Convert::Convert(const std::string&  name, 
                 const std::string& from, 
                 const std::string& to, 
                 Conversion& conversion) :  _conversion(conversion), 
                                            _name(name), 
                                            _fromSystem(from),
                                            _toSystem(to),  
                                            _valid(true)                                            
{
}

/**
 * @brief Copy constructor.
 *
 * @param[in] other - Convert to copy.
 */
Convert::Convert(const Convert& other) : _conversion(other._conversion), 
                                         _name(other._name),
                                         _fromSystem(other._fromSystem),
                                         _toSystem(other._toSystem),
                                         _valid(other._valid)
{
}

/**
 * @brief Assignment Operator.
 * 
 * @param[in] other - Converter to copy.
 * 
 * @return - copy of input converter
 */
Convert& Convert::operator=(const Convert& other)
{
    _name       = other._name;
    _fromSystem = other._fromSystem;
    _toSystem   = other._toSystem;
    _valid      = other._valid;
    _conversion = other._conversion;
    return *this;
}

/**
 * @brief Get a list of all the system names in the converter.
 *
 * @return - a list of system names in the converter.
 */
std::list<std::string> Convert::allSystemNames(void) const
{
    return _conversion.systemNames();
}

/**
 * @ brief Get a list of all the unit names in the converter.
 *
 * @return - a list of unit names in the converter.
 */
std::list<std::string> Convert::allUnitNames(void) const
{
    return _conversion.unitNames();
}

/**
 * @brief The check method checks if the software version matches
 *        with the unit versions of its units.
 * 
 * @return - true if software and unit versions match, false otherwise.
 */
bool Convert::check(void) const
{
    return _conversion.check();
}

/**
 * @brief Get the name of the current 'from' system.
 *
 * @return - the name of the current 'from' system.
 */
std::string Convert::fromSystem(void) const
{
    return _fromSystem;
}

/**
 * @brief Set the name of the current 'from' system.
 *
 * @param[in] fSys - name of the new 'from' system.
 */
void Convert::fromSystem(const std::string& system)
{
    _fromSystem = system;
}

/**
 * @brief Construct the full unit name from the system and unit names.
 * 
 * @param[in] systemName - the system name.
 * @param[in] unitName   - the unit name.
 *
 * @return - the full unit name (unit name plus the system name).
 */
std::string Convert::fullUnitName(const std::string& systemName, 
                                  const std::string& unitName) const
{
    return _conversion.fullUnitName(systemName, unitName);
}

/**
 * @brief Check if input is ERROR code.
 * 
 * @param[in] x - value to check.
 * 
 * @return true if input is ERROR code, false otherwise.
*/
bool Convert::isError(double x)
{
    return UBASE::isERROR(x);
}

/**
 * @brief Get the name of the convert.
 *
 * @return - the name of the convert.
 */
std::string Convert::name(void) const
{
    return _name;
}

/**
 * @brief Get the unit name from the full unit name.
 *
 * @param[in] unitName - the full unit name.
 *
 * @return - the unit name stripped of the system name.
 */
std::string Convert::rawUnitName(const std::string& unitName) const
{
    return _conversion.rawUnitName(unitName);
}

/**
 * @brief Get the name of the current 'to' system.
 *
 * @return - the name of the current 'to' system.
 */
std::string Convert::toSystem(void) const
{
    return _toSystem;
}

/**
 * @brief Set the name of the current 'to' system.
 *
 * @param[in] tSys - name of the new 'to' system.
 */
void Convert::toSystem(const std::string& system)
{
    _toSystem = system;
}

/**
 * @brief Get a list of all the unit types in the convert.
 *
 * @return - a list of unit types in the convert.
 */
std::list<std::string> Convert::typeNames(void) const
{
    return _conversion.typeNames();
}

/**
  * @brief Get a flag that specifies if the convert is valid or not.
  *
  * @return - true if the convert contains one or more unit systems having
  *           one or more valid units.
  */
bool Convert::valid(void) const
{
    return _valid;
}
// EOF
