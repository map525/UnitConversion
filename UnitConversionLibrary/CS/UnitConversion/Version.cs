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
// File Version.cs
//
// Software version information. The software version must match the version
// of the unit data contained in the Excel spreadsheet. Checks methods are 
// provided to verify unit and software versions are the same. The UBASE class
// contains the version number provided in the generated unit data code. This
// is compared to the version information contained in this class. The check 
// method is in the following classes: BaseSystem, ConstantGroup, TypeGroup,
// and Value.  
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversion
{
    using System;

    /// <summary>
    /// Software version information.
    /// </summary>
    public class Version
    {
        /// <value>
        /// The one and only Version object.
        /// </value>
        private static Version singleton_ = new Version();

        /// <value>
        /// Flag indicating that software version information is valid.
        /// </value>
        private bool _valid;

        /// <value>
        /// The version information for the software.
        /// </value>
        private string _version;

        /// <summary>
        /// The Instance static method creates and instance of the version 
        /// class. The Version class is a singleton and is used to return the 
        /// software version for the UnintConversion library.
        /// </summary>
        /// <returns>
        /// A Version object.
        /// </returns>
        public static Version Instance()
        {
            return singleton_;
        }

        /// <summary>
        /// Default constructor (private, singleton) for the Version class. It 
        /// initializes the version class member with the software version
        /// information.
        /// </summary>
        private Version() 
        {
            _version = "1.0";
            _valid = true;
        }

        /// <summary>
        /// Returns true if the software version information is valid.
        /// </summary>
        /// <returns>
        /// True if the software version information is valid, false otherwise.
        /// </returns>
        public bool valid()
        {
            return _valid;
        }

        /// <summary>
        /// The version method return the software version as a string.
        /// </summary>
        /// <returns>
        /// The software version as a string e.g. "1.0".
        /// </returns>
        public string version() 
        {
           return _version;
        }
    }
}
// EOF