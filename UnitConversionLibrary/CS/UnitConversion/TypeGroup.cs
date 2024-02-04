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
// File TypeGroup.cs
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

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// A type group consists of one or more units of the same type.
    /// </summary>
    public class TypeGroup
    {
        /// <value>
        /// An invalid unit to be returned in case of error (unit requested 
        /// not in the type group).
        /// </value>
        protected UBASE _base;

        /// <value>
        /// The name of the type group.
        /// </value>
        private string _name;

        /// <value>
        /// A TypeGroup consists of one or more units (UBASE) and these 
        /// are stored in a dictionary and accessed by the unit name.
        /// </value>
        protected Dictionary<string, UBASE> _unit;

        /// <value>
        /// Flag that is set to true if the type group contains one or
        /// more valid units.
        /// </value>
        private bool _valid;

        /// <value>
        /// The software version.
        /// </value>
        protected string _version;

        /// <summary>
        /// Default constructor.
        /// </summary>
        public TypeGroup() : base()
        {
            _unit    = new Dictionary<string, UBASE>();
            _base    = new UBASE();
            _name    = "Invalid";
            _valid   = false;
            _version = "Invalid";
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>    (input) name of the TypeGroup.</param>
        /// <param><c>version</c> (input) software version.</param>
        public TypeGroup(string name, 
                         string version)
        {
            _unit    = new Dictionary<string, UBASE>();
            _base    = new UBASE();
            _name    = name;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>    (input) name of the TypeGroup.</param>
        /// <param><c>unit</c>    (input) a dictionary of units comprising 
        ///                               the TypeGroup.</param>
        /// <param><c>version</c> (input) software version.</param>
        public TypeGroup(string name, 
                         Dictionary<string, UBASE> unit, 
                         string version)
        {
            _unit    = new Dictionary<string, UBASE>(unit);
            _base    = new UBASE();
            _name    = name;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) the TypeGroup to copy.</param>
        public TypeGroup(TypeGroup other)
        {
            _unit = new Dictionary<string, UBASE>();
            foreach (KeyValuePair<string, UBASE> entry in other._unit)
            {
                _unit.Add(entry.Key,new UBASE(entry.Value));
            }
            _base    = new UBASE(other._base);
            _name    = other._name;
            _valid   = other._valid;
            _version = other._version;
        }

        /// <summary>
        /// Add a unit from the TypeGroup.
        /// </summary>
        /// <param><c>name</c>  (input) name of unit to add.</param>
        /// <param><c>dbase</c> (input) unit to add.</param>
        /// <returns>
        /// True if the unit was successfully added, false otherwise.
        /// </returns>
        public bool addUnit(string name, 
                            UBASE dbase)
        {
            if (_unit.ContainsKey(name))
            {
                return false;
            }
            else
            {
                _unit.Add(name, dbase);
                return true;
            }
        }

        /// <summary>
        /// The check method checks if the software version matches with the 
        /// unit versions.Units are auto generated from an Excel spreadsheet 
        /// using VBA code.
        /// </summary>
        /// <returns>
        /// True if software and unit versions match, false otherwise.
        /// </returns>
        public bool check()
        {
            Version v = Version.Instance();

            foreach (KeyValuePair<string, UBASE> kvp in _unit)
            {
                UBASE ub = kvp.Value;
                if (ub.version() != v.version())
                {
                    return false;
                }
                else
                {
                    continue;
                }
            }
            return true;
        }

        /// <summary>
        /// Get the name of the TypeGroup.
        /// </summary>
        /// <returns>
        /// The TypeGroup name.
        /// </returns>
        public string name()
        {
            return _name;
        }

        /// <summary>
        /// Remove a unit from the TypeGroup.
        /// </summary>
        /// <param><c>name</c> (input) name of unit to remove.</param>
        /// <returns>
        /// True if the unit was successfully removed, false otherwise.
        /// </returns>
        public bool removeUnit(string name)
        {
            return _unit.Remove(name);
        }

        /// <summary>
        /// Get a list of the names of all the systems in the TypeGroup.
        /// </summary>
        /// <returns>
        /// A list of system names.
        /// </returns>
        public List<string> systemNames()
        {
            List<string> lst = new List<string>();
            foreach (KeyValuePair<string, UBASE> kvp in _unit)
            {
                UBASE us = kvp.Value;
                string name = us.system();
                if (lst.Contains(name))
                {
                    continue;
                }
                else
                {
                    lst.Add(name);
                }
            }
            return lst;
        }

        /// <summary>
        /// Get the named unit.
        /// </summary>
        /// <param><c>name</c> (input) name of unit to get.</param>
        /// <returns>
        /// The named unit or an invalid unit if a unit
        /// having the specified name could not be found.
        /// </returns>
        public UBASE unit(string name)
        {
            if (_unit.ContainsKey(name))
            {
                return _unit[name];
            }
            else
            {
                return _base;
            }
        }

        /// <summary>
        /// Get a list of the names of all the units in the TypeGroup.
        /// </summary>
        /// <returns>
        /// A list of unit names.
        /// </returns>
        public List<string> unitNames()
        {
            return new List<string>(this._unit.Keys);
        }

        /// <summary>
        /// Get the validity of the TypeGroup.
        /// </summary>
        /// <returns>
        /// True if the TypeGroup is valid i.e. it contains
        /// one or more valid units.
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
