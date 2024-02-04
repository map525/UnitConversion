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
# File SpecificDensity.py
#
# Units for SpecificDensity
#
# Class for SpecificDensity units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class SpecificDensity(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if SpecificDensity.__instance == None:
            SpecificDensity.__instance = SpecificDensity()
        return SpecificDensity.__instance

    def __new__(self):
       if SpecificDensity.__instance == None:
           SpecificDensity.__instance = super(SpecificDensity, self).__new__(self)

       return  SpecificDensity.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"Imperial[cotton(hand)]": UBASE.UBASE("Imperial", "cotton(hand)", 1.693361817351560E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[lea]": UBASE.UBASE("Imperial", "lea", 6.047720776255560E+02, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[linen]": UBASE.UBASE("Imperial", "linen", 6.047720776255560E+02, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[typp]": UBASE.UBASE("Imperial", "typp", 2.015906925418520E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[worsted]": UBASE.UBASE("Imperial", "worsted", 1.128907878234370E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[yarn-cut(wool)]": UBASE.UBASE("Imperial", "yarn-cut(wool)", 6.047720776255560E+02, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[yarn-run(cotton)]": UBASE.UBASE("Imperial", "yarn-run(cotton)", 1.693361817351560E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[yarn-run(linen)]": UBASE.UBASE("Imperial", "yarn-run(linen)", 6.047720776255560E+02, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[yarn-run(metric)]": UBASE.UBASE("Imperial", "yarn-run(metric)", 1.000000000000000E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[yarn-run(wool)]": UBASE.UBASE("Imperial", "yarn-run(wool)", 3.225451080669630E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Imperial[yarn-run(worsted)]": UBASE.UBASE("Imperial", "yarn-run(worsted)", 1.128907878234370E+03, "m/kg", "L/M", "1.0")})
        unit.update({"Scientific[metric]": UBASE.UBASE("Scientific", "metric", 1.000000000000000E-03, "m/kg", "L/M", "1.0")})
        unit.update({"UK[cut(asbestos)]": UBASE.UBASE("UK", "cut(asbestos)", 2.015906925418520E+02, "m/kg", "L/M", "1.0")})
        self._map.update({"specificLength": BaseSystem.BaseSystem("specificLength", unit, "1.0")})

        unit.clear()


        unit.update({"UK[barrel-per-long-ton]": UBASE.UBASE("UK", "barrel-per-long-ton", 1.409402427778930E-04, "m3/kg", "L3/M", "1.0")})
        unit.update({"UK[bbl/lt]": UBASE.UBASE("UK", "barrel-per-long-ton", 1.409402427778930E-04, "m3/kg", "L3/M", "1.0")})
        unit.update({"US[barrel-per-short-ton]": UBASE.UBASE("US", "barrel-per-short-ton", 1.314401201193040E-04, "m3/kg", "L3/M", "1.0")})
        unit.update({"US[bbl/st]": UBASE.UBASE("US", "barrel-per-short-ton", 1.314401201193040E-04, "m3/kg", "L3/M", "1.0")})
        unit.update({"FPS[cubic-foot-per-pound]": UBASE.UBASE("FPS", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0")})
        unit.update({"FPS[ft3/lb]": UBASE.UBASE("FPS", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0")})
        unit.update({"Imperial[cubic-foot-per-pound]": UBASE.UBASE("Imperial", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0")})
        unit.update({"Imperial[ft3/lb]": UBASE.UBASE("Imperial", "cubic-foot-per-pound", 6.242796057614460E-02, "m3/kg", "L3/M", "1.0")})
        unit.update({"UK[cubic-foot-per-ton]": UBASE.UBASE("UK", "cubic-foot-per-ton", 2.786962525720740E-05, "m3/kg", "L3/M", "1.0")})
        unit.update({"UK[ft3/ton]": UBASE.UBASE("UK", "cubic-foot-per-ton", 2.786962525720740E-05, "m3/kg", "L3/M", "1.0")})
        unit.update({"Imperial[cubic-inch-per-pound]": UBASE.UBASE("Imperial", "cubic-inch-per-pound", 3.612729200008370E-05, "m3/kg", "L3/M", "1.0")})
        unit.update({"Imperial[in3/lb]": UBASE.UBASE("Imperial", "cubic-inch-per-pound", 3.612729200008370E-05, "m3/kg", "L3/M", "1.0")})
        unit.update({"SI[cubic-meter-per-kilogram]": UBASE.UBASE("SI", "cubic-meter-per-kilogram", 1.000000000000000E+00, "m3/kg", "L3/M", "1.0")})
        unit.update({"SI[m3/kg]": UBASE.UBASE("SI", "cubic-meter-per-kilogram", 1.000000000000000E+00, "m3/kg", "L3/M", "1.0")})
        unit.update({"UK[gallon-per-pound]": UBASE.UBASE("UK", "gallon-per-pound", 1.002241726420570E-02, "m3/kg", "L3/M", "1.0")})
        unit.update({"UK[in3/lb]": UBASE.UBASE("UK", "gallon-per-pound", 1.002241726420570E-02, "m3/kg", "L3/M", "1.0")})
        unit.update({"Scientific[liter-per-kilogram]": UBASE.UBASE("Scientific", "liter-per-kilogram", 1.000000000000000E-03, "m3/kg", "L3/M", "1.0")})
        unit.update({"Scientific[l/kg]": UBASE.UBASE("Scientific", "liter-per-kilogram", 1.000000000000000E-03, "m3/kg", "L3/M", "1.0")})
        self._map.update({"specificVolume": BaseSystem.BaseSystem("specificVolume", unit, "1.0")})

        unit.clear()


 #EOF
