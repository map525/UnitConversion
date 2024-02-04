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
# File PD_UNITS.py
#
# Class for physical definitions.
#
# Physical Definitions.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import ConstantGroup

class PD_UNITS(ConstantGroup.ConstantGroup):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if PD_UNITS.__instance == None:
            PD_UNITS.__instance = PD_UNITS()
        return PD_UNITS.__instance

    def __new__(self):
       if PD_UNITS.__instance == None:
           PD_UNITS.__instance = super(PD_UNITS, self).__new__(self)

       return  PD_UNITS.__instance
    def __init__(self):
        super().__init__("PhysicalDefinitions", "1.0")
        self._map.update({"atmosphere(standard)": UBASE.UBASE("Imperial", "atmosphere(standard)", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        self._map.update({"atm": UBASE.UBASE("Imperial", "atm", 1.013250000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        self._map.update({"bar": UBASE.UBASE("Scientific", "bar", 1.000000000000000E+05, "kg/m.s2", "M/L.T2", "1.0")})
        self._map.update({"minute": UBASE.UBASE("INT", "minute", 6.000000000000000E+01, "s", "T", "1.0")})
        self._map.update({"min": UBASE.UBASE("INT", "min", 6.000000000000000E+01, "s", "T", "1.0")})
        self._map.update({"hour": UBASE.UBASE("INT", "hour", 3.600000000000000E+03, "s", "T", "1.0")})
        self._map.update({"hr": UBASE.UBASE("INT", "hr", 3.600000000000000E+03, "s", "T", "1.0")})
        self._map.update({"day": UBASE.UBASE("Time", "day", 8.640000000000000E+04, "s", "T", "1.0")})
        self._map.update({"year(common)": UBASE.UBASE("Time", "year(common)", 3.153600000000000E+07, "s", "T", "1.0")})
        self._map.update({"yr(common)": UBASE.UBASE("Time", "yr(common)", 3.153600000000000E+07, "s", "T", "1.0")})
        self._map.update({"year(Julian)": UBASE.UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0")})
        self._map.update({"yr(Julian)": UBASE.UBASE("Time", "yr(Julian)", 3.155760000000000E+07, "s", "T", "1.0")})
        self._map.update({"liter": UBASE.UBASE("INT", "liter", 1.000000000000000E-03, "m3", "L3", "1.0")})
        self._map.update({"l": UBASE.UBASE("INT", "l", 1.000000000000000E-03, "m3", "L3", "1.0")})
        self._map.update({"kg-water": UBASE.UBASE("Scientific", "kg-water", 1.000000000000000E-03, "m3", "L3", "1.0")})
        self._map.update({"kgH2O": UBASE.UBASE("Scientific", "kgH2O", 1.000000000000000E-03, "m3", "L3", "1.0")})
        self._map.update({"ream": UBASE.UBASE("INT", "ream", 5.000000000000000E+02, "count", "O", "1.0")})
        self._map.update({"ream(old)": UBASE.UBASE("UK, US", "ream(old)", 4.800000000000000E+02, "count", "O", "1.0")})
        self._map.update({"standard-gravity": UBASE.UBASE("Scientific", "standard-gravity", 9.806650000000000E+00, "m/s2", "L/T2", "1.0")})
        self._map.update({"gN": UBASE.UBASE("Scientific", "gN", 9.806650000000000E+00, "m/s2", "L/T2", "1.0")})
        self._map.update({"carat": UBASE.UBASE("INT", "carat", 2.000000000000000E-04, "kg", "M", "1.0")})
        self._map.update({"ct": UBASE.UBASE("INT", "ct", 2.000000000000000E-04, "kg", "M", "1.0")})
        self._map.update({"BTU(IT)": UBASE.UBASE("UK", "BTU(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"Btu": UBASE.UBASE("UK", "Btu", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"thermochemical-calorie": UBASE.UBASE("Scientific", "thermochemical-calorie", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"cal": UBASE.UBASE("Scientific", "cal", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"international-nautical-mile": UBASE.UBASE("INT", "international-nautical-mile", 1.852000000000000E+03, "m", "L", "1.0")})
        self._map.update({"ni": UBASE.UBASE("INT", "ni", 1.852000000000000E+03, "m", "L", "1.0")})
        self._map.update({"international-steam-table-calorie": UBASE.UBASE("INT", "international-steam-table-calorie", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"cal(IST)": UBASE.UBASE("INT", "cal(IST)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"roentgen": UBASE.UBASE("Scientific", "roentgen", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0")})
        self._map.update({"R": UBASE.UBASE("Scientific", "R", 2.580000000000000E-04, "s.A/kg", "T.I/M", "1.0")})
        self._map.update({"dozen": UBASE.UBASE("UK, US", "dozen", 1.200000000000000E+01, "count", "O", "1.0")})
        self._map.update({"doz": UBASE.UBASE("UK, US", "doz", 1.200000000000000E+01, "count", "O", "1.0")})
        self._map.update({"millimeter": UBASE.UBASE("SI", "millimeter", 1.000000000000000E-03, "m", "L", "1.0")})
        self._map.update({"mm": UBASE.UBASE("SI", "mm", 1.000000000000000E-03, "m", "L", "1.0")})
        self._map.update({"centimeter": UBASE.UBASE("SI", "centimeter", 1.000000000000000E-02, "m", "L", "1.0")})
        self._map.update({"cm": UBASE.UBASE("SI", "cm", 1.000000000000000E-02, "m", "L", "1.0")})
        self._map.update({"hertz": UBASE.UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        self._map.update({"Hz": UBASE.UBASE("SI", "Hz", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        self._map.update({"dyne": UBASE.UBASE("cgs", "dyne", 1.000000000000000E-05, "kg/m.s2", "M.L/T2", "1.0")})
        self._map.update({"dyn": UBASE.UBASE("cgs", "dyn", 1.000000000000000E-05, "kg/m.s2", "M.L/T2", "1.0")})
        self._map.update({"decimeter": UBASE.UBASE("SI", "decimeter", 1.000000000000000E-01, "m", "L", "1.0")})
        self._map.update({"dm": UBASE.UBASE("SI", "dm", 1.000000000000000E-01, "m", "L", "1.0")})
        self._map.update({"gram": UBASE.UBASE("cgs", "gram", 1.000000000000000E-03, "kg", "M", "1.0")})
        self._map.update({"g": UBASE.UBASE("cgs", "g", 1.000000000000000E-03, "kg", "M", "1.0")})
        self._map.update({"carat(metric)": UBASE.UBASE("INT", "carat(metric)", 2.000000000000000E-04, "kg", "M", "1.0")})
        self._map.update({"ct(metric)": UBASE.UBASE("INT", "ct(metric)", 2.000000000000000E-04, "kg", "M", "1.0")})
        self._map.update({"angstrom": UBASE.UBASE("INT", "angstrom", 1.000000000000000E-10, "m", "L", "1.0")})
        self._map.update({"A": UBASE.UBASE("INT", "A", 1.000000000000000E-10, "m", "L", "1.0")})
        self._map.update({"nautical-mile": UBASE.UBASE("INT", "nautical-mile", 1.852000000000000E+03, "m", "L", "1.0")})
        self._map.update({"nmi": UBASE.UBASE("INT", "nmi", 1.852000000000000E+03, "m", "L", "1.0")})
        self._map.update({"ream(perfect)": UBASE.UBASE("US", "ream(perfect)", 5.120000000000000E+02, "count", "O", "1.0")})
        self._map.update({"astronomical-unit": UBASE.UBASE("@", "astronomical-unit", 1.495978707000000E+11, "m", "L", "1.0")})
        self._map.update({"au": UBASE.UBASE("@", "au", 1.495978707000000E+11, "m", "L", "1.0")})
        self._map.update({"earth-equatorial-radius-WGS-84": UBASE.UBASE("WGS-84", "earth-equatorial-radius-WGS-84", 6.378137000000000E+06, "m", "L", "1.0")})
        self._map.update({"a": UBASE.UBASE("WGS-84", "a", 6.378137000000000E+06, "m", "L", "1.0")})
        self._map.update({"room-temperature": UBASE.UBASE("Scientific", "room-temperature", 2.931500000000000E+02, "K", "Q", "1.0")})
        self._map.update({"T": UBASE.UBASE("Scientific", "T", 2.931500000000000E+02, "K", "Q", "1.0")})
        self._map.update({"curie": UBASE.UBASE("INT", "curie", 3.700000000000000E+10, "1/s", "1/T", "1.0")})
        self._map.update({"Ci": UBASE.UBASE("INT", "Ci", 3.700000000000000E+10, "1/s", "1/T", "1.0")})
 #EOF
