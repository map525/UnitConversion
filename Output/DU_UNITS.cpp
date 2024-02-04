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
// File DU_UNITS.cpp
//
// Class for derived units.
//
// Derived units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"DU_UNITS.hpp"

DU_UNITS& DU_UNITS::Instance(void)
{
    static DU_UNITS singleton;
    return singleton;
}

DU_UNITS::DU_UNITS(void) : ConstantGroup("DerivedUnits", "1.0")
{
   _map["becquerel"] = UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   _map["Bq"] = UBASE("SI", "Bq", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   _map["coulomb"] = UBASE("SI", "coulomb", 1.000000000000000E+00, "A.s", "I.T", "1.0");
   _map["C"] = UBASE("SI", "C", 1.000000000000000E+00, "A.s", "I.T", "1.0");
   _map["farad"] = UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/Kg.m2", "T4.I2/M.L2", "1.0");
   _map["F"] = UBASE("SI", "F", 1.000000000000000E+00, "s4.A2/Kg.m2", "T4.I2/M.L2", "1.0");
   _map["gray"] = UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   _map["Gy"] = UBASE("SI", "Gy", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   _map["henry"] = UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   _map["H"] = UBASE("SI", "H", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   _map["hertz"] = UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   _map["Hz"] = UBASE("SI", "Hz", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   _map["joule"] = UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["J"] = UBASE("SI", "J", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["katal"] = UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0");
   _map["kt"] = UBASE("SI", "kt", 1.000000000000000E+00, "mol/s", "N/T", "1.0");
   _map["lumen"] = UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0");
   _map["lm"] = UBASE("SI", "lm", 1.000000000000000E+00, "cd.sr", "J.W", "1.0");
   _map["lux"] = UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0");
   _map["lx"] = UBASE("SI", "lx", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0");
   _map["newton"] = UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   _map["N"] = UBASE("SI", "N", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   _map["ohm"] = UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   _map["w"] = UBASE("SI", "w", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   _map["pascal"] = UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   _map["Pa"] = UBASE("SI", "Pa", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   _map["poiseuille"] = UBASE("SI", "poiseuille", 1.000000000000000E+00, "kg/m.s2", "M/L.T", "1.0");
   _map["Po"] = UBASE("SI", "Po", 1.000000000000000E+00, "kg/m.s2", "M/L.T", "1.0");
   _map["siemens"] = UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   _map["S"] = UBASE("SI", "S", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   _map["sievert"] = UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   _map["Sv"] = UBASE("SI", "Sv", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   _map["tesla"] = UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A2", "M/T2.I", "1.0");
   _map["T"] = UBASE("SI", "T", 1.000000000000000E+00, "kg/s2.A2", "M/T2.I", "1.0");
   _map["volt"] = UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   _map["V"] = UBASE("SI", "V", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   _map["watt"] = UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   _map["W"] = UBASE("SI", "W", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   _map["weber"] = UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   _map["Wb"] = UBASE("SI", "Wb", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
}

// EOF
