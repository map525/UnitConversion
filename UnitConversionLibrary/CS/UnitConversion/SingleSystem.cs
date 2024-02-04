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
// File SingleSystem.cs
//
// The SingleSystem class contains unit systems all having units of the same
// type. Examples include density, force, power, and angle. A SingleSystem
// contains only a single type group but can consist of units from many
// different systems. Typically, a SingleSystem is either modern or historical
// but not ancient. It is a child class of Conversion which defines its 
// interface.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// SingleSystem class contains unit systems all having units of 
    /// the same type.
    /// </summary>
    public class SingleSystem : Conversion
    {
        /// <summary>
        /// Default constructor.
        /// </summary>
        public SingleSystem() : base()
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>  (input) the name of the SingleSystem.</param>
        public SingleSystem(string name) : base(name)
        {
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c>  (input) the name of the SingleSystem.</param>
        /// <param><c>map</c>   (input) the units in the SingleSystem.</param>
        public SingleSystem(string name, 
                            Dictionary<string, BaseSystem> map) : base(name, map)
        {
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) the SingleSystem to copy.</param>
        public SingleSystem(SingleSystem other) : base(other)
        {
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
            return bs.systemNames("unit");
        }

        /// <summary>
        /// Convert from one unit to another. Example of usage is as follows:
        /// 
        /// double tempCelsius = usb.convertUnit(300.0,  "temperature", "Kelvin", 
        ///                                      "SI", "Celsius", "INT", false);
        /// 
        /// converts two meters (SI system) to equivalent feet (US system).).
        /// </summary>
        /// <param><c>value</c>    (input) value of the unit to be converted</param>
        /// <param><c>fromType</c> (input) 'from' unit type</param>
        /// <param><c>toType</c>   (input) 'to' unit type</param>
        /// <param><c>from</c>     (input) name of 'from' unit.</param>
        /// <param><c>fromSys</c>  (input) name of 'from' system.</param>
        /// <param><c>to</c>       (input) name of 'to' unit.</param>
        /// <param><c>toSys</c>    (input) name of 'to' system.</param>
        /// <param><c>asIs</c>     (input) flag if false construct full unit 
        ///                                names from inputs.</param>
        /// <returns>
        /// The value of the converted unit (to).
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
            string type = fromType;
            if (!_map.ContainsKey(type) || fromType != toType)
            {
                return UBASE.ERROR;
            }
            else
            {
                string sysFrom = (asIs ? from : fromSys + "[" + from + "]");
                string sysTo = (asIs ? to : toSys + "[" + to + "]");

                BaseSystem system = _map[type];
                UBASE dbTo = system.unit("unit", sysTo);
                UBASE dbFrom = system.unit("unit", sysFrom);
                if (dbFrom.valid() && dbTo.valid() 
                                   && dbTo.value().asDouble() != 0 
                                   && dbTo.type() == dbFrom.type())
                {
                    double fromValue = value * dbFrom.value().asDouble() + dbFrom.offset().asDouble();
                    return (fromValue - dbTo.offset().asDouble()) / dbTo.value().asDouble();
                }
                else
                {
                    return UBASE.ERROR;
                }
            }
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
        protected override string fullType(string type, 
                                           string system)
        {
            return "unit";
        }

        /// <summary>
        /// Construct the full unit name from the system and unit names.
        /// </summary>
        /// <param><c>systemName</c> (input)  - the system name.</param>
        /// <param><c>unitName</c> (input)    - the unit name.</param>
        /// <returns>
        /// The full unit name (unit name plus of the system name).
        /// </returns>
        override public string fullUnitName(string systemName, 
                                            string unitName)
        {
             return base.fullName(systemName, unitName);
        }

        /// <summary>
        /// Construct a local type name.
        /// </summary>
        /// <param><c>type</c> - the unit type.</param>
        /// <returns>
        /// Type for the unit based on class.
        /// </returns>
        override protected string localType(string type)
        {
            return "unit";
        }

        /// <summary>
        /// Filter TypeGroup.
        /// </summary>
        /// <param><c>name</c> - type group name to keep.</param>
        /// <param><c>tg</c>   - type group to filter.</param>
        override protected void typeGroupFilter(string name,
                                                TypeGroup tg)
        {
            List<string> names = tg.unitNames();
            foreach (string  item in names)
            {
                if(item.Contains(name))
                {
                    continue;
                }
                else
                {
                    tg.removeUnit(item);
                }
            }
        }

        /// <summary>
        /// Get a list of system names in the SingleSystem.
        /// </summary>
        /// <param><c>type</c>  (input) the unit type.</param>
        /// <returns>
        /// A list of system names in the SingleSystem.
        /// </returns>
        override public List<string> systemNames(string type)
        {
            List<string> keys = new List<string>();
            singleCoreNames(type, keys);
            return keys;
        }

        /// <summary>
        /// Get a list of all system names in the SingleSystem.
        /// </summary>
        /// <returns>
        /// A list of system names in the SingleSystem.
        /// </returns>
        override public List<string> systemNames()
        {
            return coreNames();
        }

        /// <summary>
        /// Get a list of type names in the SingleSystem.
        /// </summary>
        /// <returns>
        /// A list of type names in the SingleSystem.
        /// </returns>
        override public List<string> typeNames()
        {
            return mapNames();
        }
    }
}
// EOF
