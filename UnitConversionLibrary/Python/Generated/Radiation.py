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
# File Radiation.py
#
# Units for Radiation
#
# Class for Radiation units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Radiation(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Radiation.__instance == None:
            Radiation.__instance = Radiation()
        return Radiation.__instance

    def __new__(self):
       if Radiation.__instance == None:
           Radiation.__instance = super(Radiation, self).__new__(self)

       return  Radiation.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"Scientific[particle-flux-unit]": UBASE.UBASE("Scientific", "particle-flux-unit", 1.000000000000000E+04, "1/m2.s.sr", "1/L2.T.W", "1.0")})
        unit.update({"Scientific[pfu]": UBASE.UBASE("Scientific", "particle-flux-unit", 1.000000000000000E+04, "1/m2.s.sr", "1/L2.T.W", "1.0")})
        unit.update({"Scientific[rayleigh]": UBASE.UBASE("Scientific", "rayleigh", 7.957747154594770E+08, "1/m2.s.sr", "1/L2.T.W", "1.0")})
        unit.update({"Scientific[R]": UBASE.UBASE("Scientific", "rayleigh", 7.957747154594770E+08, "1/m2.s.sr", "1/L2.T.W", "1.0")})
        self._map.update({"particleFlux": BaseSystem.BaseSystem("particleFlux", unit, "1.0")})

        unit.clear()


        unit.update({"UK[british-thermal-unit(IT)-per-pound]": UBASE.UBASE("UK", "british-thermal-unit(IT)-per-pound", 2.326000000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"UK[Btu(IT)/lb]": UBASE.UBASE("UK", "british-thermal-unit(IT)-per-pound", 2.326000000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(therm)-per-pound]": UBASE.UBASE("UK", "british-thermal-unit(therm)-per-pound", 2.324444444444440E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"UK[Btu(therm)/lb]": UBASE.UBASE("UK", "british-thermal-unit(therm)-per-pound", 2.324444444444440E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"INT[calorie(IT)-per-gram]": UBASE.UBASE("INT", "calorie(IT)-per-gram", 4.186800000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"INT[cal(IT)/g]": UBASE.UBASE("INT", "calorie(IT)-per-gram", 4.186800000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[gram-rad]": UBASE.UBASE("Scientific", "gram-rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[gray]": UBASE.UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[Gy]": UBASE.UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[kerma]": UBASE.UBASE("Scientific", "kerma", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[n-unit]": UBASE.UBASE("Scientific", "n-unit", 4.000000000000000E+01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[rad]": UBASE.UBASE("Scientific", "rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[rd]": UBASE.UBASE("Scientific", "rad", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[rad-equivalent-physical]": UBASE.UBASE("Scientific", "rad-equivalent-physical", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[rep]": UBASE.UBASE("Scientific", "rad-equivalent-physical", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[radiation-absorbed-dose]": UBASE.UBASE("Scientific", "radiation-absorbed-dose", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"Scientific[rem]": UBASE.UBASE("Scientific", "rem", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[sievert]": UBASE.UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[Sv]": UBASE.UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[yottagray]": UBASE.UBASE("SI", "yottagray", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[YGy]": UBASE.UBASE("SI", "yottagray", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[zettagray]": UBASE.UBASE("SI", "zettagray", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[ZGy]": UBASE.UBASE("SI", "zettagray", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[exacgray]": UBASE.UBASE("SI", "exacgray", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[EGy]": UBASE.UBASE("SI", "exacgray", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[petagray]": UBASE.UBASE("SI", "petagray", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[PGy]": UBASE.UBASE("SI", "petagray", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[teragray]": UBASE.UBASE("SI", "teragray", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[TGy]": UBASE.UBASE("SI", "teragray", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[gigagray]": UBASE.UBASE("SI", "gigagray", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[GGy]": UBASE.UBASE("SI", "gigagray", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[megagray]": UBASE.UBASE("SI", "megagray", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[MGy]": UBASE.UBASE("SI", "megagray", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[kilocgray]": UBASE.UBASE("SI", "kilocgray", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[kGy]": UBASE.UBASE("SI", "kilocgray", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[hectogray]": UBASE.UBASE("SI", "hectogray", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[hGy]": UBASE.UBASE("SI", "hectogray", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[decacgray]": UBASE.UBASE("SI", "decacgray", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[daGy]": UBASE.UBASE("SI", "decacgray", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[decigray]": UBASE.UBASE("SI", "decigray", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[dGy]": UBASE.UBASE("SI", "decigray", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[centigray]": UBASE.UBASE("SI", "centigray", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[cGy]": UBASE.UBASE("SI", "centigray", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[milligray]": UBASE.UBASE("SI", "milligray", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[mGy]": UBASE.UBASE("SI", "milligray", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[microgray]": UBASE.UBASE("SI", "microgray", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[uGy]": UBASE.UBASE("SI", "microgray", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[nanogray]": UBASE.UBASE("SI", "nanogray", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[nGy]": UBASE.UBASE("SI", "nanogray", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[picogray]": UBASE.UBASE("SI", "picogray", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[pGy]": UBASE.UBASE("SI", "picogray", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[femtogray]": UBASE.UBASE("SI", "femtogray", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[fGy]": UBASE.UBASE("SI", "femtogray", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[attogray]": UBASE.UBASE("SI", "attogray", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[aGy]": UBASE.UBASE("SI", "attogray", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[zeptogray]": UBASE.UBASE("SI", "zeptogray", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[zGy]": UBASE.UBASE("SI", "zeptogray", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[yoctogray]": UBASE.UBASE("SI", "yoctogray", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[yGy]": UBASE.UBASE("SI", "yoctogray", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[yottasievert]": UBASE.UBASE("SI", "yottasievert", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[YSv]": UBASE.UBASE("SI", "yottasievert", 1.000000000000000E+24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[zettasievert]": UBASE.UBASE("SI", "zettasievert", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[ZSv]": UBASE.UBASE("SI", "zettasievert", 1.000000000000000E+21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[exacsievert]": UBASE.UBASE("SI", "exacsievert", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[ESv]": UBASE.UBASE("SI", "exacsievert", 1.000000000000000E+18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[petasievert]": UBASE.UBASE("SI", "petasievert", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[PSv]": UBASE.UBASE("SI", "petasievert", 1.000000000000000E+15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[terasievert]": UBASE.UBASE("SI", "terasievert", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[TSv]": UBASE.UBASE("SI", "terasievert", 1.000000000000000E+12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[gigasievert]": UBASE.UBASE("SI", "gigasievert", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[GSv]": UBASE.UBASE("SI", "gigasievert", 1.000000000000000E+09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[megasievert]": UBASE.UBASE("SI", "megasievert", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[MSv]": UBASE.UBASE("SI", "megasievert", 1.000000000000000E+06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[kilocsievert]": UBASE.UBASE("SI", "kilocsievert", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[kSv]": UBASE.UBASE("SI", "kilocsievert", 1.000000000000000E+03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[hectosievert]": UBASE.UBASE("SI", "hectosievert", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[hSv]": UBASE.UBASE("SI", "hectosievert", 1.000000000000000E+02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[decacsievert]": UBASE.UBASE("SI", "decacsievert", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[daSv]": UBASE.UBASE("SI", "decacsievert", 1.000000000000000E+01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[decisievert]": UBASE.UBASE("SI", "decisievert", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[dSv]": UBASE.UBASE("SI", "decisievert", 1.000000000000000E-01, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[centisievert]": UBASE.UBASE("SI", "centisievert", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[cSv]": UBASE.UBASE("SI", "centisievert", 1.000000000000000E-02, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[millisievert]": UBASE.UBASE("SI", "millisievert", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[mSv]": UBASE.UBASE("SI", "millisievert", 1.000000000000000E-03, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[microsievert]": UBASE.UBASE("SI", "microsievert", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[uSv]": UBASE.UBASE("SI", "microsievert", 1.000000000000000E-06, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[nanosievert]": UBASE.UBASE("SI", "nanosievert", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[nSv]": UBASE.UBASE("SI", "nanosievert", 1.000000000000000E-09, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[picosievert]": UBASE.UBASE("SI", "picosievert", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[pSv]": UBASE.UBASE("SI", "picosievert", 1.000000000000000E-12, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[femtosievert]": UBASE.UBASE("SI", "femtosievert", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[fSv]": UBASE.UBASE("SI", "femtosievert", 1.000000000000000E-15, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[attosievert]": UBASE.UBASE("SI", "attosievert", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[aSv]": UBASE.UBASE("SI", "attosievert", 1.000000000000000E-18, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[zeptosievert]": UBASE.UBASE("SI", "zeptosievert", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[zSv]": UBASE.UBASE("SI", "zeptosievert", 1.000000000000000E-21, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[yoctosievert]": UBASE.UBASE("SI", "yoctosievert", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0")})
        unit.update({"SI[ySv]": UBASE.UBASE("SI", "yoctosievert", 1.000000000000000E-24, "m2/s2", "L2/T2", "1.0")})
        self._map.update({"specificEnergy": BaseSystem.BaseSystem("specificEnergy", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[curie-per-liter]": UBASE.UBASE("Scientific", "curie-per-liter", 3.700000000000000E+13, "1/m3.s", "1/L3.T", "1.0")})
        unit.update({"Scientific[Ci/l]": UBASE.UBASE("Scientific", "curie-per-liter", 3.700000000000000E+13, "1/m3.s", "1/L3.T", "1.0")})
        unit.update({"Scientific[eman]": UBASE.UBASE("Scientific", "eman", 3.700000000000000E+03, "1/m3.s", "1/L3.T", "1.0")})
        unit.update({"SI[becquerel-per-cubic-meter]": UBASE.UBASE("SI", "becquerel-per-cubic-meter", 1.000000000000000E+00, "1/m3.s", "1/L3.T", "1.0")})
        unit.update({"SI[Bq/m3]": UBASE.UBASE("SI", "becquerel-per-cubic-meter", 1.000000000000000E+00, "1/m3.s", "1/L3.T", "1.0")})
        self._map.update({"radioactiveConcentration": BaseSystem.BaseSystem("radioactiveConcentration", unit, "1.0")})

        unit.clear()


        unit.update({"German[R-unit(German)]": UBASE.UBASE("German", "R-unit(German)", 3.762500000000000E-04, "A/kg", "I/M", "1.0")})
        unit.update({"German[R-unit(G)]": UBASE.UBASE("German", "R-unit(German)", 3.762500000000000E-04, "A/kg", "I/M", "1.0")})
        unit.update({"German[R-unit(Solomon)]": UBASE.UBASE("German", "R-unit(Solomon)", 1.505000000000000E-04, "A/kg", "I/M", "1.0")})
        unit.update({"German[R-unit(S)]": UBASE.UBASE("German", "R-unit(Solomon)", 1.505000000000000E-04, "A/kg", "I/M", "1.0")})
        unit.update({"Scientific[E-unit]": UBASE.UBASE("Scientific", "E-unit", 2.580000000000000E-04, "A/kg", "I/M", "1.0")})
        self._map.update({"exposureRate": BaseSystem.BaseSystem("exposureRate", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[strontium-unit]": UBASE.UBASE("Scientific", "strontium-unit", 3.700000000000000E+04, "1/kg.s", "1/M.T", "1.0")})
        unit.update({"SI[becquerel-per-kilogram]": UBASE.UBASE("SI", "becquerel-per-kilogram", 1.000000000000000E+00, "1/kg.s", "1/M.T", "1.0")})
        unit.update({"SI[Bq/kg]": UBASE.UBASE("SI", "becquerel-per-kilogram", 1.000000000000000E+00, "1/kg.s", "1/M.T", "1.0")})
        self._map.update({"specificRadioactivity": BaseSystem.BaseSystem("specificRadioactivity", unit, "1.0")})

        unit.clear()


        unit.update({"INT[sievert-unit]": UBASE.UBASE("INT", "sievert-unit", 2.162040000000000E-03, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[coulomb-per-kilogram]": UBASE.UBASE("Scientific", "coulomb-per-kilogram", 1.000000000000000E+00, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[C/kg]": UBASE.UBASE("Scientific", "coulomb-per-kilogram", 1.000000000000000E+00, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[D-unit]": UBASE.UBASE("Scientific", "D-unit", 2.580000000000000E-02, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[pastille-dose]": UBASE.UBASE("Scientific", "pastille-dose", 1.290000000000000E-01, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[B-unit]": UBASE.UBASE("Scientific", "pastille-dose", 1.290000000000000E-01, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[roentgen]": UBASE.UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[R]": UBASE.UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0")})
        unit.update({"Scientific[e-unit]": UBASE.UBASE("Scientific", "e-unit", 1.806000000000000E-03, "s.A/kg", "T.I/M", "1.0")})
        self._map.update({"exposure": BaseSystem.BaseSystem("exposure", unit, "1.0")})

        unit.clear()


 #EOF
