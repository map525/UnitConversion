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
// File Converter.cpp
//
// A converter contains methods that perform unit conversions between units
// of the same type. Units may be added or removed from the converter.  In
// general conversion is allowed only between units of the same type. However,
// volume units are divided into liquid and dry and since these have the 
// same dimensions, unit conversion is allowed between them.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////
#include "Converter.hpp"
#include "Conversion.hpp"

/**
 * @brief Constructor.
 *
 * @param[in] name       - name of the Converter.
 * @param[in] type       - the unit type.
 * @param[in] from       - the name of the 'from' system.
 * @param[in] to         - the name of the 'to' system.
 * @param[in] conversion - a conversion object containing the systems and
 *                         associated units for the unit type.
 */
Converter::Converter(const std::string& name, 
                     const std::string& type, 
                     const std::string& from, 
                     const std::string& to, 
                     Conversion& conversion) : Convert(name, from, to, conversion),
                                               _type(type), 
                                               _fromType(type), 
                                               _toType(type)                                          
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name       - name of the Converter.
 * @param[in] type       - the unit type.
 * @param[in] fromType   - the 'from' unit type.
 * @param[in] toType     - the 'to' unit type.
 * @param[in] from       - the name of the 'from' system.
 * @param[in] to         - the name of the 'to' system.
 * @param[in] conversion - a conversion object containing the systems and
 *                         associated units for the unit type.
 */
Converter::Converter(const std::string& name, 
                     const std::string& type, 
                     const std::string& fromType, 
                     const std::string& toType, 
                     const std::string& from, 
                     const std::string& to, 
                     Conversion& conversion) : Convert(name, from, to, conversion), 
                                               _type(type), 
                                               _fromType(fromType), 
                                               _toType(toType)                                          
{
}

/**
 * @brief Add a unit to the converter.
 *
 * @param[in] sysName    - name of unit system the new unit belongs to.
 * @param[in] unitName   - the name of the new unit.
 * @param[in] bse        - the new unit.
 *
 * @return - true if the unit was successfully added, false otherwise.
 */
bool  Converter::addUnit(const std::string& sysName, 
                         const std::string& unitName, 
                         const UBASE& bse)
{
    return _conversion.addUnit(_type, sysName, unitName, bse);
}

/**
 * @brief Convert input value from its specified 'from' units in 'from'  
 *        system to the specified 'to' units in 'to' system.
 *
 * @param[in] value      - value of unit in 'from' units.
 * @param[in] from       - the name of the 'from' unit.
 * @param[in] to         - the name of the 'to' unit.
 * @param[in] asIs       - if true, do not construct full unit names, but
 *                         use the unit names supplied 'as is'.
 *
 * @return - the converted value of the input unit.
 */
double Converter::convert(double value, 
                          const std::string& from, 
                          const std::string& to, 
                          bool asIs) const
{
    return _conversion.convertUnit(value, _fromType, _toType, from, _fromSystem, 
                                                      to, _toSystem, asIs);
}

/**
 * @brief Convert input value from its specified 'from' units in 'from'  
 *        system to the specified 'to' units in 'to' system.
 *
 * @param[in] value      - value of unit in 'from' units.
 * @param[in] from       - the name of the 'from' unit.
 * @param[in] fromSys    - the name of the 'from' system.
 * @param[in] to         - the name of the 'to' unit.
 * @param[in] toSys      - the name of the 'to' system.
 *
 * @return - the converted value of the input unit.
 */
double Converter::convert(double value,  
                        const std::string& from, 
                        const std::string& fromSys, 
                        const std::string& to, 
                        const std::string& toSys) const
{
    return _conversion.convertUnit(value, _fromType, _toType, from, fromSys, 
                                                      to, toSys, false);
}

/**
 * @brief Set the 'from' type.
 * 
 * @param[in] fromType - the 'from' unit type.
 * 
 * @returns = true if type change was made, false otherwise.
 */
bool Converter::fromType(const std::string fromType)
{
    if (_conversion.validateType(fromType, _toType))
    {
        _fromType = fromType;
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Get the 'from' type.
 * 
 * @return - the 'from' unit type.
 */
std::string Converter::fromType(void) const
{
    return _fromType;
}

/**
 * @brief Remove a unit from the converter.
 *
 * @param[in] sysName    - name of unit system the unit belongs to.
 * @param[in] unitName   - the name of the unit to remove.
 *
 * @return - true if the unit was successfully removed, false otherwise.
 */
bool  Converter::removeUnit(const std::string& sysName, 
                            const std::string& unitName)
{
    return _conversion.removeUnit(_type, sysName, unitName);
}

/**
 * @brief Get a TypeGroup in the converter.
 *
 * @param[in] tgroup - the name of the type group to get.
 *
 * @return - the specified type group or an invalid type group if
 *           the specified group was not found.     
 */
TypeGroup Converter::typeGroup(const std::string& tgroup) const
{
    return _conversion.typeGroup(_type, tgroup);
}

/**
 * @brief Get a list of all the system names in the converter.
 *
 * @return - a list of system names in the converter.
 */
std::list<std::string> Converter::systemNames(void) const
{
    return _conversion.systemNames(_type);
}

/**
 * @brief Set the 'to' type.
 * 
 * @param[in] toType - the 'to' unit type.
 * 
 * @returns = true if type change was made, false otherwise.
 */
bool Converter::toType(const std::string toType)
{
    if (_conversion.validateType(_fromType, toType))
    {
        _toType = toType;
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief Get the 'to' type.
 * 
 * @return - the 'to' unit type.
 */
std::string Converter::toType(void) const
{
    return _toType;
}

/**
 * @brief Get the name of the unit type of the converter.
 *
 * @return - the name of the unit type of the converter.
 */
std::string Converter::type(void) const
{
    return _type;
}

/**
 * @brief Get a unit in the converter.
 *
 * @param[in] system - the name of the unit system the 
 *                     requested unit belongs to.
 * @param[in] name   - the name of the requested unit.
 *
 * @return - the specified unit or an invalid unit  if
 *           the specified unit was not found.     
 */
UBASE Converter::unit(const std::string& system, 
                      const std::string& name) const
{
    return _conversion.unit(_type, system, name);
}

/**
 * @brief Get a list of all the unit names in the specified unit system.
 *
 * @param[in] - system - the unit system name of the system the requested
 *                       unit belongs to.
 *
 * @return - a list of unit names in the specified system in the converter.
 */
std::list<std::string> Converter::unitNames(const std::string& system) const
{
    return _conversion.unitNames(_type, system);
}

/**
 * @brief Get a list of all the unit names in the converter.
 *
 * @return - a list of unit names in the converter.
 */
std::list<std::string> Converter::unitNames(void) const
{
    std::list<std::string> sysNames = _conversion.systemNames();
    std::list<std::string> unitNames;
    for (std::list<std::string>::iterator it = sysNames.begin(); 
                                          it != sysNames.end(); ++it)
    {
        std::list<std::string> un = _conversion.unitNames(_type, *it);
        unitNames.insert(unitNames.end(), un.begin(), un.end());
    } 
    return unitNames;
}
// EOF
