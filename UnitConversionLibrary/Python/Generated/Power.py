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
# File Power.py
#
# Units for Power
#
# Class for Power units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Power(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Power.__instance == None:
            Power.__instance = Power()
        return Power.__instance

    def __new__(self):
       if Power.__instance == None:
           Power.__instance = super(Power, self).__new__(self)

       return  Power.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"cgs[abwatt]": UBASE.UBASE("cgs", "abwatt", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"cgs[aW]": UBASE.UBASE("cgs", "abwatt", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"cgs[emu-of-power]": UBASE.UBASE("cgs", "emu-of-power", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"cgs[emuW]": UBASE.UBASE("cgs", "emu-of-power", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"cgs[erg-per-second]": UBASE.UBASE("cgs", "erg-per-second", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"cgs[erg/sec]": UBASE.UBASE("cgs", "erg-per-second", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[foot-pound-force-per-hour]": UBASE.UBASE("FPS", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[ft-lbf/hr]": UBASE.UBASE("FPS", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[foot-pound-force-per-minute]": UBASE.UBASE("FPS", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[ft-lbf/min]": UBASE.UBASE("FPS", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[foot-pound-force-per-second]": UBASE.UBASE("FPS", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[ft-lbf/sec]": UBASE.UBASE("FPS", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[foot-poundal-per-second]": UBASE.UBASE("FPS", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[ft-pdl/sec]": UBASE.UBASE("FPS", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"French[poncelet]": UBASE.UBASE("French", "poncelet", 9.806650000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[atmosphere-cubic-foot-per-hour]": UBASE.UBASE("Imperial", "atmosphere-cubic-foot-per-hour", 7.970012447040000E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[atm-ft3/hr]": UBASE.UBASE("Imperial", "atmosphere-cubic-foot-per-hour", 7.970012447040000E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[atmosphere-cubic-foot-per-minute]": UBASE.UBASE("Imperial", "atmosphere-cubic-foot-per-minute", 4.782007468224000E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[atm-ft3/min]": UBASE.UBASE("Imperial", "atmosphere-cubic-foot-per-minute", 4.782007468224000E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[british-thermal-unit(mean)-per-hour]": UBASE.UBASE("FPS", "british-thermal-unit(mean)-per-hour", 2.932972222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[Btu(mean)/hr]": UBASE.UBASE("FPS", "british-thermal-unit(mean)-per-hour", 2.932972222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[british-thermal-unit(mean)-per-minute]": UBASE.UBASE("FPS", "british-thermal-unit(mean)-per-minute", 1.759783333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[Btu(mean)/min]": UBASE.UBASE("FPS", "british-thermal-unit(mean)-per-minute", 1.759783333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[british-thermal-unit(mean)-per-second]": UBASE.UBASE("FPS", "british-thermal-unit(mean)-per-second", 1.055870000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"FPS[Btu(mean)/sec]": UBASE.UBASE("FPS", "british-thermal-unit(mean)-per-second", 1.055870000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(ISO)-per-hour]": UBASE.UBASE("UK", "british-thermal-unit(ISO)-per-hour", 2.930722222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(ISO)/hr]": UBASE.UBASE("UK", "british-thermal-unit(ISO)-per-hour", 2.930722222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(ISO)-per-minute]": UBASE.UBASE("UK", "british-thermal-unit(ISO)-per-minute", 1.758433333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(ISO)/min]": UBASE.UBASE("UK", "british-thermal-unit(ISO)-per-minute", 1.758433333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(ISO)-per-second]": UBASE.UBASE("UK", "british-thermal-unit(ISO)-per-second", 1.055060000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(ISO)/sec]": UBASE.UBASE("UK", "british-thermal-unit(ISO)-per-second", 1.055060000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(39oF)-per-hour]": UBASE.UBASE("UK", "british-thermal-unit(39oF)-per-hour", 2.943527777777780E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(39oF)/hr]": UBASE.UBASE("UK", "british-thermal-unit(39oF)-per-hour", 2.943527777777780E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(39oF)-per-minute]": UBASE.UBASE("UK", "british-thermal-unit(39oF)-per-minute", 1.766116666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(39oF)/min]": UBASE.UBASE("UK", "british-thermal-unit(39oF)-per-minute", 1.766116666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(39oF)-per-second]": UBASE.UBASE("UK", "british-thermal-unit(39oF)-per-second", 1.059670000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(39oF)/sec]": UBASE.UBASE("UK", "british-thermal-unit(39oF)-per-second", 1.059670000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(60oF)-per-hour]": UBASE.UBASE("UK", "british-thermal-unit(60oF)-per-hour", 2.929661111111110E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(60oF)/hr]": UBASE.UBASE("UK", "british-thermal-unit(60oF)-per-hour", 2.929661111111110E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(60oF)-per-minute]": UBASE.UBASE("UK", "british-thermal-unit(60oF)-per-minute", 1.757796666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(60oF)/min]": UBASE.UBASE("UK", "british-thermal-unit(60oF)-per-minute", 1.757796666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[british-thermal-unit(60oF)-per-second]": UBASE.UBASE("UK", "british-thermal-unit(60oF)-per-second", 1.054678000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[Btu(60oF)/sec]": UBASE.UBASE("UK", "british-thermal-unit(60oF)-per-second", 1.054678000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-per-hour]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-hour", 2.930710701722220E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[Btu(IT)/hr]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-hour", 2.930710701722220E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-per-minute]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-minute", 1.758426421033330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[Btu(IT)/min]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-minute", 1.758426421033330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(IT)-per-second]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-second", 1.055055852620000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[Btu(IT)/sec]": UBASE.UBASE("Imperial", "british-thermal-unit(IT)-per-second", 1.055055852620000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-hour]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-hour", 2.928750734691360E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[Btu(threm)/hr]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-hour", 2.928750734691360E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-minute]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-minute", 1.757250440814810E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[Btu(therm)/min]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-minute", 1.757250440814810E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[british-thermal-unit(therm)-per-second]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-second", 1.054350264488890E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[Btu(therm)/sec]": UBASE.UBASE("Imperial", "british-thermal-unit(therm)-per-second", 1.054350264488890E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[foot-pound-force-per-hour]": UBASE.UBASE("Imperial", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[ft-lbf/hr]": UBASE.UBASE("Imperial", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[foot-pound-force-per-minute]": UBASE.UBASE("Imperial", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[ft-lbf/min]": UBASE.UBASE("Imperial", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[foot-pound-force-per-second]": UBASE.UBASE("Imperial", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[ft-lbf/sec]": UBASE.UBASE("Imperial", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[horsepower]": UBASE.UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[BHP]": UBASE.UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Imperial[hp]": UBASE.UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atmosphere-cubic-meter-per-hour]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-hour", 2.814583333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-m3/hr]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-hour", 2.814583333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atmosphere-cubic-meter-per-min]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-m3/min]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[acmm]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atmosphere-cubic-meter-per-second]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-m3/sec]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[acms]": UBASE.UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atmosphere-liter-per-hour]": UBASE.UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-dm3/hr]": UBASE.UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-lph]": UBASE.UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atmosphere-liter-per-minute]": UBASE.UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-dm3/min]": UBASE.UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-lpm]": UBASE.UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atmosphere-liter-per-second]": UBASE.UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-dm3/sec]": UBASE.UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[atm-lps]": UBASE.UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[cheval-vapeur]": UBASE.UBASE("INT", "cheval-vapeur", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[cv]": UBASE.UBASE("INT", "cheval-vapeur", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cheval-vapeur(old)]": UBASE.UBASE("Scientific", "cheval-vapeur(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cv(old)]": UBASE.UBASE("Scientific", "cheval-vapeur(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[volt-ampere-reactive]": UBASE.UBASE("INT", "volt-ampere-reactive", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"INT[var]": UBASE.UBASE("INT", "volt-ampere-reactive", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"MKpS[kilogram-force-meter-per-second]": UBASE.UBASE("MKpS", "kilogram-force-meter-per-second", 9.806650000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"MKpS[kgfm/sec]": UBASE.UBASE("MKpS", "kilogram-force-meter-per-second", 9.806650000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(IT)-per-hour]": UBASE.UBASE("Scientific", "calorie(IT)-per-hour", 1.163000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(IT)/hr]": UBASE.UBASE("Scientific", "calorie(IT)-per-hour", 1.163000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(IT)-per-minute]": UBASE.UBASE("Scientific", "calorie(IT)-per-minute", 6.978000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(IT)/min]": UBASE.UBASE("Scientific", "calorie(IT)-per-minute", 6.978000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(IT)-per-second]": UBASE.UBASE("Scientific", "calorie(IT)-per-second", 4.186800000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(IT)/sec]": UBASE.UBASE("Scientific", "calorie(IT)-per-second", 4.186800000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(therm)-per-hour]": UBASE.UBASE("Scientific", "calorie(therm)-per-hour", 1.162222222222220E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(therm)/hr]": UBASE.UBASE("Scientific", "calorie(therm)-per-hour", 1.162222222222220E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(therm)-per-minute]": UBASE.UBASE("Scientific", "calorie(therm)-per-minute", 6.973333333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(threm)/min]": UBASE.UBASE("Scientific", "calorie(therm)-per-minute", 6.973333333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(therm)-per-secomd]": UBASE.UBASE("Scientific", "calorie(therm)-per-secomd", 4.184000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(therm)/sec]": UBASE.UBASE("Scientific", "calorie(therm)-per-secomd", 4.184000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(15oC)-per-hour]": UBASE.UBASE("Scientific", "calorie(15oC)-per-hour", 1.162638888888890E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(15oC)/hr]": UBASE.UBASE("Scientific", "calorie(15oC)-per-hour", 1.162638888888890E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(15oC)-per-minute]": UBASE.UBASE("Scientific", "calorie(15oC)-per-minute", 6.975833333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(15oC)/min]": UBASE.UBASE("Scientific", "calorie(15oC)-per-minute", 6.975833333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(15oC)-per-second]": UBASE.UBASE("Scientific", "calorie(15oC)-per-second", 4.185500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(15oC)/sec]": UBASE.UBASE("Scientific", "calorie(15oC)-per-second", 4.185500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(4oC)-per-hour]": UBASE.UBASE("Scientific", "calorie(4oC)-per-hour", 1.167916666666670E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(4oC)/hr]": UBASE.UBASE("Scientific", "calorie(4oC)-per-hour", 1.167916666666670E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(4oC)-per-minute]": UBASE.UBASE("Scientific", "calorie(4oC)-per-minute", 7.007500000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(4oC)/min]": UBASE.UBASE("Scientific", "calorie(4oC)-per-minute", 7.007500000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(4oC)-per-second]": UBASE.UBASE("Scientific", "calorie(4oC)-per-second", 4.204500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(4oC)/sec]": UBASE.UBASE("Scientific", "calorie(4oC)-per-second", 4.204500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(mean)-per-hour]": UBASE.UBASE("Scientific", "calorie(mean)-per-hour", 1.163894444444440E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(mean)/hr]": UBASE.UBASE("Scientific", "calorie(mean)-per-hour", 1.163894444444440E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(mean)-per-minute]": UBASE.UBASE("Scientific", "calorie(mean)-per-minute", 6.983366666666670E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(mean)/min]": UBASE.UBASE("Scientific", "calorie(mean)-per-minute", 6.983366666666670E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[calorie(mean)-per-second]": UBASE.UBASE("Scientific", "calorie(mean)-per-second", 4.190020000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[cal(mean)/sec]": UBASE.UBASE("Scientific", "calorie(mean)-per-second", 4.190020000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[clusec]": UBASE.UBASE("Scientific", "clusec", 1.333223684210530E-06, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[horsepower]": UBASE.UBASE("Scientific", "horsepower", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[HP]": UBASE.UBASE("Scientific", "horsepower", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[horsepower(old)]": UBASE.UBASE("Scientific", "horsepower(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[HP(old)]": UBASE.UBASE("Scientific", "horsepower(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[prony]": UBASE.UBASE("Scientific", "prony", 9.806650000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[volt-ampere]": UBASE.UBASE("Scientific", "volt-ampere", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"Scientific[VA]": UBASE.UBASE("Scientific", "volt-ampere", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[watt]": UBASE.UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[W]": UBASE.UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[donkey]": UBASE.UBASE("UK", "donkey", 2.485666238607570E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[foot-poundal-per-second]": UBASE.UBASE("UK", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[ft-pdl/sec]": UBASE.UBASE("UK", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[ton]": UBASE.UBASE("UK", "ton", 3.938875183114670E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"UK[CTR]": UBASE.UBASE("UK", "ton", 3.938875183114670E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[air-watt]": UBASE.UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[AW]": UBASE.UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[aw]": UBASE.UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[horsepower]": UBASE.UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[HP]": UBASE.UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[hp]": UBASE.UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[horsepower(boiler)]": UBASE.UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[HP(bolier)]": UBASE.UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[hp(boiler)]": UBASE.UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[horsepower(electric)]": UBASE.UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[HP(electric)]": UBASE.UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[hp(electric)]": UBASE.UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[horsepower(metric)]": UBASE.UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[HP(metric)]": UBASE.UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[hp(metric)]": UBASE.UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[horsepower(water)]": UBASE.UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[HP(water)]": UBASE.UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[hp(water)]": UBASE.UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[manpower]": UBASE.UBASE("US", "manpower", 7.456998715822700E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[ton]": UBASE.UBASE("US", "ton", 3.516852842066670E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[CTR]": UBASE.UBASE("US", "ton", 3.516852842066670E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[watt]": UBASE.UBASE("US", "watt", 1.000165000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[W]": UBASE.UBASE("US", "watt", 1.000165000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[watt(mean)]": UBASE.UBASE("US", "watt(mean)", 1.000190000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"US[W(mean)]": UBASE.UBASE("US", "watt(mean)", 1.000190000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[yottawatt]": UBASE.UBASE("SI", "yottawatt", 1.000000000000000E+24, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[YW]": UBASE.UBASE("SI", "yottawatt", 1.000000000000000E+24, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[zettawatt]": UBASE.UBASE("SI", "zettawatt", 1.000000000000000E+21, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[ZW]": UBASE.UBASE("SI", "zettawatt", 1.000000000000000E+21, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[exacwatt]": UBASE.UBASE("SI", "exacwatt", 1.000000000000000E+18, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[EW]": UBASE.UBASE("SI", "exacwatt", 1.000000000000000E+18, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[petawatt]": UBASE.UBASE("SI", "petawatt", 1.000000000000000E+15, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[PW]": UBASE.UBASE("SI", "petawatt", 1.000000000000000E+15, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[terawatt]": UBASE.UBASE("SI", "terawatt", 1.000000000000000E+12, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[TW]": UBASE.UBASE("SI", "terawatt", 1.000000000000000E+12, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[gigawatt]": UBASE.UBASE("SI", "gigawatt", 1.000000000000000E+09, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[GW]": UBASE.UBASE("SI", "gigawatt", 1.000000000000000E+09, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[megawatt]": UBASE.UBASE("SI", "megawatt", 1.000000000000000E+06, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[MW]": UBASE.UBASE("SI", "megawatt", 1.000000000000000E+06, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[kilowatt]": UBASE.UBASE("SI", "kilowatt", 1.000000000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[kW]": UBASE.UBASE("SI", "kilowatt", 1.000000000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[hectowatt]": UBASE.UBASE("SI", "hectowatt", 1.000000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[hW]": UBASE.UBASE("SI", "hectowatt", 1.000000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[decawatt]": UBASE.UBASE("SI", "decawatt", 1.000000000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[daW]": UBASE.UBASE("SI", "decawatt", 1.000000000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[deciwatt]": UBASE.UBASE("SI", "deciwatt", 1.000000000000000E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[dW]": UBASE.UBASE("SI", "deciwatt", 1.000000000000000E-01, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[centiwatt]": UBASE.UBASE("SI", "centiwatt", 1.000000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[cW]": UBASE.UBASE("SI", "centiwatt", 1.000000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[milliwatt]": UBASE.UBASE("SI", "milliwatt", 1.000000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[mW]": UBASE.UBASE("SI", "milliwatt", 1.000000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[microwatt]": UBASE.UBASE("SI", "microwatt", 1.000000000000000E-06, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[uW]": UBASE.UBASE("SI", "microwatt", 1.000000000000000E-06, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[nanowatt]": UBASE.UBASE("SI", "nanowatt", 1.000000000000000E-09, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[nW]": UBASE.UBASE("SI", "nanowatt", 1.000000000000000E-09, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[picowatt]": UBASE.UBASE("SI", "picowatt", 1.000000000000000E-12, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[pW]": UBASE.UBASE("SI", "picowatt", 1.000000000000000E-12, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[femtowatt]": UBASE.UBASE("SI", "femtowatt", 1.000000000000000E-15, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[fW]": UBASE.UBASE("SI", "femtowatt", 1.000000000000000E-15, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[attowatt]": UBASE.UBASE("SI", "attowatt", 1.000000000000000E-18, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[aW]": UBASE.UBASE("SI", "attowatt", 1.000000000000000E-18, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[zeptowatt]": UBASE.UBASE("SI", "zeptowatt", 1.000000000000000E-21, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[zW]": UBASE.UBASE("SI", "zeptowatt", 1.000000000000000E-21, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[yoctowatt]": UBASE.UBASE("SI", "yoctowatt", 1.000000000000000E-24, "kg.m2/s3", "M.L2/T3", "1.0")})
        unit.update({"SI[yW]": UBASE.UBASE("SI", "yoctowatt", 1.000000000000000E-24, "kg.m2/s3", "M.L2/T3", "1.0")})
        self._map.update({"power": BaseSystem.BaseSystem("power", unit, "1.0")})

        unit.clear()


 #EOF
