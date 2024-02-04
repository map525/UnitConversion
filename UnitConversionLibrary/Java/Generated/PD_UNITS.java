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
// File PD_UNITS.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class PD_UNITS extends ConstantGroup
{
   private static PD_UNITS singleton_ = new PD_UNITS();

   public static PD_UNITS Instance()
   {
      return singleton_;
   }

   private PD_UNITS()
   {
       super("PhysicalDefinitions", "1.0");
      _map.put("atmosphere(standard)",   new UBASE("Imperial", "atmosphere(standard)", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      _map.put("atm",   new UBASE("Imperial", "atm", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      _map.put("bar",   new UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0"));
      _map.put("minute",   new UBASE("INT", "minute", 6.000000000000000E+01, "s", "T", "1.0"));
      _map.put("min",   new UBASE("INT", "min", 6.000000000000000E+01, "s", "T", "1.0"));
      _map.put("hour",   new UBASE("INT", "hour", 3.600000000000000E+03, "s", "T", "1.0"));
      _map.put("hr",   new UBASE("INT", "hr", 3.600000000000000E+03, "s", "T", "1.0"));
      _map.put("day",   new UBASE("Time", "day", 8.640000000000000E+04, "s", "T", "1.0"));
      _map.put("year(common)",   new UBASE("Time", "year(common)", 3.153600000000000E+07, "s", "T", "1.0"));
      _map.put("yr(common)",   new UBASE("Time", "yr(common)", 3.153600000000000E+07, "s", "T", "1.0"));
      _map.put("year(Julian)",   new UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0"));
      _map.put("yr(Julian)",   new UBASE("Time", "yr(Julian)", 3.155760000000000E+07, "s", "T", "1.0"));
      _map.put("liter",   new UBASE("INT", "liter", 1.000000000000000E-03, "m3", "L3", "1.0"));
      _map.put("l",   new UBASE("INT", "l", 1.000000000000000E-03, "m3", "L3", "1.0"));
      _map.put("kg-water",   new UBASE("Scientific", "kg-water", 1.000000000000000E-03, "m3", "L3", "1.0"));
      _map.put("kgH2O",   new UBASE("Scientific", "kgH2O", 1.000000000000000E-03, "m3", "L3", "1.0"));
      _map.put("ream",   new UBASE("INT", "ream", 5.000000000000000E+02, "count", "O", "1.0"));
      _map.put("ream(old)",   new UBASE("UK, US", "ream(old)", 4.800000000000000E+02, "count", "O", "1.0"));
      _map.put("standard-gravity",   new UBASE("Scientific", "standard-gravity", 9.806650000000000E+00, "m/s2", "L/T2", "1.0"));
      _map.put("gN",   new UBASE("Scientific", "gN", 9.806650000000000E+00, "m/s2", "L/T2", "1.0"));
      _map.put("carat",   new UBASE("INT", "carat", 2.000000000000000E-04, "kg", "M", "1.0"));
      _map.put("ct",   new UBASE("INT", "ct", 2.000000000000000E-04, "kg", "M", "1.0"));
      _map.put("BTU(IT)",   new UBASE("UK", "BTU(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("Btu",   new UBASE("UK", "Btu", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("thermochemical-calorie",   new UBASE("Scientific", "thermochemical-calorie", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("cal",   new UBASE("Scientific", "cal", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("international-nautical-mile",   new UBASE("INT", "international-nautical-mile", 1.852000000000000E+03, "m", "L", "1.0"));
      _map.put("ni",   new UBASE("INT", "ni", 1.852000000000000E+03, "m", "L", "1.0"));
      _map.put("international-steam-table-calorie",   new UBASE("INT", "international-steam-table-calorie", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("cal(IST)",   new UBASE("INT", "cal(IST)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("roentgen",   new UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0"));
      _map.put("R",   new UBASE("Scientific", "R", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0"));
      _map.put("dozen",   new UBASE("UK, US", "dozen", 1.200000000000000E+01, "count", "O", "1.0"));
      _map.put("doz",   new UBASE("UK, US", "doz", 1.200000000000000E+01, "count", "O", "1.0"));
      _map.put("millimeter",   new UBASE("SI", "millimeter", 1.000000000000000E-03, "m", "L", "1.0"));
      _map.put("mm",   new UBASE("SI", "mm", 1.000000000000000E-03, "m", "L", "1.0"));
      _map.put("centimeter",   new UBASE("SI", "centimeter", 1.000000000000000E-02, "m", "L", "1.0"));
      _map.put("cm",   new UBASE("SI", "cm", 1.000000000000000E-02, "m", "L", "1.0"));
      _map.put("hertz",   new UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      _map.put("Hz",   new UBASE("SI", "Hz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      _map.put("dyne",   new UBASE("cgs", "dyne", 1.000000000000000E-05, "kg/m.s2", "M.L/T2", "1.0"));
      _map.put("dyn",   new UBASE("cgs", "dyn", 1.000000000000000E-05, "kg/m.s2", "M.L/T2", "1.0"));
      _map.put("decimeter",   new UBASE("SI", "decimeter", 1.000000000000000E-01, "m", "L", "1.0"));
      _map.put("dm",   new UBASE("SI", "dm", 1.000000000000000E-01, "m", "L", "1.0"));
      _map.put("gram",   new UBASE("cgs", "gram", 1.000000000000000E-03, "kg", "M", "1.0"));
      _map.put("g",   new UBASE("cgs", "g", 1.000000000000000E-03, "kg", "M", "1.0"));
      _map.put("carat(metric)",   new UBASE("INT", "carat(metric)", 2.000000000000000E-04, "kg", "M", "1.0"));
      _map.put("ct(metric)",   new UBASE("INT", "ct(metric)", 2.000000000000000E-04, "kg", "M", "1.0"));
      _map.put("angstrom",   new UBASE("INT", "angstrom", 1.000000000000000E-10, "m", "L", "1.0"));
      _map.put("A",   new UBASE("INT", "A", 1.000000000000000E-10, "m", "L", "1.0"));
      _map.put("nautical-mile",   new UBASE("INT", "nautical-mile", 1.852000000000000E+03, "m", "L", "1.0"));
      _map.put("nmi",   new UBASE("INT", "nmi", 1.852000000000000E+03, "m", "L", "1.0"));
      _map.put("ream(perfect)",   new UBASE("US", "ream(perfect)", 5.120000000000000E+02, "count", "O", "1.0"));
      _map.put("astronomical-unit",   new UBASE("@", "astronomical-unit", 1.495978707000000E+11, "m", "L", "1.0"));
      _map.put("au",   new UBASE("@", "au", 1.495978707000000E+11, "m", "L", "1.0"));
      _map.put("earth-equatorial-radius-WGS-84",   new UBASE("WGS-84", "earth-equatorial-radius-WGS-84", 6.378137000000000E+06, "m", "L", "1.0"));
      _map.put("a",   new UBASE("WGS-84", "a", 6.378137000000000E+06, "m", "L", "1.0"));
      _map.put("room-temperature",   new UBASE("Scientific", "room-temperature", 2.931500000000000E+02, "K", "Q", "1.0"));
      _map.put("T",   new UBASE("Scientific", "T", 2.931500000000000E+02, "K", "Q", "1.0"));
      _map.put("curie",   new UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0"));
      _map.put("Ci",   new UBASE("INT", "Ci", 3.700000000000000E+10, "1/s", "1/T", "1.0"));
   }

}
// EOF
