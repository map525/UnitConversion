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
// File Luminosity.java
//
// Units for Luminosity
//
// Class for Luminosity units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class Luminosity extends SingleSystem
{
   private static Luminosity singleton_ = new Luminosity();

   public static Luminosity Instance()
   {
      return singleton_;
   }

   private Luminosity()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("French[bougie-nouvelle]",   new UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("French[bn]",   new UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("French[carcel]",   new UBASE("French", "carcel", 1.000000000000000E+01, "cd", "J", "1.0"));
      unit.put("German[hefner-unit]",   new UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0"));
      unit.put("German[hu]",   new UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0"));
      unit.put("German[hefnerkerze]",   new UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0"));
      unit.put("German[HK]",   new UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0"));
      unit.put("INT[bougie-decimale-inlemationale]",   new UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("INT[bi]",   new UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("INT[candle]",   new UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0"));
      unit.put("INT[c]",   new UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0"));
      unit.put("INT[candle(new)]",   new UBASE("INT", "candle(new)", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("Scientific[bougie-decimale]",   new UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0"));
      unit.put("Scientific[bd]",   new UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0"));
      unit.put("Scientific[violle]",   new UBASE("Scientific", "violle", 2.040000000000000E+01, "cd", "J", "1.0"));
      unit.put("SI[candela]",   new UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("SI[cd]",   new UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("UK[bougie-nouvelle]",   new UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("UK[bn]",   new UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
      unit.put("UK[candle(int)]",   new UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0"));
      unit.put("UK[c]",   new UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0"));
      unit.put("UK[candle(pentane)]",   new UBASE("UK", "candle(pentane)", 1.019367991845060E+00, "cd", "J", "1.0"));
      unit.put("UK[carcel-unit]",   new UBASE("UK", "carcel-unit", 9.796126401630990E+00, "cd", "J", "1.0"));
      unit.put("SI[yottacandela]",   new UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0"));
      unit.put("SI[Ycd]",   new UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0"));
      unit.put("SI[zettacandela]",   new UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0"));
      unit.put("SI[Zcd]",   new UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0"));
      unit.put("SI[exacandela]",   new UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0"));
      unit.put("SI[Ecd]",   new UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0"));
      unit.put("SI[petacandela]",   new UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0"));
      unit.put("SI[Pcd]",   new UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0"));
      unit.put("SI[teracandela]",   new UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0"));
      unit.put("SI[Tcd]",   new UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0"));
      unit.put("SI[gigacandela]",   new UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0"));
      unit.put("SI[Gcd]",   new UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0"));
      unit.put("SI[megacandela]",   new UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0"));
      unit.put("SI[Mcd]",   new UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0"));
      unit.put("SI[kilocandela]",   new UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0"));
      unit.put("SI[kcd]",   new UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0"));
      unit.put("SI[hectocandela]",   new UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0"));
      unit.put("SI[hcd]",   new UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0"));
      unit.put("SI[decacandela]",   new UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0"));
      unit.put("SI[dacd]",   new UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0"));
      unit.put("SI[decicandela]",   new UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0"));
      unit.put("SI[dcd]",   new UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0"));
      unit.put("SI[centicandela]",   new UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0"));
      unit.put("SI[ccd]",   new UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0"));
      unit.put("SI[millicandela]",   new UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0"));
      unit.put("SI[mcd]",   new UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0"));
      unit.put("SI[microcandela]",   new UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0"));
      unit.put("SI[ucd]",   new UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0"));
      unit.put("SI[nanocandela]",   new UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0"));
      unit.put("SI[ncd]",   new UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0"));
      unit.put("SI[picocandela]",   new UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0"));
      unit.put("SI[pcd]",   new UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0"));
      unit.put("SI[femtocandela]",   new UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0"));
      unit.put("SI[fcd]",   new UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0"));
      unit.put("SI[attocandela]",   new UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0"));
      unit.put("SI[acd]",   new UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0"));
      unit.put("SI[zeptocandela]",   new UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0"));
      unit.put("SI[zcd]",   new UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0"));
      unit.put("SI[yoctocandela]",   new UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0"));
      unit.put("SI[ycd]",   new UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0"));
      _map.put("luminousIntensity",   new BaseSystem("luminousIntensity", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[candlepower(spherical)]",   new UBASE("Imperial", "candlepower(spherical)", 1.256637061435920E+01, "cd.sr", "J.W", "1.0"));
      unit.put("SI[lumen]",   new UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0"));
      unit.put("SI[lm]",   new UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0"));
      unit.put("SI[yottalumen]",   new UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Ylm]",   new UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0"));
      unit.put("SI[zettalumen]",   new UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Zlm]",   new UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0"));
      unit.put("SI[exalumen]",   new UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Elm]",   new UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0"));
      unit.put("SI[petalumen]",   new UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Plm]",   new UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0"));
      unit.put("SI[teralumen]",   new UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Tlm]",   new UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0"));
      unit.put("SI[gigalumen]",   new UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Glm]",   new UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0"));
      unit.put("SI[megalumen]",   new UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0"));
      unit.put("SI[Mlm]",   new UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0"));
      unit.put("SI[kilolumen]",   new UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0"));
      unit.put("SI[klm]",   new UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0"));
      unit.put("SI[hectolumen]",   new UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0"));
      unit.put("SI[hlm]",   new UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0"));
      unit.put("SI[decalumen]",   new UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0"));
      unit.put("SI[dalm]",   new UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0"));
      unit.put("SI[decilumen]",   new UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0"));
      unit.put("SI[dlm]",   new UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0"));
      unit.put("SI[centilumen]",   new UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0"));
      unit.put("SI[clm]",   new UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0"));
      unit.put("SI[millilumen]",   new UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0"));
      unit.put("SI[mlm]",   new UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0"));
      unit.put("SI[microlumen]",   new UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0"));
      unit.put("SI[ulm]",   new UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0"));
      unit.put("SI[nanolumen]",   new UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0"));
      unit.put("SI[nlm]",   new UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0"));
      unit.put("SI[picolumen]",   new UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0"));
      unit.put("SI[plm]",   new UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0"));
      unit.put("SI[femtolumen]",   new UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0"));
      unit.put("SI[flm]",   new UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0"));
      unit.put("SI[attolumen]",   new UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0"));
      unit.put("SI[alm]",   new UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0"));
      unit.put("SI[zeptolumen]",   new UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0"));
      unit.put("SI[zlm]",   new UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0"));
      unit.put("SI[yoctolumen]",   new UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0"));
      unit.put("SI[ylm]",   new UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0"));
      _map.put("luminousFlux",   new BaseSystem("luminousFlux", unit, "1.0"));

      unit.clear();


      unit.put("cgs[stilb]",   new UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
      unit.put("cgs[sb]",   new UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
      unit.put("French[blondel]",   new UBASE("French", "blondel", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0"));
      unit.put("German[apostilb]",   new UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0"));
      unit.put("German[asb]",   new UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0"));
      unit.put("MKSA[nit]",   new UBASE("MKSA", "nit", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0"));
      unit.put("Scientific[brill]",   new UBASE("Scientific", "brill", 3.183098861837910E-08, "cd/m2", "J/L2", "1.0"));
      unit.put("Scientific[luxon]",   new UBASE("Scientific", "luxon", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
      unit.put("Scientific[troland]",   new UBASE("Scientific", "troland", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
      unit.put("SI[candela-per-square-meter]",   new UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0"));
      unit.put("SI[cd/m2]",   new UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0"));
      unit.put("US[candela-per-square-foot]",   new UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0"));
      unit.put("US[cd/ft2]",   new UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0"));
      unit.put("US[foot-lambert]",   new UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0"));
      unit.put("US[ft-L]",   new UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0"));
      unit.put("US[lambert]",   new UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0"));
      unit.put("US[L]",   new UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0"));
      unit.put("cgs[phot]",   new UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
      unit.put("cgs[ph]",   new UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
      _map.put("luminance",   new BaseSystem("luminance", unit, "1.0"));

      unit.clear();


      unit.put("German[nox]",   new UBASE("German", "nox", 3.183098861837910E-04, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("German[skot]",   new UBASE("German", "skot", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[lux]",   new UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[lx]",   new UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("UK[foot-candle]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("UK[ft-C]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("UK[dt-cd]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("UK[fc]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[yottalux]",   new UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Ylx]",   new UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[zettalux]",   new UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Zlx]",   new UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[exalux]",   new UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Elx]",   new UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[petalux]",   new UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Plx]",   new UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[teralux]",   new UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Tlx]",   new UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[gigalux]",   new UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Glx]",   new UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[megalux]",   new UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[Mlx]",   new UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[kilolux]",   new UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[klx]",   new UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[hectolux]",   new UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[hlx]",   new UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[decalux]",   new UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[dalx]",   new UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[decilux]",   new UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[dlx]",   new UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[centilux]",   new UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[clx]",   new UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[millilux]",   new UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[mlx]",   new UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[microlux]",   new UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[ulx]",   new UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[nanolux]",   new UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[nlx]",   new UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[picolux]",   new UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[plx]",   new UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[femtolux]",   new UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[flx]",   new UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[attolux]",   new UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[alx]",   new UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[zeptolux]",   new UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[zlx]",   new UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[yoctolux]",   new UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0"));
      unit.put("SI[ylx]",   new UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0"));
      _map.put("illuminance",   new BaseSystem("illuminance", unit, "1.0"));

      unit.clear();


      unit.put("cgs[lumberg]",   new UBASE("cgs", "lumberg", 1.000000000000000E-07, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[watt-per-steradian]",   new UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[W/W]",   new UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[gigawatt-per-steradian]",   new UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[GW/W]",   new UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[megawatt-per-steradian]",   new UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[MW/W]",   new UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[kilowatt-per-steradian]",   new UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[kW/W]",   new UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[milliwatt-per-steradian]",   new UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[mW/W]",   new UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[microwatt-per-steradian]",   new UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      unit.put("SI[uW/W]",   new UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
      _map.put("radiantIntensity",   new BaseSystem("radiantIntensity", unit, "1.0"));

      unit.clear();


   }

}
// EOF
