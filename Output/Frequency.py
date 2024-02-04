#################################################################################
#2345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
#################################################################################
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File Frequency.py
#
# Units for Frequency
#
# Class for Frequency units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Frequency(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Frequency.__instance == None:
            Frequency.__instance = Frequency()
        return Frequency.__instance

    def __new__(self):
       if Frequency.__instance == None:
           Frequency.__instance = super(Frequency, self).__new__(self)

       return  Frequency.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"Computer[baud]": UBASE.UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"Computer[bd]": UBASE.UBASE("Computer", "baud", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"SI[becquerel]": UBASE.UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"SI[Bq]": UBASE.UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"INT[curie]": UBASE.UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0")})
        unit.update({"INT[Ci]": UBASE.UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0")})
        unit.update({"INT[cycle-per-second]": UBASE.UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"INT[cps]": UBASE.UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"INT[c/s]": UBASE.UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"INT[cy]": UBASE.UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"INT[c]": UBASE.UBASE("INT", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"UK[cycle-per-second]": UBASE.UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"UK[cps]": UBASE.UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"UK[c/s]": UBASE.UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"UK[cy]": UBASE.UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"UK[c]": UBASE.UBASE("UK", "cycle-per-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[fit]": UBASE.UBASE("Imperial", "fit", 2.777777777777780E-13, "1/s", "1/T", "1.0")})
        unit.update({"Computer[FLOP]": UBASE.UBASE("Computer", "FLOP", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[fresnel]": UBASE.UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[f]": UBASE.UBASE("Scientific", "fresnel", 1.000000000000000E+12, "1/s", "1/T", "1.0")})
        unit.update({"SI[hertz]": UBASE.UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"SI[Hz]": UBASE.UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"INT[mache-unit]": UBASE.UBASE("INT", "mache-unit", 1.332000000000000E+01, "1/s", "1/T", "1.0")})
        unit.update({"Computer[MIM]": UBASE.UBASE("Computer", "MIM", 1.666666666666670E+04, "1/s", "1/T", "1.0")})
        unit.update({"Computer[mips]": UBASE.UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"Computer[MIPS]": UBASE.UBASE("Computer", "mips", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[per-annum]": UBASE.UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[PA]": UBASE.UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[pa]": UBASE.UBASE("Imperial", "per-annum", 3.168808780000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[per-diem]": UBASE.UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[PD]": UBASE.UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0")})
        unit.update({"Imperial[pd]": UBASE.UBASE("Imperial", "per-diem", 1.157407407410000E-06, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[radiation]": UBASE.UBASE("Scientific", "radiation", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"SI[reciprocal-second]": UBASE.UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"SI[1/sec]": UBASE.UBASE("SI", "reciprocal-second", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[rutherford]": UBASE.UBASE("Scientific", "rutherford", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[solar-neutrino-unit]": UBASE.UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[snu]": UBASE.UBASE("Scientific", "solar-neutrino-unit", 1.000000000000000E-36, "1/s", "1/T", "1.0")})
        unit.update({"Scientific[stat]": UBASE.UBASE("Scientific", "stat", 1.343100000000000E+02, "1/s", "1/T", "1.0")})
        unit.update({"SI[yottahertz]": UBASE.UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0")})
        unit.update({"SI[YHz]": UBASE.UBASE("SI", "yottahertz", 1.000000000000000E+24, "1/s", "1/T", "1.0")})
        unit.update({"SI[zettahertz]": UBASE.UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0")})
        unit.update({"SI[ZHz]": UBASE.UBASE("SI", "zettahertz", 1.000000000000000E+21, "1/s", "1/T", "1.0")})
        unit.update({"SI[exahertz]": UBASE.UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0")})
        unit.update({"SI[Ehz]": UBASE.UBASE("SI", "exahertz", 1.000000000000000E+18, "1/s", "1/T", "1.0")})
        unit.update({"SI[petahertz]": UBASE.UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0")})
        unit.update({"SI[PHz]": UBASE.UBASE("SI", "petahertz", 1.000000000000000E+15, "1/s", "1/T", "1.0")})
        unit.update({"SI[terahertz]": UBASE.UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0")})
        unit.update({"SI[THz]": UBASE.UBASE("SI", "terahertz", 1.000000000000000E+12, "1/s", "1/T", "1.0")})
        unit.update({"SI[gigahertz]": UBASE.UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0")})
        unit.update({"SI[GHz]": UBASE.UBASE("SI", "gigahertz", 1.000000000000000E+09, "1/s", "1/T", "1.0")})
        unit.update({"SI[megahertz]": UBASE.UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"SI[MHz]": UBASE.UBASE("SI", "megahertz", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"SI[kilohertz]": UBASE.UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0")})
        unit.update({"SI[kHz]": UBASE.UBASE("SI", "kilohertz", 1.000000000000000E+03, "1/s", "1/T", "1.0")})
        unit.update({"SI[hectohertz]": UBASE.UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0")})
        unit.update({"SI[hHz]": UBASE.UBASE("SI", "hectohertz", 1.000000000000000E+02, "1/s", "1/T", "1.0")})
        unit.update({"SI[decahertz]": UBASE.UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0")})
        unit.update({"SI[daHz]": UBASE.UBASE("SI", "decahertz", 1.000000000000000E+01, "1/s", "1/T", "1.0")})
        unit.update({"SI[decihertz]": UBASE.UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0")})
        unit.update({"SI[dHz]": UBASE.UBASE("SI", "decihertz", 1.000000000000000E-01, "1/s", "1/T", "1.0")})
        unit.update({"SI[centihertz]": UBASE.UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0")})
        unit.update({"SI[cHz]": UBASE.UBASE("SI", "centihertz", 1.000000000000000E-02, "1/s", "1/T", "1.0")})
        unit.update({"SI[millihertz]": UBASE.UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0")})
        unit.update({"SI[mHz]": UBASE.UBASE("SI", "millihertz", 1.000000000000000E-03, "1/s", "1/T", "1.0")})
        unit.update({"SI[microhertz]": UBASE.UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0")})
        unit.update({"SI[uHz]": UBASE.UBASE("SI", "microhertz", 1.000000000000000E-06, "1/s", "1/T", "1.0")})
        unit.update({"SI[nanohertz]": UBASE.UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"SI[nHz]": UBASE.UBASE("SI", "nanohertz", 1.000000000000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"SI[picohertz]": UBASE.UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0")})
        unit.update({"SI[pHz]": UBASE.UBASE("SI", "picohertz", 1.000000000000000E-12, "1/s", "1/T", "1.0")})
        unit.update({"SI[femtohertz]": UBASE.UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0")})
        unit.update({"SI[fHz]": UBASE.UBASE("SI", "femtohertz", 1.000000000000000E-15, "1/s", "1/T", "1.0")})
        unit.update({"SI[attohertz]": UBASE.UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0")})
        unit.update({"SI[aHz]": UBASE.UBASE("SI", "attohertz", 1.000000000000000E-18, "1/s", "1/T", "1.0")})
        unit.update({"SI[zeptohertz]": UBASE.UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0")})
        unit.update({"SI[zHz]": UBASE.UBASE("SI", "zeptohertz", 1.000000000000000E-21, "1/s", "1/T", "1.0")})
        unit.update({"SI[yoctohertz]": UBASE.UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0")})
        unit.update({"SI[yHz]": UBASE.UBASE("SI", "yoctohertz", 1.000000000000000E-24, "1/s", "1/T", "1.0")})
        unit.update({"SI[yottabecquerel]": UBASE.UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0")})
        unit.update({"SI[Ybq]": UBASE.UBASE("SI", "yottabecquerel", 1.000000000000000E+24, "1/s", "1/T", "1.0")})
        unit.update({"SI[zettabecquerel]": UBASE.UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0")})
        unit.update({"SI[ZBq]": UBASE.UBASE("SI", "zettabecquerel", 1.000000000000000E+21, "1/s", "1/T", "1.0")})
        unit.update({"SI[exabecquerel]": UBASE.UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0")})
        unit.update({"SI[Ebq]": UBASE.UBASE("SI", "exabecquerel", 1.000000000000000E+18, "1/s", "1/T", "1.0")})
        unit.update({"SI[petabecquerel]": UBASE.UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0")})
        unit.update({"SI[PBq]": UBASE.UBASE("SI", "petabecquerel", 1.000000000000000E+15, "1/s", "1/T", "1.0")})
        unit.update({"SI[terabecquerel]": UBASE.UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0")})
        unit.update({"SI[TBq]": UBASE.UBASE("SI", "terabecquerel", 1.000000000000000E+12, "1/s", "1/T", "1.0")})
        unit.update({"SI[gigabecquerel]": UBASE.UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0")})
        unit.update({"SI[GBq]": UBASE.UBASE("SI", "gigabecquerel", 1.000000000000000E+09, "1/s", "1/T", "1.0")})
        unit.update({"SI[megabecquerel]": UBASE.UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"SI[MBq]": UBASE.UBASE("SI", "megabecquerel", 1.000000000000000E+06, "1/s", "1/T", "1.0")})
        unit.update({"SI[kilobecquerel]": UBASE.UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0")})
        unit.update({"SI[kBq]": UBASE.UBASE("SI", "kilobecquerel", 1.000000000000000E+03, "1/s", "1/T", "1.0")})
        unit.update({"SI[hectobecquerel]": UBASE.UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0")})
        unit.update({"SI[hBq]": UBASE.UBASE("SI", "hectobecquerel", 1.000000000000000E+02, "1/s", "1/T", "1.0")})
        unit.update({"SI[decabecquerel]": UBASE.UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0")})
        unit.update({"SI[daBq]": UBASE.UBASE("SI", "decabecquerel", 1.000000000000000E+01, "1/s", "1/T", "1.0")})
        unit.update({"SI[decibecquerel]": UBASE.UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0")})
        unit.update({"SI[dBq]": UBASE.UBASE("SI", "decibecquerel", 1.000000000000000E-01, "1/s", "1/T", "1.0")})
        unit.update({"SI[centibecquerel]": UBASE.UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0")})
        unit.update({"SI[cBq]": UBASE.UBASE("SI", "centibecquerel", 1.000000000000000E-02, "1/s", "1/T", "1.0")})
        unit.update({"SI[millibecquerel]": UBASE.UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0")})
        unit.update({"SI[mBq]": UBASE.UBASE("SI", "millibecquerel", 1.000000000000000E-03, "1/s", "1/T", "1.0")})
        unit.update({"SI[microbecquerel]": UBASE.UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0")})
        unit.update({"SI[uBq]": UBASE.UBASE("SI", "microbecquerel", 1.000000000000000E-06, "1/s", "1/T", "1.0")})
        unit.update({"SI[nanobecquerel]": UBASE.UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"SI[nBq]": UBASE.UBASE("SI", "nanobecquerel", 1.000000000000000E-09, "1/s", "1/T", "1.0")})
        unit.update({"SI[picobecquerel]": UBASE.UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0")})
        unit.update({"SI[pBq]": UBASE.UBASE("SI", "picobecquerel", 1.000000000000000E-12, "1/s", "1/T", "1.0")})
        unit.update({"SI[femtobecquerel]": UBASE.UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0")})
        unit.update({"SI[fBq]": UBASE.UBASE("SI", "femtobecquerel", 1.000000000000000E-15, "1/s", "1/T", "1.0")})
        unit.update({"SI[attobecquerel]": UBASE.UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0")})
        unit.update({"SI[aBq]": UBASE.UBASE("SI", "attobecquerel", 1.000000000000000E-18, "1/s", "1/T", "1.0")})
        unit.update({"SI[zeptobecquerel]": UBASE.UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0")})
        unit.update({"SI[zBq]": UBASE.UBASE("SI", "zeptobecquerel", 1.000000000000000E-21, "1/s", "1/T", "1.0")})
        unit.update({"SI[yoctobecquerel]": UBASE.UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0")})
        unit.update({"SI[yBq]": UBASE.UBASE("SI", "yoctobecquerel", 1.000000000000000E-24, "1/s", "1/T", "1.0")})
        self._map.update({"frequency": BaseSystem.BaseSystem("frequency", unit, "1.0")})

        unit.clear()


 #EOF
