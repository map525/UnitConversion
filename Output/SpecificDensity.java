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
// File SpecificDensity.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class SpecificDensity extends SingleSystem
{
   private static SpecificDensity singleton_ = new SpecificDensity();

   public static SpecificDensity Instance()
   {
      return singleton_;
   }

   private SpecificDensity()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("Imperial[cotton(hand)]",   new UBASE("Imperial", "cotton(hand)", 1.693361817351560E+03, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[lea]",   new UBASE("Imperial", "lea", 6.047720776255560E+02, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[linen]",   new UBASE("Imperial", "linen", 6.047720776255560E+02, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[typp]",   new UBASE("Imperial", "typp", 2.015906925418520E+03, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[worsted]",   new UBASE("Imperial", "worsted", 1.128907878234370E+03, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[yarn-cut(wool)]",   new UBASE("Imperial", "yarn-cut(wool)", 6.047720776255560E+02, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[yarn-run(cotton)]",   new UBASE("Imperial", "yarn-run(cotton)", 1.693361817351560E+03, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[yarn-run(linen)]",   new UBASE("Imperial", "yarn-run(linen)", 6.047720776255560E+02, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[yarn-run(metric)]",   new UBASE("Imperial", "yarn-run(metric)", 1.000000000000000E+03, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[yarn-run(wool)]",   new UBASE("Imperial", "yarn-run(wool)", 3.225451080669630E+03, "m/kg", "L/M", "1.0"));
      unit.put("Imperial[yarn-run(worsted)]",   new UBASE("Imperial", "yarn-run(worsted)", 1.128907878234370E+03, "m/kg", "L/M", "1.0"));
      unit.put("Scientific[metric]",   new UBASE("Scientific", "metric", 1.000000000000000E-03, "m/kg", "L/M", "1.0"));
      unit.put("UK[cut(asbestos)]",   new UBASE("UK", "cut(asbestos)", 2.015906925418520E+02, "m/kg", "L/M", "1.0"));
      _map.put("specificLength",   new BaseSystem("specificLength", unit, "1.0"));

      unit.clear();


      unit.put("UK[barrel-per-long-ton]",   new UBASE("UK", "barrel-per-long-ton", 1.409402427778930E-04, "m3/kg", "L3/M", "1.0"));
      unit.put("UK[bbl/lt]",   new UBASE("UK", "barrel-per-long-ton", 1.409402427778930E-04, "m3/kg", "L3/M", "1.0"));
      unit.put("US[barrel-per-short-ton]",   new UBASE("US", "barrel-per-short-ton", 1.314401201193040E-04, "m3/kg", "L3/M", "1.0"));
      unit.put("US[bbl/st]",   new UBASE("US", "barrel-per-short-ton", 1.314401201193040E-04, "m3/kg", "L3/M", "1.0"));
      unit.put("FPS[cubic-foot-per-pound]",   new UBASE("FPS", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0"));
      unit.put("FPS[ft3/lb]",   new UBASE("FPS", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0"));
      unit.put("Imperial[cubic-foot-per-pound]",   new UBASE("Imperial", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0"));
      unit.put("Imperial[ft3/lb]",   new UBASE("Imperial", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0"));
      unit.put("UK[cubic-foot-per-ton]",   new UBASE("UK", "cubic-foot-per-ton", 2.786962525720740E-05, "m3/kg", "L3/M", "1.0"));
      unit.put("UK[ft3/ton]",   new UBASE("UK", "cubic-foot-per-ton", 2.786962525720740E-05, "m3/kg", "L3/M", "1.0"));
      unit.put("Imperial[cubic-inch-per-pound]",   new UBASE("Imperial", "cubic-inch-per-pound", 3.612729200008370E-05, "m3/kg", "L3/M", "1.0"));
      unit.put("Imperial[in3/lb]",   new UBASE("Imperial", "cubic-inch-per-pound", 3.612729200008370E-05, "m3/kg", "L3/M", "1.0"));
      unit.put("SI[cubic-meter-per-kilogram]",   new UBASE("SI", "cubic-meter-per-kilogram", 1.000000000000000E+00, "m3/kg", "L3/M", "1.0"));
      unit.put("SI[m3/kg]",   new UBASE("SI", "cubic-meter-per-kilogram", 1.000000000000000E+00, "m3/kg", "L3/M", "1.0"));
      unit.put("UK[gallon-per-pound]",   new UBASE("UK", "gallon-per-pound", 1.002241726420570E-02, "m3/kg", "L3/M", "1.0"));
      unit.put("UK[in3/lb]",   new UBASE("UK", "gallon-per-pound", 1.002241726420570E-02, "m3/kg", "L3/M", "1.0"));
      unit.put("Scientific[liter-per-kilogram]",   new UBASE("Scientific", "liter-per-kilogram", 1.000000000000000E-03, "m3/kg", "L3/M", "1.0"));
      unit.put("Scientific[l/kg]",   new UBASE("Scientific", "liter-per-kilogram", 1.000000000000000E-03, "m3/kg", "L3/M", "1.0"));
      _map.put("specificVolume",   new BaseSystem("specificVolume", unit, "1.0"));

      unit.clear();


   }

}
// EOF
