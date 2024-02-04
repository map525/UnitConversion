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
# File Flow.py
#
# Units for Flow
#
# Class for Flow units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Flow(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Flow.__instance == None:
            Flow.__instance = Flow()
        return Flow.__instance

    def __new__(self):
       if Flow.__instance == None:
           Flow.__instance = super(Flow, self).__new__(self)

       return  Flow.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"US[barrel-oil-per-stream-day]": UBASE.UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0")})
        unit.update({"US[BOPSD]": UBASE.UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0")})
        unit.update({"US[bopsd]": UBASE.UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0")})
        unit.update({"CAN[barrel-oil-per-calendar-day]": UBASE.UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"CAN[BOPCD]": UBASE.UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"CAN[bopcd]": UBASE.UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cubic-foot-per-hour]": UBASE.UBASE("Imperial", "cubic-foot-per-hour", 7.865790720000000E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[ft3/hr]": UBASE.UBASE("Imperial", "cubic-foot-per-hour", 7.865790720000000E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cubic-foot-per-minute]": UBASE.UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cfm]": UBASE.UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[ft3/min]": UBASE.UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"FPS[cubic-foot-per-second]": UBASE.UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"FPS[cfs]": UBASE.UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"FPS[ft3/sec]": UBASE.UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cubic-foot-per-second]": UBASE.UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cfs]": UBASE.UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[ft3/sec]": UBASE.UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"SI[cubic-meter-per-hour]": UBASE.UBASE("SI", "cubic-meter-per-hour", 2.777777777777780E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"SI[m3/hr]": UBASE.UBASE("SI", "cubic-meter-per-hour", 2.777777777777780E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"SI[cubic-meter-per-minute]": UBASE.UBASE("SI", "cubic-meter-per-minute", 1.666666666666670E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"SI[m3/min]": UBASE.UBASE("SI", "cubic-meter-per-minute", 1.666666666666670E-02, "m3/s", "L3/T", "1.0")})
        unit.update({"SI[cubic-meter-per-second]": UBASE.UBASE("SI", "cubic-meter-per-second", 1.000000000000000E+00, "m3/s", "L3/T", "1.0")})
        unit.update({"SI[m3/sec]": UBASE.UBASE("SI", "cubic-meter-per-second", 1.000000000000000E+00, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cumec]": UBASE.UBASE("Imperial", "cumec", 1.000000000000000E+00, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[musec]": UBASE.UBASE("Imperial", "cumec", 1.000000000000000E+00, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gallon-per-day-per-capita]": UBASE.UBASE("US", "gallon-per-day-per-capita", 4.381263638888890E-08, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gpdpc]": UBASE.UBASE("US", "gallon-per-day-per-capita", 4.381263638888890E-08, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[gallon-per-hour]": UBASE.UBASE("UK", "gallon-per-hour", 1.262803333333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[gph]": UBASE.UBASE("UK", "gallon-per-hour", 1.262803333333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gallon-per-hour]": UBASE.UBASE("US", "gallon-per-hour", 1.051503273333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gph]": UBASE.UBASE("US", "gallon-per-hour", 1.051503273333330E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[gallon-per-minute]": UBASE.UBASE("UK", "gallon-per-minute", 7.576820000000000E-05, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[gpm]": UBASE.UBASE("UK", "gallon-per-minute", 7.576820000000000E-05, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gallon-per-minute]": UBASE.UBASE("US", "gallon-per-minute", 6.309019640000000E-05, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gpm]": UBASE.UBASE("US", "gallon-per-minute", 6.309019640000000E-05, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[gallon-per-second]": UBASE.UBASE("UK", "gallon-per-second", 4.546092000000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[gps]": UBASE.UBASE("UK", "gallon-per-second", 4.546092000000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gallon-per-second]": UBASE.UBASE("US", "gallon-per-second", 3.785411784000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"US[gps]": UBASE.UBASE("US", "gallon-per-second", 3.785411784000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[liter-per-hour]": UBASE.UBASE("Scientific", "liter-per-hour", 2.777777777777780E-07, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[l/hr]": UBASE.UBASE("Scientific", "liter-per-hour", 2.777777777777780E-07, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[liter-per-minute]": UBASE.UBASE("Scientific", "liter-per-minute", 1.666666666666670E-05, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[l/min]": UBASE.UBASE("Scientific", "liter-per-minute", 1.666666666666670E-05, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[liter-per-second]": UBASE.UBASE("Scientific", "liter-per-second", 1.000000000000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[l/sec]": UBASE.UBASE("Scientific", "liter-per-second", 1.000000000000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"UK[lusec]": UBASE.UBASE("UK", "lusec", 1.000000000000000E-03, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch]": UBASE.UBASE("Imperial", "miners-inch", 7.451801734736840E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(CO)]": UBASE.UBASE("Imperial", "miners-inch(CO)", 7.451801734740000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(NoCA)]": UBASE.UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(NV)]": UBASE.UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(AZ)]": UBASE.UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(OR)]": UBASE.UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(MT)]": UBASE.UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(SoCA)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(ID)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(KS)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(NK)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(SD)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(ND)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(NM)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[miners-inch(WA)]": UBASE.UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[musec(pump)]": UBASE.UBASE("Imperial", "musec(pump)", 1.000000000000000E+00, "m3/s", "L3/T", "1.0")})
        unit.update({"Imperial[cumec(pump)]": UBASE.UBASE("Imperial", "musec(pump)", 1.000000000000000E+00, "m3/s", "L3/T", "1.0")})
        unit.update({"French[pouce-fontainier(1st-definition)]": UBASE.UBASE("French", "pouce-fontainier(1st-definition)", 3.201591794112180E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"French[pf1]": UBASE.UBASE("French", "pouce-fontainier(1st-definition)", 3.201591794112180E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"French[pouce-fontainier(standardized)]": UBASE.UBASE("French", "pouce-fontainier(standardized)", 2.221674603101390E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"French[pfs]": UBASE.UBASE("French", "pouce-fontainier(standardized)", 2.221674603101390E-04, "m3/s", "L3/T", "1.0")})
        unit.update({"Scientific[sverdup]": UBASE.UBASE("Scientific", "sverdup", 1.000000000000000E-06, "m3/s", "L3/T", "1.0")})
        unit.update({"US[water-inch]": UBASE.UBASE("US", "water-inch", 1.104078437000000E-04, "m3/s", "L3/T", "1.0")})
        self._map.update({"flow": BaseSystem.BaseSystem("flow", unit, "1.0")})

        unit.clear()


 #EOF
