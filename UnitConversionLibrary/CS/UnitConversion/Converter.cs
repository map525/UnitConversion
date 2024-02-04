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
// File Converter.cs
//
// A converter contains methods that perform unit conversions between units
// of the same type. Units may be added or removed from the converter.  In
// general conversion is allowed only between units of the same type. However,
// volume units are divided into liquid and dry and since these have the 
// same dimensions, unit conversion is allowed between them.
///
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// A converter contains methods that perform unit conversions.
    /// </summary>
    public class Converter : Convert
    {
        /// <value>
        /// The unit type of the Converter object.
        /// </value>
        private string _type;

        /// <value>
        /// The 'from' unit type of the Converter object.
        /// </value>
        private string _fromType;

        /// <value>
        /// The 'to' unit type of the Converter object.
        /// </value>
        private string _toType;

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>       (input) name of the Converter.</param>
        /// <param><c>type</c>       (input) the unit type.</param>
        /// <param><c>from</c>       (input) the name of the 'from' 
        ///                                  system.</param>
        /// <param><c>to</c>         (input) the name of the 'to' system.</param>
        /// <param><c>conversion</c> (input) a conversion object containing the 
        ///                                  systems and associated units for 
        ///                                  the unit type.</param>
        public Converter(string name, 
                         string type, 
                         string from, 
                         string to, 
                         Conversion conversion) : base(name, from, to, conversion)
        {
            _type     = type;
            _fromType = type;
            _toType   = type;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>       (input) name of the Converter.</param>
        /// <param><c>type</c>       (input) the unit type.</param>
        /// <param><c>fromType</c>   (input) the 'from' unit type.</param>
        /// <param><c>toType</c>     (input) the 'to' unit type.</param>
        /// <param><c>from</c>       (input) the name of the 'from' system.</param>
        /// <param><c>to</c>         (input) the name of the 'to' system.</param>
        /// <param><c>conversion</c> (input) a conversion object containing the 
        ///                                  systems and associated units for 
        ///                                  the unit type.</param>
        public Converter(string name, 
                         string type, 
                         string fromType, 
                         string toType, 
                         string from, 
                         string to, 
                         Conversion conversion) : base(name, from, to, conversion)
        {
            _type     = type;
            _fromType = fromType;
            _toType   = toType;
        }

        /// <summary>
        /// Add a unit to the converter.
        /// </summary>
        /// <param><c>sysName</c>   (input) name of unit system new unit 
        ///                                 belongs to.</param>
        /// <param><c>unitName</c>  (input) the name of the new unit.</param>
        /// <param><c>bse</c>       (input) the new unit.</param>
        /// <returns>
        /// True if the unit was successfully added, false otherwise.
        /// </returns>
        public bool addUnit(string sysName, string unitName, UBASE bse)
        {
            return _conversion.addUnit(_type, sysName, unitName, bse);
        }

        /// <summary>
        /// Convert input value from its specified 'from' units in 'from' system to 
        /// the specified 'to' units in 'to' system.
        /// </summary>
        /// <param><c>value</c> (input) value of unit in 'from' units.</param>
        /// <param><c>from</c>  (input) the name of the 'from' units.</param>
        /// <param><c>to</c>    (input) the name of the 'to' units.</param>
        /// <param><c>asIs</c>  (input) if true, do not construct full unit 
        ///                             names, but use the unit names supplied 
        ///                             'as is'.</param>
        /// <returns>
        /// The converted value of the input unit.
        /// </returns>
        public double convert(double value, 
                              string from, 
                              string to, 
                              bool asIs = false)
        {
            return _conversion.convertUnit(value, _fromType, _toType, from, 
                                           _fromSystem, to, _toSystem, asIs);
        }

        /// <summary>
        /// Convert input value from its specified 'from' units in 'from'  
        /// system to the specified 'to' units in 'to' system.
        /// </summary>
        /// <param><c>value</c>   (input) value of unit in 'from' units.</param>
        /// <param><c>from</c>    (input) the name of the 'from' unit.</param>
        /// <param><c>fromSys</c> (input) the name of the 'from' system.</param>
        /// <param><c>to</c>      (input) the name of the 'to' unit.</param>
        /// <param><c>toSys</c>   (input) the name of the 'to' system.</param>
        /// <returns>
        /// The converted value of the input unit.
        /// </returns>
        public double convert(double value, 
                              string from, 
                              string fromSys, 
                              string to, 
                              string toSys)
        {
            return _conversion.convertUnit(value, _fromType, _toType, from, 
                                           fromSys, to, toSys, false);
        }

        /// <summary>
        /// Set the 'from' type.
        /// </summary>
        /// <param><c>fromType</c> (input) the 'from' unit type.</param>
        /// <returns>
        /// True of type change was made, false otherwise.
        /// </returns>
        public bool fromType(string fromType)
        {
            if (_conversion.validateType(fromType, _toType))
            {
                _fromType = fromType;
                return true;
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// Get the 'from' type.
        /// </summary>
        /// <returns>
        /// The 'from' unit type.
        /// </returns>
        public string fromType()
        {
              return _fromType;
        }

        /// <summary>
        /// Remove a unit from the converter.
        /// </summary>
        /// <param><c>sysName</c>   (input)  name of unit system the unit 
        ///                                  belongs to.</param>
        /// <param><c>unitName</c>  (input)  the name of the unit to 
        ///                                  remove.</param>
        /// <returns>
        /// True if the unit as successfully removed, false otherwise.
        /// </returns>
        public bool removeUnit(string sysName, 
                               string unitName)
        {
            return _conversion.removeUnit(_type, sysName, unitName);
        }
   
        /// <summary>
        /// Get a TypeGroup in the converter.
        /// </summary>
        /// <param><c>tgroup</c> (input) the name of the type group 
        ///                              to get.</param>
        /// <returns>
        /// The specified type group or an invalid type group if
        /// the specified type group was not found.
        /// </returns>
        public TypeGroup typeGroup(string tgroup)
        {
            return _conversion.typeGroup(_type, tgroup);
        }

        /// <summary>
        /// Get a list of all the system names in the converter.
        /// </summary>
        /// <returns>
        /// A list of system names in the converter.
        /// </returns>
        public List<string> systemNames()
        {
            return _conversion.systemNames(_type);
        }

        /// <summary>
        /// Set the 'to' type.
        /// </summary>
        /// <param><c>toType</c> (input) the 'to' unit type.</param>
        /// <returns>
        /// True of type change was made, false otherwise.
        /// </returns>
        public bool toType(string toType)
        {
            if (_conversion.validateType(_fromType, toType))
            {
                _toType = toType;
                return true;
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// Get the 'to' type.
        /// </summary>
        /// <returns>
        /// The 'to' unit type.
        /// </returns>
        public string toType()
        {
            return _toType;
        }

        /// <summary>
        /// Get the name of the unit type of the converter.
        /// </summary>
        /// <returns>
        /// The name of the unit type of the converter.
        /// </returns>
        public string type()
        {
            return _type;
        }

        /// <summary>
        /// Get a unit in the converter.
        /// </summary>
        /// <param><c>system</c> (input)  the name of the unit system the 
        /// <param>                       requested unit belongs to.</param>
        /// <param><c>name</c>   (input)  the name of the requested unit.</param>
        /// <returns>
        /// The specified unit or an invalid unit if the
        /// specified unit was not found.
        /// </returns>
        public UBASE unit(string system, string name)
        {
            return _conversion.unit(_type, system, name);
        }

        /// <summary>
        /// Get a list of all the units names in the specified unit system.
        /// </summary>
        /// <param><c>system</c>   (input)  the unit system name of the system  
        ///                                 the requested unit belongs to.</param>
        /// <returns>
        /// A list of unit names in the specified system in the converter.
        /// </returns>
        public List<string> unitNames(string system)
        {
            return _conversion.unitNames(_type, system);
        }

        /// <summary>
        /// Get a list of all the unit names in the converter.
        /// </summary>
        /// <returns>
        /// A list of unit names in the converter.
        /// </returns>
        public List<string> unitNames()
        {
            List<string> sysNames = _conversion.systemNames();
            List<string> unitNames = new List<string>();
            foreach (string n in sysNames)
            {
                List<string> un = _conversion.unitNames(_type, n);
                unitNames.AddRange(un);
            }
            return unitNames;
        }
    }
}
// EOF