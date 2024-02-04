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
// File UBase.cs
//
// Base class defining a single base unit of measurement.
// This class contains members used to define a single base unit of
// measurement. These are:
//
// 1. system - the unit system e.g.  SI, MKS, etc.
// 2. type - the unit type e.g. length, time, area, etc. 
// 3. name - the unit name e.g. miles, minute, gallon, etc.
// 4. unit - the unit meters, liters, etc.
// 5. valid - true if a valid unit.
// 6. value - conversion factor to SI units.
// 7. offset - unit offset.
// 8. version - software version number.
//
// The class methods include two constructors and accessors for
// the class members.
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    /// <summary>
    /// Static value used to identify an error. Expect for temperature all units
    /// have positive values.The Kelvin scale has absolute zero as its smallest
    /// value while Fahrenheit's smallest (theoretical) value is -459.67 which is 
    /// the most negative value of any unit.
    /// </summary>
    public class UBASE
    {
        /// <value>
        /// The conversion object containing a unit type along with its 
        /// associated unit systems and units.
        /// </value>
        public static double ERROR = System.Double.NaN; //-65536;

        /// <value>
        /// The unit name e.g. feet, meters, etc.
        /// </value>
        private string _name;

        /// <value>
        /// The offset is used for converting temperatures. For example 
        /// Celsius = 1.0*Kelvin - 273.15 so that 1.0 is the value and
        /// -273.15 is the offset.
        /// </value>
        private Value _offset;

        /// <value>
        /// The system of units the unit belongs to e.g. SI, UK, US, etc.
        /// </value>
        private string _system;

        /// <value>
        /// The type of unit e.g. the unit expressed in terms of fundamental 
        /// SI dimensions. For example force has a type of M.L/T2 that is mass 
        /// times length divided by time squared.
        /// </value>
        private string _type;

        /// <value>
        /// The unit expressed in terms of fundamental SI units.
        /// For example force has a type of kg.m/s2 that is kilograms times  
        /// meters divided by seconds squared.
        /// </value>
        private string _unit;

        /// <value>
        /// A flag that identifies the unit as 'valid' i.e. OK to use.
        /// </value>
        private bool _valid;

        /// <value>
        /// The "value' of the unit. The value converts the unit to SI units.
        /// </value>
        private Value _value;

        /// <value>
        /// The software version.
        /// </value>
        private string _version;

        /// <summary>
        /// Default constructor.
        /// </summary>
        public UBASE() 
        {
            _value   = new Value(); 
            _offset  = new Value();
            _system  = "Invalid";
            _name    = "Invalid";
            _type    = "Invalid";
            _unit    = "Invalid";
            _version = "Invalid";
            _valid   = false;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>system</c>  (input) the unit system e.g.  SI, 
        ///                               MKS, etc.</param>
        /// <param><c>name</c>    (input) the unit name e.g. miles, minute, 
        ///                               gallon, etc.</param>
        /// <param><c>value</c>   (input) conversion factor to SI units.</param>
        /// <param><c>unit</c>    (input) the unit SI components e.g. kg/m, 
        ///                               m/s, etc.</param>
        /// <param><c>type</c>    (input) the unit type e.g. M/L, L/S, etc.</param>
        /// <param><c>version</c> (input) software version number.</param>
        /// <param><c>offset</c>  (input) unit offset.</param>
        public UBASE(string system, 
                     string name, 
                     double value, 
                     string unit, 
                     string type, 
                     string version, 
                     double offset = 0)
        {
            _value   = new Value(value);
            _offset  = new Value(offset);
            _system  = system;
            _name    = name;
            _unit    = unit;
            _type    = type;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param><c>system</c>  (input) the unit system e.g.  SI, 
        ///                               MKS, etc.</param>
        /// <param><c>name</c>    (input) the unit name e.g. miles, minute, 
        ///                               gallon, etc.</param>
        /// <param><c>value</c>   (input) conversion factor to SI units.</param>
        /// <param><c>unit</c>    (input) the unit SI components e.g. kg/m, 
        ///                                m/s, etc.</param>
        /// <param><c>type</c>    (input) the unit type e.g. M/L, L/S, etc. </param>
        /// <param><c>version</c> (input) software version number.</param>
        /// <param><c>offset</c>  (input) unit offset.</param>
        public UBASE(string system, 
                     string name, 
                     ulong  value, 
                     string unit, 
                     string type, 
                     string version, 
                     ulong  offset = 0)
        {
            _value   = new Value(value);
            _offset  = new Value(offset);
            _system  = system;
            _name    = name;
            _unit    = unit;
            _type    = type;
            _valid   = true;
            _version = version;
        }

        /// <summary>
        /// Copy constructor.
        /// </summary>
        /// <param><c>other</c>  (input) the other UBASE to copy.</param>
        public UBASE(UBASE other) 
        {
            _value   = new Value(other._value);
            _offset  = new Value(other._offset);
            _system  = other._system;
            _name    = other._name;
            _unit    = other._unit;
            _type    = other._type;
            _valid   = other._valid;
            _version = other._version;
        }

        /// <summary>
        /// The name method returns the unit name.
        /// </summary>
        /// <returns>
        /// The unit name.
        /// </returns>
        public string name()
        {
            return _name;
        }

        /// <summary>
        /// Check if double is ERROR code.
        /// </summary>
        /// <param><c>x</c>    (input) value to check.</param>
        /// <returns>
        /// True if input is error code, false otherwise.
        /// </returns>
        public static bool isERROR(double x)
        {
            return System.Double.IsNaN(x);
        }

        /// <summary>
        /// The offset method returns the unit offset value.
        /// </summary>
        /// <returns>
        /// The unit offset value.
        /// </returns>
        public Value offset()
        {
            return _offset;
        }

        /// <summary>
        /// The system method returns the name of the system to
        /// which the unit belongs.
        /// </summary>
        /// <returns>
        /// The unit system name.
        /// </returns>
        public string system()
        {
            return _system;
        }

        /// <summary>
        /// Convert UBASE to string.
        /// </summary>
        /// <returns>
        /// The UBASE as a string.
        /// </returns>
        public string toString()
        {
            string valid = (_valid ? "true" : "false");

            string s = "type: " + _type 
                                + ", system: "  + _system 
                                + ", name: "    + _name
                                + ", value: "   + _value.asDouble().ToString("E15")
                                + ", offset: "  + _offset.asDouble().ToString("E15")
                                + ", unit: "    + _unit 
                                + ", version: " + _version 
                                + ", valid: "   + valid;  
            return s;
        }
        
        /// <summary>
        /// The type method returns the unit type.
        /// </summary>
        /// <returns>
        /// The unit type.
        /// </returns>
        public string type()
        {
            return _type;
        }

        /// <summary>
        /// The unit method returns the unit SI component units.
        /// </summary>
        /// <returns>
        /// The unit SI components.
        /// </returns>
        public string unit()
        {
            return _unit;
        }

        /// <summary>
        /// The valid method returns true if the unit is OK to use, 
        ///  false otherwise.
        /// </summary>
        /// <returns>
        /// True if the unit is valid.
        /// </returns>
        public bool valid()
        {
            return _valid;
        }

        /// <summary>
        /// The value method returns the unit value.
        /// </summary>
        /// <returns>
        /// The unit value.
        /// </returns>
        public Value value()
        {
            return _value;
        }

        /// <summary>
        /// The version method return the software version as a string.
        /// </summary>
        /// <returns>
        /// The software version as a string e.g. "1.0"
        /// </returns>
        public string version()
        {
            return _version;
        }
    }
}
// EOF