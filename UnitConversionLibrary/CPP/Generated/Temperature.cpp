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
// File Temperature.cpp
//
// Units for Temperature
//
// Class for Temperature units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Temperature.hpp"

Temperature& Temperature::Instance(void)
{
    static Temperature singleton;
    return singleton;
}

Temperature::Temperature(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["French[reaumur]"] = UBASE("French", "reaumur", 1.250000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02);
   unit["French[oRe]"] = UBASE("French", "reaumur", 1.250000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02);
   unit["Imperial[fahrenheit]"] = UBASE("Imperial", "fahrenheit", 5.555555555555560E-01, "K", "Q", "1.0", 2.553722222222220E+02);
   unit["Imperial[oF]"] = UBASE("Imperial", "fahrenheit", 5.555555555555560E-01, "K", "Q", "1.0", 2.553722222222220E+02);
   unit["Imperial[rankine]"] = UBASE("Imperial", "rankine", 5.555555555555560E-01, "K", "Q", "1.0", 0.000000000000000E+00);
   unit["Imperial[oR]"] = UBASE("Imperial", "rankine", 5.555555555555560E-01, "K", "Q", "1.0", 0.000000000000000E+00);
   unit["INT[celsius]"] = UBASE("INT", "celsius", 1.000000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02);
   unit["INT[oC]"] = UBASE("INT", "celsius", 1.000000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02);
   unit["SI[kelvin]"] = UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00);
   unit["SI[oK]"] = UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00);
   unit["SI[inferno]"] = UBASE("SI", "inferno", 1.000000000000000E+09, "K", "Q", "1.0", 0.000000000000000E+00);
   unit["SI[volt(thermal)]"] = UBASE("SI", "volt(thermal)", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00);
   _map["temperature"] = BaseSystem("temperature", unit, "1.0");

   unit.clear();


}

// EOF
