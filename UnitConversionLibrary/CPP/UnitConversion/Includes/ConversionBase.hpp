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
// File ConversionBase.hpp
//
// Base class for conversions. This class provides methods for accessing
// the units, systems, and type groups that constitute a system of units 
// for a particular unit type. 
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "BaseSystem.hpp"

class ConversionBase
{
public:
    /**
     * @brief Default constructor.
     */
    ConversionBase(void);

    /**
     * @brief Constructor.
     */
    ConversionBase(const std::string&  name);

    /**
    * @brief Constructor.
    */
    ConversionBase(const std::string&  name, 
                   const std::map<std::string, BaseSystem>& map);
    /**
     * @brief Copy constructor.
     */
    ConversionBase(const ConversionBase& other);

    /**
     * @brief Assignment Operator.
     */
    ConversionBase& operator=(const ConversionBase& other);

    /**
     * @brief The check method checks if the software version matches
     *        with the unit versions of its units.
     */
    bool check(void) const;

    /**
     * @brief Construct the full unit name from the system and unit names.
     */
    virtual std::string fullUnitName(const std::string& systemName,
                                     const std::string& unintName) const;
    /*
     * @brief Get the name of the conversion.
     */
    std::string name(void) const;

    /**
     * @brief Get the unit name from the full unit name.
     */
    virtual std::string rawUnitName(const std::string& unitName) const;
        
    /**
     * @brief Get a BaseSystem in the conversion.
     */
    BaseSystem system(const std::string& type) const;

    /**
     * @brief Get a list of system names in the conversion. 
     */
    virtual std::list<std::string> systemNames(const std::string& type) const;

    /**
     * @brief Get a list of all system names in the conversion.
     */
    virtual std::list<std::string> systemNames(void) const;

    /**
     * @brief Get a type group in the conversion. 
     */
    virtual TypeGroup typeGroup(const std::string& type, 
                                const std::string& tgroup) const;

    /**
     * @brief Get a list of type names in the conversion. 
     */
    virtual std::list<std::string> typeNames(void) const;

    /**
     * @brief Get a unit in the conversion. 
     */
    virtual UBASE unit(const std::string& type, 
                       const std::string& system, 
                       const std::string& name) const;

    /**
     * @brief Get a list of unit names in the conversion. 
     */
    virtual std::list<std::string> unitNames(const std::string& type, 
                                             const std::string& system) const;

    /**
     * @brief Get a list of all unit names in the conversion. 
     */
    virtual std::list<std::string> unitNames(void) const;

    /**
    * @brief Get the validity of the conversion.
    */
    bool valid(void) const;

protected:
    /**
     * @brief Construct a actual type name.  
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
    /*
     * @brief return a list of type or system names.
     */
    virtual std::list<std::string> coreNames(void) const;

    /**
     * @brief Construct a full unit name from system and unit name.  
     */
    virtual std::string fullName(const std::string& sysName, 
                                 const std::string& unitName) const;
    /**
    * @brief Construct a full type name.  
    */
    virtual std::string fullType(const std::string& type, 
                                 const std::string& system) const;

    /**
     * @brief Construct a local unit name.  
     */
    virtual std::string localName(const std::string& system, 
                                  const std::string& name) const;
    /**
     * @brief Construct a local type name.  
     */
    virtual std::string localType(const std::string& type) const;

    /*
     * @breif Construct list of map names.
     */
    std::list<std::string> mapNames(void) const;
    
    /*
     * @brief return a list of type or system names .
     */
    virtual void singleCoreNames(const std::string& type, 
                                 std::list<std::string>& list) const;
    /**
     * @brief filter TypeGroup
     */
    virtual void typeGroupFilter(const std::string& name, TypeGroup& tg) const;

protected:
    /*
     * A Conversion consists of one or more BaseSystems with 
     * each BaseSystem containing one or more type groups 
     * each containing one or more units.
     */
    std::map<std::string, BaseSystem> _map;

private:
    /*
     * Name of the Conversion object; typically the unit type.
     */
    std::string _name;

    /*
     * A flag indicating if the Conversion is valid or not
     * i.e. it contains one or more valid BaseSystems.
     */
    bool _valid;
};
// EOF