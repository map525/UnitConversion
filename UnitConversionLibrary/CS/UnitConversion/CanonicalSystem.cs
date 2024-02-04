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
// File CanonicalSystem.cs
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

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// Base class for canonical unit types (length, area, mass, volume) units.
    /// </summary>
    public class CanonicalSystem : Conversion
    {
        /// <summary>
        /// Default constructor.
        /// </summary>
        public CanonicalSystem() : base()
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>  (input) name of the CanonicalSystem.</param>
        public CanonicalSystem(string name) : base(name)
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>  (input) the name of the CanonicalSystem.</param>
        /// <param><c>map</c>   (input) the units in the CanonicalSystem.</param>
        public CanonicalSystem(string name, 
                               Dictionary<string, BaseSystem> map) : base(name, map)
        {
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) the other CanonicalSystem to copy.</param>
        public CanonicalSystem(CanonicalSystem other) : base(other)
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
        /// Convert from one unit to another. Example of usage is as follows:
        /// 
        /// double tempCelsius = usb.convertUnit(300.0, "temperature", "Kelvin", 
        ///                                      "SI", "Celsius", "INT", false);
        /// 
        /// converts two meters (SI system) to equivalent feet (US system).
        /// </summary>
        /// <param><c>value</c>    (input) value of the unit to be 
        ///                                converted</param>
        /// <param><c>fromType</c> (input) 'from' unit type</param>
        /// <param><c>toType</c>   (input) 'to' unit type</param>
        /// <param><c>from</c>     (input) name of 'from' unit.</param>
        /// <param><c>fromSys</c>  (input) name of 'from' system.</param>
        /// <param><c>to</c>       (input) name of 'to' unit.</param>
        /// <param><c>toSys</c>    (input) name of 'to' system.</param>
        /// <param><c>asIs</c>     (input) if false construct full unit 
        ///                                names from inputs.</param>
        /// <returns>
        /// The value of the converted unit.
        /// </returns>
        public override double convertUnit(double value, 
                                           string fromType,
                                           string toType, 
                                           string from, 
                                           string fromSys, 
                                           string to, 
                                           string toSys, 
                                           bool asIs)
        {
            if (!_map.ContainsKey(fromSys) || !_map.ContainsKey(toSys))
            {
                return UBASE.ERROR;
            }
            else
            {
                BaseSystem fromBS = _map[fromSys];
                BaseSystem toBS   = _map[toSys];
                UBASE dbTo        = toBS.unit(toType, to);
                UBASE dbFrom      = fromBS.unit(fromType, from);

                if (dbTo.valid() && dbFrom.valid() && dbTo.value().dvalue() != 0 
                                 && dbTo.type() == dbFrom.type())
                {
                    double fromValue = value * dbFrom.value().dvalue() + dbFrom.offset().dvalue();
                    return (fromValue - dbTo.offset().dvalue()) / dbTo.value().dvalue();
                }
                else
                {
                    return UBASE.ERROR;
                }
            }
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
        /// Return true if conversion between types is allowed, false otherwise.
        /// </summary>
        /// <param><c>fromType</c>   (input) the 'from' unit type.</param>
        /// <param><c>toType</c>     (input) the 'to' unit type.</param>
        /// <returns>
        /// True if conversion between types is allowed, false otherwise.
        /// </returns>
        public override bool validateType(string fromType, string toType)
        {
            List<string> tNames = typeNames();
            List<string> aNames = new List<string>{"Dry","Liquid","Volume" };
            bool fromOK = (tNames.Count == 0 ? true : tNames.Contains(fromType));
            bool toOK   = (tNames.Count == 0 ? true : tNames.Contains(toType));
            if (fromOK && toOK)
            {
                if (fromType == toType)
                {
                    return true;
                }
                else if (aNames.Contains(fromType) && aNames.Contains(toType))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
}
// EOF
