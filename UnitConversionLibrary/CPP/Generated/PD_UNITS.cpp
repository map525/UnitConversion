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
// File PD_UNITS.cpp
//
// Class for physical definitions.
//
// Physical Definitions.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"PD_UNITS.hpp"

PD_UNITS& PD_UNITS::Instance(void)
{
    static PD_UNITS singleton;
    return singleton;
}

PD_UNITS::PD_UNITS(void) : ConstantGroup("PhysicalDefinitions", "1.0")
{
   _map["atmosphere(standard)"] = UBASE("Imperial", "atmosphere(standard)", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   _map["atm"] = UBASE("Imperial", "atm", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   _map["bar"] = UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   _map["minute"] = UBASE("INT", "minute", 6.000000000000000E+01, "s", "T", "1.0");
   _map["min"] = UBASE("INT", "min", 6.000000000000000E+01, "s", "T", "1.0");
   _map["hour"] = UBASE("INT", "hour", 3.600000000000000E+03, "s", "T", "1.0");
   _map["hr"] = UBASE("INT", "hr", 3.600000000000000E+03, "s", "T", "1.0");
   _map["day"] = UBASE("Time", "day", 8.640000000000000E+04, "s", "T", "1.0");
   _map["year(common)"] = UBASE("Time", "year(common)", 3.153600000000000E+07, "s", "T", "1.0");
   _map["yr(common)"] = UBASE("Time", "yr(common)", 3.153600000000000E+07, "s", "T", "1.0");
   _map["year(Julian)"] = UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0");
   _map["yr(Julian)"] = UBASE("Time", "yr(Julian)", 3.155760000000000E+07, "s", "T", "1.0");
   _map["liter"] = UBASE("INT", "liter", 1.000000000000000E-03, "m3", "L3", "1.0");
   _map["l"] = UBASE("INT", "l", 1.000000000000000E-03, "m3", "L3", "1.0");
   _map["kg-water"] = UBASE("Scientific", "kg-water", 1.000000000000000E-03, "m3", "L3", "1.0");
   _map["kgH2O"] = UBASE("Scientific", "kgH2O", 1.000000000000000E-03, "m3", "L3", "1.0");
   _map["ream"] = UBASE("INT", "ream", 5.000000000000000E+02, "count", "O", "1.0");
   _map["ream(old)"] = UBASE("UK, US", "ream(old)", 4.800000000000000E+02, "count", "O", "1.0");
   _map["standard-gravity"] = UBASE("Scientific", "standard-gravity", 9.806650000000000E+00, "m/s2", "L/T2", "1.0");
   _map["gN"] = UBASE("Scientific", "gN", 9.806650000000000E+00, "m/s2", "L/T2", "1.0");
   _map["carat"] = UBASE("INT", "carat", 2.000000000000000E-04, "kg", "M", "1.0");
   _map["ct"] = UBASE("INT", "ct", 2.000000000000000E-04, "kg", "M", "1.0");
   _map["BTU(IT)"] = UBASE("UK", "BTU(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["Btu"] = UBASE("UK", "Btu", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["thermochemical-calorie"] = UBASE("Scientific", "thermochemical-calorie", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["cal"] = UBASE("Scientific", "cal", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["international-nautical-mile"] = UBASE("INT", "international-nautical-mile", 1.852000000000000E+03, "m", "L", "1.0");
   _map["ni"] = UBASE("INT", "ni", 1.852000000000000E+03, "m", "L", "1.0");
   _map["international-steam-table-calorie"] = UBASE("INT", "international-steam-table-calorie", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["cal(IST)"] = UBASE("INT", "cal(IST)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["roentgen"] = UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0");
   _map["R"] = UBASE("Scientific", "R", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0");
   _map["dozen"] = UBASE("UK, US", "dozen", 1.200000000000000E+01, "count", "O", "1.0");
   _map["doz"] = UBASE("UK, US", "doz", 1.200000000000000E+01, "count", "O", "1.0");
   _map["millimeter"] = UBASE("SI", "millimeter", 1.000000000000000E-03, "m", "L", "1.0");
   _map["mm"] = UBASE("SI", "mm", 1.000000000000000E-03, "m", "L", "1.0");
   _map["centimeter"] = UBASE("SI", "centimeter", 1.000000000000000E-02, "m", "L", "1.0");
   _map["cm"] = UBASE("SI", "cm", 1.000000000000000E-02, "m", "L", "1.0");
   _map["hertz"] = UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   _map["Hz"] = UBASE("SI", "Hz", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   _map["dyne"] = UBASE("cgs", "dyne", 1.000000000000000E-05, "kg/m.s2", "M.L/T2", "1.0");
   _map["dyn"] = UBASE("cgs", "dyn", 1.000000000000000E-05, "kg/m.s2", "M.L/T2", "1.0");
   _map["decimeter"] = UBASE("SI", "decimeter", 1.000000000000000E-01, "m", "L", "1.0");
   _map["dm"] = UBASE("SI", "dm", 1.000000000000000E-01, "m", "L", "1.0");
   _map["gram"] = UBASE("cgs", "gram", 1.000000000000000E-03, "kg", "M", "1.0");
   _map["g"] = UBASE("cgs", "g", 1.000000000000000E-03, "kg", "M", "1.0");
   _map["carat(metric)"] = UBASE("INT", "carat(metric)", 2.000000000000000E-04, "kg", "M", "1.0");
   _map["ct(metric)"] = UBASE("INT", "ct(metric)", 2.000000000000000E-04, "kg", "M", "1.0");
   _map["angstrom"] = UBASE("INT", "angstrom", 1.000000000000000E-10, "m", "L", "1.0");
   _map["A"] = UBASE("INT", "A", 1.000000000000000E-10, "m", "L", "1.0");
   _map["nautical-mile"] = UBASE("INT", "nautical-mile", 1.852000000000000E+03, "m", "L", "1.0");
   _map["nmi"] = UBASE("INT", "nmi", 1.852000000000000E+03, "m", "L", "1.0");
   _map["ream(perfect)"] = UBASE("US", "ream(perfect)", 5.120000000000000E+02, "count", "O", "1.0");
   _map["astronomical-unit"] = UBASE("@", "astronomical-unit", 1.495978707000000E+11, "m", "L", "1.0");
   _map["au"] = UBASE("@", "au", 1.495978707000000E+11, "m", "L", "1.0");
   _map["earth-equatorial-radius-WGS-84"] = UBASE("WGS-84", "earth-equatorial-radius-WGS-84", 6.378137000000000E+06, "m", "L", "1.0");
   _map["a"] = UBASE("WGS-84", "a", 6.378137000000000E+06, "m", "L", "1.0");
   _map["room-temperature"] = UBASE("Scientific", "room-temperature", 2.931500000000000E+02, "K", "Q", "1.0");
   _map["T"] = UBASE("Scientific", "T", 2.931500000000000E+02, "K", "Q", "1.0");
   _map["curie"] = UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0");
   _map["Ci"] = UBASE("INT", "Ci", 3.700000000000000E+10, "1/s", "1/T", "1.0");
}

// EOF
