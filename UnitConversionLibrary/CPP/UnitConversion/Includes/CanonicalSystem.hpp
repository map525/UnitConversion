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
// File CanonicalSystem.hpp
//
// All unit systems, ancient, historical, and modern contain the four unit types
// for measuring distance, area, weight (mass), and volume. Volume is divided
// into two types: liquid and dry. These five types are termed canonical types
// since (almost) all other types can be expressed as some combination of these
// five types. For example density is mass divided by volume and force is
// mass times length divided by time. The CanonicalSystem class contains systems
// containing these five canonical types. It is a child class of the Conversion
// class which defines the interface to this class.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Conversion.hpp"

class CanonicalSystem : public Conversion
{
public:
    /**
     * @brief Default constructor.
     */    
    CanonicalSystem(void);

    /**
    * @brief Constructor.
    */    
    CanonicalSystem(const std::string name);

    /**
     * @brief Constructor.
     */
    CanonicalSystem(const std::string& name, 
                    const std::map<std::string, BaseSystem>& map);

    /**
    * @brief Copy constructor.
    */
    CanonicalSystem(CanonicalSystem& other);

    /**
     * @brief Assignment Operator.
     */
    CanonicalSystem& operator=(const CanonicalSystem& other);

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
    virtual std::string fullUnitName(const std::string& systemName,
                                     const std::string& unintName) const;

    /**
     * @brief Get the unit name from the full unit name.
     */
    virtual std::string rawUnitName(const std::string& unitName) const;

    /**
     * @brief Get a list of system names in the CanonicalSystem.
     */
    virtual std::list<std::string> systemNames(const std::string& type) const;

    /**
     * @brief Get a list of all system names in the CanonicalSystem.
     */ 
    virtual std::list<std::string> systemNames(void) const;

    /**
     * @brief Get a list of type names in the CanonicalSystem.
     */
    virtual std::list<std::string> typeNames(void) const;

    /**
     * @brief Return true if conversion between type is allowed, 
     *        false otherwise.
     */
    virtual bool validateType(const std::string& fromType, 
                              const std::string& toType) const;
protected:
    /**
     * @brief Construct an actual type name.  
     */
    virtual std::string actualType(const std::string& type, 
                                   const std::string& system) const;
    /*
     * @brief return a list of type or system names in the BaseSystem
     */
    virtual std::list<std::string> baseSystemNames(const BaseSystem& bs) const;

    /**
     * @brief Check in system name in part of unit name.  
     */
    virtual bool checkName(const std::string& sysName, 
                           const std::string& unitName) const;

    /**
     * @brief Construct a full unit name from system and unit name.  
     */
    virtual std::string fullName(const std::string& sysName, 
                                 const std::string& unitName) const;
    /**
     * @brief Construct a local unit name.  
     */
    virtual std::string localName(const std::string& system, 
                                  const std::string& name) const;
};
// EOF
