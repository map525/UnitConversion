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
# File Pressure.py
#
# Units for Pressure
#
# Class for Pressure units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Pressure(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Pressure.__instance == None:
            Pressure.__instance = Pressure()
        return Pressure.__instance

    def __new__(self):
       if Pressure.__instance == None:
           Pressure.__instance = super(Pressure, self).__new__(self)

       return  Pressure.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"INT[atmosphere]": UBASE.UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"INT[atm]": UBASE.UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"INT[An]": UBASE.UBASE("INT", "atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[atmosphere]": UBASE.UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[at]": UBASE.UBASE("MKpS", "atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[bar]": UBASE.UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[barad]": UBASE.UBASE("Scientific", "barad", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"cgs[barrie]": UBASE.UBASE("cgs", "barrie", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"cgs[barye]": UBASE.UBASE("cgs", "barye", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[british-thermal-unit(IT)-per-barrel]": UBASE.UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[Btu(IT)/bbl]": UBASE.UBASE("US", "british-thermal-unit(IT)-per-barrel", 6.636101665210000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-per-cubic-foot]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[Btu(IT)/ft3]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-cubic-foot", 3.725894580783130E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"UK[british-thermal-unit(IT)-per-gallon]": UBASE.UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"UK[Btu(IT)/gal]": UBASE.UBASE("UK", "british-thermal-unit(IT)-per-gallon", 2.320797407135620E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[british-thermal-unit(IT)-per-gallon]": UBASE.UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[Btu(IT)/gal]": UBASE.UBASE("US", "british-thermal-unit(IT)-per-gallon", 2.787162699391020E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[centi-hg]": UBASE.UBASE("Scientific", "centi-hg", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[centimeter-of-mercury(0oC)]": UBASE.UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[cmHg(0oC)]": UBASE.UBASE("Imperial", "centimeter-of-mercury(0oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[centimeter-of-mercury(15.6oC)]": UBASE.UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[cmHg(15.6oC)]": UBASE.UBASE("Imperial", "centimeter-of-mercury(15.6oC)", 1.329466946535000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[centimeter-of-mercury(32oC)]": UBASE.UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[cmHg(32oC)]": UBASE.UBASE("Imperial", "centimeter-of-mercury(32oC)", 1.333223684210530E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[centimeter-of-water(15.56oC)]": UBASE.UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[cmH2O(15.56oC)]": UBASE.UBASE("Scientific", "centimeter-of-water(15.56oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[centimeter-of-water(39.2oC)]": UBASE.UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[cmH2O(39.2oC)]": UBASE.UBASE("Imperial", "centimeter-of-water(39.2oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[centimeter-of-water(4oC)]": UBASE.UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[cmH2O(4oC)]": UBASE.UBASE("Scientific", "centimeter-of-water(4oC)", 9.806375414138000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[centimeter-of-water(60oC)]": UBASE.UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[cmH2O(60oC)]": UBASE.UBASE("Imperial", "centimeter-of-water(60oC)", 9.797059096300000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[dobson]": UBASE.UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[DU]": UBASE.UBASE("Scientific", "dobson", 1.333223684210530E-04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"cgs[dyne-per-square-centimeter]": UBASE.UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"cgs[dyn/cm2]": UBASE.UBASE("cgs", "dyne-per-square-centimeter", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[foot-of-head]": UBASE.UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[ft-hd]": UBASE.UBASE("US", "foot-of-head", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[foot-of-mercury(15.56oC)]": UBASE.UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ftHg(15.56oC)]": UBASE.UBASE("Imperial", "foot-of-mercury(15.56oC)", 4.052215253038680E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[foot-of-mercury(32oF)]": UBASE.UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ftHg(32oF)]": UBASE.UBASE("Imperial", "foot-of-mercury(32oF)", 4.063660390275360E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[foot-of-water(15.56oC)]": UBASE.UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ftH2O(15.5oC)]": UBASE.UBASE("Imperial", "foot-of-water(15.56oC)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[foot-of-water(39.2oF)]": UBASE.UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ftH2O(39.2oF)]": UBASE.UBASE("Imperial", "foot-of-water(39.2oF)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[foot-of-water-(4oC)]": UBASE.UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ftH2O(4oC)]": UBASE.UBASE("Imperial", "foot-of-water-(4oC)", 2.988587174759340E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[foot-of-water(60oF)]": UBASE.UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ftH2O(60oF)]": UBASE.UBASE("Imperial", "foot-of-water(60oF)", 2.986119998923570E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-mercury(0oC)]": UBASE.UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inHg(0oC)]": UBASE.UBASE("Imperial", "inch-of-mercury(0oC)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-mercury(15.56oC)]": UBASE.UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inHg(15.56oC)]": UBASE.UBASE("Imperial", "inch-of-mercury(15.56oC)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-mercury(32oF)]": UBASE.UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inHg(32oF)]": UBASE.UBASE("Imperial", "inch-of-mercury(32oF)", 3.386383658562800E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-mercury(60oF)]": UBASE.UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inHg(60oF)]": UBASE.UBASE("Imperial", "inch-of-mercury(60oF)", 3.376846044198900E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-water(15.56oC)]": UBASE.UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inH2O(15.56oC)]": UBASE.UBASE("Imperial", "inch-of-water(15.56oC)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-water(39.2oF)]": UBASE.UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inH2O(39.2oF)]": UBASE.UBASE("Imperial", "inch-of-water(39.2oF)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-water(4oC)]": UBASE.UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inH2O(4oC)]": UBASE.UBASE("Imperial", "inch-of-water(4oC)", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inch-of-water(60oF)]": UBASE.UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[inH2O(60oF)]": UBASE.UBASE("Imperial", "inch-of-water(60oF)", 2.488433332436310E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[joule-per-cubic-meter]": UBASE.UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[J/m3]": UBASE.UBASE("SI", "joule-per-cubic-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[joule-per-cubic-meter-per-hertz]": UBASE.UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[J/m3-Hz]": UBASE.UBASE("SI", "joule-per-cubic-meter-per-hertz", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kilogram-force-per-square-decimeter]": UBASE.UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kgf/dm2]": UBASE.UBASE("MKpS", "kilogram-force-per-square-decimeter", 9.806650000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kilogram-force-per-square-meter]": UBASE.UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kgf/m2]": UBASE.UBASE("MKpS", "kilogram-force-per-square-meter", 9.806650000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kilogram-force-per-square-millimeter]": UBASE.UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kgf/mm2]": UBASE.UBASE("MKpS", "kilogram-force-per-square-millimeter", 9.806650000000000E+06, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kilogram-force-per-square-centimeter]": UBASE.UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[kg/cm2]": UBASE.UBASE("MKpS", "kilogram-force-per-square-centimeter", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[kilopound-force-per-square-inch]": UBASE.UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[kip/in2]": UBASE.UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ksi]": UBASE.UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[KSI]": UBASE.UBASE("Imperial", "kilopound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[meter-of-water(15.56oC)]": UBASE.UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mH2O(15.56oC)]": UBASE.UBASE("Scientific", "meter-of-water(15.56oC)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[meter-of-water(39.2oF)]": UBASE.UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[mH2O(39.2oF)]": UBASE.UBASE("Imperial", "meter-of-water(39.2oF)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[meter-of-water(4oC)]": UBASE.UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mH2O(4oC)]": UBASE.UBASE("Scientific", "meter-of-water(4oC)", 9.805076032675000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[meter-of-water(60oF)]": UBASE.UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[mH2O(60oF)]": UBASE.UBASE("Imperial", "meter-of-water(60oF)", 9.796981623765000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"cgs[microbar]": UBASE.UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"cgs[ubar]": UBASE.UBASE("cgs", "microbar", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[micron-of-mercury]": UBASE.UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[uHg(0oC)]": UBASE.UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millitorr]": UBASE.UBASE("Scientific", "micron-of-mercury", 1.333221912820000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millibar]": UBASE.UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mbar]": UBASE.UBASE("Scientific", "millibar", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millimeter-of-mercury(0oC)]": UBASE.UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmHg(0oC)]": UBASE.UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[torr(0oC)]": UBASE.UBASE("Scientific", "millimeter-of-mercury(0oC)", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[millimeter-of-mercury(4oC)]": UBASE.UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[mmHg(4oC)]": UBASE.UBASE("Imperial", "millimeter-of-mercury(4oC)", 1.333704400000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millimeter-of-water(15.56oC)]": UBASE.UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmH2O(15.56oC)]": UBASE.UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmCE(15.56oC)]": UBASE.UBASE("Scientific", "millimeter-of-water(15.56oC)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millimeter-of-water(39.2oF)]": UBASE.UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmH2O(39.2oF)]": UBASE.UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmCE(39.2oF)]": UBASE.UBASE("Scientific", "millimeter-of-water(39.2oF)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millimeter-of-water(4oC)]": UBASE.UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmH2O(4oC)]": UBASE.UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmCE(4oC)]": UBASE.UBASE("Scientific", "millimeter-of-water(4oC)", 9.805076032675000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[millimeter-of-water(60oF)]": UBASE.UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmH2O(60oF)]": UBASE.UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[mmCE(60oF)]": UBASE.UBASE("Scientific", "millimeter-of-water(60oF)", 9.796981623765000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[newton-per-square-meter]": UBASE.UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[N/m2]": UBASE.UBASE("SI", "newton-per-square-meter", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ounce-force-per-square-inch]": UBASE.UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[ozf/in2]": UBASE.UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[osi]": UBASE.UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[OSI]": UBASE.UBASE("Imperial", "ounce-force-per-square-inch", 4.309223308230220E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[pascal]": UBASE.UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[Pa]": UBASE.UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MTS[pieze]": UBASE.UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MTS[pz]": UBASE.UBASE("MTS", "pieze", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[pound-force-per-square-foot]": UBASE.UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[lbf/ft2]": UBASE.UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[psf]": UBASE.UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[PSF]": UBASE.UBASE("FPS", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[pound-force-per-square-foot]": UBASE.UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[lbf/ft2]": UBASE.UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[psf]": UBASE.UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[PSF]": UBASE.UBASE("Imperial", "pound-force-per-square-foot", 4.788025898033580E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[pound-force-per-square-inch]": UBASE.UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[lbf/in2]": UBASE.UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[psi]": UBASE.UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"FPS[PSI]": UBASE.UBASE("FPS", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[pound-force-per-square-inch]": UBASE.UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[lbf/in2]": UBASE.UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[psi]": UBASE.UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[PSI]": UBASE.UBASE("Imperial", "pound-force-per-square-inch", 6.894757293168360E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[poundal-per-square-foot]": UBASE.UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[pdl/ft2]": UBASE.UBASE("Imperial", "poundal-per-square-foot", 1.488163943569550E+00, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"INT[standard-atmosphere]": UBASE.UBASE("INT", "standard-atmosphere", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MTS[sthene-per-square-meter]": UBASE.UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MTS[sthene/m2]": UBASE.UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MTS[sn/m2]": UBASE.UBASE("MTS", "sthene-per-square-meter", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[technical-atmosphere]": UBASE.UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"MKpS[ta]": UBASE.UBASE("MKpS", "technical-atmosphere", 9.806650000000000E+04, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[ton-force-per-square-inch]": UBASE.UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[tsi]": UBASE.UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[TSI]": UBASE.UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"US[tonf/in2]": UBASE.UBASE("US", "ton-force-per-square-inch", 1.378951458633670E+07, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"INT[torr]": UBASE.UBASE("INT", "torr", 1.333223684210530E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Scientific[vac]": UBASE.UBASE("Scientific", "vac", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[water-column]": UBASE.UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"Imperial[wc]": UBASE.UBASE("Imperial", "water-column", 2.490489312299450E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[yottapascal]": UBASE.UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[YPa]": UBASE.UBASE("SI", "yottapascal", 1.000000000000000E+24, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[zettapascal]": UBASE.UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[ZPa]": UBASE.UBASE("SI", "zettapascal", 1.000000000000000E+21, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[exacpascal]": UBASE.UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[EPa]": UBASE.UBASE("SI", "exacpascal", 1.000000000000000E+18, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[petapascal]": UBASE.UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[PPa]": UBASE.UBASE("SI", "petapascal", 1.000000000000000E+15, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[terapascal]": UBASE.UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[TPa]": UBASE.UBASE("SI", "terapascal", 1.000000000000000E+12, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[gigapascal]": UBASE.UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[GPa]": UBASE.UBASE("SI", "gigapascal", 1.000000000000000E+09, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[megapascal]": UBASE.UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[MPa]": UBASE.UBASE("SI", "megapascal", 1.000000000000000E+06, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[kilocpascal]": UBASE.UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[kPa]": UBASE.UBASE("SI", "kilocpascal", 1.000000000000000E+03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[hectopascal]": UBASE.UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[hPa]": UBASE.UBASE("SI", "hectopascal", 1.000000000000000E+02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[decapascal]": UBASE.UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[daPa]": UBASE.UBASE("SI", "decapascal", 1.000000000000000E+01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[decipascal]": UBASE.UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[dPa]": UBASE.UBASE("SI", "decipascal", 1.000000000000000E-01, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[centipascal]": UBASE.UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[cPa]": UBASE.UBASE("SI", "centipascal", 1.000000000000000E-02, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[millipascal]": UBASE.UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[mPa]": UBASE.UBASE("SI", "millipascal", 1.000000000000000E-03, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[micropascal]": UBASE.UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[uPa]": UBASE.UBASE("SI", "micropascal", 1.000000000000000E-06, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[nanopascal]": UBASE.UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[nPa]": UBASE.UBASE("SI", "nanopascal", 1.000000000000000E-09, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[picopascal]": UBASE.UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[pPa]": UBASE.UBASE("SI", "picopascal", 1.000000000000000E-12, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[femtopascal]": UBASE.UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[fPa]": UBASE.UBASE("SI", "femtopascal", 1.000000000000000E-15, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[attopascal]": UBASE.UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[aPa]": UBASE.UBASE("SI", "attopascal", 1.000000000000000E-18, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[zeptopascal]": UBASE.UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[zPa]": UBASE.UBASE("SI", "zeptopascal", 1.000000000000000E-21, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[yoctopascal]": UBASE.UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0")})
        unit.update({"SI[yPa]": UBASE.UBASE("SI", "yoctopascal", 1.000000000000000E-24, "kg/m.s2", "M/L.T2", "1.0")})
        self._map.update({"pressure": BaseSystem.BaseSystem("pressure", unit, "1.0")})

        unit.clear()


 #EOF
