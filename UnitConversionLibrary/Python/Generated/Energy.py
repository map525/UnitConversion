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
# File Energy.py
#
# Units for Energy
#
# Class for Energy units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Energy(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Energy.__instance == None:
            Energy.__instance = Energy()
        return Energy.__instance

    def __new__(self):
       if Energy.__instance == None:
           Energy.__instance = super(Energy, self).__new__(self)

       return  Energy.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"a.u.[au-of-energy]": UBASE.UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"a.u.[Eh]": UBASE.UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"a.u.[aue]": UBASE.UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[barrel-oil-equivalent]": UBASE.UBASE("US", "barrel-oil-equivalent", 6.119790000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[bboe]": UBASE.UBASE("US", "bboe", 6.119790000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[BeV]": UBASE.UBASE("US", "BeV", 1.602176634000000E-10, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[board-of-trade-unit]": UBASE.UBASE("Imperial", "board-of-trade-unit", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(15.56oC)]": UBASE.UBASE("UK", "british-thermal-unit(15.56oC)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(15.56oC)]": UBASE.UBASE("UK", "british-thermal-unit(15.56oC)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(39oF)]": UBASE.UBASE("UK", "british-thermal-unit(39oF)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(39oF)]": UBASE.UBASE("UK", "british-thermal-unit(39oF)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(4oC)]": UBASE.UBASE("UK", "british-thermal-unit(4oC)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(4oC)]": UBASE.UBASE("UK", "british-thermal-unit(4oC)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[british=thermal-unit(59oF)]": UBASE.UBASE("US", "british=thermal-unit(59oF)", 1.054804000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[Btu(59oF)]": UBASE.UBASE("US", "british=thermal-unit(59oF)", 1.054804000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit-(60oF)]": UBASE.UBASE("UK", "british-thermal-unit-(60oF)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(60oF)]": UBASE.UBASE("UK", "british-thermal-unit-(60oF)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(Gas)]": UBASE.UBASE("UK", "british-thermal-unit(Gas)", 1.054760000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(Gas)]": UBASE.UBASE("UK", "british-thermal-unit(Gas)", 1.054760000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(GIA)]": UBASE.UBASE("UK", "british-thermal-unit(GIA)", 1.054615000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(GIA)]": UBASE.UBASE("UK", "british-thermal-unit(GIA)", 1.054615000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(ISO)]": UBASE.UBASE("UK", "british-thermal-unit(ISO)", 1.055060000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(ISO)]": UBASE.UBASE("UK", "british-thermal-unit(ISO)", 1.055060000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(IT)]": UBASE.UBASE("UK", "british-thermal-unit(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(IT)]": UBASE.UBASE("UK", "british-thermal-unit(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[british-thermal-unit(mean)]": UBASE.UBASE("FPS", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[Btu(mean)]": UBASE.UBASE("FPS", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(mean)]": UBASE.UBASE("UK", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(mean)]": UBASE.UBASE("UK", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[british-thermal-unit(therm)]": UBASE.UBASE("UK", "british-thermal-unit(therm)", 1.054350264488890E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[Btu(threm)]": UBASE.UBASE("UK", "british-thermal-unit(therm)", 1.054350264488890E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[calorie]": UBASE.UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[Cal]": UBASE.UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kcal]": UBASE.UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[calorie(15oC)]": UBASE.UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[cal(15oC)]": UBASE.UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[calorie(20oC)]": UBASE.UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[cal(20oC)]": UBASE.UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[calorie(4oC)]": UBASE.UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[cal(4oC)]": UBASE.UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[calorie(IT)]": UBASE.UBASE("INT", "calorie(IT)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[cal(IT)]": UBASE.UBASE("INT", "calorie(IT)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[calorie(mean)]": UBASE.UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[cal(mean)]": UBASE.UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[calorie(therm)]": UBASE.UBASE("US", "calorie(therm)", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[cal(therm)]": UBASE.UBASE("US", "calorie(therm)", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[celsius-heat-unit]": UBASE.UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[Chu]": UBASE.UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[chu]": UBASE.UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[CHU]": UBASE.UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[centigrade-heat-unit]": UBASE.UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[cthu]": UBASE.UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[Cthu]": UBASE.UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[centigrade-heat-unit(15oC)]": UBASE.UBASE("Imperial", "centigrade-heat-unit(15oC)", 1.899100000000000E+30, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[chu(15oC)]": UBASE.UBASE("Imperial", "centigrade-heat-unit(15oC)", 1.899100000000000E+30, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[duty]": UBASE.UBASE("FPS", "duty", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[duty]": UBASE.UBASE("UK", "duty", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"cgs[dyne-centimeter]": UBASE.UBASE("cgs", "dyne-centimeter", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"cgs[dyn-cm]": UBASE.UBASE("cgs", "dyne-centimeter", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[electronvolt]": UBASE.UBASE("Scientific", "electronvolt", 1.602176634000000E-19, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[eV]": UBASE.UBASE("Scientific", "electronvolt", 1.602176634000000E-19, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"cgs[erg]": UBASE.UBASE("cgs", "erg", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[foot-pound-force]": UBASE.UBASE("FPS", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[ft-lbf]": UBASE.UBASE("FPS", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[foot-poundal]": UBASE.UBASE("FPS", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"FPS[ft-pdl]": UBASE.UBASE("FPS", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[foot-poundal]": UBASE.UBASE("UK", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[ft-pdl]": UBASE.UBASE("UK", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[foot-pound-force]": UBASE.UBASE("UK", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[ft-lbf]": UBASE.UBASE("UK", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[frigorie]": UBASE.UBASE("Scientific", "frigorie", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[fg]": UBASE.UBASE("Scientific", "frigorie", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"a.u.[hartree]": UBASE.UBASE("a.u.", "hartree", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[joule]": UBASE.UBASE("INT", "joule", 1.000165000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[J]": UBASE.UBASE("INT", "joule", 1.000165000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[joule]": UBASE.UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[J]": UBASE.UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"UK[kelvin]": UBASE.UBASE("UK", "kelvin", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kilocalorie(15oC)]": UBASE.UBASE("Scientific", "kilocalorie(15oC)", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kcal(15oC)]": UBASE.UBASE("Scientific", "kilocalorie(15oC)", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kilocalorie(20oC)]": UBASE.UBASE("Scientific", "kilocalorie(20oC)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kcal(20oC)]": UBASE.UBASE("Scientific", "kilocalorie(20oC)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kilocalorie(4oC)]": UBASE.UBASE("Scientific", "kilocalorie(4oC)", 4.204500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kcal(4oC)]": UBASE.UBASE("Scientific", "kilocalorie(4oC)", 4.204500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[kilocalorie(IT)]": UBASE.UBASE("INT", "kilocalorie(IT)", 4.186800000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[kcal(IT)]": UBASE.UBASE("INT", "kilocalorie(IT)", 4.186800000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kilocalorie(mean)]": UBASE.UBASE("Scientific", "kilocalorie(mean)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kcal(mean)]": UBASE.UBASE("Scientific", "kilocalorie(mean)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[kilocalorie(therm)]": UBASE.UBASE("US", "kilocalorie(therm)", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[kcal(therm)]": UBASE.UBASE("US", "kilocalorie(therm)", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kilogram-calorie]": UBASE.UBASE("Scientific", "kilogram-calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kgCal]": UBASE.UBASE("Scientific", "kilogram-calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"MKpS[kilogram-force-meter]": UBASE.UBASE("MKpS", "kilogram-force-meter", 9.806650000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"MKpS[kgfm]": UBASE.UBASE("MKpS", "kilogram-force-meter", 9.806650000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kiloton-equivalent(TNT)]": UBASE.UBASE("Scientific", "kiloton-equivalent(TNT)", 4.184000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kt(TNT)]": UBASE.UBASE("Scientific", "kiloton-equivalent(TNT)", 4.184000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kilowatt-hour]": UBASE.UBASE("Scientific", "kilowatt-hour", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[kWhr]": UBASE.UBASE("Scientific", "kilowatt-hour", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[liter-atmosphere]": UBASE.UBASE("Scientific", "liter-atmosphere", 1.013250000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[latm]": UBASE.UBASE("Scientific", "liter-atmosphere", 1.013250000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[megatonne-equivalent(TNT)]": UBASE.UBASE("Scientific", "megatonne-equivalent(TNT)", 4.184000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[Mt(TNT)]": UBASE.UBASE("Scientific", "megatonne-equivalent(TNT)", 4.184000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[micri-erg]": UBASE.UBASE("Scientific", "micri-erg", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[newton-meter]": UBASE.UBASE("SI", "newton-meter", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[N-m]": UBASE.UBASE("SI", "newton-meter", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[pound-centigrade-unit]": UBASE.UBASE("Imperial", "pound-centigrade-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[pcu]": UBASE.UBASE("Imperial", "pound-centigrade-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[prout]": UBASE.UBASE("Scientific", "prout", 2.963890010000000E-14, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[Q-unit]": UBASE.UBASE("US", "Q-unit", 1.055055852620000E+21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[quad]": UBASE.UBASE("US", "quad", 1.055055852620000E+18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[quadrillion(Btu)]": UBASE.UBASE("US", "quadrillion(Btu)", 1.055055852620000E+18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[rydberg]": UBASE.UBASE("Scientific", "rydberg", 2.179872361086220E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[Ry]": UBASE.UBASE("Scientific", "rydberg", 2.179872361086220E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Imperial[therm]": UBASE.UBASE("Imperial", "therm", 1.055055852620000E+08, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"US[therm]": UBASE.UBASE("US", "therm", 1.054804000000000E+08, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[thermie(15oC)]": UBASE.UBASE("Scientific", "thermie(15oC)", 4.185500000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"Scientific[th(15oC)]": UBASE.UBASE("Scientific", "thermie(15oC)", 4.185500000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[tonne-coal-equivalent]": UBASE.UBASE("INT", "tonne-coal-equivalent", 2.928800000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[tce]": UBASE.UBASE("INT", "tonne-coal-equivalent", 2.928800000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[tonne-oil-equivalent]": UBASE.UBASE("INT", "tonne-oil-equivalent", 4.184000000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"INT[toe]": UBASE.UBASE("INT", "tonne-oil-equivalent", 4.184000000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[yottajoule]": UBASE.UBASE("SI", "yottajoule", 1.000000000000000E+24, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[YJ]": UBASE.UBASE("SI", "yottajoule", 1.000000000000000E+24, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[zettajoule]": UBASE.UBASE("SI", "zettajoule", 1.000000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[ZJ]": UBASE.UBASE("SI", "zettajoule", 1.000000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[exacjoule]": UBASE.UBASE("SI", "exacjoule", 1.000000000000000E+18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[EJ]": UBASE.UBASE("SI", "exacjoule", 1.000000000000000E+18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[petajoule]": UBASE.UBASE("SI", "petajoule", 1.000000000000000E+15, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[PJ]": UBASE.UBASE("SI", "petajoule", 1.000000000000000E+15, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[terajoule]": UBASE.UBASE("SI", "terajoule", 1.000000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[TJ]": UBASE.UBASE("SI", "terajoule", 1.000000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[gigajoule]": UBASE.UBASE("SI", "gigajoule", 1.000000000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[GJ]": UBASE.UBASE("SI", "gigajoule", 1.000000000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[megajoule]": UBASE.UBASE("SI", "megajoule", 1.000000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[MJ]": UBASE.UBASE("SI", "megajoule", 1.000000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[kilojoule]": UBASE.UBASE("SI", "kilojoule", 1.000000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[kJ]": UBASE.UBASE("SI", "kilojoule", 1.000000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[hectojoule]": UBASE.UBASE("SI", "hectojoule", 1.000000000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[hJ]": UBASE.UBASE("SI", "hectojoule", 1.000000000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[decajoule]": UBASE.UBASE("SI", "decajoule", 1.000000000000000E+01, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[daJ]": UBASE.UBASE("SI", "decajoule", 1.000000000000000E+01, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[decijoule]": UBASE.UBASE("SI", "decijoule", 1.000000000000000E-01, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[dJ]": UBASE.UBASE("SI", "decijoule", 1.000000000000000E-01, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[centijoule]": UBASE.UBASE("SI", "centijoule", 1.000000000000000E-02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[cJ]": UBASE.UBASE("SI", "centijoule", 1.000000000000000E-02, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[millijoule]": UBASE.UBASE("SI", "millijoule", 1.000000000000000E-03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[mJ]": UBASE.UBASE("SI", "millijoule", 1.000000000000000E-03, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[microjoule]": UBASE.UBASE("SI", "microjoule", 1.000000000000000E-06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[uJ]": UBASE.UBASE("SI", "microjoule", 1.000000000000000E-06, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[nanojoule]": UBASE.UBASE("SI", "nanojoule", 1.000000000000000E-09, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[nJ]": UBASE.UBASE("SI", "nanojoule", 1.000000000000000E-09, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[picojoule]": UBASE.UBASE("SI", "picojoule", 1.000000000000000E-12, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[pJ]": UBASE.UBASE("SI", "picojoule", 1.000000000000000E-12, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[femtojoule]": UBASE.UBASE("SI", "femtojoule", 1.000000000000000E-15, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[fJ]": UBASE.UBASE("SI", "femtojoule", 1.000000000000000E-15, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[attojoule]": UBASE.UBASE("SI", "attojoule", 1.000000000000000E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[aJ]": UBASE.UBASE("SI", "attojoule", 1.000000000000000E-18, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[zeptojoule]": UBASE.UBASE("SI", "zeptojoule", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[zv]": UBASE.UBASE("SI", "zeptojoule", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[yoctojoule]": UBASE.UBASE("SI", "yoctojoule", 1.000000000000000E-24, "kg.m2/s2", "M.L2/T2", "1.0")})
        unit.update({"SI[yJ]": UBASE.UBASE("SI", "yoctojoule", 1.000000000000000E-24, "kg.m2/s2", "M.L2/T2", "1.0")})
        self._map.update({"energy": BaseSystem.BaseSystem("energy", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[britishthermalunit(IT)-per-hour-per-square-foot]": UBASE.UBASE("Imperial", "britishthermalunit(IT)-per-hour-per-square-foot", 3.154590745063050E+00, "kg/s3", "M/T3", "1.0")})
        unit.update({"Imperial[Btu(IT)/hr-ft]": UBASE.UBASE("Imperial", "britishthermalunit(IT)-per-hour-per-square-foot", 3.154590745063050E+00, "kg/s3", "M/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-hour-per-square-foot]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-hour-per-square-foot", 3.152481054109060E+00, "kg/s3", "M/T3", "1.0")})
        unit.update({"Imperial[Btu(therm)/hr-ft2]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-hour-per-square-foot", 3.152481054109060E+00, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[finsen-unit]": UBASE.UBASE("Scientific", "finsen-unit", 1.000000000000000E-05, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[FU]": UBASE.UBASE("Scientific", "finsen-unit", 1.000000000000000E-05, "kg/s3", "M/T3", "1.0")})
        unit.update({"US[gurley-unit]": UBASE.UBASE("US", "gurley-unit", 1.529734122878070E-06, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[heat-flux-unit]": UBASE.UBASE("Scientific", "heat-flux-unit", 4.185500000000000E-02, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[HFU]": UBASE.UBASE("Scientific", "heat-flux-unit", 4.185500000000000E-02, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[langley]": UBASE.UBASE("Scientific", "langley", 6.975833333333330E+02, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[met]": UBASE.UBASE("Scientific", "met", 5.815000000000000E+01, "kg/s3", "M/T3", "1.0")})
        unit.update({"Scientific[pyron]": UBASE.UBASE("Scientific", "pyron", 6.975833333333330E+02, "kg/s3", "M/T3", "1.0")})
        unit.update({"SI[watt-per-square-meter]": UBASE.UBASE("SI", "watt-per-square-meter", 1.000000000000000E+00, "kg/s3", "M/T3", "1.0")})
        unit.update({"SI[W/m2]": UBASE.UBASE("SI", "watt-per-square-meter", 1.000000000000000E+00, "kg/s3", "M/T3", "1.0")})
        self._map.update({"heatFlux": BaseSystem.BaseSystem("heatFlux", unit, "1.0")})

        unit.clear()


        unit.update({"SI[thermal-ampere]": UBASE.UBASE("SI", "thermal-ampere", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0")})
        unit.update({"SI[watt-per-per-kelvin]": UBASE.UBASE("SI", "watt-per-per-kelvin", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0")})
        unit.update({"SI[W/K]": UBASE.UBASE("SI", "watt-per-per-kelvin", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0")})
        self._map.update({"thermalConductance": BaseSystem.BaseSystem("thermalConductance", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(IT)/hr-ft2-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree", 5.674465897396300E+00, "kg/s3.K", "M/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(therm)/hr-ft2-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree", 5.674465897396300E+00, "kg/s3.K", "M/T3.Q", "1.0")})
        unit.update({"Imperial[USI]": UBASE.UBASE("Imperial", "USI", 1.000000000000000E+00, "kg/s3.K", "M/T3.Q", "1.0")})
        unit.update({"UK[U-factor]": UBASE.UBASE("UK", "U-factor", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0")})
        self._map.update({"heatTransfer": BaseSystem.BaseSystem("heatTransfer", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.442278888642830E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(IT)-in/hr-ft2-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.442278888642830E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.192203999114170E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(IT)-in/sec-ft2-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.192203999114170E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree", 1.730734666371390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(IT)/hr-ft-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree", 1.730734666371390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree", 2.076881599645670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(IT)/hr-in-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree", 2.076881599645670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.441314337938660E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(therm)-in/hr-ft2-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.441314337938660E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.188731616579180E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(therm)-in/sec-ft2-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.188731616579180E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree", 1.729577205526390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(term)/ft-hr-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree", 1.729577205526390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree", 2.075492646631670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Imperial[Btu(term)/in-hr-oF]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree", 2.075492646631670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(IT)-per-centimeter-per-second-per-degree-celsius]": UBASE.UBASE("Scientific", "calorie(IT)-per-centimeter-per-second-per-degree-celsius", 4.186800000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(IT)/cm-sec-oC]": UBASE.UBASE("Scientific", "calorie(IT)-per-centimeter-per-second-per-degree-celsius", 4.186800000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(therm)-per-centimeter-per-second-per-degree-celsius]": UBASE.UBASE("Scientific", "calorie(therm)-per-centimeter-per-second-per-degree-celsius", 4.184000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(therm)/cm-sec-oC]": UBASE.UBASE("Scientific", "calorie(therm)-per-centimeter-per-second-per-degree-celsius", 4.184000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"cgs[fourier]": UBASE.UBASE("cgs", "fourier", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[joule-per-second-per-centimeter-per-kelvin]": UBASE.UBASE("SI", "joule-per-second-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[J/s-cm-K]": UBASE.UBASE("SI", "joule-per-second-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[joule-per-second-per-meter-per-kelvin]": UBASE.UBASE("SI", "joule-per-second-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[J/s-m-K]": UBASE.UBASE("SI", "joule-per-second-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"cgs[watt-per-centimeter-per-celsius-degree]": UBASE.UBASE("cgs", "watt-per-centimeter-per-celsius-degree", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"cgs[W/cm-oC]": UBASE.UBASE("cgs", "watt-per-centimeter-per-celsius-degree", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[watt-per-centimeter-per-kelvin]": UBASE.UBASE("SI", "watt-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[W/cm-K]": UBASE.UBASE("SI", "watt-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[watt-per-meter-per-kelvin]": UBASE.UBASE("SI", "watt-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        unit.update({"SI[W/m-K]": UBASE.UBASE("SI", "watt-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0")})
        self._map.update({"thermalConductivity": BaseSystem.BaseSystem("thermalConductivity", unit, "1.0")})

        unit.clear()


        unit.update({"cgs[dyne-per-centimeter]": UBASE.UBASE("cgs", "dyne-per-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0")})
        unit.update({"cgs[dyn/cm]": UBASE.UBASE("cgs", "dyne-per-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0")})
        unit.update({"cgs[erg-per-square-centimeter]": UBASE.UBASE("cgs", "erg-per-square-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0")})
        unit.update({"cgs[erg/cm2]": UBASE.UBASE("cgs", "erg-per-square-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0")})
        unit.update({"Imperial[langley]": UBASE.UBASE("Imperial", "langley", 4.185500000000000E+04, "kg/s2", "M/T2", "1.0")})
        unit.update({"INT[langley]": UBASE.UBASE("INT", "langley", 4.185500000000000E+04, "kg/s2", "M/T2", "1.0")})
        unit.update({"Scientific[flux-unit]": UBASE.UBASE("Scientific", "flux-unit", 1.000000000000000E-26, "kg/s2", "M/T2", "1.0")})
        unit.update({"Scientific[fu]": UBASE.UBASE("Scientific", "flux-unit", 1.000000000000000E-26, "kg/s2", "M/T2", "1.0")})
        unit.update({"SI[joule-per-square-meter]": UBASE.UBASE("SI", "joule-per-square-meter", 1.000000000000000E+00, "kg/s2", "M/T2", "1.0")})
        unit.update({"SI[J/m2]": UBASE.UBASE("SI", "joule-per-square-meter", 1.000000000000000E+00, "kg/s2", "M/T2", "1.0")})
        self._map.update({"radiantEnergy": BaseSystem.BaseSystem("radiantEnergy", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[british-thermal-unit(IT)-per-fahrenheit-degree]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-fahrenheit-degree", 1.899100534716000E+03, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"Imperial[Btu(IT)/oF]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-fahrenheit-degree", 1.899100534716000E+03, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"Scientific[carnot]": UBASE.UBASE("Scientific", "carnot", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"Scientific[clausius(rank)]": UBASE.UBASE("Scientific", "clausius(rank)", 4.186800000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"Scientific[Cl]": UBASE.UBASE("Scientific", "clausius(rank)", 4.186800000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"SI[coulomb(thermal)]": UBASE.UBASE("SI", "coulomb(thermal)", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"SI[C/K]": UBASE.UBASE("SI", "coulomb(thermal)", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"SI[joule-per-kelvin]": UBASE.UBASE("SI", "joule-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        unit.update({"SI[J/K]": UBASE.UBASE("SI", "joule-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0")})
        self._map.update({"entropy": BaseSystem.BaseSystem("entropy", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[entropy-unit]": UBASE.UBASE("Scientific", "entropy-unit", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0")})
        unit.update({"Scientific[eu]": UBASE.UBASE("Scientific", "entropy-unit", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0")})
        unit.update({"Scientific[unit-of-entropy]": UBASE.UBASE("Scientific", "unit-of-entropy", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0")})
        unit.update({"Scientific[ue]": UBASE.UBASE("Scientific", "unit-of-entropy", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0")})
        unit.update({"SI[joule-per-mole-per-kelvin]": UBASE.UBASE("SI", "joule-per-mole-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0")})
        unit.update({"SI[J/mol-K]": UBASE.UBASE("SI", "joule-per-mole-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0")})
        self._map.update({"molarEntropy": BaseSystem.BaseSystem("molarEntropy", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[R-value]": UBASE.UBASE("Imperial", "R-value", 1.761101836823060E-01, "s3.K/kg", "T3.Q/M", "1.0")})
        unit.update({"UK[clo]": UBASE.UBASE("UK", "clo", 1.548202126388720E-01, "s3.K/kg", "T3.Q/M", "1.0")})
        unit.update({"UK[tog]": UBASE.UBASE("UK", "tog", 1.000000000000000E-01, "s3.K/kg", "T3.Q/M", "1.0")})
        self._map.update({"heatInsulation": BaseSystem.BaseSystem("heatInsulation", unit, "1.0")})

        unit.clear()


        unit.update({"cgs[brewster]": UBASE.UBASE("cgs", "brewster", 1.000000000000000E-12, "m.s2/kg", "L.T2/M", "1.0")})
        unit.update({"cgs[B]": UBASE.UBASE("cgs", "brewster", 1.000000000000000E-12, "m.s2/kg", "L.T2/M", "1.0")})
        unit.update({"US[energy-factor(clothes-washers)]": UBASE.UBASE("US", "energy-factor(clothes-washers)", 7.865790720000000E-09, "m.s2/kg", "L.T2/M", "1.0")})
        unit.update({"US[EF]": UBASE.UBASE("US", "energy-factor(clothes-washers)", 7.865790720000000E-09, "m.s2/kg", "L.T2/M", "1.0")})
        unit.update({"US[gallon-per-hour-horsepower]": UBASE.UBASE("US", "gallon-per-hour-horsepower", 1.410089116821480E-09, "m.s2/kg", "L.T2/M", "1.0")})
        unit.update({"US[gal/hr-HP]": UBASE.UBASE("US", "gallon-per-hour-horsepower", 1.410089116821480E-09, "m.s2/kg", "L.T2/M", "1.0")})
        self._map.update({"energyConsumption": BaseSystem.BaseSystem("energyConsumption", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[mayer]": UBASE.UBASE("Scientific", "mayer", 1.000000000000000E-03, "m2/s2.K", "L2/T2.Q", "1.0")})
        unit.update({"UK[british-thermal-unit(IT)-per-pound-fahrenheit-degree]": UBASE.UBASE("UK", "british-thermal-unit(IT)-per-pound-fahrenheit-degree", 4.186800000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0")})
        unit.update({"UK[Btu(IT)/lb-oF]": UBASE.UBASE("UK", "british-thermal-unit(IT)-per-pound-fahrenheit-degree", 4.186800000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0")})
        unit.update({"UK[british-thermal-unit(therm)-per-pound-fahrenheit-degree]": UBASE.UBASE("UK", "british-thermal-unit(therm)-per-pound-fahrenheit-degree", 4.184000000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0")})
        unit.update({"UK[Btu(threm)/lb-oF]": UBASE.UBASE("UK", "british-thermal-unit(therm)-per-pound-fahrenheit-degree", 4.184000000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0")})
        self._map.update({"specificHeatCapacity": BaseSystem.BaseSystem("specificHeatCapacity", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[calorie(therm)-per-gram]": UBASE.UBASE("Scientific", "calorie(therm)-per-gram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(therm)/g]": UBASE.UBASE("Scientific", "calorie(therm)-per-gram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(therm)-per-kilogram]": UBASE.UBASE("Scientific", "calorie(therm)-per-kilogram", 4.184000000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(therm)/kg]": UBASE.UBASE("Scientific", "calorie(therm)-per-kilogram", 4.184000000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(IT)-per-gram]": UBASE.UBASE("Scientific", "calorie(IT)-per-gram", 4.186800000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(IT)/g]": UBASE.UBASE("Scientific", "calorie(IT)-per-gram", 4.186800000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(IT)-per-kilogram]": UBASE.UBASE("Scientific", "calorie(IT)-per-kilogram", 4.186800000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(IT)/kg]": UBASE.UBASE("Scientific", "calorie(IT)-per-kilogram", 4.186800000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(mean)-per-gram]": UBASE.UBASE("Scientific", "calorie(mean)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(mean)/g]": UBASE.UBASE("Scientific", "calorie(mean)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(mean)-per-kilogram]": UBASE.UBASE("Scientific", "calorie(mean)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(mean)/kg]": UBASE.UBASE("Scientific", "calorie(mean)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie-per-kilogram]": UBASE.UBASE("Scientific", "calorie-per-kilogram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal/kg]": UBASE.UBASE("Scientific", "calorie-per-kilogram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(15oC)-per-kilogram]": UBASE.UBASE("Scientific", "calorie(15oC)-per-kilogram", 4.185500000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(15oC)/kg]": UBASE.UBASE("Scientific", "calorie(15oC)-per-kilogram", 4.185500000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(20oC)-per-kilogram]": UBASE.UBASE("Scientific", "calorie(20oC)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(20oC)/kg]": UBASE.UBASE("Scientific", "calorie(20oC)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(4oC)-per-kilogram]": UBASE.UBASE("Scientific", "calorie(4oC)-per-kilogram", 4.204500000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(4oC)/kg]": UBASE.UBASE("Scientific", "calorie(4oC)-per-kilogram", 4.204500000000000E+00, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie-per-gram]": UBASE.UBASE("Scientific", "calorie-per-gram", 4.184000000000000E+06, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal/g]": UBASE.UBASE("Scientific", "calorie-per-gram", 4.184000000000000E+06, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(15oC)-per-gram]": UBASE.UBASE("Scientific", "calorie(15oC)-per-gram", 4.185500000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(15oC)/g]": UBASE.UBASE("Scientific", "calorie(15oC)-per-gram", 4.185500000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(20oC)-per-gram]": UBASE.UBASE("Scientific", "calorie(20oC)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(20oC)/g]": UBASE.UBASE("Scientific", "calorie(20oC)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[calorie(4oC)-per-gram]": UBASE.UBASE("Scientific", "calorie(4oC)-per-gram", 4.204500000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        unit.update({"Scientific[cal(4oC)/g]": UBASE.UBASE("Scientific", "calorie(4oC)-per-gram", 4.204500000000000E+03, "m/s3.K", "L/T3.Q", "1.0")})
        self._map.update({"specificHeat": BaseSystem.BaseSystem("specificHeat", unit, "1.0")})

        unit.clear()


 #EOF
