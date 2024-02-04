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
// File ConstantGroup.hpp
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
#pragma once
#include "UBASE.hpp"
#include <list>
#include <map>

class ConstantGroup 
{
public:
    /**
     * @brief Default constructor
     */
    ConstantGroup(void);

    /**
    * Constructor.
    */
    ConstantGroup(const std::string& name, 
                  const std::string& version);

    /**
    * Constructor.
    */
    ConstantGroup(const std::string& name, 
                  const std::string& version, 
                  const std::map<std::string, UBASE>& constants);

    /**
     * @brief Copy Constructor.
     */
    ConstantGroup(const ConstantGroup& other);

    /**
     * @brief Assignment Operator.
     */
    ConstantGroup& operator=(const ConstantGroup& other);

    /**
     * @brief The check method checks if the software version matches with 
     *        the constant versions of the constants in the ConstantGroup. 
     */
    bool check(void) const;

    /**
     * @brief Get named constant.
     */
    UBASE constant(const std::string& name) const;

    /**
     * @brief Get list of unit names.
     */
    std::list<std::string> constantNames(void) const;

    /**
     * @brief Check if input is ERROR code.
     */
    bool isError(double x);

    /**
     * @brief Get the name of the ConstantGroup.
     */
    std::string name(void) const;

    /**
     * @brief Get list of system names.
     */
    std::list<std::string> systemNames(void) const;

    /**
     * @brief Get list of type types.
     */
    std::list<std::string> typeNames(void) const;

    /**
     * @brief Get the validity of the ConstantGroup.
     */
    bool valid(void) const;

    /**
     * @brief Get the value of a constant.
     */
    double value(const std::string& constName) const;

    /**
    * @brief Get the software version.
    */
    std::string version(void) const;

protected:
    /** 
     * ConstantGroup is the base class for derived units, physical constants,  
     * physical definitions.physical measurements, WGS84 Model,  and SI units. 
     * These 'units'  are used as the basis for other units but are not 
     * directly convertible as such.  They are stored as UBASE objects, as 
     * other units are, and placed in a map and are accessible for reference or
     * other purposes.     
     */
    std::map<std::string, UBASE> _map;

    /**
     * Name for the class of constants stored.
     */
    std::string _name;

    /*
     * Flag that is set to true if ConstantGroup contains one or more valid 
     * constants.
     */
    bool _valid;

    /*
    * Software version.
    */
    std::string _version;
};
// EOF
