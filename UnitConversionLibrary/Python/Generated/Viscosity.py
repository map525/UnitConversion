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
# File Viscosity.py
#
# Units for Viscosity
#
# Class for Viscosity units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Viscosity(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Viscosity.__instance == None:
            Viscosity.__instance = Viscosity()
        return Viscosity.__instance

    def __new__(self):
       if Viscosity.__instance == None:
           Viscosity.__instance = super(Viscosity, self).__new__(self)

       return  Viscosity.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"cgs[centistokes]": UBASE.UBASE("cgs", "centistokes", 1.000000000000000E-06, "m2/s", "L2/T", "1.0")})
        unit.update({"cgs[cSt]": UBASE.UBASE("cgs", "centistokes", 1.000000000000000E-06, "m2/s", "L2/T", "1.0")})
        unit.update({"cgs[lentor]": UBASE.UBASE("cgs", "lentor", 1.000000000000000E-08, "m2/s", "L2/T", "1.0")})
        unit.update({"cgs[millistokes]": UBASE.UBASE("cgs", "millistokes", 1.000000000000000E-07, "m2/s", "L2/T", "1.0")})
        unit.update({"cgs[mSt]": UBASE.UBASE("cgs", "millistokes", 1.000000000000000E-07, "m2/s", "L2/T", "1.0")})
        unit.update({"cgs[stokes]": UBASE.UBASE("cgs", "stokes", 1.000000000000000E-08, "m2/s", "L2/T", "1.0")})
        unit.update({"cgs[St]": UBASE.UBASE("cgs", "stokes", 1.000000000000000E-08, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-foot-per-hour]": UBASE.UBASE("Imperial", "square-foot-per-hour", 2.580640000000000E-05, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[ft2/hr]": UBASE.UBASE("Imperial", "square-foot-per-hour", 2.580640000000000E-05, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-foot-per-second]": UBASE.UBASE("Imperial", "square-foot-per-second", 9.290304000000000E-02, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[ft2/sec]": UBASE.UBASE("Imperial", "square-foot-per-second", 9.290304000000000E-02, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-inch-per-hour]": UBASE.UBASE("Imperial", "square-inch-per-hour", 1.792111111111110E-07, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[in2/hr]": UBASE.UBASE("Imperial", "square-inch-per-hour", 1.792111111111110E-07, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-inch-per-second]": UBASE.UBASE("Imperial", "square-inch-per-second", 6.451600000000000E-04, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[in2/sec]": UBASE.UBASE("Imperial", "square-inch-per-second", 6.451600000000000E-04, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-meter-per-hour]": UBASE.UBASE("Imperial", "square-meter-per-hour", 2.777777777777780E-04, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[m2/hr]": UBASE.UBASE("Imperial", "square-meter-per-hour", 2.777777777777780E-04, "m2/s", "L2/T", "1.0")})
        unit.update({"SI[square-meter-per-second]": UBASE.UBASE("SI", "square-meter-per-second", 1.000000000000000E+00, "m2/s", "L2/T", "1.0")})
        unit.update({"SI[m2/sec]": UBASE.UBASE("SI", "square-meter-per-second", 1.000000000000000E+00, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-centimeter-per-hour]": UBASE.UBASE("Imperial", "square-centimeter-per-hour", 2.777777777777780E-08, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[cm2/hr]": UBASE.UBASE("Imperial", "square-centimeter-per-hour", 2.777777777777780E-08, "m2/s", "L2/T", "1.0")})
        unit.update({"SI[square-centimeter-per-second]": UBASE.UBASE("SI", "square-centimeter-per-second", 1.000000000000000E-04, "m2/s", "L2/T", "1.0")})
        unit.update({"SI[cm2/sec]": UBASE.UBASE("SI", "square-centimeter-per-second", 1.000000000000000E-04, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-millimeter-per-hour]": UBASE.UBASE("Imperial", "square-millimeter-per-hour", 2.777777777777780E-10, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[mm2/hr]": UBASE.UBASE("Imperial", "square-millimeter-per-hour", 2.777777777777780E-10, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[square-millimeter-per-second]": UBASE.UBASE("Imperial", "square-millimeter-per-second", 1.000000000000000E-06, "m2/s", "L2/T", "1.0")})
        unit.update({"Imperial[mm2/sec]": UBASE.UBASE("Imperial", "square-millimeter-per-second", 1.000000000000000E-06, "m2/s", "L2/T", "1.0")})
        self._map.update({"kinematicViscosity": BaseSystem.BaseSystem("kinematicViscosity", unit, "1.0")})

        unit.clear()


        unit.update({"cgs[barye-second]": UBASE.UBASE("cgs", "barye-second", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[barye-sec]": UBASE.UBASE("cgs", "barye-second", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[centipoise]": UBASE.UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[cP]": UBASE.UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[cPo]": UBASE.UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[dyne-second-per-square-centimeter]": UBASE.UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[dyn-sec/cm2]": UBASE.UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[]": UBASE.UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[kilopound-hour-per-square-meter]": UBASE.UBASE("Imperial", "kilopound-hour-per-square-meter", 3.530394000000000E+04, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[kip-hr/m2]": UBASE.UBASE("Imperial", "kilopound-hour-per-square-meter", 3.530394000000000E+04, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[kilopound-second-per-square-meter]": UBASE.UBASE("Imperial", "kilopound-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[kip-sec/m2]": UBASE.UBASE("Imperial", "kilopound-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[millipoise]": UBASE.UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[mP]": UBASE.UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[mPo]": UBASE.UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[millipascal-second]": UBASE.UBASE("SI", "millipascal-second", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[mPa-sec]": UBASE.UBASE("SI", "millipascal-second", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MTS[pieze-second]": UBASE.UBASE("MTS", "pieze-second", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MTS[pz-sec]": UBASE.UBASE("MTS", "pieze-second", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[poise]": UBASE.UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[P]": UBASE.UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"cgs[Po]": UBASE.UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[pound-force-hour-per-square-foot]": UBASE.UBASE("Imperial", "pound-force-hour-per-square-foot", 1.723689323292090E+05, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[lbf-hr/ft2]": UBASE.UBASE("Imperial", "pound-force-hour-per-square-foot", 1.723689323292090E+05, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[pound-force-second-per-square-foot]": UBASE.UBASE("Imperial", "pound-force-second-per-square-foot", 4.788025898033580E+01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[lbf-sec/ft2]": UBASE.UBASE("Imperial", "pound-force-second-per-square-foot", 4.788025898033580E+01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"FPS[reynolds]": UBASE.UBASE("FPS", "reynolds", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"FPS[reyns]": UBASE.UBASE("FPS", "reyns", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MTS[sthene-second-per-square-meter]": UBASE.UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MTS[sthene-sec/m2]": UBASE.UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MTS[sn-sec/m2]": UBASE.UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MKpS[kilogram-force-second-per-square-meter]": UBASE.UBASE("MKpS", "kilogram-force-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"MKpS[kgf-sec/m2]": UBASE.UBASE("MKpS", "kilogram-force-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[newton-second-per-square-meter]": UBASE.UBASE("SI", "newton-second-per-square-meter", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[N-sec/m2]": UBASE.UBASE("SI", "newton-second-per-square-meter", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[pascal-second]": UBASE.UBASE("SI", "pascal-second", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[Pa-sec]": UBASE.UBASE("SI", "pascal-second", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[poiseuille]": UBASE.UBASE("SI", "poiseuille", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[poundal-second-per-square-foot]": UBASE.UBASE("Imperial", "poundal-second-per-square-foot", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"Imperial[pdl-sec/ft2]": UBASE.UBASE("Imperial", "poundal-second-per-square-foot", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[yottapoiseuille]": UBASE.UBASE("SI", "yottapoiseuille", 1.000000000000000E+24, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[YPo]": UBASE.UBASE("SI", "yottapoiseuille", 1.000000000000000E+24, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[zettapoiseuille]": UBASE.UBASE("SI", "zettapoiseuille", 1.000000000000000E+21, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[ZPo]": UBASE.UBASE("SI", "zettapoiseuille", 1.000000000000000E+21, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[exacpoiseuille]": UBASE.UBASE("SI", "exacpoiseuille", 1.000000000000000E+18, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[EPo]": UBASE.UBASE("SI", "exacpoiseuille", 1.000000000000000E+18, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[petapoiseuille]": UBASE.UBASE("SI", "petapoiseuille", 1.000000000000000E+15, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[PPo]": UBASE.UBASE("SI", "petapoiseuille", 1.000000000000000E+15, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[terapoiseuille]": UBASE.UBASE("SI", "terapoiseuille", 1.000000000000000E+12, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[TPo]": UBASE.UBASE("SI", "terapoiseuille", 1.000000000000000E+12, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[gigapoiseuille]": UBASE.UBASE("SI", "gigapoiseuille", 1.000000000000000E+09, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[GPo]": UBASE.UBASE("SI", "gigapoiseuille", 1.000000000000000E+09, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[megapoiseuille]": UBASE.UBASE("SI", "megapoiseuille", 1.000000000000000E+06, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[MPo]": UBASE.UBASE("SI", "megapoiseuille", 1.000000000000000E+06, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[kilocpoiseuille]": UBASE.UBASE("SI", "kilocpoiseuille", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[kPo]": UBASE.UBASE("SI", "kilocpoiseuille", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[hectopoiseuille]": UBASE.UBASE("SI", "hectopoiseuille", 1.000000000000000E+02, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[hPo]": UBASE.UBASE("SI", "hectopoiseuille", 1.000000000000000E+02, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[decapoiseuille]": UBASE.UBASE("SI", "decapoiseuille", 1.000000000000000E+01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[daPo]": UBASE.UBASE("SI", "decapoiseuille", 1.000000000000000E+01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[decipoiseuille]": UBASE.UBASE("SI", "decipoiseuille", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[dPo]": UBASE.UBASE("SI", "decipoiseuille", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[centipoiseuille]": UBASE.UBASE("SI", "centipoiseuille", 1.000000000000000E-02, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[cPo]": UBASE.UBASE("SI", "centipoiseuille", 1.000000000000000E-02, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[millipoiseuille]": UBASE.UBASE("SI", "millipoiseuille", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[mPo]": UBASE.UBASE("SI", "millipoiseuille", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[micropoiseuille]": UBASE.UBASE("SI", "micropoiseuille", 1.000000000000000E-06, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[uPo]": UBASE.UBASE("SI", "micropoiseuille", 1.000000000000000E-06, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[nanopoiseuille]": UBASE.UBASE("SI", "nanopoiseuille", 1.000000000000000E-09, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[nPo]": UBASE.UBASE("SI", "nanopoiseuille", 1.000000000000000E-09, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[picopoiseuille]": UBASE.UBASE("SI", "picopoiseuille", 1.000000000000000E-12, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[pPo]": UBASE.UBASE("SI", "picopoiseuille", 1.000000000000000E-12, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[femtopoiseuille]": UBASE.UBASE("SI", "femtopoiseuille", 1.000000000000000E-15, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[fPo]": UBASE.UBASE("SI", "femtopoiseuille", 1.000000000000000E-15, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[attopoiseuille]": UBASE.UBASE("SI", "attopoiseuille", 1.000000000000000E-18, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[aPo]": UBASE.UBASE("SI", "attopoiseuille", 1.000000000000000E-18, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[zeptopoiseuille]": UBASE.UBASE("SI", "zeptopoiseuille", 1.000000000000000E-21, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[zPo]": UBASE.UBASE("SI", "zeptopoiseuille", 1.000000000000000E-21, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[yoctopoiseuille]": UBASE.UBASE("SI", "yoctopoiseuille", 1.000000000000000E-24, "kg/m.s", "M/L.T", "1.0")})
        unit.update({"SI[yPo]": UBASE.UBASE("SI", "yoctopoiseuille", 1.000000000000000E-24, "kg/m.s", "M/L.T", "1.0")})
        self._map.update({"dynamicViscosity": BaseSystem.BaseSystem("dynamicViscosity", unit, "1.0")})

        unit.clear()


 #EOF
