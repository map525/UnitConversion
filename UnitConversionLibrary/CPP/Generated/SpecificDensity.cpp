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
// File SpecificDensity.cpp
//
// Units for SpecificDensity
//
// Class for SpecificDensity units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"SpecificDensity.hpp"

SpecificDensity& SpecificDensity::Instance(void)
{
    static SpecificDensity singleton;
    return singleton;
}

SpecificDensity::SpecificDensity(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["Imperial[cotton(hand)]"] = UBASE("Imperial", "cotton(hand)", 1.693361817351560E+03, "m/kg", "L/M", "1.0");
   unit["Imperial[lea]"] = UBASE("Imperial", "lea", 6.047720776255560E+02, "m/kg", "L/M", "1.0");
   unit["Imperial[linen]"] = UBASE("Imperial", "linen", 6.047720776255560E+02, "m/kg", "L/M", "1.0");
   unit["Imperial[typp]"] = UBASE("Imperial", "typp", 2.015906925418520E+03, "m/kg", "L/M", "1.0");
   unit["Imperial[worsted]"] = UBASE("Imperial", "worsted", 1.128907878234370E+03, "m/kg", "L/M", "1.0");
   unit["Imperial[yarn-cut(wool)]"] = UBASE("Imperial", "yarn-cut(wool)", 6.047720776255560E+02, "m/kg", "L/M", "1.0");
   unit["Imperial[yarn-run(cotton)]"] = UBASE("Imperial", "yarn-run(cotton)", 1.693361817351560E+03, "m/kg", "L/M", "1.0");
   unit["Imperial[yarn-run(linen)]"] = UBASE("Imperial", "yarn-run(linen)", 6.047720776255560E+02, "m/kg", "L/M", "1.0");
   unit["Imperial[yarn-run(metric)]"] = UBASE("Imperial", "yarn-run(metric)", 1.000000000000000E+03, "m/kg", "L/M", "1.0");
   unit["Imperial[yarn-run(wool)]"] = UBASE("Imperial", "yarn-run(wool)", 3.225451080669630E+03, "m/kg", "L/M", "1.0");
   unit["Imperial[yarn-run(worsted)]"] = UBASE("Imperial", "yarn-run(worsted)", 1.128907878234370E+03, "m/kg", "L/M", "1.0");
   unit["Scientific[metric]"] = UBASE("Scientific", "metric", 1.000000000000000E-03, "m/kg", "L/M", "1.0");
   unit["UK[cut(asbestos)]"] = UBASE("UK", "cut(asbestos)", 2.015906925418520E+02, "m/kg", "L/M", "1.0");
   _map["specificLength"] = BaseSystem("specificLength", unit, "1.0");

   unit.clear();


   unit["UK[barrel-per-long-ton]"] = UBASE("UK", "barrel-per-long-ton", 1.409402427778930E-04, "m3/kg", "L3/M", "1.0");
   unit["UK[bbl/lt]"] = UBASE("UK", "barrel-per-long-ton", 1.409402427778930E-04, "m3/kg", "L3/M", "1.0");
   unit["US[barrel-per-short-ton]"] = UBASE("US", "barrel-per-short-ton", 1.314401201193040E-04, "m3/kg", "L3/M", "1.0");
   unit["US[bbl/st]"] = UBASE("US", "barrel-per-short-ton", 1.314401201193040E-04, "m3/kg", "L3/M", "1.0");
   unit["FPS[cubic-foot-per-pound]"] = UBASE("FPS", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0");
   unit["FPS[ft3/lb]"] = UBASE("FPS", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0");
   unit["Imperial[cubic-foot-per-pound]"] = UBASE("Imperial", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0");
   unit["Imperial[ft3/lb]"] = UBASE("Imperial", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0");
   unit["UK[cubic-foot-per-ton]"] = UBASE("UK", "cubic-foot-per-ton", 2.786962525720740E-05, "m3/kg", "L3/M", "1.0");
   unit["UK[ft3/ton]"] = UBASE("UK", "cubic-foot-per-ton", 2.786962525720740E-05, "m3/kg", "L3/M", "1.0");
   unit["Imperial[cubic-inch-per-pound]"] = UBASE("Imperial", "cubic-inch-per-pound", 3.612729200008370E-05, "m3/kg", "L3/M", "1.0");
   unit["Imperial[in3/lb]"] = UBASE("Imperial", "cubic-inch-per-pound", 3.612729200008370E-05, "m3/kg", "L3/M", "1.0");
   unit["SI[cubic-meter-per-kilogram]"] = UBASE("SI", "cubic-meter-per-kilogram", 1.000000000000000E+00, "m3/kg", "L3/M", "1.0");
   unit["SI[m3/kg]"] = UBASE("SI", "cubic-meter-per-kilogram", 1.000000000000000E+00, "m3/kg", "L3/M", "1.0");
   unit["UK[gallon-per-pound]"] = UBASE("UK", "gallon-per-pound", 1.002241726420570E-02, "m3/kg", "L3/M", "1.0");
   unit["UK[in3/lb]"] = UBASE("UK", "gallon-per-pound", 1.002241726420570E-02, "m3/kg", "L3/M", "1.0");
   unit["Scientific[liter-per-kilogram]"] = UBASE("Scientific", "liter-per-kilogram", 1.000000000000000E-03, "m3/kg", "L3/M", "1.0");
   unit["Scientific[l/kg]"] = UBASE("Scientific", "liter-per-kilogram", 1.000000000000000E-03, "m3/kg", "L3/M", "1.0");
   _map["specificVolume"] = BaseSystem("specificVolume", unit, "1.0");

   unit.clear();


}

// EOF
