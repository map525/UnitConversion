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
# File Luminosity.py
#
# Units for Luminosity
#
# Class for Luminosity units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Luminosity(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Luminosity.__instance == None:
            Luminosity.__instance = Luminosity()
        return Luminosity.__instance

    def __new__(self):
       if Luminosity.__instance == None:
           Luminosity.__instance = super(Luminosity, self).__new__(self)

       return  Luminosity.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"French[bougie-nouvelle]": UBASE.UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"French[bn]": UBASE.UBASE("French", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"French[carcel]": UBASE.UBASE("French", "carcel", 1.000000000000000E+01, "cd", "J", "1.0")})
        unit.update({"German[hefner-unit]": UBASE.UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0")})
        unit.update({"German[hu]": UBASE.UBASE("German", "hefner-unit", 9.030000000000000E-01, "cd", "J", "1.0")})
        unit.update({"German[hefnerkerze]": UBASE.UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0")})
        unit.update({"German[HK]": UBASE.UBASE("German", "hefnerkerze", 9.030000000000000E-01, "cd", "J", "1.0")})
        unit.update({"INT[bougie-decimale-inlemationale]": UBASE.UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"INT[bi]": UBASE.UBASE("INT", "bougie-decimale-inlemationale", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"INT[candle]": UBASE.UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0")})
        unit.update({"INT[c]": UBASE.UBASE("INT", "candle", 1.019367991845060E+00, "cd", "J", "1.0")})
        unit.update({"INT[candle(new)]": UBASE.UBASE("INT", "candle(new)", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"Scientific[bougie-decimale]": UBASE.UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0")})
        unit.update({"Scientific[bd]": UBASE.UBASE("Scientific", "bougie-decimale", 1.019000000000000E+00, "cd", "J", "1.0")})
        unit.update({"Scientific[violle]": UBASE.UBASE("Scientific", "violle", 2.040000000000000E+01, "cd", "J", "1.0")})
        unit.update({"SI[candela]": UBASE.UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"SI[cd]": UBASE.UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"UK[bougie-nouvelle]": UBASE.UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"UK[bn]": UBASE.UBASE("UK", "bougie-nouvelle", 1.000000000000000E+00, "cd", "J", "1.0")})
        unit.update({"UK[candle(int)]": UBASE.UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0")})
        unit.update({"UK[c]": UBASE.UBASE("UK", "candle(int)", 1.019367991845060E+00, "cd", "J", "1.0")})
        unit.update({"UK[candle(pentane)]": UBASE.UBASE("UK", "candle(pentane)", 1.019367991845060E+00, "cd", "J", "1.0")})
        unit.update({"UK[carcel-unit]": UBASE.UBASE("UK", "carcel-unit", 9.796126401630990E+00, "cd", "J", "1.0")})
        unit.update({"SI[yottacandela]": UBASE.UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0")})
        unit.update({"SI[Ycd]": UBASE.UBASE("SI", "yottacandela", 1.000000000000000E+24, "cd", "J", "1.0")})
        unit.update({"SI[zettacandela]": UBASE.UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0")})
        unit.update({"SI[Zcd]": UBASE.UBASE("SI", "zettacandela", 1.000000000000000E+21, "cd", "J", "1.0")})
        unit.update({"SI[exacandela]": UBASE.UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0")})
        unit.update({"SI[Ecd]": UBASE.UBASE("SI", "exacandela", 1.000000000000000E+18, "cd", "J", "1.0")})
        unit.update({"SI[petacandela]": UBASE.UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0")})
        unit.update({"SI[Pcd]": UBASE.UBASE("SI", "petacandela", 1.000000000000000E+15, "cd", "J", "1.0")})
        unit.update({"SI[teracandela]": UBASE.UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0")})
        unit.update({"SI[Tcd]": UBASE.UBASE("SI", "teracandela", 1.000000000000000E+12, "cd", "J", "1.0")})
        unit.update({"SI[gigacandela]": UBASE.UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0")})
        unit.update({"SI[Gcd]": UBASE.UBASE("SI", "gigacandela", 1.000000000000000E+09, "cd", "J", "1.0")})
        unit.update({"SI[megacandela]": UBASE.UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0")})
        unit.update({"SI[Mcd]": UBASE.UBASE("SI", "megacandela", 1.000000000000000E+06, "cd", "J", "1.0")})
        unit.update({"SI[kilocandela]": UBASE.UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0")})
        unit.update({"SI[kcd]": UBASE.UBASE("SI", "kilocandela", 1.000000000000000E+03, "cd", "J", "1.0")})
        unit.update({"SI[hectocandela]": UBASE.UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0")})
        unit.update({"SI[hcd]": UBASE.UBASE("SI", "hectocandela", 1.000000000000000E+02, "cd", "J", "1.0")})
        unit.update({"SI[decacandela]": UBASE.UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0")})
        unit.update({"SI[dacd]": UBASE.UBASE("SI", "decacandela", 1.000000000000000E+01, "cd", "J", "1.0")})
        unit.update({"SI[decicandela]": UBASE.UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0")})
        unit.update({"SI[dcd]": UBASE.UBASE("SI", "decicandela", 1.000000000000000E-01, "cd", "J", "1.0")})
        unit.update({"SI[centicandela]": UBASE.UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0")})
        unit.update({"SI[ccd]": UBASE.UBASE("SI", "centicandela", 1.000000000000000E-02, "cd", "J", "1.0")})
        unit.update({"SI[millicandela]": UBASE.UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0")})
        unit.update({"SI[mcd]": UBASE.UBASE("SI", "millicandela", 1.000000000000000E-03, "cd", "J", "1.0")})
        unit.update({"SI[microcandela]": UBASE.UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0")})
        unit.update({"SI[ucd]": UBASE.UBASE("SI", "microcandela", 1.000000000000000E-06, "cd", "J", "1.0")})
        unit.update({"SI[nanocandela]": UBASE.UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0")})
        unit.update({"SI[ncd]": UBASE.UBASE("SI", "nanocandela", 1.000000000000000E-09, "cd", "J", "1.0")})
        unit.update({"SI[picocandela]": UBASE.UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0")})
        unit.update({"SI[pcd]": UBASE.UBASE("SI", "picocandela", 1.000000000000000E-12, "cd", "J", "1.0")})
        unit.update({"SI[femtocandela]": UBASE.UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0")})
        unit.update({"SI[fcd]": UBASE.UBASE("SI", "femtocandela", 1.000000000000000E-15, "cd", "J", "1.0")})
        unit.update({"SI[attocandela]": UBASE.UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0")})
        unit.update({"SI[acd]": UBASE.UBASE("SI", "attocandela", 1.000000000000000E-18, "cd", "J", "1.0")})
        unit.update({"SI[zeptocandela]": UBASE.UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0")})
        unit.update({"SI[zcd]": UBASE.UBASE("SI", "zeptocandela", 1.000000000000000E-21, "cd", "J", "1.0")})
        unit.update({"SI[yoctocandela]": UBASE.UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0")})
        unit.update({"SI[ycd]": UBASE.UBASE("SI", "yoctocandela", 1.000000000000000E-24, "cd", "J", "1.0")})
        self._map.update({"luminousIntensity": BaseSystem.BaseSystem("luminousIntensity", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[candlepower(spherical)]": UBASE.UBASE("Imperial", "candlepower(spherical)", 1.256637061435920E+01, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[lumen]": UBASE.UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[lm]": UBASE.UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[yottalumen]": UBASE.UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Ylm]": UBASE.UBASE("SI", "yottalumen", 1.000000000000000E+24, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[zettalumen]": UBASE.UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Zlm]": UBASE.UBASE("SI", "zettalumen", 1.000000000000000E+21, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[exalumen]": UBASE.UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Elm]": UBASE.UBASE("SI", "exalumen", 1.000000000000000E+18, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[petalumen]": UBASE.UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Plm]": UBASE.UBASE("SI", "petalumen", 1.000000000000000E+15, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[teralumen]": UBASE.UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Tlm]": UBASE.UBASE("SI", "teralumen", 1.000000000000000E+12, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[gigalumen]": UBASE.UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Glm]": UBASE.UBASE("SI", "gigalumen", 1.000000000000000E+09, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[megalumen]": UBASE.UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[Mlm]": UBASE.UBASE("SI", "megalumen", 1.000000000000000E+06, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[kilolumen]": UBASE.UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[klm]": UBASE.UBASE("SI", "kilolumen", 1.000000000000000E+03, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[hectolumen]": UBASE.UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[hlm]": UBASE.UBASE("SI", "hectolumen", 1.000000000000000E+02, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[decalumen]": UBASE.UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[dalm]": UBASE.UBASE("SI", "decalumen", 1.000000000000000E+01, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[decilumen]": UBASE.UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[dlm]": UBASE.UBASE("SI", "decilumen", 1.000000000000000E-01, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[centilumen]": UBASE.UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[clm]": UBASE.UBASE("SI", "centilumen", 1.000000000000000E-02, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[millilumen]": UBASE.UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[mlm]": UBASE.UBASE("SI", "millilumen", 1.000000000000000E-03, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[microlumen]": UBASE.UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[ulm]": UBASE.UBASE("SI", "microlumen", 1.000000000000000E-06, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[nanolumen]": UBASE.UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[nlm]": UBASE.UBASE("SI", "nanolumen", 1.000000000000000E-09, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[picolumen]": UBASE.UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[plm]": UBASE.UBASE("SI", "picolumen", 1.000000000000000E-12, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[femtolumen]": UBASE.UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[flm]": UBASE.UBASE("SI", "femtolumen", 1.000000000000000E-15, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[attolumen]": UBASE.UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[alm]": UBASE.UBASE("SI", "attolumen", 1.000000000000000E-18, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[zeptolumen]": UBASE.UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[zlm]": UBASE.UBASE("SI", "zeptolumen", 1.000000000000000E-21, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[yoctolumen]": UBASE.UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0")})
        unit.update({"SI[ylm]": UBASE.UBASE("SI", "yoctolumen", 1.000000000000000E-24, "cd.sr", "J.W", "1.0")})
        self._map.update({"luminousFlux": BaseSystem.BaseSystem("luminousFlux", unit, "1.0")})

        unit.clear()


        unit.update({"cgs[stilb]": UBASE.UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0")})
        unit.update({"cgs[sb]": UBASE.UBASE("cgs", "stilb", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0")})
        unit.update({"French[blondel]": UBASE.UBASE("French", "blondel", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0")})
        unit.update({"German[apostilb]": UBASE.UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0")})
        unit.update({"German[asb]": UBASE.UBASE("German", "apostilb", 3.183098861837910E-01, "cd/m2", "J/L2", "1.0")})
        unit.update({"MKSA[nit]": UBASE.UBASE("MKSA", "nit", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0")})
        unit.update({"Scientific[brill]": UBASE.UBASE("Scientific", "brill", 3.183098861837910E-08, "cd/m2", "J/L2", "1.0")})
        unit.update({"Scientific[luxon]": UBASE.UBASE("Scientific", "luxon", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0")})
        unit.update({"Scientific[troland]": UBASE.UBASE("Scientific", "troland", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0")})
        unit.update({"SI[candela-per-square-meter]": UBASE.UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0")})
        unit.update({"SI[cd/m2]": UBASE.UBASE("SI", "candela-per-square-meter", 1.000000000000000E+00, "cd/m2", "J/L2", "1.0")})
        unit.update({"US[candela-per-square-foot]": UBASE.UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0")})
        unit.update({"US[cd/ft2]": UBASE.UBASE("US", "candela-per-square-foot", 1.076391041670970E+01, "cd/m2", "J/L2", "1.0")})
        unit.update({"US[foot-lambert]": UBASE.UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0")})
        unit.update({"US[ft-L]": UBASE.UBASE("US", "foot-lambert", 3.426259099635390E+00, "cd/m2", "J/L2", "1.0")})
        unit.update({"US[lambert]": UBASE.UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0")})
        unit.update({"US[L]": UBASE.UBASE("US", "lambert", 3.183098861837910E+03, "cd/m2", "J/L2", "1.0")})
        unit.update({"cgs[phot]": UBASE.UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0")})
        unit.update({"cgs[ph]": UBASE.UBASE("cgs", "phot", 1.000000000000000E+04, "cd/m2", "J/L2", "1.0")})
        self._map.update({"luminance": BaseSystem.BaseSystem("luminance", unit, "1.0")})

        unit.clear()


        unit.update({"German[nox]": UBASE.UBASE("German", "nox", 3.183098861837910E-04, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"German[skot]": UBASE.UBASE("German", "skot", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[lux]": UBASE.UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[lx]": UBASE.UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"UK[foot-candle]": UBASE.UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"UK[ft-C]": UBASE.UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"UK[dt-cd]": UBASE.UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"UK[fc]": UBASE.UBASE("UK", "foot-candle", 1.076391041670970E+01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[yottalux]": UBASE.UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Ylx]": UBASE.UBASE("SI", "yottalux", 1.000000000000000E+24, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[zettalux]": UBASE.UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Zlx]": UBASE.UBASE("SI", "zettalux", 1.000000000000000E+21, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[exalux]": UBASE.UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Elx]": UBASE.UBASE("SI", "exalux", 1.000000000000000E+18, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[petalux]": UBASE.UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Plx]": UBASE.UBASE("SI", "petalux", 1.000000000000000E+15, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[teralux]": UBASE.UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Tlx]": UBASE.UBASE("SI", "teralux", 1.000000000000000E+12, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[gigalux]": UBASE.UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Glx]": UBASE.UBASE("SI", "gigalux", 1.000000000000000E+09, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[megalux]": UBASE.UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[Mlx]": UBASE.UBASE("SI", "megalux", 1.000000000000000E+06, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[kilolux]": UBASE.UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[klx]": UBASE.UBASE("SI", "kilolux", 1.000000000000000E+03, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[hectolux]": UBASE.UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[hlx]": UBASE.UBASE("SI", "hectolux", 1.000000000000000E+02, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[decalux]": UBASE.UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[dalx]": UBASE.UBASE("SI", "decalux", 1.000000000000000E+01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[decilux]": UBASE.UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[dlx]": UBASE.UBASE("SI", "decilux", 1.000000000000000E-01, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[centilux]": UBASE.UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[clx]": UBASE.UBASE("SI", "centilux", 1.000000000000000E-02, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[millilux]": UBASE.UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[mlx]": UBASE.UBASE("SI", "millilux", 1.000000000000000E-03, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[microlux]": UBASE.UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[ulx]": UBASE.UBASE("SI", "microlux", 1.000000000000000E-06, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[nanolux]": UBASE.UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[nlx]": UBASE.UBASE("SI", "nanolux", 1.000000000000000E-09, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[picolux]": UBASE.UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[plx]": UBASE.UBASE("SI", "picolux", 1.000000000000000E-12, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[femtolux]": UBASE.UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[flx]": UBASE.UBASE("SI", "femtolux", 1.000000000000000E-15, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[attolux]": UBASE.UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[alx]": UBASE.UBASE("SI", "attolux", 1.000000000000000E-18, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[zeptolux]": UBASE.UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[zlx]": UBASE.UBASE("SI", "zeptolux", 1.000000000000000E-21, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[yoctolux]": UBASE.UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0")})
        unit.update({"SI[ylx]": UBASE.UBASE("SI", "yoctolux", 1.000000000000000E-24, "cd.sr/m2", "J.W/L2", "1.0")})
        self._map.update({"illuminance": BaseSystem.BaseSystem("illuminance", unit, "1.0")})

        unit.clear()


        unit.update({"cgs[lumberg]": UBASE.UBASE("cgs", "lumberg", 1.000000000000000E-07, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[watt-per-steradian]": UBASE.UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[W/W]": UBASE.UBASE("SI", "watt-per-steradian", 1.000000000000000E+00, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[gigawatt-per-steradian]": UBASE.UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[GW/W]": UBASE.UBASE("SI", "gigawatt-per-steradian", 1.000000000000000E+09, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[megawatt-per-steradian]": UBASE.UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[MW/W]": UBASE.UBASE("SI", "megawatt-per-steradian", 1.000000000000000E+06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[kilowatt-per-steradian]": UBASE.UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[kW/W]": UBASE.UBASE("SI", "kilowatt-per-steradian", 1.000000000000000E+03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[milliwatt-per-steradian]": UBASE.UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[mW/W]": UBASE.UBASE("SI", "milliwatt-per-steradian", 1.000000000000000E-03, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[microwatt-per-steradian]": UBASE.UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        unit.update({"SI[uW/W]": UBASE.UBASE("SI", "microwatt-per-steradian", 1.000000000000000E-06, "kg.m2/s3.sr", "M.L2/T3.W", "1.0")})
        self._map.update({"radiantIntensity": BaseSystem.BaseSystem("radiantIntensity", unit, "1.0")})

        unit.clear()


 #EOF
