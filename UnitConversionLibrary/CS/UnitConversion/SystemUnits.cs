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
// File SystemUnits.cs
//
// All unit systems, ancient, historical, and modern contain the four unit types
// for measuring distance, area, weight (mass), and volume. Volume is divided
// into two types: liquid and dry. Within these five types of units, there are
// are subset from which all the other units in a system are derived. These 
// units are termed System Units. This class is the base class for all the
// System Units.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// Base class for system units.
    /// </summary>
    public class SystemUnits : ConversionBase
    {
        /// <summary>
        /// Default constructor.
        /// </summary>
        public SystemUnits() : base()
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>  (input) name of the SystemUnits.</param>
        public SystemUnits(string name) : base(name)
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>  (input) the name of the SystemUnits.</param>
        /// <param><c>map</c>   (input) the units in the SystemUnits.</param>
        public SystemUnits(string name, 
                               Dictionary<string, BaseSystem> map) : base(name, map)
        {
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) the other SystemUnits to copy.</param>
        public SystemUnits(SystemUnits other) : base(other)
        {
        }

        /// <summary>
        /// Construct a full type name. Type name is dependent on
        /// on the system: either CanonicalSystem or SingleSystem.
        /// </summary>
        /// <param><c>type</c>     (input) the type.</param>
        /// <param><c>system</c>   (input) the system.</param>
        /// <returns>
        /// The system specific type.
        /// </returns>
        protected override string actualType(string type, 
                                             string system)
        {
            return system;
        }

        ///<summary>
        /// return a list of type or system names in the BaseSystem.
        /// </summary>
        /// <param><c>bs</c> - BaseSystem whose names are required.</param>
        /// <returns>
        /// A list of names.
        /// </returns>
        override protected List<string> baseSystemNames(BaseSystem bs)
        {
            return bs.typeNames();
        }

        /// <summary>
        /// Check is system is part of unit name.
        /// </summary>
        /// <param><c>param</c> sysName  - the system name.</param>
        /// <param><c>unitName</c> - the unit name.</param>
        /// <returns>
        /// The full unit name.
        /// </returns>
        override protected bool checkName(string sysName,
                                          string unitName)
        {
            return false;
        }

        /// <summary>
        /// Construct a full unit name from system and unit name. A full  
        /// unit name is of the form systeName[unitName] e.g.SI[newton].
        /// This method is overridden in the child class. 
        /// </summary>
        /// <param><c>sysName</c>   (input) the system name.</param>
        /// <param><c>unitName</c>  (input) the unit name.</param>
        /// <returns>
        /// The full unit name.
        /// </returns>
        override protected string fullName(string sysName,
                                           string unitName)
        {
            return unitName;
        }


        /// <summary>
        /// Construct the full unit name from the system and unit names.
        /// </summary>
        /// <param><c>systemName</c> (input)  - the system name.</param>
        /// <param><c>unitName</c>  (input)   - the unit name.</param>
        /// <returns>
        /// The full unit name (unit name plus of the system name).
        /// </returns>
        override public string fullUnitName(string systemName,
                                            string unitName)
        {
            return base.rawUnitName(unitName);
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
        /// Construct the local unit name from the system and unit names.
        /// </summary>
        /// <param><c>systemName</c> - the system name.</param>
        /// <param><c>unitName</c>   - the unit name.</param>
        /// <returns>
        /// The full unit name (unit name plus the system name).
        /// </returns>
        override protected string localName(string systemName,
                                            string unitName)
        {
            return base.fullName(systemName, unitName);
        }

        /// <summary>
        /// Get the unit name from the full unit name.
        /// </summary>
        /// <param><c>unitName</c> (input) - the full unit name.</param>
        /// <returns>
        /// The unit name stripped of the system name.
        /// </returns>
        override public string rawUnitName(string unitName)
        {
            return unitName;
        }


        /// <summary>
        /// Get a list of system names in the CanonicalSystem.
        /// </summary>
        /// <param><c>type</c>    (input) the unit type</param>
        /// <returns>
        /// A list of system names in the CanonicalSystem.
        /// </returns>
        override public List<string> systemNames(string type)
        {
            //List<string> keys = new List<string>();
            //foreach (KeyValuePair<string, BaseSystem> kvp in _map)
            //{
            //    if (kvp.Key == type)
            //    {
            //        keys.Add(kvp.Key);
            //    }
            //    else
            //    {
            //        continue;
            //    }
            //}
            //return keys;
            return systemNames();
        }

        /// <summary>
        /// Get a list of all system names in the CanonicalSystem.
        /// </summary>>
        /// <returns>
        /// A list of system names in the CanonicalSystem.
        /// </returns>
        override public List<string> systemNames()
        {
            return mapNames();
        }

        /// <summary>
        /// Get a list of type names in the CanonicalSystem.
        /// </summary>>
        /// <returns>
        /// A list of type names in the CanonicalSystem.
        /// </returns>
        override public List<string> typeNames()
        {
            return coreNames();
        }

        /// <summary>
        /// Get value of a system unit.
        /// </summary>>
        /// <param><c>type</c>    - the unit type.</param>
        /// <param><c>system</c>   - the unit system.</param>
        /// <param><c>name</c>     - the unit name.</param>
        /// <returns>
        /// The value of the requested system unit.
        /// </returns>
        public double value(string type, 
                            string system, 
                            string name)
        {
             UBASE u = unit(type, system, name);
             return u.value().asDouble();
        }
     }
}
// EOF
