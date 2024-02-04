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
// File Computer.cs
//
// Units for Computer
//
// Class for Computer units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class Computer : SingleSystem
   {
       private static Computer singleton_ = new Computer();

       public static Computer Instance()
       {
           return singleton_;
       }

       private Computer() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("Computer[bit]",   new UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0"));
          unit.Add("Computer[b]",   new UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0"));
          unit.Add("Computer[byte]",   new UBASE("Computer", "byte", 1, "byte", "byte", "1.0"));
          unit.Add("Computer[o]",   new UBASE("Computer", "byte", 1, "byte", "byte", "1.0"));
          unit.Add("Computer[B]",   new UBASE("Computer", "byte", 1, "byte", "byte", "1.0"));
          unit.Add("Computer[octet]",   new UBASE("Computer", "byte", 1, "byte", "byte", "1.0"));
          unit.Add("Computer[character]",   new UBASE("Computer", "character", 1, "byte", "byte", "1.0"));
          unit.Add("Computer[ch]",   new UBASE("Computer", "character", 1, "byte", "byte", "1.0"));
          unit.Add("Computer[nibble]",   new UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0"));
          unit.Add("Computer[ni]",   new UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0"));
          unit.Add("Computer[nybble]",   new UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0"));
          unit.Add("Computer[ny]",   new UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0"));
          unit.Add("Computer[quad]",   new UBASE("Computer", "quad", 4, "byte", "byte", "1.0"));
          unit.Add("Computer[q]",   new UBASE("Computer", "quad", 4, "byte", "byte", "1.0"));
          unit.Add("Computer[rune]",   new UBASE("Computer", "rune", 2, "byte", "byte", "1.0"));
          unit.Add("Computer[r]",   new UBASE("Computer", "rune", 2, "byte", "byte", "1.0"));
          unit.Add("Computer[word]",   new UBASE("Computer", "word", 4, "byte", "byte", "1.0"));
          unit.Add("Computer[wd]",   new UBASE("Computer", "word", 4, "byte", "byte", "1.0"));
          unit.Add("Computer[kilobyte]",   new UBASE("Computer", "kilobyte", 1024, "byte", "byte", "1.0"));
          unit.Add("Computer[KB]",   new UBASE("Computer", "kilobyte", 1024, "byte", "byte", "1.0"));
          unit.Add("Computer[megabyte]",   new UBASE("Computer", "megabyte", 1048576, "byte", "byte", "1.0"));
          unit.Add("Computer[MB]",   new UBASE("Computer", "megabyte", 1048576, "byte", "byte", "1.0"));
          unit.Add("Computer[gigabyte]",   new UBASE("Computer", "gigabyte", 1073741824, "byte", "byte", "1.0"));
          unit.Add("Computer[GB]",   new UBASE("Computer", "gigabyte", 1073741824, "byte", "byte", "1.0"));
          unit.Add("Computer[terabyte]",   new UBASE("Computer", "terabyte", 1099511627776, "byte", "byte", "1.0"));
          unit.Add("Computer[TB]",   new UBASE("Computer", "terabyte", 1099511627776, "byte", "byte", "1.0"));
          unit.Add("Computer[petabyte]",   new UBASE("Computer", "petabyte", 1125899906842620, "byte", "byte", "1.0"));
          unit.Add("Computer[PB]",   new UBASE("Computer", "petabyte", 1125899906842620, "byte", "byte", "1.0"));
          _map.Add("computer",   new BaseSystem("computer", unit, "1.0"));

          unit.Clear();


          unit.Add("Computer[pixel]",   new UBASE("Computer", "pixel", 1, "pixel", "pixel", "1.0"));
          _map.Add("screenResolution",   new BaseSystem("screenResolution", unit, "1.0"));

          unit.Clear();


          unit.Add("Computer[voxel]",   new UBASE("Computer", "voxel", 1, "voxel", "voxel", "1.0"));
          _map.Add("voxel",   new BaseSystem("voxel", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
