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
//
// File BaseSystem.hpp
//
// A Collection of one or more type groups. There are two types of BaseSystems:
// one consisting of a single type group and one containing the five canonical
// type groups (length, area, mass, liquid volume, and dry volume). BaseSystems
// with a single type group have units all having the same type (dimension).
// BaseSystems with the five canonical type groups have units tied to a
// place or origin (usually a country).
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "TypeGroup.hpp"

class BaseSystem 
{
public:
    /**
     * @brief Default Constructor.
     */
    BaseSystem(void);

    /**
     * @brief Constructor.
     */
    BaseSystem(const std::string& name, 
               const std::map<std::string, UBASE>& length, 
               const std::map<std::string, UBASE>& area, 
               const std::map<std::string, UBASE>& mass, 
               const std::map<std::string, UBASE>& liquid, 
               const std::map<std::string, UBASE>& dry, 
               const std::string& version);

    /**
     * @brief Constructor.
     */
    BaseSystem(const std::string& name, 
               const std::map<std::string, UBASE>& unit, 
               const std::string& version);
    /**
     * @brief Copy Constructor.
     */
    BaseSystem(const BaseSystem& other);

    /**
     * @brief Assignment Operator.
     */
    BaseSystem& operator=(const BaseSystem&);

    /**
     * @brief Add a unit to the BaseSystem.
     */
    bool addUnit(const std::string& type, 
                 const std::string& name, 
                 const UBASE& dbase);

    /**
     * @brief The check method checks if the software version matches
     *        with the unit versions of the units in each TypeGroup.
     */
    bool check(void) const;

    /**
     * @brief Get the name of the BaseSystem.
     */
    std::string name(void) const;

    /**
     * @brief Remove a unit from the BaseSystem.
     */
    bool removeUnit(const std::string& type, 
                    const std::string& name);

    /**
     * @brief Get a list of system names in the BaseSystem.
     */
    std::list<std::string> systemNames(const std::string& type) const;

    /**
     * @brief Get a TypeGroup from the BaseSystem.
     */
    const TypeGroup& typeGroup(const std::string& type) const;

    /**
     * @brief The getTypeNames method returns a list of types of
     *        units in the BaseSystem. 
     */
    std::list<std::string> typeNames(void) const;

    /**
     * @brief Get a  unit from the BaseSystem.
     */
    const UBASE& unit(const std::string& type, 
                      const std::string& name) const;

    /**
     * @brief Get a list of unit names in the BaseSystem.
     */
    std::list<std::string> unitNames(const std::string& type) const;

    /**
     * @brief Get the validity of the BaseSystem.
     */
    bool valid(void) const;

    /**
     * @brief Get the software version.
     */
    std::string version(void) const;

private:
    /**
     * Invalid UBASE (unit) for error handling.
     */
    UBASE _dbase;

    /**
    * Invalid TypeGroup for error handling.
    */
    TypeGroup _tgroup;

    /**
     * The name of the BaseSystem.
     */
    std::string _name;

    /** 
     * A BaseSystem consists of one or more TypeGroups. A TypeGroup   
     * contains one or more units (UBASE). The TypeGroups are stored 
     * in a map and accessed by name.     
     */    
    std::map<std::string, TypeGroup> _units;

    /**
     * Flag that is set to true if the BaseSystem contains one or more
     * valid TypeGroup.
     */
    bool _valid;

    /**
     * The software version.
     */
    std::string _version;
};
// EOF