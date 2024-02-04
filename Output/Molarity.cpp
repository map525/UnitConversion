/////////////////////////////////////////////////////////////////////////////////
//2345678901234567890123456789012345678901234567890123456789012345678901234567890
/////////////////////////////////////////////////////////////////////////////////
// PROJECT: Unit Conversion
//
// Copyright Copyright 2024 MAP
//
// Unpublished - Rights reserved under the Copyright Laws of the United States
//
/////////////////////////////////////////////////////////////////////////////////
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
//
/////////////////////////////////////////////////////////////////////////////////
//
// File Molarity.cpp
//
// Units for Molarity
//
// Class for Molarity units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Molarity.hpp"

Molarity& Molarity::Instance(void)
{
    static Molarity singleton;
    return singleton;
}

Molarity::Molarity(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["INT[chlorometric-degree]"] = UBASE("INT", "chlorometric-degree", 4.462025316455700E+01, "mol/m3", "N/L3", "1.0");
   unit["INT[oChl]"] = UBASE("INT", "chlorometric-degree", 4.462025316455700E+01, "mol/m3", "N/L3", "1.0");
   unit["INT[molar]"] = UBASE("INT", "molar", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["INT[M]"] = UBASE("INT", "molar", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[amagat(atm)]"] = UBASE("Scientific", "amagat(atm)", 4.461498837499770E+01, "mol/m3", "N/L3", "1.0");
   unit["Scientific[amagat(bar)]"] = UBASE("Scientific", "amagat(bar)", 4.403157007154970E+01, "mol/m3", "N/L3", "1.0");
   unit["Scientific[demal]"] = UBASE("Scientific", "demal", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[D]"] = UBASE("Scientific", "demal", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-centicubic-decimeter]"] = UBASE("Scientific", "mole-per-centicubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/dm3]"] = UBASE("Scientific", "mole-per-centicubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-centicubic-meter]"] = UBASE("Scientific", "mole-per-centicubic-meter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/cm3]"] = UBASE("Scientific", "mole-per-centicubic-meter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-meter]"] = UBASE("Scientific", "mole-per-cubic-meter", 1.000000000000000E+00, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/m3]"] = UBASE("Scientific", "mole-per-cubic-meter", 1.000000000000000E+00, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-decimeter]"] = UBASE("Scientific", "mole-per-cubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-centimeter]"] = UBASE("Scientific", "mole-per-cubic-centimeter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-millimeter]"] = UBASE("Scientific", "mole-per-cubic-millimeter", 1.000000000000000E+09, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/mm3]"] = UBASE("Scientific", "mole-per-cubic-millimeter", 1.000000000000000E+09, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-yard]"] = UBASE("Scientific", "mole-per-cubic-yard", 1.307950619314390E+00, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/yd3]"] = UBASE("Scientific", "mole-per-cubic-yard", 1.307950619314390E+00, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-foot]"] = UBASE("Scientific", "mole-per-cubic-foot", 3.531466672148860E+01, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/ft3]"] = UBASE("Scientific", "mole-per-cubic-foot", 3.531466672148860E+01, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-cubic-in]"] = UBASE("Scientific", "mole-per-cubic-in", 6.102374409473230E+04, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/in3]"] = UBASE("Scientific", "mole-per-cubic-in", 6.102374409473230E+04, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mole-per-liter]"] = UBASE("Scientific", "mole-per-liter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["Scientific[mol/l]"] = UBASE("Scientific", "mole-per-liter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0");
   unit["US[american-run]"] = UBASE("US", "american-run", 3.225451080669630E+03, "mol/m3", "N/L3", "1.0");
   unit["US[Ar]"] = UBASE("US", "american-run", 3.225451080669630E+03, "mol/m3", "N/L3", "1.0");
   _map["molarity"] = BaseSystem("molarity", unit, "1.0");

   unit.clear();


   unit["Scientific[gibbs]"] = UBASE("Scientific", "gibbs", 1.000000000000000E-06, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole-per-square-meter]"] = UBASE("Scientific", "mole-per-square-meter", 1.000000000000000E+00, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole/m2]"] = UBASE("Scientific", "mole-per-square-meter", 1.000000000000000E+00, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole-per-square-centimeter]"] = UBASE("Scientific", "mole-per-square-centimeter", 1.000000000000000E+04, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole/cm2]"] = UBASE("Scientific", "mole-per-square-centimeter", 1.000000000000000E+04, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole-per-square-millimeter]"] = UBASE("Scientific", "mole-per-square-millimeter", 1.000000000000000E+06, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole/mm2]"] = UBASE("Scientific", "mole-per-square-millimeter", 1.000000000000000E+06, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole-per-square-yard]"] = UBASE("Scientific", "mole-per-square-yard", 1.195990046301080E+00, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole/yd2]"] = UBASE("Scientific", "mole-per-square-yard", 1.195990046301080E+00, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole-per-square-foot]"] = UBASE("Scientific", "mole-per-square-foot", 1.076391041670970E+01, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole/ft2]"] = UBASE("Scientific", "mole-per-square-foot", 1.076391041670970E+01, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole-per-square-inch]"] = UBASE("Scientific", "mole-per-square-inch", 1.550003100006200E+03, "mol/m2", "N/L2", "1.0");
   unit["Scientific[mole/in2]"] = UBASE("Scientific", "mole-per-square-inch", 1.550003100006200E+03, "mol/m2", "N/L2", "1.0");
   _map["surfaceMolarity"] = BaseSystem("surfaceMolarity", unit, "1.0");

   unit.clear();


   unit["Scientific[amagat(atm)]"] = UBASE("Scientific", "amagat(atm)", 2.241399216771740E-02, "m3/mol", "L3/N", "1.0");
   unit["Scientific[amagat(bar)]"] = UBASE("Scientific", "amagat(bar)", 2.271097756393960E-02, "m3/mol", "L3/N", "1.0");
   unit["SI[cubic-meter-per-mole]"] = UBASE("SI", "cubic-meter-per-mole", 1.000000000000000E+00, "m3/mol", "L3/N", "1.0");
   unit["SI[m3/mol]"] = UBASE("SI", "cubic-meter-per-mole", 1.000000000000000E+00, "m3/mol", "L3/N", "1.0");
   unit["SI[cubic-centimeter-per-mole]"] = UBASE("SI", "cubic-centimeter-per-mole", 1.000000000000000E-06, "m3/mol", "L3/N", "1.0");
   unit["SI[cm3/mol]"] = UBASE("SI", "cubic-centimeter-per-mole", 1.000000000000000E-06, "m3/mol", "L3/N", "1.0");
   unit["SI[cubic-millimeter-per-mole]"] = UBASE("SI", "cubic-millimeter-per-mole", 1.000000000000000E-09, "m3/mol", "L3/N", "1.0");
   unit["SI[mm3/mol]"] = UBASE("SI", "cubic-millimeter-per-mole", 1.000000000000000E-09, "m3/mol", "L3/N", "1.0");
   unit["Scientific[cubic-yard-per-mole]"] = UBASE("Scientific", "cubic-yard-per-mole", 7.645548579840000E-01, "m3/mol", "L3/N", "1.0");
   unit["Scientific[yd3/mol]"] = UBASE("Scientific", "cubic-yard-per-mole", 7.645548579840000E-01, "m3/mol", "L3/N", "1.0");
   unit["Scientific[cubic-foot-per-mole]"] = UBASE("Scientific", "cubic-foot-per-mole", 2.831684659200000E-02, "m3/mol", "L3/N", "1.0");
   unit["Scientific[ft3/mol]"] = UBASE("Scientific", "cubic-foot-per-mole", 2.831684659200000E-02, "m3/mol", "L3/N", "1.0");
   unit["Scientific[cubic-inch-per-mole]"] = UBASE("Scientific", "cubic-inch-per-mole", 1.638706400000000E-05, "m3/mol", "L3/N", "1.0");
   unit["Scientific[in3/mol]"] = UBASE("Scientific", "cubic-inch-per-mole", 1.638706400000000E-05, "m3/mol", "L3/N", "1.0");
   _map["molarDensity"] = BaseSystem("molarDensity", unit, "1.0");

   unit.clear();


   unit["SI[square-meter-per-mole]"] = UBASE("SI", "square-meter-per-mole", 1.000000000000000E+00, "m2/mol", "L2/N", "1.0");
   unit["SI[m2/mol]"] = UBASE("SI", "square-meter-per-mole", 1.000000000000000E+00, "m2/mol", "L2/N", "1.0");
   unit["SI[square-centimeter-per-mole]"] = UBASE("SI", "square-centimeter-per-mole", 1.000000000000000E-04, "m2/mol", "L2/N", "1.0");
   unit["SI[cm2/mol]"] = UBASE("SI", "square-centimeter-per-mole", 1.000000000000000E-04, "m2/mol", "L2/N", "1.0");
   unit["SI[square-millimeter-per-mole]"] = UBASE("SI", "square-millimeter-per-mole", 1.000000000000000E-06, "m2/mol", "L2/N", "1.0");
   unit["SI[mm2/mol]"] = UBASE("SI", "square-millimeter-per-mole", 1.000000000000000E-06, "m2/mol", "L2/N", "1.0");
   unit["Scientific[square-yard-per-mole]"] = UBASE("Scientific", "square-yard-per-mole", 8.361273600000000E-01, "m2/mol", "L2/N", "1.0");
   unit["Scientific[yd2/mol]"] = UBASE("Scientific", "square-yard-per-mole", 8.361273600000000E-01, "m2/mol", "L2/N", "1.0");
   unit["Scientific[square-foot-per-mole]"] = UBASE("Scientific", "square-foot-per-mole", 9.290304000000000E-02, "m2/mol", "L2/N", "1.0");
   unit["Scientific[ft2/mol]"] = UBASE("Scientific", "square-foot-per-mole", 9.290304000000000E-02, "m2/mol", "L2/N", "1.0");
   unit["Scientific[square-inch-per-mole]"] = UBASE("Scientific", "square-inch-per-mole", 6.451600000000000E-04, "m2/mol", "L2/N", "1.0");
   unit["Scientific[in2/mol]"] = UBASE("Scientific", "square-inch-per-mole", 6.451600000000000E-04, "m2/mol", "L2/N", "1.0");
   _map["molarAbsorption"] = BaseSystem("molarAbsorption", unit, "1.0");

   unit.clear();


   unit["INT[G-vaIue(old)]"] = UBASE("INT", "G-vaIue(old)", 1.036426965626220E-07, "s2.mol/kg.m2", "T2.N/M.L2", "1.0");
   unit["SI[G-value]"] = UBASE("SI", "G-value", 1.000000000000000E+00, "s2.mol/kg.m2", "T2.N/M.L2", "1.0");
   _map["radiochemicalYield"] = BaseSystem("radiochemicalYield", unit, "1.0");

   unit.clear();


   unit["Imperial[pound-mole]"] = UBASE("Imperial", "pound-mole", 4.535923700000000E-01, "mol", "N", "1.0");
   unit["Imperial[lbmol]"] = UBASE("Imperial", "pound-mole", 4.535923700000000E-01, "mol", "N", "1.0");
   unit["INT[standard-cubic-foot]"] = UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0");
   unit["INT[SCF]"] = UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0");
   unit["INT[ft3(60oF-atm)]"] = UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0");
   unit["INT[standard-cubic-meter(bar)]"] = UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0");
   unit["INT[SCM(bar)]"] = UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0");
   unit["INT[m3(STP-bar)]"] = UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0");
   unit["Scientific[standard-cubic-meter-(atm)]"] = UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0");
   unit["Scientific[SCM(atm)]"] = UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0");
   unit["Scientific[m3(STP-atm)]"] = UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0");
   unit["SI[mole]"] = UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0");
   unit["SI[mol]"] = UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0");
   _map["quantity"] = BaseSystem("quantity", unit, "1.0");

   unit.clear();


   unit["Scientific[international-unit]"] = UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0");
   unit["Scientific[UI]"] = UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0");
   unit["Scientific[IU]"] = UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0");
   unit["SI[katal]"] = UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0");
   unit["SI[kat]"] = UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0");
   _map["enzymaticActivity"] = BaseSystem("enzymaticActivity", unit, "1.0");

   unit.clear();


   unit["Scientific[faraday(12C)]"] = UBASE("Scientific", "faraday(12C)", 9.648530900000000E+04, "s.A/mol", "T.I/N", "1.0");
   unit["Scientific[F(12C)]"] = UBASE("Scientific", "faraday(12C)", 9.648530900000000E+04, "s.A/mol", "T.I/N", "1.0");
   unit["Scientific[faraday(chemical)]"] = UBASE("Scientific", "faraday(chemical)", 9.649570000000000E+04, "s.A/mol", "T.I/N", "1.0");
   unit["Scientific[F(chemical)]"] = UBASE("Scientific", "faraday(chemical)", 9.649570000000000E+04, "s.A/mol", "T.I/N", "1.0");
   unit["Scientific[faraday(physical)]"] = UBASE("Scientific", "faraday(physical)", 9.651290000000000E+04, "s.A/mol", "T.I/N", "1.0");
   unit["Scientific[F(physical)]"] = UBASE("Scientific", "faraday(physical)", 9.651290000000000E+04, "s.A/mol", "T.I/N", "1.0");
   _map["molarCharge"] = BaseSystem("molarCharge", unit, "1.0");

   unit.clear();


}

// EOF
