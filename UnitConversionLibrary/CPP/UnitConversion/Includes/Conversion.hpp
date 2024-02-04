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
// File Conversion.hpp
//
// Base class for the CanonicalSystem and SingleSystem classes. This class 
// provides an interface for unit conversions between units of the same 
// type but in different systems e.g. feet to  meters, etc.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "ConversionBase.hpp"

class Conversion : public ConversionBase
{
public:
    /**
     * @brief Default constructor.
     */
    Conversion(void);

    /**
     * @brief Constructor.
     */
    Conversion(const std::string&  name);

    /**
    * @brief Constructor.
    */
    Conversion(const std::string&  name, 
               const std::map<std::string, BaseSystem>& map);
    /**
     * @brief Copy constructor.
     */
    Conversion(const Conversion& other);

    /**
     * @brief Assignment Operator.
     */
    Conversion& operator=(const Conversion& other);

    /**
     * @ brief Add a unit for conversion.
     */
    bool  addUnit(const std::string& typeName, 
                  const std::string& sysName, 
                  const std::string& unitName, 
                  const UBASE& bse);
    
    /**
     * @brief Convert input value from its specified 'from' units  
     *        in 'from' system to the specified 'to' units in 'to' 
     *        system. 
     */
    virtual double convertUnit(double value, 
                               const std::string& fromType, 
                               const std::string& toType, 
                               const std::string& from, 
                               const std::string& fromSys,  
                               const std::string& to, 
                               const std::string& toSys, 
                               bool asIs) const;
    /**
     * @brief Remove a unit from the conversion.
     */
    bool  removeUnit(const std::string& typeName,
                     const std::string& sysName, 
                     const std::string& unitName);
    /**
     * @brief Return true if conversion between the 'from' type 
     *        and the 'to' type is allowed, false otherwise.
     */
    virtual bool validateType(const std::string& fromType, 
                              const std::string& toType) const;
};
// EOF