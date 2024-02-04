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
# File Molarity.py
#
# Units for Molarity
#
# Class for Molarity units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Molarity(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Molarity.__instance == None:
            Molarity.__instance = Molarity()
        return Molarity.__instance

    def __new__(self):
       if Molarity.__instance == None:
           Molarity.__instance = super(Molarity, self).__new__(self)

       return  Molarity.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"INT[chlorometric-degree]": UBASE.UBASE("INT", "chlorometric-degree", 4.462025316455700E+01, "mol/m3", "N/L3", "1.0")})
        unit.update({"INT[oChl]": UBASE.UBASE("INT", "chlorometric-degree", 4.462025316455700E+01, "mol/m3", "N/L3", "1.0")})
        unit.update({"INT[molar]": UBASE.UBASE("INT", "molar", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"INT[M]": UBASE.UBASE("INT", "molar", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[amagat(atm)]": UBASE.UBASE("Scientific", "amagat(atm)", 4.461498837499770E+01, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[amagat(bar)]": UBASE.UBASE("Scientific", "amagat(bar)", 4.403157007154970E+01, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[demal]": UBASE.UBASE("Scientific", "demal", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[D]": UBASE.UBASE("Scientific", "demal", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-centicubic-decimeter]": UBASE.UBASE("Scientific", "mole-per-centicubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/dm3]": UBASE.UBASE("Scientific", "mole-per-centicubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-centicubic-meter]": UBASE.UBASE("Scientific", "mole-per-centicubic-meter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/cm3]": UBASE.UBASE("Scientific", "mole-per-centicubic-meter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-meter]": UBASE.UBASE("Scientific", "mole-per-cubic-meter", 1.000000000000000E+00, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/m3]": UBASE.UBASE("Scientific", "mole-per-cubic-meter", 1.000000000000000E+00, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-decimeter]": UBASE.UBASE("Scientific", "mole-per-cubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-centimeter]": UBASE.UBASE("Scientific", "mole-per-cubic-centimeter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-millimeter]": UBASE.UBASE("Scientific", "mole-per-cubic-millimeter", 1.000000000000000E+09, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/mm3]": UBASE.UBASE("Scientific", "mole-per-cubic-millimeter", 1.000000000000000E+09, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-yard]": UBASE.UBASE("Scientific", "mole-per-cubic-yard", 1.307950619314390E+00, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/yd3]": UBASE.UBASE("Scientific", "mole-per-cubic-yard", 1.307950619314390E+00, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-foot]": UBASE.UBASE("Scientific", "mole-per-cubic-foot", 3.531466672148860E+01, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/ft3]": UBASE.UBASE("Scientific", "mole-per-cubic-foot", 3.531466672148860E+01, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-cubic-in]": UBASE.UBASE("Scientific", "mole-per-cubic-in", 6.102374409473230E+04, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/in3]": UBASE.UBASE("Scientific", "mole-per-cubic-in", 6.102374409473230E+04, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mole-per-liter]": UBASE.UBASE("Scientific", "mole-per-liter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"Scientific[mol/l]": UBASE.UBASE("Scientific", "mole-per-liter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"US[american-run]": UBASE.UBASE("US", "american-run", 3.225451080669630E+03, "mol/m3", "N/L3", "1.0")})
        unit.update({"US[Ar]": UBASE.UBASE("US", "american-run", 3.225451080669630E+03, "mol/m3", "N/L3", "1.0")})
        self._map.update({"molarity": BaseSystem.BaseSystem("molarity", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[gibbs]": UBASE.UBASE("Scientific", "gibbs", 1.000000000000000E-06, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole-per-square-meter]": UBASE.UBASE("Scientific", "mole-per-square-meter", 1.000000000000000E+00, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole/m2]": UBASE.UBASE("Scientific", "mole-per-square-meter", 1.000000000000000E+00, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole-per-square-centimeter]": UBASE.UBASE("Scientific", "mole-per-square-centimeter", 1.000000000000000E+04, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole/cm2]": UBASE.UBASE("Scientific", "mole-per-square-centimeter", 1.000000000000000E+04, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole-per-square-millimeter]": UBASE.UBASE("Scientific", "mole-per-square-millimeter", 1.000000000000000E+06, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole/mm2]": UBASE.UBASE("Scientific", "mole-per-square-millimeter", 1.000000000000000E+06, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole-per-square-yard]": UBASE.UBASE("Scientific", "mole-per-square-yard", 1.195990046301080E+00, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole/yd2]": UBASE.UBASE("Scientific", "mole-per-square-yard", 1.195990046301080E+00, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole-per-square-foot]": UBASE.UBASE("Scientific", "mole-per-square-foot", 1.076391041670970E+01, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole/ft2]": UBASE.UBASE("Scientific", "mole-per-square-foot", 1.076391041670970E+01, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole-per-square-inch]": UBASE.UBASE("Scientific", "mole-per-square-inch", 1.550003100006200E+03, "mol/m2", "N/L2", "1.0")})
        unit.update({"Scientific[mole/in2]": UBASE.UBASE("Scientific", "mole-per-square-inch", 1.550003100006200E+03, "mol/m2", "N/L2", "1.0")})
        self._map.update({"surfaceMolarity": BaseSystem.BaseSystem("surfaceMolarity", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[amagat(atm)]": UBASE.UBASE("Scientific", "amagat(atm)", 2.241399216771740E-02, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[amagat(bar)]": UBASE.UBASE("Scientific", "amagat(bar)", 2.271097756393960E-02, "m3/mol", "L3/N", "1.0")})
        unit.update({"SI[cubic-meter-per-mole]": UBASE.UBASE("SI", "cubic-meter-per-mole", 1.000000000000000E+00, "m3/mol", "L3/N", "1.0")})
        unit.update({"SI[m3/mol]": UBASE.UBASE("SI", "cubic-meter-per-mole", 1.000000000000000E+00, "m3/mol", "L3/N", "1.0")})
        unit.update({"SI[cubic-centimeter-per-mole]": UBASE.UBASE("SI", "cubic-centimeter-per-mole", 1.000000000000000E-06, "m3/mol", "L3/N", "1.0")})
        unit.update({"SI[cm3/mol]": UBASE.UBASE("SI", "cubic-centimeter-per-mole", 1.000000000000000E-06, "m3/mol", "L3/N", "1.0")})
        unit.update({"SI[cubic-millimeter-per-mole]": UBASE.UBASE("SI", "cubic-millimeter-per-mole", 1.000000000000000E-09, "m3/mol", "L3/N", "1.0")})
        unit.update({"SI[mm3/mol]": UBASE.UBASE("SI", "cubic-millimeter-per-mole", 1.000000000000000E-09, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[cubic-yard-per-mole]": UBASE.UBASE("Scientific", "cubic-yard-per-mole", 7.645548579840000E-01, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[yd3/mol]": UBASE.UBASE("Scientific", "cubic-yard-per-mole", 7.645548579840000E-01, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[cubic-foot-per-mole]": UBASE.UBASE("Scientific", "cubic-foot-per-mole", 2.831684659200000E-02, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[ft3/mol]": UBASE.UBASE("Scientific", "cubic-foot-per-mole", 2.831684659200000E-02, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[cubic-inch-per-mole]": UBASE.UBASE("Scientific", "cubic-inch-per-mole", 1.638706400000000E-05, "m3/mol", "L3/N", "1.0")})
        unit.update({"Scientific[in3/mol]": UBASE.UBASE("Scientific", "cubic-inch-per-mole", 1.638706400000000E-05, "m3/mol", "L3/N", "1.0")})
        self._map.update({"molarDensity": BaseSystem.BaseSystem("molarDensity", unit, "1.0")})

        unit.clear()


        unit.update({"SI[square-meter-per-mole]": UBASE.UBASE("SI", "square-meter-per-mole", 1.000000000000000E+00, "m2/mol", "L2/N", "1.0")})
        unit.update({"SI[m2/mol]": UBASE.UBASE("SI", "square-meter-per-mole", 1.000000000000000E+00, "m2/mol", "L2/N", "1.0")})
        unit.update({"SI[square-centimeter-per-mole]": UBASE.UBASE("SI", "square-centimeter-per-mole", 1.000000000000000E-04, "m2/mol", "L2/N", "1.0")})
        unit.update({"SI[cm2/mol]": UBASE.UBASE("SI", "square-centimeter-per-mole", 1.000000000000000E-04, "m2/mol", "L2/N", "1.0")})
        unit.update({"SI[square-millimeter-per-mole]": UBASE.UBASE("SI", "square-millimeter-per-mole", 1.000000000000000E-06, "m2/mol", "L2/N", "1.0")})
        unit.update({"SI[mm2/mol]": UBASE.UBASE("SI", "square-millimeter-per-mole", 1.000000000000000E-06, "m2/mol", "L2/N", "1.0")})
        unit.update({"Scientific[square-yard-per-mole]": UBASE.UBASE("Scientific", "square-yard-per-mole", 8.361273600000000E-01, "m2/mol", "L2/N", "1.0")})
        unit.update({"Scientific[yd2/mol]": UBASE.UBASE("Scientific", "square-yard-per-mole", 8.361273600000000E-01, "m2/mol", "L2/N", "1.0")})
        unit.update({"Scientific[square-foot-per-mole]": UBASE.UBASE("Scientific", "square-foot-per-mole", 9.290304000000000E-02, "m2/mol", "L2/N", "1.0")})
        unit.update({"Scientific[ft2/mol]": UBASE.UBASE("Scientific", "square-foot-per-mole", 9.290304000000000E-02, "m2/mol", "L2/N", "1.0")})
        unit.update({"Scientific[square-inch-per-mole]": UBASE.UBASE("Scientific", "square-inch-per-mole", 6.451600000000000E-04, "m2/mol", "L2/N", "1.0")})
        unit.update({"Scientific[in2/mol]": UBASE.UBASE("Scientific", "square-inch-per-mole", 6.451600000000000E-04, "m2/mol", "L2/N", "1.0")})
        self._map.update({"molarAbsorption": BaseSystem.BaseSystem("molarAbsorption", unit, "1.0")})

        unit.clear()


        unit.update({"INT[G-vaIue(old)]": UBASE.UBASE("INT", "G-vaIue(old)", 1.036426965626220E-07, "s2.mol/kg.m2", "T2.N/M.L2", "1.0")})
        unit.update({"SI[G-value]": UBASE.UBASE("SI", "G-value", 1.000000000000000E+00, "s2.mol/kg.m2", "T2.N/M.L2", "1.0")})
        self._map.update({"radiochemicalYield": BaseSystem.BaseSystem("radiochemicalYield", unit, "1.0")})

        unit.clear()


        unit.update({"Imperial[pound-mole]": UBASE.UBASE("Imperial", "pound-mole", 4.535923700000000E-01, "mol", "N", "1.0")})
        unit.update({"Imperial[lbmol]": UBASE.UBASE("Imperial", "pound-mole", 4.535923700000000E-01, "mol", "N", "1.0")})
        unit.update({"INT[standard-cubic-foot]": UBASE.UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0")})
        unit.update({"INT[SCF]": UBASE.UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0")})
        unit.update({"INT[ft3(60oF-atm)]": UBASE.UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0")})
        unit.update({"INT[standard-cubic-meter(bar)]": UBASE.UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0")})
        unit.update({"INT[SCM(bar)]": UBASE.UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0")})
        unit.update({"INT[m3(STP-bar)]": UBASE.UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0")})
        unit.update({"Scientific[standard-cubic-meter-(atm)]": UBASE.UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0")})
        unit.update({"Scientific[SCM(atm)]": UBASE.UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0")})
        unit.update({"Scientific[m3(STP-atm)]": UBASE.UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0")})
        unit.update({"SI[mole]": UBASE.UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0")})
        unit.update({"SI[mol]": UBASE.UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0")})
        self._map.update({"quantity": BaseSystem.BaseSystem("quantity", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[international-unit]": UBASE.UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0")})
        unit.update({"Scientific[UI]": UBASE.UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0")})
        unit.update({"Scientific[IU]": UBASE.UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0")})
        unit.update({"SI[katal]": UBASE.UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0")})
        unit.update({"SI[kat]": UBASE.UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0")})
        self._map.update({"enzymaticActivity": BaseSystem.BaseSystem("enzymaticActivity", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[faraday(12C)]": UBASE.UBASE("Scientific", "faraday(12C)", 9.648530900000000E+04, "s.A/mol", "T.I/N", "1.0")})
        unit.update({"Scientific[F(12C)]": UBASE.UBASE("Scientific", "faraday(12C)", 9.648530900000000E+04, "s.A/mol", "T.I/N", "1.0")})
        unit.update({"Scientific[faraday(chemical)]": UBASE.UBASE("Scientific", "faraday(chemical)", 9.649570000000000E+04, "s.A/mol", "T.I/N", "1.0")})
        unit.update({"Scientific[F(chemical)]": UBASE.UBASE("Scientific", "faraday(chemical)", 9.649570000000000E+04, "s.A/mol", "T.I/N", "1.0")})
        unit.update({"Scientific[faraday(physical)]": UBASE.UBASE("Scientific", "faraday(physical)", 9.651290000000000E+04, "s.A/mol", "T.I/N", "1.0")})
        unit.update({"Scientific[F(physical)]": UBASE.UBASE("Scientific", "faraday(physical)", 9.651290000000000E+04, "s.A/mol", "T.I/N", "1.0")})
        self._map.update({"molarCharge": BaseSystem.BaseSystem("molarCharge", unit, "1.0")})

        unit.clear()


 #EOF
