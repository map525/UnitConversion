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
// File Constants.cs
//
// Physical, measured, and other constants. Non-canonical units are generated
// using various physical and measured constants. The SI system is defined in
// terms of physical constants such as the speed of light and these constants
// (and others) are used to determine the value of the various units. Constants 
// can be accessed but cannot be 'converted'.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////
namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// Physical, measured, and other constants.
    /// </summary>
    public class Constants
    {
        /// <value>
        /// All the constants are stores in a dictionary and accessed though 
        /// this class.
        /// </value>
        private Dictionary<string, ConstantGroup> _map;

        /// <value>
        /// The one and only Constants object; this class is a singleton.
        /// </value>
        private static Constants singleton_ = new Constants();

        /// <summary>
        /// The Instance static method creates and instance of the Constants 
        /// class. The Constants class is a singleton and is used to return
        /// a Constant.
        /// </summary>
        /// <returns>
        /// The single instance of the class.
        /// </returns>
        public static Constants Instance()
        {
            return singleton_;
        }

        /// <summary>
        /// The check method checks if the software version matches
        ///  with the unit versions of its units.
        /// </summary>
        /// <returns>
        /// True if software and unit versions match, false otherwise.
        /// </returns>
        public bool check() 
        {
            foreach (KeyValuePair<string, ConstantGroup> kvp in _map)
            {
                ConstantGroup cg = kvp.Value;
                if (cg.check())
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
        /// Get a constant.
        /// </summary>
        /// <param><c>constName</c> (input) the name of the constant 
        ///                                 to get.</param>
        /// <returns>
        /// The specified constant or an invalid constant if the
        /// specified constant is not found.
        /// </returns>
        public ConstantGroup constant(string constName)
        {
            if (_map.ContainsKey(constName))
            {
                return _map[constName];
                
            }
            else
            {
                return _map["Invalid"];
            }
        }

        /// <summary>
        /// Get a list of all the constant names.
        /// </summary>
        /// <returns>
        /// A list of all the constant names.
        /// </returns>
        public List<string> names()
        {
           List<string> keys = new List<string>();
            foreach (string key in _map.Keys)
            {
               keys.Add(key);
            }
            return keys;
        }

        /// <summary>
        /// Constructor. The constructor is private; the class is a singleton. 
        /// Yt creates Constant objects which contain groups of constants.
        /// </summary>
        private Constants() 
        {
            _map = new Dictionary<string, ConstantGroup>();
            _map["DerivedUnits"]         = DU_UNITS.Instance();
            _map["PhysicalConstants"]    = PC_UNITS.Instance();
            _map["PhysialDefinitions"]   = PD_UNITS.Instance();
            _map["PhysicalMeasurements"] = PM_UNITS.Instance();
            _map["SI"]                   = SI_UNITS.Instance();
            _map["WGS84Model"]           = WGS84_MODEL.Instance();
            _map["Invalid"]              = new ConstantGroup();
        }
    }
}
//EOF