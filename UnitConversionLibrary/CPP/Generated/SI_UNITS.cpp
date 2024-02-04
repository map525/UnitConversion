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
// File SI_UNITS.cpp
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

#include"SI_UNITS.hpp"

SI_UNITS& SI_UNITS::Instance(void)
{
    static SI_UNITS singleton;
    return singleton;
}

SI_UNITS::SI_UNITS(void) : ConstantGroup("SI", "1.0")
{
   _map["kilogram"] = UBASE("SI", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0");
   _map["kg"] = UBASE("SI", "kg", 1.000000000000000E+00, "kg", "M", "1.0");
   _map["meter"] = UBASE("SI", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   _map["m"] = UBASE("SI", "m", 1.000000000000000E+00, "m", "L", "1.0");
   _map["second"] = UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0");
   _map["s"] = UBASE("SI", "s", 1.000000000000000E+00, "s", "T", "1.0");
   _map["kelvin"] = UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0");
   _map["K"] = UBASE("SI", "K", 1.000000000000000E+00, "K", "Q", "1.0");
   _map["mole"] = UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0");
   _map["mol"] = UBASE("SI", "mol", 1.000000000000000E+00, "mol", "N", "1.0");
   _map["ampere"] = UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0");
   _map["A"] = UBASE("SI", "A", 1.000000000000000E+00, "A", "I", "1.0");
   _map["candela"] = UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0");
   _map["cd"] = UBASE("SI", "cd", 1.000000000000000E+00, "cd", "J", "1.0");
   _map["radian"] = UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0");
   _map["rad"] = UBASE("SI", "rad", 1.000000000000000E+00, "rad", "a", "1.0");
   _map["steradian"] = UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0");
   _map["sr"] = UBASE("SI", "sr", 1.000000000000000E+00, "sr", "W", "1.0");
   _map["unitless"] = UBASE("SI", "unitless", 1.000000000000000E+00, "ct", "O", "1.0");
   _map["ct"] = UBASE("SI", "ct", 1.000000000000000E+00, "ct", "O", "1.0");
   _map["byte"] = UBASE("SI", "byte", 1.000000000000000E+00, "B", "B", "1.0");
   _map["b"] = UBASE("SI", "b", 1.000000000000000E+00, "B", "B", "1.0");
   _map["pixel"] = UBASE("SI", "pixel", 1.000000000000000E+00, "p", "p", "1.0");
   _map["pix"] = UBASE("SI", "pix", 1.000000000000000E+00, "p", "p", "1.0");
   _map["voxel"] = UBASE("SI", "voxel", 1.000000000000000E+00, "v", "v", "1.0");
   _map["vox"] = UBASE("SI", "vox", 1.000000000000000E+00, "v", "v", "1.0");
}

// EOF
