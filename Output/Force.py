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
# File Force.py
#
# Units for Force
#
# Class for Force units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Force(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Force.__instance == None:
            Force.__instance = Force()
        return Force.__instance

    def __new__(self):
       if Force.__instance == None:
           Force.__instance = super(Force, self).__new__(self)

       return  Force.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"a.u.[au-of-force]": UBASE.UBASE("a.u.", "au-of-force", 8.238723498236610E-08, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"a.u.[auf]": UBASE.UBASE("a.u.", "au-of-force", 8.238723498236610E-08, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"CAN[ounce-force]": UBASE.UBASE("CAN", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"CAN[ozf]": UBASE.UBASE("CAN", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"cgs[dyne]": UBASE.UBASE("cgs", "dyne", 1.000000000000000E-05, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"cgs[dyn]": UBASE.UBASE("cgs", "dyne", 1.000000000000000E-05, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"FPS[pound-force]": UBASE.UBASE("FPS", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"FPS[lbf]": UBASE.UBASE("FPS", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"FPS[poundal]": UBASE.UBASE("FPS", "poundal", 1.382549543760000E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"FPS[pdl]": UBASE.UBASE("FPS", "poundal", 1.382549543760000E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[kilopound-force]": UBASE.UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[kipf]": UBASE.UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[kip-force]": UBASE.UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[ouncedal]": UBASE.UBASE("Imperial", "ouncedal", 8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[odl]": UBASE.UBASE("Imperial", "ouncedal", 8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[pound-force]": UBASE.UBASE("Imperial", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[lbf]": UBASE.UBASE("Imperial", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[tondal]": UBASE.UBASE("Imperial", "tondal", 3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Imperial[tdl]": UBASE.UBASE("Imperial", "tondal", 3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kilogram-force]": UBASE.UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kgf]": UBASE.UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kgp]": UBASE.UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kilogram-weight]": UBASE.UBASE("MKpS", "kilogram-weight", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[kgw]": UBASE.UBASE("MKpS", "kilogram-weight", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[pond]": UBASE.UBASE("MKpS", "pond", 9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MKpS[p]": UBASE.UBASE("MKpS", "pond", 9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MTS[funal]": UBASE.UBASE("MTS", "funal", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MTS[sthene]": UBASE.UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MTS[sn]": UBASE.UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MTS[sth]": UBASE.UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"MTS[ton-force(metric)]": UBASE.UBASE("MTS", "ton-force(metric)", 9.806650000000000E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Scientific[crinal]": UBASE.UBASE("Scientific", "crinal", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"Scientific[slug-force]": UBASE.UBASE("Scientific", "slug-force", 1.431172982391550E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[newton]": UBASE.UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[N]": UBASE.UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"UK[ounce-force]": UBASE.UBASE("UK", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"UK[ozf]": UBASE.UBASE("UK", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"UK[ton-force(long)]": UBASE.UBASE("UK", "ton-force(long)", 9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"US[ounce-force]": UBASE.UBASE("US", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"US[ozf]": UBASE.UBASE("US", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"US[ton-force(short)]": UBASE.UBASE("US", "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[yottanewton]": UBASE.UBASE("SI", "yottanewton", 1.000000000000000E+24, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[YN]": UBASE.UBASE("SI", "yottanewton", 1.000000000000000E+24, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[zettanewton]": UBASE.UBASE("SI", "zettanewton", 1.000000000000000E+21, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[ZN]": UBASE.UBASE("SI", "zettanewton", 1.000000000000000E+21, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[exacnewton]": UBASE.UBASE("SI", "exacnewton", 1.000000000000000E+18, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[EN]": UBASE.UBASE("SI", "exacnewton", 1.000000000000000E+18, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[petanewton]": UBASE.UBASE("SI", "petanewton", 1.000000000000000E+15, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[PN]": UBASE.UBASE("SI", "petanewton", 1.000000000000000E+15, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[teranewton]": UBASE.UBASE("SI", "teranewton", 1.000000000000000E+12, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[TN]": UBASE.UBASE("SI", "teranewton", 1.000000000000000E+12, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[giganewton]": UBASE.UBASE("SI", "giganewton", 1.000000000000000E+09, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[GN]": UBASE.UBASE("SI", "giganewton", 1.000000000000000E+09, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[meganewton]": UBASE.UBASE("SI", "meganewton", 1.000000000000000E+06, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[MN]": UBASE.UBASE("SI", "meganewton", 1.000000000000000E+06, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[kilonewton]": UBASE.UBASE("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[kN]": UBASE.UBASE("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[hectonewton]": UBASE.UBASE("SI", "hectonewton", 1.000000000000000E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[hN]": UBASE.UBASE("SI", "hectonewton", 1.000000000000000E+02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[decacnewton]": UBASE.UBASE("SI", "decacnewton", 1.000000000000000E+01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[daN]": UBASE.UBASE("SI", "decacnewton", 1.000000000000000E+01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[decinewton]": UBASE.UBASE("SI", "decinewton", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[dN]": UBASE.UBASE("SI", "decinewton", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[centinewton]": UBASE.UBASE("SI", "centinewton", 1.000000000000000E-02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[cN]": UBASE.UBASE("SI", "centinewton", 1.000000000000000E-02, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[millinewton]": UBASE.UBASE("SI", "millinewton", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[NH]": UBASE.UBASE("SI", "millinewton", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[micronewton]": UBASE.UBASE("SI", "micronewton", 1.000000000000000E-06, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[uN]": UBASE.UBASE("SI", "micronewton", 1.000000000000000E-06, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[nanonewton]": UBASE.UBASE("SI", "nanonewton", 1.000000000000000E-09, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[nN]": UBASE.UBASE("SI", "nanonewton", 1.000000000000000E-09, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[piconewton]": UBASE.UBASE("SI", "piconewton", 1.000000000000000E-12, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[pN]": UBASE.UBASE("SI", "piconewton", 1.000000000000000E-12, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[femtonewton]": UBASE.UBASE("SI", "femtonewton", 1.000000000000000E-15, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[fN]": UBASE.UBASE("SI", "femtonewton", 1.000000000000000E-15, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[attonewton]": UBASE.UBASE("SI", "attonewton", 1.000000000000000E-18, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[aN]": UBASE.UBASE("SI", "attonewton", 1.000000000000000E-18, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[zeptonewton]": UBASE.UBASE("SI", "zeptonewton", 1.000000000000000E-21, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[zN]": UBASE.UBASE("SI", "zeptonewton", 1.000000000000000E-21, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[yoctonewton]": UBASE.UBASE("SI", "yoctonewton", 1.000000000000000E-24, "kg.m/s2", "M.L/T2", "1.0")})
        unit.update({"SI[yN]": UBASE.UBASE("SI", "yoctonewton", 1.000000000000000E-24, "kg.m/s2", "M.L/T2", "1.0")})
        self._map.update({"force": BaseSystem.BaseSystem("force", unit, "1.0")})

        unit.clear()


        unit.update({"a.u.[au-of-linear-momentum]": UBASE.UBASE("a.u.", "au-of-linear-momentum", 1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"a.u.[aulm]": UBASE.UBASE("a.u.", "au-of-linear-momentum", 1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"cgs[bole]": UBASE.UBASE("cgs", "bole", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"cgs[gramcentimeter-per-second]": UBASE.UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"cgs[gcm/sec]": UBASE.UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"SI[newton-second]": UBASE.UBASE("SI", "newton-second", 1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0")})
        unit.update({"SI[N-sec]": UBASE.UBASE("SI", "newton-second", 1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0")})
        self._map.update({"momentum": BaseSystem.BaseSystem("momentum", unit, "1.0")})

        unit.clear()


        unit.update({"a.u.[au-of-action]": UBASE.UBASE("a.u.", "au-of-action", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0")})
        unit.update({"a.u.[aua]": UBASE.UBASE("a.u.", "au-of-action", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0")})
        unit.update({"a.u.[au-of-angular-momentum]": UBASE.UBASE("a.u.", "au-of-angular-momentum", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0")})
        unit.update({"a.u.[auam]": UBASE.UBASE("a.u.", "au-of-angular-momentum", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0")})
        unit.update({"Scientific[planck]": UBASE.UBASE("Scientific", "planck", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0")})
        unit.update({"SI[joule-second]": UBASE.UBASE("SI", "joule-second", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0")})
        unit.update({"SI[J-sec]": UBASE.UBASE("SI", "joule-second", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0")})
        self._map.update({"action": BaseSystem.BaseSystem("action", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[sumner-unit]": UBASE.UBASE("Scientific", "sumner-unit", 3.333333333333330E-09, "kg/s", "M/T", "1.0")})
        unit.update({"SI[kilogram-per-second]": UBASE.UBASE("SI", "kilogram-per-second", 1.000000000000000E+00, "kg/s", "M/T", "1.0")})
        unit.update({"SI[kg/sec]": UBASE.UBASE("SI", "kilogram-per-second", 1.000000000000000E+00, "kg/s", "M/T", "1.0")})
        unit.update({"SI[newton-per-meter]": UBASE.UBASE("SI", "newton-per-meter", 1.000000000000000E+00, "kg/s", "M/T", "1.0")})
        unit.update({"SI[N/m]": UBASE.UBASE("SI", "newton-per-meter", 1.000000000000000E+00, "kg/s", "M/T", "1.0")})
        self._map.update({"massFlow": BaseSystem.BaseSystem("massFlow", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[bisquare-foot]": UBASE.UBASE("Imperial", "bisquare-foot", 8.630974841241600E-03, "m4", "L4", "1.0")})
        unit.update({"Imperial[ft4]": UBASE.UBASE("Imperial", "bisquare-foot", 8.630974841241600E-03, "m4", "L4", "1.0")})
        unit.update({"Imperial[bisquare-inch]": UBASE.UBASE("Imperial", "bisquare-inch", 4.162314256000000E-07, "m4", "L4", "1.0")})
        unit.update({"Imperial[in4]": UBASE.UBASE("Imperial", "bisquare-inch", 4.162314256000000E-07, "m4", "L4", "1.0")})
        unit.update({"SI[bisquare-meter]": UBASE.UBASE("SI", "bisquare-meter", 1.000000000000000E+00, "m4", "L4", "1.0")})
        unit.update({"SI[m4]": UBASE.UBASE("SI", "bisquare-meter", 1.000000000000000E+00, "m4", "L4", "1.0")})
        unit.update({"US[barrel-mile]": UBASE.UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0")})
        unit.update({"US[bbl-mi]": UBASE.UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0")})
        unit.update({"US[mi4]": UBASE.UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0")})
        self._map.update({"quadMoment": BaseSystem.BaseSystem("quadMoment", unit, "1.0")})

        unit.clear()


 #EOF
