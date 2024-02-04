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
// File ConversionBase.cs
//
// Base class for conversions. This class provides methods for accessing
// the units, systems, and type groups that constitute a system of units 
// for a particular unit type. 
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System.Collections.Generic;

    /// <summary>
    /// Base class for Conversion and the CanonicalSystem and 
    /// SingleSystem classes.
    /// </summary>
    public class ConversionBase
    {
        /// <value>
        /// A ConversionBase consists of one or more BaseSystems with
        /// each BaseSystem containing one or more type groups
        /// each containing one or more units.
        /// </value>
        protected Dictionary<string, BaseSystem> _map;

        /// <value>
        /// Name of the ConversionBase object; typically the unit type.
        /// </value>
        private string _name;

        /// <value>
        /// A flag indicating if the ConversionBase is valid or not 
        /// i.e. it contains one or more valid BaseSystems.
        /// </value>
        private bool _valid;

        /// <summary>
        /// Default Constructor.
        /// </summary>
        public ConversionBase()
        {
            _map   = new Dictionary<string, BaseSystem>();
            _name  = "Invalid";
            _valid = false;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c> (input) the name of the conversion.</param>
        public ConversionBase(string name)
        {
            _map   = new Dictionary<string, BaseSystem>();
            _name  = name;
            _valid = true;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>name</c> (input) the name of the conversion.</param>
        /// <param><c>map</c>  (input) the units in the conversion.</param>
        public ConversionBase(string name, Dictionary<string, BaseSystem> map)
        {
            _map   = new Dictionary<string, BaseSystem>(map);
            _name  = name;
            _valid = true;
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c> (input) the ConversionBase object to copy.</param>
        public ConversionBase(ConversionBase other)
        {
            _map = new Dictionary<string, BaseSystem>();
            foreach (KeyValuePair<string, BaseSystem> entry in other._map)
            {
                _map.Add(entry.Key, new BaseSystem(entry.Value));
            }
            _name  = other._name;
            _valid = other._valid;
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
        protected virtual string actualType(string type, 
                                            string system)
        {
            return type;
        }

        ///<summary>
        /// return a list of type or system names in the BaseSystem.
        /// </summary>
        /// <param><c>bs</c> - BaseSystem whose names are required.</param>
        /// <returns>
        /// A list of names.
        /// </returns>
        protected virtual List<string> baseSystemNames(BaseSystem bs)
        {
             return new List<string>();
        }

        /// <summary>
        /// Get a list of unit type names available for unit conversion.
        /// </summary>
        /// <returns>
        /// True if software and unit versions match, false otherwise.
        /// </returns>
        public bool check()
        {
            foreach (KeyValuePair<string, BaseSystem> kvp in _map)
            {
                BaseSystem bs = kvp.Value;
                if (bs.check())
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
        /// Check is system is part of unit name.
        /// </summary>
        /// <param><c>param</c> sysName  - the system name.</param>
        /// <param><c>unitName</c> - the unit name.</param>
        /// <returns>
        /// The full unit name.
        /// </returns>
        protected virtual bool checkName(string sysName, 
                                         string unitName)
        {
            if (unitName.IndexOf(sysName) == 0)
            {
                return false;
            }
            else
            {
                 return true;
            }
        }

        /// <summary>
        /// Return a list of type or system names.
        /// </summary>
        ///<returns>
        /// A list of names.
        /// </returns>
        protected virtual List<string> coreNames()
        {
            List<string> keys = new List<string>();
            foreach (KeyValuePair<string, BaseSystem> kvp in _map)
            {
                singleCoreNames(kvp.Key, keys);
            }
            return keys;
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
        protected virtual string fullName(string sysName, 
                                          string unitName)
        {
            string fullName = sysName + "[" + unitName + "]";
            return fullName;
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
        protected virtual string fullType(string type, 
                                          string system)
        {
            return type;
        }

        /// <summary>
        /// Construct the full unit name from the system and unit names.
        /// </summary>
        /// <param><c>systemName</c> (input)  - the system name.</param>
        /// <param><c>unitName</c>   (input)  - the unit name.</param>
        /// <returns>
        /// The full unit name (unit name plus of the system name).
        /// </returns>
        public virtual string fullUnitName(string systemName, 
                                           string unitName)
        {
             return unitName;
        }

        /// <summary>
        /// Construct the local unit name from the system and unit names.
        /// </summary>
        /// <param><c>systemName</c> - the system name.</param>
        /// <param><c>unitName</c>   - the unit name.</param>
        /// <returns>
        /// The full unit name (unit name plus the system name).
        /// </returns>
        protected virtual string localName(string systemName, 
                                           string unitName)
        {
             return unitName;
        }

        /// <summary>
        /// Construct a local type name.
        /// </summary>
        /// <param><c>type</c> - the unit type.</param>
        /// <returns>
        /// Type for the unit based on class.
        /// </returns>
        protected virtual string localType(string type)
        {
             return type;
        }

        /// <summary>
        /// Construct list of map names.
        /// </summary>
        /// <returns>
        /// A list of map keys.
        /// </returns>
        protected virtual List<string> mapNames()
        {
            List<string> keys = new List<string>();
            foreach (KeyValuePair<string, BaseSystem> kvp in _map)
            {
                 keys.Add(kvp.Key);
            }
            return keys;
         }

        /// <summary>
        /// Get the name of the conversion.
        /// </summary>
        /// <returns>
        /// The conversion name.
        /// </returns>
        public string name()
        {
            return _name;
        }

        /// <summary>
        /// Get the unit name from the full unit name.
        /// </summary>
        /// <param><c>unitName</c> (input) - the full unit name.</param>
        /// <returns>
        /// The unit name stripped of the system name.
        /// </returns>
        public virtual string rawUnitName(string unitName)
        {
            int first = unitName.IndexOf('[');
            int last = unitName.IndexOf(']');
            first = (first == -1 ? 0 : first + 1);
            last = (last == -1 ? unitName.Length : last);
            string uName = unitName.Substring(first, last - first);
            return uName;
        }

        /// <summary>
        /// Return a list of type or system names .
        /// </summary>
        /// <param><c>name</c> - unit type or system name.</param>
        /// <param><c>list</c>  - list to place results into.</param>
        protected virtual void singleCoreNames(string name,
                                               List<string> list)
        {
            if (_map.ContainsKey(name))
            {
                BaseSystem us = _map[name];
                List<string> names = baseSystemNames(us);
                foreach (string aname in names)
                {
                    if (list.Contains(aname))
                    {
                        continue;
                    }
                    else
                    {
                        list.Add(aname);
                    }
                }
            }
            else
            {
                return;
            }
        }

        /// <summary>
        /// Get a BaseSystem in the conversion.
        /// </summary>
        /// <param><c>name</c> (input) the name of the requested 
        ///                            BaseSystem.</param>
        /// <returns>
        /// The specified BaseSystem or an invalid BaseSystem if the
        /// requested BaseSystem was not found.
        /// </returns>
        public BaseSystem system(string name)
        {
            if (_map.ContainsKey(name))
            {
                return _map[name];
            }
            else
            {
                return new BaseSystem();
            }
        }

        /// <summary>
        /// Get a type group from the conversion. This method is overridden
        /// in the child class.
        /// </summary>
        /// <param><c>type</c>    (input) the unit type.</param>
        /// <param><c>tgroup</c>  (input) the unit type group.</param>
        /// <returns>
        /// The requested type group or an invalid type 
        /// group if the type group was not found.
        /// </returns>
        public virtual TypeGroup typeGroup(string type, 
                                           string tgroup)
        {
            if (_map.ContainsKey(actualType(type, tgroup)))
            {
                TypeGroup tg =  new TypeGroup(_map[actualType(type, tgroup)].typeGroup(localType(type)));
                typeGroupFilter(tgroup, tg);
                return tg;
            }
            else
            {
                return new TypeGroup();
            }
        }

        /// <summary>
        /// Get a list of system names in the conversion. This method
        /// is overridden in the child class.
        /// </summary>
        /// <param><c>type</c>    (input) the unit type.</param>
        /// <returns>
        /// A list of system names in the conversion.
        /// </returns>
        public virtual List<string> systemNames(string type)
        {
            return new List<string>();
        }

        /// <summary>
        /// Get a list of all system names in the conversion.
        /// </summary>
        /// <returns>
        /// A list of system names in the conversion.
        /// </returns>
        public virtual List<string> systemNames()
        {
            return new List<string>();
        }

        /// <summary>
        /// Filter TypeGroup.
        /// </summary>
        /// <param><c>name</c> - type group name to keep.</param>
        /// <param><c>tg</c>   - type group to filter.</param>
        protected virtual void typeGroupFilter(string name, 
                                               TypeGroup tg)
        {
            return;
        }

        /// <summary>
        /// Get a list of type names in the conversion. This
        /// method is overridden in the child class.
        /// </summary>
        /// <returns>
        /// A list of type names in the conversion.
        /// </returns>
        public virtual List<string> typeNames()
        {
            return new List<string>();
        }

        /// <summary>
        /// Get a unit from the system. This method is overridden
        /// in the child class.
        /// </summary>
        /// <param><c>type</c>    (input) the unit type.</param>
        /// <param><c>system</c>  (input) the unit system.</param>
        /// <param><c>name</c>    (input) the unit name.</param>
        /// <returns>
        /// The requested unit or an invalid unit if the
        /// unit was not found.
        /// </returns>
        public virtual UBASE unit(string type, 
                                  string system, 
                                  string name)
        {
            string typeName = actualType(type, system);
            if (_map.ContainsKey(typeName))
            {
                string unitName = fullName(system, name);
                string fullTypeName = fullType(type,system);
                return _map[typeName].unit(fullTypeName, unitName);
            }
            else
            {
                return new UBASE();
            }
        }

        /// <summary>
        /// Get a list of unit names in the conversion. This method is
        /// overridden in the child class. 
        /// </summary>
        /// <param><c>type</c>    (input) the unit type.</param>
        /// <param><c>system</c>  (input) the unit system.</param>
        /// <returns>
        /// A list of unit names in the conversion.
        /// </returns>
        public virtual List<string> unitNames(string type, 
                                              string system)
        {
            List<string> keys = new List<string>();
            if (_map.ContainsKey(actualType(type, system)))
            {
                BaseSystem us = _map[actualType(type, system)];
                List<string> names = us.unitNames(localType(type));
                foreach (string name in names)
                {
                    if (checkName(system, name))
                    {
                        continue;
                    }
                    else
                    {
                        keys.Add(localName(type, name));
                    }
                }
                return keys;
            }
            else
            {
                return keys;
            }
        }

        /// <summary>
        /// Get a list of all unit names in the conversion. This method is
        /// overridden in the child class.  
        /// </summary>
        /// <returns>
        /// A list of all unit names in the conversion.
        /// </returns>
        public virtual List<string> unitNames()
        {
            List<string> lst = new List<string>();
            foreach (KeyValuePair<string, BaseSystem> kvp in _map)
            {
                BaseSystem us = kvp.Value;
                List<string> types = us.typeNames();
                foreach (string itl in types)
                {
                    List<string> names = us.unitNames(itl);
                    foreach (string i in names)
                    {
                        if (lst.Contains(i))
                        {
                            continue;
                        }
                        else
                        {
                            lst.Add(localName(itl,i));
                        }
                    }
                }
            }
            return lst;
        }

        /// <summary>
        /// Get the validity of the conversion.
        /// </summary>
        /// <returns>
        /// True if the conversion is valid, false otherwise.
        /// </returns>
        public bool valid()
        {
            return _valid;
        }
    }
}
// EOF