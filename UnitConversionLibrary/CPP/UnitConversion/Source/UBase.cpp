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
// File UBase.cpp
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
#include "UBase.hpp"
#include <sstream>

/* 
 * Static value used to identify an error. Expect for temperature all units
 * have positive values. The Kelvin scale has absolute zero as its smallest value
 * while Fahrenheit's smallest (theoretical) value is -459.67 which is the most
 * negative value of any unit.     
 */    
double UBASE::ERROR = NAN; //-65536;

/** 
 * @brief Default constructor.
 */
UBASE::UBASE(void) : _name("Invalid"),
                     _offset(), 
                     _system("Invalid"), 
                     _type("Invalid"), 
                     _unit("Invalid"),
                     _valid(false), 
                     _value(ERROR), 
                     _version("Invalid")
{
}

/** 
 * @brief Constructor.
 *
 * @param[in] system  - the unit system e.g.  SI, MKS, etc.
 * @param[in] name    - the unit name e.g. miles, minute, gallon, etc.
 * @param[in] value   - conversion factor to SI units.
 * @param[in] unit    - the unit SI components e.g. kg/m, m/s, etc.
 * @param[in] type    - the unit type e.g. M/L, L/S, etc. 
 * @param[in] version - software version number.
 * @param[in] offset  - unit offset.
 */
UBASE::UBASE(const std::string& system, 
             const std::string& name,  
             double value, 
             const std::string& unit, 
             const std::string& type, 
             const std::string& version, 
             double offset) :   _name(name), 
                                _offset(offset),  
                                _system(system),   
                                _type(type), 
                                _unit(unit), 
                                _valid(true), 
                                _value(value), 
                                _version(version)
{
}

/** 
 * @brief Constructor.
 *
 * @param[in] system  - the unit system e.g.  SI, MKS, etc.
 * @param[in] name    - the unit name e.g. miles, minute, gallon, etc.
 * @param[in] value   - conversion factor to SI units.
 * @param[in] unit    - the unit SI components e.g. kg/m, m/s, etc.
 * @param[in] type    - the unit type e.g. M/L, L/S, etc. 
 * @param[in] version - software version number.
 * @param[in] offset  - unit offset.
 */
UBASE::UBASE(const std::string& system, 
             const std::string& name, 
             uint64_t value, 
             const std::string& unit, 
             const std::string& type, 
             const std::string& version,  
             uint64_t offset)  :   _name(name),
                                   _offset(offset),  
                                   _system(system),  
                                   _type(type), 
                                   _unit(unit), 
                                   _valid(true), 
                                   _value(value), 
                                   _version(version)
{
}

/** 
 * @brief Copy constructor.
 *
 * @param other - the other UBASE to copy.
 */
UBASE::UBASE(const UBASE& other) :  _name(other._name), 
                                    _offset(other._offset),  
                                    _system(other._system), 
                                    _type(other._type), 
                                    _unit(other._unit),
                                    _valid(other._valid),
                                    _value(other._value), 
                                    _version(other._version)
{
}

/** 
 * @brief Assignment Operator.
 *
 * @param other - the other UBASE to copy.
 */
UBASE& UBASE::operator=(const UBASE& other)
{
    _name    = other._name;
    _offset  = other._offset;
    _system  = other._system;
    _type    = other._type;
    _unit    = other._unit;
    _valid   = other._valid;
    _value   = other._value;
    _version = other._version;
    return *this;
}

/**
 * @brief Check if input is ERROR code.
 * 
 * @param[in] x - value to check.
 * 
 * @return true if input is ERROR code, false otherwise.
 */
bool UBASE::isERROR(double x)
{
    return isnan(x);
}

/** 
 * @brief The name method returns the unit name.
 *
 * @return - return the unit name.
 */
std::string UBASE::name(void) const
{
    return _name;
}

/** 
 * @brief The offset method returns the unit offset value.
 *
 * @return - return the unit offset value.
 */
Value UBASE::offset(void) const
{
    return _offset;
}

/** 
 * @brief The system method returns the name of the system to
 *        which the unit belongs.
 *
 * @return - return the unit system name.
 */
std::string UBASE::system(void) const
{
    return _system;
}

/**
 * @brief Convert UBASE to string
 * 
 * @return UBASE as a string
 */
std::string UBASE::toString(void) const
{
    std::string valid = (_valid ? "true" : "false");

    std::ostringstream vss;
    vss.precision(15);
    vss << std::scientific << _value.asDouble();

    std::ostringstream oss;
    oss.precision(15);
    oss << std::scientific << _offset.asDouble();

    std::string s = "type: " + _type + ", system: " + _system 
                             + ", name: " + _name
                             + ", value: " + vss.str()
                             + ", offset: " + oss.str()
                             + ", unit: " + _unit 
                             + ", version: " + _version 
                             + ", valid: " + valid;  
    return s;
}

/** 
 * @brief The type method returns the unit type.
 *
 * @return - return the unit type.
 */
std::string UBASE::type(void) const
{
    return _type;
}

/** 
 * @brief The unit method returns the unit SI components.
 *
 * @return - return the unit SI components.
 */
std::string UBASE::unit(void) const
{
    return _unit;
}

/** 
 * @brief The valid method returns true if the unit is OK to use, 
 *        false otherwise.
 *
 * @return - return true if the unit is valid.
 */
bool UBASE::valid(void) const
{
    return _valid;
}

/** 
 * @brief The value method returns the unit value. 
 *
 * @return - return the unit value.
 */
Value UBASE::value(void) const
{
    return _value;
}

/**
 * @brief The version method return the software version as a string.
 *
 * @return - the software version as a string e.g. "1.0"
 */
std::string UBASE::version(void) const
{
    return _version;
}
// EOF
