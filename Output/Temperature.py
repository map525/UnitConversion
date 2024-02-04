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
# File Temperature.py
#
# Units for Temperature
#
# Class for Temperature units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Temperature(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Temperature.__instance == None:
            Temperature.__instance = Temperature()
        return Temperature.__instance

    def __new__(self):
       if Temperature.__instance == None:
           Temperature.__instance = super(Temperature, self).__new__(self)

       return  Temperature.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"French[reaumur]": UBASE.UBASE("French", "reaumur", 1.250000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02)})
        unit.update({"French[oRe]": UBASE.UBASE("French", "reaumur", 1.250000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02)})
        unit.update({"Imperial[fahrenheit]": UBASE.UBASE("Imperial", "fahrenheit", 5.555555555555560E-01, "K", "Q", "1.0", 2.553722222222220E+02)})
        unit.update({"Imperial[oF]": UBASE.UBASE("Imperial", "fahrenheit", 5.555555555555560E-01, "K", "Q", "1.0", 2.553722222222220E+02)})
        unit.update({"Imperial[rankine]": UBASE.UBASE("Imperial", "rankine", 5.555555555555560E-01, "K", "Q", "1.0", 0.000000000000000E+00)})
        unit.update({"Imperial[oR]": UBASE.UBASE("Imperial", "rankine", 5.555555555555560E-01, "K", "Q", "1.0", 0.000000000000000E+00)})
        unit.update({"INT[celsius]": UBASE.UBASE("INT", "celsius", 1.000000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02)})
        unit.update({"INT[oC]": UBASE.UBASE("INT", "celsius", 1.000000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02)})
        unit.update({"SI[kelvin]": UBASE.UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00)})
        unit.update({"SI[oK]": UBASE.UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00)})
        unit.update({"SI[inferno]": UBASE.UBASE("SI", "inferno", 1.000000000000000E+09, "K", "Q", "1.0", 0.000000000000000E+00)})
        unit.update({"SI[volt(thermal)]": UBASE.UBASE("SI", "volt(thermal)", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00)})
        self._map.update({"temperature": BaseSystem.BaseSystem("temperature", unit, "1.0")})

        unit.clear()


 #EOF
