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
# File SI_UNITS.py
#
# Class for SI units.
#
# SI units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import ConstantGroup

class SI_UNITS(ConstantGroup.ConstantGroup):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if SI_UNITS.__instance == None:
            SI_UNITS.__instance = SI_UNITS()
        return SI_UNITS.__instance

    def __new__(self):
       if SI_UNITS.__instance == None:
           SI_UNITS.__instance = super(SI_UNITS, self).__new__(self)

       return  SI_UNITS.__instance
    def __init__(self):
        super().__init__("SI", "1.0")
        self._map.update({"kilogram": UBASE.UBASE("SI", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0")})
        self._map.update({"kg": UBASE.UBASE("SI", "kg", 1.000000000000000E+00, "kg", "M", "1.0")})
        self._map.update({"meter": UBASE.UBASE("SI", "meter", 1.000000000000000E+00, "m", "L", "1.0")})
        self._map.update({"m": UBASE.UBASE("SI", "m", 1.000000000000000E+00, "m", "L", "1.0")})
        self._map.update({"second": UBASE.UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        self._map.update({"s": UBASE.UBASE("SI", "s", 1.000000000000000E+00, "s", "T", "1.0")})
        self._map.update({"kelvin": UBASE.UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0")})
        self._map.update({"K": UBASE.UBASE("SI", "K", 1.000000000000000E+00, "K", "Q", "1.0")})
        self._map.update({"mole": UBASE.UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0")})
        self._map.update({"mol": UBASE.UBASE("SI", "mol", 1.000000000000000E+00, "mol", "N", "1.0")})
        self._map.update({"ampere": UBASE.UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0")})
        self._map.update({"A": UBASE.UBASE("SI", "A", 1.000000000000000E+00, "A", "I", "1.0")})
        self._map.update({"candela": UBASE.UBASE("SI", "candela", 1.000000000000000E+00, "cd", "J", "1.0")})
        self._map.update({"cd": UBASE.UBASE("SI", "cd", 1.000000000000000E+00, "cd", "J", "1.0")})
        self._map.update({"radian": UBASE.UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0")})
        self._map.update({"rad": UBASE.UBASE("SI", "rad", 1.000000000000000E+00, "rad", "a", "1.0")})
        self._map.update({"steradian": UBASE.UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0")})
        self._map.update({"sr": UBASE.UBASE("SI", "sr", 1.000000000000000E+00, "sr", "W", "1.0")})
        self._map.update({"unitless": UBASE.UBASE("SI", "unitless", 1.000000000000000E+00, "ct", "O", "1.0")})
        self._map.update({"ct": UBASE.UBASE("SI", "ct", 1.000000000000000E+00, "ct", "O", "1.0")})
        self._map.update({"byte": UBASE.UBASE("SI", "byte", 1.000000000000000E+00, "B", "B", "1.0")})
        self._map.update({"b": UBASE.UBASE("SI", "b", 1.000000000000000E+00, "B", "B", "1.0")})
        self._map.update({"pixel": UBASE.UBASE("SI", "pixel", 1.000000000000000E+00, "p", "p", "1.0")})
        self._map.update({"pix": UBASE.UBASE("SI", "pix", 1.000000000000000E+00, "p", "p", "1.0")})
        self._map.update({"voxel": UBASE.UBASE("SI", "voxel", 1.000000000000000E+00, "v", "v", "1.0")})
        self._map.update({"vox": UBASE.UBASE("SI", "vox", 1.000000000000000E+00, "v", "v", "1.0")})
 #EOF
