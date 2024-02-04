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
// File Frequency.cpp
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

#include"Frequency.hpp"

Frequency& Frequency::Instance(void)
{
    static Frequency singleton;
    return singleton;
}

Frequency::Frequency(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["Computer[baud]"] = UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["Computer[bd]"] = UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["SI[becquerel]"] = UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["SI[Bq]"] = UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["INT[curie]"] = UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0");
   unit["INT[Ci]"] = UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0");
   unit["INT[cycle-per-second]"] = UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["INT[cps]"] = UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["INT[c/s]"] = UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["INT[cy]"] = UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["INT[c]"] = UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["UK[cycle-per-second]"] = UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["UK[cps]"] = UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["UK[c/s]"] = UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["UK[cy]"] = UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["UK[c]"] = UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["Imperial[fit]"] = UBASE("Imperial", "fit", 2.777777777777780E-13, "1/s", "1/T", "1.0");
   unit["Computer[FLOP]"] = UBASE("Computer", "FLOP", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["Scientific[fresnel]"] = UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0");
   unit["Scientific[f]"] = UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0");
   unit["SI[hertz]"] = UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["SI[Hz]"] = UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["INT[mache-unit]"] = UBASE("INT", "mache-unit", 1.332000000000000E+01, "1/s", "1/T", "1.0");
   unit["Computer[MIM]"] = UBASE("Computer", "MIM", 1.666666666666670E+04, "1/s", "1/T", "1.0");
   unit["Computer[mips]"] = UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["Computer[MIPS]"] = UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["Imperial[per-annum]"] = UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0");
   unit["Imperial[PA]"] = UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0");
   unit["Imperial[pa]"] = UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0");
   unit["Imperial[per-diem]"] = UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0");
   unit["Imperial[PD]"] = UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0");
   unit["Imperial[pd]"] = UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0");
   unit["Scientific[radiation]"] = UBASE("Scientific", "radiation", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["SI[reciprocal-second]"] = UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["SI[1/sec]"] = UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0");
   unit["Scientific[rutherford]"] = UBASE("Scientific", "rutherford", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["Scientific[solar-neutrino-unit]"] = UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0");
   unit["Scientific[snu]"] = UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0");
   unit["Scientific[stat]"] = UBASE("Scientific", "stat", 1.343100000000000E+02, "1/s", "1/T", "1.0");
   unit["SI[yottahertz]"] = UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0");
   unit["SI[YHz]"] = UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0");
   unit["SI[zettahertz]"] = UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0");
   unit["SI[ZHz]"] = UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0");
   unit["SI[exahertz]"] = UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0");
   unit["SI[Ehz]"] = UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0");
   unit["SI[petahertz]"] = UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0");
   unit["SI[PHz]"] = UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0");
   unit["SI[terahertz]"] = UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0");
   unit["SI[THz]"] = UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0");
   unit["SI[gigahertz]"] = UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0");
   unit["SI[GHz]"] = UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0");
   unit["SI[megahertz]"] = UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["SI[MHz]"] = UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["SI[kilohertz]"] = UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0");
   unit["SI[kHz]"] = UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0");
   unit["SI[hectohertz]"] = UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0");
   unit["SI[hHz]"] = UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0");
   unit["SI[decahertz]"] = UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0");
   unit["SI[daHz]"] = UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0");
   unit["SI[decihertz]"] = UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0");
   unit["SI[dHz]"] = UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0");
   unit["SI[centihertz]"] = UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0");
   unit["SI[cHz]"] = UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0");
   unit["SI[millihertz]"] = UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0");
   unit["SI[mHz]"] = UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0");
   unit["SI[microhertz]"] = UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0");
   unit["SI[uHz]"] = UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0");
   unit["SI[nanohertz]"] = UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0");
   unit["SI[nHz]"] = UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0");
   unit["SI[picohertz]"] = UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0");
   unit["SI[pHz]"] = UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0");
   unit["SI[femtohertz]"] = UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0");
   unit["SI[fHz]"] = UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0");
   unit["SI[attohertz]"] = UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0");
   unit["SI[aHz]"] = UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0");
   unit["SI[zeptohertz]"] = UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0");
   unit["SI[zHz]"] = UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0");
   unit["SI[yoctohertz]"] = UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0");
   unit["SI[yHz]"] = UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0");
   unit["SI[yottabecquerel]"] = UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0");
   unit["SI[Ybq]"] = UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0");
   unit["SI[zettabecquerel]"] = UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0");
   unit["SI[ZBq]"] = UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0");
   unit["SI[exabecquerel]"] = UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0");
   unit["SI[Ebq]"] = UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0");
   unit["SI[petabecquerel]"] = UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0");
   unit["SI[PBq]"] = UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0");
   unit["SI[terabecquerel]"] = UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0");
   unit["SI[TBq]"] = UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0");
   unit["SI[gigabecquerel]"] = UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0");
   unit["SI[GBq]"] = UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0");
   unit["SI[megabecquerel]"] = UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["SI[MBq]"] = UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0");
   unit["SI[kilobecquerel]"] = UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0");
   unit["SI[kBq]"] = UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0");
   unit["SI[hectobecquerel]"] = UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0");
   unit["SI[hBq]"] = UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0");
   unit["SI[decabecquerel]"] = UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0");
   unit["SI[daBq]"] = UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0");
   unit["SI[decibecquerel]"] = UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0");
   unit["SI[dBq]"] = UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0");
   unit["SI[centibecquerel]"] = UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0");
   unit["SI[cBq]"] = UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0");
   unit["SI[millibecquerel]"] = UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0");
   unit["SI[mBq]"] = UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0");
   unit["SI[microbecquerel]"] = UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0");
   unit["SI[uBq]"] = UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0");
   unit["SI[nanobecquerel]"] = UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0");
   unit["SI[nBq]"] = UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0");
   unit["SI[picobecquerel]"] = UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0");
   unit["SI[pBq]"] = UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0");
   unit["SI[femtobecquerel]"] = UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0");
   unit["SI[fBq]"] = UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0");
   unit["SI[attobecquerel]"] = UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0");
   unit["SI[aBq]"] = UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0");
   unit["SI[zeptobecquerel]"] = UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0");
   unit["SI[zBq]"] = UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0");
   unit["SI[yoctobecquerel]"] = UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0");
   unit["SI[yBq]"] = UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0");
   _map["frequency"] = BaseSystem("frequency", unit, "1.0");

   unit.clear();


}

// EOF
