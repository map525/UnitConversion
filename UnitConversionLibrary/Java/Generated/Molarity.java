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
// File Molarity.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Molarity extends SingleSystem
{
   private static Molarity singleton_ = new Molarity();

   public static Molarity Instance()
   {
      return singleton_;
   }

   private Molarity()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("INT[chlorometric-degree]",   new UBASE("INT", "chlorometric-degree", 4.462025316455700E+01, "mol/m3", "N/L3", "1.0"));
      unit.put("INT[oChl]",   new UBASE("INT", "chlorometric-degree", 4.462025316455700E+01, "mol/m3", "N/L3", "1.0"));
      unit.put("INT[molar]",   new UBASE("INT", "molar", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("INT[M]",   new UBASE("INT", "molar", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[amagat(atm)]",   new UBASE("Scientific", "amagat(atm)", 4.461498837499770E+01, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[amagat(bar)]",   new UBASE("Scientific", "amagat(bar)", 4.403157007154970E+01, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[demal]",   new UBASE("Scientific", "demal", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[D]",   new UBASE("Scientific", "demal", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-centicubic-decimeter]",   new UBASE("Scientific", "mole-per-centicubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/dm3]",   new UBASE("Scientific", "mole-per-centicubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-centicubic-meter]",   new UBASE("Scientific", "mole-per-centicubic-meter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/cm3]",   new UBASE("Scientific", "mole-per-centicubic-meter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-meter]",   new UBASE("Scientific", "mole-per-cubic-meter", 1.000000000000000E+00, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/m3]",   new UBASE("Scientific", "mole-per-cubic-meter", 1.000000000000000E+00, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-decimeter]",   new UBASE("Scientific", "mole-per-cubic-decimeter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-centimeter]",   new UBASE("Scientific", "mole-per-cubic-centimeter", 1.000000000000000E+06, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-millimeter]",   new UBASE("Scientific", "mole-per-cubic-millimeter", 1.000000000000000E+09, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/mm3]",   new UBASE("Scientific", "mole-per-cubic-millimeter", 1.000000000000000E+09, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-yard]",   new UBASE("Scientific", "mole-per-cubic-yard", 1.307950619314390E+00, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/yd3]",   new UBASE("Scientific", "mole-per-cubic-yard", 1.307950619314390E+00, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-foot]",   new UBASE("Scientific", "mole-per-cubic-foot", 3.531466672148860E+01, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/ft3]",   new UBASE("Scientific", "mole-per-cubic-foot", 3.531466672148860E+01, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-cubic-in]",   new UBASE("Scientific", "mole-per-cubic-in", 6.102374409473230E+04, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/in3]",   new UBASE("Scientific", "mole-per-cubic-in", 6.102374409473230E+04, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mole-per-liter]",   new UBASE("Scientific", "mole-per-liter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("Scientific[mol/l]",   new UBASE("Scientific", "mole-per-liter", 1.000000000000000E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("US[american-run]",   new UBASE("US", "american-run", 3.225451080669630E+03, "mol/m3", "N/L3", "1.0"));
      unit.put("US[Ar]",   new UBASE("US", "american-run", 3.225451080669630E+03, "mol/m3", "N/L3", "1.0"));
      _map.put("molarity",   new BaseSystem("molarity", unit, "1.0"));

      unit.clear();


      unit.put("Scientific[gibbs]",   new UBASE("Scientific", "gibbs", 1.000000000000000E-06, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole-per-square-meter]",   new UBASE("Scientific", "mole-per-square-meter", 1.000000000000000E+00, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole/m2]",   new UBASE("Scientific", "mole-per-square-meter", 1.000000000000000E+00, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole-per-square-centimeter]",   new UBASE("Scientific", "mole-per-square-centimeter", 1.000000000000000E+04, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole/cm2]",   new UBASE("Scientific", "mole-per-square-centimeter", 1.000000000000000E+04, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole-per-square-millimeter]",   new UBASE("Scientific", "mole-per-square-millimeter", 1.000000000000000E+06, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole/mm2]",   new UBASE("Scientific", "mole-per-square-millimeter", 1.000000000000000E+06, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole-per-square-yard]",   new UBASE("Scientific", "mole-per-square-yard", 1.195990046301080E+00, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole/yd2]",   new UBASE("Scientific", "mole-per-square-yard", 1.195990046301080E+00, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole-per-square-foot]",   new UBASE("Scientific", "mole-per-square-foot", 1.076391041670970E+01, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole/ft2]",   new UBASE("Scientific", "mole-per-square-foot", 1.076391041670970E+01, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole-per-square-inch]",   new UBASE("Scientific", "mole-per-square-inch", 1.550003100006200E+03, "mol/m2", "N/L2", "1.0"));
      unit.put("Scientific[mole/in2]",   new UBASE("Scientific", "mole-per-square-inch", 1.550003100006200E+03, "mol/m2", "N/L2", "1.0"));
      _map.put("surfaceMolarity",   new BaseSystem("surfaceMolarity", unit, "1.0"));

      unit.clear();


      unit.put("Scientific[amagat(atm)]",   new UBASE("Scientific", "amagat(atm)", 2.241399216771740E-02, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[amagat(bar)]",   new UBASE("Scientific", "amagat(bar)", 2.271097756393960E-02, "m3/mol", "L3/N", "1.0"));
      unit.put("SI[cubic-meter-per-mole]",   new UBASE("SI", "cubic-meter-per-mole", 1.000000000000000E+00, "m3/mol", "L3/N", "1.0"));
      unit.put("SI[m3/mol]",   new UBASE("SI", "cubic-meter-per-mole", 1.000000000000000E+00, "m3/mol", "L3/N", "1.0"));
      unit.put("SI[cubic-centimeter-per-mole]",   new UBASE("SI", "cubic-centimeter-per-mole", 1.000000000000000E-06, "m3/mol", "L3/N", "1.0"));
      unit.put("SI[cm3/mol]",   new UBASE("SI", "cubic-centimeter-per-mole", 1.000000000000000E-06, "m3/mol", "L3/N", "1.0"));
      unit.put("SI[cubic-millimeter-per-mole]",   new UBASE("SI", "cubic-millimeter-per-mole", 1.000000000000000E-09, "m3/mol", "L3/N", "1.0"));
      unit.put("SI[mm3/mol]",   new UBASE("SI", "cubic-millimeter-per-mole", 1.000000000000000E-09, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[cubic-yard-per-mole]",   new UBASE("Scientific", "cubic-yard-per-mole", 7.645548579840000E-01, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[yd3/mol]",   new UBASE("Scientific", "cubic-yard-per-mole", 7.645548579840000E-01, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[cubic-foot-per-mole]",   new UBASE("Scientific", "cubic-foot-per-mole", 2.831684659200000E-02, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[ft3/mol]",   new UBASE("Scientific", "cubic-foot-per-mole", 2.831684659200000E-02, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[cubic-inch-per-mole]",   new UBASE("Scientific", "cubic-inch-per-mole", 1.638706400000000E-05, "m3/mol", "L3/N", "1.0"));
      unit.put("Scientific[in3/mol]",   new UBASE("Scientific", "cubic-inch-per-mole", 1.638706400000000E-05, "m3/mol", "L3/N", "1.0"));
      _map.put("molarDensity",   new BaseSystem("molarDensity", unit, "1.0"));

      unit.clear();


      unit.put("SI[square-meter-per-mole]",   new UBASE("SI", "square-meter-per-mole", 1.000000000000000E+00, "m2/mol", "L2/N", "1.0"));
      unit.put("SI[m2/mol]",   new UBASE("SI", "square-meter-per-mole", 1.000000000000000E+00, "m2/mol", "L2/N", "1.0"));
      unit.put("SI[square-centimeter-per-mole]",   new UBASE("SI", "square-centimeter-per-mole", 1.000000000000000E-04, "m2/mol", "L2/N", "1.0"));
      unit.put("SI[cm2/mol]",   new UBASE("SI", "square-centimeter-per-mole", 1.000000000000000E-04, "m2/mol", "L2/N", "1.0"));
      unit.put("SI[square-millimeter-per-mole]",   new UBASE("SI", "square-millimeter-per-mole", 1.000000000000000E-06, "m2/mol", "L2/N", "1.0"));
      unit.put("SI[mm2/mol]",   new UBASE("SI", "square-millimeter-per-mole", 1.000000000000000E-06, "m2/mol", "L2/N", "1.0"));
      unit.put("Scientific[square-yard-per-mole]",   new UBASE("Scientific", "square-yard-per-mole", 8.361273600000000E-01, "m2/mol", "L2/N", "1.0"));
      unit.put("Scientific[yd2/mol]",   new UBASE("Scientific", "square-yard-per-mole", 8.361273600000000E-01, "m2/mol", "L2/N", "1.0"));
      unit.put("Scientific[square-foot-per-mole]",   new UBASE("Scientific", "square-foot-per-mole", 9.290304000000000E-02, "m2/mol", "L2/N", "1.0"));
      unit.put("Scientific[ft2/mol]",   new UBASE("Scientific", "square-foot-per-mole", 9.290304000000000E-02, "m2/mol", "L2/N", "1.0"));
      unit.put("Scientific[square-inch-per-mole]",   new UBASE("Scientific", "square-inch-per-mole", 6.451600000000000E-04, "m2/mol", "L2/N", "1.0"));
      unit.put("Scientific[in2/mol]",   new UBASE("Scientific", "square-inch-per-mole", 6.451600000000000E-04, "m2/mol", "L2/N", "1.0"));
      _map.put("molarAbsorption",   new BaseSystem("molarAbsorption", unit, "1.0"));

      unit.clear();


      unit.put("INT[G-vaIue(old)]",   new UBASE("INT", "G-vaIue(old)", 1.036426965626220E-07, "s2.mol/kg.m2", "T2.N/M.L2", "1.0"));
      unit.put("SI[G-value]",   new UBASE("SI", "G-value", 1.000000000000000E+00, "s2.mol/kg.m2", "T2.N/M.L2", "1.0"));
      _map.put("radiochemicalYield",   new BaseSystem("radiochemicalYield", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[pound-mole]",   new UBASE("Imperial", "pound-mole", 4.535923700000000E-01, "mol", "N", "1.0"));
      unit.put("Imperial[lbmol]",   new UBASE("Imperial", "pound-mole", 4.535923700000000E-01, "mol", "N", "1.0"));
      unit.put("INT[standard-cubic-foot]",   new UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0"));
      unit.put("INT[SCF]",   new UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0"));
      unit.put("INT[ft3(60oF-atm)]",   new UBASE("INT", "standard-cubic-foot", 1.195286939861880E+00, "mol", "N", "1.0"));
      unit.put("INT[standard-cubic-meter(bar)]",   new UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0"));
      unit.put("INT[SCM(bar)]",   new UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0"));
      unit.put("INT[m3(STP-bar)]",   new UBASE("INT", "standard-cubic-meter(bar)", 4.403161451317080E+01, "mol", "N", "1.0"));
      unit.put("Scientific[standard-cubic-meter-(atm)]",   new UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0"));
      unit.put("Scientific[SCM(atm)]",   new UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0"));
      unit.put("Scientific[m3(STP-atm)]",   new UBASE("Scientific", "standard-cubic-meter-(atm)", 4.461503340547030E+01, "mol", "N", "1.0"));
      unit.put("SI[mole]",   new UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0"));
      unit.put("SI[mol]",   new UBASE("SI", "mole", 1.000000000000000E+00, "mol", "N", "1.0"));
      _map.put("quantity",   new BaseSystem("quantity", unit, "1.0"));

      unit.clear();


      unit.put("Scientific[international-unit]",   new UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0"));
      unit.put("Scientific[UI]",   new UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0"));
      unit.put("Scientific[IU]",   new UBASE("Scientific", "international-unit", 1.666666666666670E-08, "mol/s", "N/T", "1.0"));
      unit.put("SI[katal]",   new UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0"));
      unit.put("SI[kat]",   new UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0"));
      _map.put("enzymaticActivity",   new BaseSystem("enzymaticActivity", unit, "1.0"));

      unit.clear();


      unit.put("Scientific[faraday(12C)]",   new UBASE("Scientific", "faraday(12C)", 9.648530900000000E+04, "s.A/mol", "T.I/N", "1.0"));
      unit.put("Scientific[F(12C)]",   new UBASE("Scientific", "faraday(12C)", 9.648530900000000E+04, "s.A/mol", "T.I/N", "1.0"));
      unit.put("Scientific[faraday(chemical)]",   new UBASE("Scientific", "faraday(chemical)", 9.649570000000000E+04, "s.A/mol", "T.I/N", "1.0"));
      unit.put("Scientific[F(chemical)]",   new UBASE("Scientific", "faraday(chemical)", 9.649570000000000E+04, "s.A/mol", "T.I/N", "1.0"));
      unit.put("Scientific[faraday(physical)]",   new UBASE("Scientific", "faraday(physical)", 9.651290000000000E+04, "s.A/mol", "T.I/N", "1.0"));
      unit.put("Scientific[F(physical)]",   new UBASE("Scientific", "faraday(physical)", 9.651290000000000E+04, "s.A/mol", "T.I/N", "1.0"));
      _map.put("molarCharge",   new BaseSystem("molarCharge", unit, "1.0"));

      unit.clear();


   }

}
// EOF
