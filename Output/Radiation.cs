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
// File Radiation.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class Radiation : SingleSystem
   {
       private static Radiation singleton_ = new Radiation();

       public static Radiation Instance()
       {
           return singleton_;
       }

       private Radiation() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("Scientific[particle-flux-unit]",   new UBASE("Scientific", "particle-flux-unit", 1.000000000000000E+04, "1/m2.s.sr", "1/L2.T.W", "1.0"));
          unit.Add("Scientific[pfu]",   new UBASE("Scientific", "particle-flux-unit", 1.000000000000000E+04, "1/m2.s.sr", "1/L2.T.W", "1.0"));
          unit.Add("Scientific[rayleigh]",   new UBASE("Scientific", "rayleigh", 7.957747154594770E+08, "1/m2.s.sr", "1/L2.T.W", "1.0"));
          unit.Add("Scientific[R]",   new UBASE("Scientific", "rayleigh", 7.957747154594770E+08, "1/m2.s.sr", "1/L2.T.W", "1.0"));
          _map.Add("particleFlux",   new BaseSystem("particleFlux", unit, "1.0"));

          unit.Clear();


          unit.Add("UK[british-thermal-unit(IT)-per-pound]",   new UBASE("UK", "british-thermal-unit(IT)-per-pound", 2.326000000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("UK[Btu(IT)/lb]",   new UBASE("UK", "british-thermal-unit(IT)-per-pound", 2.326000000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(therm)-per-pound]",   new UBASE("UK", "british-thermal-unit(therm)-per-pound", 2.324444444444440E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("UK[Btu(therm)/lb]",   new UBASE("UK", "british-thermal-unit(therm)-per-pound", 2.324444444444440E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("INT[calorie(IT)-per-gram]",   new UBASE("INT", "calorie(IT)-per-gram", 4.186800000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("INT[cal(IT)/g]",   new UBASE("INT", "calorie(IT)-per-gram", 4.186800000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[gram-rad]",   new UBASE("Scientific", "gram-rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[gray]",   new UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[Gy]",   new UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[kerma]",   new UBASE("Scientific", "kerma", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[n-unit]",   new UBASE("Scientific", "n-unit", 4.000000000000000E+01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[rad]",   new UBASE("Scientific", "rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[rd]",   new UBASE("Scientific", "rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[rad-equivalent-physical]",   new UBASE("Scientific", "rad-equivalent-physical", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[rep]",   new UBASE("Scientific", "rad-equivalent-physical", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[radiation-absorbed-dose]",   new UBASE("Scientific", "radiation-absorbed-dose", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("Scientific[rem]",   new UBASE("Scientific", "rem", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[sievert]",   new UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[Sv]",   new UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[yottagray]",   new UBASE("SI", "yottagray", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[YGy]",   new UBASE("SI", "yottagray", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[zettagray]",   new UBASE("SI", "zettagray", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[ZGy]",   new UBASE("SI", "zettagray", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[exacgray]",   new UBASE("SI", "exacgray", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[EGy]",   new UBASE("SI", "exacgray", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[petagray]",   new UBASE("SI", "petagray", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[PGy]",   new UBASE("SI", "petagray", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[teragray]",   new UBASE("SI", "teragray", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[TGy]",   new UBASE("SI", "teragray", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[gigagray]",   new UBASE("SI", "gigagray", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[GGy]",   new UBASE("SI", "gigagray", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[megagray]",   new UBASE("SI", "megagray", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[MGy]",   new UBASE("SI", "megagray", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[kilocgray]",   new UBASE("SI", "kilocgray", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[kGy]",   new UBASE("SI", "kilocgray", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[hectogray]",   new UBASE("SI", "hectogray", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[hGy]",   new UBASE("SI", "hectogray", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[decacgray]",   new UBASE("SI", "decacgray", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[daGy]",   new UBASE("SI", "decacgray", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[decigray]",   new UBASE("SI", "decigray", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[dGy]",   new UBASE("SI", "decigray", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[centigray]",   new UBASE("SI", "centigray", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[cGy]",   new UBASE("SI", "centigray", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[milligray]",   new UBASE("SI", "milligray", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[mGy]",   new UBASE("SI", "milligray", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[microgray]",   new UBASE("SI", "microgray", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[uGy]",   new UBASE("SI", "microgray", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[nanogray]",   new UBASE("SI", "nanogray", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[nGy]",   new UBASE("SI", "nanogray", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[picogray]",   new UBASE("SI", "picogray", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[pGy]",   new UBASE("SI", "picogray", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[femtogray]",   new UBASE("SI", "femtogray", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[fGy]",   new UBASE("SI", "femtogray", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[attogray]",   new UBASE("SI", "attogray", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[aGy]",   new UBASE("SI", "attogray", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[zeptogray]",   new UBASE("SI", "zeptogray", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[zGy]",   new UBASE("SI", "zeptogray", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[yoctogray]",   new UBASE("SI", "yoctogray", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[yGy]",   new UBASE("SI", "yoctogray", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[yottasievert]",   new UBASE("SI", "yottasievert", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[YSv]",   new UBASE("SI", "yottasievert", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[zettasievert]",   new UBASE("SI", "zettasievert", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[ZSv]",   new UBASE("SI", "zettasievert", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[exacsievert]",   new UBASE("SI", "exacsievert", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[ESv]",   new UBASE("SI", "exacsievert", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[petasievert]",   new UBASE("SI", "petasievert", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[PSv]",   new UBASE("SI", "petasievert", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[terasievert]",   new UBASE("SI", "terasievert", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[TSv]",   new UBASE("SI", "terasievert", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[gigasievert]",   new UBASE("SI", "gigasievert", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[GSv]",   new UBASE("SI", "gigasievert", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[megasievert]",   new UBASE("SI", "megasievert", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[MSv]",   new UBASE("SI", "megasievert", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[kilocsievert]",   new UBASE("SI", "kilocsievert", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[kSv]",   new UBASE("SI", "kilocsievert", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[hectosievert]",   new UBASE("SI", "hectosievert", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[hSv]",   new UBASE("SI", "hectosievert", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[decacsievert]",   new UBASE("SI", "decacsievert", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[daSv]",   new UBASE("SI", "decacsievert", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[decisievert]",   new UBASE("SI", "decisievert", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[dSv]",   new UBASE("SI", "decisievert", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[centisievert]",   new UBASE("SI", "centisievert", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[cSv]",   new UBASE("SI", "centisievert", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[millisievert]",   new UBASE("SI", "millisievert", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[mSv]",   new UBASE("SI", "millisievert", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[microsievert]",   new UBASE("SI", "microsievert", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[uSv]",   new UBASE("SI", "microsievert", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[nanosievert]",   new UBASE("SI", "nanosievert", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[nSv]",   new UBASE("SI", "nanosievert", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[picosievert]",   new UBASE("SI", "picosievert", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[pSv]",   new UBASE("SI", "picosievert", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[femtosievert]",   new UBASE("SI", "femtosievert", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[fSv]",   new UBASE("SI", "femtosievert", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[attosievert]",   new UBASE("SI", "attosievert", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[aSv]",   new UBASE("SI", "attosievert", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[zeptosievert]",   new UBASE("SI", "zeptosievert", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[zSv]",   new UBASE("SI", "zeptosievert", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[yoctosievert]",   new UBASE("SI", "yoctosievert", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0"));
          unit.Add("SI[ySv]",   new UBASE("SI", "yoctosievert", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0"));
          _map.Add("specificEnergy",   new BaseSystem("specificEnergy", unit, "1.0"));

          unit.Clear();


          unit.Add("Scientific[curie-per-liter]",   new UBASE("Scientific", "curie-per-liter", 3.700000000000000E+13, "1/m3.s", "1/L3.T", "1.0"));
          unit.Add("Scientific[Ci/l]",   new UBASE("Scientific", "curie-per-liter", 3.700000000000000E+13, "1/m3.s", "1/L3.T", "1.0"));
          unit.Add("Scientific[eman]",   new UBASE("Scientific", "eman", 3.700000000000000E+03, "1/m3.s", "1/L3.T", "1.0"));
          unit.Add("SI[becquerel-per-cubic-meter]",   new UBASE("SI", "becquerel-per-cubic-meter", 1.000000000000000E+00, "1/m3.s", "1/L3.T", "1.0"));
          unit.Add("SI[Bq/m3]",   new UBASE("SI", "becquerel-per-cubic-meter", 1.000000000000000E+00, "1/m3.s", "1/L3.T", "1.0"));
          _map.Add("radioactiveConcentration",   new BaseSystem("radioactiveConcentration", unit, "1.0"));

          unit.Clear();


          unit.Add("German[R-unit(German)]",   new UBASE("German", "R-unit(German)", 3.762500000000000E-04, "A/kg", "I/M", "1.0"));
          unit.Add("German[R-unit(G)]",   new UBASE("German", "R-unit(German)", 3.762500000000000E-04, "A/kg", "I/M", "1.0"));
          unit.Add("German[R-unit(Solomon)]",   new UBASE("German", "R-unit(Solomon)", 1.505000000000000E-04, "A/kg", "I/M", "1.0"));
          unit.Add("German[R-unit(S)]",   new UBASE("German", "R-unit(Solomon)", 1.505000000000000E-04, "A/kg", "I/M", "1.0"));
          unit.Add("Scientific[E-unit]",   new UBASE("Scientific", "E-unit", 2.580000000000000E-04, "A/kg", "I/M", "1.0"));
          _map.Add("exposureRate",   new BaseSystem("exposureRate", unit, "1.0"));

          unit.Clear();


          unit.Add("Scientific[strontium-unit]",   new UBASE("Scientific", "strontium-unit", 3.700000000000000E+04, "1/kg.s", "1/M.T", "1.0"));
          unit.Add("SI[becquerel-per-kilogram]",   new UBASE("SI", "becquerel-per-kilogram", 1.000000000000000E+00, "1/kg.s", "1/M.T", "1.0"));
          unit.Add("SI[Bq/kg]",   new UBASE("SI", "becquerel-per-kilogram", 1.000000000000000E+00, "1/kg.s", "1/M.T", "1.0"));
          _map.Add("specificRadioactivity",   new BaseSystem("specificRadioactivity", unit, "1.0"));

          unit.Clear();


          unit.Add("INT[sievert-unit]",   new UBASE("INT", "sievert-unit", 2.162040000000000E-03, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[coulomb-per-kilogram]",   new UBASE("Scientific", "coulomb-per-kilogram", 1.000000000000000E+00, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[C/kg]",   new UBASE("Scientific", "coulomb-per-kilogram", 1.000000000000000E+00, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[D-unit]",   new UBASE("Scientific", "D-unit", 2.580000000000000E-02, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[pastille-dose]",   new UBASE("Scientific", "pastille-dose", 1.290000000000000E-01, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[B-unit]",   new UBASE("Scientific", "pastille-dose", 1.290000000000000E-01, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[roentgen]",   new UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[R]",   new UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0"));
          unit.Add("Scientific[e-unit]",   new UBASE("Scientific", "e-unit", 1.806000000000000E-03, "s.A/kg", "T.I/M", "1.0"));
          _map.Add("exposure",   new BaseSystem("exposure", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
