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
# File SYSTEM_UNITS.py
#
# System base units. All other units derived from these units.
#
# Class for system units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SystemUnits
from UnitConversion import BaseSystem

class SYSTEM_UNITS(SystemUnits.SystemUnits):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if SYSTEM_UNITS.__instance == None:
            SYSTEM_UNITS.__instance = SYSTEM_UNITS()
        return SYSTEM_UNITS.__instance

    def __new__(self):
       if SYSTEM_UNITS.__instance == None:
           SYSTEM_UNITS.__instance = super(SYSTEM_UNITS, self).__new__(self)

       return  SYSTEM_UNITS.__instance
    def __init__(self):
        super().__init__("SystemUnits")
        length = dict()
        area = dict()
        mass = dict()
        liquid = dict()
        dry = dict()

        length.update({"au": UBASE.UBASE("@", "au", 1.495978707000000E+11, "m","L", "1.0")})
        area.update({"square-parsec": UBASE.UBASE("@", "square-parsec", 9.521406136918410E+32, "m2","L2", "1.0")})
        mass.update({"solar-mass": UBASE.UBASE("@", "solar-mass", 1.988470000000000E+30, "kg","M", "1.0")})
        liquid.update({"cubic-parsec": UBASE.UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0")})
        dry.update({"cubic-parsec": UBASE.UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0")})
        self._map.update({"@": BaseSystem.BaseSystem("@", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"bohr-radius": UBASE.UBASE("a.u.", "bohr-radius", 5.291772109060850E-11, "m","L", "1.0")})
        area.update({"atomic-cross-section": UBASE.UBASE("a.u.", "atomic-cross-section", 8.797355429314450E-21, "m2","L2", "1.0")})
        mass.update({"electron-mass": UBASE.UBASE("a.u.", "electron-mass", 9.109383701500000E-31, "kg","M", "1.0")})
        liquid.update({"atomic-volume": UBASE.UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0")})
        dry.update({"atomic-volume": UBASE.UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0")})
        self._map.update({"a.u.": BaseSystem.BaseSystem("a.u.", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        mass.update({"pound(apothecary)": UBASE.UBASE("UK_US_Apoth", "pound(apothecary)", 3.732417216000000E-01, "kg","M", "1.0")})
        self._map.update({"UK_US_Apoth": BaseSystem.BaseSystem("UK_US_Apoth", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("UK", "foot", 3.048000000000000E-01, "m","L", "1.0")})
        length.update({"foot(UK-old)": UBASE.UBASE("UK", "foot(UK-old)", 3.047997347632710E-01, "m","L", "1.0")})
        area.update({"square-foot": UBASE.UBASE("UK", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0")})
        mass.update({"pound": UBASE.UBASE("UK", "pound", 4.535923700000000E-01, "kg","M", "1.0")})
        mass.update({"pound(UK-Imperial)": UBASE.UBASE("UK", "pound(UK-Imperial)", 4.535923380000000E-01, "kg","M", "1.0")})
        liquid.update({"gallon(UK)": UBASE.UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0")})
        liquid.update({"gallon(UK-beer)": UBASE.UBASE("UK", "gallon(UK-beer)", 4.621152048000000E-03, "m3","L3", "1.0")})
        dry.update({"gallon(UK)": UBASE.UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0")})
        self._map.update({"UK": BaseSystem.BaseSystem("UK", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("US", "foot", 3.048000000000000E-01, "m","L", "1.0")})
        length.update({"vara(US-Texas)": UBASE.UBASE("US", "vara(US-Texas)", 8.466666666666670E-01, "m","L", "1.0")})
        length.update({"foot(US-survey)": UBASE.UBASE("US", "foot(US-survey)", 3.048006096012190E-01, "m","L", "1.0")})
        area.update({"square-foot": UBASE.UBASE("US", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0")})
        area.update({"vara(US-Texas)": UBASE.UBASE("US", "vara(US-Texas)", 7.168601466640000E+02, "m2","L2", "1.0")})
        mass.update({"pound": UBASE.UBASE("US", "pound", 4.535923700000000E-01, "kg","M", "1.0")})
        liquid.update({"gallon(US)": UBASE.UBASE("US", "gallon(US)", 3.785411784000000E-03, "m3","L3", "1.0")})
        dry.update({"gallon(US)": UBASE.UBASE("US", "gallon(US)", 4.404883770860000E-03, "m3","L3", "1.0")})
        self._map.update({"US": BaseSystem.BaseSystem("US", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("CAN", "foot", 3.048000000000000E-01, "m","L", "1.0")})
        area.update({"square-foot": UBASE.UBASE("CAN", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0")})
        mass.update({"pound": UBASE.UBASE("CAN", "pound", 4.535923380000000E-01, "kg","M", "1.0")})
        liquid.update({"gallon": UBASE.UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0")})
        dry.update({"gallon": UBASE.UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0")})
        self._map.update({"CAN": BaseSystem.BaseSystem("CAN", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"centimeter": UBASE.UBASE("cgs", "centimeter", 1.000000000000000E-02, "m","L", "1.0")})
        area.update({"square-centimeter": UBASE.UBASE("cgs", "square-centimeter", 1.000000000000000E-04, "m2","L2", "1.0")})
        mass.update({"gram": UBASE.UBASE("cgs", "gram", 1.000000000000000E-03, "kg","M", "1.0")})
        liquid.update({"liter": UBASE.UBASE("cgs", "liter", 1.000000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-centimeter": UBASE.UBASE("cgs", "cubic-centimeter", 1.000000000000000E-06, "m3","L3", "1.0")})
        self._map.update({"cgs": BaseSystem.BaseSystem("cgs", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("FPS", "foot", 3.048000000000000E-01, "m","L", "1.0")})
        area.update({"square-foot": UBASE.UBASE("FPS", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0")})
        mass.update({"pound": UBASE.UBASE("FPS", "pound", 4.535923700000000E-01, "kg","M", "1.0")})
        liquid.update({"gallon": UBASE.UBASE("FPS", "gallon", 3.785411784000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-foot": UBASE.UBASE("FPS", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0")})
        self._map.update({"FPS": BaseSystem.BaseSystem("FPS", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"meter": UBASE.UBASE("MKpS", "meter", 1.000000000000000E+00, "m","L", "1.0")})
        area.update({"square-meter": UBASE.UBASE("MKpS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0")})
        mass.update({"hyl": UBASE.UBASE("MKpS", "hyl", 9.806650000000000E+00, "kg","M", "1.0")})
        liquid.update({"cubic-meter": UBASE.UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0")})
        dry.update({"cubic-meter": UBASE.UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"MKpS": BaseSystem.BaseSystem("MKpS", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"meter": UBASE.UBASE("MTS", "meter", 1.000000000000000E+00, "m","L", "1.0")})
        area.update({"square-meter": UBASE.UBASE("MTS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0")})
        mass.update({"tonne": UBASE.UBASE("MTS", "tonne", 1.000000000000000E+03, "kg","M", "1.0")})
        liquid.update({"stere": UBASE.UBASE("MTS", "stere", 1.000000000000000E+00, "m3","L3", "1.0")})
        dry.update({"cubic-meter": UBASE.UBASE("MTS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"MTS": BaseSystem.BaseSystem("MTS", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"meter": UBASE.UBASE("SI", "meter", 1.000000000000000E+00, "m","L", "1.0")})
        area.update({"square-meter": UBASE.UBASE("SI", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0")})
        mass.update({"kilogram": UBASE.UBASE("SI", "kilogram", 1.000000000000000E+00, "kg","M", "1.0")})
        liquid.update({"cubic-meter": UBASE.UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0")})
        dry.update({"cubic-meter": UBASE.UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"SI": BaseSystem.BaseSystem("SI", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        mass.update({"ounce": UBASE.UBASE("Troy", "ounce", 3.110347680000000E-02, "kg","M", "1.0")})
        self._map.update({"Troy": BaseSystem.BaseSystem("Troy", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("Imperial", "foot", 3.048000000000000E-01, "m","L", "1.0")})
        area.update({"square-foot": UBASE.UBASE("Imperial", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0")})
        mass.update({"pound": UBASE.UBASE("Imperial", "pound", 4.535923380000000E-01, "kg","M", "1.0")})
        liquid.update({"gallon": UBASE.UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0")})
        dry.update({"gallon": UBASE.UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Imperial": BaseSystem.BaseSystem("Imperial", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Abyssinian", "pic", 6.860000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Abyssinian", "square-pic", 4.705960000000000E-01, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Abyssinian", "rottolo", 3.110000000000000E-01, "kg","M", "1.0")})
        liquid.update({"madega": UBASE.UBASE("Abyssinian", "madega", 4.400000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Abyssinian", "cubic-pic", 3.228288560000000E-01, "m3","L3", "1.0")})
        self._map.update({"Abyssinian": BaseSystem.BaseSystem("Abyssinian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic(dzera-a-torky)": UBASE.UBASE("Algerian", "pic(dzera-a-torky)", 6.230000000000000E-01, "m","L", "1.0")})
        length.update({"pic(dzera-a-raby)": UBASE.UBASE("Algerian", "pic(dzera-a-raby)", 4.670000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic(dzera-a-torky)": UBASE.UBASE("Algerian", "square-pic(dzera-a-torky)", 3.881290000000000E-01, "m2","L2", "1.0")})
        area.update({"square-pic(dzera-a-raby)": UBASE.UBASE("Algerian", "square-pic(dzera-a-raby)", 2.180890000000000E-01, "m2","L2", "1.0")})
        mass.update({"ukkia": UBASE.UBASE("Algerian", "ukkia", 3.413000000000000E-02, "kg","M", "1.0")})
        liquid.update({"khoul": UBASE.UBASE("Algerian", "khoul", 1.666666666666670E-02, "m3","L3", "1.0")})
        liquid.update({"metalli": UBASE.UBASE("Algerian", "metalli", 1.790000000000000E-02, "m3","L3", "1.0")})
        dry.update({"caffiso": UBASE.UBASE("Algerian", "caffiso", 3.174700000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Algerian": BaseSystem.BaseSystem("Algerian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"thuoc-moc": UBASE.UBASE("Annamese", "thuoc-moc", 4.250000000000000E-01, "m","L", "1.0")})
        length.update({"thuoc-de-ruong": UBASE.UBASE("Annamese", "thuoc-de-ruong", 4.700000000000000E-01, "m","L", "1.0")})
        length.update({"thuoc-vai": UBASE.UBASE("Annamese", "thuoc-vai", 6.440000000000000E-01, "m","L", "1.0")})
        length.update({"ngu": UBASE.UBASE("Annamese", "ngu", 2.000000000000000E+00, "m","L", "1.0")})
        area.update({"square-ngu": UBASE.UBASE("Annamese", "square-ngu", 5.522500000000000E+00, "m2","L2", "1.0")})
        area.update({"thon": UBASE.UBASE("Annamese", "thon", 2.400000000000000E+00, "m2","L2", "1.0")})
        mass.update({"dong": UBASE.UBASE("Annamese", "dong", 3.775000000000000E-03, "kg","M", "1.0")})
        liquid.update({"hao": UBASE.UBASE("Annamese", "hao", 2.826000000000000E-02, "m3","L3", "1.0")})
        liquid.update({"dau": UBASE.UBASE("Annamese", "dau", 1.000000000000000E-03, "m3","L3", "1.0")})
        liquid.update({"thang(cochinchina)": UBASE.UBASE("Annamese", "thang(cochinchina)", 2.766000000000000E-03, "m3","L3", "1.0")})
        dry.update({"than": UBASE.UBASE("Annamese", "than", 1.600000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"Annamese": BaseSystem.BaseSystem("Annamese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("Arabic", "foot", 3.200000000000000E-01, "m","L", "1.0")})
        area.update({"feddan": UBASE.UBASE("Arabic", "feddan", 5.898240000000000E+03, "m2","L2", "1.0")})
        mass.update({"rotl": UBASE.UBASE("Arabic", "rotl", 3.400000000000000E-01, "kg","M", "1.0")})
        liquid.update({"sa": UBASE.UBASE("Arabic", "sa", 4.212500000000000E-03, "m3","L3", "1.0")})
        dry.update({"cafiz": UBASE.UBASE("Arabic", "cafiz", 3.264000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Arabic": BaseSystem.BaseSystem("Arabic", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Argentinian", "vara", 8.666000000000000E-01, "m","L", "1.0")})
        area.update({"square-vara": UBASE.UBASE("Argentinian", "square-vara", 7.509955600000000E-01, "m2","L2", "1.0")})
        mass.update({"libra": UBASE.UBASE("Argentinian", "libra", 4.594000000000000E-01, "kg","M", "1.0")})
        liquid.update({"frasco": UBASE.UBASE("Argentinian", "frasco", 2.375000000000000E-03, "m3","L3", "1.0")})
        dry.update({"fanega": UBASE.UBASE("Argentinian", "fanega", 1.371977000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Argentinian": BaseSystem.BaseSystem("Argentinian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pous": UBASE.UBASE("Attic", "pous", 3.085600000000000E-01, "m","L", "1.0")})
        area.update({"square-pous": UBASE.UBASE("Attic", "square-pous", 9.520927360000000E-02, "m2","L2", "1.0")})
        mass.update({"talent": UBASE.UBASE("Attic", "talent", 2.592000000000000E+01, "kg","M", "1.0")})
        liquid.update({"cotyle": UBASE.UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cotyle": UBASE.UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"chenix": UBASE.UBASE("Attic", "chenix", 1.080000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Attic": BaseSystem.BaseSystem("Attic", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fuss": UBASE.UBASE("Austrian", "fuss", 3.160800000000000E-01, "m","L", "1.0")})
        length.update({"ell": UBASE.UBASE("Austrian", "ell", 7.792000000000000E-01, "m","L", "1.0")})
        area.update({"joch": UBASE.UBASE("Austrian", "joch", 5.754618224640000E+03, "m2","L2", "1.0")})
        mass.update({"pfund": UBASE.UBASE("Austrian", "pfund", 5.600100000000000E-01, "kg","M", "1.0")})
        mass.update({"pfund(apothecary)": UBASE.UBASE("Austrian", "pfund(apothecary)", 4.200075000000000E-01, "kg","M", "1.0")})
        liquid.update({"mass": UBASE.UBASE("Austrian", "mass", 1.415100000000000E-03, "m3","L3", "1.0")})
        dry.update({"metzel": UBASE.UBASE("Austrian", "metzel", 6.148900000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Austrian": BaseSystem.BaseSystem("Austrian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"canna": UBASE.UBASE("Belearic", "canna", 1.564000000000000E+00, "m","L", "1.0")})
        area.update({"square-canna": UBASE.UBASE("Belearic", "square-canna", 2.446096000000000E+00, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Belearic", "rottolo", 4.080000000000000E-01, "kg","M", "1.0")})
        liquid.update({"quartera": UBASE.UBASE("Belearic", "quartera", 7.197000000000000E-02, "m3","L3", "1.0")})
        dry.update({"quartin": UBASE.UBASE("Belearic", "quartin", 2.714000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Belearic": BaseSystem.BaseSystem("Belearic", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"perche": UBASE.UBASE("Belgian", "perche", 6.497000000000000E+00, "m","L", "1.0")})
        area.update({"arpent": UBASE.UBASE("Belgian", "arpent", 4.221100900000000E+01, "m2","L2", "1.0")})
        mass.update({"livre": UBASE.UBASE("Belgian", "livre", 4.895000000000000E-01, "kg","M", "1.0")})
        liquid.update({"pot": UBASE.UBASE("Belgian", "pot", 5.000000000000000E-04, "m3","L3", "1.0")})
        dry.update({"pot": UBASE.UBASE("Belgian", "pot", 1.500000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Belgian": BaseSystem.BaseSystem("Belgian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pe": UBASE.UBASE("Brazilian", "pe", 3.333333333333330E-01, "m","L", "1.0")})
        area.update({"salamis(nominal)": UBASE.UBASE("Brazilian", "salamis(nominal)", 4.537500000000000E+03, "m2","L2", "1.0")})
        area.update({"salamis(min)": UBASE.UBASE("Brazilian", "salamis(min)", 3.025000000000000E+03, "m2","L2", "1.0")})
        area.update({"salamis(max)": UBASE.UBASE("Brazilian", "salamis(max)", 6.050000000000000E+03, "m2","L2", "1.0")})
        area.update({"tarefa(nominal)": UBASE.UBASE("Brazilian", "tarefa(nominal)", 3.500000000000000E+03, "m2","L2", "1.0")})
        area.update({"tarefa(min)": UBASE.UBASE("Brazilian", "tarefa(min)", 3.000000000000000E+03, "m2","L2", "1.0")})
        area.update({"tarefa(max)": UBASE.UBASE("Brazilian", "tarefa(max)", 4.000000000000000E+03, "m2","L2", "1.0")})
        mass.update({"libra": UBASE.UBASE("Brazilian", "libra", 4.590500000000000E-01, "kg","M", "1.0")})
        liquid.update({"alquiera": UBASE.UBASE("Brazilian", "alquiera", 5.324000000000000E-03, "m3","L3", "1.0")})
        liquid.update({"alquiera(Bahia)": UBASE.UBASE("Brazilian", "alquiera(Bahia)", 3.524000000000000E-03, "m3","L3", "1.0")})
        liquid.update({"alquiera(common)": UBASE.UBASE("Brazilian", "alquiera(common)", 3.626000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-pe": UBASE.UBASE("Brazilian", "cubic-pe", 3.703703703703700E-02, "m3","L3", "1.0")})
        dry.update({"alquiera(salt)": UBASE.UBASE("Brazilian", "alquiera(salt)", 4.076000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Brazilian": BaseSystem.BaseSystem("Brazilian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"sandong": UBASE.UBASE("Burmese", "sandong", 5.588000000000000E-01, "m","L", "1.0")})
        area.update({"square-sandong": UBASE.UBASE("Burmese", "square-sandong", 3.122574400000000E-01, "m2","L2", "1.0")})
        mass.update({"catty": UBASE.UBASE("Burmese", "catty", 5.440000000000000E-01, "kg","M", "1.0")})
        liquid.update({"byee": UBASE.UBASE("Burmese", "byee", 5.050000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-sandong": UBASE.UBASE("Burmese", "cubic-sandong", 1.744894574720000E-01, "m3","L3", "1.0")})
        self._map.update({"Burmese": BaseSystem.BaseSystem("Burmese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"muoi": UBASE.UBASE("Cambodian", "muoi", 1.000000000000000E+00, "m","L", "1.0")})
        area.update({"square-muoi": UBASE.UBASE("Cambodian", "square-muoi", 1.000000000000000E+00, "m2","L2", "1.0")})
        mass.update({"neal": UBASE.UBASE("Cambodian", "neal", 6.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"sesep": UBASE.UBASE("Cambodian", "sesep", 4.000000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-muoi": UBASE.UBASE("Cambodian", "cubic-muoi", 1.000000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"Cambodian": BaseSystem.BaseSystem("Cambodian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"covid(Ceylon)": UBASE.UBASE("Ceylonese", "covid(Ceylon)", 4.640000000000000E-01, "m","L", "1.0")})
        length.update({"covid(Madras)": UBASE.UBASE("Ceylonese", "covid(Madras)", 4.720000000000000E-01, "m","L", "1.0")})
        area.update({"square-covid(Ceylon)": UBASE.UBASE("Ceylonese", "square-covid(Ceylon)", 2.152960000000000E-01, "m2","L2", "1.0")})
        area.update({"square-covid(Madras)": UBASE.UBASE("Ceylonese", "square-covid(Madras)", 2.227840000000000E-01, "m2","L2", "1.0")})
        mass.update({"seer": UBASE.UBASE("Ceylonese", "seer", 2.834950000000000E-01, "kg","M", "1.0")})
        liquid.update({"cubic-covid(Ceylon)": UBASE.UBASE("Ceylonese", "cubic-covid(Ceylon)", 9.989734400000000E-02, "m3","L3", "1.0")})
        liquid.update({"cubic-covid(Madras)": UBASE.UBASE("Ceylonese", "cubic-covid(Madras)", 1.051540480000000E-01, "m3","L3", "1.0")})
        dry.update({"chundroon": UBASE.UBASE("Ceylonese", "chundroon", 2.649000000000000E-04, "m3","L3", "1.0")})
        self._map.update({"Ceylonese": BaseSystem.BaseSystem("Ceylonese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"bara": UBASE.UBASE("Chilean", "bara", 8.360000000000000E-01, "m","L", "1.0")})
        area.update({"square-bara": UBASE.UBASE("Chilean", "square-bara", 6.988960000000000E-01, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Chilean", "libbra", 4.600930000000000E-01, "kg","M", "1.0")})
        liquid.update({"almude": UBASE.UBASE("Chilean", "almude", 8.083000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-bara": UBASE.UBASE("Chilean", "cubic-bara", 5.842770560000000E-01, "m3","L3", "1.0")})
        self._map.update({"Chilean": BaseSystem.BaseSystem("Chilean", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"tchi": UBASE.UBASE("Chinese", "tchi", 3.200000000000000E-01, "m","L", "1.0")})
        length.update({"chek": UBASE.UBASE("Chinese", "chek", 3.714750000000000E-01, "m","L", "1.0")})
        area.update({"meou": UBASE.UBASE("Chinese", "meou", 6.144000000000000E+02, "m2","L2", "1.0")})
        area.update({"fang-chi": UBASE.UBASE("Chinese", "fang-chi", 1.024000000000000E-01, "m2","L2", "1.0")})
        area.update({"mau5": UBASE.UBASE("Chinese", "mau5", 7.614000000000000E+02, "m2","L2", "1.0")})
        mass.update({"jin": UBASE.UBASE("Chinese", "jin", 5.968160000000000E-01, "kg","M", "1.0")})
        liquid.update({"cheng": UBASE.UBASE("Chinese", "cheng", 1.035468800000000E-03, "m3","L3", "1.0")})
        liquid.update({"cyut3": UBASE.UBASE("Chinese", "cyut3", 1.031000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-tchi": UBASE.UBASE("Chinese", "cubic-tchi", 3.276800000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Chinese": BaseSystem.BaseSystem("Chinese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Colombian", "vara", 8.000000000000000E-01, "m","L", "1.0")})
        area.update({"square-vara": UBASE.UBASE("Colombian", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Colombian", "libbra", 5.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"cubic-vara": UBASE.UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Colombian": BaseSystem.BaseSystem("Colombian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Costa-Rican", "vara", 8.393000000000000E-01, "m","L", "1.0")})
        area.update({"manzana": UBASE.UBASE("Costa-Rican", "manzana", 7.044244900000000E+03, "m2","L2", "1.0")})
        mass.update({"fanega": UBASE.UBASE("Costa-Rican", "fanega", 9.200000000000000E+01, "kg","M", "1.0")})
        liquid.update({"botella(nominal)": UBASE.UBASE("Costa-Rican", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(min)": UBASE.UBASE("Costa-Rican", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(max)": UBASE.UBASE("Costa-Rican", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Costa-Rican", "cubic-vara", 5.912234744570000E-01, "m3","L3", "1.0")})
        self._map.update({"Costa-Rican": BaseSystem.BaseSystem("Costa-Rican", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Cuban", "vara", 8.479536000000000E-01, "m","L", "1.0")})
        area.update({"cabaliera": UBASE.UBASE("Cuban", "cabaliera", 1.342020000000000E+05, "m2","L2", "1.0")})
        mass.update({"libra": UBASE.UBASE("Cuban", "libra", 4.608951746418000E-01, "kg","M", "1.0")})
        liquid.update({"bocoy": UBASE.UBASE("Cuban", "bocoy", 1.362700000000000E-01, "m3","L3", "1.0")})
        dry.update({"fanega": UBASE.UBASE("Cuban", "fanega", 5.634727319684110E-02, "m3","L3", "1.0")})
        self._map.update({"Cuban": BaseSystem.BaseSystem("Cuban", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Cypriot", "pic", 6.096000000000000E-01, "m","L", "1.0")})
        area.update({"scala": UBASE.UBASE("Cypriot", "scala", 1.337803776000000E+03, "m2","L2", "1.0")})
        mass.update({"oke": UBASE.UBASE("Cypriot", "oke", 1.270058636000000E+00, "kg","M", "1.0")})
        liquid.update({"oke": UBASE.UBASE("Cypriot", "oke", 1.278550000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Cypriot", "cubic-pic", 2.265347727360000E-01, "m3","L3", "1.0")})
        self._map.update({"Cypriot": BaseSystem.BaseSystem("Cypriot", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"stopa(Bohemian)": UBASE.UBASE("Czech", "stopa(Bohemian)", 2.960000000000000E-01, "m","L", "1.0")})
        length.update({"stopa(Praha)": UBASE.UBASE("Czech", "stopa(Praha)", 2.965000000000000E-01, "m","L", "1.0")})
        length.update({"stopa(Moravian)": UBASE.UBASE("Czech", "stopa(Moravian)", 2.840000000000000E-01, "m","L", "1.0")})
        length.update({"stopa(Silesian)": UBASE.UBASE("Czech", "stopa(Silesian)", 2.895000000000000E-01, "m","L", "1.0")})
        area.update({"merice": UBASE.UBASE("Czech", "merice", 2.000000000000000E+03, "m2","L2", "1.0")})
        mass.update({"quintal": UBASE.UBASE("Czech", "quintal", 5.000000000000000E+01, "kg","M", "1.0")})
        liquid.update({"merice": UBASE.UBASE("Czech", "merice", 7.060000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-stopa(Bohemian)": UBASE.UBASE("Czech", "cubic-stopa(Bohemian)", 2.593433600000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-stopa(Praha)": UBASE.UBASE("Czech", "cubic-stopa(Praha)", 2.606598212500000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-stopa(Moravian)": UBASE.UBASE("Czech", "cubic-stopa(Moravian)", 2.290630400000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-stopa(Silesian)": UBASE.UBASE("Czech", "cubic-stopa(Silesian)", 2.426306737500000E-02, "m3","L3", "1.0")})
        self._map.update({"Czech": BaseSystem.BaseSystem("Czech", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fod": UBASE.UBASE("Danish", "fod", 3.138570000000000E-01, "m","L", "1.0")})
        length.update({"danskmil": UBASE.UBASE("Danish", "danskmil", 7.532500000000000E+03, "m","L", "1.0")})
        area.update({"square-ruthe": UBASE.UBASE("Danish", "square-ruthe", 1.418489516865600E+01, "m2","L2", "1.0")})
        area.update({"tondelande": UBASE.UBASE("Danish", "tondelande", 5.516230000000000E+03, "m2","L2", "1.0")})
        mass.update({"pund": UBASE.UBASE("Danish", "pund", 5.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"pott": UBASE.UBASE("Danish", "pott", 9.661520492510560E-04, "m3","L3", "1.0")})
        dry.update({"korntonde": UBASE.UBASE("Danish", "korntonde", 1.391258950921520E-01, "m3","L3", "1.0")})
        self._map.update({"Danish": BaseSystem.BaseSystem("Danish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"voeten": UBASE.UBASE("Dutch", "voeten", 2.830594000000000E-01, "m","L", "1.0")})
        area.update({"morgen": UBASE.UBASE("Dutch", "morgen", 8.244346000000000E+03, "m2","L2", "1.0")})
        mass.update({"pond(Amsterdam)": UBASE.UBASE("Dutch", "pond(Amsterdam)", 4.940903200000000E-01, "kg","M", "1.0")})
        mass.update({"pond(ordinary)": UBASE.UBASE("Dutch", "pond(ordinary)", 4.921677200000000E-01, "kg","M", "1.0")})
        mass.update({"pond(apothecary)": UBASE.UBASE("Dutch", "pond(apothecary)", 3.691257900000000E-01, "kg","M", "1.0")})
        liquid.update({"mingelen": UBASE.UBASE("Dutch", "mingelen", 1.200000000000000E-03, "m3","L3", "1.0")})
        dry.update({"schepel": UBASE.UBASE("Dutch", "schepel", 2.726000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Dutch": BaseSystem.BaseSystem("Dutch", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"derah(royal-cubit)": UBASE.UBASE("Egyptian", "derah(royal-cubit)", 5.235000000000000E-01, "m","L", "1.0")})
        length.update({"diraa": UBASE.UBASE("Egyptian", "diraa", 5.800000000000000E-01, "m","L", "1.0")})
        length.update({"derah(cubit)": UBASE.UBASE("Egyptian", "derah(cubit)", 4.495800000000000E-01, "m","L", "1.0")})
        length.update({"palm(short)": UBASE.UBASE("Egyptian", "palm(short)", 7.485714286000000E-02, "m","L", "1.0")})
        area.update({"pekeis": UBASE.UBASE("Egyptian", "pekeis", 2.740522500000000E+01, "m2","L2", "1.0")})
        area.update({"feddan-masri": UBASE.UBASE("Egyptian", "feddan-masri", 4.200080000000000E+03, "m2","L2", "1.0")})
        mass.update({"deben": UBASE.UBASE("Egyptian", "deben", 1.365000000000000E-02, "kg","M", "1.0")})
        mass.update({"oke": UBASE.UBASE("Egyptian", "oke", 1.248000000000000E+00, "kg","M", "1.0")})
        liquid.update({"keddah": UBASE.UBASE("Egyptian", "keddah", 2.062500000000000E-03, "m3","L3", "1.0")})
        dry.update({"khar": UBASE.UBASE("Egyptian", "khar", 3.400000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Egyptian": BaseSystem.BaseSystem("Egyptian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"cubi": UBASE.UBASE("Eritrean", "cubi", 3.200000000000000E-01, "m","L", "1.0")})
        area.update({"square-cubi": UBASE.UBASE("Eritrean", "square-cubi", 1.024000000000000E-01, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Eritrean", "rottolo", 4.480000000000000E-01, "kg","M", "1.0")})
        liquid.update({"messe": UBASE.UBASE("Eritrean", "messe", 1.500000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-cubi": UBASE.UBASE("Eritrean", "cubic-cubi", 3.276800000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Eritrean": BaseSystem.BaseSystem("Eritrean", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"arshine": UBASE.UBASE("Estonian", "arshine", 3.071120000000000E+01, "m","L", "1.0")})
        area.update({"lofstelle": UBASE.UBASE("Estonian", "lofstelle", 1.855000000000000E+03, "m2","L2", "1.0")})
        area.update({"tonnland": UBASE.UBASE("Estonian", "tonnland", 5.462700000000000E+03, "m2","L2", "1.0")})
        mass.update({"pfund": UBASE.UBASE("Estonian", "pfund", 4.600000000000000E-01, "kg","M", "1.0")})
        liquid.update({"hulmit": UBASE.UBASE("Estonian", "hulmit", 1.148000000000000E-02, "m3","L3", "1.0")})
        liquid.update({"kulimet": UBASE.UBASE("Estonian", "kulimet", 1.150161280000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-elle": UBASE.UBASE("Estonian", "cubic-elle", 9.619307168929790E+02, "m3","L3", "1.0")})
        self._map.update({"Estonian": BaseSystem.BaseSystem("Estonian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"kend": UBASE.UBASE("Ethiopian", "kend", 4.900000000000000E-01, "m","L", "1.0")})
        area.update({"square-kend": UBASE.UBASE("Ethiopian", "square-kend", 2.401000000000000E-01, "m2","L2", "1.0")})
        mass.update({"farasula(ivory)": UBASE.UBASE("Ethiopian", "farasula(ivory)", 1.347840000000000E+01, "kg","M", "1.0")})
        mass.update({"farasula(coffee)": UBASE.UBASE("Ethiopian", "farasula(coffee)", 1.684800000000000E+01, "kg","M", "1.0")})
        mass.update({"farasula(rubber)": UBASE.UBASE("Ethiopian", "farasula(rubber)", 1.797120000000000E+01, "kg","M", "1.0")})
        liquid.update({"kuba": UBASE.UBASE("Ethiopian", "kuba", 1.016000000000000E-03, "m3","L3", "1.0")})
        dry.update({"madega": UBASE.UBASE("Ethiopian", "madega", 4.400000000000000E-04, "m3","L3", "1.0")})
        self._map.update({"Ethiopian": BaseSystem.BaseSystem("Ethiopian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"jalka": UBASE.UBASE("Finnish", "jalka", 2.969000000000000E-01, "m","L", "1.0")})
        area.update({"kannunala": UBASE.UBASE("Finnish", "kannunala", 8.814961000000000E+01, "m2","L2", "1.0")})
        mass.update({"naula": UBASE.UBASE("Finnish", "naula", 4.250797024000000E-01, "kg","M", "1.0")})
        liquid.update({"tunna": UBASE.UBASE("Finnish", "tunna", 1.634900000000000E-01, "m3","L3", "1.0")})
        liquid.update({"tuoppi": UBASE.UBASE("Finnish", "tuoppi", 1.308580960450000E-03, "m3","L3", "1.0")})
        dry.update({"tuoppi": UBASE.UBASE("Finnish", "tuoppi", 1.327400000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Finnish": BaseSystem.BaseSystem("Finnish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"toise": UBASE.UBASE("French", "toise", 1.949036500200000E+00, "m","L", "1.0")})
        length.update({"pied(metric)": UBASE.UBASE("French", "pied(metric)", 3.333333333333330E-01, "m","L", "1.0")})
        length.update({"pied(de-Paris/du-Roi)": UBASE.UBASE("French", "pied(de-Paris/du-Roi)", 3.248394167000000E-01, "m","L", "1.0")})
        length.update({"bourgeois": UBASE.UBASE("French", "bourgeois", 3.175000000000000E-03, "m","L", "1.0")})
        length.update({"canne(Provence)": UBASE.UBASE("French", "canne(Provence)", 1.968500000000000E+00, "m","L", "1.0")})
        length.update({"point-didot": UBASE.UBASE("French", "point-didot", 3.759715471075000E-04, "m","L", "1.0")})
        length.update({"pied(commum)": UBASE.UBASE("French", "pied(commum)", 2.236067977500000E-01, "m","L", "1.0")})
        length.update({"pied(d'ordonance)": UBASE.UBASE("French", "pied(d'ordonance)", 3.248400000000000E-01, "m","L", "1.0")})
        length.update({"toise(du-Chatelet)": UBASE.UBASE("French", "toise(du-Chatelet)", 1.949090000000000E+00, "m","L", "1.0")})
        area.update({"pied-carre": UBASE.UBASE("French", "pied-carre", 1.055206466419960E-01, "m2","L2", "1.0")})
        area.update({"journal(Nantes)": UBASE.UBASE("French", "journal(Nantes)", 2.671000000000000E+03, "m2","L2", "1.0")})
        area.update({"ares": UBASE.UBASE("French", "ares", 1.000000000000000E+02, "m2","L2", "1.0")})
        area.update({"exots(Agen)": UBASE.UBASE("French", "exots(Agen)", 1.687500000000000E+01, "m2","L2", "1.0")})
        area.update({"dextres(Montpellier)": UBASE.UBASE("French", "dextres(Montpellier)", 1.920000000000000E+01, "m2","L2", "1.0")})
        area.update({"corterade(Montpellier)": UBASE.UBASE("French", "corterade(Montpellier)", 2.877000000000000E+03, "m2","L2", "1.0")})
        area.update({"journal(Bretagne)": UBASE.UBASE("French", "journal(Bretagne)", 4.863000000000000E+03, "m2","L2", "1.0")})
        area.update({"becheree(Lyonnais)": UBASE.UBASE("French", "becheree(Lyonnais)", 1.367000000000000E+03, "m2","L2", "1.0")})
        area.update({"journal(Lyonnais)": UBASE.UBASE("French", "journal(Lyonnais)", 4.000000000000000E+03, "m2","L2", "1.0")})
        mass.update({"livre(de-Paris)": UBASE.UBASE("French", "livre(de-Paris)", 4.895058500000000E-01, "kg","M", "1.0")})
        mass.update({"livre(Charlemange)": UBASE.UBASE("French", "livre(Charlemange)", 3.671280000000000E-01, "kg","M", "1.0")})
        mass.update({"livre(metric)": UBASE.UBASE("French", "livre(metric)", 1.000000000000000E+00, "kg","M", "1.0")})
        liquid.update({"pinte": UBASE.UBASE("French", "pinte", 9.521462584750000E-04, "m3","L3", "1.0")})
        liquid.update({"chopine(Provence-wine)": UBASE.UBASE("French", "chopine(Provence-wine)", 2.299250000000000E-04, "m3","L3", "1.0")})
        liquid.update({"liter(old)": UBASE.UBASE("French", "liter(old)", 1.000002800100000E-03, "m3","L3", "1.0")})
        dry.update({"setier": UBASE.UBASE("French", "setier", 1.516800000000000E-01, "m3","L3", "1.0")})
        dry.update({"picotins": UBASE.UBASE("French", "picotins", 3.125000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"French": BaseSystem.BaseSystem("French", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fuss": UBASE.UBASE("German", "fuss", 3.138570000000000E-01, "m","L", "1.0")})
        area.update({"klafter": UBASE.UBASE("German", "klafter", 1.440020334575000E+02, "m2","L2", "1.0")})
        mass.update({"pfund": UBASE.UBASE("German", "pfund", 4.677110000000000E-01, "kg","M", "1.0")})
        mass.update({"zollpfund": UBASE.UBASE("German", "zollpfund", 5.144821000000000E-01, "kg","M", "1.0")})
        liquid.update({"quart": UBASE.UBASE("German", "quart", 1.145069095408660E-03, "m3","L3", "1.0")})
        dry.update({"metzen": UBASE.UBASE("German", "metzen", 3.705960000000000E-02, "m3","L3", "1.0")})
        dry.update({"metze": UBASE.UBASE("German", "metze", 3.435890000000000E-03, "m3","L3", "1.0")})
        self._map.update({"German": BaseSystem.BaseSystem("German", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"piki(short)": UBASE.UBASE("Greek", "piki(short)", 6.480000000000000E-01, "m","L", "1.0")})
        length.update({"piki(long)": UBASE.UBASE("Greek", "piki(long)", 6.690000000000000E-01, "m","L", "1.0")})
        length.update({"piki(mansonary)": UBASE.UBASE("Greek", "piki(mansonary)", 7.500000000000000E-01, "m","L", "1.0")})
        length.update({"amma": UBASE.UBASE("Greek", "amma", 2.100000000000000E+01, "m","L", "1.0")})
        area.update({"stremma": UBASE.UBASE("Greek", "stremma", 1.000000000000000E+03, "m2","L2", "1.0")})
        mass.update({"oka": UBASE.UBASE("Greek", "oka", 1.280000000000000E+00, "kg","M", "1.0")})
        liquid.update({"oka(average)": UBASE.UBASE("Greek", "oka(average)", 1.336500000000000E-03, "m3","L3", "1.0")})
        liquid.update({"baril": UBASE.UBASE("Greek", "baril", 7.423600000000000E-02, "m3","L3", "1.0")})
        dry.update({"sexte": UBASE.UBASE("Greek", "sexte", 5.400000000000000E-04, "m3","L3", "1.0")})
        self._map.update({"Greek": BaseSystem.BaseSystem("Greek", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Guatemalan", "vara", 8.359000000000000E-01, "m","L", "1.0")})
        area.update({"manzana": UBASE.UBASE("Guatemalan", "manzana", 6.987288100000000E+03, "m2","L2", "1.0")})
        mass.update({"fanega": UBASE.UBASE("Guatemalan", "fanega", 9.200000000000000E+01, "kg","M", "1.0")})
        liquid.update({"botella(nominal)": UBASE.UBASE("Guatemalan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(min)": UBASE.UBASE("Guatemalan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(max)": UBASE.UBASE("Guatemalan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-vera": UBASE.UBASE("Guatemalan", "cubic-vera", 5.840674122790000E-01, "m3","L3", "1.0")})
        self._map.update({"Guatemalan": BaseSystem.BaseSystem("Guatemalan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Guinean", "pic", 5.780000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Guinean", "square-pic", 3.340840000000000E-01, "m2","L2", "1.0")})
        mass.update({"benda": UBASE.UBASE("Guinean", "benda", 6.420000000000000E-02, "kg","M", "1.0")})
        liquid.update({"cubic-pic": UBASE.UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0")})
        self._map.update({"Guinean": BaseSystem.BaseSystem("Guinean", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"toise": UBASE.UBASE("Haitian", "toise", 1.948800000000000E+00, "m","L", "1.0")})
        area.update({"carreau": UBASE.UBASE("Haitian", "carreau", 1.292300000000000E+03, "m2","L2", "1.0")})
        mass.update({"gwo-mamit": UBASE.UBASE("Haitian", "gwo-mamit", 1.700000000000000E+00, "kg","M", "1.0")})
        liquid.update({"baril": UBASE.UBASE("Haitian", "baril", 1.000000000000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-toise": UBASE.UBASE("Haitian", "cubic-toise", 7.401194422272000E+00, "m3","L3", "1.0")})
        self._map.update({"Haitian": BaseSystem.BaseSystem("Haitian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"cubit": UBASE.UBASE("Hebrew", "cubit", 5.550000000000000E-01, "m","L", "1.0")})
        length.update({"cubit(acared)": UBASE.UBASE("Hebrew", "cubit(acared)", 6.400000000000000E-01, "m","L", "1.0")})
        area.update({"geris": UBASE.UBASE("Hebrew", "geris", 3.141592653589790E-04, "m2","L2", "1.0")})
        mass.update({"mina(sacred)": UBASE.UBASE("Hebrew", "mina(sacred)", 8.500000000000000E-01, "kg","M", "1.0")})
        mass.update({"mina(Talmudic)": UBASE.UBASE("Hebrew", "mina(Talmudic)", 3.542000000000000E-01, "kg","M", "1.0")})
        liquid.update({"bath(old)": UBASE.UBASE("Hebrew", "bath(old)", 2.937600000000000E-02, "m3","L3", "1.0")})
        liquid.update({"bath(new)": UBASE.UBASE("Hebrew", "bath(new)", 2.142000000000000E-02, "m3","L3", "1.0")})
        dry.update({"ephah(old)": UBASE.UBASE("Hebrew", "ephah(old)", 2.937600000000000E-02, "m3","L3", "1.0")})
        dry.update({"ephah(new)": UBASE.UBASE("Hebrew", "ephah(new)", 2.142000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Hebrew": BaseSystem.BaseSystem("Hebrew", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Honduran", "vara", 8.128000000000000E-01, "m","L", "1.0")})
        area.update({"manzana": UBASE.UBASE("Honduran", "manzana", 6.606438400000000E+04, "m2","L2", "1.0")})
        mass.update({"fanega": UBASE.UBASE("Honduran", "fanega", 9.200000000000000E+01, "kg","M", "1.0")})
        liquid.update({"botella(nominal)": UBASE.UBASE("Honduran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(min)": UBASE.UBASE("Honduran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(max)": UBASE.UBASE("Honduran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Honduran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0")})
        self._map.update({"Honduran": BaseSystem.BaseSystem("Honduran", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"faust": UBASE.UBASE("Hungarian", "faust", 1.053600000000000E-01, "m","L", "1.0")})
        area.update({"square-meile": UBASE.UBASE("Hungarian", "square-meile", 6.978262126496050E+07, "m2","L2", "1.0")})
        mass.update({"oka": UBASE.UBASE("Hungarian", "oka", 1.329479142678000E+00, "kg","M", "1.0")})
        liquid.update({"eimer": UBASE.UBASE("Hungarian", "eimer", 5.430000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-faust": UBASE.UBASE("Hungarian", "cubic-faust", 1.169572870656000E-03, "m3","L3", "1.0")})
        self._map.update({"Hungarian": BaseSystem.BaseSystem("Hungarian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fet": UBASE.UBASE("Icelandic", "fet", 3.138570000000000E-01, "m","L", "1.0")})
        area.update({"ferfaomur": UBASE.UBASE("Icelandic", "ferfaomur", 3.546223792164000E+00, "m2","L2", "1.0")})
        mass.update({"pund": UBASE.UBASE("Icelandic", "pund", 5.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"cubic-fet": UBASE.UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3","L3", "1.0")})
        dry.update({"pottar": UBASE.UBASE("Icelandic", "pottar", 9.661520492510560E-04, "m3","L3", "1.0")})
        self._map.update({"Icelandic": BaseSystem.BaseSystem("Icelandic", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"hasta": UBASE.UBASE("Indian", "hasta", 4.570000000000000E-01, "m","L", "1.0")})
        length.update({"guz(Bombay)": UBASE.UBASE("Indian", "guz(Bombay)", 6.858000000000000E-01, "m","L", "1.0")})
        length.update({"guz(Calcutta)": UBASE.UBASE("Indian", "guz(Calcutta)", 9.150000000000000E-01, "m","L", "1.0")})
        area.update({"cawnie": UBASE.UBASE("Indian", "cawnie", 5.400000000000000E+02, "m2","L2", "1.0")})
        area.update({"square-guz(Bombay)": UBASE.UBASE("Indian", "square-guz(Bombay)", 4.703216400000000E-01, "m2","L2", "1.0")})
        area.update({"square-guz(Calcutta)": UBASE.UBASE("Indian", "square-guz(Calcutta)", 8.372250000000000E-01, "m2","L2", "1.0")})
        area.update({"ground": UBASE.UBASE("Indian", "ground", 2.030000000000000E+01, "m2","L2", "1.0")})
        area.update({"kani": UBASE.UBASE("Indian", "kani", 3.075000000000000E+02, "m2","L2", "1.0")})
        area.update({"chahar": UBASE.UBASE("Indian", "chahar", 2.962000000000000E-02, "m2","L2", "1.0")})
        mass.update({"pala": UBASE.UBASE("Indian", "pala", 4.700000000000000E-02, "kg","M", "1.0")})
        mass.update({"seer": UBASE.UBASE("Indian", "seer", 9.330400000000000E-01, "kg","M", "1.0")})
        mass.update({"drona": UBASE.UBASE("Indian", "drona", 1.320000000000000E+01, "kg","M", "1.0")})
        liquid.update({"parah": UBASE.UBASE("Indian", "parah", 1.101000000000000E-01, "m3","L3", "1.0")})
        dry.update({"drona": UBASE.UBASE("Indian", "drona", 1.320000000000000E-02, "m3","L3", "1.0")})
        dry.update({"seer": UBASE.UBASE("Indian", "seer", 1.000000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Indian": BaseSystem.BaseSystem("Indian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"depa": UBASE.UBASE("Indonesian", "depa", 1.700000000000000E+00, "m","L", "1.0")})
        area.update({"bahoe": UBASE.UBASE("Indonesian", "bahoe", 7.096500000000000E+03, "m2","L2", "1.0")})
        mass.update({"picul": UBASE.UBASE("Indonesian", "picul", 6.176130250000000E+01, "kg","M", "1.0")})
        mass.update({"thail(precious-metal)": UBASE.UBASE("Indonesian", "thail(precious-metal)", 5.409000000000000E+01, "kg","M", "1.0")})
        mass.update({"thail(opium)": UBASE.UBASE("Indonesian", "thail(opium)", 3.860100000000000E+01, "kg","M", "1.0")})
        liquid.update({"kan": UBASE.UBASE("Indonesian", "kan", 1.575100000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-depa": UBASE.UBASE("Indonesian", "cubic-depa", 4.913000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"Indonesian": BaseSystem.BaseSystem("Indonesian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot": UBASE.UBASE("Irish", "foot", 3.048000000000000E-01, "m","L", "1.0")})
        length.update({"troighid": UBASE.UBASE("Irish", "troighid", 2.500000000000000E-01, "m","L", "1.0")})
        area.update({"achar": UBASE.UBASE("Irish", "achar", 4.046856422400000E+03, "m2","L2", "1.0")})
        mass.update({"penginn": UBASE.UBASE("Irish", "penginn", 4.000000000000000E-04, "kg","M", "1.0")})
        liquid.update({"gallon": UBASE.UBASE("Irish", "gallon", 3.565825126400000E-03, "m3","L3", "1.0")})
        liquid.update({"meisrin": UBASE.UBASE("Irish", "meisrin", 6.600000000000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-foot": UBASE.UBASE("Irish", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-troighid": UBASE.UBASE("Irish", "cubic-troighid", 1.562500000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Irish": BaseSystem.BaseSystem("Irish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"piedi-liprando": UBASE.UBASE("Italian", "piedi-liprando", 5.137700000000000E-01, "m","L", "1.0")})
        area.update({"giornata": UBASE.UBASE("Italian", "giornata", 3.800000000000000E+03, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Italian", "libbra", 3.070000000000000E-01, "kg","M", "1.0")})
        liquid.update({"barile(Florence-oil)": UBASE.UBASE("Italian", "barile(Florence-oil)", 3.343000000000000E-02, "m3","L3", "1.0")})
        liquid.update({"barile(Florence-wine)": UBASE.UBASE("Italian", "barile(Florence-wine)", 4.560000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-piedi-liprando": UBASE.UBASE("Italian", "cubic-piedi-liprando", 1.356145303196330E-01, "m3","L3", "1.0")})
        self._map.update({"Italian": BaseSystem.BaseSystem("Italian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"shaku": UBASE.UBASE("Japanese", "shaku", 3.030303030303030E-01, "m","L", "1.0")})
        area.update({"tsubo": UBASE.UBASE("Japanese", "tsubo", 3.305785123966940E+00, "m2","L2", "1.0")})
        mass.update({"kwan": UBASE.UBASE("Japanese", "kwan", 3.750000000000000E+00, "kg","M", "1.0")})
        mass.update({"tael": UBASE.UBASE("Japanese", "tael", 3.751000000000000E-02, "kg","M", "1.0")})
        liquid.update({"sho": UBASE.UBASE("Japanese", "sho", 1.803906836964690E-03, "m3","L3", "1.0")})
        dry.update({"cubic-shaku": UBASE.UBASE("Japanese", "cubic-shaku", 2.782647410746580E-02, "m3","L3", "1.0")})
        self._map.update({"Japanese": BaseSystem.BaseSystem("Japanese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"elle": UBASE.UBASE("Latvian", "elle", 5.370000000000000E-01, "m","L", "1.0")})
        area.update({"kapp": UBASE.UBASE("Latvian", "kapp", 1.486400000000000E+02, "m2","L2", "1.0")})
        mass.update({"pfund": UBASE.UBASE("Latvian", "pfund", 4.190000000000000E-01, "kg","M", "1.0")})
        liquid.update({"stoof": UBASE.UBASE("Latvian", "stoof", 1.275200000000000E-03, "m3","L3", "1.0")})
        liquid.update({"faden": UBASE.UBASE("Latvian", "faden", 4.077000000000000E+00, "m3","L3", "1.0")})
        dry.update({"kulmet": UBASE.UBASE("Latvian", "kulmet", 1.091062080000000E-02, "m3","L3", "1.0")})
        self._map.update({"Latvian": BaseSystem.BaseSystem("Latvian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Libyan", "pic", 6.800000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Libyan", "square-pic", 4.624000000000000E-01, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Libyan", "rottolo", 5.128000000000000E-01, "kg","M", "1.0")})
        liquid.update({"barile": UBASE.UBASE("Libyan", "barile", 6.249750000000000E-02, "m3","L3", "1.0")})
        dry.update({"orba": UBASE.UBASE("Libyan", "orba", 7.692000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Libyan": BaseSystem.BaseSystem("Libyan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"canna": UBASE.UBASE("Maltese", "canna", 2.088000000000000E+00, "m","L", "1.0")})
        area.update({"qasba-kwadra": UBASE.UBASE("Maltese", "qasba-kwadra", 4.359744000000000E+00, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Maltese", "rottolo", 7.937900000000000E-01, "kg","M", "1.0")})
        liquid.update({"salma": UBASE.UBASE("Maltese", "salma", 2.909440000000000E+02, "m3","L3", "1.0")})
        liquid.update({"baril": UBASE.UBASE("Maltese", "baril", 4.316200000000000E+01, "m3","L3", "1.0")})
        liquid.update({"caffiso": UBASE.UBASE("Maltese", "caffiso", 2.045700000000000E+01, "m3","L3", "1.0")})
        dry.update({"tomna": UBASE.UBASE("Maltese", "tomna", 1.818436800000000E-02, "m3","L3", "1.0")})
        self._map.update({"Maltese": BaseSystem.BaseSystem("Maltese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        liquid.update({"cash": UBASE.UBASE("Mauritius", "cash", 2.271100000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Mauritius": BaseSystem.BaseSystem("Mauritius", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Mexican", "vara", 8.380000000000000E-01, "m","L", "1.0")})
        area.update({"fanega": UBASE.UBASE("Mexican", "fanega", 3.566275929600000E+04, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Mexican", "libbra", 4.602463400000000E-01, "kg","M", "1.0")})
        liquid.update({"cuartillo(wine)": UBASE.UBASE("Mexican", "cuartillo(wine)", 4.562640000000000E-04, "m3","L3", "1.0")})
        liquid.update({"cuartillo(oil)": UBASE.UBASE("Mexican", "cuartillo(oil)", 5.061620000000000E-04, "m3","L3", "1.0")})
        dry.update({"cuartillo": UBASE.UBASE("Mexican", "cuartillo", 1.891800000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Mexican": BaseSystem.BaseSystem("Mexican", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"aldan": UBASE.UBASE("Mozambican", "aldan", 1.600000000000000E+00, "m","L", "1.0")})
        area.update({"square-aldan": UBASE.UBASE("Mozambican", "square-aldan", 2.560000000000000E+00, "m2","L2", "1.0")})
        mass.update({"bahar": UBASE.UBASE("Mozambican", "bahar", 1.090000000000000E+02, "kg","M", "1.0")})
        liquid.update({"cubic-aldan": UBASE.UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0")})
        dry.update({"cubic-aldan": UBASE.UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"Mozambican": BaseSystem.BaseSystem("Mozambican", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Moroccan", "pic", 6.100000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Moroccan", "square-pic", 3.721000000000000E-01, "m2","L2", "1.0")})
        mass.update({"rotal": UBASE.UBASE("Moroccan", "rotal", 5.075000000000000E-01, "kg","M", "1.0")})
        liquid.update({"mud": UBASE.UBASE("Moroccan", "mud", 1.400000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Moroccan", "cubic-pic", 2.269810000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Moroccan": BaseSystem.BaseSystem("Moroccan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Nicaraguan", "vara", 8.128000000000000E-01, "m","L", "1.0")})
        area.update({"manzana": UBASE.UBASE("Nicaraguan", "manzana", 6.988921041000000E+03, "m2","L2", "1.0")})
        mass.update({"fanega": UBASE.UBASE("Nicaraguan", "fanega", 9.200000000000000E+01, "kg","M", "1.0")})
        liquid.update({"botella(nominal)": UBASE.UBASE("Nicaraguan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(min)": UBASE.UBASE("Nicaraguan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(max)": UBASE.UBASE("Nicaraguan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Nicaraguan", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0")})
        self._map.update({"Nicaraguan": BaseSystem.BaseSystem("Nicaraguan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fod": UBASE.UBASE("Norwegian", "fod", 3.137000000000000E-01, "m","L", "1.0")})
        area.update({"kvadrat-rode": UBASE.UBASE("Norwegian", "kvadrat-rode", 9.840769000000000E+00, "m2","L2", "1.0")})
        mass.update({"skaalpund": UBASE.UBASE("Norwegian", "skaalpund", 4.981000000000000E-01, "kg","M", "1.0")})
        liquid.update({"pot": UBASE.UBASE("Norwegian", "pot", 9.651000000000000E-04, "m3","L3", "1.0")})
        dry.update({"korntonde": UBASE.UBASE("Norwegian", "korntonde", 1.389744000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Norwegian": BaseSystem.BaseSystem("Norwegian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Paraguayan", "vara", 8.660000000000000E-01, "m","L", "1.0")})
        length.update({"vara(old)": UBASE.UBASE("Paraguayan", "vara(old)", 8.385600000000000E-01, "m","L", "1.0")})
        area.update({"lifio": UBASE.UBASE("Paraguayan", "lifio", 7.499560000000000E+01, "m2","L2", "1.0")})
        area.update({"lifio(old)": UBASE.UBASE("Paraguayan", "lifio(old)", 4.883605057152000E+03, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Paraguayan", "libbra", 4.590000000000000E-01, "kg","M", "1.0")})
        mass.update({"libbra(old)": UBASE.UBASE("Paraguayan", "libbra(old)", 4.600800000000000E-01, "kg","M", "1.0")})
        liquid.update({"fanega": UBASE.UBASE("Paraguayan", "fanega", 2.880000000000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Paraguayan", "cubic-vara", 6.494618960000000E-01, "m3","L3", "1.0")})
        self._map.update({"Paraguayan": BaseSystem.BaseSystem("Paraguayan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"zereth": UBASE.UBASE("Persian", "zereth", 3.200000000000000E-01, "m","L", "1.0")})
        length.update({"farsakh": UBASE.UBASE("Persian", "farsakh", 5.486400000000000E+03, "m","L", "1.0")})
        area.update({"gar": UBASE.UBASE("Persian", "gar", 1.474560000000000E+01, "m2","L2", "1.0")})
        mass.update({"talent": UBASE.UBASE("Persian", "talent", 3.260000000000000E+01, "kg","M", "1.0")})
        mass.update({"rottel": UBASE.UBASE("Persian", "rottel", 4.600000000000000E-01, "kg","M", "1.0")})
        liquid.update({"sextario": UBASE.UBASE("Persian", "sextario", 3.300000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"chenica": UBASE.UBASE("Persian", "chenica", 1.320000000000000E-03, "m3","L3", "1.0")})
        dry.update({"amphora": UBASE.UBASE("Persian", "amphora", 3.260000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Persian": BaseSystem.BaseSystem("Persian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Peruvian", "vara", 8.359800000000000E-01, "m","L", "1.0")})
        length.update({"pie": UBASE.UBASE("Peruvian", "pie", 2.786600000000000E-01, "m","L", "1.0")})
        area.update({"fanegada": UBASE.UBASE("Peruvian", "fanegada", 3.144881521800000E+03, "m2","L2", "1.0")})
        area.update({"topo": UBASE.UBASE("Peruvian", "topo", 2.705995833868800E+03, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Peruvian", "libbra", 4.600900000000000E-01, "kg","M", "1.0")})
        liquid.update({"cubic-vara": UBASE.UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0")})
        self._map.update({"Peruvian": BaseSystem.BaseSystem("Peruvian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"talampakan": UBASE.UBASE("Philippine", "talampakan", 3.048000000000000E-01, "m","L", "1.0")})
        area.update({"balita": UBASE.UBASE("Philippine", "balita", 2.795000000000000E+03, "m2","L2", "1.0")})
        mass.update({"catty": UBASE.UBASE("Philippine", "catty", 6.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"kaban": UBASE.UBASE("Philippine", "kaban", 9.990000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-talampakan": UBASE.UBASE("Philippine", "cubic-talampakan", 2.831684659200000E-02, "m3","L3", "1.0")})
        self._map.update({"Philippine": BaseSystem.BaseSystem("Philippine", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"stopa(new)": UBASE.UBASE("Polish", "stopa(new)", 2.880000000000000E-01, "m","L", "1.0")})
        length.update({"stopa(Warsaw)": UBASE.UBASE("Polish", "stopa(Warsaw)", 2.978000000000000E-01, "m","L", "1.0")})
        length.update({"stopa(Cracow)": UBASE.UBASE("Polish", "stopa(Cracow)", 2.356400000000000E-01, "m","L", "1.0")})
        area.update({"square-stopa(new)": UBASE.UBASE("Polish", "square-stopa(new)", 8.294400000000000E-02, "m2","L2", "1.0")})
        area.update({"square-stopa(Warsaw)": UBASE.UBASE("Polish", "square-stopa(Warsaw)", 8.868484000000000E-02, "m2","L2", "1.0")})
        area.update({"square-stopa(Cracow)": UBASE.UBASE("Polish", "square-stopa(Cracow)", 5.552620960000000E-02, "m2","L2", "1.0")})
        mass.update({"funt": UBASE.UBASE("Polish", "funt", 4.055040000000000E-01, "kg","M", "1.0")})
        liquid.update({"kwarta": UBASE.UBASE("Polish", "kwarta", 1.000000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-stopa": UBASE.UBASE("Polish", "cubic-stopa", 2.388787200000000E-02, "m3","L3", "1.0")})
        self._map.update({"Polish": BaseSystem.BaseSystem("Polish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pe": UBASE.UBASE("Portuguese", "pe", 3.285000000000000E-01, "m","L", "1.0")})
        area.update({"square-vera": UBASE.UBASE("Portuguese", "square-vera", 1.199025000000000E+00, "m2","L2", "1.0")})
        mass.update({"libra": UBASE.UBASE("Portuguese", "libra", 4.590000000000000E-01, "kg","M", "1.0")})
        liquid.update({"almude": UBASE.UBASE("Portuguese", "almude", 1.650000000000000E-02, "m3","L3", "1.0")})
        dry.update({"fanga": UBASE.UBASE("Portuguese", "fanga", 5.400000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Portuguese": BaseSystem.BaseSystem("Portuguese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        area.update({"cuerda": UBASE.UBASE("Puerto-Rican", "cuerda", 3.930395625000000E+03, "m2","L2", "1.0")})
        self._map.update({"Puerto-Rican": BaseSystem.BaseSystem("Puerto-Rican", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pes(common)": UBASE.UBASE("Roman", "pes(common)", 2.944000000000000E-01, "m","L", "1.0")})
        length.update({"pes(1st-legal)": UBASE.UBASE("Roman", "pes(1st-legal)", 2.962000000000000E-01, "m","L", "1.0")})
        length.update({"pes(2nd-legal)": UBASE.UBASE("Roman", "pes(2nd-legal)", 2.967000000000000E-01, "m","L", "1.0")})
        length.update({"pes(Druisian)": UBASE.UBASE("Roman", "pes(Druisian)", 3.196000000000000E-01, "m","L", "1.0")})
        area.update({"quadratus(common)": UBASE.UBASE("Roman", "quadratus(common)", 8.667136000000000E-02, "m2","L2", "1.0")})
        area.update({"quadratus(1st-legal)": UBASE.UBASE("Roman", "quadratus(1st-legal)", 8.773444000000000E-02, "m2","L2", "1.0")})
        area.update({"quadratus(2nd-legal)": UBASE.UBASE("Roman", "quadratus(2nd-legal)", 8.803089000000000E-02, "m2","L2", "1.0")})
        area.update({"quadratus(Druisian)": UBASE.UBASE("Roman", "quadratus(Druisian)", 1.021441600000000E-01, "m2","L2", "1.0")})
        mass.update({"uncia": UBASE.UBASE("Roman", "uncia", 2.725000000000000E-02, "kg","M", "1.0")})
        liquid.update({"sextarius": UBASE.UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3","L3", "1.0")})
        dry.update({"modius": UBASE.UBASE("Roman", "modius", 8.788480000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Roman": BaseSystem.BaseSystem("Roman", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"halibiu": UBASE.UBASE("Romanian", "halibiu", 7.010000000000000E-01, "m","L", "1.0")})
        length.update({"palma": UBASE.UBASE("Romanian", "palma", 2.500000000000000E-01, "m","L", "1.0")})
        area.update({"feredela": UBASE.UBASE("Romanian", "feredela", 1.250000000000000E+00, "m2","L2", "1.0")})
        mass.update({"cantar": UBASE.UBASE("Romanian", "cantar", 5.600000000000000E+01, "kg","M", "1.0")})
        mass.update({"font": UBASE.UBASE("Romanian", "font", 5.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"viacka": UBASE.UBASE("Romanian", "viacka", 1.415000000000000E-02, "m3","L3", "1.0")})
        liquid.update({"litra": UBASE.UBASE("Romanian", "litra", 2.500000000000000E-04, "m3","L3", "1.0")})
        dry.update({"dimerla": UBASE.UBASE("Romanian", "dimerla", 2.460000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Romanian": BaseSystem.BaseSystem("Romanian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foute": UBASE.UBASE("Russian", "foute", 3.048000000000000E-01, "m","L", "1.0")})
        mass.update({"funt": UBASE.UBASE("Russian", "funt", 4.095171792456690E-01, "kg","M", "1.0")})
        mass.update({"doli": UBASE.UBASE("Russian", "doli", 4.443494030000000E-05, "kg","M", "1.0")})
        liquid.update({"vedro": UBASE.UBASE("Russian", "vedro", 1.229941000000000E-02, "m3","L3", "1.0")})
        dry.update({"garnetz": UBASE.UBASE("Russian", "garnetz", 3.279842666666670E-03, "m3","L3", "1.0")})
        self._map.update({"Russian": BaseSystem.BaseSystem("Russian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Salvadoran", "vara", 8.128000000000000E-01, "m","L", "1.0")})
        area.update({"square-vara": UBASE.UBASE("Salvadoran", "square-vara", 6.606438400000000E-01, "m2","L2", "1.0")})
        mass.update({"fanega": UBASE.UBASE("Salvadoran", "fanega", 9.200000000000000E+01, "kg","M", "1.0")})
        liquid.update({"botella(nominal)": UBASE.UBASE("Salvadoran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(min)": UBASE.UBASE("Salvadoran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"botella(max)": UBASE.UBASE("Salvadoran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Salvadoran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0")})
        self._map.update({"Salvadoran": BaseSystem.BaseSystem("Salvadoran", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"farsakh": UBASE.UBASE("Saudi-Arabian", "farsakh", 4.830000000000000E+03, "m","L", "1.0")})
        area.update({"square-covid": UBASE.UBASE("Saudi-Arabian", "square-covid", 2.323240000000000E-01, "m2","L2", "1.0")})
        mass.update({"maund": UBASE.UBASE("Saudi-Arabian", "maund", 1.350000000000000E+00, "kg","M", "1.0")})
        liquid.update({"nusfiah": UBASE.UBASE("Saudi-Arabian", "nusfiah", 9.500000000000000E-04, "m3","L3", "1.0")})
        dry.update({"teman": UBASE.UBASE("Saudi-Arabian", "teman", 8.500000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Saudi-Arabian": BaseSystem.BaseSystem("Saudi-Arabian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"foot(traditional)": UBASE.UBASE("Scottish", "foot(traditional)", 3.064460845920000E-01, "m","L", "1.0")})
        length.update({"foot": UBASE.UBASE("Scottish", "foot", 3.064500000000000E-01, "m","L", "1.0")})
        area.update({"square-foot": UBASE.UBASE("Scottish", "square-foot", 9.390920276176720E-02, "m2","L2", "1.0")})
        mass.update({"pound": UBASE.UBASE("Scottish", "pound", 6.168856232000000E-01, "kg","M", "1.0")})
        liquid.update({"gallon": UBASE.UBASE("Scottish", "gallon", 1.355590372684800E-02, "m3","L3", "1.0")})
        liquid.update({"jug": UBASE.UBASE("Scottish", "jug", 1.694918130000000E-03, "m3","L3", "1.0")})
        dry.update({"lippy(oat-barley-malt)": UBASE.UBASE("Scottish", "lippy(oat-barley-malt)", 3.283066337080000E-03, "m3","L3", "1.0")})
        dry.update({"lippy(wheat-peas-beans-rice-salt)": UBASE.UBASE("Scottish", "lippy(wheat-peas-beans-rice-salt)", 2.250484660312000E-03, "m3","L3", "1.0")})
        self._map.update({"Scottish": BaseSystem.BaseSystem("Scottish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"top": UBASE.UBASE("Somalian", "top", 3.920000000000000E+00, "m","L", "1.0")})
        area.update({"darat": UBASE.UBASE("Somalian", "darat", 8.000000000000000E+03, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Somalian", "rottolo", 4.480000000000000E-01, "kg","M", "1.0")})
        liquid.update({"chela": UBASE.UBASE("Somalian", "chela", 1.359000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-top": UBASE.UBASE("Somalian", "cubic-top", 6.023628800000000E+01, "m3","L3", "1.0")})
        self._map.update({"Somalian": BaseSystem.BaseSystem("Somalian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Spanish", "vara", 8.359050000000000E-01, "m","L", "1.0")})
        area.update({"square-vara": UBASE.UBASE("Spanish", "square-vara", 6.987371690250000E-01, "m2","L2", "1.0")})
        mass.update({"libra": UBASE.UBASE("Spanish", "libra", 4.600930000000000E-01, "kg","M", "1.0")})
        liquid.update({"arroba(water)": UBASE.UBASE("Spanish", "arroba(water)", 1.564316200000000E-02, "m3","L3", "1.0")})
        liquid.update({"arroba(wine)": UBASE.UBASE("Spanish", "arroba(wine)", 1.613300000000000E-02, "m3","L3", "1.0")})
        liquid.update({"arroba(oil)": UBASE.UBASE("Spanish", "arroba(oil)", 1.256300000000000E-02, "m3","L3", "1.0")})
        dry.update({"fanega": UBASE.UBASE("Spanish", "fanega", 5.550100000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Spanish": BaseSystem.BaseSystem("Spanish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fot": UBASE.UBASE("Swedish", "fot", 2.969000000000000E-01, "m","L", "1.0")})
        area.update({"kvadratfot": UBASE.UBASE("Swedish", "kvadratfot", 8.814961000000000E-02, "m2","L2", "1.0")})
        mass.update({"skalpund": UBASE.UBASE("Swedish", "skalpund", 4.250797024000000E-01, "kg","M", "1.0")})
        liquid.update({"kanna": UBASE.UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0")})
        dry.update({"kanna": UBASE.UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0")})
        self._map.update({"Swedish": BaseSystem.BaseSystem("Swedish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"fuss": UBASE.UBASE("Swiss", "fuss", 3.000000000000000E-01, "m","L", "1.0")})
        length.update({"douzieme": UBASE.UBASE("Swiss", "douzieme", 1.880000000000000E-04, "m","L", "1.0")})
        area.update({"arpent": UBASE.UBASE("Swiss", "arpent", 3.600000000000000E+01, "m2","L2", "1.0")})
        mass.update({"livre": UBASE.UBASE("Swiss", "livre", 5.000000000000000E-01, "kg","M", "1.0")})
        mass.update({"livre(apothecary)": UBASE.UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg","M", "1.0")})
        liquid.update({"pot": UBASE.UBASE("Swiss", "pot", 1.500000000000000E-03, "m3","L3", "1.0")})
        dry.update({"emine": UBASE.UBASE("Swiss", "emine", 1.500000000000000E-02, "m3","L3", "1.0")})
        self._map.update({"Swiss": BaseSystem.BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Syrian", "pic", 5.820000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Syrian", "square-pic", 3.387240000000000E-01, "m2","L2", "1.0")})
        mass.update({"rottolo": UBASE.UBASE("Syrian", "rottolo", 1.785000000000000E+00, "kg","M", "1.0")})
        liquid.update({"rotl": UBASE.UBASE("Syrian", "rotl", 3.200000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Syrian", "cubic-pic", 1.971373680000000E-01, "m3","L3", "1.0")})
        self._map.update({"Syrian": BaseSystem.BaseSystem("Syrian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"wah": UBASE.UBASE("Thai", "wah", 2.000000000000000E+00, "m","L", "1.0")})
        area.update({"square-wah": UBASE.UBASE("Thai", "square-wah", 4.000000000000000E+00, "m2","L2", "1.0")})
        mass.update({"tchang": UBASE.UBASE("Thai", "tchang", 1.200000000000000E+00, "kg","M", "1.0")})
        liquid.update({"tanan(nomial)": UBASE.UBASE("Thai", "tanan(nomial)", 1.000000000000000E-03, "m3","L3", "1.0")})
        liquid.update({"tanan(min)": UBASE.UBASE("Thai", "tanan(min)", 9.000000000000000E-04, "m3","L3", "1.0")})
        liquid.update({"tanan(max)": UBASE.UBASE("Thai", "tanan(max)", 1.200000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-wah": UBASE.UBASE("Thai", "cubic-wah", 8.000000000000000E+00, "m3","L3", "1.0")})
        self._map.update({"Thai": BaseSystem.BaseSystem("Thai", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic(Tunisian)": UBASE.UBASE("Tunisian", "pic(Tunisian)", 5.625000000000000E-01, "m","L", "1.0")})
        length.update({"pic(Endezian)": UBASE.UBASE("Tunisian", "pic(Endezian)", 6.730000000000000E-01, "m","L", "1.0")})
        length.update({"pic(Arabic)": UBASE.UBASE("Tunisian", "pic(Arabic)", 4.880000000000000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Tunisian", "square-pic", 3.164062500000000E-01, "m2","L2", "1.0")})
        mass.update({"uckir": UBASE.UBASE("Tunisian", "uckir", 3.149500000000000E-02, "kg","M", "1.0")})
        liquid.update({"cafisso": UBASE.UBASE("Tunisian", "cafisso", 4.960000000000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Tunisian", "cubic-pic", 1.779785156250000E-01, "m3","L3", "1.0")})
        self._map.update({"Tunisian": BaseSystem.BaseSystem("Tunisian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pic": UBASE.UBASE("Turkish", "pic", 7.553972464870000E-01, "m","L", "1.0")})
        area.update({"square-pic": UBASE.UBASE("Turkish", "square-pic", 5.706250000001410E-01, "m2","L2", "1.0")})
        mass.update({"oka": UBASE.UBASE("Turkish", "oka", 1.283000000000000E+00, "kg","M", "1.0")})
        liquid.update({"cubic-zira": UBASE.UBASE("Turkish", "cubic-zira", 1.000000000000000E+00, "m3","L3", "1.0")})
        liquid.update({"fortin": UBASE.UBASE("Turkish", "fortin", 4.000000000000000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-pic": UBASE.UBASE("Turkish", "cubic-pic", 4.310485537767510E-01, "m3","L3", "1.0")})
        self._map.update({"Turkish": BaseSystem.BaseSystem("Turkish", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"hasch/altschin": UBASE.UBASE("Turkmenian", "hasch/altschin", 7.112000000000000E-01, "m","L", "1.0")})
        area.update({"square-hasch": UBASE.UBASE("Turkmenian", "square-hasch", 5.058054400000000E-01, "m2","L2", "1.0")})
        mass.update({"batman(nomial)": UBASE.UBASE("Turkmenian", "batman(nomial)", 1.265000000000000E+02, "kg","M", "1.0")})
        mass.update({"batman(min)": UBASE.UBASE("Turkmenian", "batman(min)", 1.250000000000000E+02, "kg","M", "1.0")})
        mass.update({"batman(max)": UBASE.UBASE("Turkmenian", "batman(max)", 1.280000000000000E+02, "kg","M", "1.0")})
        liquid.update({"cubic-hasch": UBASE.UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-hasch": UBASE.UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0")})
        self._map.update({"Turkmenian": BaseSystem.BaseSystem("Turkmenian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"vara": UBASE.UBASE("Venezuelan", "vara", 8.000000000000000E-01, "m","L", "1.0")})
        area.update({"square-vara": UBASE.UBASE("Venezuelan", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0")})
        mass.update({"libbra": UBASE.UBASE("Venezuelan", "libbra", 5.000000000000000E-01, "kg","M", "1.0")})
        liquid.update({"arroba": UBASE.UBASE("Venezuelan", "arroba", 1.613700000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-vara": UBASE.UBASE("Venezuelan", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0")})
        self._map.update({"Venezuelan": BaseSystem.BaseSystem("Venezuelan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"stopa": UBASE.UBASE("Yugoslavian", "stopa", 3.160000000000000E-01, "m","L", "1.0")})
        area.update({"square-stopa": UBASE.UBASE("Yugoslavian", "square-stopa", 9.985600000000000E-02, "m2","L2", "1.0")})
        mass.update({"oka": UBASE.UBASE("Yugoslavian", "oka", 1.280000000000000E+00, "kg","M", "1.0")})
        liquid.update({"cubic-stopa": UBASE.UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-stopa": UBASE.UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0")})
        self._map.update({"Yugoslavian": BaseSystem.BaseSystem("Yugoslavian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"cape-foot": UBASE.UBASE("South-African", "cape-foot", 3.148580000000000E-01, "m","L", "1.0")})
        length.update({"rijnlandse-voet": UBASE.UBASE("South-African", "rijnlandse-voet", 3.139440000000000E-01, "m","L", "1.0")})
        area.update({"morgen": UBASE.UBASE("South-African", "morgen", 8.565320000000000E+03, "m2","L2", "1.0")})
        mass.update({"pond": UBASE.UBASE("South-African", "pond", 4.940903200000000E-01, "kg","M", "1.0")})
        liquid.update({"kanne": UBASE.UBASE("South-African", "kanne", 1.329000000000000E-03, "m3","L3", "1.0")})
        liquid.update({"firkin": UBASE.UBASE("South-African", "firkin", 4.091482800000000E-02, "m3","L3", "1.0")})
        dry.update({"schepel": UBASE.UBASE("South-African", "schepel", 2.727500000000000E-02, "m3","L3", "1.0")})
        dry.update({"gantang": UBASE.UBASE("South-African", "gantang", 9.200000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"South-African": BaseSystem.BaseSystem("South-African", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        mass.update({"catty": UBASE.UBASE("Far-East", "catty", 6.048000000000000E-01, "kg","M", "1.0")})
        self._map.update({"Far-East": BaseSystem.BaseSystem("Far-East", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pik": UBASE.UBASE("East-Med", "pik", 7.112000000000000E-01, "m","L", "1.0")})
        length.update({"arshin": UBASE.UBASE("East-Med", "arshin", 7.112000000000000E-01, "m","L", "1.0")})
        area.update({"square-pik": UBASE.UBASE("East-Med", "square-pik", 5.058054400000000E-01, "m2","L2", "1.0")})
        area.update({"square-arshin": UBASE.UBASE("East-Med", "square-arshin", 5.058054400000000E-01, "m2","L2", "1.0")})
        mass.update({"oka": UBASE.UBASE("East-Med", "oka", 1.270058636000000E+00, "kg","M", "1.0")})
        liquid.update({"cubic-pik": UBASE.UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0")})
        liquid.update({"krina": UBASE.UBASE("East-Med", "krina", 2.000000000000000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-pik": UBASE.UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0")})
        dry.update({"cubic-arshin": UBASE.UBASE("East-Med", "cubic-arshin", 3.597288289280000E-01, "m3","L3", "1.0")})
        self._map.update({"East-Med": BaseSystem.BaseSystem("East-Med", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"taung": UBASE.UBASE("Myanmar", "taung", 4.572000000000000E-01, "m","L", "1.0")})
        area.update({"square-taung": UBASE.UBASE("Myanmar", "square-taung", 2.090318400000000E-01, "m2","L2", "1.0")})
        mass.update({"aseittha": UBASE.UBASE("Myanmar", "aseittha", 4.082330000000000E-01, "kg","M", "1.0")})
        liquid.update({"hkwet": UBASE.UBASE("Myanmar", "hkwet", 1.278590000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-taung": UBASE.UBASE("Myanmar", "cubic-taung", 9.556935724800000E-02, "m3","L3", "1.0")})
        self._map.update({"Myanmar": BaseSystem.BaseSystem("Myanmar", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"palf": UBASE.UBASE("Welsh", "palf", 3.048000000000000E-01, "m","L", "1.0")})
        area.update({"erw(Venedotian)": UBASE.UBASE("Welsh", "erw(Venedotian)", 1.426990694400000E+03, "m2","L2", "1.0")})
        area.update({"erw(Dimetian)": UBASE.UBASE("Welsh", "erw(Dimetian)", 8.561944166400000E+02, "m2","L2", "1.0")})
        mass.update({"pwys": UBASE.UBASE("Welsh", "pwys", 4.535923380000000E-01, "kg","M", "1.0")})
        liquid.update({"hestawr": UBASE.UBASE("Welsh", "hestawr", 7.047814033376000E-02, "m3","L3", "1.0")})
        dry.update({"cubic-palf": UBASE.UBASE("Welsh", "cubic-palf", 2.831684659200000E-02, "m3","L3", "1.0")})
        self._map.update({"Welsh": BaseSystem.BaseSystem("Welsh", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"paramaanuwa": UBASE.UBASE("Sri-Lankan", "paramaanuwa", 3.306670000000000E-08, "m","L", "1.0")})
        area.update({"laaha": UBASE.UBASE("Sri-Lankan", "laaha", 4.598700000000000E+00, "m2","L2", "1.0")})
        mass.update({"gunja": UBASE.UBASE("Sri-Lankan", "gunja", 1.200000000000000E-04, "kg","M", "1.0")})
        liquid.update({"seer": UBASE.UBASE("Sri-Lankan", "seer", 1.135623535200000E-03, "m3","L3", "1.0")})
        dry.update({"seer": UBASE.UBASE("Sri-Lankan", "seer", 7.062500000000000E-04, "m3","L3", "1.0")})
        self._map.update({"Sri-Lankan": BaseSystem.BaseSystem("Sri-Lankan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"rahf": UBASE.UBASE("Malagasy", "rahf", 1.180084000000000E+00, "m","L", "1.0")})
        area.update({"square-rahf": UBASE.UBASE("Malagasy", "square-rahf", 1.392598247056000E+00, "m2","L2", "1.0")})
        mass.update({"nanki": UBASE.UBASE("Malagasy", "nanki", 6.479891000000000E-04, "kg","M", "1.0")})
        liquid.update({"cubic-rahf": UBASE.UBASE("Malagasy", "cubic-rahf", 1.643382909778830E+00, "m3","L3", "1.0")})
        dry.update({"bambou": UBASE.UBASE("Malagasy", "bambou", 2.001579185478780E-03, "m3","L3", "1.0")})
        self._map.update({"Malagasy": BaseSystem.BaseSystem("Malagasy", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"ohra": UBASE.UBASE("Tanzanian", "ohra", 5.709920000000000E-01, "m","L", "1.0")})
        area.update({"square-ohra": UBASE.UBASE("Tanzanian", "square-ohra", 3.260318640640000E-01, "m2","L2", "1.0")})
        mass.update({"mane": UBASE.UBASE("Tanzanian", "mane", 9.104052458270000E-01, "kg","M", "1.0")})
        mass.update({"bazla": UBASE.UBASE("Tanzanian", "bazla", 1.552465245562000E+01, "kg","M", "1.0")})
        mass.update({"franzella": UBASE.UBASE("Tanzanian", "franzella", 1.600373671681400E+01, "kg","M", "1.0")})
        liquid.update({"cubic-ohra": UBASE.UBASE("Tanzanian", "cubic-ohra", 1.861615861256320E-01, "m3","L3", "1.0")})
        dry.update({"djezla": UBASE.UBASE("Tanzanian", "djezla", 2.574214075690580E-01, "m3","L3", "1.0")})
        self._map.update({"Tanzanian": BaseSystem.BaseSystem("Tanzanian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"gaz-i-shah": UBASE.UBASE("Afghan", "gaz-i-shah", 1.065000000000000E+00, "m","L", "1.0")})
        area.update({"jareeb": UBASE.UBASE("Afghan", "jareeb", 2.000000000000000E+03, "m2","L2", "1.0")})
        mass.update({"nakhud": UBASE.UBASE("Afghan", "nakhud", 1.900000000000000E-04, "kg","M", "1.0")})
        mass.update({"seer": UBASE.UBASE("Afghan", "seer", 7.066000000000000E+00, "kg","M", "1.0")})
        liquid.update({"cubic-gaz-i-shah": UBASE.UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0")})
        dry.update({"cubic-gaz-i-shah": UBASE.UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0")})
        self._map.update({"Afghan": BaseSystem.BaseSystem("Afghan", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"cheok": UBASE.UBASE("Korean", "cheok", 3.030303030303030E-01, "m","L", "1.0")})
        area.update({"pyeong": UBASE.UBASE("Korean", "pyeong", 3.305785123966940E+00, "m2","L2", "1.0")})
        mass.update({"gwan": UBASE.UBASE("Korean", "gwan", 3.750000000000000E+00, "kg","M", "1.0")})
        liquid.update({"doe": UBASE.UBASE("Korean", "doe", 1.803906836964690E-03, "m3","L3", "1.0")})
        dry.update({"cubic-cheok": UBASE.UBASE("Korean", "cubic-cheok", 2.782647410746580E-02, "m3","L3", "1.0")})
        self._map.update({"Korean": BaseSystem.BaseSystem("Korean", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"muscat": UBASE.UBASE("Omani", "muscat", 9.939020000000000E-01, "m","L", "1.0")})
        area.update({"square-muscat": UBASE.UBASE("Omani", "square-muscat", 9.878411856040000E-01, "m2","L2", "1.0")})
        mass.update({"maund": UBASE.UBASE("Omani", "maund", 3.968933237500000E+00, "kg","M", "1.0")})
        liquid.update({"ferren": UBASE.UBASE("Omani", "ferren", 3.000090255291360E-02, "m3","L3", "1.0")})
        dry.update({"cubic-muscat": UBASE.UBASE("Omani", "cubic-muscat", 9.818173300541870E-01, "m3","L3", "1.0")})
        self._map.update({"Omani": BaseSystem.BaseSystem("Omani", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"karam": UBASE.UBASE("Pakistani", "karam", 1.676400000000000E+00, "m","L", "1.0")})
        area.update({"square-karam": UBASE.UBASE("Pakistani", "square-karam", 2.810316960000000E+00, "m2","L2", "1.0")})
        mass.update({"tola": UBASE.UBASE("Pakistani", "tola", 1.166375000000000E-02, "kg","M", "1.0")})
        liquid.update({"cubic-karam": UBASE.UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0")})
        dry.update({"cubic-karam": UBASE.UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0")})
        self._map.update({"Pakistani": BaseSystem.BaseSystem("Pakistani", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"chhioh": UBASE.UBASE("Taiwanese", "chhioh", 3.030303030303030E-01, "m","L", "1.0")})
        area.update({"pe": UBASE.UBASE("Taiwanese", "pe", 3.305785123966940E+00, "m2","L2", "1.0")})
        mass.update({"nu": UBASE.UBASE("Taiwanese", "nu", 3.750000000000000E-02, "kg","M", "1.0")})
        liquid.update({"liter": UBASE.UBASE("Taiwanese", "liter", 1.000000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-chhioh": UBASE.UBASE("Taiwanese", "cubic-chhioh", 2.782647410746580E-02, "m3","L3", "1.0")})
        self._map.update({"Taiwanese": BaseSystem.BaseSystem("Taiwanese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"yaar": UBASE.UBASE("Tamil", "yaar", 9.333123317760000E-01, "m","L", "1.0")})
        area.update({"cent": UBASE.UBASE("Tamil", "cent", 4.046856422400000E+01, "m2","L2", "1.0")})
        mass.update({"palam": UBASE.UBASE("Tamil", "palam", 4.800000000000000E-02, "kg","M", "1.0")})
        liquid.update({"padi": UBASE.UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0")})
        dry.update({"padi": UBASE.UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0")})
        self._map.update({"Tamil": BaseSystem.BaseSystem("Tamil", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"angul": UBASE.UBASE("Nepalese", "angul", 1.905000000000000E-02, "m","L", "1.0")})
        area.update({"dam": UBASE.UBASE("Nepalese", "dam", 1.987254090000000E+00, "m2","L2", "1.0")})
        area.update({"dhur": UBASE.UBASE("Nepalese", "dhur", 1.693157904000000E+01, "m2","L2", "1.0")})
        mass.update({"tola": UBASE.UBASE("Nepalese", "tola", 1.166000000000000E-02, "kg","M", "1.0")})
        mass.update({"pau": UBASE.UBASE("Nepalese", "pau", 1.990000000000000E-01, "kg","M", "1.0")})
        liquid.update({"pathi": UBASE.UBASE("Nepalese", "pathi", 4.545960000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-angul": UBASE.UBASE("Nepalese", "cubic-angul", 6.913292625000000E-06, "m3","L3", "1.0")})
        self._map.update({"Nepalese": BaseSystem.BaseSystem("Nepalese", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"pous": UBASE.UBASE("Byzantine", "pous", 3.085000000000000E-01, "m","L", "1.0")})
        area.update({"pous": UBASE.UBASE("Byzantine", "pous", 9.517225000000000E-02, "m2","L2", "1.0")})
        mass.update({"ogkia": UBASE.UBASE("Byzantine", "ogkia", 2.725000000000000E-02, "kg","M", "1.0")})
        liquid.update({"xestes": UBASE.UBASE("Byzantine", "xestes", 5.492800000000000E-04, "m3","L3", "1.0")})
        dry.update({"cubic-pous": UBASE.UBASE("Byzantine", "cubic-pous", 2.936063912500000E-02, "m3","L3", "1.0")})
        self._map.update({"Byzantine": BaseSystem.BaseSystem("Byzantine", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"sajin": UBASE.UBASE("Tatar", "sajin", 2.133600000000000E+00, "m","L", "1.0")})
        area.update({"quadrat-sajin": UBASE.UBASE("Tatar", "quadrat-sajin", 4.552248960000000E+00, "m2","L2", "1.0")})
        mass.update({"qadaq": UBASE.UBASE("Tatar", "qadaq", 4.095000000000000E-01, "kg","M", "1.0")})
        liquid.update({"garnets": UBASE.UBASE("Tatar", "garnets", 3.279733333333330E-03, "m3","L3", "1.0")})
        dry.update({"cubic-qadaq": UBASE.UBASE("Tatar", "cubic-qadaq", 6.866915737500000E-02, "m3","L3", "1.0")})
        self._map.update({"Tatar": BaseSystem.BaseSystem("Tatar", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


        length.update({"kus": UBASE.UBASE("Sumerian", "kus", 5.186000000000000E-01, "m","L", "1.0")})
        area.update({"gin": UBASE.UBASE("Sumerian", "gin", 2.689459600000000E-01, "m2","L2", "1.0")})
        mass.update({"mana": UBASE.UBASE("Sumerian", "mana", 5.040000000000000E-01, "kg","M", "1.0")})
        liquid.update({"sila": UBASE.UBASE("Sumerian", "sila", 1.000000000000000E-03, "m3","L3", "1.0")})
        dry.update({"cubic-kus": UBASE.UBASE("Sumerian", "cubic-kus", 1.394753748560000E-01, "m3","L3", "1.0")})
        self._map.update({"Sumerian": BaseSystem.BaseSystem("Sumerian", length, area, mass, liquid, dry, "1.0")})

        length.clear()
        area.clear()
        mass.clear()
        liquid.clear()
        dry.clear()


 #EOF
