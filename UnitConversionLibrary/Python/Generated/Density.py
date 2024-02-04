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
# File Density.py
#
# Units for Density
#
# Class for Density units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Density(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Density.__instance == None:
            Density.__instance = Density()
        return Density.__instance

    def __new__(self):
       if Density.__instance == None:
           Density.__instance = super(Density, self).__new__(self)

       return  Density.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"CAN[drex]": UBASE.UBASE("CAN", "drex", 1.000000000000000E-07, "kg/m", "M/L", "1.0")})
        unit.update({"French[denier]": UBASE.UBASE("French", "denier", 1.111111111111110E-07, "kg/m", "M/L", "1.0")})
        unit.update({"French[den]": UBASE.UBASE("French", "denier", 1.111111111111110E-07, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[pound-per-inch]": UBASE.UBASE("Imperial", "pound-per-inch", 1.785796732283460E+01, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[lb/in]": UBASE.UBASE("Imperial", "pound-per-inch", 1.785796732283460E+01, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[pound-per-foot]": UBASE.UBASE("Imperial", "pound-per-foot", 1.488163943569550E+00, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[lb/ft]": UBASE.UBASE("Imperial", "pound-per-foot", 1.488163943569550E+00, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[pound-per-yard]": UBASE.UBASE("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[lb/yd]": UBASE.UBASE("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", "M/L", "1.0")})
        unit.update({"SI[kilogram-per-meter]": UBASE.UBASE("SI", "kilogram-per-meter", 1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        unit.update({"SI[kg/m]": UBASE.UBASE("SI", "kilogram-per-meter", 1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        unit.update({"SI[kilogram-per-centimeter]": UBASE.UBASE("SI", "kilogram-per-centimeter", 1.000000000000000E+02, "kg/m", "M/L", "1.0")})
        unit.update({"SI[kg/cm]": UBASE.UBASE("SI", "kilogram-per-centimeter", 1.000000000000000E+02, "kg/m", "M/L", "1.0")})
        unit.update({"SI[kilogram-per-decimeter]": UBASE.UBASE("SI", "kilogram-per-decimeter", 1.000000000000000E+01, "kg/m", "M/L", "1.0")})
        unit.update({"SI[kg/dm]": UBASE.UBASE("SI", "kilogram-per-decimeter", 1.000000000000000E+01, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[gram-per-meter]": UBASE.UBASE("Scientific", "gram-per-meter", 1.000000000000000E-03, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[g/m]": UBASE.UBASE("Scientific", "gram-per-meter", 1.000000000000000E-03, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[gram-per-decimeter]": UBASE.UBASE("Scientific", "gram-per-decimeter", 1.000000000000000E-04, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[g/dm]": UBASE.UBASE("Scientific", "gram-per-decimeter", 1.000000000000000E-04, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[gram-per-centimeter]": UBASE.UBASE("Scientific", "gram-per-centimeter", 1.000000000000000E-05, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[g/cm]": UBASE.UBASE("Scientific", "gram-per-centimeter", 1.000000000000000E-05, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[gram-per-millimeter]": UBASE.UBASE("Scientific", "gram-per-millimeter", 1.000000000000000E-06, "kg/m", "M/L", "1.0")})
        unit.update({"Scientific[g/mm]": UBASE.UBASE("Scientific", "gram-per-millimeter", 1.000000000000000E-06, "kg/m", "M/L", "1.0")})
        unit.update({"UK[manches-ter]": UBASE.UBASE("UK", "manches-ter", 1.937713468189520E-06, "kg/m", "M/L", "1.0")})
        unit.update({"SI[tex]": UBASE.UBASE("SI", "tex", 1.000000000000000E-06, "kg/m", "M/L", "1.0")})
        unit.update({"UK[poumar]": UBASE.UBASE("UK", "poumar", 4.960546478565180E-07, "kg/m", "M/L", "1.0")})
        unit.update({"UK[yarn-number]": UBASE.UBASE("UK", "yarn-number", 1.937713468189520E-06, "kg/m", "M/L", "1.0")})
        unit.update({"US[drex]": UBASE.UBASE("US", "drex", 1.000000000000000E-07, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[grain-per-100-yards]": UBASE.UBASE("Imperial", "grain-per-100-yards", 7.086494969378830E-07, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[gr/100-yd]": UBASE.UBASE("Imperial", "grain-per-100-yards", 7.086494969378830E-07, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[grain-per-120-yards]": UBASE.UBASE("Imperial", "grain-per-120-yards", 5.905412474482360E-07, "kg/m", "M/L", "1.0")})
        unit.update({"Imperial[gr/120-yd]": UBASE.UBASE("Imperial", "grain-per-120-yards", 5.905412474482360E-07, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-1000-yards]": UBASE.UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/1000-yd]": UBASE.UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-mile]": UBASE.UBASE("UK", "ton-per-mile", 6.313422790901140E-01, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/mi]": UBASE.UBASE("UK", "ton-per-mile", 6.313422790901140E-01, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-yard]": UBASE.UBASE("UK", "ton-per-yard", 1.111162411198600E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/yd]": UBASE.UBASE("UK", "ton-per-yard", 1.111162411198600E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-foot]": UBASE.UBASE("UK", "ton-per-foot", 3.333487233595800E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/ft]": UBASE.UBASE("UK", "ton-per-foot", 3.333487233595800E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[ton-per-meter]": UBASE.UBASE("UK", "ton-per-meter", 1.000000000000000E+03, "kg/m", "M/L", "1.0")})
        unit.update({"UK[t/m]": UBASE.UBASE("UK", "ton-per-meter", 1.000000000000000E+03, "kg/m", "M/L", "1.0")})
        unit.update({"SI[ton-per-kilometer]": UBASE.UBASE("SI", "ton-per-kilometer", 1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        unit.update({"SI[t/km]": UBASE.UBASE("SI", "ton-per-kilometer", 1.000000000000000E+00, "kg/m", "M/L", "1.0")})
        self._map.update({"linearDensity": BaseSystem.BaseSystem("linearDensity", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[base-box]": UBASE.UBASE("Imperial", "base-box", 2.241931057522830E-02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[basis-box]": UBASE.UBASE("Imperial", "basis-box", 2.241931057522830E-02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[gram-per-square-millmeter]": UBASE.UBASE("Scientific", "gram-per-square-millmeter", 1.000000000000000E+03, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[kg/mm2]": UBASE.UBASE("Scientific", "gram-per-square-millmeter", 1.000000000000000E+03, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[gram-per-square-centimeter]": UBASE.UBASE("Scientific", "gram-per-square-centimeter", 1.000000000000000E+01, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[kg/cm2]": UBASE.UBASE("Scientific", "gram-per-square-centimeter", 1.000000000000000E+01, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[gram-per-square-meter]": UBASE.UBASE("Scientific", "gram-per-square-meter", 1.000000000000000E-03, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[g-m2]": UBASE.UBASE("Scientific", "gram-per-square-meter", 1.000000000000000E-03, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[inch-of-rainfall]": UBASE.UBASE("Imperial", "inch-of-rainfall", 2.539592330000000E+01, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[kilogram-per-hectare]": UBASE.UBASE("Scientific", "kilogram-per-hectare", 1.000000000000000E-04, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[kg/ha]": UBASE.UBASE("Scientific", "kilogram-per-hectare", 1.000000000000000E-04, "kg/m2", "M/L2", "1.0")})
        unit.update({"SI[kilogram-per-square-kilometer]": UBASE.UBASE("SI", "kilogram-per-square-kilometer", 1.000000000000000E-06, "kg/m2", "M/L2", "1.0")})
        unit.update({"SI[kg/km2]": UBASE.UBASE("SI", "kilogram-per-square-kilometer", 1.000000000000000E-06, "kg/m2", "M/L2", "1.0")})
        unit.update({"SI[kilogram-per-square-meter]": UBASE.UBASE("SI", "kilogram-per-square-meter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0")})
        unit.update({"SI[kg/m2]": UBASE.UBASE("SI", "kilogram-per-square-meter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0")})
        unit.update({"SI[kilogram-per-square-centimeter]": UBASE.UBASE("SI", "kilogram-per-square-centimeter", 1.000000000000000E+04, "kg/m2", "M/L2", "1.0")})
        unit.update({"SI[kg/cm2]": UBASE.UBASE("SI", "kilogram-per-square-centimeter", 1.000000000000000E+04, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[milligram-per-square-centimeter]": UBASE.UBASE("Scientific", "milligram-per-square-centimeter", 1.000000000000000E-02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[mg/cm2]": UBASE.UBASE("Scientific", "milligram-per-square-centimeter", 1.000000000000000E-02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[milligram-per-square-millimeter]": UBASE.UBASE("Scientific", "milligram-per-square-millimeter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0")})
        unit.update({"Scientific[mg/mm2]": UBASE.UBASE("Scientific", "milligram-per-square-millimeter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ounce-per-square-foot]": UBASE.UBASE("UK", "ounce-per-square-foot", 3.051517057461200E-01, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[oz/ft2]": UBASE.UBASE("UK", "ounce-per-square-foot", 3.051517057461200E-01, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ounce-per-square-inch]": UBASE.UBASE("UK", "ounce-per-square-inch", 4.394184562744120E+01, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[oz/in2]": UBASE.UBASE("UK", "ounce-per-square-inch", 4.394184562744120E+01, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ounce-per-square-yard]": UBASE.UBASE("UK", "ounce-per-square-yard", 3.390574508290220E-02, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[oz/yd2]": UBASE.UBASE("UK", "ounce-per-square-yard", 3.390574508290220E-02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[pound-per-acre]": UBASE.UBASE("Imperial", "pound-per-acre", 1.120851156194460E-04, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[lb/ac]": UBASE.UBASE("Imperial", "pound-per-acre", 1.120851156194460E-04, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[pound-per-square-mile]": UBASE.UBASE("Imperial", "pound-per-square-mile", 1.751329931553840E-07, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[lb/mi2]": UBASE.UBASE("Imperial", "pound-per-square-mile", 1.751329931553840E-07, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[pound-per-square-foot]": UBASE.UBASE("Imperial", "pound-per-square-foot", 4.882427636383050E+00, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[lb/ft2]": UBASE.UBASE("Imperial", "pound-per-square-foot", 4.882427636383050E+00, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[pound-per-square-inch]": UBASE.UBASE("Imperial", "pound-per-square-inch", 7.030695796391590E+02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[lb/in2]": UBASE.UBASE("Imperial", "pound-per-square-inch", 7.030695796391590E+02, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[pound-per-square-yard]": UBASE.UBASE("Imperial", "pound-per-square-yard", 5.424919595981170E-01, "kg/m2", "M/L2", "1.0")})
        unit.update({"Imperial[lb/yd2]": UBASE.UBASE("Imperial", "pound-per-square-yard", 5.424919595981170E-01, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton-per-square-mile]": UBASE.UBASE("UK", "ton-per-square-mile", 3.922979046680600E-04, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton/mi2]": UBASE.UBASE("UK", "ton-per-square-mile", 3.922979046680600E-04, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton-per-square-yard]": UBASE.UBASE("UK", "ton-per-square-yard", 1.215181989499780E+03, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton/yd2]": UBASE.UBASE("UK", "ton-per-square-yard", 1.215181989499780E+03, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton-per-square-foot]": UBASE.UBASE("UK", "ton-per-square-foot", 1.093663790549800E+04, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton/ft2]": UBASE.UBASE("UK", "ton-per-square-foot", 1.093663790549800E+04, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton-per-square-inch]": UBASE.UBASE("UK", "ton-per-square-inch", 1.574875858391720E+06, "kg/m2", "M/L2", "1.0")})
        unit.update({"UK[ton/in2]": UBASE.UBASE("UK", "ton-per-square-inch", 1.574875858391720E+06, "kg/m2", "M/L2", "1.0")})
        self._map.update({"surfaceDensity": BaseSystem.BaseSystem("surfaceDensity", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[clarke-degree]": UBASE.UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[oTHB]": UBASE.UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[oe]": UBASE.UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[oClarke]": UBASE.UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"French[degree-hydrotimetrique-francais]": UBASE.UBASE("French", "degree-hydrotimetrique-francais", 1.000000000000000E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"French[oDHF]": UBASE.UBASE("French", "degree-hydrotimetrique-francais", 1.000000000000000E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[gammil]": UBASE.UBASE("Scientific", "gammil", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[grain-percubic-foot]": UBASE.UBASE("Imperial", "grain-percubic-foot", 2.288351910565730E-03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[gr/ft3]": UBASE.UBASE("Imperial", "grain-percubic-foot", 2.288351910565730E-03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[grain-per-cubic-inch]": UBASE.UBASE("Imperial", "grain-per-cubic-inch", 3.954272101457590E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[gr/in3]": UBASE.UBASE("Imperial", "grain-per-cubic-inch", 3.954272101457590E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"US[grain-per-gallon]": UBASE.UBASE("US", "grain-per-gallon", 1.711806104527090E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"US[gr/gal]": UBASE.UBASE("US", "grain-per-gallon", 1.711806104527090E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[grain-per-gallon]": UBASE.UBASE("UK", "grain-per-gallon", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[gr/gal]": UBASE.UBASE("UK", "grain-per-gallon", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[gram-per-cubic-millimeter]": UBASE.UBASE("Scientific", "gram-per-cubic-millimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[g/mm3]": UBASE.UBASE("Scientific", "gram-per-cubic-millimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[gram-per-cubic-centimeter]": UBASE.UBASE("Scientific", "gram-per-cubic-centimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[g.cm-3]": UBASE.UBASE("Scientific", "gram-per-cubic-centimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[gram-per-cubic-decimeter]": UBASE.UBASE("Scientific", "gram-per-cubic-decimeter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[g/dm3]": UBASE.UBASE("Scientific", "gram-per-cubic-decimeter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[gram-per-cubic-meter]": UBASE.UBASE("Scientific", "gram-per-cubic-meter", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[g/m3]": UBASE.UBASE("Scientific", "gram-per-cubic-meter", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0")})
        unit.update({"French[hydrotimeter-degree]": UBASE.UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0")})
        unit.update({"French[oTHF]": UBASE.UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0")})
        unit.update({"French[of]": UBASE.UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[kilogram-per-cubic-centimeter]": UBASE.UBASE("Scientific", "kilogram-per-cubic-centimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[kg/cm3]": UBASE.UBASE("Scientific", "kilogram-per-cubic-centimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[kilogram-per-cubic-decimeter]": UBASE.UBASE("Scientific", "kilogram-per-cubic-decimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[kg/dm3]": UBASE.UBASE("Scientific", "kilogram-per-cubic-decimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"SI[kilogram-per-cubic-meter]": UBASE.UBASE("SI", "kilogram-per-cubic-meter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"SI[kg/m3]": UBASE.UBASE("SI", "kilogram-per-cubic-meter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"US[ounce-per-gallon]": UBASE.UBASE("US", "ounce-per-gallon", 7.489151707306040E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"US[oz/gal]": UBASE.UBASE("US", "ounce-per-gallon", 7.489151707306040E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ounce-per-gallon]": UBASE.UBASE("UK", "ounce-per-gallon", 6.236020547978350E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[oz/gal]": UBASE.UBASE("UK", "ounce-per-gallon", 6.236020547978350E+00, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[pound-per-cubic-yard]": UBASE.UBASE("Imperial", "pound-per-cubic-yard", 5.932764212577830E-01, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[lb/yd3]": UBASE.UBASE("Imperial", "pound-per-cubic-yard", 5.932764212577830E-01, "kg/m3", "M/L3", "1.0")})
        unit.update({"FPS[pound-per-cubic-foot]": UBASE.UBASE("FPS", "pound-per-cubic-foot", 1.601846337396010E+01, "kg/m3", "M/L3", "1.0")})
        unit.update({"FPS[lb/ft3]": UBASE.UBASE("FPS", "pound-per-cubic-foot", 1.601846337396010E+01, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[pound-per-cubic-inch]": UBASE.UBASE("Imperial", "pound-per-cubic-inch", 2.767990471020310E+04, "kg/m3", "M/L3", "1.0")})
        unit.update({"Imperial[lb/in3]": UBASE.UBASE("Imperial", "pound-per-cubic-inch", 2.767990471020310E+04, "kg/m3", "M/L3", "1.0")})
        unit.update({"US[pound-per-gallon]": UBASE.UBASE("US", "pound-per-gallon", 1.198264273168970E+02, "kg/m3", "M/L3", "1.0")})
        unit.update({"US[lb/gal]": UBASE.UBASE("US", "pound-per-gallon", 1.198264273168970E+02, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[pound-per-gallon]": UBASE.UBASE("UK", "pound-per-gallon", 9.977632876765360E+01, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[lb/gal]": UBASE.UBASE("UK", "pound-per-gallon", 9.977632876765360E+01, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[ton-per-cubic-meter]": UBASE.UBASE("Scientific", "ton-per-cubic-meter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[t/m3]": UBASE.UBASE("Scientific", "ton-per-cubic-meter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[ton-per-cubic-decimeter]": UBASE.UBASE("Scientific", "ton-per-cubic-decimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[t/dm3]": UBASE.UBASE("Scientific", "ton-per-cubic-decimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[ton-per-cubic-centimeter]": UBASE.UBASE("Scientific", "ton-per-cubic-centimeter", 1.000000000000000E+09, "kg/m3", "M/L3", "1.0")})
        unit.update({"Scientific[t/cm3]": UBASE.UBASE("Scientific", "ton-per-cubic-centimeter", 1.000000000000000E+09, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ton-per-cubic-yard]": UBASE.UBASE("UK", "ton-per-cubic-yard", 1.328939183617430E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ton/yd3]": UBASE.UBASE("UK", "ton-per-cubic-yard", 1.328939183617430E+03, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ton-per-cubic-foot]": UBASE.UBASE("UK", "ton-per-cubic-foot", 3.588135795767070E+04, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ton/ft3]": UBASE.UBASE("UK", "ton-per-cubic-foot", 3.588135795767070E+04, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ton-per-cubic-inch]": UBASE.UBASE("UK", "ton-per-cubic-inch", 6.200298655085500E+07, "kg/m3", "M/L3", "1.0")})
        unit.update({"UK[ton/in3]": UBASE.UBASE("UK", "ton-per-cubic-inch", 6.200298655085500E+07, "kg/m3", "M/L3", "1.0")})
        self._map.update({"density": BaseSystem.BaseSystem("density", unit, "1.0")})

        unit.clear()


 #EOF
