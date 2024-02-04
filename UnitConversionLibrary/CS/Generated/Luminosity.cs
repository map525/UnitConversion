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
// File Luminosity.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class Luminosity : SingleSystem
   {
       private static Luminosity singleton_ = new Luminosity();

       public static Luminosity Instance()
       {
           return singleton_;
       }

       private Luminosity() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("French[bougie-nouvelle]",   new UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("French[bn]",   new UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("French[carcel]",   new UBASE("French", "carcel", 1.000000000000000E+01, "cd", "J", "1.0"));
          unit.Add("German[hefner-unit]",   new UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0"));
          unit.Add("German[hu]",   new UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0"));
          unit.Add("German[hefnerkerze]",   new UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0"));
          unit.Add("German[HK]",   new UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0"));
          unit.Add("INT[bougie-decimale-inlemationale]",   new UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("INT[bi]",   new UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("INT[candle]",   new UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0"));
          unit.Add("INT[c]",   new UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0"));
          unit.Add("INT[candle(new)]",   new UBASE("INT", "candle(new)", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("Scientific[bougie-decimale]",   new UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0"));
          unit.Add("Scientific[bd]",   new UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0"));
          unit.Add("Scientific[violle]",   new UBASE("Scientific", "violle", 2.040000000000000E+01, "cd", "J", "1.0"));
          unit.Add("SI[candela]",   new UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("SI[cd]",   new UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("UK[bougie-nouvelle]",   new UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("UK[bn]",   new UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0"));
          unit.Add("UK[candle(int)]",   new UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0"));
          unit.Add("UK[c]",   new UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0"));
          unit.Add("UK[candle(pentane)]",   new UBASE("UK", "candle(pentane)", 1.019367991845060E+00, "cd", "J", "1.0"));
          unit.Add("UK[carcel-unit]",   new UBASE("UK", "carcel-unit", 9.796126401630990E+00, "cd", "J", "1.0"));
          unit.Add("SI[yottacandela]",   new UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0"));
          unit.Add("SI[Ycd]",   new UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0"));
          unit.Add("SI[zettacandela]",   new UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0"));
          unit.Add("SI[Zcd]",   new UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0"));
          unit.Add("SI[exacandela]",   new UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0"));
          unit.Add("SI[Ecd]",   new UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0"));
          unit.Add("SI[petacandela]",   new UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0"));
          unit.Add("SI[Pcd]",   new UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0"));
          unit.Add("SI[teracandela]",   new UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0"));
          unit.Add("SI[Tcd]",   new UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0"));
          unit.Add("SI[gigacandela]",   new UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0"));
          unit.Add("SI[Gcd]",   new UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0"));
          unit.Add("SI[megacandela]",   new UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0"));
          unit.Add("SI[Mcd]",   new UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0"));
          unit.Add("SI[kilocandela]",   new UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0"));
          unit.Add("SI[kcd]",   new UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0"));
          unit.Add("SI[hectocandela]",   new UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0"));
          unit.Add("SI[hcd]",   new UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0"));
          unit.Add("SI[decacandela]",   new UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0"));
          unit.Add("SI[dacd]",   new UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0"));
          unit.Add("SI[decicandela]",   new UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0"));
          unit.Add("SI[dcd]",   new UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0"));
          unit.Add("SI[centicandela]",   new UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0"));
          unit.Add("SI[ccd]",   new UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0"));
          unit.Add("SI[millicandela]",   new UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0"));
          unit.Add("SI[mcd]",   new UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0"));
          unit.Add("SI[microcandela]",   new UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0"));
          unit.Add("SI[ucd]",   new UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0"));
          unit.Add("SI[nanocandela]",   new UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0"));
          unit.Add("SI[ncd]",   new UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0"));
          unit.Add("SI[picocandela]",   new UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0"));
          unit.Add("SI[pcd]",   new UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0"));
          unit.Add("SI[femtocandela]",   new UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0"));
          unit.Add("SI[fcd]",   new UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0"));
          unit.Add("SI[attocandela]",   new UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0"));
          unit.Add("SI[acd]",   new UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0"));
          unit.Add("SI[zeptocandela]",   new UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0"));
          unit.Add("SI[zcd]",   new UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0"));
          unit.Add("SI[yoctocandela]",   new UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0"));
          unit.Add("SI[ycd]",   new UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0"));
          _map.Add("luminousIntensity",   new BaseSystem("luminousIntensity", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[candlepower(spherical)]",   new UBASE("Imperial", "candlepower(spherical)", 1.256637061435920E+01, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[lumen]",   new UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[lm]",   new UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[yottalumen]",   new UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Ylm]",   new UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[zettalumen]",   new UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Zlm]",   new UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[exalumen]",   new UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Elm]",   new UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[petalumen]",   new UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Plm]",   new UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[teralumen]",   new UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Tlm]",   new UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[gigalumen]",   new UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Glm]",   new UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[megalumen]",   new UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[Mlm]",   new UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[kilolumen]",   new UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[klm]",   new UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[hectolumen]",   new UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[hlm]",   new UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[decalumen]",   new UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[dalm]",   new UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[decilumen]",   new UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[dlm]",   new UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[centilumen]",   new UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[clm]",   new UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[millilumen]",   new UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[mlm]",   new UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[microlumen]",   new UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[ulm]",   new UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[nanolumen]",   new UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[nlm]",   new UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[picolumen]",   new UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[plm]",   new UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[femtolumen]",   new UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[flm]",   new UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[attolumen]",   new UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[alm]",   new UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[zeptolumen]",   new UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[zlm]",   new UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[yoctolumen]",   new UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0"));
          unit.Add("SI[ylm]",   new UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0"));
          _map.Add("luminousFlux",   new BaseSystem("luminousFlux", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[stilb]",   new UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
          unit.Add("cgs[sb]",   new UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
          unit.Add("French[blondel]",   new UBASE("French", "blondel", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0"));
          unit.Add("German[apostilb]",   new UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0"));
          unit.Add("German[asb]",   new UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0"));
          unit.Add("MKSA[nit]",   new UBASE("MKSA", "nit", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0"));
          unit.Add("Scientific[brill]",   new UBASE("Scientific", "brill", 3.183098861837910E-08, "cd/m2", "J/L2", "1.0"));
          unit.Add("Scientific[luxon]",   new UBASE("Scientific", "luxon", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
          unit.Add("Scientific[troland]",   new UBASE("Scientific", "troland", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
          unit.Add("SI[candela-per-square-meter]",   new UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0"));
          unit.Add("SI[cd/m2]",   new UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0"));
          unit.Add("US[candela-per-square-foot]",   new UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0"));
          unit.Add("US[cd/ft2]",   new UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0"));
          unit.Add("US[foot-lambert]",   new UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0"));
          unit.Add("US[ft-L]",   new UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0"));
          unit.Add("US[lambert]",   new UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0"));
          unit.Add("US[L]",   new UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0"));
          unit.Add("cgs[phot]",   new UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
          unit.Add("cgs[ph]",   new UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0"));
          _map.Add("luminance",   new BaseSystem("luminance", unit, "1.0"));

          unit.Clear();


          unit.Add("German[nox]",   new UBASE("German", "nox", 3.183098861837910E-04, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("German[skot]",   new UBASE("German", "skot", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[lux]",   new UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[lx]",   new UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("UK[foot-candle]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("UK[ft-C]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("UK[dt-cd]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("UK[fc]",   new UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[yottalux]",   new UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Ylx]",   new UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[zettalux]",   new UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Zlx]",   new UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[exalux]",   new UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Elx]",   new UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[petalux]",   new UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Plx]",   new UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[teralux]",   new UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Tlx]",   new UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[gigalux]",   new UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Glx]",   new UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[megalux]",   new UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[Mlx]",   new UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[kilolux]",   new UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[klx]",   new UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[hectolux]",   new UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[hlx]",   new UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[decalux]",   new UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[dalx]",   new UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[decilux]",   new UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[dlx]",   new UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[centilux]",   new UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[clx]",   new UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[millilux]",   new UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[mlx]",   new UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[microlux]",   new UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[ulx]",   new UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[nanolux]",   new UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[nlx]",   new UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[picolux]",   new UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[plx]",   new UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[femtolux]",   new UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[flx]",   new UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[attolux]",   new UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[alx]",   new UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[zeptolux]",   new UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[zlx]",   new UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[yoctolux]",   new UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0"));
          unit.Add("SI[ylx]",   new UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0"));
          _map.Add("illuminance",   new BaseSystem("illuminance", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[lumberg]",   new UBASE("cgs", "lumberg", 1.000000000000000E-07, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[watt-per-steradian]",   new UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[W/W]",   new UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[gigawatt-per-steradian]",   new UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[GW/W]",   new UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[megawatt-per-steradian]",   new UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[MW/W]",   new UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[kilowatt-per-steradian]",   new UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[kW/W]",   new UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[milliwatt-per-steradian]",   new UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[mW/W]",   new UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[microwatt-per-steradian]",   new UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          unit.Add("SI[uW/W]",   new UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0"));
          _map.Add("radiantIntensity",   new BaseSystem("radiantIntensity", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
