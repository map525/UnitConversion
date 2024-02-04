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
# File DU_UNITS.py
#
# Class for derived units.
#
# Derived units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import ConstantGroup

class DU_UNITS(ConstantGroup.ConstantGroup):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if DU_UNITS.__instance == None:
            DU_UNITS.__instance = DU_UNITS()
        return DU_UNITS.__instance

    def __new__(self):
       if DU_UNITS.__instance == None:
           DU_UNITS.__instance = super(DU_UNITS, self).__new__(self)

       return  DU_UNITS.__instance
    def __init__(self):
        super().__init__("DerivedUnits", "1.0")
        self._map.update({"becquerel": UBASE.UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        self._map.update({"Bq": UBASE.UBASE("SI", "Bq", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        self._map.update({"coulomb": UBASE.UBASE("SI", "coulomb", 1.000000000000000E+00, "A.s", "I.T", "1.0")})
        self._map.update({"C": UBASE.UBASE("SI", "C", 1.000000000000000E+00, "A.s", "I.T", "1.0")})
        self._map.update({"farad": UBASE.UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/Kg.m2", "T4.I2/M.L2", "1.0")})
        self._map.update({"F": UBASE.UBASE("SI", "F", 1.000000000000000E+00, "s4.A2/Kg.m2", "T4.I2/M.L2", "1.0")})
        self._map.update({"gray": UBASE.UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        self._map.update({"Gy": UBASE.UBASE("SI", "Gy", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        self._map.update({"henry": UBASE.UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0")})
        self._map.update({"H": UBASE.UBASE("SI", "H", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0")})
        self._map.update({"hertz": UBASE.UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        self._map.update({"Hz": UBASE.UBASE("SI", "Hz", 1.000000000000000E+00, "1/s", "1/T", "1.0")})
        self._map.update({"joule": UBASE.UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"J": UBASE.UBASE("SI", "J", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"katal": UBASE.UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0")})
        self._map.update({"kt": UBASE.UBASE("SI", "kt", 1.000000000000000E+00, "mol/s", "N/T", "1.0")})
        self._map.update({"lumen": UBASE.UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0")})
        self._map.update({"lm": UBASE.UBASE("SI", "lm", 1.000000000000000E+00, "cd.sr", "J.W", "1.0")})
        self._map.update({"lux": UBASE.UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0")})
        self._map.update({"lx": UBASE.UBASE("SI", "lx", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0")})
        self._map.update({"newton": UBASE.UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        self._map.update({"N": UBASE.UBASE("SI", "N", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        self._map.update({"ohm": UBASE.UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0")})
        self._map.update({"w": UBASE.UBASE("SI", "w", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0")})
        self._map.update({"pascal": UBASE.UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        self._map.update({"Pa": UBASE.UBASE("SI", "Pa", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0")})
        self._map.update({"poiseuille": UBASE.UBASE("SI", "poiseuille", 1.000000000000000E+00, "kg/m.s2", "M/L.T", "1.0")})
        self._map.update({"Po": UBASE.UBASE("SI", "Po", 1.000000000000000E+00, "kg/m.s2", "M/L.T", "1.0")})
        self._map.update({"siemens": UBASE.UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0")})
        self._map.update({"S": UBASE.UBASE("SI", "S", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0")})
        self._map.update({"sievert": UBASE.UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        self._map.update({"Sv": UBASE.UBASE("SI", "Sv", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0")})
        self._map.update({"tesla": UBASE.UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A2", "M/T2.I", "1.0")})
        self._map.update({"T": UBASE.UBASE("SI", "T", 1.000000000000000E+00, "kg/s2.A2", "M/T2.I", "1.0")})
        self._map.update({"volt": UBASE.UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0")})
        self._map.update({"V": UBASE.UBASE("SI", "V", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0")})
        self._map.update({"watt": UBASE.UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        self._map.update({"W": UBASE.UBASE("SI", "W", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        self._map.update({"weber": UBASE.UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0")})
        self._map.update({"Wb": UBASE.UBASE("SI", "Wb", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0")})
 #EOF
