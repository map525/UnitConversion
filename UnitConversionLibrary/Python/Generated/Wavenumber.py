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
# File Wavenumber.py
#
# Units for Wavenumber
#
# Class for Wavenumber units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Wavenumber(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Wavenumber.__instance == None:
            Wavenumber.__instance = Wavenumber()
        return Wavenumber.__instance

    def __new__(self):
       if Wavenumber.__instance == None:
           Wavenumber.__instance = super(Wavenumber, self).__new__(self)

       return  Wavenumber.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"cgs[balmer]": UBASE.UBASE("cgs", "balmer", 1.000000000000000E+02, "1/m", "1/L", "1.0")})
        unit.update({"Imperial[count]": UBASE.UBASE("Imperial", "count", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"Imperial[ct]": UBASE.UBASE("Imperial", "count", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"Imperial[gauge]": UBASE.UBASE("Imperial", "gauge", 2.624671916010500E+01, "1/m", "1/L", "1.0")})
        unit.update({"Imperial[ga]": UBASE.UBASE("Imperial", "gauge", 2.624671916010500E+01, "1/m", "1/L", "1.0")})
        unit.update({"Imperial[mesh]": UBASE.UBASE("Imperial", "mesh", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"INT[dots-per-inch]": UBASE.UBASE("INT", "dots-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"INT[dpi]": UBASE.UBASE("INT", "dots-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"INT[points-per-inch]": UBASE.UBASE("INT", "points-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"INT[ppi]": UBASE.UBASE("INT", "points-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"INT[millimeter]": UBASE.UBASE("INT", "millimeter", 1.000000000000000E-03, "1/m", "1/L", "1.0")})
        unit.update({"INT[mm]": UBASE.UBASE("INT", "millimeter", 1.000000000000000E-03, "1/m", "1/L", "1.0")})
        unit.update({"INT[tracks-per-inch]": UBASE.UBASE("INT", "tracks-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"INT[TPI]": UBASE.UBASE("INT", "tracks-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0")})
        unit.update({"Scientific[kayser]": UBASE.UBASE("Scientific", "kayser", 1.000000000000000E+02, "1/m", "1/L", "1.0")})
        unit.update({"Scientific[Ky]": UBASE.UBASE("Scientific", "kayser", 1.000000000000000E+02, "1/m", "1/L", "1.0")})
        unit.update({"Scientific[permicron]": UBASE.UBASE("Scientific", "permicron", 1.000000000000000E+06, "1/m", "1/L", "1.0")})
        unit.update({"SI[dioptre]": UBASE.UBASE("SI", "dioptre", 1.000000000000000E+00, "1/m", "1/L", "1.0")})
        unit.update({"SI[d]": UBASE.UBASE("SI", "dioptre", 1.000000000000000E+00, "1/m", "1/L", "1.0")})
        unit.update({"SI[reciprocal-meter]": UBASE.UBASE("SI", "reciprocal-meter", 1.000000000000000E+00, "1/m", "1/L", "1.0")})
        unit.update({"SI[1/m]": UBASE.UBASE("SI", "reciprocal-meter", 1.000000000000000E+00, "1/m", "1/L", "1.0")})
        unit.update({"Scientific[reciprocal-foot]": UBASE.UBASE("Scientific", "reciprocal-foot", 3.280839895013120E+00, "1/m", "1/L", "1.0")})
        unit.update({"Scientific[1/ft]": UBASE.UBASE("Scientific", "reciprocal-foot", 3.280839895013120E+00, "1/m", "1/L", "1.0")})
        self._map.update({"wavenumber": BaseSystem.BaseSystem("wavenumber", unit, "1.0")})

        unit.clear()


 #EOF
