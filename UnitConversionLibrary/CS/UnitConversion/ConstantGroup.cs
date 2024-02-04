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
// File ConstantGroup.cs
//
// ConstantGroup is the base class for derived units, physical constants, 
// physical  definition, physical measurements, WGS84 Model,  and some 
// SI units. These  'units'  are used as the basis for other units but are not 
// directly convertible as such. They are stored as UBASE objects, as other units 
// are, and placed in a map and are accessible for reference or other purposes.     
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// Base class for derived units and constants. Base units are used as the 
    /// basis for other units but are not directly convertible as such.
    /// </summary>
    public class ConstantGroup
    {
        /// <value>
        /// ConstantGroup is the base class for derived units, physical  
        /// constants, physical definitions.physical measurements, WGS84 Model,  
        /// and SI units. These 'units'  are used as the basis for other units 
        /// but are not directly convertible as such.  They are stored as UBASE 
        /// objects, as other units are, and placed in a map andare accessible
        /// for reference or other purposes.     
        /// </value>
        protected Dictionary<string, UBASE> _map;

        /// <value>
        /// Name for the class of constants stored.
        /// </value>
        protected string _name;

        /// <value>
        /// Flag that is set to true if ConstantGroup contains one or more 
        /// valid constants.
        /// </value>
        protected bool _valid;

        /// <value>
        /// Software version.
        /// </value>
        protected string _version;

        /// <summary>
        /// Default constructor.
        /// </summary>
        public ConstantGroup()
        {
            _name    = "Invalid";
            _valid   = false;
            _map     = new Dictionary<string, UBASE>();
            _version = "Invalid";
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>      (input) name of the constant group.</param>
        /// <param><c>version</c>   (input) software version.</param>
        /// <param><c>constants</c> (input) constants in the group.</param>
        public ConstantGroup(string name, 
                             string version, 
                             Dictionary<string, UBASE> constants)
        {
            _map     = new Dictionary<string, UBASE>(constants);
            _name    = name;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>    (input) name of the constant group.</param>
        /// <param><c>version</c> (input) software version.</param>
        public ConstantGroup(string name, 
                             string version)
        {
            _map     = new Dictionary<string, UBASE>();
            _name    = name;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) name of other ConstantGroup 
        ///                             to be copied.</param>
        public ConstantGroup(ConstantGroup other)
        {
            _name    = other._name;
            _valid   = other._valid;
            _version = other._version;
            _map     = new Dictionary<string, UBASE>();
            foreach (KeyValuePair<string, UBASE> entry in other._map)
            {
                _map.Add(entry.Key, new UBASE(entry.Value));
            }
        }

        /// <summary>
        /// The check method checks if the software version matches with the 
        /// unit versions of the constants in the ConstantGroup. Constants are 
        /// auto  generated from  an Excel spreadsheet using VBA code.
        /// </summary>
        /// <returns>
        /// True if software and constant versions match, false otherwise.
        /// </returns>
        public bool check()
        {
            Version v = Version.Instance();
            foreach (KeyValuePair<string, UBASE> kvp in _map)
            {
                UBASE db = kvp.Value;
                if (db.version() == v.version())
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

        /// <summary>
        /// Get named constant.
        /// </summary>
        /// <param><c>name</c> (input) name of constant to get.</param>
        /// <returns>
        /// The specified constant or invalid constant if not found.
        /// </returns>
        public UBASE constant(string name)
        {
            if (_map.ContainsKey(name))
            {
                return _map[name];

            }
            else
            {
                return new UBASE();
            }
        }

        /// <summary>
        /// Get list of constant names.
        /// </summary>
        /// <returns>
        /// A list of constant names.
        /// </returns>
        public List<string> constantNames()
        {
            return new List<string>(this._map.Keys);
        }

        /// <summary>
        /// Check if double is ERROR code.
        /// </summary>
        /// <param><c>x</c>    (input) value to check.</param>
        /// <returns>
        /// True if input is error code, false otherwise.
        /// </returns>
        public bool isError(double x)
        {
            return UBASE.isERROR(x);
        }

        /// <summary>
        /// Get the name of the ConstantGroup.
        /// </summary>
        /// <returns>
        /// The name of the ConstantGroup.
        /// </returns>
        public string name()
        {
            return _name;
        }

        /// <summary>
        /// Get list of system names.
        /// </summary>
        /// <returns>
        /// A list of system names.
        /// </returns>
        public List<string> systemNames()
        {
            List<string> sys = new List<string>();
            foreach (KeyValuePair<string, UBASE> kvp in _map)
            {
                UBASE db = kvp.Value;
                if(sys.Contains(db.system()))
                {
                    continue;
                }
                else
                {
                    sys.Add(db.system());
                }
            }
            return sys;
        }

        /// <summary>
        /// Get list of constant types.
        /// </summary>
        /// <returns>
        /// A list of constant types.
        /// </returns>
        public List<string> typeNames()
        {
            List<string> lst = new List<string>();
            lst.Add(_name);
            return lst;
        }

        /// <summary>
        /// Get the validity of the ConstantGroup.
        /// </summary>
        /// <returns>
        /// True if ConstantGroup is valid, false otherwise.
        /// </returns>
        public bool valid()
        {
            return _valid;
        }

        /// <summary>
        /// Get the value of a constant.
        /// </summary>
        /// <param><c>constName</c> (input) name of constant.</param>
        /// <returns>
        /// The value of the named constant.
        /// </returns>
        public double value(string constName)
        {
            return constant(constName).value().asDouble();
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
