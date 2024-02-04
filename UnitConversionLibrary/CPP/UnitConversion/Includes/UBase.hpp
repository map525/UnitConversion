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
// File UBase.hpp
//
// Base class defining a single unit of measurement.
// This class contains members used to define a single unit of
// measurement. These are:
//
// 1. system  - the unit system e.g. SI, MKS, etc.
// 2. type    - the unit type (dimensions) e.g. M/L, L/S, etc. 
// 3. name    - the unit name e.g. miles, minute, gallon, etc.
// 4. unit    - the unit SI components e.g. kg/m, m/s, etc.
// 5. valid   - true if a valid unit.
// 6. value   - conversion factor to SI units.
// 7. offset  - unit offset.
// 8. version - software version number.
//
// The class methods include two constructors and accessors for
// the class members. Once create a UBASE object cannot be altered.
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Value.hpp"
#include <string>

class UBASE 
{
public:
    /** 
     * @brief Default constructor.
     */
    UBASE(void);

    /** 
     * @brief Constructor.
     */
    UBASE(const std::string& system, 
          const std::string& name, 
          double value,    
          const std::string& unit,  
          const std::string& type, 
          const std::string& version, 
          double offset = 0);

    /** 
     * @brief Constructor.
     */
    UBASE(const std::string& system, 
          const std::string& name, 
          uint64_t value,  
          const std::string& unit,  
          const std::string& type, 
          const std::string& version, 
          uint64_t offset = 0);

    /** 
     * @brief Copy constructor.
     */
    UBASE(const UBASE& other);

    /** 
     * @brief Assignment Operator.
     */
    UBASE&  operator=(const UBASE& other);

    /**
     * @brief Check if input is ERROR code.
     */
    static bool isERROR(double x);

    /** 
     * @brief The name method returns the unit name.
     */
    std::string name(void) const;

    /** 
     * @brief The offset method returns the unit offset value.
     */
    Value offset(void) const;

    /** 
     * @brief The system method returns the name of the system to
     *        which the unit belongs.
     */
    std::string system(void) const;

    /**
     * @brief Convert UBASE to string
     */
    std::string toString(void) const;

    /** 
     * @brief The type method returns the unit type.
     */
    std::string type(void) const;

    /** 
     * @brief The unit method returns the unit SI components.
     */
    std::string unit(void) const;

    /** 
     * @brief The valid method returns true if the unit is OK to use, 
     *        false otherwise.
     */
    bool valid(void) const;

    /** 
     * @brief The value method returns the unit value. 
     */
    Value value(void) const;

    /**
     * @brief The version method return the software version as a string.
     */
    std::string version(void) const;

public:
    /* 
     * Static value used to identify an error. Expect for temperature units, all
     * units have positive values. The Kelvin scale has absolute zero as its 
     * smallest value while Fahrenheit's smallest (theoretical) value is -459.67 
     * which is the most negative value of any unit value.     
     */    
    static double ERROR;

private:
    /* 
     * The unit name e.g. feet, meters, etc.
     */
    std::string _name;

    /* 
     * The offset is used for converting temperatures. For example 
     * Celsius = 1.0*Kelvin - 273.15 so that 1.0 is the value and 
     * -273.15 is the offset.
     */
    Value _offset;

    /* 
     * The system of units the unit belongs to e.g. SI, UK, US, etc.
     */
    std::string _system;

    /* 
     * The type of unit e.g. the unit expressed in terms of fundamental SI 
     * dimensions. For example force has a type of M.L/T2 that is mass times 
     * length divided by time squared.
     */
    std::string _type;

    /* 
     * The unit expressed in terms of fundamental SI units.
     * For example force has a type of kg.m/s2 that is kilograms times meters 
     * divided by seconds squared.
    */
    std::string _unit;

    /* 
     * A flag that identifies the unit as 'valid' i.e. OK to use.
     */
    bool _valid;

    /* 
     * The "value' of the unit. The value converts the unit to SI units. 
     */
    Value _value;

    /* 
     * The software version.
     */
    std::string _version;
};
// EOF