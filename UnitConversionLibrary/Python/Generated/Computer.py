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
# File Computer.py
#
# Units for Computer
#
# Class for Computer units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Computer(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Computer.__instance == None:
            Computer.__instance = Computer()
        return Computer.__instance

    def __new__(self):
       if Computer.__instance == None:
           Computer.__instance = super(Computer, self).__new__(self)

       return  Computer.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"Computer[bit]": UBASE.UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0")})
        unit.update({"Computer[b]": UBASE.UBASE("Computer", "bit", 1.250000000000000E-01, "byte", "byte", "1.0")})
        unit.update({"Computer[byte]": UBASE.UBASE("Computer", "byte", 1, "byte", "byte", "1.0")})
        unit.update({"Computer[o]": UBASE.UBASE("Computer", "byte", 1, "byte", "byte", "1.0")})
        unit.update({"Computer[B]": UBASE.UBASE("Computer", "byte", 1, "byte", "byte", "1.0")})
        unit.update({"Computer[octet]": UBASE.UBASE("Computer", "byte", 1, "byte", "byte", "1.0")})
        unit.update({"Computer[character]": UBASE.UBASE("Computer", "character", 1, "byte", "byte", "1.0")})
        unit.update({"Computer[ch]": UBASE.UBASE("Computer", "character", 1, "byte", "byte", "1.0")})
        unit.update({"Computer[nibble]": UBASE.UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0")})
        unit.update({"Computer[ni]": UBASE.UBASE("Computer", "nibble", 5.000000000000000E-01, "byte", "byte", "1.0")})
        unit.update({"Computer[nybble]": UBASE.UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0")})
        unit.update({"Computer[ny]": UBASE.UBASE("Computer", "nybble", 5.000000000000000E-01, "byte", "byte", "1.0")})
        unit.update({"Computer[quad]": UBASE.UBASE("Computer", "quad", 4, "byte", "byte", "1.0")})
        unit.update({"Computer[q]": UBASE.UBASE("Computer", "quad", 4, "byte", "byte", "1.0")})
        unit.update({"Computer[rune]": UBASE.UBASE("Computer", "rune", 2, "byte", "byte", "1.0")})
        unit.update({"Computer[r]": UBASE.UBASE("Computer", "rune", 2, "byte", "byte", "1.0")})
        unit.update({"Computer[word]": UBASE.UBASE("Computer", "word", 4, "byte", "byte", "1.0")})
        unit.update({"Computer[wd]": UBASE.UBASE("Computer", "word", 4, "byte", "byte", "1.0")})
        unit.update({"Computer[kilobyte]": UBASE.UBASE("Computer", "kilobyte", 1024, "byte", "byte", "1.0")})
        unit.update({"Computer[KB]": UBASE.UBASE("Computer", "kilobyte", 1024, "byte", "byte", "1.0")})
        unit.update({"Computer[megabyte]": UBASE.UBASE("Computer", "megabyte", 1048576, "byte", "byte", "1.0")})
        unit.update({"Computer[MB]": UBASE.UBASE("Computer", "megabyte", 1048576, "byte", "byte", "1.0")})
        unit.update({"Computer[gigabyte]": UBASE.UBASE("Computer", "gigabyte", 1073741824, "byte", "byte", "1.0")})
        unit.update({"Computer[GB]": UBASE.UBASE("Computer", "gigabyte", 1073741824, "byte", "byte", "1.0")})
        unit.update({"Computer[terabyte]": UBASE.UBASE("Computer", "terabyte", 1099511627776, "byte", "byte", "1.0")})
        unit.update({"Computer[TB]": UBASE.UBASE("Computer", "terabyte", 1099511627776, "byte", "byte", "1.0")})
        unit.update({"Computer[petabyte]": UBASE.UBASE("Computer", "petabyte", 1125899906842620, "byte", "byte", "1.0")})
        unit.update({"Computer[PB]": UBASE.UBASE("Computer", "petabyte", 1125899906842620, "byte", "byte", "1.0")})
        self._map.update({"computer": BaseSystem.BaseSystem("computer", unit, "1.0")})

        unit.clear()


        unit.update({"Computer[pixel]": UBASE.UBASE("Computer", "pixel", 1, "pixel", "pixel", "1.0")})
        self._map.update({"screenResolution": BaseSystem.BaseSystem("screenResolution", unit, "1.0")})

        unit.clear()


        unit.update({"Computer[voxel]": UBASE.UBASE("Computer", "voxel", 1, "voxel", "voxel", "1.0")})
        self._map.update({"voxel": BaseSystem.BaseSystem("voxel", unit, "1.0")})

        unit.clear()


 #EOF
