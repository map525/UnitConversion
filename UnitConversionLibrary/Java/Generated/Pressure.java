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
// File Pressure.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Pressure extends SingleSystem
{
   private static Pressure singleton_ = new Pressure();

   public static Pressure Instance()
   {
      return singleton_;
   }

   private Pressure()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("INT[atmosphere]",   new UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("INT[atm]",   new UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("INT[An]",   new UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[atmosphere]",   new UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[at]",   new UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[bar]",   new UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[barad]",   new UBASE("Scientific", "barad", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("cgs[barrie]",   new UBASE("cgs", "barrie", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("cgs[barye]",   new UBASE("cgs", "barye", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[british-thermal-unit(IT)-per-barrel]",   new UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[Btu(IT)/bbl]",   new UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[british-thermal-unit(IT)-per-cubic-foot]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[Btu(IT)/ft3]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("UK[british-thermal-unit(IT)-per-gallon]",   new UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("UK[Btu(IT)/gal]",   new UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[british-thermal-unit(IT)-per-gallon]",   new UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[Btu(IT)/gal]",   new UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[centi-hg]",   new UBASE("Scientific", "centi-hg", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[centimeter-of-mercury(0oC)]",   new UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[cmHg(0oC)]",   new UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[centimeter-of-mercury(15.6oC)]",   new UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[cmHg(15.6oC)]",   new UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[centimeter-of-mercury(32oC)]",   new UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[cmHg(32oC)]",   new UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[centimeter-of-water(15.56oC)]",   new UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[cmH2O(15.56oC)]",   new UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[centimeter-of-water(39.2oC)]",   new UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[cmH2O(39.2oC)]",   new UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[centimeter-of-water(4oC)]",   new UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[cmH2O(4oC)]",   new UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[centimeter-of-water(60oC)]",   new UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[cmH2O(60oC)]",   new UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[dobson]",   new UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[DU]",   new UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("cgs[dyne-per-square-centimeter]",   new UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("cgs[dyn/cm2]",   new UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[foot-of-head]",   new UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[ft-hd]",   new UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[foot-of-mercury(15.56oC)]",   new UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ftHg(15.56oC)]",   new UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[foot-of-mercury(32oF)]",   new UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ftHg(32oF)]",   new UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[foot-of-water(15.56oC)]",   new UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ftH2O(15.5oC)]",   new UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[foot-of-water(39.2oF)]",   new UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ftH2O(39.2oF)]",   new UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[foot-of-water-(4oC)]",   new UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ftH2O(4oC)]",   new UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[foot-of-water(60oF)]",   new UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ftH2O(60oF)]",   new UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-mercury(0oC)]",   new UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inHg(0oC)]",   new UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-mercury(15.56oC)]",   new UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inHg(15.56oC)]",   new UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-mercury(32oF)]",   new UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inHg(32oF)]",   new UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-mercury(60oF)]",   new UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inHg(60oF)]",   new UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-water(15.56oC)]",   new UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inH2O(15.56oC)]",   new UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-water(39.2oF)]",   new UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inH2O(39.2oF)]",   new UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-water(4oC)]",   new UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inH2O(4oC)]",   new UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inch-of-water(60oF)]",   new UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[inH2O(60oF)]",   new UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[joule-per-cubic-meter]",   new UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[J/m3]",   new UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[joule-per-cubic-meter-per-hertz]",   new UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[J/m3-Hz]",   new UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kilogram-force-per-square-decimeter]",   new UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kgf/dm2]",   new UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kilogram-force-per-square-meter]",   new UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kgf/m2]",   new UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kilogram-force-per-square-millimeter]",   new UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kgf/mm2]",   new UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kilogram-force-per-square-centimeter]",   new UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[kg/cm2]",   new UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[kilopound-force-per-square-inch]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[kip/in2]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ksi]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[KSI]",   new UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[meter-of-water(15.56oC)]",   new UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mH2O(15.56oC)]",   new UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[meter-of-water(39.2oF)]",   new UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[mH2O(39.2oF)]",   new UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[meter-of-water(4oC)]",   new UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mH2O(4oC)]",   new UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[meter-of-water(60oF)]",   new UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[mH2O(60oF)]",   new UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("cgs[microbar]",   new UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("cgs[ubar]",   new UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[micron-of-mercury]",   new UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[uHg(0oC)]",   new UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millitorr]",   new UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millibar]",   new UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mbar]",   new UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millimeter-of-mercury(0oC)]",   new UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmHg(0oC)]",   new UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[torr(0oC)]",   new UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[millimeter-of-mercury(4oC)]",   new UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[mmHg(4oC)]",   new UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millimeter-of-water(15.56oC)]",   new UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmH2O(15.56oC)]",   new UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmCE(15.56oC)]",   new UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millimeter-of-water(39.2oF)]",   new UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmH2O(39.2oF)]",   new UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmCE(39.2oF)]",   new UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millimeter-of-water(4oC)]",   new UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmH2O(4oC)]",   new UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmCE(4oC)]",   new UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[millimeter-of-water(60oF)]",   new UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmH2O(60oF)]",   new UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[mmCE(60oF)]",   new UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[newton-per-square-meter]",   new UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[N/m2]",   new UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ounce-force-per-square-inch]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[ozf/in2]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[osi]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[OSI]",   new UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[pascal]",   new UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[Pa]",   new UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MTS[pieze]",   new UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MTS[pz]",   new UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[pound-force-per-square-foot]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[lbf/ft2]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[psf]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[PSF]",   new UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[pound-force-per-square-foot]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[lbf/ft2]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[psf]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[PSF]",   new UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[pound-force-per-square-inch]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[lbf/in2]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[psi]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("FPS[PSI]",   new UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[pound-force-per-square-inch]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[lbf/in2]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[psi]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[PSI]",   new UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[poundal-per-square-foot]",   new UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[pdl/ft2]",   new UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("INT[standard-atmosphere]",   new UBASE("INT", "standard-atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MTS[sthene-per-square-meter]",   new UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MTS[sthene/m2]",   new UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MTS[sn/m2]",   new UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[technical-atmosphere]",   new UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("MKpS[ta]",   new UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[ton-force-per-square-inch]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[tsi]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[TSI]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("US[tonf/in2]",   new UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("INT[torr]",   new UBASE("INT", "torr", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Scientific[vac]",   new UBASE("Scientific", "vac", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[water-column]",   new UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("Imperial[wc]",   new UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[yottapascal]",   new UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[YPa]",   new UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[zettapascal]",   new UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[ZPa]",   new UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[exacpascal]",   new UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[EPa]",   new UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[petapascal]",   new UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[PPa]",   new UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[terapascal]",   new UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[TPa]",   new UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[gigapascal]",   new UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[GPa]",   new UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[megapascal]",   new UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[MPa]",   new UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[kilocpascal]",   new UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[kPa]",   new UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[hectopascal]",   new UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[hPa]",   new UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[decapascal]",   new UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[daPa]",   new UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[decipascal]",   new UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[dPa]",   new UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[centipascal]",   new UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[cPa]",   new UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[millipascal]",   new UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[mPa]",   new UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[micropascal]",   new UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[uPa]",   new UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[nanopascal]",   new UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[nPa]",   new UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[picopascal]",   new UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[pPa]",   new UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[femtopascal]",   new UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[fPa]",   new UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[attopascal]",   new UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[aPa]",   new UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[zeptopascal]",   new UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[zPa]",   new UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[yoctopascal]",   new UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0"));
      unit.put("SI[yPa]",   new UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0"));
      _map.put("pressure",   new BaseSystem("pressure", unit, "1.0"));

      unit.clear();


   }

}
// EOF
