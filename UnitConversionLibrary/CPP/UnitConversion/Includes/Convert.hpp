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
// File Convert.hpp
//
// Base class for the converter. The converter is the interface used for 
// converting units. A converter exists for each type. The Convert base
// class contains methods for obtaining lists of unit names, system names,
// the default 'to' and 'from' systems, and type names for the Converter.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////
#pragma once
#include "TypeGroup.hpp"
#include <string>

class Conversion;
class UBASE;

class Convert
{
public:
    /**
    * @brief Constructor.
    */
    Convert(const std::string&  name, 
            const std::string& from, 
            const std::string& to, 
            Conversion& conversion);

    /**
     * @brief Copy constructor.
     */
    Convert(const Convert& other);

    /**
     * @brief Assignment Operator.
     */
    Convert& operator=(const Convert& other);

    /**
     * @brief Get a list of all the system names in the converter.
     */
    std::list<std::string> allSystemNames(void) const;

    /**
     * @ brief Get a list of all the unit names in the converter.
     */
    std::list<std::string> allUnitNames(void) const;
   
    /**
     * @brief The check method checks if the software version matches
     *        with the unit versions of its units.
     */
    bool check(void) const;
    
     /**
      * @brief Get the name of the current 'from' system.
      */
     std::string fromSystem(void) const;

     /**
      * @brief Set the name of the current 'from' system.
      */
     void fromSystem(const std::string& system);

     /**
      * @brief Construct the full unit name from the system and unit names.
      */
     std::string fullUnitName(const std::string& systemName,
                              const std::string& unintName) const;

     /**
     * @brief Check if input is ERROR code.
     */
     bool isError(double x);

     /**
      * @brief Get the name of the converter.
      */
    std::string name(void) const;

    /**
     * @brief Get the unit name from the full unit name.
     */
    std::string rawUnitName(const std::string& unitName) const;

    /**
     * @brief Get the name of the current 'to' system.
     */
    std::string toSystem(void) const;

    /**
     * @brief Set the name of the current 'to' system.
     */
    void toSystem(const std::string& system);

    /**
     * @brief Get a list of all the unit type in the converter.
     */
    std::list<std::string> typeNames(void) const;

    /**
     * @brief Get a flag that specifies if the converter is valid or not.
     */
    bool valid(void) const;

protected:
    /*
     * The conversion object containing a unit type along with its associated
     * unit systems and units.     
     */
    Conversion& _conversion;

    /*
     * Name of the Convert object; typically the unit type.
     */
    std::string _name;

    /*
     * The name of the current 'from' system. During conversion, the unit
     * to be converted will be a member of this system.
     */
    std::string _fromSystem;

    /*
     * The name of the current 'to' system. During conversion, the unit
     * to be converted will be converted to a unit in this system.
     */
    std::string _toSystem;

    /*
     * A flag indicating if the Convert object is valid i.e. contains at least
     * one or more valid unit systems having one or more valid units.
     */
    bool _valid;
};
// EOF