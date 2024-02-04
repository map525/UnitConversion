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
// File Convert.cs
//
// Base class for the converter. The converter is the interface used for 
// converting units. A converter exists for each type. The Convert base
// class contains methods for obtaining lists of unit names, system names,
// the default 'to' and 'from' systems, and type names for the Converter.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System;
    using System.Collections.Generic;
    using System.Reflection;

    /// <summary>
    /// Base class for the converter.
    /// </summary>
    public class Convert
    {
        /// <value>
        /// The conversion object containing a unit type along with its 
        /// associated unit systems and units.
        /// </value>
        protected Conversion _conversion;

        /// <value>
        /// Name of the Convert object; typically the unit type.
        /// </value>
        protected string _name;

        /// <value>
        /// The name of the current 'from' system. During conversion, the unit 
        /// to be converted will be a member of this unit system.
        /// </value>
        protected string _fromSystem;

        /// <value>
        /// The name of the current 'to' system. During conversion, the unit 
        /// to be converted will be converted to a unit in this unit system.
        /// </value>
        protected string _toSystem;

        /// <value>
        /// A flag indicating if the Convert object is valid i.e. contains at 
        /// least one or more valid unit systems having one or more valid units.
        /// </value>
        protected bool _valid;

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>       (input) name of the Converter.</param>
        /// <param><c>from</c>       (input) the name of the 'from' system.</param>
        /// <param><c>to</c>         (input) the name of the 'to' system.</param>
        /// <param><c>conversion</c> (input) a conversion object containing the 
        ///                                  systems and associated units for 
        ///                                  the unit type.</param>
        public Convert(string  name, 
                       string from, 
                       string to, 
                       Conversion conversion)
        {
            _name       = name;
            _toSystem   = to;
            _fromSystem = from;
            _valid      = true;
            _conversion = conversion;
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c>      (input) convert to copy.</param>
        public Convert(Convert other)
        {
            _name       = other._name;
            _toSystem   = other._toSystem;
            _fromSystem = other._fromSystem;
            _valid      = other._valid;

            // Since Conversion is a base class, invoke correct child 
            // constructor.
            Type type = other._conversion.GetType();
            ConstructorInfo ctor = type.GetConstructor(new[] { type });
            _conversion = (Conversion) ctor.Invoke(new object[] {other._conversion});
        }

        /// <summary>
        /// Get a list of all the system names in the converter.
        /// </summary>
        /// <returns>
        /// A list of system names in the converter.
        /// </returns>
        public List<string> allSystemNames()
        {
            return _conversion.systemNames();
        }

        /// <summary>
        /// Get a list of all the unit names in the converter.
        /// </summary>
        /// <returns>
        /// A list of unit names in the converter.
        /// </returns>
        public List<string> allUnitNames()
        {
            return _conversion.unitNames();
        }

        /// <summary>
        /// Get a list of unit type names available for unit conversion.
        /// </summary>
        /// <returns>
        /// True if software and unit versions match, false otherwise.
        /// </returns>
        public bool check()
        {
            return _conversion.check();
        }

        /// <summary>
        /// Get the name of the current 'from' system.
        /// </summary>
        /// <returns>
        /// The name of the current 'from' system.
        /// </returns>
        public string fromSystem()
        {
            return _fromSystem;
        }

        /// <summary>
        /// Set the name of the current 'from' system.
        /// </summary>
        /// <param><c>fSys</c> (input)  name of the new 'from' system.</param>
        public void fromSystem(string fSys)
        {
            _fromSystem = fSys;
        }

        /// <summary>
        /// Construct the full unit name from the system and unit names.
        /// </summary>
        /// <param><c>systemName</c>   (input) the system name.</param>
        /// <param><c>unitName</c>     (input) the unit name.</param>
        /// <returns>
        /// The full unit name (unit name plus the system name).
        /// <returns>
        public string fullUnitName(string systemName,
                                   string unitName)
        {
            return _conversion.fullUnitName(systemName, unitName);
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
        /// Get the name of the convert.
        /// </summary>
        /// <returns>
        /// The name of the convert.
        /// </returns>
        public string name()
        {
            return _name;
        }

        /// <summary>
        /// Get the unit name from the full unit name.
        /// </summary>
        /// <param><c>unitName</c>     (input) the full unit name.</param>
        /// <returns>
        /// The unit name stripped of the system name.
        /// <returns>
        public string rawUnitName(string unitName)
        {
            return _conversion.rawUnitName(unitName);
        }

        /// <summary>
        /// Get the name of the current 'to' system.
        /// </summary>
        /// <returns>
        /// The name of the current 'to' system.
        /// </returns>
        public string toSystem()
        {
            return _toSystem;
        }

        /// <summary>
        /// Set the name of the current 'to' system.
        /// </summary>
        /// <param><c>tSys</c>   (input)  name of the new 'to' system.</param>
        public void toSystem(string tSys)
        {
            _toSystem = tSys;
        }

        /// <summary>
        /// Get a list of all the unit types in the convert.
        /// </summary>
        /// <returns>
        /// A list of unit type names in the convert.
        /// </returns>
        public List<string> typeNames()
        {
            return _conversion.typeNames();
        }

        /// <summary>
        /// Get a flag that specified in the convert is valid or not.
        /// </summary>
        /// <returns>
        /// True if the convert contains one or more unit systems having
        /// one or more valid units.
        /// </returns>
        public bool valid()
        {
            return _valid;
        }
    }
}
// EOF