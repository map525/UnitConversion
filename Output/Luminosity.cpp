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
// File Luminosity.cpp
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

#include"Luminosity.hpp"

Luminosity& Luminosity::Instance(void)
{
    static Luminosity singleton;
    return singleton;
}

Luminosity::Luminosity(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["French[bougie-nouvelle]"] = UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["French[bn]"] = UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["French[carcel]"] = UBASE("French", "carcel", 1.000000000000000E+01, "cd", "J", "1.0");
   unit["German[hefner-unit]"] = UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0");
   unit["German[hu]"] = UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0");
   unit["German[hefnerkerze]"] = UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0");
   unit["German[HK]"] = UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0");
   unit["INT[bougie-decimale-inlemationale]"] = UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["INT[bi]"] = UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["INT[candle]"] = UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0");
   unit["INT[c]"] = UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0");
   unit["INT[candle(new)]"] = UBASE("INT", "candle(new)", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["Scientific[bougie-decimale]"] = UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0");
   unit["Scientific[bd]"] = UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0");
   unit["Scientific[violle]"] = UBASE("Scientific", "violle", 2.040000000000000E+01, "cd", "J", "1.0");
   unit["SI[candela]"] = UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["SI[cd]"] = UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["UK[bougie-nouvelle]"] = UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["UK[bn]"] = UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0");
   unit["UK[candle(int)]"] = UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0");
   unit["UK[c]"] = UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0");
   unit["UK[candle(pentane)]"] = UBASE("UK", "candle(pentane)", 1.019367991845060E+00, "cd", "J", "1.0");
   unit["UK[carcel-unit]"] = UBASE("UK", "carcel-unit", 9.796126401630990E+00, "cd", "J", "1.0");
   unit["SI[yottacandela]"] = UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0");
   unit["SI[Ycd]"] = UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0");
   unit["SI[zettacandela]"] = UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0");
   unit["SI[Zcd]"] = UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0");
   unit["SI[exacandela]"] = UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0");
   unit["SI[Ecd]"] = UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0");
   unit["SI[petacandela]"] = UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0");
   unit["SI[Pcd]"] = UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0");
   unit["SI[teracandela]"] = UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0");
   unit["SI[Tcd]"] = UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0");
   unit["SI[gigacandela]"] = UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0");
   unit["SI[Gcd]"] = UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0");
   unit["SI[megacandela]"] = UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0");
   unit["SI[Mcd]"] = UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0");
   unit["SI[kilocandela]"] = UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0");
   unit["SI[kcd]"] = UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0");
   unit["SI[hectocandela]"] = UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0");
   unit["SI[hcd]"] = UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0");
   unit["SI[decacandela]"] = UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0");
   unit["SI[dacd]"] = UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0");
   unit["SI[decicandela]"] = UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0");
   unit["SI[dcd]"] = UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0");
   unit["SI[centicandela]"] = UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0");
   unit["SI[ccd]"] = UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0");
   unit["SI[millicandela]"] = UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0");
   unit["SI[mcd]"] = UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0");
   unit["SI[microcandela]"] = UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0");
   unit["SI[ucd]"] = UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0");
   unit["SI[nanocandela]"] = UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0");
   unit["SI[ncd]"] = UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0");
   unit["SI[picocandela]"] = UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0");
   unit["SI[pcd]"] = UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0");
   unit["SI[femtocandela]"] = UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0");
   unit["SI[fcd]"] = UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0");
   unit["SI[attocandela]"] = UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0");
   unit["SI[acd]"] = UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0");
   unit["SI[zeptocandela]"] = UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0");
   unit["SI[zcd]"] = UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0");
   unit["SI[yoctocandela]"] = UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0");
   unit["SI[ycd]"] = UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0");
   _map["luminousIntensity"] = BaseSystem("luminousIntensity", unit, "1.0");

   unit.clear();


   unit["Imperial[candlepower(spherical)]"] = UBASE("Imperial", "candlepower(spherical)", 1.256637061435920E+01, "cd.sr", "J.W", "1.0");
   unit["SI[lumen]"] = UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0");
   unit["SI[lm]"] = UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0");
   unit["SI[yottalumen]"] = UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0");
   unit["SI[Ylm]"] = UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0");
   unit["SI[zettalumen]"] = UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0");
   unit["SI[Zlm]"] = UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0");
   unit["SI[exalumen]"] = UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0");
   unit["SI[Elm]"] = UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0");
   unit["SI[petalumen]"] = UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0");
   unit["SI[Plm]"] = UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0");
   unit["SI[teralumen]"] = UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0");
   unit["SI[Tlm]"] = UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0");
   unit["SI[gigalumen]"] = UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0");
   unit["SI[Glm]"] = UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0");
   unit["SI[megalumen]"] = UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0");
   unit["SI[Mlm]"] = UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0");
   unit["SI[kilolumen]"] = UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0");
   unit["SI[klm]"] = UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0");
   unit["SI[hectolumen]"] = UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0");
   unit["SI[hlm]"] = UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0");
   unit["SI[decalumen]"] = UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0");
   unit["SI[dalm]"] = UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0");
   unit["SI[decilumen]"] = UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0");
   unit["SI[dlm]"] = UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0");
   unit["SI[centilumen]"] = UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0");
   unit["SI[clm]"] = UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0");
   unit["SI[millilumen]"] = UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0");
   unit["SI[mlm]"] = UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0");
   unit["SI[microlumen]"] = UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0");
   unit["SI[ulm]"] = UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0");
   unit["SI[nanolumen]"] = UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0");
   unit["SI[nlm]"] = UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0");
   unit["SI[picolumen]"] = UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0");
   unit["SI[plm]"] = UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0");
   unit["SI[femtolumen]"] = UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0");
   unit["SI[flm]"] = UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0");
   unit["SI[attolumen]"] = UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0");
   unit["SI[alm]"] = UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0");
   unit["SI[zeptolumen]"] = UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0");
   unit["SI[zlm]"] = UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0");
   unit["SI[yoctolumen]"] = UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0");
   unit["SI[ylm]"] = UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0");
   _map["luminousFlux"] = BaseSystem("luminousFlux", unit, "1.0");

   unit.clear();


   unit["cgs[stilb]"] = UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0");
   unit["cgs[sb]"] = UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0");
   unit["French[blondel]"] = UBASE("French", "blondel", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0");
   unit["German[apostilb]"] = UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0");
   unit["German[asb]"] = UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0");
   unit["MKSA[nit]"] = UBASE("MKSA", "nit", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0");
   unit["Scientific[brill]"] = UBASE("Scientific", "brill", 3.183098861837910E-08, "cd/m2", "J/L2", "1.0");
   unit["Scientific[luxon]"] = UBASE("Scientific", "luxon", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0");
   unit["Scientific[troland]"] = UBASE("Scientific", "troland", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0");
   unit["SI[candela-per-square-meter]"] = UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0");
   unit["SI[cd/m2]"] = UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0");
   unit["US[candela-per-square-foot]"] = UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0");
   unit["US[cd/ft2]"] = UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0");
   unit["US[foot-lambert]"] = UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0");
   unit["US[ft-L]"] = UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0");
   unit["US[lambert]"] = UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0");
   unit["US[L]"] = UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0");
   unit["cgs[phot]"] = UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0");
   unit["cgs[ph]"] = UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0");
   _map["luminance"] = BaseSystem("luminance", unit, "1.0");

   unit.clear();


   unit["German[nox]"] = UBASE("German", "nox", 3.183098861837910E-04, "cd.sr/m2", "J.W/L2", "1.0");
   unit["German[skot]"] = UBASE("German", "skot", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[lux]"] = UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[lx]"] = UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0");
   unit["UK[foot-candle]"] = UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["UK[ft-C]"] = UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["UK[dt-cd]"] = UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["UK[fc]"] = UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[yottalux]"] = UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Ylx]"] = UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[zettalux]"] = UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Zlx]"] = UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[exalux]"] = UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Elx]"] = UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[petalux]"] = UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Plx]"] = UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[teralux]"] = UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Tlx]"] = UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[gigalux]"] = UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Glx]"] = UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[megalux]"] = UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[Mlx]"] = UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[kilolux]"] = UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[klx]"] = UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[hectolux]"] = UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[hlx]"] = UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[decalux]"] = UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[dalx]"] = UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[decilux]"] = UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[dlx]"] = UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[centilux]"] = UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[clx]"] = UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[millilux]"] = UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[mlx]"] = UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[microlux]"] = UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[ulx]"] = UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[nanolux]"] = UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[nlx]"] = UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[picolux]"] = UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[plx]"] = UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[femtolux]"] = UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[flx]"] = UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[attolux]"] = UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[alx]"] = UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[zeptolux]"] = UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[zlx]"] = UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[yoctolux]"] = UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0");
   unit["SI[ylx]"] = UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0");
   _map["illuminance"] = BaseSystem("illuminance", unit, "1.0");

   unit.clear();


   unit["cgs[lumberg]"] = UBASE("cgs", "lumberg", 1.000000000000000E-07, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[watt-per-steradian]"] = UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[W/W]"] = UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[gigawatt-per-steradian]"] = UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[GW/W]"] = UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[megawatt-per-steradian]"] = UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[MW/W]"] = UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[kilowatt-per-steradian]"] = UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[kW/W]"] = UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[milliwatt-per-steradian]"] = UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[mW/W]"] = UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[microwatt-per-steradian]"] = UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   unit["SI[uW/W]"] = UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0");
   _map["radiantIntensity"] = BaseSystem("radiantIntensity", unit, "1.0");

   unit.clear();


}

// EOF
