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
# File PM_UNITS.py
#
# Class for physical measurements.
#
# Physical Measurements.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import ConstantGroup

class PM_UNITS(ConstantGroup.ConstantGroup):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if PM_UNITS.__instance == None:
            PM_UNITS.__instance = PM_UNITS()
        return PM_UNITS.__instance

    def __new__(self):
       if PM_UNITS.__instance == None:
           PM_UNITS.__instance = super(PM_UNITS, self).__new__(self)

       return  PM_UNITS.__instance
    def __init__(self):
        super().__init__("PhysicalMeasurements", "1.0")
        self._map.update({"permittivity-of-free-space": UBASE.UBASE("Scientific", "permittivity-of-free-space", 8.854187812800000E-12, "s4.A2/kg.m3", "T4.I2/M.L3", "1.0")})
        self._map.update({"eo": UBASE.UBASE("Scientific", "eo", 8.854187812800000E-12, "s4.A2/kg.m3", "T4.I2/M.L3", "1.0")})
        self._map.update({"permeability-of-free-space": UBASE.UBASE("Scientific", "permeability-of-free-space", 1.256637062000000E-06, "kg.m/s2.A2", "M.L/T2.I2", "1.0")})
        self._map.update({"mo": UBASE.UBASE("Scientific", "mo", 1.256637062000000E-06, "kg.m/s2.A2", "M.L/T2.I2", "1.0")})
        self._map.update({"electron-mass": UBASE.UBASE("Scientific", "electron-mass", 9.109383701500000E-31, "kg", "M", "1.0")})
        self._map.update({"me": UBASE.UBASE("Scientific", "me", 9.109383701500000E-31, "kg", "M", "1.0")})
        self._map.update({"bohr-radius": UBASE.UBASE("Scientific", "bohr-radius", 5.291772109030000E-11, "m", "L", "1.0")})
        self._map.update({"ao": UBASE.UBASE("Scientific", "ao", 5.291772109030000E-11, "m", "L", "1.0")})
        self._map.update({"density-of-water(40C)": UBASE.UBASE("Scientific", "density-of-water(40C)", 9.998395000000000E+02, "kg/m3", "M/L3", "1.0")})
        self._map.update({"pH2O(4oC)": UBASE.UBASE("Scientific", "pH2O(4oC)", 9.998395000000000E+02, "kg/m3", "M/L3", "1.0")})
        self._map.update({"density-of-water(600F)": UBASE.UBASE("Scientific", "density-of-water(600F)", 9.990141000000000E+02, "kg/m3", "M/L3", "1.0")})
        self._map.update({"pH2O(4oF)": UBASE.UBASE("Scientific", "pH2O(4oF)", 9.990141000000000E+02, "kg/m3", "M/L3", "1.0")})
        self._map.update({"density-of-mercury(00C)": UBASE.UBASE("Scientific", "density-of-mercury(00C)", 1.359508000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"pH2O(0oC)": UBASE.UBASE("Scientific", "pH2O(0oC)", 1.359508000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"density-of-mercury(600F)": UBASE.UBASE("Scientific", "density-of-mercury(600F)", 1.355679000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"pH2O(60oF)": UBASE.UBASE("Scientific", "pH2O(60oF)", 1.355679000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"electron-radius": UBASE.UBASE("Scientific", "electron-radius", 2.817940326200000E-15, "m", "L", "1.0")})
        self._map.update({"re": UBASE.UBASE("Scientific", "re", 2.817940326200000E-15, "m", "L", "1.0")})
        self._map.update({"loschmidt's-number": UBASE.UBASE("Scientific", "loschmidt's-number", 2.686777400000000E+25, "1/m3", "1/L3", "1.0")})
        self._map.update({"no": UBASE.UBASE("Scientific", "no", 2.686777400000000E+25, "1/m3", "1/L3", "1.0")})
        self._map.update({"roentgen": UBASE.UBASE("Scientific", "roentgen", 2.580000000000000E-04, "A.s/kg", "I.T/M", "1.0")})
        self._map.update({"Rt": UBASE.UBASE("Scientific", "Rt", 2.580000000000000E-04, "A.s/kg", "I.T/M", "1.0")})
        self._map.update({"dalton": UBASE.UBASE("Scientific", "dalton", 1.660539066600000E-27, "kg", "M", "1.0")})
        self._map.update({"Da": UBASE.UBASE("Scientific", "Da", 1.660539066600000E-27, "kg", "M", "1.0")})
        self._map.update({"u": UBASE.UBASE("Scientific", "u", 1.660539066600000E-27, "kg", "M", "1.0")})
        self._map.update({"proton-mass": UBASE.UBASE("Scientific", "proton-mass", 1.672621923690000E-27, "kg", "M", "1.0")})
        self._map.update({"mp": UBASE.UBASE("Scientific", "mp", 1.672621923690000E-27, "kg", "M", "1.0")})
        self._map.update({"solar-mass": UBASE.UBASE("Scientific", "solar-mass", 1.988470000000000E+30, "kg", "M", "1.0")})
        self._map.update({"MO": UBASE.UBASE("Scientific", "MO", 1.988470000000000E+30, "kg", "M", "1.0")})
        self._map.update({"density-of-mercury(230C)": UBASE.UBASE("Scientific", "density-of-mercury(230C)", 1.353770000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"pHg(23oC)": UBASE.UBASE("Scientific", "pHg(23oC)", 1.353770000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"density-of-sea-water": UBASE.UBASE("Scientific", "density-of-sea-water", 1.025000000000000E+03, "kg/m3", "M/L3", "1.0")})
        self._map.update({"st": UBASE.UBASE("Scientific", "st", 1.025000000000000E+03, "kg/m3", "M/L3", "1.0")})
        self._map.update({"gas-constant-for-air": UBASE.UBASE("Scientific", "gas-constant-for-air", 2.860000000000000E+02, "m2/s2.K", "L2/T2Q", "1.0")})
        self._map.update({"R": UBASE.UBASE("Scientific", "R", 2.860000000000000E+02, "m2/s2.K", "L2/T2Q", "1.0")})
        self._map.update({"ratio-of-specific-heat-for-air": UBASE.UBASE("Scientific", "ratio-of-specific-heat-for-air", 1.400000000000000E+00, "O", "O", "1.0")})
        self._map.update({"g": UBASE.UBASE("Scientific", "g", 1.400000000000000E+00, "O", "O", "1.0")})
        self._map.update({"BTU(Mean)": UBASE.UBASE("FPS", "BTU(Mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"calorie(15oC)": UBASE.UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"cal(15oC)": UBASE.UBASE("Scientific", "cal(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"calorie(20oC)": UBASE.UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"cal(20oC)": UBASE.UBASE("Scientific", "cal(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"calorie(4oC)": UBASE.UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"cal(4oC)": UBASE.UBASE("Scientific", "cal(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"calorie(mean)": UBASE.UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"cal(mean)": UBASE.UBASE("Scientific", "cal(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"density-of-mercury(40C)": UBASE.UBASE("Scientific", "density-of-mercury(40C)", 1.360000000000000E+04, "kg/m3", "M/L3", "1.0")})
        self._map.update({"pHg(4oC)": UBASE.UBASE("Scientific", "pHg(4oC)", 1.360000000000000E+04, "kg/m3", "M/L3", "1.0")})
 #EOF
