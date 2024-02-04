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
// File EM.java
//
// Units for EM
//
// Class for EM units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class EM extends SingleSystem
{
   private static EM singleton_ = new EM();

   public static EM Instance()
   {
      return singleton_;
   }

   private EM()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("cgs[abampere]",   new UBASE("cgs", "abampere", 1.000000000000000E+01, "A", "I", "1.0"));
      unit.put("cgs[aA]",   new UBASE("cgs", "abampere", 1.000000000000000E+01, "A", "I", "1.0"));
      unit.put("IEUS[ampere]",   new UBASE("IEUS", "ampere", 9.998350000000000E-01, "A", "I", "1.0"));
      unit.put("INT[ampere]",   new UBASE("INT", "ampere", 9.998350000000000E-01, "A", "I", "1.0"));
      unit.put("MKSA[ampere]",   new UBASE("MKSA", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("MKSA[A]",   new UBASE("MKSA", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("SI[ampere]",   new UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("SI[A]",   new UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("IEUS[ampere(mean)]",   new UBASE("IEUS", "ampere(mean)", 9.998500000000000E-01, "A", "I", "1.0"));
      unit.put("INT[ampere(mean)]",   new UBASE("INT", "ampere(mean)", 9.998500000000000E-01, "A", "I", "1.0"));
      unit.put("SI[ampere-tum]",   new UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("SI[A-turn]",   new UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("SI[At]",   new UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("a.u.[au-of-electric-curent]",   new UBASE("a.u.", "au-of-electric-curent", 6.623618237495840E-03, "A", "I", "1.0"));
      unit.put("a.u.[auec]",   new UBASE("a.u.", "au-of-electric-curent", 6.623618237495840E-03, "A", "I", "1.0"));
      unit.put("cgs[biot]",   new UBASE("cgs", "biot", 1.000000000000000E+01, "A", "I", "1.0"));
      unit.put("cgs[Bi]",   new UBASE("cgs", "biot", 1.000000000000000E+01, "A", "I", "1.0"));
      unit.put("cgs[emu-of-current]",   new UBASE("cgs", "emu-of-current", 1.000000000000000E+01, "A", "I", "1.0"));
      unit.put("cgs[emuc]",   new UBASE("cgs", "emu-of-current", 1.000000000000000E+01, "A", "I", "1.0"));
      unit.put("Scientific[galvat]",   new UBASE("Scientific", "galvat", 1.000000000000000E+00, "A", "I", "1.0"));
      unit.put("cgs[gilbert]",   new UBASE("cgs", "gilbert", 7.957747154594770E-01, "A", "I", "1.0"));
      unit.put("cgs[Gb]",   new UBASE("cgs", "gilbert", 7.957747154594770E-01, "A", "I", "1.0"));
      unit.put("Scientific[pragilbert]",   new UBASE("Scientific", "pragilbert", 1.256637061435920E+01, "A", "I", "1.0"));
      unit.put("cgs[statampere]",   new UBASE("cgs", "statampere", 3.335640951981520E-10, "A", "I", "1.0"));
      unit.put("cgs[statA]",   new UBASE("cgs", "statampere", 3.335640951981520E-10, "A", "I", "1.0"));
      _map.put("current",   new BaseSystem("current", unit, "1.0"));

      unit.clear();


      unit.put("cgs[abcoulomb]",   new UBASE("cgs", "abcoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
      unit.put("cgs[aC]",   new UBASE("cgs", "abcoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
      unit.put("SI[ampere-hour]",   new UBASE("SI", "ampere-hour", 3.600000000000000E+03, "s.A", "T.I", "1.0"));
      unit.put("SI[A-hr]",   new UBASE("SI", "ampere-hour", 3.600000000000000E+03, "s.A", "T.I", "1.0"));
      unit.put("a.u.[au-of-electric-charge]",   new UBASE("a.u.", "au-of-electric-charge", 1.602176634000000E-19, "s.A", "T.I", "1.0"));
      unit.put("a.u.[aue]",   new UBASE("a.u.", "au-of-electric-charge", 1.602176634000000E-19, "s.A", "T.I", "1.0"));
      unit.put("SI[coulomb]",   new UBASE("SI", "coulomb", 1.000000000000000E+00, "s.A", "T.I", "1.0"));
      unit.put("SI[C]",   new UBASE("SI", "coulomb", 1.000000000000000E+00, "s.A", "T.I", "1.0"));
      unit.put("IEUS[coulomb(int)]",   new UBASE("IEUS", "coulomb(int)", 1.000165000220600E+00, "s.A", "T.I", "1.0"));
      unit.put("IEUS[C]",   new UBASE("IEUS", "coulomb(int)", 1.000165000220600E+00, "s.A", "T.I", "1.0"));
      unit.put("cgs[emu-of-charge]",   new UBASE("cgs", "emu-of-charge", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
      unit.put("cgs[esu-of-charge]",   new UBASE("cgs", "esu-of-charge", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
      unit.put("cgs[franklin]",   new UBASE("cgs", "franklin", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
      unit.put("cgs[Fr]",   new UBASE("cgs", "franklin", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
      unit.put("cgs[statcoulomb]",   new UBASE("cgs", "statcoulomb", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
      unit.put("cgs[statC]",   new UBASE("cgs", "statcoulomb", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
      unit.put("SI[yottacoulomb]",   new UBASE("SI", "yottacoulomb", 1.000000000000000E+24, "s.A", "T.I", "1.0"));
      unit.put("SI[YC]",   new UBASE("SI", "yottacoulomb", 1.000000000000000E+24, "s.A", "T.I", "1.0"));
      unit.put("SI[zettacoulomb]",   new UBASE("SI", "zettacoulomb", 1.000000000000000E+21, "s.A", "T.I", "1.0"));
      unit.put("SI[ZC]",   new UBASE("SI", "zettacoulomb", 1.000000000000000E+21, "s.A", "T.I", "1.0"));
      unit.put("SI[exacoulomb]",   new UBASE("SI", "exacoulomb", 1.000000000000000E+18, "s.A", "T.I", "1.0"));
      unit.put("SI[EC]",   new UBASE("SI", "exacoulomb", 1.000000000000000E+18, "s.A", "T.I", "1.0"));
      unit.put("SI[petacoulomb]",   new UBASE("SI", "petacoulomb", 1.000000000000000E+15, "s.A", "T.I", "1.0"));
      unit.put("SI[PC]",   new UBASE("SI", "petacoulomb", 1.000000000000000E+15, "s.A", "T.I", "1.0"));
      unit.put("SI[teracoulomb]",   new UBASE("SI", "teracoulomb", 1.000000000000000E+12, "s.A", "T.I", "1.0"));
      unit.put("SI[TC]",   new UBASE("SI", "teracoulomb", 1.000000000000000E+12, "s.A", "T.I", "1.0"));
      unit.put("SI[gigacoulomb]",   new UBASE("SI", "gigacoulomb", 1.000000000000000E+09, "s.A", "T.I", "1.0"));
      unit.put("SI[GC]",   new UBASE("SI", "gigacoulomb", 1.000000000000000E+09, "s.A", "T.I", "1.0"));
      unit.put("SI[megacoulomb]",   new UBASE("SI", "megacoulomb", 1.000000000000000E+06, "s.A", "T.I", "1.0"));
      unit.put("SI[MC]",   new UBASE("SI", "megacoulomb", 1.000000000000000E+06, "s.A", "T.I", "1.0"));
      unit.put("SI[kilocoulomb]",   new UBASE("SI", "kilocoulomb", 1.000000000000000E+03, "s.A", "T.I", "1.0"));
      unit.put("SI[kC]",   new UBASE("SI", "kilocoulomb", 1.000000000000000E+03, "s.A", "T.I", "1.0"));
      unit.put("SI[hectocoulomb]",   new UBASE("SI", "hectocoulomb", 1.000000000000000E+02, "s.A", "T.I", "1.0"));
      unit.put("SI[hC]",   new UBASE("SI", "hectocoulomb", 1.000000000000000E+02, "s.A", "T.I", "1.0"));
      unit.put("SI[decacoulomb]",   new UBASE("SI", "decacoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
      unit.put("SI[daC]",   new UBASE("SI", "decacoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
      unit.put("SI[decicoulomb]",   new UBASE("SI", "decicoulomb", 1.000000000000000E-01, "s.A", "T.I", "1.0"));
      unit.put("SI[dC]",   new UBASE("SI", "decicoulomb", 1.000000000000000E-01, "s.A", "T.I", "1.0"));
      unit.put("SI[centicoulomb]",   new UBASE("SI", "centicoulomb", 1.000000000000000E-02, "s.A", "T.I", "1.0"));
      unit.put("SI[cC]",   new UBASE("SI", "centicoulomb", 1.000000000000000E-02, "s.A", "T.I", "1.0"));
      unit.put("SI[millicoulomb]",   new UBASE("SI", "millicoulomb", 1.000000000000000E-03, "s.A", "T.I", "1.0"));
      unit.put("SI[mC]",   new UBASE("SI", "millicoulomb", 1.000000000000000E-03, "s.A", "T.I", "1.0"));
      unit.put("SI[microcoulomb]",   new UBASE("SI", "microcoulomb", 1.000000000000000E-06, "s.A", "T.I", "1.0"));
      unit.put("SI[uC]",   new UBASE("SI", "microcoulomb", 1.000000000000000E-06, "s.A", "T.I", "1.0"));
      unit.put("SI[nanocoulomb]",   new UBASE("SI", "nanocoulomb", 1.000000000000000E-09, "s.A", "T.I", "1.0"));
      unit.put("SI[nC]",   new UBASE("SI", "nanocoulomb", 1.000000000000000E-09, "s.A", "T.I", "1.0"));
      unit.put("SI[picocoulomb]",   new UBASE("SI", "picocoulomb", 1.000000000000000E-12, "s.A", "T.I", "1.0"));
      unit.put("SI[pC]",   new UBASE("SI", "picocoulomb", 1.000000000000000E-12, "s.A", "T.I", "1.0"));
      unit.put("SI[femtocoulomb]",   new UBASE("SI", "femtocoulomb", 1.000000000000000E-15, "s.A", "T.I", "1.0"));
      unit.put("SI[fC]",   new UBASE("SI", "femtocoulomb", 1.000000000000000E-15, "s.A", "T.I", "1.0"));
      unit.put("SI[attocoulomb]",   new UBASE("SI", "attocoulomb", 1.000000000000000E-18, "s.A", "T.I", "1.0"));
      unit.put("SI[aC]",   new UBASE("SI", "attocoulomb", 1.000000000000000E-18, "s.A", "T.I", "1.0"));
      unit.put("SI[zeptocoulomb]",   new UBASE("SI", "zeptocoulomb", 1.000000000000000E-21, "s.A", "T.I", "1.0"));
      unit.put("SI[zC]",   new UBASE("SI", "zeptocoulomb", 1.000000000000000E-21, "s.A", "T.I", "1.0"));
      unit.put("SI[yoctocoulomb]",   new UBASE("SI", "yoctocoulomb", 1.000000000000000E-24, "s.A", "T.I", "1.0"));
      unit.put("SI[yC]",   new UBASE("SI", "yoctocoulomb", 1.000000000000000E-24, "s.A", "T.I", "1.0"));
      _map.put("charge",   new BaseSystem("charge", unit, "1.0"));

      unit.clear();


      unit.put("SI[ampere-per-meter]",   new UBASE("SI", "ampere-per-meter", 1.000000000000000E+00, "A/m", "I/L", "1.0"));
      unit.put("SI[A/m]",   new UBASE("SI", "ampere-per-meter", 1.000000000000000E+00, "A/m", "I/L", "1.0"));
      unit.put("Scientific[lenz]",   new UBASE("Scientific", "lenz", 1.000000000000000E+00, "A/m", "I/L", "1.0"));
      unit.put("cgs[oersted]",   new UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0"));
      unit.put("cgs[CE]",   new UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0"));
      unit.put("cgs[ce]",   new UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0"));
      unit.put("Scientific[praoersted]",   new UBASE("Scientific", "praoersted", 1.256637061435920E+01, "A/m", "I/L", "1.0"));
      _map.put("magneticFieldStrength",   new BaseSystem("magneticFieldStrength", unit, "1.0"));

      unit.clear();


      unit.put("US[perm(0oC)]",   new UBASE("US", "perm(0oC)", 5.721357883888630E-11, "s/m", "T/L", "1.0"));
      unit.put("US[perm(23oC)]",   new UBASE("US", "perm(23oC)", 5.745608053073760E-11, "s/m", "T/L", "1.0"));
      _map.put("permeability",   new BaseSystem("permeability", unit, "1.0"));

      unit.clear();


      unit.put("SI[ampere-square-meter]",   new UBASE("SI", "ampere-square-meter", 1.000000000000000E+00, "m2.A", "L2.I", "1.0"));
      unit.put("SI[A-m2]",   new UBASE("SI", "ampere-square-meter", 1.000000000000000E+00, "m2.A", "L2.I", "1.0"));
      unit.put("a.u.[au-of-magnetic-dipole-moment]",   new UBASE("a.u.", "au-of-magnetic-dipole-moment", 1.854802015672430E-23, "m2.A", "L2.I", "1.0"));
      unit.put("a.u.[audpm]",   new UBASE("a.u.", "au-of-magnetic-dipole-moment", 1.854802015672430E-23, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[magneton(bohr)]",   new UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[uB]",   new UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[B]",   new UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[bohr-magneton]",   new UBASE("Scientific", "bohr-magneton", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[magneton(nuclear)]",   new UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[uN]",   new UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[BN]",   new UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
      unit.put("Scientific[nuclear-magneton]",   new UBASE("Scientific", "nuclear-magneton", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
      _map.put("magneticDipoleMoment",   new BaseSystem("magneticDipoleMoment", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[ampere-per-square-inch]",   new UBASE("Imperial", "ampere-per-square-inch", 1.550003100006200E+03, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[A/in2]",   new UBASE("Imperial", "ampere-per-square-inch", 1.550003100006200E+03, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[ampere-per-square-foot]",   new UBASE("Imperial", "ampere-per-square-foot", 1.076391041670970E+01, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[A/ft2]",   new UBASE("Imperial", "ampere-per-square-foot", 1.076391041670970E+01, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[ampere-per-square-yard]",   new UBASE("Imperial", "ampere-per-square-yard", 1.195990046301080E+00, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[A/yd2]",   new UBASE("Imperial", "ampere-per-square-yard", 1.195990046301080E+00, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[milliampere-per-square-inch]",   new UBASE("Imperial", "milliampere-per-square-inch", 1.550003100006200E+00, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[mA/in2]",   new UBASE("Imperial", "milliampere-per-square-inch", 1.550003100006200E+00, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[milliampere-per-square-foot]",   new UBASE("Imperial", "milliampere-per-square-foot", 1.076391041670970E-02, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[mA/ft2]",   new UBASE("Imperial", "milliampere-per-square-foot", 1.076391041670970E-02, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[milliampere-per-square-yard]",   new UBASE("Imperial", "milliampere-per-square-yard", 1.195990046301080E-03, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[mA/yd2]",   new UBASE("Imperial", "milliampere-per-square-yard", 1.195990046301080E-03, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[microampere-per-square-inch]",   new UBASE("Imperial", "microampere-per-square-inch", 1.550003100006200E-03, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[uA/in2]",   new UBASE("Imperial", "microampere-per-square-inch", 1.550003100006200E-03, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[microampere-per-square-foot]",   new UBASE("Imperial", "microampere-per-square-foot", 1.076391041670970E-05, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[uA/ft2]",   new UBASE("Imperial", "microampere-per-square-foot", 1.076391041670970E-05, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[microampere-per-square-yard]",   new UBASE("Imperial", "microampere-per-square-yard", 1.195990046301080E-06, "A/m2", "I/L2", "1.0"));
      unit.put("Imperial[uA/yd2]",   new UBASE("Imperial", "microampere-per-square-yard", 1.195990046301080E-06, "A/m2", "I/L2", "1.0"));
      unit.put("SI[ampere-per-square-meter]",   new UBASE("SI", "ampere-per-square-meter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
      unit.put("SI[A/m2]",   new UBASE("SI", "ampere-per-square-meter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
      unit.put("SI[ampere-per-square-decimeter]",   new UBASE("SI", "ampere-per-square-decimeter", 1.000000000000000E+02, "A/m2", "I/L2", "1.0"));
      unit.put("SI[A/dm2]",   new UBASE("SI", "ampere-per-square-decimeter", 1.000000000000000E+02, "A/m2", "I/L2", "1.0"));
      unit.put("SI[ampere-per-square-centimeter]",   new UBASE("SI", "ampere-per-square-centimeter", 1.000000000000000E+04, "A/m2", "I/L2", "1.0"));
      unit.put("SI[A/cm2]",   new UBASE("SI", "ampere-per-square-centimeter", 1.000000000000000E+04, "A/m2", "I/L2", "1.0"));
      unit.put("SI[ampere-per-square-millimeter]",   new UBASE("SI", "ampere-per-square-millimeter", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
      unit.put("SI[A/mm2]",   new UBASE("SI", "ampere-per-square-millimeter", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
      unit.put("SI[ampere-per-square-micrometer]",   new UBASE("SI", "ampere-per-square-micrometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
      unit.put("SI[A/um2]",   new UBASE("SI", "ampere-per-square-micrometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
      unit.put("SI[ampere-per-square-nanometer]",   new UBASE("SI", "ampere-per-square-nanometer", 1.000000000000000E+18, "A/m2", "I/L2", "1.0"));
      unit.put("SI[A/nm2]",   new UBASE("SI", "ampere-per-square-nanometer", 1.000000000000000E+18, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[milliampere-per-square-meter]",   new UBASE("Scientific", "milliampere-per-square-meter", 1.000000000000000E-03, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[mA/m2]",   new UBASE("Scientific", "milliampere-per-square-meter", 1.000000000000000E-03, "A/m2", "I/L2", "1.0"));
      unit.put("SI[milliampere-per-square-decimeter]",   new UBASE("SI", "milliampere-per-square-decimeter", 1.000000000000000E-01, "A/m2", "I/L2", "1.0"));
      unit.put("SI[mA/dm2]",   new UBASE("SI", "milliampere-per-square-decimeter", 1.000000000000000E-01, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[milliampere-per-square-centimeter]",   new UBASE("Scientific", "milliampere-per-square-centimeter", 1.000000000000000E+01, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[mA/cm2]",   new UBASE("Scientific", "milliampere-per-square-centimeter", 1.000000000000000E+01, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[milliampere-per-square-millimeter]",   new UBASE("Scientific", "milliampere-per-square-millimeter", 1.000000000000000E+03, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[mA/mm2]",   new UBASE("Scientific", "milliampere-per-square-millimeter", 1.000000000000000E+03, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[milliampere-per-square-micrometer]",   new UBASE("Scientific", "milliampere-per-square-micrometer", 1.000000000000000E+09, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[mA/um2]",   new UBASE("Scientific", "milliampere-per-square-micrometer", 1.000000000000000E+09, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[milliampere-per-square-nanometer]",   new UBASE("Scientific", "milliampere-per-square-nanometer", 1.000000000000000E+15, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[mA/nm2]",   new UBASE("Scientific", "milliampere-per-square-nanometer", 1.000000000000000E+15, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[microampere-per-square-meter]",   new UBASE("Scientific", "microampere-per-square-meter", 1.000000000000000E-06, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[uA/m2]",   new UBASE("Scientific", "microampere-per-square-meter", 1.000000000000000E-06, "A/m2", "I/L2", "1.0"));
      unit.put("SI[microampere-per-square-decimeter]",   new UBASE("SI", "microampere-per-square-decimeter", 1.000000000000000E-04, "A/m2", "I/L2", "1.0"));
      unit.put("SI[uA/dm2]",   new UBASE("SI", "microampere-per-square-decimeter", 1.000000000000000E-04, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[microampere-per-square-centimeter]",   new UBASE("Scientific", "microampere-per-square-centimeter", 1.000000000000000E-02, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[uA/cm2]",   new UBASE("Scientific", "microampere-per-square-centimeter", 1.000000000000000E-02, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[microampere-per-square-millimeter]",   new UBASE("Scientific", "microampere-per-square-millimeter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[uA/mm2]",   new UBASE("Scientific", "microampere-per-square-millimeter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[microampere-per-square-micrometer]",   new UBASE("Scientific", "microampere-per-square-micrometer", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[uA/um2]",   new UBASE("Scientific", "microampere-per-square-micrometer", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[microampere-per-square-nanometer]",   new UBASE("Scientific", "microampere-per-square-nanometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
      unit.put("Scientific[uA/nm2]",   new UBASE("Scientific", "microampere-per-square-nanometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
      _map.put("currentDensity",   new BaseSystem("currentDensity", unit, "1.0"));

      unit.clear();


      unit.put("SI[coulomb-per-square-kilometer]",   new UBASE("SI", "coulomb-per-square-kilometer", 1.000000000000000E-06, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[C/km2]",   new UBASE("SI", "coulomb-per-square-kilometer", 1.000000000000000E-06, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[coulomb-per-square-meter]",   new UBASE("SI", "coulomb-per-square-meter", 1.000000000000000E+00, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[C/m2]",   new UBASE("SI", "coulomb-per-square-meter", 1.000000000000000E+00, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[coulomb-per-square-centimeter]",   new UBASE("SI", "coulomb-per-square-centimeter", 1.000000000000000E+04, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[C/cm2]",   new UBASE("SI", "coulomb-per-square-centimeter", 1.000000000000000E+04, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[coulomb-per-square-millimeter]",   new UBASE("SI", "coulomb-per-square-millimeter", 1.000000000000000E+06, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[C/mm2]",   new UBASE("SI", "coulomb-per-square-millimeter", 1.000000000000000E+06, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[coulomb-per-square-micrometer]",   new UBASE("SI", "coulomb-per-square-micrometer", 1.000000000000000E+12, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[C/um2]",   new UBASE("SI", "coulomb-per-square-micrometer", 1.000000000000000E+12, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[coulomb-per-square-nanometer]",   new UBASE("SI", "coulomb-per-square-nanometer", 1.000000000000000E+18, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("SI[C/nm2]",   new UBASE("SI", "coulomb-per-square-nanometer", 1.000000000000000E+18, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[coulomb-per-square-mile]",   new UBASE("Scientific", "coulomb-per-square-mile", 3.861021585424460E-07, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[C/mi2]",   new UBASE("Scientific", "coulomb-per-square-mile", 3.861021585424460E-07, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[coulomb-per-square-yard]",   new UBASE("Scientific", "coulomb-per-square-yard", 1.195990046301080E+00, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[C/yd2]",   new UBASE("Scientific", "coulomb-per-square-yard", 1.195990046301080E+00, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[coulomb-per-square-foot]",   new UBASE("Scientific", "coulomb-per-square-foot", 1.076391041670970E+01, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[C/ft2]",   new UBASE("Scientific", "coulomb-per-square-foot", 1.076391041670970E+01, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[coulomb-per-square-inch]",   new UBASE("Scientific", "coulomb-per-square-inch", 1.550003100006200E+03, "s.A/m2", "T.I/L2", "1.0"));
      unit.put("Scientific[C/in2]",   new UBASE("Scientific", "coulomb-per-square-inch", 1.550003100006200E+03, "s.A/m2", "T.I/L2", "1.0"));
      _map.put("surfaceChargeDensity",   new BaseSystem("surfaceChargeDensity", unit, "1.0"));

      unit.clear();


      unit.put("a.u.[au-of-electric-charge-density]",   new UBASE("a.u.", "au-of-electric-charge-density", 1.081202384566490E+12, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("a.u.[auecd]",   new UBASE("a.u.", "au-of-electric-charge-density", 1.081202384566490E+12, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[coulomb-per-cubic-kilometer]",   new UBASE("SI", "coulomb-per-cubic-kilometer", 1.000000000000000E-09, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[C/km3]",   new UBASE("SI", "coulomb-per-cubic-kilometer", 1.000000000000000E-09, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[coulomb-per-cubic-meter]",   new UBASE("SI", "coulomb-per-cubic-meter", 1.000000000000000E+00, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[C/m3]",   new UBASE("SI", "coulomb-per-cubic-meter", 1.000000000000000E+00, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[coulomb-per-cubic-centimeter]",   new UBASE("SI", "coulomb-per-cubic-centimeter", 1.000000000000000E+06, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[C/cm3]",   new UBASE("SI", "coulomb-per-cubic-centimeter", 1.000000000000000E+06, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[coulomb-per-cubic-millimeter]",   new UBASE("SI", "coulomb-per-cubic-millimeter", 1.000000000000000E+09, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[C/mm3]",   new UBASE("SI", "coulomb-per-cubic-millimeter", 1.000000000000000E+09, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[coulomb-per-cubic-micrometer]",   new UBASE("SI", "coulomb-per-cubic-micrometer", 1.000000000000000E+18, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[C/um3]",   new UBASE("SI", "coulomb-per-cubic-micrometer", 1.000000000000000E+18, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[coulomb-per-cubic-nanometer]",   new UBASE("SI", "coulomb-per-cubic-nanometer", 1.000000000000000E+27, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("SI[C/nm3]",   new UBASE("SI", "coulomb-per-cubic-nanometer", 1.000000000000000E+27, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[coulomb-per-cubic-mile]",   new UBASE("Scientific", "coulomb-per-cubic-mile", 2.399127585789280E-10, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[C/mi3]",   new UBASE("Scientific", "coulomb-per-cubic-mile", 2.399127585789280E-10, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[coulomb-per-cubic-yard]",   new UBASE("Scientific", "coulomb-per-cubic-yard", 1.307950619314390E+00, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[C/yd3]",   new UBASE("Scientific", "coulomb-per-cubic-yard", 1.307950619314390E+00, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[coulomb-per-cubic-foot]",   new UBASE("Scientific", "coulomb-per-cubic-foot", 3.531466672148860E+01, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[C/ft3]",   new UBASE("Scientific", "coulomb-per-cubic-foot", 3.531466672148860E+01, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[coulomb-per-cubic-inch]",   new UBASE("Scientific", "coulomb-per-cubic-inch", 6.102374409473230E+04, "s.A/m3", "T.I/L3", "1.0"));
      unit.put("Scientific[C/in3]",   new UBASE("Scientific", "coulomb-per-cubic-inch", 6.102374409473230E+04, "s.A/m3", "T.I/L3", "1.0"));
      _map.put("chargeDensity",   new BaseSystem("chargeDensity", unit, "1.0"));

      unit.clear();


      unit.put("MKS[yrneh]",   new UBASE("MKS", "yrneh", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("SI[sturgeon]",   new UBASE("SI", "sturgeon", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[farad-per-square-second]",   new UBASE("Scientific", "farad-per-square-second", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[F/s2]",   new UBASE("Scientific", "farad-per-square-second", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[farad-per-square-minute]",   new UBASE("Scientific", "farad-per-square-minute", 2.777777777777780E-04, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[F/min2]",   new UBASE("Scientific", "farad-per-square-minute", 2.777777777777780E-04, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[farad-per-square-hour]",   new UBASE("Scientific", "farad-per-square-hour", 7.716049382716050E-08, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[F/hr2]",   new UBASE("Scientific", "farad-per-square-hour", 7.716049382716050E-08, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[farad-per-square-day]",   new UBASE("Scientific", "farad-per-square-day", 1.339591906721540E-10, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[F/day2]",   new UBASE("Scientific", "farad-per-square-day", 1.339591906721540E-10, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[farad-per-square-month]",   new UBASE("Scientific", "farad-per-square-month", 1.488435451912820E-13, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[F/mon2]",   new UBASE("Scientific", "farad-per-square-month", 1.488435451912820E-13, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[farad-per-square-year]",   new UBASE("Scientific", "farad-per-square-year", 1.005510907653620E-15, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      unit.put("Scientific[F/yr2]",   new UBASE("Scientific", "farad-per-square-year", 1.005510907653620E-15, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
      _map.put("magneticReluctance",   new BaseSystem("magneticReluctance", unit, "1.0"));

      unit.clear();


      unit.put("US[daraf]",   new UBASE("US", "daraf", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[henry-per-square-second]",   new UBASE("Scientific", "henry-per-square-second", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[H/sec2]",   new UBASE("Scientific", "henry-per-square-second", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[henry-per-square-minute]",   new UBASE("Scientific", "henry-per-square-minute", 2.777777777777780E-04, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[H/min2]",   new UBASE("Scientific", "henry-per-square-minute", 2.777777777777780E-04, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[henry-per-square-hour]",   new UBASE("Scientific", "henry-per-square-hour", 7.716049382716050E-08, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[H/hr2]",   new UBASE("Scientific", "henry-per-square-hour", 7.716049382716050E-08, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[henry-per-square-day]",   new UBASE("Scientific", "henry-per-square-day", 1.339591906721540E-10, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[H/day2]",   new UBASE("Scientific", "henry-per-square-day", 1.339591906721540E-10, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[henry-per-square-month]",   new UBASE("Scientific", "henry-per-square-month", 1.488435451912820E-13, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[H/mon2]",   new UBASE("Scientific", "henry-per-square-month", 1.488435451912820E-13, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[henry-per-square-year]",   new UBASE("Scientific", "henry-per-square-year", 1.005510907653620E-15, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      unit.put("Scientific[H/yr2]",   new UBASE("Scientific", "henry-per-square-year", 1.005510907653620E-15, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
      _map.put("electricElastance",   new BaseSystem("electricElastance", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[ringing-equivalent-number]",   new UBASE("Imperial", "ringing-equivalent-number", 2.500000000000000E-04, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("Imperial[REN]",   new UBASE("Imperial", "ringing-equivalent-number", 2.500000000000000E-04, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[abmho]",   new UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[aS]",   new UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[1/aW]",   new UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[emu-of-conductance]",   new UBASE("cgs", "emu-of-conductance", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[emu-S]",   new UBASE("cgs", "emu-of-conductance", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[esu-of-conductance]",   new UBASE("cgs", "esu-of-conductance", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[esu-S]",   new UBASE("cgs", "esu-of-conductance", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("cgs[statmho]",   new UBASE("cgs", "statmho", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("INT[mho]",   new UBASE("INT", "mho", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("Scientific[gemmbo]",   new UBASE("Scientific", "gemmbo", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[siemens]",   new UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[S]",   new UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[yottasiemens]",   new UBASE("SI", "yottasiemens", 1.000000000000000E+24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[YS]",   new UBASE("SI", "yottasiemens", 1.000000000000000E+24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[zettasiemens]",   new UBASE("SI", "zettasiemens", 1.000000000000000E+21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[ZS]",   new UBASE("SI", "zettasiemens", 1.000000000000000E+21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[exacsiemens]",   new UBASE("SI", "exacsiemens", 1.000000000000000E+18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[ES]",   new UBASE("SI", "exacsiemens", 1.000000000000000E+18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[petasiemens]",   new UBASE("SI", "petasiemens", 1.000000000000000E+15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[PS]",   new UBASE("SI", "petasiemens", 1.000000000000000E+15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[terasiemens]",   new UBASE("SI", "terasiemens", 1.000000000000000E+12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[TS]",   new UBASE("SI", "terasiemens", 1.000000000000000E+12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[gigasiemens]",   new UBASE("SI", "gigasiemens", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[GS]",   new UBASE("SI", "gigasiemens", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[megasiemens]",   new UBASE("SI", "megasiemens", 1.000000000000000E+06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[MS]",   new UBASE("SI", "megasiemens", 1.000000000000000E+06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[kilosiemens]",   new UBASE("SI", "kilosiemens", 1.000000000000000E+03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[kS]",   new UBASE("SI", "kilosiemens", 1.000000000000000E+03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[hectosiemens]",   new UBASE("SI", "hectosiemens", 1.000000000000000E+02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[hS]",   new UBASE("SI", "hectosiemens", 1.000000000000000E+02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[decasiemens]",   new UBASE("SI", "decasiemens", 1.000000000000000E+01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[daS]",   new UBASE("SI", "decasiemens", 1.000000000000000E+01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[decisiemens]",   new UBASE("SI", "decisiemens", 1.000000000000000E-01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[dS]",   new UBASE("SI", "decisiemens", 1.000000000000000E-01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[centisiemens]",   new UBASE("SI", "centisiemens", 1.000000000000000E-02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[cS]",   new UBASE("SI", "centisiemens", 1.000000000000000E-02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[millisiemens]",   new UBASE("SI", "millisiemens", 1.000000000000000E-03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[mS]",   new UBASE("SI", "millisiemens", 1.000000000000000E-03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[microsiemens]",   new UBASE("SI", "microsiemens", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[uS]",   new UBASE("SI", "microsiemens", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[nanosiemens]",   new UBASE("SI", "nanosiemens", 1.000000000000000E-09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[nS]",   new UBASE("SI", "nanosiemens", 1.000000000000000E-09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[picosiemens]",   new UBASE("SI", "picosiemens", 1.000000000000000E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[pS]",   new UBASE("SI", "picosiemens", 1.000000000000000E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[femtosiemens]",   new UBASE("SI", "femtosiemens", 1.000000000000000E-15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[fS]",   new UBASE("SI", "femtosiemens", 1.000000000000000E-15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[attosiemens]",   new UBASE("SI", "attosiemens", 1.000000000000000E-18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[aS]",   new UBASE("SI", "attosiemens", 1.000000000000000E-18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[zeptosiemens]",   new UBASE("SI", "zeptosiemens", 1.000000000000000E-21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[zS]",   new UBASE("SI", "zeptosiemens", 1.000000000000000E-21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[yoctosiemens]",   new UBASE("SI", "yoctosiemens", 1.000000000000000E-24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      unit.put("SI[yS]",   new UBASE("SI", "yoctosiemens", 1.000000000000000E-24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      _map.put("electricConductance",   new BaseSystem("electricConductance", unit, "1.0"));

      unit.clear();


      unit.put("cgs[abfarad]",   new UBASE("cgs", "abfarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[aF]",   new UBASE("cgs", "abfarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[emu-of-electric-capacitance]",   new UBASE("cgs", "emu-of-electric-capacitance", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[emu-F]",   new UBASE("cgs", "emu-of-electric-capacitance", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[esu-of-capacitance]",   new UBASE("cgs", "esu-of-capacitance", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[esu-F]",   new UBASE("cgs", "esu-of-capacitance", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[statfarad]",   new UBASE("cgs", "statfarad", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("cgs[statC]",   new UBASE("cgs", "statfarad", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("IEUS[farad]",   new UBASE("IEUS", "farad", 9.995100000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("IEUS[F]",   new UBASE("IEUS", "farad", 9.995100000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("Imperial[centimeter]",   new UBASE("Imperial", "centimeter", 1.111880317327170E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("Imperial[cm]",   new UBASE("Imperial", "centimeter", 1.111880317327170E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("Scientific[jar]",   new UBASE("Scientific", "jar", 1.111880317327170E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("Scientific[puff]",   new UBASE("Scientific", "puff", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[farad]",   new UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[F]",   new UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[yottafarad]",   new UBASE("SI", "yottafarad", 1.000000000000000E+24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[YF]",   new UBASE("SI", "yottafarad", 1.000000000000000E+24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[zettafarad]",   new UBASE("SI", "zettafarad", 1.000000000000000E+21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[ZF]",   new UBASE("SI", "zettafarad", 1.000000000000000E+21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[exacfarad]",   new UBASE("SI", "exacfarad", 1.000000000000000E+18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[EF]",   new UBASE("SI", "exacfarad", 1.000000000000000E+18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[petafarad]",   new UBASE("SI", "petafarad", 1.000000000000000E+15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[PF]",   new UBASE("SI", "petafarad", 1.000000000000000E+15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[terafarad]",   new UBASE("SI", "terafarad", 1.000000000000000E+12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[TF]",   new UBASE("SI", "terafarad", 1.000000000000000E+12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[gigafarad]",   new UBASE("SI", "gigafarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[GF]",   new UBASE("SI", "gigafarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[megafarad]",   new UBASE("SI", "megafarad", 1.000000000000000E+06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[MF]",   new UBASE("SI", "megafarad", 1.000000000000000E+06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[kilofarad]",   new UBASE("SI", "kilofarad", 1.000000000000000E+03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[kF]",   new UBASE("SI", "kilofarad", 1.000000000000000E+03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[hectofarad]",   new UBASE("SI", "hectofarad", 1.000000000000000E+02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[hF]",   new UBASE("SI", "hectofarad", 1.000000000000000E+02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[decafarad]",   new UBASE("SI", "decafarad", 1.000000000000000E+01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[daF]",   new UBASE("SI", "decafarad", 1.000000000000000E+01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[decifarad]",   new UBASE("SI", "decifarad", 1.000000000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[dF]",   new UBASE("SI", "decifarad", 1.000000000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[centifarad]",   new UBASE("SI", "centifarad", 1.000000000000000E-02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[cF]",   new UBASE("SI", "centifarad", 1.000000000000000E-02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[millifarad]",   new UBASE("SI", "millifarad", 1.000000000000000E-03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[mF]",   new UBASE("SI", "millifarad", 1.000000000000000E-03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[microfarad]",   new UBASE("SI", "microfarad", 1.000000000000000E-06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[uF]",   new UBASE("SI", "microfarad", 1.000000000000000E-06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[nanofarad]",   new UBASE("SI", "nanofarad", 1.000000000000000E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[nF]",   new UBASE("SI", "nanofarad", 1.000000000000000E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[picofarad]",   new UBASE("SI", "picofarad", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[pF]",   new UBASE("SI", "picofarad", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[femtofarad]",   new UBASE("SI", "femtofarad", 1.000000000000000E-15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[fF]",   new UBASE("SI", "femtofarad", 1.000000000000000E-15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[attofarad]",   new UBASE("SI", "attofarad", 1.000000000000000E-18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[aF]",   new UBASE("SI", "attofarad", 1.000000000000000E-18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[zeptofarad]",   new UBASE("SI", "zeptofarad", 1.000000000000000E-21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[zF]",   new UBASE("SI", "zeptofarad", 1.000000000000000E-21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[yoctofarad]",   new UBASE("SI", "yoctofarad", 1.000000000000000E-24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      unit.put("SI[yF]",   new UBASE("SI", "yoctofarad", 1.000000000000000E-24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
      _map.put("capacitance",   new BaseSystem("capacitance", unit, "1.0"));

      unit.clear();


      unit.put("cgs[roc]",   new UBASE("cgs", "roc", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("MKSA[rom]",   new UBASE("MKSA", "rom", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[reciprocal-ohm-per-inch]",   new UBASE("Scientific", "reciprocal-ohm-per-inch", 3.937007874015750E+01, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[roi]",   new UBASE("Scientific", "reciprocal-ohm-per-inch", 3.937007874015750E+01, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[reciprocal-ohm-per-foot]",   new UBASE("Scientific", "reciprocal-ohm-per-foot", 3.280839895013120E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[rof]",   new UBASE("Scientific", "reciprocal-ohm-per-foot", 3.280839895013120E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[reciprocal-ohm-per-centimeter]",   new UBASE("Scientific", "reciprocal-ohm-per-centimeter", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[roc]",   new UBASE("Scientific", "reciprocal-ohm-per-centimeter", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[reciprocal-ohm-per-meter]",   new UBASE("Scientific", "reciprocal-ohm-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[siemens-per-meter]",   new UBASE("Scientific", "siemens-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      unit.put("Scientific[S/m]",   new UBASE("Scientific", "siemens-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
      _map.put("conductivity",   new BaseSystem("conductivity", unit, "1.0"));

      unit.clear();


      unit.put("cgs[rayl]",   new UBASE("cgs", "rayl", 1.000000000000000E+01, "kg/m2.s", "M/L2.T", "1.0"));
      unit.put("MKSA[rayl]",   new UBASE("MKSA", "rayl", 1.000000000000000E+00, "kg/m2.s", "M/L2.T", "1.0"));
      _map.put("specificAcousticImpedance",   new BaseSystem("specificAcousticImpedance", unit, "1.0"));

      unit.clear();


      unit.put("cgs[maxwell]",   new UBASE("cgs", "maxwell", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("cgs[Mx]",   new UBASE("cgs", "maxwell", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("Imperial[kapp-line]",   new UBASE("Imperial", "kapp-line", 6.000000000000000E-05, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("Imperial[unit-pole]",   new UBASE("Imperial", "unit-pole", 1.256637061435920E-07, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("Scientific[debye]",   new UBASE("Scientific", "debye", 3.335640951981520E-30, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("Scientific[D]",   new UBASE("Scientific", "debye", 3.335640951981520E-30, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[weber]",   new UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[Wb]",   new UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("US[line]",   new UBASE("US", "line", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[yottaweber]",   new UBASE("SI", "yottaweber", 1.000000000000000E+24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[YWb]",   new UBASE("SI", "yottaweber", 1.000000000000000E+24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[zettaweber]",   new UBASE("SI", "zettaweber", 1.000000000000000E+21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[ZWb]",   new UBASE("SI", "zettaweber", 1.000000000000000E+21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[exacweber]",   new UBASE("SI", "exacweber", 1.000000000000000E+18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[EWb]",   new UBASE("SI", "exacweber", 1.000000000000000E+18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[petaweber]",   new UBASE("SI", "petaweber", 1.000000000000000E+15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[PWb]",   new UBASE("SI", "petaweber", 1.000000000000000E+15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[teraweber]",   new UBASE("SI", "teraweber", 1.000000000000000E+12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[TWb]",   new UBASE("SI", "teraweber", 1.000000000000000E+12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[gigaweber]",   new UBASE("SI", "gigaweber", 1.000000000000000E+09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[GWb]",   new UBASE("SI", "gigaweber", 1.000000000000000E+09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[megaweber]",   new UBASE("SI", "megaweber", 1.000000000000000E+06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[MWb]",   new UBASE("SI", "megaweber", 1.000000000000000E+06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[kiloweber]",   new UBASE("SI", "kiloweber", 1.000000000000000E+03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[kWb]",   new UBASE("SI", "kiloweber", 1.000000000000000E+03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[hectoweber]",   new UBASE("SI", "hectoweber", 1.000000000000000E+02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[hWb]",   new UBASE("SI", "hectoweber", 1.000000000000000E+02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[decaweber]",   new UBASE("SI", "decaweber", 1.000000000000000E+01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[daWb]",   new UBASE("SI", "decaweber", 1.000000000000000E+01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[deciweber]",   new UBASE("SI", "deciweber", 1.000000000000000E-01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[dWb]",   new UBASE("SI", "deciweber", 1.000000000000000E-01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[centiweber]",   new UBASE("SI", "centiweber", 1.000000000000000E-02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[cWb]",   new UBASE("SI", "centiweber", 1.000000000000000E-02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[milliweber]",   new UBASE("SI", "milliweber", 1.000000000000000E-03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[mWb]",   new UBASE("SI", "milliweber", 1.000000000000000E-03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[microweber]",   new UBASE("SI", "microweber", 1.000000000000000E-06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[uWb]",   new UBASE("SI", "microweber", 1.000000000000000E-06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[nanoweber]",   new UBASE("SI", "nanoweber", 1.000000000000000E-09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[nWb]",   new UBASE("SI", "nanoweber", 1.000000000000000E-09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[picoweber]",   new UBASE("SI", "picoweber", 1.000000000000000E-12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[pWb]",   new UBASE("SI", "picoweber", 1.000000000000000E-12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[femtoweber]",   new UBASE("SI", "femtoweber", 1.000000000000000E-15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[fWb]",   new UBASE("SI", "femtoweber", 1.000000000000000E-15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[attoweber]",   new UBASE("SI", "attoweber", 1.000000000000000E-18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[aWb]",   new UBASE("SI", "attoweber", 1.000000000000000E-18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[zeptoweber]",   new UBASE("SI", "zeptoweber", 1.000000000000000E-21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[zWb]",   new UBASE("SI", "zeptoweber", 1.000000000000000E-21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[yoctoweber]",   new UBASE("SI", "yoctoweber", 1.000000000000000E-24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      unit.put("SI[yWb]",   new UBASE("SI", "yoctoweber", 1.000000000000000E-24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      _map.put("magneticInduction",   new BaseSystem("magneticInduction", unit, "1.0"));

      unit.clear();


      unit.put("cgs[abhenry]",   new UBASE("cgs", "abhenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[aH]",   new UBASE("cgs", "abhenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[emu-of-inductance]",   new UBASE("cgs", "emu-of-inductance", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[emu-H]",   new UBASE("cgs", "emu-of-inductance", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[esu-of-inductance]",   new UBASE("cgs", "esu-of-inductance", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[esu-H]",   new UBASE("cgs", "esu-of-inductance", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[stathenry]",   new UBASE("cgs", "stathenry", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("cgs[statH]",   new UBASE("cgs", "stathenry", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("IEUS[henry]",   new UBASE("IEUS", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("IEUS[H]",   new UBASE("IEUS", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("Scientific[centimeter]",   new UBASE("Scientific", "centimeter", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("Scientific[cm]",   new UBASE("Scientific", "centimeter", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[henry]",   new UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[H]",   new UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("UK[mic]",   new UBASE("UK", "mic", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("US[henry]",   new UBASE("US", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("US[H]",   new UBASE("US", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("US[henry(mean)]",   new UBASE("US", "henry(mean)", 1.000490000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("US[H(mean)]",   new UBASE("US", "henry(mean)", 1.000490000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[yottahenry]",   new UBASE("SI", "yottahenry", 1.000000000000000E+24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[YH]",   new UBASE("SI", "yottahenry", 1.000000000000000E+24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[zettahenry]",   new UBASE("SI", "zettahenry", 1.000000000000000E+21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[ZH]",   new UBASE("SI", "zettahenry", 1.000000000000000E+21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[exachenry]",   new UBASE("SI", "exachenry", 1.000000000000000E+18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[EH]",   new UBASE("SI", "exachenry", 1.000000000000000E+18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[petahenry]",   new UBASE("SI", "petahenry", 1.000000000000000E+15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[PH]",   new UBASE("SI", "petahenry", 1.000000000000000E+15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[terahenry]",   new UBASE("SI", "terahenry", 1.000000000000000E+12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[TH]",   new UBASE("SI", "terahenry", 1.000000000000000E+12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[gigahenry]",   new UBASE("SI", "gigahenry", 1.000000000000000E+09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[GH]",   new UBASE("SI", "gigahenry", 1.000000000000000E+09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[megahenry]",   new UBASE("SI", "megahenry", 1.000000000000000E+06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[MH]",   new UBASE("SI", "megahenry", 1.000000000000000E+06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[kilochenry]",   new UBASE("SI", "kilochenry", 1.000000000000000E+03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[kH]",   new UBASE("SI", "kilochenry", 1.000000000000000E+03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[hectohenry]",   new UBASE("SI", "hectohenry", 1.000000000000000E+02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[hH]",   new UBASE("SI", "hectohenry", 1.000000000000000E+02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[decachenry]",   new UBASE("SI", "decachenry", 1.000000000000000E+01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[daH]",   new UBASE("SI", "decachenry", 1.000000000000000E+01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[decihenry]",   new UBASE("SI", "decihenry", 1.000000000000000E-01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[dH]",   new UBASE("SI", "decihenry", 1.000000000000000E-01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[centihenry]",   new UBASE("SI", "centihenry", 1.000000000000000E-02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[cH]",   new UBASE("SI", "centihenry", 1.000000000000000E-02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[millihenry]",   new UBASE("SI", "millihenry", 1.000000000000000E-03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[mH]",   new UBASE("SI", "millihenry", 1.000000000000000E-03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[microhenry]",   new UBASE("SI", "microhenry", 1.000000000000000E-06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[uH]",   new UBASE("SI", "microhenry", 1.000000000000000E-06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[nanohenry]",   new UBASE("SI", "nanohenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[nH]",   new UBASE("SI", "nanohenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[picohenry]",   new UBASE("SI", "picohenry", 1.000000000000000E-12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[pH]",   new UBASE("SI", "picohenry", 1.000000000000000E-12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[femtohenry]",   new UBASE("SI", "femtohenry", 1.000000000000000E-15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[fH]",   new UBASE("SI", "femtohenry", 1.000000000000000E-15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[attohenry]",   new UBASE("SI", "attohenry", 1.000000000000000E-18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[aH]",   new UBASE("SI", "attohenry", 1.000000000000000E-18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[zeptohenry]",   new UBASE("SI", "zeptohenry", 1.000000000000000E-21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[zH]",   new UBASE("SI", "zeptohenry", 1.000000000000000E-21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[yoctohenry]",   new UBASE("SI", "yoctohenry", 1.000000000000000E-24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      unit.put("SI[yH]",   new UBASE("SI", "yoctohenry", 1.000000000000000E-24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      _map.put("inductance",   new BaseSystem("inductance", unit, "1.0"));

      unit.clear();


      unit.put("cgs[abvolt]",   new UBASE("cgs", "abvolt", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[aV]",   new UBASE("cgs", "abvolt", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[emu-of-electric-potential]",   new UBASE("cgs", "emu-of-electric-potential", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[emu-V]",   new UBASE("cgs", "emu-of-electric-potential", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[esu-of-electric-potential]",   new UBASE("cgs", "esu-of-electric-potential", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[esu-V]",   new UBASE("cgs", "esu-of-electric-potential", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[statvolt]",   new UBASE("cgs", "statvolt", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("cgs[statV]",   new UBASE("cgs", "statvolt", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("IEUS[volt]",   new UBASE("IEUS", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("IEUS[V]",   new UBASE("IEUS", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("IEUS[volt(mean)]",   new UBASE("IEUS", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("IEUS[V(mean)]",   new UBASE("IEUS", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("INT[daniell]",   new UBASE("INT", "daniell", 1.042000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("INT[volt(mean)]",   new UBASE("INT", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("INT[V(mean)]",   new UBASE("INT", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[volt]",   new UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[V]",   new UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("UK[crocodile]",   new UBASE("UK", "crocodile", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("US[volt]",   new UBASE("US", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("US[V]",   new UBASE("US", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[yottavolt]",   new UBASE("SI", "yottavolt", 1.000000000000000E+24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[YV]",   new UBASE("SI", "yottavolt", 1.000000000000000E+24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[zettavolt]",   new UBASE("SI", "zettavolt", 1.000000000000000E+21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[ZV]",   new UBASE("SI", "zettavolt", 1.000000000000000E+21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[exacvolt]",   new UBASE("SI", "exacvolt", 1.000000000000000E+18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[EV]",   new UBASE("SI", "exacvolt", 1.000000000000000E+18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[petavolt]",   new UBASE("SI", "petavolt", 1.000000000000000E+15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[PV]",   new UBASE("SI", "petavolt", 1.000000000000000E+15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[teravolt]",   new UBASE("SI", "teravolt", 1.000000000000000E+12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[TV]",   new UBASE("SI", "teravolt", 1.000000000000000E+12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[gigavolt]",   new UBASE("SI", "gigavolt", 1.000000000000000E+09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[GV]",   new UBASE("SI", "gigavolt", 1.000000000000000E+09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[megavolt]",   new UBASE("SI", "megavolt", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[MV]",   new UBASE("SI", "megavolt", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[kilocvolt]",   new UBASE("SI", "kilocvolt", 1.000000000000000E+03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[kV]",   new UBASE("SI", "kilocvolt", 1.000000000000000E+03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[hectovolt]",   new UBASE("SI", "hectovolt", 1.000000000000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[hV]",   new UBASE("SI", "hectovolt", 1.000000000000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[decavolt]",   new UBASE("SI", "decavolt", 1.000000000000000E+01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[daV]",   new UBASE("SI", "decavolt", 1.000000000000000E+01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[decivolt]",   new UBASE("SI", "decivolt", 1.000000000000000E-01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[dV]",   new UBASE("SI", "decivolt", 1.000000000000000E-01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[centivolt]",   new UBASE("SI", "centivolt", 1.000000000000000E-02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[cV]",   new UBASE("SI", "centivolt", 1.000000000000000E-02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[millivolt]",   new UBASE("SI", "millivolt", 1.000000000000000E-03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[mV]",   new UBASE("SI", "millivolt", 1.000000000000000E-03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[microvolt]",   new UBASE("SI", "microvolt", 1.000000000000000E-06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[uV]",   new UBASE("SI", "microvolt", 1.000000000000000E-06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[nanovolt]",   new UBASE("SI", "nanovolt", 1.000000000000000E-09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[nV]",   new UBASE("SI", "nanovolt", 1.000000000000000E-09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[picovolt]",   new UBASE("SI", "picovolt", 1.000000000000000E-12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[pV]",   new UBASE("SI", "picovolt", 1.000000000000000E-12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[femtovolt]",   new UBASE("SI", "femtovolt", 1.000000000000000E-15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[fV]",   new UBASE("SI", "femtovolt", 1.000000000000000E-15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[attovolt]",   new UBASE("SI", "attovolt", 1.000000000000000E-18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[aV]",   new UBASE("SI", "attovolt", 1.000000000000000E-18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[zeptovolt]",   new UBASE("SI", "zeptovolt", 1.000000000000000E-21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[zV]",   new UBASE("SI", "zeptovolt", 1.000000000000000E-21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[yoctovolt]",   new UBASE("SI", "yoctovolt", 1.000000000000000E-24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      unit.put("SI[yV]",   new UBASE("SI", "yoctovolt", 1.000000000000000E-24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      _map.put("potential",   new BaseSystem("potential", unit, "1.0"));

      unit.clear();


      unit.put("cgs[abohm]",   new UBASE("cgs", "abohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("cgs[aW]",   new UBASE("cgs", "abohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("cgs[emu-of-resistance]",   new UBASE("cgs", "emu-of-resistance", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("cgs[emi-W]",   new UBASE("cgs", "emu-of-resistance", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("cgs[esu-of-resistance]",   new UBASE("cgs", "esu-of-resistance", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("cgs[esu-W]",   new UBASE("cgs", "esu-of-resistance", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("cgs[statohm]",   new UBASE("cgs", "statohm", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("German[siemens]",   new UBASE("German", "siemens", 9.407337723424270E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("IEUS[ohm]",   new UBASE("IEUS", "ohm", 1.000495000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("IEUS[ohm(legal)]",   new UBASE("IEUS", "ohm(legal)", 9.972000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("IEUS[ohm(mean)]",   new UBASE("IEUS", "ohm(mean)", 1.000490000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("Scientific[lenz(resistance)]",   new UBASE("Scientific", "lenz(resistance)", 1.252410989790000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[jacobi]",   new UBASE("SI", "jacobi", 6.400000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[ohm]",   new UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[W]",   new UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("UK[preece]",   new UBASE("UK", "preece", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("UK[wheatstone]",   new UBASE("UK", "wheatstone", 2.500000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("US[ohm]",   new UBASE("US", "ohm", 1.000495000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("US[ohm(legal)]",   new UBASE("US", "ohm(legal)", 9.972000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("US[ohm(mean)]",   new UBASE("US", "ohm(mean)", 1.000490000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[yottaohm]",   new UBASE("SI", "yottaohm", 1.000000000000000E+24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[YW]",   new UBASE("SI", "yottaohm", 1.000000000000000E+24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[zettaohm]",   new UBASE("SI", "zettaohm", 1.000000000000000E+21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[ZW]",   new UBASE("SI", "zettaohm", 1.000000000000000E+21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[exacohm]",   new UBASE("SI", "exacohm", 1.000000000000000E+18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[EW]",   new UBASE("SI", "exacohm", 1.000000000000000E+18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[petaohm]",   new UBASE("SI", "petaohm", 1.000000000000000E+15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[PW]",   new UBASE("SI", "petaohm", 1.000000000000000E+15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[teraohm]",   new UBASE("SI", "teraohm", 1.000000000000000E+12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[TW]",   new UBASE("SI", "teraohm", 1.000000000000000E+12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[gigaohm]",   new UBASE("SI", "gigaohm", 1.000000000000000E+09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[GW]",   new UBASE("SI", "gigaohm", 1.000000000000000E+09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[megaohm]",   new UBASE("SI", "megaohm", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[MW]",   new UBASE("SI", "megaohm", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[kiloohm]",   new UBASE("SI", "kiloohm", 1.000000000000000E+03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[kW]",   new UBASE("SI", "kiloohm", 1.000000000000000E+03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[hectoohm]",   new UBASE("SI", "hectoohm", 1.000000000000000E+02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[hW]",   new UBASE("SI", "hectoohm", 1.000000000000000E+02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[decaohm]",   new UBASE("SI", "decaohm", 1.000000000000000E+01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[daW]",   new UBASE("SI", "decaohm", 1.000000000000000E+01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[deciohm]",   new UBASE("SI", "deciohm", 1.000000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[dW]",   new UBASE("SI", "deciohm", 1.000000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[centiohm]",   new UBASE("SI", "centiohm", 1.000000000000000E-02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[cW]",   new UBASE("SI", "centiohm", 1.000000000000000E-02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[milliohm]",   new UBASE("SI", "milliohm", 1.000000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[mW]",   new UBASE("SI", "milliohm", 1.000000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[microohm]",   new UBASE("SI", "microohm", 1.000000000000000E-06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[uW]",   new UBASE("SI", "microohm", 1.000000000000000E-06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[nanoohm]",   new UBASE("SI", "nanoohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[nW]",   new UBASE("SI", "nanoohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[picoohm]",   new UBASE("SI", "picoohm", 1.000000000000000E-12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[pW]",   new UBASE("SI", "picoohm", 1.000000000000000E-12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[femtoohm]",   new UBASE("SI", "femtoohm", 1.000000000000000E-15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[fW]",   new UBASE("SI", "femtoohm", 1.000000000000000E-15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[attoohm]",   new UBASE("SI", "attoohm", 1.000000000000000E-18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[aW]",   new UBASE("SI", "attoohm", 1.000000000000000E-18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[zeptoohm]",   new UBASE("SI", "zeptoohm", 1.000000000000000E-21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[zW]",   new UBASE("SI", "zeptoohm", 1.000000000000000E-21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[yoctoohm]",   new UBASE("SI", "yoctoohm", 1.000000000000000E-24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      unit.put("SI[yW]",   new UBASE("SI", "yoctoohm", 1.000000000000000E-24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      _map.put("resistance",   new BaseSystem("resistance", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[ohm-circular-mil-per-foot]",   new UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("Imperial[W-cmi/ft]",   new UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("Imperial[ohm-cmi/ft]",   new UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("INT[international-annealed-copper-standard]",   new UBASE("INT", "international-annealed-copper-standard", 1.724137931030000E-10, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("INT[IACS]",   new UBASE("INT", "international-annealed-copper-standard", 1.724137931030000E-10, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("UK[preece]",   new UBASE("UK", "preece", 1.000000000000000E-07, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("SI[ohm-meter]",   new UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("SI[W-m]",   new UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      unit.put("SI[ohm-m]",   new UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
      _map.put("resistivity",   new BaseSystem("resistivity", unit, "1.0"));

      unit.clear();


      unit.put("cgs[acoustic-ohm]",   new UBASE("cgs", "acoustic-ohm", 1.000000000000000E+05, "kg/m 4.s", "M/L4.T", "1.0"));
      unit.put("cgs[ohm(acoustic)]",   new UBASE("cgs", "ohm(acoustic)", 1.000000000000000E-05, "kg/m 4.s", "M/L4.T", "1.0"));
      unit.put("cgs[ohm(mechanical)]",   new UBASE("cgs", "ohm(mechanical)", 1.000000000000000E-05, "kg/m 4.s", "M/L4.T", "1.0"));
      unit.put("SI[ohm(mechanical)]",   new UBASE("SI", "ohm(mechanical)", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0"));
      unit.put("SI[acoustic-ohm]",   new UBASE("SI", "acoustic-ohm", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0"));
      unit.put("SI[ohm(acoustic)]",   new UBASE("SI", "ohm(acoustic)", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0"));
      _map.put("acousticImpedance",   new BaseSystem("acousticImpedance", unit, "1.0"));

      unit.clear();


      unit.put("a.u.[au-of-electric-field-strength]",   new UBASE("a.u.", "au-of-electric-field-strength", 5.142206747621690E+11, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("a.u.[auefs]",   new UBASE("a.u.", "au-of-electric-field-strength", 5.142206747621690E+11, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("a.u.[au-of-electric-potential]",   new UBASE("a.u.", "au-of-electric-potential", 2.721138624593030E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("a.u.[auep]",   new UBASE("a.u.", "au-of-electric-potential", 2.721138624593030E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[volt-per-kilometer]",   new UBASE("SI", "volt-per-kilometer", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[V/km]",   new UBASE("SI", "volt-per-kilometer", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[volt-per-meter]",   new UBASE("SI", "volt-per-meter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[V/m]",   new UBASE("SI", "volt-per-meter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[volt-per-centimeter]",   new UBASE("SI", "volt-per-centimeter", 1.000000000000000E+02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[V/cm]",   new UBASE("SI", "volt-per-centimeter", 1.000000000000000E+02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[volt-per-millimeter]",   new UBASE("SI", "volt-per-millimeter", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[V/mm]",   new UBASE("SI", "volt-per-millimeter", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[volt-per-micrometer]",   new UBASE("SI", "volt-per-micrometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[V/um]",   new UBASE("SI", "volt-per-micrometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[volt-per-nanometer]",   new UBASE("SI", "volt-per-nanometer", 1.000000000000000E+09, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[V/nm]",   new UBASE("SI", "volt-per-nanometer", 1.000000000000000E+09, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[millivolt-per-meter]",   new UBASE("SI", "millivolt-per-meter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[mV/m]",   new UBASE("SI", "millivolt-per-meter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[millivolt-per-centimeter]",   new UBASE("SI", "millivolt-per-centimeter", 1.000000000000000E-01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[mV/cm]",   new UBASE("SI", "millivolt-per-centimeter", 1.000000000000000E-01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[millivolt-per-millimeter]",   new UBASE("SI", "millivolt-per-millimeter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[mV/mm]",   new UBASE("SI", "millivolt-per-millimeter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[millivolt-per-micrometer]",   new UBASE("SI", "millivolt-per-micrometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[mV/um]",   new UBASE("SI", "millivolt-per-micrometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[millivolt-per-nanometer]",   new UBASE("SI", "millivolt-per-nanometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[mV/nm]",   new UBASE("SI", "millivolt-per-nanometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[microvolt-per-meter]",   new UBASE("SI", "microvolt-per-meter", 1.000000000000000E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[uV/m]",   new UBASE("SI", "microvolt-per-meter", 1.000000000000000E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[microvolt-per-centimeter]",   new UBASE("SI", "microvolt-per-centimeter", 1.000000000000000E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[uV/cm]",   new UBASE("SI", "microvolt-per-centimeter", 1.000000000000000E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[microvolt-per-millimeter]",   new UBASE("SI", "microvolt-per-millimeter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[uV/mm]",   new UBASE("SI", "microvolt-per-millimeter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[microvolt-per-micrometer]",   new UBASE("SI", "microvolt-per-micrometer", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[uV/um]",   new UBASE("SI", "microvolt-per-micrometer", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[mircovolt-per-nanometer]",   new UBASE("SI", "mircovolt-per-nanometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("SI[uV/nm]",   new UBASE("SI", "mircovolt-per-nanometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[volt-per-mile]",   new UBASE("Scientific", "volt-per-mile", 6.213711922373340E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[V/mi]",   new UBASE("Scientific", "volt-per-mile", 6.213711922373340E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[volt-per-yard]",   new UBASE("Scientific", "volt-per-yard", 1.093613298337710E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[V/yd]",   new UBASE("Scientific", "volt-per-yard", 1.093613298337710E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[volt-per-foot]",   new UBASE("Scientific", "volt-per-foot", 3.280839895013120E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[V/ft]",   new UBASE("Scientific", "volt-per-foot", 3.280839895013120E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[volt-per-inch]",   new UBASE("Scientific", "volt-per-inch", 3.937007874015750E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[V/in]",   new UBASE("Scientific", "volt-per-inch", 3.937007874015750E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[millivolt-per-yard]",   new UBASE("Scientific", "millivolt-per-yard", 1.093613298337710E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[mV/yd]",   new UBASE("Scientific", "millivolt-per-yard", 1.093613298337710E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[millivolt-per-foot]",   new UBASE("Scientific", "millivolt-per-foot", 3.280839895013120E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[mV/ft]",   new UBASE("Scientific", "millivolt-per-foot", 3.280839895013120E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[millivolt-per-inch]",   new UBASE("Scientific", "millivolt-per-inch", 3.937007874015750E-02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[mV/in]",   new UBASE("Scientific", "millivolt-per-inch", 3.937007874015750E-02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[microvolt-per-yard]",   new UBASE("Scientific", "microvolt-per-yard", 1.093613298337710E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[uV/yd]",   new UBASE("Scientific", "microvolt-per-yard", 1.093613298337710E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[microvolt-per-foot]",   new UBASE("Scientific", "microvolt-per-foot", 3.280839895013120E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[uV/ft]",   new UBASE("Scientific", "microvolt-per-foot", 3.280839895013120E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[microvolt-per-inch]",   new UBASE("Scientific", "microvolt-per-inch", 3.937007874015750E-05, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      unit.put("Scientific[uV/in]",   new UBASE("Scientific", "microvolt-per-inch", 3.937007874015750E-05, "kg.m/s3.A", "M.L/T3.I", "1.0"));
      _map.put("electricFieldStrength",   new BaseSystem("electricFieldStrength", unit, "1.0"));

      unit.clear();


      unit.put("a.u.[au-of-magnetic-flux-density]",   new UBASE("a.u.", "au-of-magnetic-flux-density", 2.350517567581310E+05, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("a.u.[aumfd]",   new UBASE("a.u.", "au-of-magnetic-flux-density", 2.350517567581310E+05, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("cgs[gauss]",   new UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("cgs[Gs]",   new UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("cgs[G]",   new UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("Scientific[gamma]",   new UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("Scientific[g]",   new UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[tesla]",   new UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[T]",   new UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[yottatesla]",   new UBASE("SI", "yottatesla", 1.000000000000000E+24, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[YT]",   new UBASE("SI", "yottatesla", 1.000000000000000E+24, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[zettatesla]",   new UBASE("SI", "zettatesla", 1.000000000000000E+21, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[ZT]",   new UBASE("SI", "zettatesla", 1.000000000000000E+21, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[exactesla]",   new UBASE("SI", "exactesla", 1.000000000000000E+18, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[ET]",   new UBASE("SI", "exactesla", 1.000000000000000E+18, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[petatesla]",   new UBASE("SI", "petatesla", 1.000000000000000E+15, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[PT]",   new UBASE("SI", "petatesla", 1.000000000000000E+15, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[teratesla]",   new UBASE("SI", "teratesla", 1.000000000000000E+12, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[TT]",   new UBASE("SI", "teratesla", 1.000000000000000E+12, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[gigatesla]",   new UBASE("SI", "gigatesla", 1.000000000000000E+09, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[GT]",   new UBASE("SI", "gigatesla", 1.000000000000000E+09, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[megatesla]",   new UBASE("SI", "megatesla", 1.000000000000000E+06, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[MT]",   new UBASE("SI", "megatesla", 1.000000000000000E+06, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[kiloctesla]",   new UBASE("SI", "kiloctesla", 1.000000000000000E+03, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[kT]",   new UBASE("SI", "kiloctesla", 1.000000000000000E+03, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[hectotesla]",   new UBASE("SI", "hectotesla", 1.000000000000000E+02, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[hT]",   new UBASE("SI", "hectotesla", 1.000000000000000E+02, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[decatesla]",   new UBASE("SI", "decatesla", 1.000000000000000E+01, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[daT]",   new UBASE("SI", "decatesla", 1.000000000000000E+01, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[decitesla]",   new UBASE("SI", "decitesla", 1.000000000000000E-01, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[dT]",   new UBASE("SI", "decitesla", 1.000000000000000E-01, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[centitesla]",   new UBASE("SI", "centitesla", 1.000000000000000E-02, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[cT]",   new UBASE("SI", "centitesla", 1.000000000000000E-02, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[millitesla]",   new UBASE("SI", "millitesla", 1.000000000000000E-03, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[NT]",   new UBASE("SI", "millitesla", 1.000000000000000E-03, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[microtesla]",   new UBASE("SI", "microtesla", 1.000000000000000E-06, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[uT]",   new UBASE("SI", "microtesla", 1.000000000000000E-06, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[nanotesla]",   new UBASE("SI", "nanotesla", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[nT]",   new UBASE("SI", "nanotesla", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[picotesla]",   new UBASE("SI", "picotesla", 1.000000000000000E-12, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[pT]",   new UBASE("SI", "picotesla", 1.000000000000000E-12, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[femtotesla]",   new UBASE("SI", "femtotesla", 1.000000000000000E-15, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[fT]",   new UBASE("SI", "femtotesla", 1.000000000000000E-15, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[attotesla]",   new UBASE("SI", "attotesla", 1.000000000000000E-18, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[aT]",   new UBASE("SI", "attotesla", 1.000000000000000E-18, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[zeptotesla]",   new UBASE("SI", "zeptotesla", 1.000000000000000E-21, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[zT]",   new UBASE("SI", "zeptotesla", 1.000000000000000E-21, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[yoctotesla]",   new UBASE("SI", "yoctotesla", 1.000000000000000E-24, "kg/s2.A", "M/T2.I", "1.0"));
      unit.put("SI[yT]",   new UBASE("SI", "yoctotesla", 1.000000000000000E-24, "kg/s2.A", "M/T2.I", "1.0"));
      _map.put("magneticFluxDensity",   new BaseSystem("magneticFluxDensity", unit, "1.0"));

      unit.clear();


      unit.put("a.u.[au-of-electric-field-strength-gradient]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
      unit.put("a.u.[ao]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
      unit.put("a.u.[b]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
      unit.put("a.u.[auefsg]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
      unit.put("cgs[townsend]",   new UBASE("cgs", "townsend", 1.000000000000000E+21, "kg/s3.A", "M/T3.I", "1.0"));
      unit.put("cgs[Td]",   new UBASE("cgs", "townsend", 1.000000000000000E+21, "kg/s3.A", "M/T3.I", "1.0"));
      _map.put("electricFieldGradient",   new BaseSystem("electricFieldGradient", unit, "1.0"));

      unit.clear();


      unit.put("SI[weber-per-kilometer]",   new UBASE("SI", "weber-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("SI[Wb/km]",   new UBASE("SI", "weber-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("SI[weber-per-meter]",   new UBASE("SI", "weber-per-meter", 1.000000000000000E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("SI[Wb/m]",   new UBASE("SI", "weber-per-meter", 1.000000000000000E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[weber-per-centimeter]",   new UBASE("Si", "weber-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[Wb/cm]",   new UBASE("Si", "weber-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[weber-per-millimeter]",   new UBASE("Si", "weber-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[Wb/mm]",   new UBASE("Si", "weber-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[weber-per-micrometer]",   new UBASE("Si", "weber-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[Wb/um]",   new UBASE("Si", "weber-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[weber-per-nanometer]",   new UBASE("Si", "weber-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Si[Wb/nm]",   new UBASE("Si", "weber-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[weber-per-mile]",   new UBASE("Scientific", "weber-per-mile", 6.213711922373340E-04, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[Wb/mi]",   new UBASE("Scientific", "weber-per-mile", 6.213711922373340E-04, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[weber-per-yard]",   new UBASE("Scientific", "weber-per-yard", 1.093613298337710E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[Wb/yd]",   new UBASE("Scientific", "weber-per-yard", 1.093613298337710E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[weber-per-foot]",   new UBASE("Scientific", "weber-per-foot", 3.280839895013120E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[Wb/ft]",   new UBASE("Scientific", "weber-per-foot", 3.280839895013120E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[weber-per-inch]",   new UBASE("Scientific", "weber-per-inch", 3.937007874015750E+01, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      unit.put("Scientific[Wb/in]",   new UBASE("Scientific", "weber-per-inch", 3.937007874015750E+01, "kg.m/s2.A", "M.L/T2.I", "1.0"));
      _map.put("magneticPotential",   new BaseSystem("magneticPotential", unit, "1.0"));

      unit.clear();


      unit.put("SI[henry-per-kilometer]",   new UBASE("SI", "henry-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[H/km]",   new UBASE("SI", "henry-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[henry-per-meter]",   new UBASE("SI", "henry-per-meter", 1.000000000000000E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[H/m]",   new UBASE("SI", "henry-per-meter", 1.000000000000000E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[henry-per-centimeter]",   new UBASE("SI", "henry-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[H/cm]",   new UBASE("SI", "henry-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[henry-per-millimeter]",   new UBASE("SI", "henry-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[H/mm]",   new UBASE("SI", "henry-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[henry-per-micrometer]",   new UBASE("SI", "henry-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[H/um]",   new UBASE("SI", "henry-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[henry-per-nanometer]",   new UBASE("SI", "henry-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("SI[H/nm]",   new UBASE("SI", "henry-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[henry-per-mile]",   new UBASE("Scientific", "henry-per-mile", 6.213711922373340E-04, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[H/mi]",   new UBASE("Scientific", "henry-per-mile", 6.213711922373340E-04, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[henry-per-yard]",   new UBASE("Scientific", "henry-per-yard", 1.093613298337710E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[H/yd]",   new UBASE("Scientific", "henry-per-yard", 1.093613298337710E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[henry-per-foot]",   new UBASE("Scientific", "henry-per-foot", 3.280839895013120E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[H/ft]",   new UBASE("Scientific", "henry-per-foot", 3.280839895013120E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[henry-per-inch]",   new UBASE("Scientific", "henry-per-inch", 3.937007874015750E+01, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      unit.put("Scientific[H/in]",   new UBASE("Scientific", "henry-per-inch", 3.937007874015750E+01, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
      _map.put("magneticPermeability",   new BaseSystem("magneticPermeability", unit, "1.0"));

      unit.clear();


   }

}
// EOF
