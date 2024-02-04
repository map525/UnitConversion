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
// File Computer.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Computer extends SingleSystem
{
   private static Computer singleton_ = new Computer();

   public static Computer Instance()
   {
      return singleton_;
   }

   private Computer()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("Computer[bit]",   new UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0"));
      unit.put("Computer[b]",   new UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0"));
      unit.put("Computer[byte]",   new UBASE("Computer", "byte", 1L, "byte", "byte", "1.0"));
      unit.put("Computer[o]",   new UBASE("Computer", "byte", 1L, "byte", "byte", "1.0"));
      unit.put("Computer[B]",   new UBASE("Computer", "byte", 1L, "byte", "byte", "1.0"));
      unit.put("Computer[octet]",   new UBASE("Computer", "byte", 1L, "byte", "byte", "1.0"));
      unit.put("Computer[character]",   new UBASE("Computer", "character", 1L, "byte", "byte", "1.0"));
      unit.put("Computer[ch]",   new UBASE("Computer", "character", 1L, "byte", "byte", "1.0"));
      unit.put("Computer[nibble]",   new UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0"));
      unit.put("Computer[ni]",   new UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0"));
      unit.put("Computer[nybble]",   new UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0"));
      unit.put("Computer[ny]",   new UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0"));
      unit.put("Computer[quad]",   new UBASE("Computer", "quad", 4L, "byte", "byte", "1.0"));
      unit.put("Computer[q]",   new UBASE("Computer", "quad", 4L, "byte", "byte", "1.0"));
      unit.put("Computer[rune]",   new UBASE("Computer", "rune", 2L, "byte", "byte", "1.0"));
      unit.put("Computer[r]",   new UBASE("Computer", "rune", 2L, "byte", "byte", "1.0"));
      unit.put("Computer[word]",   new UBASE("Computer", "word", 4L, "byte", "byte", "1.0"));
      unit.put("Computer[wd]",   new UBASE("Computer", "word", 4L, "byte", "byte", "1.0"));
      unit.put("Computer[kilobyte]",   new UBASE("Computer", "kilobyte", 1024L, "byte", "byte", "1.0"));
      unit.put("Computer[KB]",   new UBASE("Computer", "kilobyte", 1024L, "byte", "byte", "1.0"));
      unit.put("Computer[megabyte]",   new UBASE("Computer", "megabyte", 1048576L, "byte", "byte", "1.0"));
      unit.put("Computer[MB]",   new UBASE("Computer", "megabyte", 1048576L, "byte", "byte", "1.0"));
      unit.put("Computer[gigabyte]",   new UBASE("Computer", "gigabyte", 1073741824L, "byte", "byte", "1.0"));
      unit.put("Computer[GB]",   new UBASE("Computer", "gigabyte", 1073741824L, "byte", "byte", "1.0"));
      unit.put("Computer[terabyte]",   new UBASE("Computer", "terabyte", 1099511627776L, "byte", "byte", "1.0"));
      unit.put("Computer[TB]",   new UBASE("Computer", "terabyte", 1099511627776L, "byte", "byte", "1.0"));
      unit.put("Computer[petabyte]",   new UBASE("Computer", "petabyte", 1125899906842620L, "byte", "byte", "1.0"));
      unit.put("Computer[PB]",   new UBASE("Computer", "petabyte", 1125899906842620L, "byte", "byte", "1.0"));
      _map.put("computer",   new BaseSystem("computer", unit, "1.0"));

      unit.clear();


      unit.put("Computer[pixel]",   new UBASE("Computer", "pixel", 1L, "pixel", "pixel", "1.0"));
      _map.put("screenResolution",   new BaseSystem("screenResolution", unit, "1.0"));

      unit.clear();


      unit.put("Computer[voxel]",   new UBASE("Computer", "voxel", 1L, "voxel", "voxel", "1.0"));
      _map.put("voxel",   new BaseSystem("voxel", unit, "1.0"));

      unit.clear();


   }

}
// EOF
