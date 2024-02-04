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
// File Frequency.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Frequency extends SingleSystem
{
   private static Frequency singleton_ = new Frequency();

   public static Frequency Instance()
   {
      return singleton_;
   }

   private Frequency()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("Computer[baud]",   new UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("Computer[bd]",   new UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("SI[becquerel]",   new UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("SI[Bq]",   new UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("INT[curie]",   new UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0"));
      unit.put("INT[Ci]",   new UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0"));
      unit.put("INT[cycle-per-second]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("INT[cps]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("INT[c/s]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("INT[cy]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("INT[c]",   new UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("UK[cycle-per-second]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("UK[cps]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("UK[c/s]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("UK[cy]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("UK[c]",   new UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("Imperial[fit]",   new UBASE("Imperial", "fit", 2.777777777777780E-13, "1/s", "1/T", "1.0"));
      unit.put("Computer[FLOP]",   new UBASE("Computer", "FLOP", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("Scientific[fresnel]",   new UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
      unit.put("Scientific[f]",   new UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
      unit.put("SI[hertz]",   new UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("SI[Hz]",   new UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("INT[mache-unit]",   new UBASE("INT", "mache-unit", 1.332000000000000E+01, "1/s", "1/T", "1.0"));
      unit.put("Computer[MIM]",   new UBASE("Computer", "MIM", 1.666666666666670E+04, "1/s", "1/T", "1.0"));
      unit.put("Computer[mips]",   new UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("Computer[MIPS]",   new UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("Imperial[per-annum]",   new UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0"));
      unit.put("Imperial[PA]",   new UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0"));
      unit.put("Imperial[pa]",   new UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0"));
      unit.put("Imperial[per-diem]",   new UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0"));
      unit.put("Imperial[PD]",   new UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0"));
      unit.put("Imperial[pd]",   new UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0"));
      unit.put("Scientific[radiation]",   new UBASE("Scientific", "radiation", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("SI[reciprocal-second]",   new UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("SI[1/sec]",   new UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      unit.put("Scientific[rutherford]",   new UBASE("Scientific", "rutherford", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("Scientific[solar-neutrino-unit]",   new UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0"));
      unit.put("Scientific[snu]",   new UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0"));
      unit.put("Scientific[stat]",   new UBASE("Scientific", "stat", 1.343100000000000E+02, "1/s", "1/T", "1.0"));
      unit.put("SI[yottahertz]",   new UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
      unit.put("SI[YHz]",   new UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
      unit.put("SI[zettahertz]",   new UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
      unit.put("SI[ZHz]",   new UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
      unit.put("SI[exahertz]",   new UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
      unit.put("SI[Ehz]",   new UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
      unit.put("SI[petahertz]",   new UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
      unit.put("SI[PHz]",   new UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
      unit.put("SI[terahertz]",   new UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
      unit.put("SI[THz]",   new UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
      unit.put("SI[gigahertz]",   new UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
      unit.put("SI[GHz]",   new UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
      unit.put("SI[megahertz]",   new UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("SI[MHz]",   new UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("SI[kilohertz]",   new UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
      unit.put("SI[kHz]",   new UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
      unit.put("SI[hectohertz]",   new UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
      unit.put("SI[hHz]",   new UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
      unit.put("SI[decahertz]",   new UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
      unit.put("SI[daHz]",   new UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
      unit.put("SI[decihertz]",   new UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
      unit.put("SI[dHz]",   new UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
      unit.put("SI[centihertz]",   new UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
      unit.put("SI[cHz]",   new UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
      unit.put("SI[millihertz]",   new UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
      unit.put("SI[mHz]",   new UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
      unit.put("SI[microhertz]",   new UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
      unit.put("SI[uHz]",   new UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
      unit.put("SI[nanohertz]",   new UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
      unit.put("SI[nHz]",   new UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
      unit.put("SI[picohertz]",   new UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
      unit.put("SI[pHz]",   new UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
      unit.put("SI[femtohertz]",   new UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
      unit.put("SI[fHz]",   new UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
      unit.put("SI[attohertz]",   new UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
      unit.put("SI[aHz]",   new UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
      unit.put("SI[zeptohertz]",   new UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
      unit.put("SI[zHz]",   new UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
      unit.put("SI[yoctohertz]",   new UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
      unit.put("SI[yHz]",   new UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
      unit.put("SI[yottabecquerel]",   new UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
      unit.put("SI[Ybq]",   new UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0"));
      unit.put("SI[zettabecquerel]",   new UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
      unit.put("SI[ZBq]",   new UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0"));
      unit.put("SI[exabecquerel]",   new UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
      unit.put("SI[Ebq]",   new UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0"));
      unit.put("SI[petabecquerel]",   new UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
      unit.put("SI[PBq]",   new UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0"));
      unit.put("SI[terabecquerel]",   new UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
      unit.put("SI[TBq]",   new UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0"));
      unit.put("SI[gigabecquerel]",   new UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
      unit.put("SI[GBq]",   new UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0"));
      unit.put("SI[megabecquerel]",   new UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("SI[MBq]",   new UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0"));
      unit.put("SI[kilobecquerel]",   new UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
      unit.put("SI[kBq]",   new UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0"));
      unit.put("SI[hectobecquerel]",   new UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
      unit.put("SI[hBq]",   new UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0"));
      unit.put("SI[decabecquerel]",   new UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
      unit.put("SI[daBq]",   new UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0"));
      unit.put("SI[decibecquerel]",   new UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
      unit.put("SI[dBq]",   new UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0"));
      unit.put("SI[centibecquerel]",   new UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
      unit.put("SI[cBq]",   new UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0"));
      unit.put("SI[millibecquerel]",   new UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
      unit.put("SI[mBq]",   new UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0"));
      unit.put("SI[microbecquerel]",   new UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
      unit.put("SI[uBq]",   new UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0"));
      unit.put("SI[nanobecquerel]",   new UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
      unit.put("SI[nBq]",   new UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0"));
      unit.put("SI[picobecquerel]",   new UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
      unit.put("SI[pBq]",   new UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0"));
      unit.put("SI[femtobecquerel]",   new UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
      unit.put("SI[fBq]",   new UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0"));
      unit.put("SI[attobecquerel]",   new UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
      unit.put("SI[aBq]",   new UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0"));
      unit.put("SI[zeptobecquerel]",   new UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
      unit.put("SI[zBq]",   new UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0"));
      unit.put("SI[yoctobecquerel]",   new UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
      unit.put("SI[yBq]",   new UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0"));
      _map.put("frequency",   new BaseSystem("frequency", unit, "1.0"));

      unit.clear();


   }

}
// EOF
