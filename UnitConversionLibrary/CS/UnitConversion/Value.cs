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
// File Value.cs
//
// Class defining a value that can be a long int or double. Most unit values
// (conversion  factors) are double precision numbers. However some 'units' 
// such as counts (e.g. dozen) and bytes are integers. The Value class stores
// unit values (and offsets) are doubles or 64-bit unsigned integers. The class
// contains methods for returning the unit value (or offset) as either a double
// or integer.   
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System;

    /// <summary>
    /// Class defining a value that can be a long int or double.
    /// </summary>
    public class Value
    {
        /// <value>
        /// Enumeration defining the type of value stored (double or
        /// 64-bit integer).
        /// </value>
        public enum TYPE { DOUBLE, UINT, INVALID };

        /// <value>
        /// Type of value stored (double or long). 
        /// </value>
        private TYPE _type;

        /// <value>
        /// Byte buffer for storing the value.  
        /// </value>
        private byte[] _value;

        /// <summary>
        /// Default constructor. Type stored is set to INVALID but byte buffer
        /// is allocated.
        /// </summary>
        public Value()
        {
            _value = new byte[8];
            _type  = TYPE.INVALID;
        }

        /// <summary>
        /// Constructor. The input value (a double) is stored and the type 
        /// is set to DOUBLE.
        /// </summary>
        /// <param><c>v</c> (input) value as a double</param>
        public Value(double v)
        {
            _value = BitConverter.GetBytes(v);
            _type  = TYPE.DOUBLE;
        }

        /// <summary>
        /// Constructor. The input value (a ulong) is stored and the type 
        /// is set to ulong.
        /// </summary>
        /// <param><c>v</c> (input) value as a long</param>
        public Value(ulong v)
        {
            _value = BitConverter.GetBytes(v);
            _type  = TYPE.UINT;
        }

        /// <summary>
        /// Copy constructor. 
        /// </summary>
        /// <param><c>v</c> (input) the Value object to make a copy of.</param>
        public Value(Value other)
        {
            _value = new byte[other._value.Length];
            Array.Copy(other._value, 0, _value, 0, _value.Length);
            _type = other._type;
        }

        /// <summary>
        /// The asDouble method returns the stored value as a double. 
        /// </summary>
        /// <returns>
        /// The value as a double.
        /// </returns>
        public double asDouble()
        {
            if (_type == TYPE.DOUBLE)
            {
                return BitConverter.ToDouble(_value, 0);
            }
            else if (_type == TYPE.UINT)
            {
                return (double)BitConverter.ToUInt64(_value, 0);
            }
            else
            {
                return Double.NaN;
            }
        }

        /// <summary>
        /// The asInteger method returns the stored value as a ulong. 
        /// </summary>
        /// <returns>
        /// The value as a ulong.
        /// </returns>
        public ulong asInteger()
        {
            if (_type == TYPE.DOUBLE)
            {
                return (ulong)BitConverter.ToDouble(_value, 0);
            }
            else if (_type == TYPE.UINT)
            {
                return BitConverter.ToUInt64(_value, 0);
            }
            else
            {
                return 0;
            }
        }

        /// <summary>
        /// The dvalue method returns the stored value as a double. 
        /// </summary>
        /// <returns>
        /// The value as a double.
        /// </returns>
        public double dvalue()
        {
            return BitConverter.ToDouble(_value, 0);
        }

        /// <summary>
        /// The ivalue method returns the stored value as a ulong. 
        /// </summary>
        /// <returns>
        /// The value as a ulong.
        /// </returns>
        public ulong ivalue()
        {
            return BitConverter.ToUInt64(_value, 0);
        }

        /// <summary>
        /// The type method returns the type (DOUBLE or UINT) of the store value. 
        /// </summary>
        /// <returns>
        /// The type of the stored value.
        /// </returns>
        public TYPE type()
        {
            return _type;
        }

        /// <summary>
        /// The value method stores the input double as a double in the class.
        /// The existing value is lost and the type is set to DOUBLE.
        /// </summary>
        /// <param><c>v</c> (input) the double to store in the class object.</param>
        public void value(double v)
        {
            _value = BitConverter.GetBytes(v);
            _type  = TYPE.DOUBLE;
        }

        /// <summary>
        /// The value method stores the input long as a ulong in the class. The
        /// existing value is lost and the type is set to UINT.
        /// </summary>
        /// <param><c>v</c> (input) ulong to store in the class object.</param>
        public void value(ulong v)
        {
            _value = BitConverter.GetBytes(v);
            _type  = TYPE.UINT;
        }

        /// <summary>
        /// The valid method checks that a valid type (double or ulong) value
        /// is contained in the class. If so, true is returned, otherwise false.
        /// </summary>
        /// <returns>
        /// True if a value is stored in the class, false otherwise.
        /// </returns>
        public bool valid()
        {
            if (_type == TYPE.INVALID) return false;
            else return true;
        }
    }
}
// EOF