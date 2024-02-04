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
// File Wavenumber.cpp
//
// Units for Wavenumber
//
// Class for Wavenumber units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Wavenumber.hpp"

Wavenumber& Wavenumber::Instance(void)
{
    static Wavenumber singleton;
    return singleton;
}

Wavenumber::Wavenumber(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["cgs[balmer]"] = UBASE("cgs", "balmer", 1.000000000000000E+02, "1/m", "1/L", "1.0");
   unit["Imperial[count]"] = UBASE("Imperial", "count", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["Imperial[ct]"] = UBASE("Imperial", "count", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["Imperial[gauge]"] = UBASE("Imperial", "gauge", 2.624671916010500E+01, "1/m", "1/L", "1.0");
   unit["Imperial[ga]"] = UBASE("Imperial", "gauge", 2.624671916010500E+01, "1/m", "1/L", "1.0");
   unit["Imperial[mesh]"] = UBASE("Imperial", "mesh", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["INT[dots-per-inch]"] = UBASE("INT", "dots-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["INT[dpi]"] = UBASE("INT", "dots-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["INT[points-per-inch]"] = UBASE("INT", "points-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["INT[ppi]"] = UBASE("INT", "points-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["INT[millimeter]"] = UBASE("INT", "millimeter", 1.000000000000000E-03, "1/m", "1/L", "1.0");
   unit["INT[mm]"] = UBASE("INT", "millimeter", 1.000000000000000E-03, "1/m", "1/L", "1.0");
   unit["INT[tracks-per-inch]"] = UBASE("INT", "tracks-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["INT[TPI]"] = UBASE("INT", "tracks-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0");
   unit["Scientific[kayser]"] = UBASE("Scientific", "kayser", 1.000000000000000E+02, "1/m", "1/L", "1.0");
   unit["Scientific[Ky]"] = UBASE("Scientific", "kayser", 1.000000000000000E+02, "1/m", "1/L", "1.0");
   unit["Scientific[permicron]"] = UBASE("Scientific", "permicron", 1.000000000000000E+06, "1/m", "1/L", "1.0");
   unit["SI[dioptre]"] = UBASE("SI", "dioptre", 1.000000000000000E+00, "1/m", "1/L", "1.0");
   unit["SI[d]"] = UBASE("SI", "dioptre", 1.000000000000000E+00, "1/m", "1/L", "1.0");
   unit["SI[reciprocal-meter]"] = UBASE("SI", "reciprocal-meter", 1.000000000000000E+00, "1/m", "1/L", "1.0");
   unit["SI[1/m]"] = UBASE("SI", "reciprocal-meter", 1.000000000000000E+00, "1/m", "1/L", "1.0");
   unit["Scientific[reciprocal-foot]"] = UBASE("Scientific", "reciprocal-foot", 3.280839895013120E+00, "1/m", "1/L", "1.0");
   unit["Scientific[1/ft]"] = UBASE("Scientific", "reciprocal-foot", 3.280839895013120E+00, "1/m", "1/L", "1.0");
   _map["wavenumber"] = BaseSystem("wavenumber", unit, "1.0");

   unit.clear();


}

// EOF
