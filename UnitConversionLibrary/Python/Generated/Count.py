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
# File Count.py
#
# Units for Count
#
# Class for Count units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Count(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Count.__instance == None:
            Count.__instance = Count()
        return Count.__instance

    def __new__(self):
       if Count.__instance == None:
           Count.__instance = super(Count, self).__new__(self)

       return  Count.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"Imperial[baker's-dozen]": UBASE.UBASE("Imperial", "baker's-dozen", 13, "O", "O", "1.0")})
        unit.update({"Imperial[bale]": UBASE.UBASE("Imperial", "bale", 4800, "O", "O", "1.0")})
        unit.update({"Imperial[bl]": UBASE.UBASE("Imperial", "bale", 4800, "O", "O", "1.0")})
        unit.update({"INT[bale]": UBASE.UBASE("INT", "bale", 5000, "O", "O", "1.0")})
        unit.update({"INT[bl]": UBASE.UBASE("INT", "bale", 5000, "O", "O", "1.0")})
        unit.update({"UK[brace]": UBASE.UBASE("UK", "brace", 2, "O", "O", "1.0")})
        unit.update({"Imperial[bundle]": UBASE.UBASE("Imperial", "bundle", 1000, "O", "O", "1.0")})
        unit.update({"Imperial[bdl]": UBASE.UBASE("Imperial", "bundle", 1000, "O", "O", "1.0")})
        unit.update({"Imperial[bundle(old)]": UBASE.UBASE("Imperial", "bundle(old)", 960, "O", "O", "1.0")})
        unit.update({"Imperial[bdl(old)]": UBASE.UBASE("Imperial", "bundle(old)", 960, "O", "O", "1.0")})
        unit.update({"Imperial[decade]": UBASE.UBASE("Imperial", "decade", 10, "O", "O", "1.0")})
        unit.update({"UK[dicker]": UBASE.UBASE("UK", "dicker", 10, "O", "O", "1.0")})
        unit.update({"Imperial[dozen]": UBASE.UBASE("Imperial", "dozen", 12, "O", "O", "1.0")})
        unit.update({"Imperial[doz]": UBASE.UBASE("Imperial", "dozen", 12, "O", "O", "1.0")})
        unit.update({"Imperial[dz]": UBASE.UBASE("Imperial", "dozen", 12, "O", "O", "1.0")})
        unit.update({"UK[flock]": UBASE.UBASE("UK", "flock", 40, "O", "O", "1.0")})
        unit.update({"Imperial[great-gross]": UBASE.UBASE("Imperial", "great-gross", 1728, "O", "O", "1.0")})
        unit.update({"Imperial[great-hundred]": UBASE.UBASE("Imperial", "great-hundred", 120, "O", "O", "1.0")})
        unit.update({"UK[gross]": UBASE.UBASE("UK", "gross", 144, "O", "O", "1.0")})
        unit.update({"Imperial[hat-trick]": UBASE.UBASE("Imperial", "hat-trick", 3, "O", "O", "1.0")})
        unit.update({"Imperial[nest]": UBASE.UBASE("Imperial", "hat-trick", 3, "O", "O", "1.0")})
        unit.update({"Roman[hecatomb]": UBASE.UBASE("Roman", "hecatomb", 100, "O", "O", "1.0")})
        unit.update({"MKS[hebdo]": UBASE.UBASE("MKS", "hebdo", 10000000, "O", "O", "1.0")})
        unit.update({"Greek[hekatomb]": UBASE.UBASE("Greek", "hekatomb", 100, "O", "O", "1.0")})
        unit.update({"Imperial[hundred]": UBASE.UBASE("Imperial", "hundred", 100, "O", "O", "1.0")})
        unit.update({"Indian[lakh]": UBASE.UBASE("Indian", "lakh", 100000, "O", "O", "1.0")})
        unit.update({"UK[last]": UBASE.UBASE("UK", "last", 13200, "O", "O", "1.0")})
        unit.update({"UK[long-hundred]": UBASE.UBASE("UK", "long-hundred", 132, "O", "O", "1.0")})
        unit.update({"UK[pair]": UBASE.UBASE("UK", "pair", 2, "O", "O", "1.0")})
        unit.update({"UK[perfect-ream]": UBASE.UBASE("UK", "perfect-ream", 512, "O", "O", "1.0")})
        unit.update({"UK[piece]": UBASE.UBASE("UK", "piece", 1, "O", "O", "1.0")})
        unit.update({"UK[pc]": UBASE.UBASE("UK", "piece", 1, "O", "O", "1.0")})
        unit.update({"UK[point]": UBASE.UBASE("UK", "point", 1, "O", "O", "1.0")})
        unit.update({"US[quires(new)]": UBASE.UBASE("US", "quires(new)", 25, "O", "O", "1.0")})
        unit.update({"US[quires(old)]": UBASE.UBASE("US", "quires(old)", 24, "O", "O", "1.0")})
        unit.update({"INT[ream]": UBASE.UBASE("INT", "ream", 500, "O", "O", "1.0")})
        unit.update({"Imperial[ream(old)]": UBASE.UBASE("Imperial", "ream(old)", 480, "O", "O", "1.0")})
        unit.update({"UK[score]": UBASE.UBASE("UK", "score", 20, "O", "O", "1.0")})
        unit.update({"UK[shock]": UBASE.UBASE("UK", "shock", 60, "O", "O", "1.0")})
        unit.update({"UK[shook]": UBASE.UBASE("UK", "shook", 60, "O", "O", "1.0")})
        unit.update({"UK[ten-hundred]": UBASE.UBASE("UK", "ten-hundred", 1320, "O", "O", "1.0")})
        unit.update({"Imperial[thousand]": UBASE.UBASE("Imperial", "thousand", 1000, "O", "O", "1.0")})
        unit.update({"Imperial[timber]": UBASE.UBASE("Imperial", "timber", 40, "O", "O", "1.0")})
        unit.update({"UK[timer]": UBASE.UBASE("UK", "timer", 40, "O", "O", "1.0")})
        unit.update({"UK[unity]": UBASE.UBASE("UK", "unity", 1, "O", "O", "1.0")})
        unit.update({"UK[warp]": UBASE.UBASE("UK", "warp", 4, "O", "O", "1.0")})
        unit.update({"UK[yoke]": UBASE.UBASE("UK", "yoke", 2, "O", "O", "1.0")})
        self._map.update({"count": BaseSystem.BaseSystem("count", unit, "1.0")})

        unit.clear()


 #EOF
