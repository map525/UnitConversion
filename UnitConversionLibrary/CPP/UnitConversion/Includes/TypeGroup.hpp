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
// File TypeGroup.hpp
//
// A type group consists of one or more units of the same type (having the same 
// dimensions). Units are contained in the UBASE class which contains the unit 
// value, name, system, and type information. A type group is a collection
// of related units with the same type and belonging to a system or some other 
// collection of units.
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "UBase.hpp"
#include <list>
#include <map>

class TypeGroup 
{
public:
    /**
     * @brief Default Constructor.
     */
    TypeGroup(void);

    /**
     * @brief Constructor.
     */
    TypeGroup(const std::string& name, 
              const std::string& version);

    /**
      * @brief Constructor.
    */
    TypeGroup(const std::string& name, 
              const std::map<std::string, UBASE>& unit,
              const std::string& version);

    /**
     * @brief Copy constructor.
     */
    TypeGroup(const TypeGroup& other);

    /**
    * @brief Assignment Operator.
    */
    TypeGroup& operator=(const TypeGroup& other);

    /**
     * @brief Add a unit to the TypeGroup.
     */
    bool addUnit(const std::string& name, 
                 const UBASE& dbase);

    /**
     * @brief The check method checks if the software version matches with 
     *        the unit versions. Units are auto generated from an Excel 
     *        spreadsheet using VBA code.
     */
    bool check(void) const;

    /**
     * @brief Get the name of the TypeGroup.
     */
    std::string name(void) const;

    /**
     * @brief Remove a unit from the TypeGroup.
     */
    bool removeUnit(const std::string& name);

    /**
     * @brief Get a list of the names of all the systems 
     *        in the TypeGroup.
     */
    std::list<std::string> systemNames(void) const;

    /**
     * @brief Get the named unit.
     */
    const UBASE& unit(const std::string& name) const;

    /**
     * @brief Get a list of the names of all the units 
     *        in the TypeGroup.
     */
    std::list<std::string> unitNames(void) const;

    /**
     * @brief Get the validity of the TypeGroup.
     */
    bool valid(void) const;

    /**
    * @brief Get the software version.
    */
    std::string version(void) const;

protected:
    /* 
     * An invalid unit to be returned in case of error (unit 
     * requested not in the type group).     
     */    
    UBASE _base;

private:
    /* 
     * The name of the type group.     
     */  
    std::string _name;

    /* 
     * A TypeGroup consists of one or more units (UBASE) and 
     * these are stored in a map and accessed by the unit name.     
     */  
    std::map<std::string, UBASE> _units;

    /* 
     * Flag that is set to true if the type group contains one or
     * more valid units.     
     */    
    bool _valid;

    /**
    * The software version.
    */
    std::string _version;
};
// EOF