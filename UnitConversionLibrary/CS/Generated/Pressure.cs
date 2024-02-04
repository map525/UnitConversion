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
// File Pressure.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class Pressure : SingleSystem
   {
       private static Pressure singleton_ = new Pressure();

       public static Pressure Instance()
       {
           return singleton_;
       }

       private Pressure() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("INT[atmosphere]",   new UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("INT[atm]",   new UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("INT[An]",   new UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[atmosphere]",   new UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[at]",   new UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[bar]",   new UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[barad]",   new UBASE("Scientific", "barad", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("cgs[barrie]",   new UBASE("cgs", "barrie", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("cgs[barye]",   new UBASE("cgs", "barye", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[british-thermal-unit(IT)-per-barrel]",   new UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[Btu(IT)/bbl]",   new UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[british-thermal-unit(IT)-per-cubic-foot]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[Btu(IT)/ft3]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("UK[british-thermal-unit(IT)-per-gallon]",   new UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("UK[Btu(IT)/gal]",   new UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[british-thermal-unit(IT)-per-gallon]",   new UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[Btu(IT)/gal]",   new UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[centi-hg]",   new UBASE("Scientific", "centi-hg", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[centimeter-of-mercury(0oC)]",   new UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[cmHg(0oC)]",   new UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[centimeter-of-mercury(15.6oC)]",   new UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[cmHg(15.6oC)]",   new UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[centimeter-of-mercury(32oC)]",   new UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[cmHg(32oC)]",   new UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[centimeter-of-water(15.56oC)]",   new UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[cmH2O(15.56oC)]",   new UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[centimeter-of-water(39.2oC)]",   new UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[cmH2O(39.2oC)]",   new UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[centimeter-of-water(4oC)]",   new UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[cmH2O(4oC)]",   new UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[centimeter-of-water(60oC)]",   new UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[cmH2O(60oC)]",   new UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[dobson]",   new UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[DU]",   new UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("cgs[dyne-per-square-centimeter]",   new UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("cgs[dyn/cm2]",   new UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[foot-of-head]",   new UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[ft-hd]",   new UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[foot-of-mercury(15.56oC)]",   new UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ftHg(15.56oC)]",   new UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[foot-of-mercury(32oF)]",   new UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ftHg(32oF)]",   new UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[foot-of-water(15.56oC)]",   new UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ftH2O(15.5oC)]",   new UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[foot-of-water(39.2oF)]",   new UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ftH2O(39.2oF)]",   new UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[foot-of-water-(4oC)]",   new UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ftH2O(4oC)]",   new UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[foot-of-water(60oF)]",   new UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ftH2O(60oF)]",   new UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-mercury(0oC)]",   new UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inHg(0oC)]",   new UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-mercury(15.56oC)]",   new UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inHg(15.56oC)]",   new UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-mercury(32oF)]",   new UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inHg(32oF)]",   new UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-mercury(60oF)]",   new UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inHg(60oF)]",   new UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-water(15.56oC)]",   new UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inH2O(15.56oC)]",   new UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-water(39.2oF)]",   new UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inH2O(39.2oF)]",   new UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-water(4oC)]",   new UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inH2O(4oC)]",   new UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inch-of-water(60oF)]",   new UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[inH2O(60oF)]",   new UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[joule-per-cubic-meter]",   new UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[J/m3]",   new UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[joule-per-cubic-meter-per-hertz]",   new UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[J/m3-Hz]",   new UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kilogram-force-per-square-decimeter]",   new UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kgf/dm2]",   new UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kilogram-force-per-square-meter]",   new UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kgf/m2]",   new UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kilogram-force-per-square-millimeter]",   new UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kgf/mm2]",   new UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kilogram-force-per-square-centimeter]",   new UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[kg/cm2]",   new UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[kilopound-force-per-square-inch]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[kip/in2]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ksi]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[KSI]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[meter-of-water(15.56oC)]",   new UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mH2O(15.56oC)]",   new UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[meter-of-water(39.2oF)]",   new UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[mH2O(39.2oF)]",   new UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[meter-of-water(4oC)]",   new UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mH2O(4oC)]",   new UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[meter-of-water(60oF)]",   new UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[mH2O(60oF)]",   new UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("cgs[microbar]",   new UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("cgs[ubar]",   new UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[micron-of-mercury]",   new UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[uHg(0oC)]",   new UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millitorr]",   new UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millibar]",   new UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mbar]",   new UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millimeter-of-mercury(0oC)]",   new UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmHg(0oC)]",   new UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[torr(0oC)]",   new UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[millimeter-of-mercury(4oC)]",   new UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[mmHg(4oC)]",   new UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millimeter-of-water(15.56oC)]",   new UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmH2O(15.56oC)]",   new UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmCE(15.56oC)]",   new UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millimeter-of-water(39.2oF)]",   new UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmH2O(39.2oF)]",   new UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmCE(39.2oF)]",   new UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millimeter-of-water(4oC)]",   new UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmH2O(4oC)]",   new UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmCE(4oC)]",   new UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[millimeter-of-water(60oF)]",   new UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmH2O(60oF)]",   new UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[mmCE(60oF)]",   new UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[newton-per-square-meter]",   new UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[N/m2]",   new UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ounce-force-per-square-inch]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[ozf/in2]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[osi]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[OSI]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[pascal]",   new UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[Pa]",   new UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MTS[pieze]",   new UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MTS[pz]",   new UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[pound-force-per-square-foot]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[lbf/ft2]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[psf]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[PSF]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[pound-force-per-square-foot]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[lbf/ft2]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[psf]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[PSF]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[pound-force-per-square-inch]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[lbf/in2]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[psi]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("FPS[PSI]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[pound-force-per-square-inch]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[lbf/in2]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[psi]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[PSI]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[poundal-per-square-foot]",   new UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[pdl/ft2]",   new UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("INT[standard-atmosphere]",   new UBASE("INT", "standard-atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MTS[sthene-per-square-meter]",   new UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MTS[sthene/m2]",   new UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MTS[sn/m2]",   new UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[technical-atmosphere]",   new UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("MKpS[ta]",   new UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[ton-force-per-square-inch]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[tsi]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[TSI]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("US[tonf/in2]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("INT[torr]",   new UBASE("INT", "torr", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Scientific[vac]",   new UBASE("Scientific", "vac", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[water-column]",   new UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("Imperial[wc]",   new UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[yottapascal]",   new UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[YPa]",   new UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[zettapascal]",   new UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[ZPa]",   new UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[exacpascal]",   new UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[EPa]",   new UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[petapascal]",   new UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[PPa]",   new UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[terapascal]",   new UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[TPa]",   new UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[gigapascal]",   new UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[GPa]",   new UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[megapascal]",   new UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[MPa]",   new UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[kilocpascal]",   new UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[kPa]",   new UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[hectopascal]",   new UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[hPa]",   new UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[decapascal]",   new UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[daPa]",   new UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[decipascal]",   new UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[dPa]",   new UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[centipascal]",   new UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[cPa]",   new UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[millipascal]",   new UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[mPa]",   new UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[micropascal]",   new UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[uPa]",   new UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[nanopascal]",   new UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[nPa]",   new UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[picopascal]",   new UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[pPa]",   new UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[femtopascal]",   new UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[fPa]",   new UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[attopascal]",   new UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[aPa]",   new UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[zeptopascal]",   new UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[zPa]",   new UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[yoctopascal]",   new UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0"));
          unit.Add("SI[yPa]",   new UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0"));
          _map.Add("pressure",   new BaseSystem("pressure", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
