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
// File Computer.cpp
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

#include"Computer.hpp"

Computer& Computer::Instance(void)
{
    static Computer singleton;
    return singleton;
}

Computer::Computer(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["Computer[bit]"] = UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0");
   unit["Computer[b]"] = UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0");
   unit["Computer[byte]"] = UBASE("Computer", "byte", 1ULL, "byte", "byte", "1.0");
   unit["Computer[o]"] = UBASE("Computer", "byte", 1ULL, "byte", "byte", "1.0");
   unit["Computer[B]"] = UBASE("Computer", "byte", 1ULL, "byte", "byte", "1.0");
   unit["Computer[octet]"] = UBASE("Computer", "byte", 1ULL, "byte", "byte", "1.0");
   unit["Computer[character]"] = UBASE("Computer", "character", 1ULL, "byte", "byte", "1.0");
   unit["Computer[ch]"] = UBASE("Computer", "character", 1ULL, "byte", "byte", "1.0");
   unit["Computer[nibble]"] = UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0");
   unit["Computer[ni]"] = UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0");
   unit["Computer[nybble]"] = UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0");
   unit["Computer[ny]"] = UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0");
   unit["Computer[quad]"] = UBASE("Computer", "quad", 4ULL, "byte", "byte", "1.0");
   unit["Computer[q]"] = UBASE("Computer", "quad", 4ULL, "byte", "byte", "1.0");
   unit["Computer[rune]"] = UBASE("Computer", "rune", 2ULL, "byte", "byte", "1.0");
   unit["Computer[r]"] = UBASE("Computer", "rune", 2ULL, "byte", "byte", "1.0");
   unit["Computer[word]"] = UBASE("Computer", "word", 4ULL, "byte", "byte", "1.0");
   unit["Computer[wd]"] = UBASE("Computer", "word", 4ULL, "byte", "byte", "1.0");
   unit["Computer[kilobyte]"] = UBASE("Computer", "kilobyte", 1024ULL, "byte", "byte", "1.0");
   unit["Computer[KB]"] = UBASE("Computer", "kilobyte", 1024ULL, "byte", "byte", "1.0");
   unit["Computer[megabyte]"] = UBASE("Computer", "megabyte", 1048576ULL, "byte", "byte", "1.0");
   unit["Computer[MB]"] = UBASE("Computer", "megabyte", 1048576ULL, "byte", "byte", "1.0");
   unit["Computer[gigabyte]"] = UBASE("Computer", "gigabyte", 1073741824ULL, "byte", "byte", "1.0");
   unit["Computer[GB]"] = UBASE("Computer", "gigabyte", 1073741824ULL, "byte", "byte", "1.0");
   unit["Computer[terabyte]"] = UBASE("Computer", "terabyte", 1099511627776ULL, "byte", "byte", "1.0");
   unit["Computer[TB]"] = UBASE("Computer", "terabyte", 1099511627776ULL, "byte", "byte", "1.0");
   unit["Computer[petabyte]"] = UBASE("Computer", "petabyte", 1125899906842620ULL, "byte", "byte", "1.0");
   unit["Computer[PB]"] = UBASE("Computer", "petabyte", 1125899906842620ULL, "byte", "byte", "1.0");
   _map["computer"] = BaseSystem("computer", unit, "1.0");

   unit.clear();


   unit["Computer[pixel]"] = UBASE("Computer", "pixel", 1ULL, "pixel", "pixel", "1.0");
   _map["screenResolution"] = BaseSystem("screenResolution", unit, "1.0");

   unit.clear();


   unit["Computer[voxel]"] = UBASE("Computer", "voxel", 1ULL, "voxel", "voxel", "1.0");
   _map["voxel"] = BaseSystem("voxel", unit, "1.0");

   unit.clear();


}

// EOF
