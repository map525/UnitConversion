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
// File Conversion.cs
//
// Base class for the CanonicalSystem and SingleSystem classes. This class 
// provides an interface for unit conversions between units of the same 
// type but in different systems e.g. feet to  meters, etc.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// Base class for the CanonicalSystem and SingleSystem classes.
    /// </summary>
    public class Conversion : ConversionBase
    {
        public Conversion() : base()
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c> (input) the name of the conversion.</param>
        public Conversion(string name) : base(name)
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c> (input) the name of the conversion.</param>
        /// <param><c>map</c>  (input) the units in the conversion.</param>
        public Conversion(string name, Dictionary<string, BaseSystem> map) : base(name, map)
        {
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) the Conversion object to copy.</param>
        public Conversion(Conversion other) : base(other)
        {
        }

        /// <summary>
        /// Add a unit to the conversion.
        /// </summary>
        /// <param><c>typeName</c> (input) the name of the unit type 
        ///                                being added.</param>
        /// <param><c>sysName</c>  (input) name of system new unit 
        ///                                belongs to.</param>
        /// <param><c>unitName</c> (input) the name of the new unit.</param>
        /// <param><c>bse</c>      (input) the new unit.</param>
        /// <returns>
        /// True if the unit as successfully added, false otherwise.
        /// </returns>
        public bool addUnit(string typeName, 
                            string sysName, 
                            string unitName, 
                            UBASE bse)
        {
            string type = actualType(typeName, sysName);
            if (_map.ContainsKey(type))
            {
                string name = fullName(sysName, unitName);
                string fullTypeName = fullType(typeName, sysName);
                return _map[type].addUnit(fullTypeName, name, bse);
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// Convert input value from its specified ('rom' units in 'from' system  
        /// to the specified' to' units in 'to' system.This method is overridden 
        /// in the child class. 
        /// </summary>
        /// <param><c>value</c>    (input) value of unit in 'from' units.</param>
        /// <param><c>fromType</c> (input) the 'from' unit type.</param>
        /// <param><c>toType</c>   (input) the 'to' unit type.</param>
        /// <param><c>from</c>     (input) the name of the 'from' unit.</param>
        /// <param><c>fromSys</c>  (input) the name of the 'from' system.</param>
        /// <param><c>to</c>       (input) the name of the 'to' unit.</param>
        /// <param><c>toSys</c>    (input) the name of the 'to' system.</param>
        /// <param><c>asIs</c>     (input) if true, do not construct full unit 
        ///                                names, but use the unit names 
        ///                                supplied 'as is'.</param>
        /// <returns>
        /// The converted unit value.
        /// </returns>
        public virtual double convertUnit(double value, 
                                          string fromType, 
                                          string toType, 
                                          string from, 
                                          string fromSys, 
                                          string to, 
                                          string toSys, 
                                          bool asIs)
        {
            return UBASE.ERROR;
        }

        /// <summary>
        /// Remove a unit from the conversion. 
        /// </summary>
        /// <param><c>typeName</c> (input) the type of the unit being 
        ///                                removed.</param>
        /// <param><c>sysName</c>  (input) name of unit system the unit 
        ///                                belongs to.</param>
        /// <param><c>unitName</c> (input) the name of the unit to 
        ///                                remove.</param>
        /// <returns>
        /// True if the unit as successfully removed, false otherwise.
         /// </returns>
        public bool removeUnit(string typeName, 
                               string sysName, 
                               string unitName)
        {
            string type = actualType(typeName, sysName);
            if (_map.ContainsKey(type))
            {
                string name = fullName(sysName, unitName);
                string fullTypeName = fullType(typeName, sysName);
                return _map[type].removeUnit(fullTypeName, name);
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// Return true if conversion between type is allowed, false otherwise.
        /// </summary>
        /// <param><c>fromType</c>   (input) the 'from' unit type.</param>
        /// <param><c>toType</c>     (input) the 'to' unit type.</param>
        /// <returns>
        /// True if conversion between type is allowed, false otherwise.
        /// </returns>
        public virtual bool validateType(string fromType, 
                                         string toType)
        {
            List<string> tNames = typeNames();
            bool fromOK = (tNames.Count == 0 ? true : tNames.Contains(fromType));
            bool toOK   = (tNames.Count == 0 ? true : tNames.Contains(toType));
            if (fromType == toType && fromOK && toOK)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
// EOF