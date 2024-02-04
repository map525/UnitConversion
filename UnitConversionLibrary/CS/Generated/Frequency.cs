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
// File Frequency.cs
//
// Units for Frequency
//
// Class for Frequency units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class Frequency : SingleSystem
   {
       private static Frequency singleton_ = new Frequency();

       public static Frequency Instance()
       {
           return singleton_;
       }

       private Frequency() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("Computer[baud]",   new UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("Computer[bd]",   new UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("SI[becquerel]",   new UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("SI[Bq]",   new UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("INT[curie]",   new UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0"));
          unit.Add("INT[Ci]",   new UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0"));
          unit.Add("INT[cycle-per-second]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("INT[cps]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("INT[c/s]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("INT[cy]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("INT[c]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("UK[cycle-per-second]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("UK[cps]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("UK[c/s]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("UK[cy]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("UK[c]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[fit]",   new UBASE("Imperial", "fit", 2.777777777777780E-13, "1/s", "1/T", "1.0"));
          unit.Add("Computer[FLOP]",   new UBASE("Computer", "FLOP", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[fresnel]",   new UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[f]",   new UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
          unit.Add("SI[hertz]",   new UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("SI[Hz]",   new UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("INT[mache-unit]",   new UBASE("INT", "mache-unit", 1.332000000000000E+01, "1/s", "1/T", "1.0"));
          unit.Add("Computer[MIM]",   new UBASE("Computer", "MIM", 1.666666666666670E+04, "1/s", "1/T", "1.0"));
          unit.Add("Computer[mips]",   new UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("Computer[MIPS]",   new UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[per-annum]",   new UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[PA]",   new UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[pa]",   new UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[per-diem]",   new UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[PD]",   new UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0"));
          unit.Add("Imperial[pd]",   new UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[radiation]",   new UBASE("Scientific", "radiation", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("SI[reciprocal-second]",   new UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("SI[1/sec]",   new UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[rutherford]",   new UBASE("Scientific", "rutherford", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[solar-neutrino-unit]",   new UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[snu]",   new UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0"));
          unit.Add("Scientific[stat]",   new UBASE("Scientific", "stat", 1.343100000000000E+02, "1/s", "1/T", "1.0"));
          unit.Add("SI[yottahertz]",   new UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
          unit.Add("SI[YHz]",   new UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
          unit.Add("SI[zettahertz]",   new UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
          unit.Add("SI[ZHz]",   new UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
          unit.Add("SI[exahertz]",   new UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
          unit.Add("SI[Ehz]",   new UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
          unit.Add("SI[petahertz]",   new UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
          unit.Add("SI[PHz]",   new UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
          unit.Add("SI[terahertz]",   new UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
          unit.Add("SI[THz]",   new UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
          unit.Add("SI[gigahertz]",   new UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
          unit.Add("SI[GHz]",   new UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
          unit.Add("SI[megahertz]",   new UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("SI[MHz]",   new UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("SI[kilohertz]",   new UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
          unit.Add("SI[kHz]",   new UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
          unit.Add("SI[hectohertz]",   new UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
          unit.Add("SI[hHz]",   new UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
          unit.Add("SI[decahertz]",   new UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
          unit.Add("SI[daHz]",   new UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
          unit.Add("SI[decihertz]",   new UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
          unit.Add("SI[dHz]",   new UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
          unit.Add("SI[centihertz]",   new UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
          unit.Add("SI[cHz]",   new UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
          unit.Add("SI[millihertz]",   new UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
          unit.Add("SI[mHz]",   new UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
          unit.Add("SI[microhertz]",   new UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
          unit.Add("SI[uHz]",   new UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
          unit.Add("SI[nanohertz]",   new UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("SI[nHz]",   new UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("SI[picohertz]",   new UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
          unit.Add("SI[pHz]",   new UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
          unit.Add("SI[femtohertz]",   new UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
          unit.Add("SI[fHz]",   new UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
          unit.Add("SI[attohertz]",   new UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
          unit.Add("SI[aHz]",   new UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
          unit.Add("SI[zeptohertz]",   new UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
          unit.Add("SI[zHz]",   new UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
          unit.Add("SI[yoctohertz]",   new UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
          unit.Add("SI[yHz]",   new UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
          unit.Add("SI[yottabecquerel]",   new UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
          unit.Add("SI[Ybq]",   new UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
          unit.Add("SI[zettabecquerel]",   new UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
          unit.Add("SI[ZBq]",   new UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
          unit.Add("SI[exabecquerel]",   new UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
          unit.Add("SI[Ebq]",   new UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
          unit.Add("SI[petabecquerel]",   new UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
          unit.Add("SI[PBq]",   new UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
          unit.Add("SI[terabecquerel]",   new UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
          unit.Add("SI[TBq]",   new UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
          unit.Add("SI[gigabecquerel]",   new UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
          unit.Add("SI[GBq]",   new UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
          unit.Add("SI[megabecquerel]",   new UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("SI[MBq]",   new UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
          unit.Add("SI[kilobecquerel]",   new UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
          unit.Add("SI[kBq]",   new UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
          unit.Add("SI[hectobecquerel]",   new UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
          unit.Add("SI[hBq]",   new UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
          unit.Add("SI[decabecquerel]",   new UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
          unit.Add("SI[daBq]",   new UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
          unit.Add("SI[decibecquerel]",   new UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
          unit.Add("SI[dBq]",   new UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
          unit.Add("SI[centibecquerel]",   new UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
          unit.Add("SI[cBq]",   new UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
          unit.Add("SI[millibecquerel]",   new UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
          unit.Add("SI[mBq]",   new UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
          unit.Add("SI[microbecquerel]",   new UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
          unit.Add("SI[uBq]",   new UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
          unit.Add("SI[nanobecquerel]",   new UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("SI[nBq]",   new UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
          unit.Add("SI[picobecquerel]",   new UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
          unit.Add("SI[pBq]",   new UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
          unit.Add("SI[femtobecquerel]",   new UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
          unit.Add("SI[fBq]",   new UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
          unit.Add("SI[attobecquerel]",   new UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
          unit.Add("SI[aBq]",   new UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
          unit.Add("SI[zeptobecquerel]",   new UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
          unit.Add("SI[zBq]",   new UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
          unit.Add("SI[yoctobecquerel]",   new UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
          unit.Add("SI[yBq]",   new UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
          _map.Add("frequency",   new BaseSystem("frequency", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
