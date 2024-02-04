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
// File Density.java
//
// Units for Density
//
// Class for Density units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class Density extends SingleSystem
{
   private static Density singleton_ = new Density();

   public static Density Instance()
   {
      return singleton_;
   }

   private Density()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("CAN[drex]",   new UBASE("CAN", "drex", 1.000000000000000E-07, "kg/m", "M/L", "1.0"));
      unit.put("French[denier]",   new UBASE("French", "denier", 1.111111111111110E-07, "kg/m", "M/L", "1.0"));
      unit.put("French[den]",   new UBASE("French", "denier", 1.111111111111110E-07, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[pound-per-inch]",   new UBASE("Imperial", "pound-per-inch", 1.785796732283460E+01, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[lb/in]",   new UBASE("Imperial", "pound-per-inch", 1.785796732283460E+01, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[pound-per-foot]",   new UBASE("Imperial", "pound-per-foot", 1.488163943569550E+00, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[lb/ft]",   new UBASE("Imperial", "pound-per-foot", 1.488163943569550E+00, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[pound-per-yard]",   new UBASE("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[lb/yd]",   new UBASE("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", "M/L", "1.0"));
      unit.put("SI[kilogram-per-meter]",   new UBASE("SI", "kilogram-per-meter", 1.000000000000000E+00, "kg/m", "M/L", "1.0"));
      unit.put("SI[kg/m]",   new UBASE("SI", "kilogram-per-meter", 1.000000000000000E+00, "kg/m", "M/L", "1.0"));
      unit.put("SI[kilogram-per-centimeter]",   new UBASE("SI", "kilogram-per-centimeter", 1.000000000000000E+02, "kg/m", "M/L", "1.0"));
      unit.put("SI[kg/cm]",   new UBASE("SI", "kilogram-per-centimeter", 1.000000000000000E+02, "kg/m", "M/L", "1.0"));
      unit.put("SI[kilogram-per-decimeter]",   new UBASE("SI", "kilogram-per-decimeter", 1.000000000000000E+01, "kg/m", "M/L", "1.0"));
      unit.put("SI[kg/dm]",   new UBASE("SI", "kilogram-per-decimeter", 1.000000000000000E+01, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[gram-per-meter]",   new UBASE("Scientific", "gram-per-meter", 1.000000000000000E-03, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[g/m]",   new UBASE("Scientific", "gram-per-meter", 1.000000000000000E-03, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[gram-per-decimeter]",   new UBASE("Scientific", "gram-per-decimeter", 1.000000000000000E-04, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[g/dm]",   new UBASE("Scientific", "gram-per-decimeter", 1.000000000000000E-04, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[gram-per-centimeter]",   new UBASE("Scientific", "gram-per-centimeter", 1.000000000000000E-05, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[g/cm]",   new UBASE("Scientific", "gram-per-centimeter", 1.000000000000000E-05, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[gram-per-millimeter]",   new UBASE("Scientific", "gram-per-millimeter", 1.000000000000000E-06, "kg/m", "M/L", "1.0"));
      unit.put("Scientific[g/mm]",   new UBASE("Scientific", "gram-per-millimeter", 1.000000000000000E-06, "kg/m", "M/L", "1.0"));
      unit.put("UK[manches-ter]",   new UBASE("UK", "manches-ter", 1.937713468189520E-06, "kg/m", "M/L", "1.0"));
      unit.put("SI[tex]",   new UBASE("SI", "tex", 1.000000000000000E-06, "kg/m", "M/L", "1.0"));
      unit.put("UK[poumar]",   new UBASE("UK", "poumar", 4.960546478565180E-07, "kg/m", "M/L", "1.0"));
      unit.put("UK[yarn-number]",   new UBASE("UK", "yarn-number", 1.937713468189520E-06, "kg/m", "M/L", "1.0"));
      unit.put("US[drex]",   new UBASE("US", "drex", 1.000000000000000E-07, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[grain-per-100-yards]",   new UBASE("Imperial", "grain-per-100-yards", 7.086494969378830E-07, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[gr/100-yd]",   new UBASE("Imperial", "grain-per-100-yards", 7.086494969378830E-07, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[grain-per-120-yards]",   new UBASE("Imperial", "grain-per-120-yards", 5.905412474482360E-07, "kg/m", "M/L", "1.0"));
      unit.put("Imperial[gr/120-yd]",   new UBASE("Imperial", "grain-per-120-yards", 5.905412474482360E-07, "kg/m", "M/L", "1.0"));
      unit.put("UK[ton-per-1000-yards]",   new UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0"));
      unit.put("UK[t/1000-yd]",   new UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0"));
      unit.put("UK[ton-per-mile]",   new UBASE("UK", "ton-per-mile", 6.313422790901140E-01, "kg/m", "M/L", "1.0"));
      unit.put("UK[t/mi]",   new UBASE("UK", "ton-per-mile", 6.313422790901140E-01, "kg/m", "M/L", "1.0"));
      unit.put("UK[ton-per-yard]",   new UBASE("UK", "ton-per-yard", 1.111162411198600E+03, "kg/m", "M/L", "1.0"));
      unit.put("UK[t/yd]",   new UBASE("UK", "ton-per-yard", 1.111162411198600E+03, "kg/m", "M/L", "1.0"));
      unit.put("UK[ton-per-foot]",   new UBASE("UK", "ton-per-foot", 3.333487233595800E+03, "kg/m", "M/L", "1.0"));
      unit.put("UK[t/ft]",   new UBASE("UK", "ton-per-foot", 3.333487233595800E+03, "kg/m", "M/L", "1.0"));
      unit.put("UK[ton-per-meter]",   new UBASE("UK", "ton-per-meter", 1.000000000000000E+03, "kg/m", "M/L", "1.0"));
      unit.put("UK[t/m]",   new UBASE("UK", "ton-per-meter", 1.000000000000000E+03, "kg/m", "M/L", "1.0"));
      unit.put("SI[ton-per-kilometer]",   new UBASE("SI", "ton-per-kilometer", 1.000000000000000E+00, "kg/m", "M/L", "1.0"));
      unit.put("SI[t/km]",   new UBASE("SI", "ton-per-kilometer", 1.000000000000000E+00, "kg/m", "M/L", "1.0"));
      _map.put("linearDensity",   new BaseSystem("linearDensity", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[base-box]",   new UBASE("Imperial", "base-box", 2.241931057522830E-02, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[basis-box]",   new UBASE("Imperial", "basis-box", 2.241931057522830E-02, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[gram-per-square-millmeter]",   new UBASE("Scientific", "gram-per-square-millmeter", 1.000000000000000E+03, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[kg/mm2]",   new UBASE("Scientific", "gram-per-square-millmeter", 1.000000000000000E+03, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[gram-per-square-centimeter]",   new UBASE("Scientific", "gram-per-square-centimeter", 1.000000000000000E+01, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[kg/cm2]",   new UBASE("Scientific", "gram-per-square-centimeter", 1.000000000000000E+01, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[gram-per-square-meter]",   new UBASE("Scientific", "gram-per-square-meter", 1.000000000000000E-03, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[g-m2]",   new UBASE("Scientific", "gram-per-square-meter", 1.000000000000000E-03, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[inch-of-rainfall]",   new UBASE("Imperial", "inch-of-rainfall", 2.539592330000000E+01, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[kilogram-per-hectare]",   new UBASE("Scientific", "kilogram-per-hectare", 1.000000000000000E-04, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[kg/ha]",   new UBASE("Scientific", "kilogram-per-hectare", 1.000000000000000E-04, "kg/m2", "M/L2", "1.0"));
      unit.put("SI[kilogram-per-square-kilometer]",   new UBASE("SI", "kilogram-per-square-kilometer", 1.000000000000000E-06, "kg/m2", "M/L2", "1.0"));
      unit.put("SI[kg/km2]",   new UBASE("SI", "kilogram-per-square-kilometer", 1.000000000000000E-06, "kg/m2", "M/L2", "1.0"));
      unit.put("SI[kilogram-per-square-meter]",   new UBASE("SI", "kilogram-per-square-meter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0"));
      unit.put("SI[kg/m2]",   new UBASE("SI", "kilogram-per-square-meter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0"));
      unit.put("SI[kilogram-per-square-centimeter]",   new UBASE("SI", "kilogram-per-square-centimeter", 1.000000000000000E+04, "kg/m2", "M/L2", "1.0"));
      unit.put("SI[kg/cm2]",   new UBASE("SI", "kilogram-per-square-centimeter", 1.000000000000000E+04, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[milligram-per-square-centimeter]",   new UBASE("Scientific", "milligram-per-square-centimeter", 1.000000000000000E-02, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[mg/cm2]",   new UBASE("Scientific", "milligram-per-square-centimeter", 1.000000000000000E-02, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[milligram-per-square-millimeter]",   new UBASE("Scientific", "milligram-per-square-millimeter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0"));
      unit.put("Scientific[mg/mm2]",   new UBASE("Scientific", "milligram-per-square-millimeter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ounce-per-square-foot]",   new UBASE("UK", "ounce-per-square-foot", 3.051517057461200E-01, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[oz/ft2]",   new UBASE("UK", "ounce-per-square-foot", 3.051517057461200E-01, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ounce-per-square-inch]",   new UBASE("UK", "ounce-per-square-inch", 4.394184562744120E+01, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[oz/in2]",   new UBASE("UK", "ounce-per-square-inch", 4.394184562744120E+01, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ounce-per-square-yard]",   new UBASE("UK", "ounce-per-square-yard", 3.390574508290220E-02, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[oz/yd2]",   new UBASE("UK", "ounce-per-square-yard", 3.390574508290220E-02, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[pound-per-acre]",   new UBASE("Imperial", "pound-per-acre", 1.120851156194460E-04, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[lb/ac]",   new UBASE("Imperial", "pound-per-acre", 1.120851156194460E-04, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[pound-per-square-mile]",   new UBASE("Imperial", "pound-per-square-mile", 1.751329931553840E-07, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[lb/mi2]",   new UBASE("Imperial", "pound-per-square-mile", 1.751329931553840E-07, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[pound-per-square-foot]",   new UBASE("Imperial", "pound-per-square-foot", 4.882427636383050E+00, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[lb/ft2]",   new UBASE("Imperial", "pound-per-square-foot", 4.882427636383050E+00, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[pound-per-square-inch]",   new UBASE("Imperial", "pound-per-square-inch", 7.030695796391590E+02, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[lb/in2]",   new UBASE("Imperial", "pound-per-square-inch", 7.030695796391590E+02, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[pound-per-square-yard]",   new UBASE("Imperial", "pound-per-square-yard", 5.424919595981170E-01, "kg/m2", "M/L2", "1.0"));
      unit.put("Imperial[lb/yd2]",   new UBASE("Imperial", "pound-per-square-yard", 5.424919595981170E-01, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton-per-square-mile]",   new UBASE("UK", "ton-per-square-mile", 3.922979046680600E-04, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton/mi2]",   new UBASE("UK", "ton-per-square-mile", 3.922979046680600E-04, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton-per-square-yard]",   new UBASE("UK", "ton-per-square-yard", 1.215181989499780E+03, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton/yd2]",   new UBASE("UK", "ton-per-square-yard", 1.215181989499780E+03, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton-per-square-foot]",   new UBASE("UK", "ton-per-square-foot", 1.093663790549800E+04, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton/ft2]",   new UBASE("UK", "ton-per-square-foot", 1.093663790549800E+04, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton-per-square-inch]",   new UBASE("UK", "ton-per-square-inch", 1.574875858391720E+06, "kg/m2", "M/L2", "1.0"));
      unit.put("UK[ton/in2]",   new UBASE("UK", "ton-per-square-inch", 1.574875858391720E+06, "kg/m2", "M/L2", "1.0"));
      _map.put("surfaceDensity",   new BaseSystem("surfaceDensity", unit, "1.0"));

      unit.clear();


      unit.put("Scientific[clarke-degree]",   new UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[oTHB]",   new UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[oe]",   new UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[oClarke]",   new UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("French[degree-hydrotimetrique-francais]",   new UBASE("French", "degree-hydrotimetrique-francais", 1.000000000000000E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("French[oDHF]",   new UBASE("French", "degree-hydrotimetrique-francais", 1.000000000000000E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[gammil]",   new UBASE("Scientific", "gammil", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[grain-percubic-foot]",   new UBASE("Imperial", "grain-percubic-foot", 2.288351910565730E-03, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[gr/ft3]",   new UBASE("Imperial", "grain-percubic-foot", 2.288351910565730E-03, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[grain-per-cubic-inch]",   new UBASE("Imperial", "grain-per-cubic-inch", 3.954272101457590E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[gr/in3]",   new UBASE("Imperial", "grain-per-cubic-inch", 3.954272101457590E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("US[grain-per-gallon]",   new UBASE("US", "grain-per-gallon", 1.711806104527090E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("US[gr/gal]",   new UBASE("US", "grain-per-gallon", 1.711806104527090E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[grain-per-gallon]",   new UBASE("UK", "grain-per-gallon", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[gr/gal]",   new UBASE("UK", "grain-per-gallon", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[gram-per-cubic-millimeter]",   new UBASE("Scientific", "gram-per-cubic-millimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[g/mm3]",   new UBASE("Scientific", "gram-per-cubic-millimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[gram-per-cubic-centimeter]",   new UBASE("Scientific", "gram-per-cubic-centimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[g.cm-3]",   new UBASE("Scientific", "gram-per-cubic-centimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[gram-per-cubic-decimeter]",   new UBASE("Scientific", "gram-per-cubic-decimeter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[g/dm3]",   new UBASE("Scientific", "gram-per-cubic-decimeter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[gram-per-cubic-meter]",   new UBASE("Scientific", "gram-per-cubic-meter", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[g/m3]",   new UBASE("Scientific", "gram-per-cubic-meter", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0"));
      unit.put("French[hydrotimeter-degree]",   new UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0"));
      unit.put("French[oTHF]",   new UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0"));
      unit.put("French[of]",   new UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[kilogram-per-cubic-centimeter]",   new UBASE("Scientific", "kilogram-per-cubic-centimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[kg/cm3]",   new UBASE("Scientific", "kilogram-per-cubic-centimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[kilogram-per-cubic-decimeter]",   new UBASE("Scientific", "kilogram-per-cubic-decimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[kg/dm3]",   new UBASE("Scientific", "kilogram-per-cubic-decimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("SI[kilogram-per-cubic-meter]",   new UBASE("SI", "kilogram-per-cubic-meter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("SI[kg/m3]",   new UBASE("SI", "kilogram-per-cubic-meter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("US[ounce-per-gallon]",   new UBASE("US", "ounce-per-gallon", 7.489151707306040E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("US[oz/gal]",   new UBASE("US", "ounce-per-gallon", 7.489151707306040E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ounce-per-gallon]",   new UBASE("UK", "ounce-per-gallon", 6.236020547978350E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[oz/gal]",   new UBASE("UK", "ounce-per-gallon", 6.236020547978350E+00, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[pound-per-cubic-yard]",   new UBASE("Imperial", "pound-per-cubic-yard", 5.932764212577830E-01, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[lb/yd3]",   new UBASE("Imperial", "pound-per-cubic-yard", 5.932764212577830E-01, "kg/m3", "M/L3", "1.0"));
      unit.put("FPS[pound-per-cubic-foot]",   new UBASE("FPS", "pound-per-cubic-foot", 1.601846337396010E+01, "kg/m3", "M/L3", "1.0"));
      unit.put("FPS[lb/ft3]",   new UBASE("FPS", "pound-per-cubic-foot", 1.601846337396010E+01, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[pound-per-cubic-inch]",   new UBASE("Imperial", "pound-per-cubic-inch", 2.767990471020310E+04, "kg/m3", "M/L3", "1.0"));
      unit.put("Imperial[lb/in3]",   new UBASE("Imperial", "pound-per-cubic-inch", 2.767990471020310E+04, "kg/m3", "M/L3", "1.0"));
      unit.put("US[pound-per-gallon]",   new UBASE("US", "pound-per-gallon", 1.198264273168970E+02, "kg/m3", "M/L3", "1.0"));
      unit.put("US[lb/gal]",   new UBASE("US", "pound-per-gallon", 1.198264273168970E+02, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[pound-per-gallon]",   new UBASE("UK", "pound-per-gallon", 9.977632876765360E+01, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[lb/gal]",   new UBASE("UK", "pound-per-gallon", 9.977632876765360E+01, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[ton-per-cubic-meter]",   new UBASE("Scientific", "ton-per-cubic-meter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[t/m3]",   new UBASE("Scientific", "ton-per-cubic-meter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[ton-per-cubic-decimeter]",   new UBASE("Scientific", "ton-per-cubic-decimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[t/dm3]",   new UBASE("Scientific", "ton-per-cubic-decimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[ton-per-cubic-centimeter]",   new UBASE("Scientific", "ton-per-cubic-centimeter", 1.000000000000000E+09, "kg/m3", "M/L3", "1.0"));
      unit.put("Scientific[t/cm3]",   new UBASE("Scientific", "ton-per-cubic-centimeter", 1.000000000000000E+09, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ton-per-cubic-yard]",   new UBASE("UK", "ton-per-cubic-yard", 1.328939183617430E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ton/yd3]",   new UBASE("UK", "ton-per-cubic-yard", 1.328939183617430E+03, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ton-per-cubic-foot]",   new UBASE("UK", "ton-per-cubic-foot", 3.588135795767070E+04, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ton/ft3]",   new UBASE("UK", "ton-per-cubic-foot", 3.588135795767070E+04, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ton-per-cubic-inch]",   new UBASE("UK", "ton-per-cubic-inch", 6.200298655085500E+07, "kg/m3", "M/L3", "1.0"));
      unit.put("UK[ton/in3]",   new UBASE("UK", "ton-per-cubic-inch", 6.200298655085500E+07, "kg/m3", "M/L3", "1.0"));
      _map.put("density",   new BaseSystem("density", unit, "1.0"));

      unit.clear();


   }

}
// EOF
