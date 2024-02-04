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
// File EM.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class EM : SingleSystem
   {
       private static EM singleton_ = new EM();

       public static EM Instance()
       {
           return singleton_;
       }

       private EM() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("cgs[abampere]",   new UBASE("cgs", "abampere", 1.000000000000000E+01, "A", "I", "1.0"));
          unit.Add("cgs[aA]",   new UBASE("cgs", "abampere", 1.000000000000000E+01, "A", "I", "1.0"));
          unit.Add("IEUS[ampere]",   new UBASE("IEUS", "ampere", 9.998350000000000E-01, "A", "I", "1.0"));
          unit.Add("INT[ampere]",   new UBASE("INT", "ampere", 9.998350000000000E-01, "A", "I", "1.0"));
          unit.Add("MKSA[ampere]",   new UBASE("MKSA", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("MKSA[A]",   new UBASE("MKSA", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("SI[ampere]",   new UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("SI[A]",   new UBASE("SI", "ampere", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("IEUS[ampere(mean)]",   new UBASE("IEUS", "ampere(mean)", 9.998500000000000E-01, "A", "I", "1.0"));
          unit.Add("INT[ampere(mean)]",   new UBASE("INT", "ampere(mean)", 9.998500000000000E-01, "A", "I", "1.0"));
          unit.Add("SI[ampere-tum]",   new UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("SI[A-turn]",   new UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("SI[At]",   new UBASE("SI", "ampere-tum", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("a.u.[au-of-electric-curent]",   new UBASE("a.u.", "au-of-electric-curent", 6.623618237495840E-03, "A", "I", "1.0"));
          unit.Add("a.u.[auec]",   new UBASE("a.u.", "au-of-electric-curent", 6.623618237495840E-03, "A", "I", "1.0"));
          unit.Add("cgs[biot]",   new UBASE("cgs", "biot", 1.000000000000000E+01, "A", "I", "1.0"));
          unit.Add("cgs[Bi]",   new UBASE("cgs", "biot", 1.000000000000000E+01, "A", "I", "1.0"));
          unit.Add("cgs[emu-of-current]",   new UBASE("cgs", "emu-of-current", 1.000000000000000E+01, "A", "I", "1.0"));
          unit.Add("cgs[emuc]",   new UBASE("cgs", "emu-of-current", 1.000000000000000E+01, "A", "I", "1.0"));
          unit.Add("Scientific[galvat]",   new UBASE("Scientific", "galvat", 1.000000000000000E+00, "A", "I", "1.0"));
          unit.Add("cgs[gilbert]",   new UBASE("cgs", "gilbert", 7.957747154594770E-01, "A", "I", "1.0"));
          unit.Add("cgs[Gb]",   new UBASE("cgs", "gilbert", 7.957747154594770E-01, "A", "I", "1.0"));
          unit.Add("Scientific[pragilbert]",   new UBASE("Scientific", "pragilbert", 1.256637061435920E+01, "A", "I", "1.0"));
          unit.Add("cgs[statampere]",   new UBASE("cgs", "statampere", 3.335640951981520E-10, "A", "I", "1.0"));
          unit.Add("cgs[statA]",   new UBASE("cgs", "statampere", 3.335640951981520E-10, "A", "I", "1.0"));
          _map.Add("current",   new BaseSystem("current", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[abcoulomb]",   new UBASE("cgs", "abcoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
          unit.Add("cgs[aC]",   new UBASE("cgs", "abcoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
          unit.Add("SI[ampere-hour]",   new UBASE("SI", "ampere-hour", 3.600000000000000E+03, "s.A", "T.I", "1.0"));
          unit.Add("SI[A-hr]",   new UBASE("SI", "ampere-hour", 3.600000000000000E+03, "s.A", "T.I", "1.0"));
          unit.Add("a.u.[au-of-electric-charge]",   new UBASE("a.u.", "au-of-electric-charge", 1.602176634000000E-19, "s.A", "T.I", "1.0"));
          unit.Add("a.u.[aue]",   new UBASE("a.u.", "au-of-electric-charge", 1.602176634000000E-19, "s.A", "T.I", "1.0"));
          unit.Add("SI[coulomb]",   new UBASE("SI", "coulomb", 1.000000000000000E+00, "s.A", "T.I", "1.0"));
          unit.Add("SI[C]",   new UBASE("SI", "coulomb", 1.000000000000000E+00, "s.A", "T.I", "1.0"));
          unit.Add("IEUS[coulomb(int)]",   new UBASE("IEUS", "coulomb(int)", 1.000165000220600E+00, "s.A", "T.I", "1.0"));
          unit.Add("IEUS[C]",   new UBASE("IEUS", "coulomb(int)", 1.000165000220600E+00, "s.A", "T.I", "1.0"));
          unit.Add("cgs[emu-of-charge]",   new UBASE("cgs", "emu-of-charge", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
          unit.Add("cgs[esu-of-charge]",   new UBASE("cgs", "esu-of-charge", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
          unit.Add("cgs[franklin]",   new UBASE("cgs", "franklin", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
          unit.Add("cgs[Fr]",   new UBASE("cgs", "franklin", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
          unit.Add("cgs[statcoulomb]",   new UBASE("cgs", "statcoulomb", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
          unit.Add("cgs[statC]",   new UBASE("cgs", "statcoulomb", 3.335640951981520E-10, "s.A", "T.I", "1.0"));
          unit.Add("SI[yottacoulomb]",   new UBASE("SI", "yottacoulomb", 1.000000000000000E+24, "s.A", "T.I", "1.0"));
          unit.Add("SI[YC]",   new UBASE("SI", "yottacoulomb", 1.000000000000000E+24, "s.A", "T.I", "1.0"));
          unit.Add("SI[zettacoulomb]",   new UBASE("SI", "zettacoulomb", 1.000000000000000E+21, "s.A", "T.I", "1.0"));
          unit.Add("SI[ZC]",   new UBASE("SI", "zettacoulomb", 1.000000000000000E+21, "s.A", "T.I", "1.0"));
          unit.Add("SI[exacoulomb]",   new UBASE("SI", "exacoulomb", 1.000000000000000E+18, "s.A", "T.I", "1.0"));
          unit.Add("SI[EC]",   new UBASE("SI", "exacoulomb", 1.000000000000000E+18, "s.A", "T.I", "1.0"));
          unit.Add("SI[petacoulomb]",   new UBASE("SI", "petacoulomb", 1.000000000000000E+15, "s.A", "T.I", "1.0"));
          unit.Add("SI[PC]",   new UBASE("SI", "petacoulomb", 1.000000000000000E+15, "s.A", "T.I", "1.0"));
          unit.Add("SI[teracoulomb]",   new UBASE("SI", "teracoulomb", 1.000000000000000E+12, "s.A", "T.I", "1.0"));
          unit.Add("SI[TC]",   new UBASE("SI", "teracoulomb", 1.000000000000000E+12, "s.A", "T.I", "1.0"));
          unit.Add("SI[gigacoulomb]",   new UBASE("SI", "gigacoulomb", 1.000000000000000E+09, "s.A", "T.I", "1.0"));
          unit.Add("SI[GC]",   new UBASE("SI", "gigacoulomb", 1.000000000000000E+09, "s.A", "T.I", "1.0"));
          unit.Add("SI[megacoulomb]",   new UBASE("SI", "megacoulomb", 1.000000000000000E+06, "s.A", "T.I", "1.0"));
          unit.Add("SI[MC]",   new UBASE("SI", "megacoulomb", 1.000000000000000E+06, "s.A", "T.I", "1.0"));
          unit.Add("SI[kilocoulomb]",   new UBASE("SI", "kilocoulomb", 1.000000000000000E+03, "s.A", "T.I", "1.0"));
          unit.Add("SI[kC]",   new UBASE("SI", "kilocoulomb", 1.000000000000000E+03, "s.A", "T.I", "1.0"));
          unit.Add("SI[hectocoulomb]",   new UBASE("SI", "hectocoulomb", 1.000000000000000E+02, "s.A", "T.I", "1.0"));
          unit.Add("SI[hC]",   new UBASE("SI", "hectocoulomb", 1.000000000000000E+02, "s.A", "T.I", "1.0"));
          unit.Add("SI[decacoulomb]",   new UBASE("SI", "decacoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
          unit.Add("SI[daC]",   new UBASE("SI", "decacoulomb", 1.000000000000000E+01, "s.A", "T.I", "1.0"));
          unit.Add("SI[decicoulomb]",   new UBASE("SI", "decicoulomb", 1.000000000000000E-01, "s.A", "T.I", "1.0"));
          unit.Add("SI[dC]",   new UBASE("SI", "decicoulomb", 1.000000000000000E-01, "s.A", "T.I", "1.0"));
          unit.Add("SI[centicoulomb]",   new UBASE("SI", "centicoulomb", 1.000000000000000E-02, "s.A", "T.I", "1.0"));
          unit.Add("SI[cC]",   new UBASE("SI", "centicoulomb", 1.000000000000000E-02, "s.A", "T.I", "1.0"));
          unit.Add("SI[millicoulomb]",   new UBASE("SI", "millicoulomb", 1.000000000000000E-03, "s.A", "T.I", "1.0"));
          unit.Add("SI[mC]",   new UBASE("SI", "millicoulomb", 1.000000000000000E-03, "s.A", "T.I", "1.0"));
          unit.Add("SI[microcoulomb]",   new UBASE("SI", "microcoulomb", 1.000000000000000E-06, "s.A", "T.I", "1.0"));
          unit.Add("SI[uC]",   new UBASE("SI", "microcoulomb", 1.000000000000000E-06, "s.A", "T.I", "1.0"));
          unit.Add("SI[nanocoulomb]",   new UBASE("SI", "nanocoulomb", 1.000000000000000E-09, "s.A", "T.I", "1.0"));
          unit.Add("SI[nC]",   new UBASE("SI", "nanocoulomb", 1.000000000000000E-09, "s.A", "T.I", "1.0"));
          unit.Add("SI[picocoulomb]",   new UBASE("SI", "picocoulomb", 1.000000000000000E-12, "s.A", "T.I", "1.0"));
          unit.Add("SI[pC]",   new UBASE("SI", "picocoulomb", 1.000000000000000E-12, "s.A", "T.I", "1.0"));
          unit.Add("SI[femtocoulomb]",   new UBASE("SI", "femtocoulomb", 1.000000000000000E-15, "s.A", "T.I", "1.0"));
          unit.Add("SI[fC]",   new UBASE("SI", "femtocoulomb", 1.000000000000000E-15, "s.A", "T.I", "1.0"));
          unit.Add("SI[attocoulomb]",   new UBASE("SI", "attocoulomb", 1.000000000000000E-18, "s.A", "T.I", "1.0"));
          unit.Add("SI[aC]",   new UBASE("SI", "attocoulomb", 1.000000000000000E-18, "s.A", "T.I", "1.0"));
          unit.Add("SI[zeptocoulomb]",   new UBASE("SI", "zeptocoulomb", 1.000000000000000E-21, "s.A", "T.I", "1.0"));
          unit.Add("SI[zC]",   new UBASE("SI", "zeptocoulomb", 1.000000000000000E-21, "s.A", "T.I", "1.0"));
          unit.Add("SI[yoctocoulomb]",   new UBASE("SI", "yoctocoulomb", 1.000000000000000E-24, "s.A", "T.I", "1.0"));
          unit.Add("SI[yC]",   new UBASE("SI", "yoctocoulomb", 1.000000000000000E-24, "s.A", "T.I", "1.0"));
          _map.Add("charge",   new BaseSystem("charge", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[ampere-per-meter]",   new UBASE("SI", "ampere-per-meter", 1.000000000000000E+00, "A/m", "I/L", "1.0"));
          unit.Add("SI[A/m]",   new UBASE("SI", "ampere-per-meter", 1.000000000000000E+00, "A/m", "I/L", "1.0"));
          unit.Add("Scientific[lenz]",   new UBASE("Scientific", "lenz", 1.000000000000000E+00, "A/m", "I/L", "1.0"));
          unit.Add("cgs[oersted]",   new UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0"));
          unit.Add("cgs[CE]",   new UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0"));
          unit.Add("cgs[ce]",   new UBASE("cgs", "oersted", 7.957747154594770E+01, "A/m", "I/L", "1.0"));
          unit.Add("Scientific[praoersted]",   new UBASE("Scientific", "praoersted", 1.256637061435920E+01, "A/m", "I/L", "1.0"));
          _map.Add("magneticFieldStrength",   new BaseSystem("magneticFieldStrength", unit, "1.0"));

          unit.Clear();


          unit.Add("US[perm(0oC)]",   new UBASE("US", "perm(0oC)", 5.721357883888630E-11, "s/m", "T/L", "1.0"));
          unit.Add("US[perm(23oC)]",   new UBASE("US", "perm(23oC)", 5.745608053073760E-11, "s/m", "T/L", "1.0"));
          _map.Add("permeability",   new BaseSystem("permeability", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[ampere-square-meter]",   new UBASE("SI", "ampere-square-meter", 1.000000000000000E+00, "m2.A", "L2.I", "1.0"));
          unit.Add("SI[A-m2]",   new UBASE("SI", "ampere-square-meter", 1.000000000000000E+00, "m2.A", "L2.I", "1.0"));
          unit.Add("a.u.[au-of-magnetic-dipole-moment]",   new UBASE("a.u.", "au-of-magnetic-dipole-moment", 1.854802015672430E-23, "m2.A", "L2.I", "1.0"));
          unit.Add("a.u.[audpm]",   new UBASE("a.u.", "au-of-magnetic-dipole-moment", 1.854802015672430E-23, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[magneton(bohr)]",   new UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[uB]",   new UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[B]",   new UBASE("Scientific", "magneton(bohr)", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[bohr-magneton]",   new UBASE("Scientific", "bohr-magneton", 9.274010078362160E-24, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[magneton(nuclear)]",   new UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[uN]",   new UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[BN]",   new UBASE("Scientific", "magneton(nuclear)", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
          unit.Add("Scientific[nuclear-magneton]",   new UBASE("Scientific", "nuclear-magneton", 5.050783746096370E-27, "m2.A", "L2.I", "1.0"));
          _map.Add("magneticDipoleMoment",   new BaseSystem("magneticDipoleMoment", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[ampere-per-square-inch]",   new UBASE("Imperial", "ampere-per-square-inch", 1.550003100006200E+03, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[A/in2]",   new UBASE("Imperial", "ampere-per-square-inch", 1.550003100006200E+03, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[ampere-per-square-foot]",   new UBASE("Imperial", "ampere-per-square-foot", 1.076391041670970E+01, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[A/ft2]",   new UBASE("Imperial", "ampere-per-square-foot", 1.076391041670970E+01, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[ampere-per-square-yard]",   new UBASE("Imperial", "ampere-per-square-yard", 1.195990046301080E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[A/yd2]",   new UBASE("Imperial", "ampere-per-square-yard", 1.195990046301080E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[milliampere-per-square-inch]",   new UBASE("Imperial", "milliampere-per-square-inch", 1.550003100006200E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[mA/in2]",   new UBASE("Imperial", "milliampere-per-square-inch", 1.550003100006200E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[milliampere-per-square-foot]",   new UBASE("Imperial", "milliampere-per-square-foot", 1.076391041670970E-02, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[mA/ft2]",   new UBASE("Imperial", "milliampere-per-square-foot", 1.076391041670970E-02, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[milliampere-per-square-yard]",   new UBASE("Imperial", "milliampere-per-square-yard", 1.195990046301080E-03, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[mA/yd2]",   new UBASE("Imperial", "milliampere-per-square-yard", 1.195990046301080E-03, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[microampere-per-square-inch]",   new UBASE("Imperial", "microampere-per-square-inch", 1.550003100006200E-03, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[uA/in2]",   new UBASE("Imperial", "microampere-per-square-inch", 1.550003100006200E-03, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[microampere-per-square-foot]",   new UBASE("Imperial", "microampere-per-square-foot", 1.076391041670970E-05, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[uA/ft2]",   new UBASE("Imperial", "microampere-per-square-foot", 1.076391041670970E-05, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[microampere-per-square-yard]",   new UBASE("Imperial", "microampere-per-square-yard", 1.195990046301080E-06, "A/m2", "I/L2", "1.0"));
          unit.Add("Imperial[uA/yd2]",   new UBASE("Imperial", "microampere-per-square-yard", 1.195990046301080E-06, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[ampere-per-square-meter]",   new UBASE("SI", "ampere-per-square-meter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[A/m2]",   new UBASE("SI", "ampere-per-square-meter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[ampere-per-square-decimeter]",   new UBASE("SI", "ampere-per-square-decimeter", 1.000000000000000E+02, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[A/dm2]",   new UBASE("SI", "ampere-per-square-decimeter", 1.000000000000000E+02, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[ampere-per-square-centimeter]",   new UBASE("SI", "ampere-per-square-centimeter", 1.000000000000000E+04, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[A/cm2]",   new UBASE("SI", "ampere-per-square-centimeter", 1.000000000000000E+04, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[ampere-per-square-millimeter]",   new UBASE("SI", "ampere-per-square-millimeter", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[A/mm2]",   new UBASE("SI", "ampere-per-square-millimeter", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[ampere-per-square-micrometer]",   new UBASE("SI", "ampere-per-square-micrometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[A/um2]",   new UBASE("SI", "ampere-per-square-micrometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[ampere-per-square-nanometer]",   new UBASE("SI", "ampere-per-square-nanometer", 1.000000000000000E+18, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[A/nm2]",   new UBASE("SI", "ampere-per-square-nanometer", 1.000000000000000E+18, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[milliampere-per-square-meter]",   new UBASE("Scientific", "milliampere-per-square-meter", 1.000000000000000E-03, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[mA/m2]",   new UBASE("Scientific", "milliampere-per-square-meter", 1.000000000000000E-03, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[milliampere-per-square-decimeter]",   new UBASE("SI", "milliampere-per-square-decimeter", 1.000000000000000E-01, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[mA/dm2]",   new UBASE("SI", "milliampere-per-square-decimeter", 1.000000000000000E-01, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[milliampere-per-square-centimeter]",   new UBASE("Scientific", "milliampere-per-square-centimeter", 1.000000000000000E+01, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[mA/cm2]",   new UBASE("Scientific", "milliampere-per-square-centimeter", 1.000000000000000E+01, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[milliampere-per-square-millimeter]",   new UBASE("Scientific", "milliampere-per-square-millimeter", 1.000000000000000E+03, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[mA/mm2]",   new UBASE("Scientific", "milliampere-per-square-millimeter", 1.000000000000000E+03, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[milliampere-per-square-micrometer]",   new UBASE("Scientific", "milliampere-per-square-micrometer", 1.000000000000000E+09, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[mA/um2]",   new UBASE("Scientific", "milliampere-per-square-micrometer", 1.000000000000000E+09, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[milliampere-per-square-nanometer]",   new UBASE("Scientific", "milliampere-per-square-nanometer", 1.000000000000000E+15, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[mA/nm2]",   new UBASE("Scientific", "milliampere-per-square-nanometer", 1.000000000000000E+15, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[microampere-per-square-meter]",   new UBASE("Scientific", "microampere-per-square-meter", 1.000000000000000E-06, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[uA/m2]",   new UBASE("Scientific", "microampere-per-square-meter", 1.000000000000000E-06, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[microampere-per-square-decimeter]",   new UBASE("SI", "microampere-per-square-decimeter", 1.000000000000000E-04, "A/m2", "I/L2", "1.0"));
          unit.Add("SI[uA/dm2]",   new UBASE("SI", "microampere-per-square-decimeter", 1.000000000000000E-04, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[microampere-per-square-centimeter]",   new UBASE("Scientific", "microampere-per-square-centimeter", 1.000000000000000E-02, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[uA/cm2]",   new UBASE("Scientific", "microampere-per-square-centimeter", 1.000000000000000E-02, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[microampere-per-square-millimeter]",   new UBASE("Scientific", "microampere-per-square-millimeter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[uA/mm2]",   new UBASE("Scientific", "microampere-per-square-millimeter", 1.000000000000000E+00, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[microampere-per-square-micrometer]",   new UBASE("Scientific", "microampere-per-square-micrometer", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[uA/um2]",   new UBASE("Scientific", "microampere-per-square-micrometer", 1.000000000000000E+06, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[microampere-per-square-nanometer]",   new UBASE("Scientific", "microampere-per-square-nanometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
          unit.Add("Scientific[uA/nm2]",   new UBASE("Scientific", "microampere-per-square-nanometer", 1.000000000000000E+12, "A/m2", "I/L2", "1.0"));
          _map.Add("currentDensity",   new BaseSystem("currentDensity", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[coulomb-per-square-kilometer]",   new UBASE("SI", "coulomb-per-square-kilometer", 1.000000000000000E-06, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[C/km2]",   new UBASE("SI", "coulomb-per-square-kilometer", 1.000000000000000E-06, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[coulomb-per-square-meter]",   new UBASE("SI", "coulomb-per-square-meter", 1.000000000000000E+00, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[C/m2]",   new UBASE("SI", "coulomb-per-square-meter", 1.000000000000000E+00, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[coulomb-per-square-centimeter]",   new UBASE("SI", "coulomb-per-square-centimeter", 1.000000000000000E+04, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[C/cm2]",   new UBASE("SI", "coulomb-per-square-centimeter", 1.000000000000000E+04, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[coulomb-per-square-millimeter]",   new UBASE("SI", "coulomb-per-square-millimeter", 1.000000000000000E+06, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[C/mm2]",   new UBASE("SI", "coulomb-per-square-millimeter", 1.000000000000000E+06, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[coulomb-per-square-micrometer]",   new UBASE("SI", "coulomb-per-square-micrometer", 1.000000000000000E+12, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[C/um2]",   new UBASE("SI", "coulomb-per-square-micrometer", 1.000000000000000E+12, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[coulomb-per-square-nanometer]",   new UBASE("SI", "coulomb-per-square-nanometer", 1.000000000000000E+18, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("SI[C/nm2]",   new UBASE("SI", "coulomb-per-square-nanometer", 1.000000000000000E+18, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[coulomb-per-square-mile]",   new UBASE("Scientific", "coulomb-per-square-mile", 3.861021585424460E-07, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[C/mi2]",   new UBASE("Scientific", "coulomb-per-square-mile", 3.861021585424460E-07, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[coulomb-per-square-yard]",   new UBASE("Scientific", "coulomb-per-square-yard", 1.195990046301080E+00, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[C/yd2]",   new UBASE("Scientific", "coulomb-per-square-yard", 1.195990046301080E+00, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[coulomb-per-square-foot]",   new UBASE("Scientific", "coulomb-per-square-foot", 1.076391041670970E+01, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[C/ft2]",   new UBASE("Scientific", "coulomb-per-square-foot", 1.076391041670970E+01, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[coulomb-per-square-inch]",   new UBASE("Scientific", "coulomb-per-square-inch", 1.550003100006200E+03, "s.A/m2", "T.I/L2", "1.0"));
          unit.Add("Scientific[C/in2]",   new UBASE("Scientific", "coulomb-per-square-inch", 1.550003100006200E+03, "s.A/m2", "T.I/L2", "1.0"));
          _map.Add("surfaceChargeDensity",   new BaseSystem("surfaceChargeDensity", unit, "1.0"));

          unit.Clear();


          unit.Add("a.u.[au-of-electric-charge-density]",   new UBASE("a.u.", "au-of-electric-charge-density", 1.081202384566490E+12, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("a.u.[auecd]",   new UBASE("a.u.", "au-of-electric-charge-density", 1.081202384566490E+12, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[coulomb-per-cubic-kilometer]",   new UBASE("SI", "coulomb-per-cubic-kilometer", 1.000000000000000E-09, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[C/km3]",   new UBASE("SI", "coulomb-per-cubic-kilometer", 1.000000000000000E-09, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[coulomb-per-cubic-meter]",   new UBASE("SI", "coulomb-per-cubic-meter", 1.000000000000000E+00, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[C/m3]",   new UBASE("SI", "coulomb-per-cubic-meter", 1.000000000000000E+00, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[coulomb-per-cubic-centimeter]",   new UBASE("SI", "coulomb-per-cubic-centimeter", 1.000000000000000E+06, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[C/cm3]",   new UBASE("SI", "coulomb-per-cubic-centimeter", 1.000000000000000E+06, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[coulomb-per-cubic-millimeter]",   new UBASE("SI", "coulomb-per-cubic-millimeter", 1.000000000000000E+09, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[C/mm3]",   new UBASE("SI", "coulomb-per-cubic-millimeter", 1.000000000000000E+09, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[coulomb-per-cubic-micrometer]",   new UBASE("SI", "coulomb-per-cubic-micrometer", 1.000000000000000E+18, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[C/um3]",   new UBASE("SI", "coulomb-per-cubic-micrometer", 1.000000000000000E+18, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[coulomb-per-cubic-nanometer]",   new UBASE("SI", "coulomb-per-cubic-nanometer", 1.000000000000000E+27, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("SI[C/nm3]",   new UBASE("SI", "coulomb-per-cubic-nanometer", 1.000000000000000E+27, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[coulomb-per-cubic-mile]",   new UBASE("Scientific", "coulomb-per-cubic-mile", 2.399127585789280E-10, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[C/mi3]",   new UBASE("Scientific", "coulomb-per-cubic-mile", 2.399127585789280E-10, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[coulomb-per-cubic-yard]",   new UBASE("Scientific", "coulomb-per-cubic-yard", 1.307950619314390E+00, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[C/yd3]",   new UBASE("Scientific", "coulomb-per-cubic-yard", 1.307950619314390E+00, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[coulomb-per-cubic-foot]",   new UBASE("Scientific", "coulomb-per-cubic-foot", 3.531466672148860E+01, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[C/ft3]",   new UBASE("Scientific", "coulomb-per-cubic-foot", 3.531466672148860E+01, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[coulomb-per-cubic-inch]",   new UBASE("Scientific", "coulomb-per-cubic-inch", 6.102374409473230E+04, "s.A/m3", "T.I/L3", "1.0"));
          unit.Add("Scientific[C/in3]",   new UBASE("Scientific", "coulomb-per-cubic-inch", 6.102374409473230E+04, "s.A/m3", "T.I/L3", "1.0"));
          _map.Add("chargeDensity",   new BaseSystem("chargeDensity", unit, "1.0"));

          unit.Clear();


          unit.Add("MKS[yrneh]",   new UBASE("MKS", "yrneh", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("SI[sturgeon]",   new UBASE("SI", "sturgeon", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[farad-per-square-second]",   new UBASE("Scientific", "farad-per-square-second", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[F/s2]",   new UBASE("Scientific", "farad-per-square-second", 1.000000000000000E+00, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[farad-per-square-minute]",   new UBASE("Scientific", "farad-per-square-minute", 2.777777777777780E-04, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[F/min2]",   new UBASE("Scientific", "farad-per-square-minute", 2.777777777777780E-04, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[farad-per-square-hour]",   new UBASE("Scientific", "farad-per-square-hour", 7.716049382716050E-08, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[F/hr2]",   new UBASE("Scientific", "farad-per-square-hour", 7.716049382716050E-08, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[farad-per-square-day]",   new UBASE("Scientific", "farad-per-square-day", 1.339591906721540E-10, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[F/day2]",   new UBASE("Scientific", "farad-per-square-day", 1.339591906721540E-10, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[farad-per-square-month]",   new UBASE("Scientific", "farad-per-square-month", 1.488435451912820E-13, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[F/mon2]",   new UBASE("Scientific", "farad-per-square-month", 1.488435451912820E-13, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[farad-per-square-year]",   new UBASE("Scientific", "farad-per-square-year", 1.005510907653620E-15, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          unit.Add("Scientific[F/yr2]",   new UBASE("Scientific", "farad-per-square-year", 1.005510907653620E-15, "s2.A2/kg.m2", "T2.I2/M.L2", "1.0"));
          _map.Add("magneticReluctance",   new BaseSystem("magneticReluctance", unit, "1.0"));

          unit.Clear();


          unit.Add("US[daraf]",   new UBASE("US", "daraf", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[henry-per-square-second]",   new UBASE("Scientific", "henry-per-square-second", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[H/sec2]",   new UBASE("Scientific", "henry-per-square-second", 1.000000000000000E+00, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[henry-per-square-minute]",   new UBASE("Scientific", "henry-per-square-minute", 2.777777777777780E-04, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[H/min2]",   new UBASE("Scientific", "henry-per-square-minute", 2.777777777777780E-04, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[henry-per-square-hour]",   new UBASE("Scientific", "henry-per-square-hour", 7.716049382716050E-08, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[H/hr2]",   new UBASE("Scientific", "henry-per-square-hour", 7.716049382716050E-08, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[henry-per-square-day]",   new UBASE("Scientific", "henry-per-square-day", 1.339591906721540E-10, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[H/day2]",   new UBASE("Scientific", "henry-per-square-day", 1.339591906721540E-10, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[henry-per-square-month]",   new UBASE("Scientific", "henry-per-square-month", 1.488435451912820E-13, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[H/mon2]",   new UBASE("Scientific", "henry-per-square-month", 1.488435451912820E-13, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[henry-per-square-year]",   new UBASE("Scientific", "henry-per-square-year", 1.005510907653620E-15, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          unit.Add("Scientific[H/yr2]",   new UBASE("Scientific", "henry-per-square-year", 1.005510907653620E-15, "kg.m2/s4.A2", "M.L2/T4.I2", "1.0"));
          _map.Add("electricElastance",   new BaseSystem("electricElastance", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[ringing-equivalent-number]",   new UBASE("Imperial", "ringing-equivalent-number", 2.500000000000000E-04, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("Imperial[REN]",   new UBASE("Imperial", "ringing-equivalent-number", 2.500000000000000E-04, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[abmho]",   new UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[aS]",   new UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[1/aW]",   new UBASE("cgs", "abmho", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[emu-of-conductance]",   new UBASE("cgs", "emu-of-conductance", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[emu-S]",   new UBASE("cgs", "emu-of-conductance", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[esu-of-conductance]",   new UBASE("cgs", "esu-of-conductance", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[esu-S]",   new UBASE("cgs", "esu-of-conductance", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("cgs[statmho]",   new UBASE("cgs", "statmho", 1.112650056053620E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("INT[mho]",   new UBASE("INT", "mho", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("Scientific[gemmbo]",   new UBASE("Scientific", "gemmbo", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[siemens]",   new UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[S]",   new UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[yottasiemens]",   new UBASE("SI", "yottasiemens", 1.000000000000000E+24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[YS]",   new UBASE("SI", "yottasiemens", 1.000000000000000E+24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[zettasiemens]",   new UBASE("SI", "zettasiemens", 1.000000000000000E+21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[ZS]",   new UBASE("SI", "zettasiemens", 1.000000000000000E+21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[exacsiemens]",   new UBASE("SI", "exacsiemens", 1.000000000000000E+18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[ES]",   new UBASE("SI", "exacsiemens", 1.000000000000000E+18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[petasiemens]",   new UBASE("SI", "petasiemens", 1.000000000000000E+15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[PS]",   new UBASE("SI", "petasiemens", 1.000000000000000E+15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[terasiemens]",   new UBASE("SI", "terasiemens", 1.000000000000000E+12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[TS]",   new UBASE("SI", "terasiemens", 1.000000000000000E+12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[gigasiemens]",   new UBASE("SI", "gigasiemens", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[GS]",   new UBASE("SI", "gigasiemens", 1.000000000000000E+09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[megasiemens]",   new UBASE("SI", "megasiemens", 1.000000000000000E+06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[MS]",   new UBASE("SI", "megasiemens", 1.000000000000000E+06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[kilosiemens]",   new UBASE("SI", "kilosiemens", 1.000000000000000E+03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[kS]",   new UBASE("SI", "kilosiemens", 1.000000000000000E+03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[hectosiemens]",   new UBASE("SI", "hectosiemens", 1.000000000000000E+02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[hS]",   new UBASE("SI", "hectosiemens", 1.000000000000000E+02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[decasiemens]",   new UBASE("SI", "decasiemens", 1.000000000000000E+01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[daS]",   new UBASE("SI", "decasiemens", 1.000000000000000E+01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[decisiemens]",   new UBASE("SI", "decisiemens", 1.000000000000000E-01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[dS]",   new UBASE("SI", "decisiemens", 1.000000000000000E-01, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[centisiemens]",   new UBASE("SI", "centisiemens", 1.000000000000000E-02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[cS]",   new UBASE("SI", "centisiemens", 1.000000000000000E-02, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[millisiemens]",   new UBASE("SI", "millisiemens", 1.000000000000000E-03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[mS]",   new UBASE("SI", "millisiemens", 1.000000000000000E-03, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[microsiemens]",   new UBASE("SI", "microsiemens", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[uS]",   new UBASE("SI", "microsiemens", 1.000000000000000E-06, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[nanosiemens]",   new UBASE("SI", "nanosiemens", 1.000000000000000E-09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[nS]",   new UBASE("SI", "nanosiemens", 1.000000000000000E-09, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[picosiemens]",   new UBASE("SI", "picosiemens", 1.000000000000000E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[pS]",   new UBASE("SI", "picosiemens", 1.000000000000000E-12, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[femtosiemens]",   new UBASE("SI", "femtosiemens", 1.000000000000000E-15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[fS]",   new UBASE("SI", "femtosiemens", 1.000000000000000E-15, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[attosiemens]",   new UBASE("SI", "attosiemens", 1.000000000000000E-18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[aS]",   new UBASE("SI", "attosiemens", 1.000000000000000E-18, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[zeptosiemens]",   new UBASE("SI", "zeptosiemens", 1.000000000000000E-21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[zS]",   new UBASE("SI", "zeptosiemens", 1.000000000000000E-21, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[yoctosiemens]",   new UBASE("SI", "yoctosiemens", 1.000000000000000E-24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          unit.Add("SI[yS]",   new UBASE("SI", "yoctosiemens", 1.000000000000000E-24, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
          _map.Add("electricConductance",   new BaseSystem("electricConductance", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[abfarad]",   new UBASE("cgs", "abfarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[aF]",   new UBASE("cgs", "abfarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[emu-of-electric-capacitance]",   new UBASE("cgs", "emu-of-electric-capacitance", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[emu-F]",   new UBASE("cgs", "emu-of-electric-capacitance", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[esu-of-capacitance]",   new UBASE("cgs", "esu-of-capacitance", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[esu-F]",   new UBASE("cgs", "esu-of-capacitance", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[statfarad]",   new UBASE("cgs", "statfarad", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("cgs[statC]",   new UBASE("cgs", "statfarad", 1.112650056053620E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("IEUS[farad]",   new UBASE("IEUS", "farad", 9.995100000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("IEUS[F]",   new UBASE("IEUS", "farad", 9.995100000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("Imperial[centimeter]",   new UBASE("Imperial", "centimeter", 1.111880317327170E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("Imperial[cm]",   new UBASE("Imperial", "centimeter", 1.111880317327170E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("Scientific[jar]",   new UBASE("Scientific", "jar", 1.111880317327170E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("Scientific[puff]",   new UBASE("Scientific", "puff", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[farad]",   new UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[F]",   new UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[yottafarad]",   new UBASE("SI", "yottafarad", 1.000000000000000E+24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[YF]",   new UBASE("SI", "yottafarad", 1.000000000000000E+24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[zettafarad]",   new UBASE("SI", "zettafarad", 1.000000000000000E+21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[ZF]",   new UBASE("SI", "zettafarad", 1.000000000000000E+21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[exacfarad]",   new UBASE("SI", "exacfarad", 1.000000000000000E+18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[EF]",   new UBASE("SI", "exacfarad", 1.000000000000000E+18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[petafarad]",   new UBASE("SI", "petafarad", 1.000000000000000E+15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[PF]",   new UBASE("SI", "petafarad", 1.000000000000000E+15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[terafarad]",   new UBASE("SI", "terafarad", 1.000000000000000E+12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[TF]",   new UBASE("SI", "terafarad", 1.000000000000000E+12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[gigafarad]",   new UBASE("SI", "gigafarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[GF]",   new UBASE("SI", "gigafarad", 1.000000000000000E+09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[megafarad]",   new UBASE("SI", "megafarad", 1.000000000000000E+06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[MF]",   new UBASE("SI", "megafarad", 1.000000000000000E+06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[kilofarad]",   new UBASE("SI", "kilofarad", 1.000000000000000E+03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[kF]",   new UBASE("SI", "kilofarad", 1.000000000000000E+03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[hectofarad]",   new UBASE("SI", "hectofarad", 1.000000000000000E+02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[hF]",   new UBASE("SI", "hectofarad", 1.000000000000000E+02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[decafarad]",   new UBASE("SI", "decafarad", 1.000000000000000E+01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[daF]",   new UBASE("SI", "decafarad", 1.000000000000000E+01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[decifarad]",   new UBASE("SI", "decifarad", 1.000000000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[dF]",   new UBASE("SI", "decifarad", 1.000000000000000E-01, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[centifarad]",   new UBASE("SI", "centifarad", 1.000000000000000E-02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[cF]",   new UBASE("SI", "centifarad", 1.000000000000000E-02, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[millifarad]",   new UBASE("SI", "millifarad", 1.000000000000000E-03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[mF]",   new UBASE("SI", "millifarad", 1.000000000000000E-03, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[microfarad]",   new UBASE("SI", "microfarad", 1.000000000000000E-06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[uF]",   new UBASE("SI", "microfarad", 1.000000000000000E-06, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[nanofarad]",   new UBASE("SI", "nanofarad", 1.000000000000000E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[nF]",   new UBASE("SI", "nanofarad", 1.000000000000000E-09, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[picofarad]",   new UBASE("SI", "picofarad", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[pF]",   new UBASE("SI", "picofarad", 1.000000000000000E-12, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[femtofarad]",   new UBASE("SI", "femtofarad", 1.000000000000000E-15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[fF]",   new UBASE("SI", "femtofarad", 1.000000000000000E-15, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[attofarad]",   new UBASE("SI", "attofarad", 1.000000000000000E-18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[aF]",   new UBASE("SI", "attofarad", 1.000000000000000E-18, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[zeptofarad]",   new UBASE("SI", "zeptofarad", 1.000000000000000E-21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[zF]",   new UBASE("SI", "zeptofarad", 1.000000000000000E-21, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[yoctofarad]",   new UBASE("SI", "yoctofarad", 1.000000000000000E-24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          unit.Add("SI[yF]",   new UBASE("SI", "yoctofarad", 1.000000000000000E-24, "s4.A2/kg.m2", "T4.I2/M.L2", "1.0"));
          _map.Add("capacitance",   new BaseSystem("capacitance", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[roc]",   new UBASE("cgs", "roc", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("MKSA[rom]",   new UBASE("MKSA", "rom", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[reciprocal-ohm-per-inch]",   new UBASE("Scientific", "reciprocal-ohm-per-inch", 3.937007874015750E+01, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[roi]",   new UBASE("Scientific", "reciprocal-ohm-per-inch", 3.937007874015750E+01, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[reciprocal-ohm-per-foot]",   new UBASE("Scientific", "reciprocal-ohm-per-foot", 3.280839895013120E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[rof]",   new UBASE("Scientific", "reciprocal-ohm-per-foot", 3.280839895013120E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[reciprocal-ohm-per-centimeter]",   new UBASE("Scientific", "reciprocal-ohm-per-centimeter", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[roc]",   new UBASE("Scientific", "reciprocal-ohm-per-centimeter", 1.000000000000000E+02, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[reciprocal-ohm-per-meter]",   new UBASE("Scientific", "reciprocal-ohm-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[siemens-per-meter]",   new UBASE("Scientific", "siemens-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          unit.Add("Scientific[S/m]",   new UBASE("Scientific", "siemens-per-meter", 1.000000000000000E+00, "s3.A2/kg.m3", "T3.I2/M.L3", "1.0"));
          _map.Add("conductivity",   new BaseSystem("conductivity", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[rayl]",   new UBASE("cgs", "rayl", 1.000000000000000E+01, "kg/m2.s", "M/L2.T", "1.0"));
          unit.Add("MKSA[rayl]",   new UBASE("MKSA", "rayl", 1.000000000000000E+00, "kg/m2.s", "M/L2.T", "1.0"));
          _map.Add("specificAcousticImpedance",   new BaseSystem("specificAcousticImpedance", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[maxwell]",   new UBASE("cgs", "maxwell", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("cgs[Mx]",   new UBASE("cgs", "maxwell", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("Imperial[kapp-line]",   new UBASE("Imperial", "kapp-line", 6.000000000000000E-05, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("Imperial[unit-pole]",   new UBASE("Imperial", "unit-pole", 1.256637061435920E-07, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("Scientific[debye]",   new UBASE("Scientific", "debye", 3.335640951981520E-30, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("Scientific[D]",   new UBASE("Scientific", "debye", 3.335640951981520E-30, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[weber]",   new UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[Wb]",   new UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("US[line]",   new UBASE("US", "line", 1.000000000000000E-08, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[yottaweber]",   new UBASE("SI", "yottaweber", 1.000000000000000E+24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[YWb]",   new UBASE("SI", "yottaweber", 1.000000000000000E+24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[zettaweber]",   new UBASE("SI", "zettaweber", 1.000000000000000E+21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[ZWb]",   new UBASE("SI", "zettaweber", 1.000000000000000E+21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[exacweber]",   new UBASE("SI", "exacweber", 1.000000000000000E+18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[EWb]",   new UBASE("SI", "exacweber", 1.000000000000000E+18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[petaweber]",   new UBASE("SI", "petaweber", 1.000000000000000E+15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[PWb]",   new UBASE("SI", "petaweber", 1.000000000000000E+15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[teraweber]",   new UBASE("SI", "teraweber", 1.000000000000000E+12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[TWb]",   new UBASE("SI", "teraweber", 1.000000000000000E+12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[gigaweber]",   new UBASE("SI", "gigaweber", 1.000000000000000E+09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[GWb]",   new UBASE("SI", "gigaweber", 1.000000000000000E+09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[megaweber]",   new UBASE("SI", "megaweber", 1.000000000000000E+06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[MWb]",   new UBASE("SI", "megaweber", 1.000000000000000E+06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[kiloweber]",   new UBASE("SI", "kiloweber", 1.000000000000000E+03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[kWb]",   new UBASE("SI", "kiloweber", 1.000000000000000E+03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[hectoweber]",   new UBASE("SI", "hectoweber", 1.000000000000000E+02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[hWb]",   new UBASE("SI", "hectoweber", 1.000000000000000E+02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[decaweber]",   new UBASE("SI", "decaweber", 1.000000000000000E+01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[daWb]",   new UBASE("SI", "decaweber", 1.000000000000000E+01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[deciweber]",   new UBASE("SI", "deciweber", 1.000000000000000E-01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[dWb]",   new UBASE("SI", "deciweber", 1.000000000000000E-01, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[centiweber]",   new UBASE("SI", "centiweber", 1.000000000000000E-02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[cWb]",   new UBASE("SI", "centiweber", 1.000000000000000E-02, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[milliweber]",   new UBASE("SI", "milliweber", 1.000000000000000E-03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[mWb]",   new UBASE("SI", "milliweber", 1.000000000000000E-03, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[microweber]",   new UBASE("SI", "microweber", 1.000000000000000E-06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[uWb]",   new UBASE("SI", "microweber", 1.000000000000000E-06, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[nanoweber]",   new UBASE("SI", "nanoweber", 1.000000000000000E-09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[nWb]",   new UBASE("SI", "nanoweber", 1.000000000000000E-09, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[picoweber]",   new UBASE("SI", "picoweber", 1.000000000000000E-12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[pWb]",   new UBASE("SI", "picoweber", 1.000000000000000E-12, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[femtoweber]",   new UBASE("SI", "femtoweber", 1.000000000000000E-15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[fWb]",   new UBASE("SI", "femtoweber", 1.000000000000000E-15, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[attoweber]",   new UBASE("SI", "attoweber", 1.000000000000000E-18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[aWb]",   new UBASE("SI", "attoweber", 1.000000000000000E-18, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[zeptoweber]",   new UBASE("SI", "zeptoweber", 1.000000000000000E-21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[zWb]",   new UBASE("SI", "zeptoweber", 1.000000000000000E-21, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[yoctoweber]",   new UBASE("SI", "yoctoweber", 1.000000000000000E-24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          unit.Add("SI[yWb]",   new UBASE("SI", "yoctoweber", 1.000000000000000E-24, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
          _map.Add("magneticInduction",   new BaseSystem("magneticInduction", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[abhenry]",   new UBASE("cgs", "abhenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[aH]",   new UBASE("cgs", "abhenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[emu-of-inductance]",   new UBASE("cgs", "emu-of-inductance", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[emu-H]",   new UBASE("cgs", "emu-of-inductance", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[esu-of-inductance]",   new UBASE("cgs", "esu-of-inductance", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[esu-H]",   new UBASE("cgs", "esu-of-inductance", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[stathenry]",   new UBASE("cgs", "stathenry", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("cgs[statH]",   new UBASE("cgs", "stathenry", 8.987551787368180E+11, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("IEUS[henry]",   new UBASE("IEUS", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("IEUS[H]",   new UBASE("IEUS", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("Scientific[centimeter]",   new UBASE("Scientific", "centimeter", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("Scientific[cm]",   new UBASE("Scientific", "centimeter", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[henry]",   new UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[H]",   new UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("UK[mic]",   new UBASE("UK", "mic", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("US[henry]",   new UBASE("US", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("US[H]",   new UBASE("US", "henry", 1.000495000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("US[henry(mean)]",   new UBASE("US", "henry(mean)", 1.000490000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("US[H(mean)]",   new UBASE("US", "henry(mean)", 1.000490000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[yottahenry]",   new UBASE("SI", "yottahenry", 1.000000000000000E+24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[YH]",   new UBASE("SI", "yottahenry", 1.000000000000000E+24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[zettahenry]",   new UBASE("SI", "zettahenry", 1.000000000000000E+21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[ZH]",   new UBASE("SI", "zettahenry", 1.000000000000000E+21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[exachenry]",   new UBASE("SI", "exachenry", 1.000000000000000E+18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[EH]",   new UBASE("SI", "exachenry", 1.000000000000000E+18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[petahenry]",   new UBASE("SI", "petahenry", 1.000000000000000E+15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[PH]",   new UBASE("SI", "petahenry", 1.000000000000000E+15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[terahenry]",   new UBASE("SI", "terahenry", 1.000000000000000E+12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[TH]",   new UBASE("SI", "terahenry", 1.000000000000000E+12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[gigahenry]",   new UBASE("SI", "gigahenry", 1.000000000000000E+09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[GH]",   new UBASE("SI", "gigahenry", 1.000000000000000E+09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[megahenry]",   new UBASE("SI", "megahenry", 1.000000000000000E+06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[MH]",   new UBASE("SI", "megahenry", 1.000000000000000E+06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[kilochenry]",   new UBASE("SI", "kilochenry", 1.000000000000000E+03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[kH]",   new UBASE("SI", "kilochenry", 1.000000000000000E+03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[hectohenry]",   new UBASE("SI", "hectohenry", 1.000000000000000E+02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[hH]",   new UBASE("SI", "hectohenry", 1.000000000000000E+02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[decachenry]",   new UBASE("SI", "decachenry", 1.000000000000000E+01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[daH]",   new UBASE("SI", "decachenry", 1.000000000000000E+01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[decihenry]",   new UBASE("SI", "decihenry", 1.000000000000000E-01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[dH]",   new UBASE("SI", "decihenry", 1.000000000000000E-01, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[centihenry]",   new UBASE("SI", "centihenry", 1.000000000000000E-02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[cH]",   new UBASE("SI", "centihenry", 1.000000000000000E-02, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[millihenry]",   new UBASE("SI", "millihenry", 1.000000000000000E-03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[mH]",   new UBASE("SI", "millihenry", 1.000000000000000E-03, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[microhenry]",   new UBASE("SI", "microhenry", 1.000000000000000E-06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[uH]",   new UBASE("SI", "microhenry", 1.000000000000000E-06, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[nanohenry]",   new UBASE("SI", "nanohenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[nH]",   new UBASE("SI", "nanohenry", 1.000000000000000E-09, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[picohenry]",   new UBASE("SI", "picohenry", 1.000000000000000E-12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[pH]",   new UBASE("SI", "picohenry", 1.000000000000000E-12, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[femtohenry]",   new UBASE("SI", "femtohenry", 1.000000000000000E-15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[fH]",   new UBASE("SI", "femtohenry", 1.000000000000000E-15, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[attohenry]",   new UBASE("SI", "attohenry", 1.000000000000000E-18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[aH]",   new UBASE("SI", "attohenry", 1.000000000000000E-18, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[zeptohenry]",   new UBASE("SI", "zeptohenry", 1.000000000000000E-21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[zH]",   new UBASE("SI", "zeptohenry", 1.000000000000000E-21, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[yoctohenry]",   new UBASE("SI", "yoctohenry", 1.000000000000000E-24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          unit.Add("SI[yH]",   new UBASE("SI", "yoctohenry", 1.000000000000000E-24, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
          _map.Add("inductance",   new BaseSystem("inductance", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[abvolt]",   new UBASE("cgs", "abvolt", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[aV]",   new UBASE("cgs", "abvolt", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[emu-of-electric-potential]",   new UBASE("cgs", "emu-of-electric-potential", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[emu-V]",   new UBASE("cgs", "emu-of-electric-potential", 1.000000000000000E-08, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[esu-of-electric-potential]",   new UBASE("cgs", "esu-of-electric-potential", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[esu-V]",   new UBASE("cgs", "esu-of-electric-potential", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[statvolt]",   new UBASE("cgs", "statvolt", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("cgs[statV]",   new UBASE("cgs", "statvolt", 2.997924580000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("IEUS[volt]",   new UBASE("IEUS", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("IEUS[V]",   new UBASE("IEUS", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("IEUS[volt(mean)]",   new UBASE("IEUS", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("IEUS[V(mean)]",   new UBASE("IEUS", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("INT[daniell]",   new UBASE("INT", "daniell", 1.042000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("INT[volt(mean)]",   new UBASE("INT", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("INT[V(mean)]",   new UBASE("INT", "volt(mean)", 1.000340000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[volt]",   new UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[V]",   new UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("UK[crocodile]",   new UBASE("UK", "crocodile", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("US[volt]",   new UBASE("US", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("US[V]",   new UBASE("US", "volt", 1.000330000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[yottavolt]",   new UBASE("SI", "yottavolt", 1.000000000000000E+24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[YV]",   new UBASE("SI", "yottavolt", 1.000000000000000E+24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[zettavolt]",   new UBASE("SI", "zettavolt", 1.000000000000000E+21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[ZV]",   new UBASE("SI", "zettavolt", 1.000000000000000E+21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[exacvolt]",   new UBASE("SI", "exacvolt", 1.000000000000000E+18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[EV]",   new UBASE("SI", "exacvolt", 1.000000000000000E+18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[petavolt]",   new UBASE("SI", "petavolt", 1.000000000000000E+15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[PV]",   new UBASE("SI", "petavolt", 1.000000000000000E+15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[teravolt]",   new UBASE("SI", "teravolt", 1.000000000000000E+12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[TV]",   new UBASE("SI", "teravolt", 1.000000000000000E+12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[gigavolt]",   new UBASE("SI", "gigavolt", 1.000000000000000E+09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[GV]",   new UBASE("SI", "gigavolt", 1.000000000000000E+09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[megavolt]",   new UBASE("SI", "megavolt", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[MV]",   new UBASE("SI", "megavolt", 1.000000000000000E+06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[kilocvolt]",   new UBASE("SI", "kilocvolt", 1.000000000000000E+03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[kV]",   new UBASE("SI", "kilocvolt", 1.000000000000000E+03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[hectovolt]",   new UBASE("SI", "hectovolt", 1.000000000000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[hV]",   new UBASE("SI", "hectovolt", 1.000000000000000E+02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[decavolt]",   new UBASE("SI", "decavolt", 1.000000000000000E+01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[daV]",   new UBASE("SI", "decavolt", 1.000000000000000E+01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[decivolt]",   new UBASE("SI", "decivolt", 1.000000000000000E-01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[dV]",   new UBASE("SI", "decivolt", 1.000000000000000E-01, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[centivolt]",   new UBASE("SI", "centivolt", 1.000000000000000E-02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[cV]",   new UBASE("SI", "centivolt", 1.000000000000000E-02, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[millivolt]",   new UBASE("SI", "millivolt", 1.000000000000000E-03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[mV]",   new UBASE("SI", "millivolt", 1.000000000000000E-03, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[microvolt]",   new UBASE("SI", "microvolt", 1.000000000000000E-06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[uV]",   new UBASE("SI", "microvolt", 1.000000000000000E-06, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[nanovolt]",   new UBASE("SI", "nanovolt", 1.000000000000000E-09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[nV]",   new UBASE("SI", "nanovolt", 1.000000000000000E-09, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[picovolt]",   new UBASE("SI", "picovolt", 1.000000000000000E-12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[pV]",   new UBASE("SI", "picovolt", 1.000000000000000E-12, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[femtovolt]",   new UBASE("SI", "femtovolt", 1.000000000000000E-15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[fV]",   new UBASE("SI", "femtovolt", 1.000000000000000E-15, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[attovolt]",   new UBASE("SI", "attovolt", 1.000000000000000E-18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[aV]",   new UBASE("SI", "attovolt", 1.000000000000000E-18, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[zeptovolt]",   new UBASE("SI", "zeptovolt", 1.000000000000000E-21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[zV]",   new UBASE("SI", "zeptovolt", 1.000000000000000E-21, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[yoctovolt]",   new UBASE("SI", "yoctovolt", 1.000000000000000E-24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          unit.Add("SI[yV]",   new UBASE("SI", "yoctovolt", 1.000000000000000E-24, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
          _map.Add("potential",   new BaseSystem("potential", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[abohm]",   new UBASE("cgs", "abohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("cgs[aW]",   new UBASE("cgs", "abohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("cgs[emu-of-resistance]",   new UBASE("cgs", "emu-of-resistance", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("cgs[emi-W]",   new UBASE("cgs", "emu-of-resistance", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("cgs[esu-of-resistance]",   new UBASE("cgs", "esu-of-resistance", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("cgs[esu-W]",   new UBASE("cgs", "esu-of-resistance", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("cgs[statohm]",   new UBASE("cgs", "statohm", 8.987551787368180E+11, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("German[siemens]",   new UBASE("German", "siemens", 9.407337723424270E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("IEUS[ohm]",   new UBASE("IEUS", "ohm", 1.000495000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("IEUS[ohm(legal)]",   new UBASE("IEUS", "ohm(legal)", 9.972000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("IEUS[ohm(mean)]",   new UBASE("IEUS", "ohm(mean)", 1.000490000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("Scientific[lenz(resistance)]",   new UBASE("Scientific", "lenz(resistance)", 1.252410989790000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[jacobi]",   new UBASE("SI", "jacobi", 6.400000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[ohm]",   new UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[W]",   new UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("UK[preece]",   new UBASE("UK", "preece", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("UK[wheatstone]",   new UBASE("UK", "wheatstone", 2.500000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("US[ohm]",   new UBASE("US", "ohm", 1.000495000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("US[ohm(legal)]",   new UBASE("US", "ohm(legal)", 9.972000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("US[ohm(mean)]",   new UBASE("US", "ohm(mean)", 1.000490000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[yottaohm]",   new UBASE("SI", "yottaohm", 1.000000000000000E+24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[YW]",   new UBASE("SI", "yottaohm", 1.000000000000000E+24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[zettaohm]",   new UBASE("SI", "zettaohm", 1.000000000000000E+21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[ZW]",   new UBASE("SI", "zettaohm", 1.000000000000000E+21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[exacohm]",   new UBASE("SI", "exacohm", 1.000000000000000E+18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[EW]",   new UBASE("SI", "exacohm", 1.000000000000000E+18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[petaohm]",   new UBASE("SI", "petaohm", 1.000000000000000E+15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[PW]",   new UBASE("SI", "petaohm", 1.000000000000000E+15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[teraohm]",   new UBASE("SI", "teraohm", 1.000000000000000E+12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[TW]",   new UBASE("SI", "teraohm", 1.000000000000000E+12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[gigaohm]",   new UBASE("SI", "gigaohm", 1.000000000000000E+09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[GW]",   new UBASE("SI", "gigaohm", 1.000000000000000E+09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[megaohm]",   new UBASE("SI", "megaohm", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[MW]",   new UBASE("SI", "megaohm", 1.000000000000000E+06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[kiloohm]",   new UBASE("SI", "kiloohm", 1.000000000000000E+03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[kW]",   new UBASE("SI", "kiloohm", 1.000000000000000E+03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[hectoohm]",   new UBASE("SI", "hectoohm", 1.000000000000000E+02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[hW]",   new UBASE("SI", "hectoohm", 1.000000000000000E+02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[decaohm]",   new UBASE("SI", "decaohm", 1.000000000000000E+01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[daW]",   new UBASE("SI", "decaohm", 1.000000000000000E+01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[deciohm]",   new UBASE("SI", "deciohm", 1.000000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[dW]",   new UBASE("SI", "deciohm", 1.000000000000000E-01, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[centiohm]",   new UBASE("SI", "centiohm", 1.000000000000000E-02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[cW]",   new UBASE("SI", "centiohm", 1.000000000000000E-02, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[milliohm]",   new UBASE("SI", "milliohm", 1.000000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[mW]",   new UBASE("SI", "milliohm", 1.000000000000000E-03, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[microohm]",   new UBASE("SI", "microohm", 1.000000000000000E-06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[uW]",   new UBASE("SI", "microohm", 1.000000000000000E-06, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[nanoohm]",   new UBASE("SI", "nanoohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[nW]",   new UBASE("SI", "nanoohm", 1.000000000000000E-09, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[picoohm]",   new UBASE("SI", "picoohm", 1.000000000000000E-12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[pW]",   new UBASE("SI", "picoohm", 1.000000000000000E-12, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[femtoohm]",   new UBASE("SI", "femtoohm", 1.000000000000000E-15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[fW]",   new UBASE("SI", "femtoohm", 1.000000000000000E-15, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[attoohm]",   new UBASE("SI", "attoohm", 1.000000000000000E-18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[aW]",   new UBASE("SI", "attoohm", 1.000000000000000E-18, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[zeptoohm]",   new UBASE("SI", "zeptoohm", 1.000000000000000E-21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[zW]",   new UBASE("SI", "zeptoohm", 1.000000000000000E-21, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[yoctoohm]",   new UBASE("SI", "yoctoohm", 1.000000000000000E-24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          unit.Add("SI[yW]",   new UBASE("SI", "yoctoohm", 1.000000000000000E-24, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
          _map.Add("resistance",   new BaseSystem("resistance", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[ohm-circular-mil-per-foot]",   new UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("Imperial[W-cmi/ft]",   new UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("Imperial[ohm-cmi/ft]",   new UBASE("Imperial", "ohm-circular-mil-per-foot", 1.662426112524600E-09, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("INT[international-annealed-copper-standard]",   new UBASE("INT", "international-annealed-copper-standard", 1.724137931030000E-10, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("INT[IACS]",   new UBASE("INT", "international-annealed-copper-standard", 1.724137931030000E-10, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("UK[preece]",   new UBASE("UK", "preece", 1.000000000000000E-07, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("SI[ohm-meter]",   new UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("SI[W-m]",   new UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          unit.Add("SI[ohm-m]",   new UBASE("SI", "ohm-meter", 1.000000000000000E+00, "kg.m3/s3.A2", "M.L3/T3.I2", "1.0"));
          _map.Add("resistivity",   new BaseSystem("resistivity", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[acoustic-ohm]",   new UBASE("cgs", "acoustic-ohm", 1.000000000000000E+05, "kg/m 4.s", "M/L4.T", "1.0"));
          unit.Add("cgs[ohm(acoustic)]",   new UBASE("cgs", "ohm(acoustic)", 1.000000000000000E-05, "kg/m 4.s", "M/L4.T", "1.0"));
          unit.Add("cgs[ohm(mechanical)]",   new UBASE("cgs", "ohm(mechanical)", 1.000000000000000E-05, "kg/m 4.s", "M/L4.T", "1.0"));
          unit.Add("SI[ohm(mechanical)]",   new UBASE("SI", "ohm(mechanical)", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0"));
          unit.Add("SI[acoustic-ohm]",   new UBASE("SI", "acoustic-ohm", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0"));
          unit.Add("SI[ohm(acoustic)]",   new UBASE("SI", "ohm(acoustic)", 1.000000000000000E+00, "kg/m 4.s", "M/L4.T", "1.0"));
          _map.Add("acousticImpedance",   new BaseSystem("acousticImpedance", unit, "1.0"));

          unit.Clear();


          unit.Add("a.u.[au-of-electric-field-strength]",   new UBASE("a.u.", "au-of-electric-field-strength", 5.142206747621690E+11, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("a.u.[auefs]",   new UBASE("a.u.", "au-of-electric-field-strength", 5.142206747621690E+11, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("a.u.[au-of-electric-potential]",   new UBASE("a.u.", "au-of-electric-potential", 2.721138624593030E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("a.u.[auep]",   new UBASE("a.u.", "au-of-electric-potential", 2.721138624593030E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[volt-per-kilometer]",   new UBASE("SI", "volt-per-kilometer", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[V/km]",   new UBASE("SI", "volt-per-kilometer", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[volt-per-meter]",   new UBASE("SI", "volt-per-meter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[V/m]",   new UBASE("SI", "volt-per-meter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[volt-per-centimeter]",   new UBASE("SI", "volt-per-centimeter", 1.000000000000000E+02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[V/cm]",   new UBASE("SI", "volt-per-centimeter", 1.000000000000000E+02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[volt-per-millimeter]",   new UBASE("SI", "volt-per-millimeter", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[V/mm]",   new UBASE("SI", "volt-per-millimeter", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[volt-per-micrometer]",   new UBASE("SI", "volt-per-micrometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[V/um]",   new UBASE("SI", "volt-per-micrometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[volt-per-nanometer]",   new UBASE("SI", "volt-per-nanometer", 1.000000000000000E+09, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[V/nm]",   new UBASE("SI", "volt-per-nanometer", 1.000000000000000E+09, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[millivolt-per-meter]",   new UBASE("SI", "millivolt-per-meter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[mV/m]",   new UBASE("SI", "millivolt-per-meter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[millivolt-per-centimeter]",   new UBASE("SI", "millivolt-per-centimeter", 1.000000000000000E-01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[mV/cm]",   new UBASE("SI", "millivolt-per-centimeter", 1.000000000000000E-01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[millivolt-per-millimeter]",   new UBASE("SI", "millivolt-per-millimeter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[mV/mm]",   new UBASE("SI", "millivolt-per-millimeter", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[millivolt-per-micrometer]",   new UBASE("SI", "millivolt-per-micrometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[mV/um]",   new UBASE("SI", "millivolt-per-micrometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[millivolt-per-nanometer]",   new UBASE("SI", "millivolt-per-nanometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[mV/nm]",   new UBASE("SI", "millivolt-per-nanometer", 1.000000000000000E+06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[microvolt-per-meter]",   new UBASE("SI", "microvolt-per-meter", 1.000000000000000E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[uV/m]",   new UBASE("SI", "microvolt-per-meter", 1.000000000000000E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[microvolt-per-centimeter]",   new UBASE("SI", "microvolt-per-centimeter", 1.000000000000000E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[uV/cm]",   new UBASE("SI", "microvolt-per-centimeter", 1.000000000000000E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[microvolt-per-millimeter]",   new UBASE("SI", "microvolt-per-millimeter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[uV/mm]",   new UBASE("SI", "microvolt-per-millimeter", 1.000000000000000E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[microvolt-per-micrometer]",   new UBASE("SI", "microvolt-per-micrometer", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[uV/um]",   new UBASE("SI", "microvolt-per-micrometer", 1.000000000000000E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[mircovolt-per-nanometer]",   new UBASE("SI", "mircovolt-per-nanometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("SI[uV/nm]",   new UBASE("SI", "mircovolt-per-nanometer", 1.000000000000000E+03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[volt-per-mile]",   new UBASE("Scientific", "volt-per-mile", 6.213711922373340E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[V/mi]",   new UBASE("Scientific", "volt-per-mile", 6.213711922373340E-04, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[volt-per-yard]",   new UBASE("Scientific", "volt-per-yard", 1.093613298337710E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[V/yd]",   new UBASE("Scientific", "volt-per-yard", 1.093613298337710E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[volt-per-foot]",   new UBASE("Scientific", "volt-per-foot", 3.280839895013120E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[V/ft]",   new UBASE("Scientific", "volt-per-foot", 3.280839895013120E+00, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[volt-per-inch]",   new UBASE("Scientific", "volt-per-inch", 3.937007874015750E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[V/in]",   new UBASE("Scientific", "volt-per-inch", 3.937007874015750E+01, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[millivolt-per-yard]",   new UBASE("Scientific", "millivolt-per-yard", 1.093613298337710E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[mV/yd]",   new UBASE("Scientific", "millivolt-per-yard", 1.093613298337710E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[millivolt-per-foot]",   new UBASE("Scientific", "millivolt-per-foot", 3.280839895013120E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[mV/ft]",   new UBASE("Scientific", "millivolt-per-foot", 3.280839895013120E-03, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[millivolt-per-inch]",   new UBASE("Scientific", "millivolt-per-inch", 3.937007874015750E-02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[mV/in]",   new UBASE("Scientific", "millivolt-per-inch", 3.937007874015750E-02, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[microvolt-per-yard]",   new UBASE("Scientific", "microvolt-per-yard", 1.093613298337710E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[uV/yd]",   new UBASE("Scientific", "microvolt-per-yard", 1.093613298337710E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[microvolt-per-foot]",   new UBASE("Scientific", "microvolt-per-foot", 3.280839895013120E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[uV/ft]",   new UBASE("Scientific", "microvolt-per-foot", 3.280839895013120E-06, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[microvolt-per-inch]",   new UBASE("Scientific", "microvolt-per-inch", 3.937007874015750E-05, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          unit.Add("Scientific[uV/in]",   new UBASE("Scientific", "microvolt-per-inch", 3.937007874015750E-05, "kg.m/s3.A", "M.L/T3.I", "1.0"));
          _map.Add("electricFieldStrength",   new BaseSystem("electricFieldStrength", unit, "1.0"));

          unit.Clear();


          unit.Add("a.u.[au-of-magnetic-flux-density]",   new UBASE("a.u.", "au-of-magnetic-flux-density", 2.350517567581310E+05, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("a.u.[aumfd]",   new UBASE("a.u.", "au-of-magnetic-flux-density", 2.350517567581310E+05, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("cgs[gauss]",   new UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("cgs[Gs]",   new UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("cgs[G]",   new UBASE("cgs", "gauss", 1.000000000000000E-04, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("Scientific[gamma]",   new UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("Scientific[g]",   new UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[tesla]",   new UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[T]",   new UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[yottatesla]",   new UBASE("SI", "yottatesla", 1.000000000000000E+24, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[YT]",   new UBASE("SI", "yottatesla", 1.000000000000000E+24, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[zettatesla]",   new UBASE("SI", "zettatesla", 1.000000000000000E+21, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[ZT]",   new UBASE("SI", "zettatesla", 1.000000000000000E+21, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[exactesla]",   new UBASE("SI", "exactesla", 1.000000000000000E+18, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[ET]",   new UBASE("SI", "exactesla", 1.000000000000000E+18, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[petatesla]",   new UBASE("SI", "petatesla", 1.000000000000000E+15, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[PT]",   new UBASE("SI", "petatesla", 1.000000000000000E+15, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[teratesla]",   new UBASE("SI", "teratesla", 1.000000000000000E+12, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[TT]",   new UBASE("SI", "teratesla", 1.000000000000000E+12, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[gigatesla]",   new UBASE("SI", "gigatesla", 1.000000000000000E+09, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[GT]",   new UBASE("SI", "gigatesla", 1.000000000000000E+09, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[megatesla]",   new UBASE("SI", "megatesla", 1.000000000000000E+06, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[MT]",   new UBASE("SI", "megatesla", 1.000000000000000E+06, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[kiloctesla]",   new UBASE("SI", "kiloctesla", 1.000000000000000E+03, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[kT]",   new UBASE("SI", "kiloctesla", 1.000000000000000E+03, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[hectotesla]",   new UBASE("SI", "hectotesla", 1.000000000000000E+02, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[hT]",   new UBASE("SI", "hectotesla", 1.000000000000000E+02, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[decatesla]",   new UBASE("SI", "decatesla", 1.000000000000000E+01, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[daT]",   new UBASE("SI", "decatesla", 1.000000000000000E+01, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[decitesla]",   new UBASE("SI", "decitesla", 1.000000000000000E-01, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[dT]",   new UBASE("SI", "decitesla", 1.000000000000000E-01, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[centitesla]",   new UBASE("SI", "centitesla", 1.000000000000000E-02, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[cT]",   new UBASE("SI", "centitesla", 1.000000000000000E-02, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[millitesla]",   new UBASE("SI", "millitesla", 1.000000000000000E-03, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[NT]",   new UBASE("SI", "millitesla", 1.000000000000000E-03, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[microtesla]",   new UBASE("SI", "microtesla", 1.000000000000000E-06, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[uT]",   new UBASE("SI", "microtesla", 1.000000000000000E-06, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[nanotesla]",   new UBASE("SI", "nanotesla", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[nT]",   new UBASE("SI", "nanotesla", 1.000000000000000E-09, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[picotesla]",   new UBASE("SI", "picotesla", 1.000000000000000E-12, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[pT]",   new UBASE("SI", "picotesla", 1.000000000000000E-12, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[femtotesla]",   new UBASE("SI", "femtotesla", 1.000000000000000E-15, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[fT]",   new UBASE("SI", "femtotesla", 1.000000000000000E-15, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[attotesla]",   new UBASE("SI", "attotesla", 1.000000000000000E-18, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[aT]",   new UBASE("SI", "attotesla", 1.000000000000000E-18, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[zeptotesla]",   new UBASE("SI", "zeptotesla", 1.000000000000000E-21, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[zT]",   new UBASE("SI", "zeptotesla", 1.000000000000000E-21, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[yoctotesla]",   new UBASE("SI", "yoctotesla", 1.000000000000000E-24, "kg/s2.A", "M/T2.I", "1.0"));
          unit.Add("SI[yT]",   new UBASE("SI", "yoctotesla", 1.000000000000000E-24, "kg/s2.A", "M/T2.I", "1.0"));
          _map.Add("magneticFluxDensity",   new BaseSystem("magneticFluxDensity", unit, "1.0"));

          unit.Clear();


          unit.Add("a.u.[au-of-electric-field-strength-gradient]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
          unit.Add("a.u.[ao]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
          unit.Add("a.u.[b]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
          unit.Add("a.u.[auefsg]",   new UBASE("a.u.", "au-of-electric-field-strength-gradient", 9.717362429207620E+21, "kg/s3.A", "M/T3.I", "1.0"));
          unit.Add("cgs[townsend]",   new UBASE("cgs", "townsend", 1.000000000000000E+21, "kg/s3.A", "M/T3.I", "1.0"));
          unit.Add("cgs[Td]",   new UBASE("cgs", "townsend", 1.000000000000000E+21, "kg/s3.A", "M/T3.I", "1.0"));
          _map.Add("electricFieldGradient",   new BaseSystem("electricFieldGradient", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[weber-per-kilometer]",   new UBASE("SI", "weber-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("SI[Wb/km]",   new UBASE("SI", "weber-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("SI[weber-per-meter]",   new UBASE("SI", "weber-per-meter", 1.000000000000000E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("SI[Wb/m]",   new UBASE("SI", "weber-per-meter", 1.000000000000000E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[weber-per-centimeter]",   new UBASE("Si", "weber-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[Wb/cm]",   new UBASE("Si", "weber-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[weber-per-millimeter]",   new UBASE("Si", "weber-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[Wb/mm]",   new UBASE("Si", "weber-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[weber-per-micrometer]",   new UBASE("Si", "weber-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[Wb/um]",   new UBASE("Si", "weber-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[weber-per-nanometer]",   new UBASE("Si", "weber-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Si[Wb/nm]",   new UBASE("Si", "weber-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[weber-per-mile]",   new UBASE("Scientific", "weber-per-mile", 6.213711922373340E-04, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[Wb/mi]",   new UBASE("Scientific", "weber-per-mile", 6.213711922373340E-04, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[weber-per-yard]",   new UBASE("Scientific", "weber-per-yard", 1.093613298337710E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[Wb/yd]",   new UBASE("Scientific", "weber-per-yard", 1.093613298337710E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[weber-per-foot]",   new UBASE("Scientific", "weber-per-foot", 3.280839895013120E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[Wb/ft]",   new UBASE("Scientific", "weber-per-foot", 3.280839895013120E+00, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[weber-per-inch]",   new UBASE("Scientific", "weber-per-inch", 3.937007874015750E+01, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          unit.Add("Scientific[Wb/in]",   new UBASE("Scientific", "weber-per-inch", 3.937007874015750E+01, "kg.m/s2.A", "M.L/T2.I", "1.0"));
          _map.Add("magneticPotential",   new BaseSystem("magneticPotential", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[henry-per-kilometer]",   new UBASE("SI", "henry-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[H/km]",   new UBASE("SI", "henry-per-kilometer", 1.000000000000000E-03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[henry-per-meter]",   new UBASE("SI", "henry-per-meter", 1.000000000000000E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[H/m]",   new UBASE("SI", "henry-per-meter", 1.000000000000000E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[henry-per-centimeter]",   new UBASE("SI", "henry-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[H/cm]",   new UBASE("SI", "henry-per-centimeter", 1.000000000000000E+02, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[henry-per-millimeter]",   new UBASE("SI", "henry-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[H/mm]",   new UBASE("SI", "henry-per-millimeter", 1.000000000000000E+03, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[henry-per-micrometer]",   new UBASE("SI", "henry-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[H/um]",   new UBASE("SI", "henry-per-micrometer", 1.000000000000000E+06, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[henry-per-nanometer]",   new UBASE("SI", "henry-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("SI[H/nm]",   new UBASE("SI", "henry-per-nanometer", 1.000000000000000E+09, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[henry-per-mile]",   new UBASE("Scientific", "henry-per-mile", 6.213711922373340E-04, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[H/mi]",   new UBASE("Scientific", "henry-per-mile", 6.213711922373340E-04, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[henry-per-yard]",   new UBASE("Scientific", "henry-per-yard", 1.093613298337710E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[H/yd]",   new UBASE("Scientific", "henry-per-yard", 1.093613298337710E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[henry-per-foot]",   new UBASE("Scientific", "henry-per-foot", 3.280839895013120E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[H/ft]",   new UBASE("Scientific", "henry-per-foot", 3.280839895013120E+00, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[henry-per-inch]",   new UBASE("Scientific", "henry-per-inch", 3.937007874015750E+01, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          unit.Add("Scientific[H/in]",   new UBASE("Scientific", "henry-per-inch", 3.937007874015750E+01, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          _map.Add("magneticPermeability",   new BaseSystem("magneticPermeability", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
