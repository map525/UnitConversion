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
// File BaseSystem.cs
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

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// A Collection of one or more type groups.
    /// </summary>
    public class BaseSystem
    {
        /// <value>
        /// The name of the BaseSystem.
        /// </value>
        protected string _name;

        /// <value>
        /// A BaseSystem consists of one or more TypeGroups. A TypeGroup    
        /// contains one or more units(UBASE). The TypeGroups are stored 
        /// in a dictionary and  accessed by the unit system name.
        /// </value>
        protected Dictionary<string, TypeGroup> _units;

        /// <value>
        /// Flag that is set to true if the BaseSystem contains one or more
        /// valid TypeGroups.
        /// </value>
        protected bool _valid;

        /// <value>
        /// The software version.
        /// </value>
        protected string _version;

        /// <summary>
        /// Default Constructor.
        /// </summary>
        public BaseSystem() 
        {
            _units   = new Dictionary<string, TypeGroup>();
            _name    = "Invalid";
            _valid   = false;
            _version = "Invalid";
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>    (input) name of BaseSystem.</param>
        /// <param><c>unit</c>    (input) units in the BaseSystem.</param>
        /// <param><c>version</c> (input) the software version.</param>
        public BaseSystem(string name, 
                          Dictionary<string, UBASE> unit, 
                          string version)
        {
            _units = new Dictionary<string, TypeGroup>();
            _units.Add("unit", new TypeGroup(name, unit,version));
            _name    = name;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>    (input) name of BaseSystem.</param>
        /// <param><c>length</c>  (input) length units in BaseSystem.</param>
        /// <param><c>area </c>   (input) area units in BaseSystem.</param>
        /// <param><c>mass</c>    (input) mass units in BaseSystem.</param>
        /// <param><c>liquid</c>  (input) liquid volume units in BaseSystem.</param>
        /// <param><c>dry</c>     (input) dry volume units in BaseSystem.</param>
        /// <param><c>version</c> (input) the software version.</param>
        public BaseSystem(string name, 
                          Dictionary<string, UBASE> length, 
                          Dictionary<string, UBASE> area, 
                          Dictionary<string, UBASE> mass, 
                          Dictionary<string, UBASE> liquid, 
                          Dictionary<string, UBASE> dry, 
                          string version)
        {
            _units = new Dictionary<string, TypeGroup>();
            _units.Add("Length", new TypeGroup("Length", length, version));
            _units.Add("Area",   new TypeGroup("Area",   area,   version));
            _units.Add("Mass",   new TypeGroup("Mass",   mass,   version));
            _units.Add("Liquid", new TypeGroup("Liquid", liquid, version));
            _units.Add("Dry",    new TypeGroup("Dry",    dry,    version));
            _units.Add("Volume", new TypeGroup("Volume", version));
            _name    = name;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c>   (input) the other BaseSystem to copy.</param>
        public BaseSystem(BaseSystem other) 
        {
            _units = new Dictionary<string, TypeGroup>();
            foreach (KeyValuePair<string, TypeGroup> entry in other._units)
            {
                _units.Add(entry.Key, new TypeGroup(entry.Value));
            }
            _name    = other._name;
            _valid   = other._valid;
            _version = other._version;
        }

        /// <summary>
        /// Add a unit to the BaseSystem.
        /// </summary>
        /// <param><c>type</c>   (input) the unit type.</param>
        /// <param><c>name</c>   (input) the unit name.</param>
        /// <param><c>dbase</c>  (input) the unit to add.</param>
        /// <returns>
        /// True if successful, false otherwise.
        /// </returns>
        public bool addUnit(string type, 
                            string name, 
                            UBASE dbase)
        {
            if (_units.ContainsKey(type))
            {
                return _units[type].addUnit(name, dbase);
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// The check method checks if the software version matches with 
        /// the unit versions of the units in each TypeGroup. Units 
        /// are auto generated from an Excel spreadsheet using VBA code.
        /// </summary>
        /// <returns>
        /// True if software and unit versions match, false otherwise.
        /// </returns>
        public bool check()
        {
            Version v = Version.Instance();

            if (_version == v.version())
            {
                foreach (KeyValuePair<string, TypeGroup> kvp in _units)
                {
                    TypeGroup us = kvp.Value;
                    if (us.check())
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                return true;
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// Get the name of the BaseSystem.
        /// </summary>
        /// <returns>
        /// The name of the BaseSystem.
        /// </returns>
        public string name()
        {
            return _name;
        }

        /// <summary>
        /// Remove a unit from the BaseSystem.
        /// </summary>
        /// <param><c>type</c> (input) the unit type.</param>
        /// <param><c>name</c> (input) the unit name.</param>
        /// <returns>
        /// True if successful, false otherwise.
        /// </returns>
        public bool removeUnit(string type, 
                               string name)
        {
            if (_units.ContainsKey(type))
            {
                return _units[type].removeUnit(name);
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// Get a list of system names in the BaseSystem.
        /// </summary>
        /// <param><c>type</c> (input) the unit type.</param>
        /// <returns>
        /// A list of system names in the BaseSystem.
        /// </returns>
        public List<string> systemNames(string type)
        {
            if (_units.ContainsKey(type))
            {
                return _units[type].systemNames();
            }
            else
            {
                return new List<string>();
            }
        }

        /// <summary>
        /// Get a TypeGroup from the BaseSystem.
        /// </summary>
        /// <param><c>type</c> (input) the unit type.</param>
        /// <returns>
        /// The requested TypeGroup (if found) or an
        /// invalid TypeGroup if not found.
        /// </returns>
        public TypeGroup typeGroup(string type)
        {
            if (_units.ContainsKey(type))
            {
                return _units[type];
            }
            else
            {
                return new TypeGroup();
            }
        }
        
        
        /// <summary>
        /// The getTypeNames method returns a list of types of units
        /// in the BaseSystem.Unit types examples are length, area, force,
        /// angle, etc.
        /// </summary>>
        /// <returns>
        /// A list of unit types in the BaseSystem.
        /// </returns>
        public List<string> typeNames()
        {
            List<string> keys = new List<string>();
            foreach (KeyValuePair<string, TypeGroup> kvp in _units)
            {
                keys.Add(kvp.Key);
            }
            return keys;
        }

        /// <summary>
        /// Get a  unit from the BaseSystem.
        /// </summary>
        /// <param><c>type</c> (input) the unit type.</param>
        /// <param><c>name</c> (input) the unit name.</param>
        /// <returns>
        /// The requested unit (if found) or an
        /// invalid unit if not found.
        /// </returns>
        public UBASE unit(string type, 
                         string name)
        {
            if (_units.ContainsKey(type))
            {
                return _units[type].unit(name);
            }
            else
            {
                return new UBASE();
            }
        }

        /// <summary>
        /// Get a list of unit names in the BaseSystem.
        /// </summary>
        /// <param><c>type</c> (input) the unit type.</param>
        /// <returns>
        /// A list of unit names in the BaseSystem.
        /// </returns>
        public List<string> unitNames(string type)
        {
            if (_units.ContainsKey(type))
            {
                return _units[type].unitNames();
            }
            else
            {
                return new List<string>();
            }
        }

        /// <summary>
        /// Get the validity of the BaseSystem.
        /// </summary>
        /// <returns>
        /// True if the BaseSystem contains one or more
        /// valid TypeGroups.
        /// </returns>
        public bool valid()
        {
            return _valid;
        }

        /// <summary>
        /// Get the software version.
        /// </summary>
        /// <returns>
        /// The software version.
        /// </returns>
        public string version()
        {
            return _version;
        }
    }
}
// EOF
