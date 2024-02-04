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
// File Radiation.cpp
//
// Units for Radiation
//
// Class for Radiation units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Radiation.hpp"

Radiation& Radiation::Instance(void)
{
    static Radiation singleton;
    return singleton;
}

Radiation::Radiation(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["Scientific[particle-flux-unit]"] = UBASE("Scientific", "particle-flux-unit", 1.000000000000000E+04, "1/m2.s.sr", "1/L2.T.W", "1.0");
   unit["Scientific[pfu]"] = UBASE("Scientific", "particle-flux-unit", 1.000000000000000E+04, "1/m2.s.sr", "1/L2.T.W", "1.0");
   unit["Scientific[rayleigh]"] = UBASE("Scientific", "rayleigh", 7.957747154594770E+08, "1/m2.s.sr", "1/L2.T.W", "1.0");
   unit["Scientific[R]"] = UBASE("Scientific", "rayleigh", 7.957747154594770E+08, "1/m2.s.sr", "1/L2.T.W", "1.0");
   _map["particleFlux"] = BaseSystem("particleFlux", unit, "1.0");

   unit.clear();


   unit["UK[british-thermal-unit(IT)-per-pound]"] = UBASE("UK", "british-thermal-unit(IT)-per-pound", 2.326000000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["UK[Btu(IT)/lb]"] = UBASE("UK", "british-thermal-unit(IT)-per-pound", 2.326000000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["UK[british-thermal-unit(therm)-per-pound]"] = UBASE("UK", "british-thermal-unit(therm)-per-pound", 2.324444444444440E+03, "m2/s2", "L2/T2", "1.0");
   unit["UK[Btu(therm)/lb]"] = UBASE("UK", "british-thermal-unit(therm)-per-pound", 2.324444444444440E+03, "m2/s2", "L2/T2", "1.0");
   unit["INT[calorie(IT)-per-gram]"] = UBASE("INT", "calorie(IT)-per-gram", 4.186800000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["INT[cal(IT)/g]"] = UBASE("INT", "calorie(IT)-per-gram", 4.186800000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[gram-rad]"] = UBASE("Scientific", "gram-rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["SI[gray]"] = UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   unit["SI[Gy]"] = UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[kerma]"] = UBASE("Scientific", "kerma", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[n-unit]"] = UBASE("Scientific", "n-unit", 4.000000000000000E+01, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[rad]"] = UBASE("Scientific", "rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[rd]"] = UBASE("Scientific", "rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[rad-equivalent-physical]"] = UBASE("Scientific", "rad-equivalent-physical", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[rep]"] = UBASE("Scientific", "rad-equivalent-physical", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[radiation-absorbed-dose]"] = UBASE("Scientific", "radiation-absorbed-dose", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["Scientific[rem]"] = UBASE("Scientific", "rem", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["SI[sievert]"] = UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   unit["SI[Sv]"] = UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0");
   unit["SI[yottagray]"] = UBASE("SI", "yottagray", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0");
   unit["SI[YGy]"] = UBASE("SI", "yottagray", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0");
   unit["SI[zettagray]"] = UBASE("SI", "zettagray", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0");
   unit["SI[ZGy]"] = UBASE("SI", "zettagray", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0");
   unit["SI[exacgray]"] = UBASE("SI", "exacgray", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0");
   unit["SI[EGy]"] = UBASE("SI", "exacgray", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0");
   unit["SI[petagray]"] = UBASE("SI", "petagray", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0");
   unit["SI[PGy]"] = UBASE("SI", "petagray", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0");
   unit["SI[teragray]"] = UBASE("SI", "teragray", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0");
   unit["SI[TGy]"] = UBASE("SI", "teragray", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0");
   unit["SI[gigagray]"] = UBASE("SI", "gigagray", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0");
   unit["SI[GGy]"] = UBASE("SI", "gigagray", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0");
   unit["SI[megagray]"] = UBASE("SI", "megagray", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0");
   unit["SI[MGy]"] = UBASE("SI", "megagray", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0");
   unit["SI[kilocgray]"] = UBASE("SI", "kilocgray", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["SI[kGy]"] = UBASE("SI", "kilocgray", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["SI[hectogray]"] = UBASE("SI", "hectogray", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0");
   unit["SI[hGy]"] = UBASE("SI", "hectogray", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0");
   unit["SI[decacgray]"] = UBASE("SI", "decacgray", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0");
   unit["SI[daGy]"] = UBASE("SI", "decacgray", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0");
   unit["SI[decigray]"] = UBASE("SI", "decigray", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0");
   unit["SI[dGy]"] = UBASE("SI", "decigray", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0");
   unit["SI[centigray]"] = UBASE("SI", "centigray", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["SI[cGy]"] = UBASE("SI", "centigray", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["SI[milligray]"] = UBASE("SI", "milligray", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0");
   unit["SI[mGy]"] = UBASE("SI", "milligray", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0");
   unit["SI[microgray]"] = UBASE("SI", "microgray", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0");
   unit["SI[uGy]"] = UBASE("SI", "microgray", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0");
   unit["SI[nanogray]"] = UBASE("SI", "nanogray", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0");
   unit["SI[nGy]"] = UBASE("SI", "nanogray", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0");
   unit["SI[picogray]"] = UBASE("SI", "picogray", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0");
   unit["SI[pGy]"] = UBASE("SI", "picogray", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0");
   unit["SI[femtogray]"] = UBASE("SI", "femtogray", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0");
   unit["SI[fGy]"] = UBASE("SI", "femtogray", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0");
   unit["SI[attogray]"] = UBASE("SI", "attogray", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0");
   unit["SI[aGy]"] = UBASE("SI", "attogray", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0");
   unit["SI[zeptogray]"] = UBASE("SI", "zeptogray", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0");
   unit["SI[zGy]"] = UBASE("SI", "zeptogray", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0");
   unit["SI[yoctogray]"] = UBASE("SI", "yoctogray", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0");
   unit["SI[yGy]"] = UBASE("SI", "yoctogray", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0");
   unit["SI[yottasievert]"] = UBASE("SI", "yottasievert", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0");
   unit["SI[YSv]"] = UBASE("SI", "yottasievert", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0");
   unit["SI[zettasievert]"] = UBASE("SI", "zettasievert", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0");
   unit["SI[ZSv]"] = UBASE("SI", "zettasievert", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0");
   unit["SI[exacsievert]"] = UBASE("SI", "exacsievert", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0");
   unit["SI[ESv]"] = UBASE("SI", "exacsievert", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0");
   unit["SI[petasievert]"] = UBASE("SI", "petasievert", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0");
   unit["SI[PSv]"] = UBASE("SI", "petasievert", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0");
   unit["SI[terasievert]"] = UBASE("SI", "terasievert", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0");
   unit["SI[TSv]"] = UBASE("SI", "terasievert", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0");
   unit["SI[gigasievert]"] = UBASE("SI", "gigasievert", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0");
   unit["SI[GSv]"] = UBASE("SI", "gigasievert", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0");
   unit["SI[megasievert]"] = UBASE("SI", "megasievert", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0");
   unit["SI[MSv]"] = UBASE("SI", "megasievert", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0");
   unit["SI[kilocsievert]"] = UBASE("SI", "kilocsievert", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["SI[kSv]"] = UBASE("SI", "kilocsievert", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0");
   unit["SI[hectosievert]"] = UBASE("SI", "hectosievert", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0");
   unit["SI[hSv]"] = UBASE("SI", "hectosievert", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0");
   unit["SI[decacsievert]"] = UBASE("SI", "decacsievert", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0");
   unit["SI[daSv]"] = UBASE("SI", "decacsievert", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0");
   unit["SI[decisievert]"] = UBASE("SI", "decisievert", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0");
   unit["SI[dSv]"] = UBASE("SI", "decisievert", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0");
   unit["SI[centisievert]"] = UBASE("SI", "centisievert", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["SI[cSv]"] = UBASE("SI", "centisievert", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0");
   unit["SI[millisievert]"] = UBASE("SI", "millisievert", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0");
   unit["SI[mSv]"] = UBASE("SI", "millisievert", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0");
   unit["SI[microsievert]"] = UBASE("SI", "microsievert", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0");
   unit["SI[uSv]"] = UBASE("SI", "microsievert", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0");
   unit["SI[nanosievert]"] = UBASE("SI", "nanosievert", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0");
   unit["SI[nSv]"] = UBASE("SI", "nanosievert", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0");
   unit["SI[picosievert]"] = UBASE("SI", "picosievert", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0");
   unit["SI[pSv]"] = UBASE("SI", "picosievert", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0");
   unit["SI[femtosievert]"] = UBASE("SI", "femtosievert", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0");
   unit["SI[fSv]"] = UBASE("SI", "femtosievert", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0");
   unit["SI[attosievert]"] = UBASE("SI", "attosievert", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0");
   unit["SI[aSv]"] = UBASE("SI", "attosievert", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0");
   unit["SI[zeptosievert]"] = UBASE("SI", "zeptosievert", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0");
   unit["SI[zSv]"] = UBASE("SI", "zeptosievert", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0");
   unit["SI[yoctosievert]"] = UBASE("SI", "yoctosievert", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0");
   unit["SI[ySv]"] = UBASE("SI", "yoctosievert", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0");
   _map["specificEnergy"] = BaseSystem("specificEnergy", unit, "1.0");

   unit.clear();


   unit["Scientific[curie-per-liter]"] = UBASE("Scientific", "curie-per-liter", 3.700000000000000E+13, "1/m3.s", "1/L3.T", "1.0");
   unit["Scientific[Ci/l]"] = UBASE("Scientific", "curie-per-liter", 3.700000000000000E+13, "1/m3.s", "1/L3.T", "1.0");
   unit["Scientific[eman]"] = UBASE("Scientific", "eman", 3.700000000000000E+03, "1/m3.s", "1/L3.T", "1.0");
   unit["SI[becquerel-per-cubic-meter]"] = UBASE("SI", "becquerel-per-cubic-meter", 1.000000000000000E+00, "1/m3.s", "1/L3.T", "1.0");
   unit["SI[Bq/m3]"] = UBASE("SI", "becquerel-per-cubic-meter", 1.000000000000000E+00, "1/m3.s", "1/L3.T", "1.0");
   _map["radioactiveConcentration"] = BaseSystem("radioactiveConcentration", unit, "1.0");

   unit.clear();


   unit["German[R-unit(German)]"] = UBASE("German", "R-unit(German)", 3.762500000000000E-04, "A/kg", "I/M", "1.0");
   unit["German[R-unit(G)]"] = UBASE("German", "R-unit(German)", 3.762500000000000E-04, "A/kg", "I/M", "1.0");
   unit["German[R-unit(Solomon)]"] = UBASE("German", "R-unit(Solomon)", 1.505000000000000E-04, "A/kg", "I/M", "1.0");
   unit["German[R-unit(S)]"] = UBASE("German", "R-unit(Solomon)", 1.505000000000000E-04, "A/kg", "I/M", "1.0");
   unit["Scientific[E-unit]"] = UBASE("Scientific", "E-unit", 2.580000000000000E-04, "A/kg", "I/M", "1.0");
   _map["exposureRate"] = BaseSystem("exposureRate", unit, "1.0");

   unit.clear();


   unit["Scientific[strontium-unit]"] = UBASE("Scientific", "strontium-unit", 3.700000000000000E+04, "1/kg.s", "1/M.T", "1.0");
   unit["SI[becquerel-per-kilogram]"] = UBASE("SI", "becquerel-per-kilogram", 1.000000000000000E+00, "1/kg.s", "1/M.T", "1.0");
   unit["SI[Bq/kg]"] = UBASE("SI", "becquerel-per-kilogram", 1.000000000000000E+00, "1/kg.s", "1/M.T", "1.0");
   _map["specificRadioactivity"] = BaseSystem("specificRadioactivity", unit, "1.0");

   unit.clear();


   unit["INT[sievert-unit]"] = UBASE("INT", "sievert-unit", 2.162040000000000E-03, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[coulomb-per-kilogram]"] = UBASE("Scientific", "coulomb-per-kilogram", 1.000000000000000E+00, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[C/kg]"] = UBASE("Scientific", "coulomb-per-kilogram", 1.000000000000000E+00, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[D-unit]"] = UBASE("Scientific", "D-unit", 2.580000000000000E-02, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[pastille-dose]"] = UBASE("Scientific", "pastille-dose", 1.290000000000000E-01, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[B-unit]"] = UBASE("Scientific", "pastille-dose", 1.290000000000000E-01, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[roentgen]"] = UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[R]"] = UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0");
   unit["Scientific[e-unit]"] = UBASE("Scientific", "e-unit", 1.806000000000000E-03, "s.A/kg", "T.I/M", "1.0");
   _map["exposure"] = BaseSystem("exposure", unit, "1.0");

   unit.clear();


}

// EOF
