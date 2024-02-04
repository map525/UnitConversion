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
// File Conversion.cpp
//
// Base class for the CanonicalSystem and SingleSystem classes. This class 
// provides an interface for unit conversions between units of the same 
// type but in different systems e.g. feet to  meters, etc.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#include "Conversion.hpp"

/**
 * @brief Default constructor.
 */
Conversion::Conversion(void) :  ConversionBase()
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name - the name of the conversion.
 */
Conversion::Conversion(const std::string& name) : ConversionBase(name)
{
}

/**
 * @brief Constructor.
 *
 * @param[in] name - the name of the conversion.
 * @param[in] map  - the units in the conversion.
 */
Conversion::Conversion(const std::string& name, 
                       const std::map<std::string, 
                       BaseSystem>& map) : ConversionBase(name,map)
{
}

/**
 * @brief Copy constructor.
 *
 * @param[in] other - the Conversion object to copy.
 */
Conversion::Conversion(const Conversion& other) :  ConversionBase(other)
{
}

/**
 * @brief Assignment Operator.
 *
 * @param[in] other - the Conversion object to copy.
 */
Conversion& Conversion::operator=(const Conversion& other)
{
    ConversionBase::operator=(other);
    return *this;
}

/**
 * @ brief Add a unit to the conversion.
 *
 * @param[in] typeName   - the name of the unit type being added.
 * @param[in] sysName    - name of the system new unit belongs to.
 * @param[in] unitName   - the name of the new unit.
 * @param[in] bse        - the new unit.
 *
 * @return - true if the unit as successfully added, false otherwise.
 */
bool Conversion::addUnit(const std::string& typeName, 
                         const std::string& sysName, 
                         const std::string& unitName, 
                         const UBASE& bse)
{
    std::string type = actualType(typeName, sysName);
    if (_map.count(type) == 0)
    {
        return false;
    }
    else
    {
        std::string name = fullName(sysName, unitName);
        std::string fullTypeName = fullType(typeName,sysName);
        bool ans = _map[type].addUnit(fullTypeName, name, bse);
        return ans;
    }
}

/**
 * @brief Convert input value from its specified 'from' units in 'from' system 
 *        to the specified 'to' units in 'to' system. This method is overridden  
 *        in the child class.     
 *
 * @param[in] value      - value of unit in 'from' units.
 * @param[in] fromType   - the 'from' unit type.
 * @param[in] toType     - the 'to' unit type.
 * @param[in] from       - the name of the 'from' unit.
 * @param[in] fromSys    - the name of the 'from' system.
 * @param[in] to         - the name of the 'to' unit.
 * @param[in] toSys      - the name of the 'to' system.
 * @param[in] asIs       - if true, do not construct full unit names, but
 *                         use the unit names supplied 'as is'.
 *
 * @return - the converted unit value.
 */
double Conversion::convertUnit(double value, 
                               const std::string& fromType, 
                               const std::string& toType, 
                               const std::string& from, 
                               const std::string& fromSys, 
                               const std::string& to, 
                               const std::string& toSys, 
                               bool asIs) const
{
    return UBASE::ERROR;
}

/**
 * @brief Remove a unit from the conversion.
 *
 * @param[in] typeName   - the type of the unit being removed.
 * @param[in] sysName    - name of unit system the unit belongs to.
 * @param[in] unitName   - the name of the unit to remove.
 *
 * @return - true if the unit as successfully removed, false otherwise.
 */
bool Conversion::removeUnit(const std::string& typeName, 
                            const std::string& sysName, 
                            const std::string& unitName)
{
    std::string type = actualType(typeName, sysName);
    if (_map.count(type) == 0)
    {
        return false;
    }
    else
    {
        std::string name = fullName(sysName, unitName);
        std::string fullTypeName = fullType(typeName, sysName);
        bool ans = _map[type].removeUnit(fullTypeName, name);
        return ans;
    }
}

/**
 * @brief Return true if conversion between types is allowed, false otherwise.
 * 
 * @param[in] fromType - the 'from' unit type.
 * @param[in] toType   - the 'to' unit type.
 *
 * @return - true if conversion between types is allowed, false otherwise.
 */
bool Conversion::validateType(const std::string& fromType,
                              const std::string& toType) const
{
    std::list<std::string> tName = typeNames();
    std::list<std::string>::const_iterator fromIter = std::find(tName.begin(), 
                                                                tName.end(), 
                                                                fromType);
    std::list<std::string>::const_iterator toIter = std::find(tName.begin(), 
                                                              tName.end(), 
                                                              toType);
    bool fromOK = (tName.size() == 0 ? true : fromIter != tName.end());
    bool toOK   = (tName.size() == 0 ? true : toIter != tName.end());

    if (fromType == toType && fromOK && toOK)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// EOF
