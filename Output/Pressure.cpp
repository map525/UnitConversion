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
// File Pressure.cpp
//
// Units for Pressure
//
// Class for Pressure units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Pressure.hpp"

Pressure& Pressure::Instance(void)
{
    static Pressure singleton;
    return singleton;
}

Pressure::Pressure(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["INT[atmosphere]"] = UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["INT[atm]"] = UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["INT[An]"] = UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[atmosphere]"] = UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[at]"] = UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[bar]"] = UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[barad]"] = UBASE("Scientific", "barad", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["cgs[barrie]"] = UBASE("cgs", "barrie", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["cgs[barye]"] = UBASE("cgs", "barye", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[british-thermal-unit(IT)-per-barrel]"] = UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[Btu(IT)/bbl]"] = UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[british-thermal-unit(IT)-per-cubic-foot]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[Btu(IT)/ft3]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["UK[british-thermal-unit(IT)-per-gallon]"] = UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["UK[Btu(IT)/gal]"] = UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[british-thermal-unit(IT)-per-gallon]"] = UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[Btu(IT)/gal]"] = UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[centi-hg]"] = UBASE("Scientific", "centi-hg", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[centimeter-of-mercury(0oC)]"] = UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[cmHg(0oC)]"] = UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[centimeter-of-mercury(15.6oC)]"] = UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[cmHg(15.6oC)]"] = UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[centimeter-of-mercury(32oC)]"] = UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[cmHg(32oC)]"] = UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[centimeter-of-water(15.56oC)]"] = UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[cmH2O(15.56oC)]"] = UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[centimeter-of-water(39.2oC)]"] = UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[cmH2O(39.2oC)]"] = UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[centimeter-of-water(4oC)]"] = UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[cmH2O(4oC)]"] = UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[centimeter-of-water(60oC)]"] = UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[cmH2O(60oC)]"] = UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[dobson]"] = UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[DU]"] = UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0");
   unit["cgs[dyne-per-square-centimeter]"] = UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["cgs[dyn/cm2]"] = UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[foot-of-head]"] = UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[ft-hd]"] = UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[foot-of-mercury(15.56oC)]"] = UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ftHg(15.56oC)]"] = UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[foot-of-mercury(32oF)]"] = UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ftHg(32oF)]"] = UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[foot-of-water(15.56oC)]"] = UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ftH2O(15.5oC)]"] = UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[foot-of-water(39.2oF)]"] = UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ftH2O(39.2oF)]"] = UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[foot-of-water-(4oC)]"] = UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ftH2O(4oC)]"] = UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[foot-of-water(60oF)]"] = UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ftH2O(60oF)]"] = UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-mercury(0oC)]"] = UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inHg(0oC)]"] = UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-mercury(15.56oC)]"] = UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inHg(15.56oC)]"] = UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-mercury(32oF)]"] = UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inHg(32oF)]"] = UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-mercury(60oF)]"] = UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inHg(60oF)]"] = UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-water(15.56oC)]"] = UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inH2O(15.56oC)]"] = UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-water(39.2oF)]"] = UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inH2O(39.2oF)]"] = UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-water(4oC)]"] = UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inH2O(4oC)]"] = UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inch-of-water(60oF)]"] = UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[inH2O(60oF)]"] = UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[joule-per-cubic-meter]"] = UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[J/m3]"] = UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[joule-per-cubic-meter-per-hertz]"] = UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[J/m3-Hz]"] = UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kilogram-force-per-square-decimeter]"] = UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kgf/dm2]"] = UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kilogram-force-per-square-meter]"] = UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kgf/m2]"] = UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kilogram-force-per-square-millimeter]"] = UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kgf/mm2]"] = UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kilogram-force-per-square-centimeter]"] = UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[kg/cm2]"] = UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[kilopound-force-per-square-inch]"] = UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[kip/in2]"] = UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ksi]"] = UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[KSI]"] = UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[meter-of-water(15.56oC)]"] = UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mH2O(15.56oC)]"] = UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[meter-of-water(39.2oF)]"] = UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[mH2O(39.2oF)]"] = UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[meter-of-water(4oC)]"] = UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mH2O(4oC)]"] = UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[meter-of-water(60oF)]"] = UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[mH2O(60oF)]"] = UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["cgs[microbar]"] = UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["cgs[ubar]"] = UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[micron-of-mercury]"] = UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[uHg(0oC)]"] = UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millitorr]"] = UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millibar]"] = UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mbar]"] = UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millimeter-of-mercury(0oC)]"] = UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmHg(0oC)]"] = UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[torr(0oC)]"] = UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[millimeter-of-mercury(4oC)]"] = UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[mmHg(4oC)]"] = UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millimeter-of-water(15.56oC)]"] = UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmH2O(15.56oC)]"] = UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmCE(15.56oC)]"] = UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millimeter-of-water(39.2oF)]"] = UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmH2O(39.2oF)]"] = UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmCE(39.2oF)]"] = UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millimeter-of-water(4oC)]"] = UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmH2O(4oC)]"] = UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmCE(4oC)]"] = UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[millimeter-of-water(60oF)]"] = UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmH2O(60oF)]"] = UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[mmCE(60oF)]"] = UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[newton-per-square-meter]"] = UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[N/m2]"] = UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ounce-force-per-square-inch]"] = UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[ozf/in2]"] = UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[osi]"] = UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[OSI]"] = UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[pascal]"] = UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[Pa]"] = UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["MTS[pieze]"] = UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["MTS[pz]"] = UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[pound-force-per-square-foot]"] = UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[lbf/ft2]"] = UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[psf]"] = UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[PSF]"] = UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[pound-force-per-square-foot]"] = UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[lbf/ft2]"] = UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[psf]"] = UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[PSF]"] = UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[pound-force-per-square-inch]"] = UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[lbf/in2]"] = UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[psi]"] = UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["FPS[PSI]"] = UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[pound-force-per-square-inch]"] = UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[lbf/in2]"] = UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[psi]"] = UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[PSI]"] = UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[poundal-per-square-foot]"] = UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[pdl/ft2]"] = UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0");
   unit["INT[standard-atmosphere]"] = UBASE("INT", "standard-atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0");
   unit["MTS[sthene-per-square-meter]"] = UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["MTS[sthene/m2]"] = UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["MTS[sn/m2]"] = UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[technical-atmosphere]"] = UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["MKpS[ta]"] = UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[ton-force-per-square-inch]"] = UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[tsi]"] = UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[TSI]"] = UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0");
   unit["US[tonf/in2]"] = UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0");
   unit["INT[torr]"] = UBASE("INT", "torr", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Scientific[vac]"] = UBASE("Scientific", "vac", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[water-column]"] = UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["Imperial[wc]"] = UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[yottapascal]"] = UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[YPa]"] = UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[zettapascal]"] = UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[ZPa]"] = UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[exacpascal]"] = UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[EPa]"] = UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[petapascal]"] = UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[PPa]"] = UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[terapascal]"] = UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[TPa]"] = UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[gigapascal]"] = UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[GPa]"] = UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[megapascal]"] = UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[MPa]"] = UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[kilocpascal]"] = UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[kPa]"] = UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[hectopascal]"] = UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[hPa]"] = UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[decapascal]"] = UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[daPa]"] = UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[decipascal]"] = UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[dPa]"] = UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[centipascal]"] = UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[cPa]"] = UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[millipascal]"] = UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[mPa]"] = UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[micropascal]"] = UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[uPa]"] = UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[nanopascal]"] = UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[nPa]"] = UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[picopascal]"] = UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[pPa]"] = UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[femtopascal]"] = UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[fPa]"] = UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[attopascal]"] = UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[aPa]"] = UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[zeptopascal]"] = UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[zPa]"] = UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[yoctopascal]"] = UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0");
   unit["SI[yPa]"] = UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0");
   _map["pressure"] = BaseSystem("pressure", unit, "1.0");

   unit.clear();


}

// EOF
