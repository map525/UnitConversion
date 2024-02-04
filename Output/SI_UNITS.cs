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
// File SI_UNITS.cs
//
// Class for SI units.
//
// SI units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class SI_UNITS : ConstantGroup
   {
       private static SI_UNITS singleton_ = new SI_UNITS();

       public static SI_UNITS Instance()
       {
           return singleton_;
       }

       private SI_UNITS() : base("SI", "1.0")
       {
           _map = new Dictionary<string, UBASE>();

          _map.Add("kilogram",   new UBASE("SI", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0"));
          _map.Add("kg",   new UBASE("SI", "kg", 1.000000000000000E+00, "kg", "M", "1.0"));
          _map.Add("meter",   new UBASE("SI", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          _map.Add("m",   new UBASE("SI", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          _map.Add("second",   new UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0"));
          _map.Add("s",   new UBASE("SI", "s", 1.000000000000000E+00, "s", "T", "1.0"));
          _map.Add("kelvin",   new UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0"));
          _map.Add("K",   new UBASE("SI", "K", 1.000000000000000E+00, "K", "Q", "1.0"));
          _map.Add("mole",   new UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0"));
          _map.Add("mol",   new UBASE("SI", "mol", 1.000000000000000E+00, "mol", "N", "1.0"));
          _map.Add("ampere",   new UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
          _map.Add("A",   new UBASE("SI", "A", 1.000000000000000E+00, "A", "I", "1.0"));
          _map.Add("candela",   new UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0"));
          _map.Add("cd",   new UBASE("SI", "cd", 1.000000000000000E+00, "cd", "J", "1.0"));
          _map.Add("radian",   new UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0"));
          _map.Add("rad",   new UBASE("SI", "rad", 1.000000000000000E+00, "rad", "a", "1.0"));
          _map.Add("steradian",   new UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0"));
          _map.Add("sr",   new UBASE("SI", "sr", 1.000000000000000E+00, "sr", "W", "1.0"));
          _map.Add("unitless",   new UBASE("SI", "unitless", 1.000000000000000E+00, "ct", "O", "1.0"));
          _map.Add("ct",   new UBASE("SI", "ct", 1.000000000000000E+00, "ct", "O", "1.0"));
          _map.Add("byte",   new UBASE("SI", "byte", 1.000000000000000E+00, "B", "B", "1.0"));
          _map.Add("b",   new UBASE("SI", "b", 1.000000000000000E+00, "B", "B", "1.0"));
          _map.Add("pixel",   new UBASE("SI", "pixel", 1.000000000000000E+00, "p", "p", "1.0"));
          _map.Add("pix",   new UBASE("SI", "pix", 1.000000000000000E+00, "p", "p", "1.0"));
          _map.Add("voxel",   new UBASE("SI", "voxel", 1.000000000000000E+00, "v", "v", "1.0"));
          _map.Add("vox",   new UBASE("SI", "vox", 1.000000000000000E+00, "v", "v", "1.0"));
      }


   }
}
// EOF
