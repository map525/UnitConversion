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
// File WGS84_MODEL.cpp
//
// Class for WGS84 model.
//
// WGS84 Model.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"WGS84_MODEL.hpp"

WGS84_MODEL& WGS84_MODEL::Instance(void)
{
    static WGS84_MODEL singleton;
    return singleton;
}

WGS84_MODEL::WGS84_MODEL(void) : ConstantGroup("WGS84_Model", "1.0")
{
   _map["equatorial-radius"] = UBASE("WGS84", "equatorial-radius", 6.378137000000000E+06, "m", "L", "1.0");
   _map["a"] = UBASE("WGS84", "a", 6.378137000000000E+06, "m", "L", "1.0");
   _map["inverse-flattening"] = UBASE("WGS84", "inverse-flattening", 2.982572235630000E+02, "O", "O", "1.0");
   _map["if"] = UBASE("WGS84", "if", 2.982572235630000E+02, "O", "O", "1.0");
   _map["flattening"] = UBASE("WGS84", "flattening", 3.352810664747480E-03, "O", "O", "1.0");
   _map["f"] = UBASE("WGS84", "f", 3.352810664747480E-03, "O", "O", "1.0");
   _map["angular-velocity"] = UBASE("WGS84", "angular-velocity", 7.292110000000000E-05, "rad/s", "a/T", "1.0");
   _map["w"] = UBASE("WGS84", "w", 7.292110000000000E-05, "rad/s", "a/T", "1.0");
   _map["polar-radius"] = UBASE("WGS84", "polar-radius", 6.356752314245180E+06, "m", "L", "1.0");
   _map["b"] = UBASE("WGS84", "b", 6.356752314245180E+06, "m", "L", "1.0");
   _map["eccentricity-squared"] = UBASE("WGS84", "eccentricity-squared", 6.694379990141330E-03, "O", "O", "1.0");
   _map["e2"] = UBASE("WGS84", "e2", 6.694379990141330E-03, "O", "O", "1.0");
   _map["eccentricity"] = UBASE("WGS84", "eccentricity", 8.181919084262160E-02, "O", "O", "1.0");
   _map["e"] = UBASE("WGS84", "e", 8.181919084262160E-02, "O", "O", "1.0");
   _map["equatorial-gravity"] = UBASE("WGS84", "equatorial-gravity", 9.780325335900000E+00, "m/s2", "L/T2", "1.0");
   _map["ge"] = UBASE("WGS84", "ge", 9.780325335900000E+00, "m/s2", "L/T2", "1.0");
   _map["polar-gravity"] = UBASE("WGS84", "polar-gravity", 9.832184937800000E+00, "m/s2", "L/T2", "1.0");
   _map["gp"] = UBASE("WGS84", "gp", 9.832184937800000E+00, "m/s2", "L/T2", "1.0");
   _map["gravity-constant"] = UBASE("WGS84", "gravity-constant", 1.931852646396040E-03, "O", "O", "1.0");
   _map["cg"] = UBASE("WGS84", "cg", 1.931852646396040E-03, "O", "O", "1.0");
}

// EOF
