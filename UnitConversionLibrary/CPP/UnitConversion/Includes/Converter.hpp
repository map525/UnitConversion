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
// File Converter.hpp
//
// A converter contains methods that perform unit conversions between units
// of the same type. Units may be added or removed from the converter.  In
// general conversion is allowed only between units of the same type. However,
// volume units are divided into liquid and dry and since these have the 
// same dimensions, unit conversion is allowed between them.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Convert.hpp"

class Converter : public Convert
{
public:
    /**
     * @brief Constructor.
     */
    Converter(const std::string&  name, 
              const std::string& type,  
              const std::string& from, 
              const std::string& to, 
              Conversion& conversion);
     
    /**
     * @brief Constructor.
     */
    Converter(const std::string&  name, 
              const std::string& type, 
              const std::string& fromType, 
              const std::string& toType, 
              const std::string& from, 
              const std::string& to, 
              Conversion& conversion);

    /**
     * @brief Add a unit to the converter.
     */
    bool  addUnit(const std::string& sysName, 
                  const std::string& unitName, 
                  const UBASE& bse);

    /**
     * @brief Convert input value from its specified 'from' units in 'from'  
     *        system to the specified 'to' units in 'to' system.
     */
    double convert(double value, 
                   const std::string& from, 
                   const std::string& to, 
                   bool asIs = false) const;

    /**
     * @brief Convert input value from its specified 'from' units in  
     *        'from' system to the specified 'to' units in 'to' system.
     */
    double convert(double value, 
                   const std::string& from, 
                   const std::string& fromSys,  
                   const std::string& to, 
                   const std::string& toSys) const;
    
    /**
     * @brief Set the 'from' type.
     */
    bool fromType(const std::string fromType);

    /**
     * @brief Get the 'from' type.
     */
    std::string fromType(void) const;

    /**
     * @brief Remove a unit from the converter.
     */
    bool  removeUnit(const std::string& sysName, 
                     const std::string& unitName);

    /**
     * @brief Get a TypeGroup in the converter.
     */
    TypeGroup typeGroup(const std::string& system) const;

    /**
     * @brief Get a list of all the system names in the converter.
     */
    std::list<std::string> systemNames(void) const;

    /**
     * @brief Set the 'to' type.
     */
    bool toType(const std::string toType);

    /**
     * @brief Get the 'to' type.
     */
    std::string toType(void) const;

    /**
     * @brief Get the name of the unit type of the converter.
     */
    std::string type(void) const;

    /**
     * @brief Get a unit in the converter.
     */
    UBASE unit(const std::string& system, 
               const std::string& name) const;

    /**
     * @brief Get a list of all the unit names in the specified 
     * unit system contained in the converter.
     */
    std::list<std::string> unitNames(const std::string& system) const;

    /**
     * @brief Get a list of all the unit names in the converter.
     */
    std::list<std::string> unitNames(void) const;
    
private:
    Converter(const Converter& other) = delete;

private:
    /*
     * The unit type of the Converter object.
     */
    std::string _type;

    /*
     * The 'from' unit type of the Converter object.
     */
    std::string _fromType;

    /*
     * The 'to' unit type of the Converter object.
     */
    std::string _toType;
};
// EOF