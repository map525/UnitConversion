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
// File EM.cpp
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

#include"EM.hpp"

EM& EM::Instance(void)
{
    static EM singleton;
    return singleton;
}

EM::EM(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["cgs[abampere]"] = UBASE("cgs", "abampere", 1.000000000000000E+01, "A", "I", "1.0");
   unit["cgs[aA]"] = UBASE("cgs", "abampere", 1.000000000000000E+01, "A", "I", "1.0");
   unit["IEUS[ampere]"] = UBASE("IEUS", "ampere", 9.998350000000000E-01, "A", "I", "1.0");
   unit["INT[ampere]"] = UBASE("INT", "ampere", 9.998350000000000E-01, "A", "I", "1.0");
   unit["MKSA[ampere]"] = UBASE("MKSA", "ampere", 1.000000000000000E+00, "A", "I", "1.0");
   unit["MKSA[A]"] = UBASE("MKSA", "ampere", 1.000000000000000E+00, "A", "I", "1.0");
   unit["SI[ampere]"] = UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0");
   unit["SI[A]"] = UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0");
   unit["IEUS[ampere(mean)]"] = UBASE("IEUS", "ampere(mean)", 9.998500000000000E-01, "A", "I", "1.0");
   unit["INT[ampere(mean)]"] = UBASE("INT", "ampere(mean)", 9.998500000000000E-01, "A", "I", "1.0");
   unit["SI[ampere-tum]"] = UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0");
   unit["SI[A-turn]"] = UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0");
   unit["SI[At]"] = UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0");
   unit["a.u.[au-of-electric-curent]"] = UBASE("a.u.", "au-of-electric-curent", 6.623618237495840E-03, "A", "I", "1.0");
   unit["a.u.[auec]"] = UBASE("a.u.", "au-of-electric-curent", 6.623618237495840E-03, "A", "I", "1.0");
   unit["cgs[biot]"] = UBASE("cgs", "biot", 1.000000000000000E+01, "A", "I", "1.0");
   unit["cgs[Bi]"] = UBASE("cgs", "biot", 1.000000000000000E+01, "A", "I", "1.0");
   unit["cgs[emu-of-current]"] = UBASE("cgs", "emu-of-current", 1.000000000000000E+01, "A", "I", "1.0");
   unit["cgs[emuc]"] = UBASE("cgs", "emu-of-current", 1.000000000000000E+01, "A", "I", "1.0");
   unit["Scientific[galvat]"] = UBASE("Scientific", "galvat", 1.000000000000000E+00, "A", "I", "1.0");
   unit["cgs[gilbert]"] = UBASE("cgs", "gilbert", 7.957747154594770E-01, "A", "I", "1.0");
   unit["cgs[Gb]"] = UBASE("cgs", "gilbert", 7.957747154594770E-01, "A", "I", "1.0");
   unit["Scientific[pragilbert]"] = UBASE("Scientific", "pragilbert", 1.256637061435920E+01, "A", "I", "1.0");
   unit["cgs[statampere]"] = UBASE("cgs", "statampere", 3.335640951981520E-10, "A", "I", "1.0");
   unit["cgs[statA]"] = UBASE("cgs", "statampere", 3.335640951981520E-10, "A", "I", "1.0");
   _map["current"] = BaseSystem("current", unit, "1.0");

   unit.clear();


   unit["cgs[abcoulomb]"] = UBASE("cgs", "abcoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0");
   unit["cgs[aC]"] = UBASE("cgs", "abcoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0");
   unit["SI[ampere-hour]"] = UBASE("SI", "ampere-hour", 3.600000000000000E+03, "s.A", "T.I", "1.0");
   unit["SI[A-hr]"] = UBASE("SI", "ampere-hour", 3.600000000000000E+03, "s.A", "T.I", "1.0");
   unit["a.u.[au-of-electric-charge]"] = UBASE("a.u.", "au-of-electric-charge", 1.602176634000000E-19, "s.A", "T.I", "1.0");
   unit["a.u.[aue]"] = UBASE("a.u.", "au-of-electric-charge", 1.602176634000000E-19, "s.A", "T.I", "1.0");
   unit["SI[coulomb]"] = UBASE("SI", "coulomb", 1.000000000000000E+00, "s.A", "T.I", "1.0");
   unit["SI[C]"] = UBASE("SI", "coulomb", 1.000000000000000E+00, "s.A", "T.I", "1.0");
   unit["IEUS[coulomb(int)]"] = UBASE("IEUS", "coulomb(int)", 1.000165000220600E+00, "s.A", "T.I", "1.0");
   unit["IEUS[C]"] = UBASE("IEUS", "coulomb(int)", 1.000165000220600E+00, "s.A", "T.I", "1.0");
   unit["cgs[emu-of-charge]"] = UBASE("cgs", "emu-of-charge", 1.000000000000000E+01, "s.A", "T.I", "1.0");
   unit["cgs[esu-of-charge]"] = UBASE("cgs", "esu-of-charge", 3.335640951981520E-10, "s.A", "T.I", "1.0");
   unit["cgs[franklin]"] = UBASE("cgs", "franklin", 3.335640951981520E-10, "s.A", "T.I", "1.0");
   unit["cgs[Fr]"] = UBASE("cgs", "franklin", 3.335640951981520E-10, "s.A", "T.I", "1.0");
   unit["cgs[statcoulomb]"] = UBASE("cgs", "statcoulomb", 3.335640951981520E-10, "s.A", "T.I", "1.0");
   unit["cgs[statC]"] = UBASE("cgs", "statcoulomb", 3.335640951981520E-10, "s.A", "T.I", "1.0");
   unit["SI[yottacoulomb]"] = UBASE("SI", "yottacoulomb", 1.000000000000000E+24, "s.A", "T.I", "1.0");
   unit["SI[YC]"] = UBASE("SI", "yottacoulomb", 1.000000000000000E+24, "s.A", "T.I", "1.0");
   unit["SI[zettacoulomb]"] = UBASE("SI", "zettacoulomb", 1.000000000000000E+21, "s.A", "T.I", "1.0");
   unit["SI[ZC]"] = UBASE("SI", "zettacoulomb", 1.000000000000000E+21, "s.A", "T.I", "1.0");
   unit["SI[exacoulomb]"] = UBASE("SI", "exacoulomb", 1.000000000000000E+18, "s.A", "T.I", "1.0");
   unit["SI[EC]"] = UBASE("SI", "exacoulomb", 1.000000000000000E+18, "s.A", "T.I", "1.0");
   unit["SI[petacoulomb]"] = UBASE("SI", "petacoulomb", 1.000000000000000E+15, "s.A", "T.I", "1.0");
   unit["SI[PC]"] = UBASE("SI", "petacoulomb", 1.000000000000000E+15, "s.A", "T.I", "1.0");
   unit["SI[teracoulomb]"] = UBASE("SI", "teracoulomb", 1.000000000000000E+12, "s.A", "T.I", "1.0");
   unit["SI[TC]"] = UBASE("SI", "teracoulomb", 1.000000000000000E+12, "s.A", "T.I", "1.0");
   unit["SI[gigacoulomb]"] = UBASE("SI", "gigacoulomb", 1.000000000000000E+09, "s.A", "T.I", "1.0");
   unit["SI[GC]"] = UBASE("SI", "gigacoulomb", 1.000000000000000E+09, "s.A", "T.I", "1.0");
   unit["SI[megacoulomb]"] = UBASE("SI", "megacoulomb", 1.000000000000000E+06, "s.A", "T.I", "1.0");
   unit["SI[MC]"] = UBASE("SI", "megacoulomb", 1.000000000000000E+06, "s.A", "T.I", "1.0");
   unit["SI[kilocoulomb]"] = UBASE("SI", "kilocoulomb", 1.000000000000000E+03, "s.A", "T.I", "1.0");
   unit["SI[kC]"] = UBASE("SI", "kilocoulomb", 1.000000000000000E+03, "s.A", "T.I", "1.0");
   unit["SI[hectocoulomb]"] = UBASE("SI", "hectocoulomb", 1.000000000000000E+02, "s.A", "T.I", "1.0");
   unit["SI[hC]"] = UBASE("SI", "hectocoulomb", 1.000000000000000E+02, "s.A", "T.I", "1.0");
   unit["SI[decacoulomb]"] = UBASE("SI", "decacoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0");
   unit["SI[daC]"] = UBASE("SI", "decacoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0");
   unit["SI[decicoulomb]"] = UBASE("SI", "decicoulomb", 1.000000000000000E-01, "s.A", "T.I", "1.0");
   unit["SI[dC]"] = UBASE("SI", "decicoulomb", 1.000000000000000E-01, "s.A", "T.I", "1.0");
   unit["SI[centicoulomb]"] = UBASE("SI", "centicoulomb", 1.000000000000000E-02, "s.A", "T.I", "1.0");
   unit["SI[cC]"] = UBASE("SI", "centicoulomb", 1.000000000000000E-02, "s.A", "T.I", "1.0");
   unit["SI[millicoulomb]"] = UBASE("SI", "millicoulomb", 1.000000000000000E-03, "s.A", "T.I", "1.0");
   unit["SI[mC]"] = UBASE("SI", "millicoulomb", 1.000000000000000E-03, "s.A", "T.I", "1.0");
   unit["SI[microcoulomb]"] = UBASE("SI", "microcoulomb", 1.000000000000000E-06, "s.A", "T.I", "1.0");
   unit["SI[uC]"] = UBASE("SI", "microcoulomb", 1.000000000000000E-06, "s.A", "T.I", "1.0");
   unit["SI[nanocoulomb]"] = UBASE("SI", "nanocoulomb", 1.000000000000000E-09, "s.A", "T.I", "1.0");
   unit["SI[nC]"] = UBASE("SI", "nanocoulomb", 1.000000000000000E-09, "s.A", "T.I", "1.0");
   unit["SI[picocoulomb]"] = UBASE("SI", "picocoulomb", 1.000000000000000E-12, "s.A", "T.I", "1.0");
   unit["SI[pC]"] = UBASE("SI", "picocoulomb", 1.000000000000000E-12, "s.A", "T.I", "1.0");
   unit["SI[femtocoulomb]"] = UBASE("SI", "femtocoulomb", 1.000000000000000E-15, "s.A", "T.I", "1.0");
   unit["SI[fC]"] = UBASE("SI", "femtocoulomb", 1.000000000000000E-15, "s.A", "T.I", "1.0");
   unit["SI[attocoulomb]"] = UBASE("SI", "attocoulomb", 1.000000000000000E-18, "s.A", "T.I", "1.0");
   unit["SI[aC]"] = UBASE("SI", "attocoulomb", 1.000000000000000E-18, "s.A", "T.I", "1.0");
   unit["SI[zeptocoulomb]"] = UBASE("SI", "zeptocoulomb", 1.000000000000000E-21, "s.A", "T.I", "1.0");
   unit["SI[zC]"] = UBASE("SI", "zeptocoulomb", 1.000000000000000E-21, "s.A", "T.I", "1.0");
   unit["SI[yoctocoulomb]"] = UBASE("SI", "yoctocoulomb", 1.000000000000000E-24, "s.A", "T.I", "1.0");
   unit["SI[yC]"] = UBASE("SI", "yoctocoulomb", 1.000000000000000E-24, "s.A", "T.I", "1.0");
   _map["charge"] = BaseSystem("charge", unit, "1.0");

   unit.clear();


   unit["SI[ampere-per-meter]"] = UBASE("SI", "ampere-per-meter", 1.000000000000000E+00, "A/m", "I/L", "1.0");
   unit["SI[A/m]"] = UBASE("SI", "ampere-per-meter", 1.000000000000000E+00, "A/m", "I/L", "1.0");
   unit["Scientific[lenz]"] = UBASE("Scientific", "lenz", 1.000000000000000E+00, "A/m", "I/L", "1.0");
   unit["cgs[oersted]"] = UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0");
   unit["cgs[CE]"] = UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0");
   unit["cgs[ce]"] = UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0");
   unit["Scientific[praoersted]"] = UBASE("Scientific", "praoersted", 1.256637061435920E+01, "A/m", "I/L", "1.0");
   _map["magneticFieldStrength"] = BaseSystem("magneticFieldStrength", unit, "1.0");

   unit.clear();


   unit["US[perm(0oC)]"] = UBASE("US", "perm(0oC)", 5.721357883888630E-11, "s/m", "T/L", "1.0");
   unit["US[perm(23oC)]"] = UBASE("US", "perm(23oC)", 5.745608053073760E-11, "s/m", "T/L", "1.0");
   _map["permeability"] = BaseSystem("permeability", unit, "1.0");

   unit.clear();


   unit["SI[ampere-square-meter]"] = UBASE("SI", "ampere-square-meter", 1.000000000000000E+00, "m2.A", "L2.I", "1.0");
   unit["SI[A-m2]"] = UBASE("SI", "ampere-square-meter", 1.000000000000000E+00, "m2.A", "L2.I", "1.0");
   unit["a.u.[au-of-magnetic-dipole-moment]"] = UBASE("a.u.", "au-of-magnetic-dipole-moment", 1.854802015672430E-23, "m2.A", "L2.I", "1.0");
   unit["a.u.[audpm]"] = UBASE("a.u.", "au-of-magnetic-dipole-moment", 1.854802015672430E-23, "m2.A", "L2.I", "1.0");
   unit["Scientific[magneton(bohr)]"] = UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0");
   unit["Scientific[uB]"] = UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0");
   unit["Scientific[B]"] = UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0");
   unit["Scientific[bohr-magneton]"] = UBASE("Scientific", "bohr-magneton", 9.274010078362160E-24, "m2.A", "L2.I", "1.0");
   unit["Scientific[magneton(nuclear)]"] = UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0");
   unit["Scientific[uN]"] = UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0");
   unit["Scientific[BN]"] = UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0");
   unit["Scientific[nuclear-magneton]"] = UBASE("Scientific", "nuclear-magneton", 5.050783746096370E-27, "m2.A", "L2.I", "1.0");
   _map["magneticDipoleMoment"] = BaseSystem("magneticDipoleMoment", unit, "1.0");

   unit.clear();


   unit["Imperial[ampere-per-square-inch]"] = UBASE("Imperial", "ampere-per-square-inch", 1.550003100006200E+03, "A/m2", "I/L2", "1.0");
   unit["Imperial[A/in2]"] = UBASE("Imperial", "ampere-per-square-inch", 1.550003100006200E+03, "A/m2", "I/L2", "1.0");
   unit["Imperial[ampere-per-square-foot]"] = UBASE("Imperial", "ampere-per-square-foot", 1.076391041670970E+01, "A/m2", "I/L2", "1.0");
   unit["Imperial[A/ft2]"] = UBASE("Imperial", "ampere-per-square-foot", 1.076391041670970E+01, "A/m2", "I/L2", "1.0");
   unit["Imperial[ampere-per-square-yard]"] = UBASE("Imperial", "ampere-per-square-yard", 1.195990046301080E+00, "A/m2", "I/L2", "1.0");
   unit["Imperial[A/yd2]"] = UBASE("Imperial", "ampere-per-square-yard", 1.195990046301080E+00, "A/m2", "I/L2", "1.0");
   unit["Imperial[milliampere-per-square-inch]"] = UBASE("Imperial", "milliampere-per-square-inch", 1.550003100006200E+00, "A/m2", "I/L2", "1.0");
   unit["Imperial[mA/in2]"] = UBASE("Imperial", "milliampere-per-square-inch", 1.550003100006200E+00, "A/m2", "I/L2", "1.0");
   unit["Imperial[milliampere-per-square-foot]"] = UBASE("Imperial", "milliampere-per-square-foot", 1.076391041670970E-02, "A/m2", "I/L2", "1.0");
   unit["Imperial[mA/ft2]"] = UBASE("Imperial", "milliampere-per-square-foot", 1.076391041670970E-02, "A/m2", "I/L2", "1.0");
   unit["Imperial[milliampere-per-square-yard]"] = UBASE("Imperial", "milliampere-per-square-yard", 1.195990046301080E-03, "A/m2", "I/L2", "1.0");
   unit["Imperial[mA/yd2]"] = UBASE("Imperial", "milliampere-per-square-yard", 1.195990046301080E-03, "A/m2", "I/L2", "1.0");
   unit["Imperial[microampere-per-square-inch]"] = UBASE("Imperial", "microampere-per-square-inch", 1.550003100006200E-03, "A/m2", "I/L2", "1.0");
   unit["Imperial[uA/in2]"] = UBASE("Imperial", "microampere-per-square-inch", 1.550003100006200E-03, "A/m2", "I/L2", "1.0");
   unit["Imperial[microampere-per-square-foot]"] = UBASE("Imperial", "microampere-per-square-foot", 1.076391041670970E-05, "A/m2", "I/L2", "1.0");
   unit["Imperial[uA/ft2]"] = UBASE("Imperial", "microampere-per-square-foot", 1.076391041670970E-05, "A/m2", "I/L2", "1.0");
   unit["Imperial[microampere-per-square-yard]"] = UBASE("Imperial", "microampere-per-square-yard", 1.195990046301080E-06, "A/m2", "I/L2", "1.0");
   unit["Imperial[uA/yd2]"] = UBASE("Imperial", "microampere-per-square-yard", 1.195990046301080E-06, "A/m2", "I/L2", "1.0");
   unit["SI[ampere-per-square-meter]"] = UBASE("SI", "ampere-per-square-meter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0");
   unit["SI[A/m2]"] = UBASE("SI", "ampere-per-square-meter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0");
   unit["SI[ampere-per-square-decimeter]"] = UBASE("SI", "ampere-per-square-decimeter", 1.000000000000000E+02, "A/m2", "I/L2", "1.0");
   unit["SI[A/dm2]"] = UBASE("SI", "ampere-per-square-decimeter", 1.000000000000000E+02, "A/m2", "I/L2", "1.0");
   unit["SI[ampere-per-square-centimeter]"] = UBASE("SI", "ampere-per-square-centimeter", 1.000000000000000E+04, "A/m2", "I/L2", "1.0");
   unit["SI[A/cm2]"] = UBASE("SI", "ampere-per-square-centimeter", 1.000000000000000E+04, "A/m2", "I/L2", "1.0");
   unit["SI[ampere-per-square-millimeter]"] = UBASE("SI", "ampere-per-square-millimeter", 1.000000000000000E+06, "A/m2", "I/L2", "1.0");
   unit["SI[A/mm2]"] = UBASE("SI", "ampere-per-square-millimeter", 1.000000000000000E+06, "A/m2", "I/L2", "1.0");
   unit["SI[ampere-per-square-micrometer]"] = UBASE("SI", "ampere-per-square-micrometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0");
   unit["SI[A/um2]"] = UBASE("SI", "ampere-per-square-micrometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0");
   unit["SI[ampere-per-square-nanometer]"] = UBASE("SI", "ampere-per-square-nanometer", 1.000000000000000E+18, "A/m2", "I/L2", "1.0");
   unit["SI[A/nm2]"] = UBASE("SI", "ampere-per-square-nanometer", 1.000000000000000E+18, "A/m2", "I/L2", "1.0");
   unit["Scientific[milliampere-per-square-meter]"] = UBASE("Scientific", "milliampere-per-square-meter", 1.000000000000000E-03, "A/m2", "I/L2", "1.0");
   unit["Scientific[mA/m2]"] = UBASE("Scientific", "milliampere-per-square-meter", 1.000000000000000E-03, "A/m2", "I/L2", "1.0");
   unit["SI[milliampere-per-square-decimeter]"] = UBASE("SI", "milliampere-per-square-decimeter", 1.000000000000000E-01, "A/m2", "I/L2", "1.0");
   unit["SI[mA/dm2]"] = UBASE("SI", "milliampere-per-square-decimeter", 1.000000000000000E-01, "A/m2", "I/L2", "1.0");
   unit["Scientific[milliampere-per-square-centimeter]"] = UBASE("Scientific", "milliampere-per-square-centimeter", 1.000000000000000E+01, "A/m2", "I/L2", "1.0");
   unit["Scientific[mA/cm2]"] = UBASE("Scientific", "milliampere-per-square-centimeter", 1.000000000000000E+01, "A/m2", "I/L2", "1.0");
   unit["Scientific[milliampere-per-square-millimeter]"] = UBASE("Scientific", "milliampere-per-square-millimeter", 1.000000000000000E+03, "A/m2", "I/L2", "1.0");
   unit["Scientific[mA/mm2]"] = UBASE("Scientific", "milliampere-per-square-millimeter", 1.000000000000000E+03, "A/m2", "I/L2", "1.0");
   unit["Scientific[milliampere-per-square-micrometer]"] = UBASE("Scientific", "milliampere-per-square-micrometer", 1.000000000000000E+09, "A/m2", "I/L2", "1.0");
   unit["Scientific[mA/um2]"] = UBASE("Scientific", "milliampere-per-square-micrometer", 1.000000000000000E+09, "A/m2", "I/L2", "1.0");
   unit["Scientific[milliampere-per-square-nanometer]"] = UBASE("Scientific", "milliampere-per-square-nanometer", 1.000000000000000E+15, "A/m2", "I/L2", "1.0");
   unit["Scientific[mA/nm2]"] = UBASE("Scientific", "milliampere-per-square-nanometer", 1.000000000000000E+15, "A/m2", "I/L2", "1.0");
   unit["Scientific[microampere-per-square-meter]"] = UBASE("Scientific", "microampere-per-square-meter", 1.000000000000000E-06, "A/m2", "I/L2", "1.0");
   unit["Scientific[uA/m2]"] = UBASE("Scientific", "microampere-per-square-meter", 1.000000000000000E-06, "A/m2", "I/L2", "1.0");
   unit["SI[microampere-per-square-decimeter]"] = UBASE("SI", "microampere-per-square-decimeter", 1.000000000000000E-04, "A/m2", "I/L2", "1.0");
   unit["SI[uA/dm2]"] = UBASE("SI", "microampere-per-square-decimeter", 1.000000000000000E-04, "A/m2", "I/L2", "1.0");
   unit["Scientific[microampere-per-square-centimeter]"] = UBASE("Scientific", "microampere-per-square-centimeter", 1.000000000000000E-02, "A/m2", "I/L2", "1.0");
   unit["Scientific[uA/cm2]"] = UBASE("Scientific", "microampere-per-square-centimeter", 1.000000000000000E-02, "A/m2", "I/L2", "1.0");
   unit["Scientific[microampere-per-square-millimeter]"] = UBASE("Scientific", "microampere-per-square-millimeter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0");
   unit["Scientific[uA/mm2]"] = UBASE("Scientific", "microampere-per-square-millimeter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0");
   unit["Scientific[microampere-per-square-micrometer]"] = UBASE("Scientific", "microampere-per-square-micrometer", 1.000000000000000E+06, "A/m2", "I/L2", "1.0");
   unit["Scientific[uA/um2]"] = UBASE("Scientific", "microampere-per-square-micrometer", 1.000000000000000E+06, "A/m2", "I/L2", "1.0");
   unit["Scientific[microampere-per-square-nanometer]"] = UBASE("Scientific", "microampere-per-square-nanometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0");
   unit["Scientific[uA/nm2]"] = UBASE("Scientific", "microampere-per-square-nanometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0");
   _map["currentDensity"] = BaseSystem("currentDensity", unit, "1.0");

   unit.clear();


   unit["SI[coulomb-per-square-kilometer]"] = UBASE("SI", "coulomb-per-square-kilometer", 1.000000000000000E-06, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[C/km2]"] = UBASE("SI", "coulomb-per-square-kilometer", 1.000000000000000E-06, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[coulomb-per-square-meter]"] = UBASE("SI", "coulomb-per-square-meter", 1.000000000000000E+00, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[C/m2]"] = UBASE("SI", "coulomb-per-square-meter", 1.000000000000000E+00, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[coulomb-per-square-centimeter]"] = UBASE("SI", "coulomb-per-square-centimeter", 1.000000000000000E+04, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[C/cm2]"] = UBASE("SI", "coulomb-per-square-centimeter", 1.000000000000000E+04, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[coulomb-per-square-millimeter]"] = UBASE("SI", "coulomb-per-square-millimeter", 1.000000000000000E+06, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[C/mm2]"] = UBASE("SI", "coulomb-per-square-millimeter", 1.000000000000000E+06, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[coulomb-per-square-micrometer]"] = UBASE("SI", "coulomb-per-square-micrometer", 1.000000000000000E+12, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[C/um2]"] = UBASE("SI", "coulomb-per-square-micrometer", 1.000000000000000E+12, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[coulomb-per-square-nanometer]"] = UBASE("SI", "coulomb-per-square-nanometer", 1.000000000000000E+18, "s.A/m2", "T.I/L2", "1.0");
   unit["SI[C/nm2]"] = UBASE("SI", "coulomb-per-square-nanometer", 1.000000000000000E+18, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[coulomb-per-square-mile]"] = UBASE("Scientific", "coulomb-per-square-mile", 3.861021585424460E-07, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[C/mi2]"] = UBASE("Scientific", "coulomb-per-square-mile", 3.861021585424460E-07, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[coulomb-per-square-yard]"] = UBASE("Scientific", "coulomb-per-square-yard", 1.195990046301080E+00, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[C/yd2]"] = UBASE("Scientific", "coulomb-per-square-yard", 1.195990046301080E+00, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[coulomb-per-square-foot]"] = UBASE("Scientific", "coulomb-per-square-foot", 1.076391041670970E+01, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[C/ft2]"] = UBASE("Scientific", "coulomb-per-square-foot", 1.076391041670970E+01, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[coulomb-per-square-inch]"] = UBASE("Scientific", "coulomb-per-square-inch", 1.550003100006200E+03, "s.A/m2", "T.I/L2", "1.0");
   unit["Scientific[C/in2]"] = UBASE("Scientific", "coulomb-per-square-inch", 1.550003100006200E+03, "s.A/m2", "T.I/L2", "1.0");
   _map["surfaceChargeDensity"] = BaseSystem("surfaceChargeDensity", unit, "1.0");

   unit.clear();


   unit["a.u.[au-of-electric-charge-density]"] = UBASE("a.u.", "au-of-electric-charge-density", 1.081202384566490E+12, "s.A/m3", "T.I/L3", "1.0");
   unit["a.u.[auecd]"] = UBASE("a.u.", "au-of-electric-charge-density", 1.081202384566490E+12, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[coulomb-per-cubic-kilometer]"] = UBASE("SI", "coulomb-per-cubic-kilometer", 1.000000000000000E-09, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[C/km3]"] = UBASE("SI", "coulomb-per-cubic-kilometer", 1.000000000000000E-09, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[coulomb-per-cubic-meter]"] = UBASE("SI", "coulomb-per-cubic-meter", 1.000000000000000E+00, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[C/m3]"] = UBASE("SI", "coulomb-per-cubic-meter", 1.000000000000000E+00, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[coulomb-per-cubic-centimeter]"] = UBASE("SI", "coulomb-per-cubic-centimeter", 1.000000000000000E+06, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[C/cm3]"] = UBASE("SI", "coulomb-per-cubic-centimeter", 1.000000000000000E+06, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[coulomb-per-cubic-millimeter]"] = UBASE("SI", "coulomb-per-cubic-millimeter", 1.000000000000000E+09, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[C/mm3]"] = UBASE("SI", "coulomb-per-cubic-millimeter", 1.000000000000000E+09, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[coulomb-per-cubic-micrometer]"] = UBASE("SI", "coulomb-per-cubic-micrometer", 1.000000000000000E+18, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[C/um3]"] = UBASE("SI", "coulomb-per-cubic-micrometer", 1.000000000000000E+18, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[coulomb-per-cubic-nanometer]"] = UBASE("SI", "coulomb-per-cubic-nanometer", 1.000000000000000E+27, "s.A/m3", "T.I/L3", "1.0");
   unit["SI[C/nm3]"] = UBASE("SI", "coulomb-per-cubic-nanometer", 1.000000000000000E+27, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[coulomb-per-cubic-mile]"] = UBASE("Scientific", "coulomb-per-cubic-mile", 2.399127585789280E-10, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[C/mi3]"] = UBASE("Scientific", "coulomb-per-cubic-mile", 2.399127585789280E-10, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[coulomb-per-cubic-yard]"] = UBASE("Scientific", "coulomb-per-cubic-yard", 1.307950619314390E+00, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[C/yd3]"] = UBASE("Scientific", "coulomb-per-cubic-yard", 1.307950619314390E+00, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[coulomb-per-cubic-foot]"] = UBASE("Scientific", "coulomb-per-cubic-foot", 3.531466672148860E+01, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[C/ft3]"] = UBASE("Scientific", "coulomb-per-cubic-foot", 3.531466672148860E+01, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[coulomb-per-cubic-inch]"] = UBASE("Scientific", "coulomb-per-cubic-inch", 6.102374409473230E+04, "s.A/m3", "T.I/L3", "1.0");
   unit["Scientific[C/in3]"] = UBASE("Scientific", "coulomb-per-cubic-inch", 6.102374409473230E+04, "s.A/m3", "T.I/L3", "1.0");
   _map["chargeDensity"] = BaseSystem("chargeDensity", unit, "1.0");

   unit.clear();


   unit["MKS[yrneh]"] = UBASE("MKS", "yrneh", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["SI[sturgeon]"] = UBASE("SI", "sturgeon", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[farad-per-square-second]"] = UBASE("Scientific", "farad-per-square-second", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[F/s2]"] = UBASE("Scientific", "farad-per-square-second", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[farad-per-square-minute]"] = UBASE("Scientific", "farad-per-square-minute", 2.777777777777780E-04, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[F/min2]"] = UBASE("Scientific", "farad-per-square-minute", 2.777777777777780E-04, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[farad-per-square-hour]"] = UBASE("Scientific", "farad-per-square-hour", 7.716049382716050E-08, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[F/hr2]"] = UBASE("Scientific", "farad-per-square-hour", 7.716049382716050E-08, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[farad-per-square-day]"] = UBASE("Scientific", "farad-per-square-day", 1.339591906721540E-10, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[F/day2]"] = UBASE("Scientific", "farad-per-square-day", 1.339591906721540E-10, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[farad-per-square-month]"] = UBASE("Scientific", "farad-per-square-month", 1.488435451912820E-13, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[F/mon2]"] = UBASE("Scientific", "farad-per-square-month", 1.488435451912820E-13, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[farad-per-square-year]"] = UBASE("Scientific", "farad-per-square-year", 1.005510907653620E-15, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   unit["Scientific[F/yr2]"] = UBASE("Scientific", "farad-per-square-year", 1.005510907653620E-15, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0");
   _map["magneticReluctance"] = BaseSystem("magneticReluctance", unit, "1.0");

   unit.clear();


   unit["US[daraf]"] = UBASE("US", "daraf", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[henry-per-square-second]"] = UBASE("Scientific", "henry-per-square-second", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[H/sec2]"] = UBASE("Scientific", "henry-per-square-second", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[henry-per-square-minute]"] = UBASE("Scientific", "henry-per-square-minute", 2.777777777777780E-04, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[H/min2]"] = UBASE("Scientific", "henry-per-square-minute", 2.777777777777780E-04, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[henry-per-square-hour]"] = UBASE("Scientific", "henry-per-square-hour", 7.716049382716050E-08, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[H/hr2]"] = UBASE("Scientific", "henry-per-square-hour", 7.716049382716050E-08, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[henry-per-square-day]"] = UBASE("Scientific", "henry-per-square-day", 1.339591906721540E-10, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[H/day2]"] = UBASE("Scientific", "henry-per-square-day", 1.339591906721540E-10, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[henry-per-square-month]"] = UBASE("Scientific", "henry-per-square-month", 1.488435451912820E-13, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[H/mon2]"] = UBASE("Scientific", "henry-per-square-month", 1.488435451912820E-13, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[henry-per-square-year]"] = UBASE("Scientific", "henry-per-square-year", 1.005510907653620E-15, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   unit["Scientific[H/yr2]"] = UBASE("Scientific", "henry-per-square-year", 1.005510907653620E-15, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0");
   _map["electricElastance"] = BaseSystem("electricElastance", unit, "1.0");

   unit.clear();


   unit["Imperial[ringing-equivalent-number]"] = UBASE("Imperial", "ringing-equivalent-number", 2.500000000000000E-04, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["Imperial[REN]"] = UBASE("Imperial", "ringing-equivalent-number", 2.500000000000000E-04, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[abmho]"] = UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[aS]"] = UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[1/aW]"] = UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[emu-of-conductance]"] = UBASE("cgs", "emu-of-conductance", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[emu-S]"] = UBASE("cgs", "emu-of-conductance", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[esu-of-conductance]"] = UBASE("cgs", "esu-of-conductance", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[esu-S]"] = UBASE("cgs", "esu-of-conductance", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["cgs[statmho]"] = UBASE("cgs", "statmho", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["INT[mho]"] = UBASE("INT", "mho", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["Scientific[gemmbo]"] = UBASE("Scientific", "gemmbo", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[siemens]"] = UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[S]"] = UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[yottasiemens]"] = UBASE("SI", "yottasiemens", 1.000000000000000E+24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[YS]"] = UBASE("SI", "yottasiemens", 1.000000000000000E+24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[zettasiemens]"] = UBASE("SI", "zettasiemens", 1.000000000000000E+21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[ZS]"] = UBASE("SI", "zettasiemens", 1.000000000000000E+21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[exacsiemens]"] = UBASE("SI", "exacsiemens", 1.000000000000000E+18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[ES]"] = UBASE("SI", "exacsiemens", 1.000000000000000E+18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[petasiemens]"] = UBASE("SI", "petasiemens", 1.000000000000000E+15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[PS]"] = UBASE("SI", "petasiemens", 1.000000000000000E+15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[terasiemens]"] = UBASE("SI", "terasiemens", 1.000000000000000E+12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[TS]"] = UBASE("SI", "terasiemens", 1.000000000000000E+12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[gigasiemens]"] = UBASE("SI", "gigasiemens", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[GS]"] = UBASE("SI", "gigasiemens", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[megasiemens]"] = UBASE("SI", "megasiemens", 1.000000000000000E+06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[MS]"] = UBASE("SI", "megasiemens", 1.000000000000000E+06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[kilosiemens]"] = UBASE("SI", "kilosiemens", 1.000000000000000E+03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[kS]"] = UBASE("SI", "kilosiemens", 1.000000000000000E+03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[hectosiemens]"] = UBASE("SI", "hectosiemens", 1.000000000000000E+02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[hS]"] = UBASE("SI", "hectosiemens", 1.000000000000000E+02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[decasiemens]"] = UBASE("SI", "decasiemens", 1.000000000000000E+01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[daS]"] = UBASE("SI", "decasiemens", 1.000000000000000E+01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[decisiemens]"] = UBASE("SI", "decisiemens", 1.000000000000000E-01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[dS]"] = UBASE("SI", "decisiemens", 1.000000000000000E-01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[centisiemens]"] = UBASE("SI", "centisiemens", 1.000000000000000E-02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[cS]"] = UBASE("SI", "centisiemens", 1.000000000000000E-02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[millisiemens]"] = UBASE("SI", "millisiemens", 1.000000000000000E-03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[mS]"] = UBASE("SI", "millisiemens", 1.000000000000000E-03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[microsiemens]"] = UBASE("SI", "microsiemens", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[uS]"] = UBASE("SI", "microsiemens", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[nanosiemens]"] = UBASE("SI", "nanosiemens", 1.000000000000000E-09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[nS]"] = UBASE("SI", "nanosiemens", 1.000000000000000E-09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[picosiemens]"] = UBASE("SI", "picosiemens", 1.000000000000000E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[pS]"] = UBASE("SI", "picosiemens", 1.000000000000000E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[femtosiemens]"] = UBASE("SI", "femtosiemens", 1.000000000000000E-15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[fS]"] = UBASE("SI", "femtosiemens", 1.000000000000000E-15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[attosiemens]"] = UBASE("SI", "attosiemens", 1.000000000000000E-18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[aS]"] = UBASE("SI", "attosiemens", 1.000000000000000E-18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[zeptosiemens]"] = UBASE("SI", "zeptosiemens", 1.000000000000000E-21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[zS]"] = UBASE("SI", "zeptosiemens", 1.000000000000000E-21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[yoctosiemens]"] = UBASE("SI", "yoctosiemens", 1.000000000000000E-24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   unit["SI[yS]"] = UBASE("SI", "yoctosiemens", 1.000000000000000E-24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0");
   _map["electricConductance"] = BaseSystem("electricConductance", unit, "1.0");

   unit.clear();


   unit["cgs[abfarad]"] = UBASE("cgs", "abfarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[aF]"] = UBASE("cgs", "abfarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[emu-of-electric-capacitance]"] = UBASE("cgs", "emu-of-electric-capacitance", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[emu-F]"] = UBASE("cgs", "emu-of-electric-capacitance", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[esu-of-capacitance]"] = UBASE("cgs", "esu-of-capacitance", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[esu-F]"] = UBASE("cgs", "esu-of-capacitance", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[statfarad]"] = UBASE("cgs", "statfarad", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["cgs[statC]"] = UBASE("cgs", "statfarad", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["IEUS[farad]"] = UBASE("IEUS", "farad", 9.995100000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["IEUS[F]"] = UBASE("IEUS", "farad", 9.995100000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["Imperial[centimeter]"] = UBASE("Imperial", "centimeter", 1.111880317327170E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["Imperial[cm]"] = UBASE("Imperial", "centimeter", 1.111880317327170E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["Scientific[jar]"] = UBASE("Scientific", "jar", 1.111880317327170E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["Scientific[puff]"] = UBASE("Scientific", "puff", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[farad]"] = UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[F]"] = UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[yottafarad]"] = UBASE("SI", "yottafarad", 1.000000000000000E+24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[YF]"] = UBASE("SI", "yottafarad", 1.000000000000000E+24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[zettafarad]"] = UBASE("SI", "zettafarad", 1.000000000000000E+21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[ZF]"] = UBASE("SI", "zettafarad", 1.000000000000000E+21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[exacfarad]"] = UBASE("SI", "exacfarad", 1.000000000000000E+18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[EF]"] = UBASE("SI", "exacfarad", 1.000000000000000E+18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[petafarad]"] = UBASE("SI", "petafarad", 1.000000000000000E+15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[PF]"] = UBASE("SI", "petafarad", 1.000000000000000E+15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[terafarad]"] = UBASE("SI", "terafarad", 1.000000000000000E+12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[TF]"] = UBASE("SI", "terafarad", 1.000000000000000E+12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[gigafarad]"] = UBASE("SI", "gigafarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[GF]"] = UBASE("SI", "gigafarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[megafarad]"] = UBASE("SI", "megafarad", 1.000000000000000E+06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[MF]"] = UBASE("SI", "megafarad", 1.000000000000000E+06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[kilofarad]"] = UBASE("SI", "kilofarad", 1.000000000000000E+03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[kF]"] = UBASE("SI", "kilofarad", 1.000000000000000E+03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[hectofarad]"] = UBASE("SI", "hectofarad", 1.000000000000000E+02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[hF]"] = UBASE("SI", "hectofarad", 1.000000000000000E+02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[decafarad]"] = UBASE("SI", "decafarad", 1.000000000000000E+01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[daF]"] = UBASE("SI", "decafarad", 1.000000000000000E+01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[decifarad]"] = UBASE("SI", "decifarad", 1.000000000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[dF]"] = UBASE("SI", "decifarad", 1.000000000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[centifarad]"] = UBASE("SI", "centifarad", 1.000000000000000E-02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[cF]"] = UBASE("SI", "centifarad", 1.000000000000000E-02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[millifarad]"] = UBASE("SI", "millifarad", 1.000000000000000E-03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[mF]"] = UBASE("SI", "millifarad", 1.000000000000000E-03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[microfarad]"] = UBASE("SI", "microfarad", 1.000000000000000E-06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[uF]"] = UBASE("SI", "microfarad", 1.000000000000000E-06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[nanofarad]"] = UBASE("SI", "nanofarad", 1.000000000000000E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[nF]"] = UBASE("SI", "nanofarad", 1.000000000000000E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[picofarad]"] = UBASE("SI", "picofarad", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[pF]"] = UBASE("SI", "picofarad", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[femtofarad]"] = UBASE("SI", "femtofarad", 1.000000000000000E-15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[fF]"] = UBASE("SI", "femtofarad", 1.000000000000000E-15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[attofarad]"] = UBASE("SI", "attofarad", 1.000000000000000E-18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[aF]"] = UBASE("SI", "attofarad", 1.000000000000000E-18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[zeptofarad]"] = UBASE("SI", "zeptofarad", 1.000000000000000E-21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[zF]"] = UBASE("SI", "zeptofarad", 1.000000000000000E-21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[yoctofarad]"] = UBASE("SI", "yoctofarad", 1.000000000000000E-24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   unit["SI[yF]"] = UBASE("SI", "yoctofarad", 1.000000000000000E-24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0");
   _map["capacitance"] = BaseSystem("capacitance", unit, "1.0");

   unit.clear();


   unit["cgs[roc]"] = UBASE("cgs", "roc", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["MKSA[rom]"] = UBASE("MKSA", "rom", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[reciprocal-ohm-per-inch]"] = UBASE("Scientific", "reciprocal-ohm-per-inch", 3.937007874015750E+01, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[roi]"] = UBASE("Scientific", "reciprocal-ohm-per-inch", 3.937007874015750E+01, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[reciprocal-ohm-per-foot]"] = UBASE("Scientific", "reciprocal-ohm-per-foot", 3.280839895013120E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[rof]"] = UBASE("Scientific", "reciprocal-ohm-per-foot", 3.280839895013120E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[reciprocal-ohm-per-centimeter]"] = UBASE("Scientific", "reciprocal-ohm-per-centimeter", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[roc]"] = UBASE("Scientific", "reciprocal-ohm-per-centimeter", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[reciprocal-ohm-per-meter]"] = UBASE("Scientific", "reciprocal-ohm-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[siemens-per-meter]"] = UBASE("Scientific", "siemens-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   unit["Scientific[S/m]"] = UBASE("Scientific", "siemens-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0");
   _map["conductivity"] = BaseSystem("conductivity", unit, "1.0");

   unit.clear();


   unit["cgs[rayl]"] = UBASE("cgs", "rayl", 1.000000000000000E+01, "kg/m2.s", "M/L2.T", "1.0");
   unit["MKSA[rayl]"] = UBASE("MKSA", "rayl", 1.000000000000000E+00, "kg/m2.s", "M/L2.T", "1.0");
   _map["specificAcousticImpedance"] = BaseSystem("specificAcousticImpedance", unit, "1.0");

   unit.clear();


   unit["cgs[maxwell]"] = UBASE("cgs", "maxwell", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["cgs[Mx]"] = UBASE("cgs", "maxwell", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["Imperial[kapp-line]"] = UBASE("Imperial", "kapp-line", 6.000000000000000E-05, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["Imperial[unit-pole]"] = UBASE("Imperial", "unit-pole", 1.256637061435920E-07, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["Scientific[debye]"] = UBASE("Scientific", "debye", 3.335640951981520E-30, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["Scientific[D]"] = UBASE("Scientific", "debye", 3.335640951981520E-30, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[weber]"] = UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[Wb]"] = UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["US[line]"] = UBASE("US", "line", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[yottaweber]"] = UBASE("SI", "yottaweber", 1.000000000000000E+24, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[YWb]"] = UBASE("SI", "yottaweber", 1.000000000000000E+24, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[zettaweber]"] = UBASE("SI", "zettaweber", 1.000000000000000E+21, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[ZWb]"] = UBASE("SI", "zettaweber", 1.000000000000000E+21, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[exacweber]"] = UBASE("SI", "exacweber", 1.000000000000000E+18, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[EWb]"] = UBASE("SI", "exacweber", 1.000000000000000E+18, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[petaweber]"] = UBASE("SI", "petaweber", 1.000000000000000E+15, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[PWb]"] = UBASE("SI", "petaweber", 1.000000000000000E+15, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[teraweber]"] = UBASE("SI", "teraweber", 1.000000000000000E+12, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[TWb]"] = UBASE("SI", "teraweber", 1.000000000000000E+12, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[gigaweber]"] = UBASE("SI", "gigaweber", 1.000000000000000E+09, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[GWb]"] = UBASE("SI", "gigaweber", 1.000000000000000E+09, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[megaweber]"] = UBASE("SI", "megaweber", 1.000000000000000E+06, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[MWb]"] = UBASE("SI", "megaweber", 1.000000000000000E+06, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[kiloweber]"] = UBASE("SI", "kiloweber", 1.000000000000000E+03, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[kWb]"] = UBASE("SI", "kiloweber", 1.000000000000000E+03, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[hectoweber]"] = UBASE("SI", "hectoweber", 1.000000000000000E+02, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[hWb]"] = UBASE("SI", "hectoweber", 1.000000000000000E+02, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[decaweber]"] = UBASE("SI", "decaweber", 1.000000000000000E+01, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[daWb]"] = UBASE("SI", "decaweber", 1.000000000000000E+01, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[deciweber]"] = UBASE("SI", "deciweber", 1.000000000000000E-01, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[dWb]"] = UBASE("SI", "deciweber", 1.000000000000000E-01, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[centiweber]"] = UBASE("SI", "centiweber", 1.000000000000000E-02, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[cWb]"] = UBASE("SI", "centiweber", 1.000000000000000E-02, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[milliweber]"] = UBASE("SI", "milliweber", 1.000000000000000E-03, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[mWb]"] = UBASE("SI", "milliweber", 1.000000000000000E-03, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[microweber]"] = UBASE("SI", "microweber", 1.000000000000000E-06, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[uWb]"] = UBASE("SI", "microweber", 1.000000000000000E-06, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[nanoweber]"] = UBASE("SI", "nanoweber", 1.000000000000000E-09, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[nWb]"] = UBASE("SI", "nanoweber", 1.000000000000000E-09, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[picoweber]"] = UBASE("SI", "picoweber", 1.000000000000000E-12, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[pWb]"] = UBASE("SI", "picoweber", 1.000000000000000E-12, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[femtoweber]"] = UBASE("SI", "femtoweber", 1.000000000000000E-15, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[fWb]"] = UBASE("SI", "femtoweber", 1.000000000000000E-15, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[attoweber]"] = UBASE("SI", "attoweber", 1.000000000000000E-18, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[aWb]"] = UBASE("SI", "attoweber", 1.000000000000000E-18, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[zeptoweber]"] = UBASE("SI", "zeptoweber", 1.000000000000000E-21, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[zWb]"] = UBASE("SI", "zeptoweber", 1.000000000000000E-21, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[yoctoweber]"] = UBASE("SI", "yoctoweber", 1.000000000000000E-24, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   unit["SI[yWb]"] = UBASE("SI", "yoctoweber", 1.000000000000000E-24, "kg.m2/s2.A", "M.L2/T2.I", "1.0");
   _map["magneticInduction"] = BaseSystem("magneticInduction", unit, "1.0");

   unit.clear();


   unit["cgs[abhenry]"] = UBASE("cgs", "abhenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[aH]"] = UBASE("cgs", "abhenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[emu-of-inductance]"] = UBASE("cgs", "emu-of-inductance", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[emu-H]"] = UBASE("cgs", "emu-of-inductance", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[esu-of-inductance]"] = UBASE("cgs", "esu-of-inductance", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[esu-H]"] = UBASE("cgs", "esu-of-inductance", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[stathenry]"] = UBASE("cgs", "stathenry", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["cgs[statH]"] = UBASE("cgs", "stathenry", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["IEUS[henry]"] = UBASE("IEUS", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["IEUS[H]"] = UBASE("IEUS", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["Scientific[centimeter]"] = UBASE("Scientific", "centimeter", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["Scientific[cm]"] = UBASE("Scientific", "centimeter", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[henry]"] = UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[H]"] = UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["UK[mic]"] = UBASE("UK", "mic", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["US[henry]"] = UBASE("US", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["US[H]"] = UBASE("US", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["US[henry(mean)]"] = UBASE("US", "henry(mean)", 1.000490000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["US[H(mean)]"] = UBASE("US", "henry(mean)", 1.000490000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[yottahenry]"] = UBASE("SI", "yottahenry", 1.000000000000000E+24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[YH]"] = UBASE("SI", "yottahenry", 1.000000000000000E+24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[zettahenry]"] = UBASE("SI", "zettahenry", 1.000000000000000E+21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[ZH]"] = UBASE("SI", "zettahenry", 1.000000000000000E+21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[exachenry]"] = UBASE("SI", "exachenry", 1.000000000000000E+18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[EH]"] = UBASE("SI", "exachenry", 1.000000000000000E+18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[petahenry]"] = UBASE("SI", "petahenry", 1.000000000000000E+15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[PH]"] = UBASE("SI", "petahenry", 1.000000000000000E+15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[terahenry]"] = UBASE("SI", "terahenry", 1.000000000000000E+12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[TH]"] = UBASE("SI", "terahenry", 1.000000000000000E+12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[gigahenry]"] = UBASE("SI", "gigahenry", 1.000000000000000E+09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[GH]"] = UBASE("SI", "gigahenry", 1.000000000000000E+09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[megahenry]"] = UBASE("SI", "megahenry", 1.000000000000000E+06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[MH]"] = UBASE("SI", "megahenry", 1.000000000000000E+06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[kilochenry]"] = UBASE("SI", "kilochenry", 1.000000000000000E+03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[kH]"] = UBASE("SI", "kilochenry", 1.000000000000000E+03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[hectohenry]"] = UBASE("SI", "hectohenry", 1.000000000000000E+02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[hH]"] = UBASE("SI", "hectohenry", 1.000000000000000E+02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[decachenry]"] = UBASE("SI", "decachenry", 1.000000000000000E+01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[daH]"] = UBASE("SI", "decachenry", 1.000000000000000E+01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[decihenry]"] = UBASE("SI", "decihenry", 1.000000000000000E-01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[dH]"] = UBASE("SI", "decihenry", 1.000000000000000E-01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[centihenry]"] = UBASE("SI", "centihenry", 1.000000000000000E-02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[cH]"] = UBASE("SI", "centihenry", 1.000000000000000E-02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[millihenry]"] = UBASE("SI", "millihenry", 1.000000000000000E-03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[mH]"] = UBASE("SI", "millihenry", 1.000000000000000E-03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[microhenry]"] = UBASE("SI", "microhenry", 1.000000000000000E-06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[uH]"] = UBASE("SI", "microhenry", 1.000000000000000E-06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[nanohenry]"] = UBASE("SI", "nanohenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[nH]"] = UBASE("SI", "nanohenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[picohenry]"] = UBASE("SI", "picohenry", 1.000000000000000E-12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[pH]"] = UBASE("SI", "picohenry", 1.000000000000000E-12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[femtohenry]"] = UBASE("SI", "femtohenry", 1.000000000000000E-15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[fH]"] = UBASE("SI", "femtohenry", 1.000000000000000E-15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[attohenry]"] = UBASE("SI", "attohenry", 1.000000000000000E-18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[aH]"] = UBASE("SI", "attohenry", 1.000000000000000E-18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[zeptohenry]"] = UBASE("SI", "zeptohenry", 1.000000000000000E-21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[zH]"] = UBASE("SI", "zeptohenry", 1.000000000000000E-21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[yoctohenry]"] = UBASE("SI", "yoctohenry", 1.000000000000000E-24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   unit["SI[yH]"] = UBASE("SI", "yoctohenry", 1.000000000000000E-24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0");
   _map["inductance"] = BaseSystem("inductance", unit, "1.0");

   unit.clear();


   unit["cgs[abvolt]"] = UBASE("cgs", "abvolt", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[aV]"] = UBASE("cgs", "abvolt", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[emu-of-electric-potential]"] = UBASE("cgs", "emu-of-electric-potential", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[emu-V]"] = UBASE("cgs", "emu-of-electric-potential", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[esu-of-electric-potential]"] = UBASE("cgs", "esu-of-electric-potential", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[esu-V]"] = UBASE("cgs", "esu-of-electric-potential", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[statvolt]"] = UBASE("cgs", "statvolt", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["cgs[statV]"] = UBASE("cgs", "statvolt", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["IEUS[volt]"] = UBASE("IEUS", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["IEUS[V]"] = UBASE("IEUS", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["IEUS[volt(mean)]"] = UBASE("IEUS", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["IEUS[V(mean)]"] = UBASE("IEUS", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["INT[daniell]"] = UBASE("INT", "daniell", 1.042000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["INT[volt(mean)]"] = UBASE("INT", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["INT[V(mean)]"] = UBASE("INT", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[volt]"] = UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[V]"] = UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["UK[crocodile]"] = UBASE("UK", "crocodile", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["US[volt]"] = UBASE("US", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["US[V]"] = UBASE("US", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[yottavolt]"] = UBASE("SI", "yottavolt", 1.000000000000000E+24, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[YV]"] = UBASE("SI", "yottavolt", 1.000000000000000E+24, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[zettavolt]"] = UBASE("SI", "zettavolt", 1.000000000000000E+21, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[ZV]"] = UBASE("SI", "zettavolt", 1.000000000000000E+21, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[exacvolt]"] = UBASE("SI", "exacvolt", 1.000000000000000E+18, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[EV]"] = UBASE("SI", "exacvolt", 1.000000000000000E+18, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[petavolt]"] = UBASE("SI", "petavolt", 1.000000000000000E+15, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[PV]"] = UBASE("SI", "petavolt", 1.000000000000000E+15, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[teravolt]"] = UBASE("SI", "teravolt", 1.000000000000000E+12, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[TV]"] = UBASE("SI", "teravolt", 1.000000000000000E+12, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[gigavolt]"] = UBASE("SI", "gigavolt", 1.000000000000000E+09, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[GV]"] = UBASE("SI", "gigavolt", 1.000000000000000E+09, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[megavolt]"] = UBASE("SI", "megavolt", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[MV]"] = UBASE("SI", "megavolt", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[kilocvolt]"] = UBASE("SI", "kilocvolt", 1.000000000000000E+03, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[kV]"] = UBASE("SI", "kilocvolt", 1.000000000000000E+03, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[hectovolt]"] = UBASE("SI", "hectovolt", 1.000000000000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[hV]"] = UBASE("SI", "hectovolt", 1.000000000000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[decavolt]"] = UBASE("SI", "decavolt", 1.000000000000000E+01, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[daV]"] = UBASE("SI", "decavolt", 1.000000000000000E+01, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[decivolt]"] = UBASE("SI", "decivolt", 1.000000000000000E-01, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[dV]"] = UBASE("SI", "decivolt", 1.000000000000000E-01, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[centivolt]"] = UBASE("SI", "centivolt", 1.000000000000000E-02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[cV]"] = UBASE("SI", "centivolt", 1.000000000000000E-02, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[millivolt]"] = UBASE("SI", "millivolt", 1.000000000000000E-03, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[mV]"] = UBASE("SI", "millivolt", 1.000000000000000E-03, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[microvolt]"] = UBASE("SI", "microvolt", 1.000000000000000E-06, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[uV]"] = UBASE("SI", "microvolt", 1.000000000000000E-06, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[nanovolt]"] = UBASE("SI", "nanovolt", 1.000000000000000E-09, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[nV]"] = UBASE("SI", "nanovolt", 1.000000000000000E-09, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[picovolt]"] = UBASE("SI", "picovolt", 1.000000000000000E-12, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[pV]"] = UBASE("SI", "picovolt", 1.000000000000000E-12, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[femtovolt]"] = UBASE("SI", "femtovolt", 1.000000000000000E-15, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[fV]"] = UBASE("SI", "femtovolt", 1.000000000000000E-15, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[attovolt]"] = UBASE("SI", "attovolt", 1.000000000000000E-18, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[aV]"] = UBASE("SI", "attovolt", 1.000000000000000E-18, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[zeptovolt]"] = UBASE("SI", "zeptovolt", 1.000000000000000E-21, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[zV]"] = UBASE("SI", "zeptovolt", 1.000000000000000E-21, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[yoctovolt]"] = UBASE("SI", "yoctovolt", 1.000000000000000E-24, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   unit["SI[yV]"] = UBASE("SI", "yoctovolt", 1.000000000000000E-24, "kg.m2/s3.A", "M.L2/T3.I", "1.0");
   _map["potential"] = BaseSystem("potential", unit, "1.0");

   unit.clear();


   unit["cgs[abohm]"] = UBASE("cgs", "abohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["cgs[aW]"] = UBASE("cgs", "abohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["cgs[emu-of-resistance]"] = UBASE("cgs", "emu-of-resistance", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["cgs[emi-W]"] = UBASE("cgs", "emu-of-resistance", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["cgs[esu-of-resistance]"] = UBASE("cgs", "esu-of-resistance", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["cgs[esu-W]"] = UBASE("cgs", "esu-of-resistance", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["cgs[statohm]"] = UBASE("cgs", "statohm", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["German[siemens]"] = UBASE("German", "siemens", 9.407337723424270E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["IEUS[ohm]"] = UBASE("IEUS", "ohm", 1.000495000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["IEUS[ohm(legal)]"] = UBASE("IEUS", "ohm(legal)", 9.972000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["IEUS[ohm(mean)]"] = UBASE("IEUS", "ohm(mean)", 1.000490000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["Scientific[lenz(resistance)]"] = UBASE("Scientific", "lenz(resistance)", 1.252410989790000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[jacobi]"] = UBASE("SI", "jacobi", 6.400000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[ohm]"] = UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[W]"] = UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["UK[preece]"] = UBASE("UK", "preece", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["UK[wheatstone]"] = UBASE("UK", "wheatstone", 2.500000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["US[ohm]"] = UBASE("US", "ohm", 1.000495000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["US[ohm(legal)]"] = UBASE("US", "ohm(legal)", 9.972000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["US[ohm(mean)]"] = UBASE("US", "ohm(mean)", 1.000490000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[yottaohm]"] = UBASE("SI", "yottaohm", 1.000000000000000E+24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[YW]"] = UBASE("SI", "yottaohm", 1.000000000000000E+24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[zettaohm]"] = UBASE("SI", "zettaohm", 1.000000000000000E+21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[ZW]"] = UBASE("SI", "zettaohm", 1.000000000000000E+21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[exacohm]"] = UBASE("SI", "exacohm", 1.000000000000000E+18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[EW]"] = UBASE("SI", "exacohm", 1.000000000000000E+18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[petaohm]"] = UBASE("SI", "petaohm", 1.000000000000000E+15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[PW]"] = UBASE("SI", "petaohm", 1.000000000000000E+15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[teraohm]"] = UBASE("SI", "teraohm", 1.000000000000000E+12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[TW]"] = UBASE("SI", "teraohm", 1.000000000000000E+12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[gigaohm]"] = UBASE("SI", "gigaohm", 1.000000000000000E+09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[GW]"] = UBASE("SI", "gigaohm", 1.000000000000000E+09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[megaohm]"] = UBASE("SI", "megaohm", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[MW]"] = UBASE("SI", "megaohm", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[kiloohm]"] = UBASE("SI", "kiloohm", 1.000000000000000E+03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[kW]"] = UBASE("SI", "kiloohm", 1.000000000000000E+03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[hectoohm]"] = UBASE("SI", "hectoohm", 1.000000000000000E+02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[hW]"] = UBASE("SI", "hectoohm", 1.000000000000000E+02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[decaohm]"] = UBASE("SI", "decaohm", 1.000000000000000E+01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[daW]"] = UBASE("SI", "decaohm", 1.000000000000000E+01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[deciohm]"] = UBASE("SI", "deciohm", 1.000000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[dW]"] = UBASE("SI", "deciohm", 1.000000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[centiohm]"] = UBASE("SI", "centiohm", 1.000000000000000E-02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[cW]"] = UBASE("SI", "centiohm", 1.000000000000000E-02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[milliohm]"] = UBASE("SI", "milliohm", 1.000000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[mW]"] = UBASE("SI", "milliohm", 1.000000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[microohm]"] = UBASE("SI", "microohm", 1.000000000000000E-06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[uW]"] = UBASE("SI", "microohm", 1.000000000000000E-06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[nanoohm]"] = UBASE("SI", "nanoohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[nW]"] = UBASE("SI", "nanoohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[picoohm]"] = UBASE("SI", "picoohm", 1.000000000000000E-12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[pW]"] = UBASE("SI", "picoohm", 1.000000000000000E-12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[femtoohm]"] = UBASE("SI", "femtoohm", 1.000000000000000E-15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[fW]"] = UBASE("SI", "femtoohm", 1.000000000000000E-15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[attoohm]"] = UBASE("SI", "attoohm", 1.000000000000000E-18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[aW]"] = UBASE("SI", "attoohm", 1.000000000000000E-18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[zeptoohm]"] = UBASE("SI", "zeptoohm", 1.000000000000000E-21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[zW]"] = UBASE("SI", "zeptoohm", 1.000000000000000E-21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[yoctoohm]"] = UBASE("SI", "yoctoohm", 1.000000000000000E-24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   unit["SI[yW]"] = UBASE("SI", "yoctoohm", 1.000000000000000E-24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0");
   _map["resistance"] = BaseSystem("resistance", unit, "1.0");

   unit.clear();


   unit["Imperial[ohm-circular-mil-per-foot]"] = UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["Imperial[W-cmi/ft]"] = UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["Imperial[ohm-cmi/ft]"] = UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["INT[international-annealed-copper-standard]"] = UBASE("INT", "international-annealed-copper-standard", 1.724137931030000E-10, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["INT[IACS]"] = UBASE("INT", "international-annealed-copper-standard", 1.724137931030000E-10, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["UK[preece]"] = UBASE("UK", "preece", 1.000000000000000E-07, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["SI[ohm-meter]"] = UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["SI[W-m]"] = UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   unit["SI[ohm-m]"] = UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0");
   _map["resistivity"] = BaseSystem("resistivity", unit, "1.0");

   unit.clear();


   unit["cgs[acoustic-ohm]"] = UBASE("cgs", "acoustic-ohm", 1.000000000000000E+05, "kg/m 4.s", "M/L4.T", "1.0");
   unit["cgs[ohm(acoustic)]"] = UBASE("cgs", "ohm(acoustic)", 1.000000000000000E-05, "kg/m 4.s", "M/L4.T", "1.0");
   unit["cgs[ohm(mechanical)]"] = UBASE("cgs", "ohm(mechanical)", 1.000000000000000E-05, "kg/m 4.s", "M/L4.T", "1.0");
   unit["SI[ohm(mechanical)]"] = UBASE("SI", "ohm(mechanical)", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0");
   unit["SI[acoustic-ohm]"] = UBASE("SI", "acoustic-ohm", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0");
   unit["SI[ohm(acoustic)]"] = UBASE("SI", "ohm(acoustic)", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0");
   _map["acousticImpedance"] = BaseSystem("acousticImpedance", unit, "1.0");

   unit.clear();


   unit["a.u.[au-of-electric-field-strength]"] = UBASE("a.u.", "au-of-electric-field-strength", 5.142206747621690E+11, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["a.u.[auefs]"] = UBASE("a.u.", "au-of-electric-field-strength", 5.142206747621690E+11, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["a.u.[au-of-electric-potential]"] = UBASE("a.u.", "au-of-electric-potential", 2.721138624593030E+01, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["a.u.[auep]"] = UBASE("a.u.", "au-of-electric-potential", 2.721138624593030E+01, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[volt-per-kilometer]"] = UBASE("SI", "volt-per-kilometer", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[V/km]"] = UBASE("SI", "volt-per-kilometer", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[volt-per-meter]"] = UBASE("SI", "volt-per-meter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[V/m]"] = UBASE("SI", "volt-per-meter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[volt-per-centimeter]"] = UBASE("SI", "volt-per-centimeter", 1.000000000000000E+02, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[V/cm]"] = UBASE("SI", "volt-per-centimeter", 1.000000000000000E+02, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[volt-per-millimeter]"] = UBASE("SI", "volt-per-millimeter", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[V/mm]"] = UBASE("SI", "volt-per-millimeter", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[volt-per-micrometer]"] = UBASE("SI", "volt-per-micrometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[V/um]"] = UBASE("SI", "volt-per-micrometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[volt-per-nanometer]"] = UBASE("SI", "volt-per-nanometer", 1.000000000000000E+09, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[V/nm]"] = UBASE("SI", "volt-per-nanometer", 1.000000000000000E+09, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[millivolt-per-meter]"] = UBASE("SI", "millivolt-per-meter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[mV/m]"] = UBASE("SI", "millivolt-per-meter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[millivolt-per-centimeter]"] = UBASE("SI", "millivolt-per-centimeter", 1.000000000000000E-01, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[mV/cm]"] = UBASE("SI", "millivolt-per-centimeter", 1.000000000000000E-01, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[millivolt-per-millimeter]"] = UBASE("SI", "millivolt-per-millimeter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[mV/mm]"] = UBASE("SI", "millivolt-per-millimeter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[millivolt-per-micrometer]"] = UBASE("SI", "millivolt-per-micrometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[mV/um]"] = UBASE("SI", "millivolt-per-micrometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[millivolt-per-nanometer]"] = UBASE("SI", "millivolt-per-nanometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[mV/nm]"] = UBASE("SI", "millivolt-per-nanometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[microvolt-per-meter]"] = UBASE("SI", "microvolt-per-meter", 1.000000000000000E-06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[uV/m]"] = UBASE("SI", "microvolt-per-meter", 1.000000000000000E-06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[microvolt-per-centimeter]"] = UBASE("SI", "microvolt-per-centimeter", 1.000000000000000E-04, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[uV/cm]"] = UBASE("SI", "microvolt-per-centimeter", 1.000000000000000E-04, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[microvolt-per-millimeter]"] = UBASE("SI", "microvolt-per-millimeter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[uV/mm]"] = UBASE("SI", "microvolt-per-millimeter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[microvolt-per-micrometer]"] = UBASE("SI", "microvolt-per-micrometer", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[uV/um]"] = UBASE("SI", "microvolt-per-micrometer", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[mircovolt-per-nanometer]"] = UBASE("SI", "mircovolt-per-nanometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["SI[uV/nm]"] = UBASE("SI", "mircovolt-per-nanometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[volt-per-mile]"] = UBASE("Scientific", "volt-per-mile", 6.213711922373340E-04, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[V/mi]"] = UBASE("Scientific", "volt-per-mile", 6.213711922373340E-04, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[volt-per-yard]"] = UBASE("Scientific", "volt-per-yard", 1.093613298337710E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[V/yd]"] = UBASE("Scientific", "volt-per-yard", 1.093613298337710E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[volt-per-foot]"] = UBASE("Scientific", "volt-per-foot", 3.280839895013120E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[V/ft]"] = UBASE("Scientific", "volt-per-foot", 3.280839895013120E+00, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[volt-per-inch]"] = UBASE("Scientific", "volt-per-inch", 3.937007874015750E+01, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[V/in]"] = UBASE("Scientific", "volt-per-inch", 3.937007874015750E+01, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[millivolt-per-yard]"] = UBASE("Scientific", "millivolt-per-yard", 1.093613298337710E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[mV/yd]"] = UBASE("Scientific", "millivolt-per-yard", 1.093613298337710E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[millivolt-per-foot]"] = UBASE("Scientific", "millivolt-per-foot", 3.280839895013120E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[mV/ft]"] = UBASE("Scientific", "millivolt-per-foot", 3.280839895013120E-03, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[millivolt-per-inch]"] = UBASE("Scientific", "millivolt-per-inch", 3.937007874015750E-02, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[mV/in]"] = UBASE("Scientific", "millivolt-per-inch", 3.937007874015750E-02, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[microvolt-per-yard]"] = UBASE("Scientific", "microvolt-per-yard", 1.093613298337710E-06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[uV/yd]"] = UBASE("Scientific", "microvolt-per-yard", 1.093613298337710E-06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[microvolt-per-foot]"] = UBASE("Scientific", "microvolt-per-foot", 3.280839895013120E-06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[uV/ft]"] = UBASE("Scientific", "microvolt-per-foot", 3.280839895013120E-06, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[microvolt-per-inch]"] = UBASE("Scientific", "microvolt-per-inch", 3.937007874015750E-05, "kg.m/s3.A", "M.L/T3.I", "1.0");
   unit["Scientific[uV/in]"] = UBASE("Scientific", "microvolt-per-inch", 3.937007874015750E-05, "kg.m/s3.A", "M.L/T3.I", "1.0");
   _map["electricFieldStrength"] = BaseSystem("electricFieldStrength", unit, "1.0");

   unit.clear();


   unit["a.u.[au-of-magnetic-flux-density]"] = UBASE("a.u.", "au-of-magnetic-flux-density", 2.350517567581310E+05, "kg/s2.A", "M/T2.I", "1.0");
   unit["a.u.[aumfd]"] = UBASE("a.u.", "au-of-magnetic-flux-density", 2.350517567581310E+05, "kg/s2.A", "M/T2.I", "1.0");
   unit["cgs[gauss]"] = UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0");
   unit["cgs[Gs]"] = UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0");
   unit["cgs[G]"] = UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0");
   unit["Scientific[gamma]"] = UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0");
   unit["Scientific[g]"] = UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[tesla]"] = UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[T]"] = UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[yottatesla]"] = UBASE("SI", "yottatesla", 1.000000000000000E+24, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[YT]"] = UBASE("SI", "yottatesla", 1.000000000000000E+24, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[zettatesla]"] = UBASE("SI", "zettatesla", 1.000000000000000E+21, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[ZT]"] = UBASE("SI", "zettatesla", 1.000000000000000E+21, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[exactesla]"] = UBASE("SI", "exactesla", 1.000000000000000E+18, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[ET]"] = UBASE("SI", "exactesla", 1.000000000000000E+18, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[petatesla]"] = UBASE("SI", "petatesla", 1.000000000000000E+15, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[PT]"] = UBASE("SI", "petatesla", 1.000000000000000E+15, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[teratesla]"] = UBASE("SI", "teratesla", 1.000000000000000E+12, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[TT]"] = UBASE("SI", "teratesla", 1.000000000000000E+12, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[gigatesla]"] = UBASE("SI", "gigatesla", 1.000000000000000E+09, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[GT]"] = UBASE("SI", "gigatesla", 1.000000000000000E+09, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[megatesla]"] = UBASE("SI", "megatesla", 1.000000000000000E+06, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[MT]"] = UBASE("SI", "megatesla", 1.000000000000000E+06, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[kiloctesla]"] = UBASE("SI", "kiloctesla", 1.000000000000000E+03, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[kT]"] = UBASE("SI", "kiloctesla", 1.000000000000000E+03, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[hectotesla]"] = UBASE("SI", "hectotesla", 1.000000000000000E+02, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[hT]"] = UBASE("SI", "hectotesla", 1.000000000000000E+02, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[decatesla]"] = UBASE("SI", "decatesla", 1.000000000000000E+01, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[daT]"] = UBASE("SI", "decatesla", 1.000000000000000E+01, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[decitesla]"] = UBASE("SI", "decitesla", 1.000000000000000E-01, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[dT]"] = UBASE("SI", "decitesla", 1.000000000000000E-01, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[centitesla]"] = UBASE("SI", "centitesla", 1.000000000000000E-02, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[cT]"] = UBASE("SI", "centitesla", 1.000000000000000E-02, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[millitesla]"] = UBASE("SI", "millitesla", 1.000000000000000E-03, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[NT]"] = UBASE("SI", "millitesla", 1.000000000000000E-03, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[microtesla]"] = UBASE("SI", "microtesla", 1.000000000000000E-06, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[uT]"] = UBASE("SI", "microtesla", 1.000000000000000E-06, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[nanotesla]"] = UBASE("SI", "nanotesla", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[nT]"] = UBASE("SI", "nanotesla", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[picotesla]"] = UBASE("SI", "picotesla", 1.000000000000000E-12, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[pT]"] = UBASE("SI", "picotesla", 1.000000000000000E-12, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[femtotesla]"] = UBASE("SI", "femtotesla", 1.000000000000000E-15, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[fT]"] = UBASE("SI", "femtotesla", 1.000000000000000E-15, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[attotesla]"] = UBASE("SI", "attotesla", 1.000000000000000E-18, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[aT]"] = UBASE("SI", "attotesla", 1.000000000000000E-18, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[zeptotesla]"] = UBASE("SI", "zeptotesla", 1.000000000000000E-21, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[zT]"] = UBASE("SI", "zeptotesla", 1.000000000000000E-21, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[yoctotesla]"] = UBASE("SI", "yoctotesla", 1.000000000000000E-24, "kg/s2.A", "M/T2.I", "1.0");
   unit["SI[yT]"] = UBASE("SI", "yoctotesla", 1.000000000000000E-24, "kg/s2.A", "M/T2.I", "1.0");
   _map["magneticFluxDensity"] = BaseSystem("magneticFluxDensity", unit, "1.0");

   unit.clear();


   unit["a.u.[au-of-electric-field-strength-gradient]"] = UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0");
   unit["a.u.[ao]"] = UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0");
   unit["a.u.[b]"] = UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0");
   unit["a.u.[auefsg]"] = UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0");
   unit["cgs[townsend]"] = UBASE("cgs", "townsend", 1.000000000000000E+21, "kg/s3.A", "M/T3.I", "1.0");
   unit["cgs[Td]"] = UBASE("cgs", "townsend", 1.000000000000000E+21, "kg/s3.A", "M/T3.I", "1.0");
   _map["electricFieldGradient"] = BaseSystem("electricFieldGradient", unit, "1.0");

   unit.clear();


   unit["SI[weber-per-kilometer]"] = UBASE("SI", "weber-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["SI[Wb/km]"] = UBASE("SI", "weber-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["SI[weber-per-meter]"] = UBASE("SI", "weber-per-meter", 1.000000000000000E+00, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["SI[Wb/m]"] = UBASE("SI", "weber-per-meter", 1.000000000000000E+00, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[weber-per-centimeter]"] = UBASE("Si", "weber-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[Wb/cm]"] = UBASE("Si", "weber-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[weber-per-millimeter]"] = UBASE("Si", "weber-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[Wb/mm]"] = UBASE("Si", "weber-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[weber-per-micrometer]"] = UBASE("Si", "weber-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[Wb/um]"] = UBASE("Si", "weber-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[weber-per-nanometer]"] = UBASE("Si", "weber-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Si[Wb/nm]"] = UBASE("Si", "weber-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[weber-per-mile]"] = UBASE("Scientific", "weber-per-mile", 6.213711922373340E-04, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[Wb/mi]"] = UBASE("Scientific", "weber-per-mile", 6.213711922373340E-04, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[weber-per-yard]"] = UBASE("Scientific", "weber-per-yard", 1.093613298337710E+00, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[Wb/yd]"] = UBASE("Scientific", "weber-per-yard", 1.093613298337710E+00, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[weber-per-foot]"] = UBASE("Scientific", "weber-per-foot", 3.280839895013120E+00, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[Wb/ft]"] = UBASE("Scientific", "weber-per-foot", 3.280839895013120E+00, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[weber-per-inch]"] = UBASE("Scientific", "weber-per-inch", 3.937007874015750E+01, "kg.m/s2.A", "M.L/T2.I", "1.0");
   unit["Scientific[Wb/in]"] = UBASE("Scientific", "weber-per-inch", 3.937007874015750E+01, "kg.m/s2.A", "M.L/T2.I", "1.0");
   _map["magneticPotential"] = BaseSystem("magneticPotential", unit, "1.0");

   unit.clear();


   unit["SI[henry-per-kilometer]"] = UBASE("SI", "henry-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[H/km]"] = UBASE("SI", "henry-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[henry-per-meter]"] = UBASE("SI", "henry-per-meter", 1.000000000000000E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[H/m]"] = UBASE("SI", "henry-per-meter", 1.000000000000000E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[henry-per-centimeter]"] = UBASE("SI", "henry-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[H/cm]"] = UBASE("SI", "henry-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[henry-per-millimeter]"] = UBASE("SI", "henry-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[H/mm]"] = UBASE("SI", "henry-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[henry-per-micrometer]"] = UBASE("SI", "henry-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[H/um]"] = UBASE("SI", "henry-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[henry-per-nanometer]"] = UBASE("SI", "henry-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["SI[H/nm]"] = UBASE("SI", "henry-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[henry-per-mile]"] = UBASE("Scientific", "henry-per-mile", 6.213711922373340E-04, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[H/mi]"] = UBASE("Scientific", "henry-per-mile", 6.213711922373340E-04, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[henry-per-yard]"] = UBASE("Scientific", "henry-per-yard", 1.093613298337710E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[H/yd]"] = UBASE("Scientific", "henry-per-yard", 1.093613298337710E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[henry-per-foot]"] = UBASE("Scientific", "henry-per-foot", 3.280839895013120E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[H/ft]"] = UBASE("Scientific", "henry-per-foot", 3.280839895013120E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[henry-per-inch]"] = UBASE("Scientific", "henry-per-inch", 3.937007874015750E+01, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   unit["Scientific[H/in]"] = UBASE("Scientific", "henry-per-inch", 3.937007874015750E+01, "kg.m/s2.A2", "M.L/T2.I2", "1.0");
   _map["magneticPermeability"] = BaseSystem("magneticPermeability", unit, "1.0");

   unit.clear();


}

// EOF
