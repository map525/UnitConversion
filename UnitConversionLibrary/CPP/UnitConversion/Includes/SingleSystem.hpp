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
// File SingleSystem.hpp
//
// The SingleSystem class contains unit systems all having units of the same
// type. Examples include density, force, power, and angle. A SingleSystem
// contains only a single type group but can consist of units from many
// different systems. Typically, a SingleSystem is either modern or historical
// but not ancient. It is a child class of Conversion which defines its 
// interface.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Conversion.hpp"

class SingleSystem : public Conversion
{
public:
    /**
     * @brief Default Constructor.
     */
    SingleSystem(void);

    /**
    * @brief Constructor.
    */    
    SingleSystem(const std::string name);

    /**
    * @brief Constructor.
    */
    SingleSystem(const std::string& name, 
                 const std::map<std::string, BaseSystem>& map);

    /**
     * @brief Copy Constructor.
     */
    SingleSystem(SingleSystem& other);

    /**
    * @brief Assignment Operator.
    */
    SingleSystem& operator=(const SingleSystem& other);

    /**
     * @brief Convert from one unit to another. 
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
     * @brief Construct the full unit name from the system and unit names.
     */
    std::string fullUnitName(const std::string& systemName,
                             const std::string& unintName) const;

    /**
     * @brief Get a list of system names in the SingleSystem.
     */
    virtual std::list<std::string> systemNames(const std::string& type) const;

    /**
     * @brief Get a list of all system names in the SingleSystem.
     */
    virtual std::list<std::string> systemNames(void) const;

    /**
     * @brief Get a list of type names in the SingleSystem.
     */
    virtual std::list<std::string> typeNames(void) const;

protected:
    /*
     * @brief return a list of type or system names in the BaseSystem
     */
    virtual std::list<std::string> baseSystemNames(const BaseSystem& bs) const;

    /**
     * @brief Construct a full type name. Type name is dependent on
     *        on the system: either CanonicalSystem or SingleSystem.
     */
    std::string fullType(const std::string& type, 
                         const std::string& system) const;
    /**
     * @brief Construct a local type name.  
     */
    virtual std::string localType(const std::string& type) const;

   /**
    * @brief filter TypeGroup
    */
    virtual void typeGroupFilter(const std::string& name, TypeGroup& tg) const;
};
// EOF
