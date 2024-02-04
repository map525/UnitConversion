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
// File Force.cpp
//
// Units for Force
//
// Class for Force units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Force.hpp"

Force& Force::Instance(void)
{
    static Force singleton;
    return singleton;
}

Force::Force(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["a.u.[au-of-force]"] = UBASE("a.u.", "au-of-force", 8.238723498236610E-08, "kg.m/s2", "M.L/T2", "1.0");
   unit["a.u.[auf]"] = UBASE("a.u.", "au-of-force", 8.238723498236610E-08, "kg.m/s2", "M.L/T2", "1.0");
   unit["CAN[ounce-force]"] = UBASE("CAN", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["CAN[ozf]"] = UBASE("CAN", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["cgs[dyne]"] = UBASE("cgs", "dyne", 1.000000000000000E-05, "kg.m/s2", "M.L/T2", "1.0");
   unit["cgs[dyn]"] = UBASE("cgs", "dyne", 1.000000000000000E-05, "kg.m/s2", "M.L/T2", "1.0");
   unit["FPS[pound-force]"] = UBASE("FPS", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["FPS[lbf]"] = UBASE("FPS", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["FPS[poundal]"] = UBASE("FPS", "poundal", 1.382549543760000E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["FPS[pdl]"] = UBASE("FPS", "poundal", 1.382549543760000E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[kilopound-force]"] = UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[kipf]"] = UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[kip-force]"] = UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[ouncedal]"] = UBASE("Imperial", "ouncedal", 8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[odl]"] = UBASE("Imperial", "ouncedal", 8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[pound-force]"] = UBASE("Imperial", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[lbf]"] = UBASE("Imperial", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[tondal]"] = UBASE("Imperial", "tondal", 3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0");
   unit["Imperial[tdl]"] = UBASE("Imperial", "tondal", 3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[kilogram-force]"] = UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[kgf]"] = UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[kgp]"] = UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[kilogram-weight]"] = UBASE("MKpS", "kilogram-weight", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[kgw]"] = UBASE("MKpS", "kilogram-weight", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[pond]"] = UBASE("MKpS", "pond", 9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["MKpS[p]"] = UBASE("MKpS", "pond", 9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["MTS[funal]"] = UBASE("MTS", "funal", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["MTS[sthene]"] = UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["MTS[sn]"] = UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["MTS[sth]"] = UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["MTS[ton-force(metric)]"] = UBASE("MTS", "ton-force(metric)", 9.806650000000000E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["Scientific[crinal]"] = UBASE("Scientific", "crinal", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["Scientific[slug-force]"] = UBASE("Scientific", "slug-force", 1.431172982391550E+02, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[newton]"] = UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[N]"] = UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0");
   unit["UK[ounce-force]"] = UBASE("UK", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["UK[ozf]"] = UBASE("UK", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["UK[ton-force(long)]"] = UBASE("UK", "ton-force(long)", 9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["US[ounce-force]"] = UBASE("US", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["US[ozf]"] = UBASE("US", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["US[ton-force(short)]"] = UBASE("US", "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[yottanewton]"] = UBASE("SI", "yottanewton", 1.000000000000000E+24, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[YN]"] = UBASE("SI", "yottanewton", 1.000000000000000E+24, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[zettanewton]"] = UBASE("SI", "zettanewton", 1.000000000000000E+21, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[ZN]"] = UBASE("SI", "zettanewton", 1.000000000000000E+21, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[exacnewton]"] = UBASE("SI", "exacnewton", 1.000000000000000E+18, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[EN]"] = UBASE("SI", "exacnewton", 1.000000000000000E+18, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[petanewton]"] = UBASE("SI", "petanewton", 1.000000000000000E+15, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[PN]"] = UBASE("SI", "petanewton", 1.000000000000000E+15, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[teranewton]"] = UBASE("SI", "teranewton", 1.000000000000000E+12, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[TN]"] = UBASE("SI", "teranewton", 1.000000000000000E+12, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[giganewton]"] = UBASE("SI", "giganewton", 1.000000000000000E+09, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[GN]"] = UBASE("SI", "giganewton", 1.000000000000000E+09, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[meganewton]"] = UBASE("SI", "meganewton", 1.000000000000000E+06, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[MN]"] = UBASE("SI", "meganewton", 1.000000000000000E+06, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[kilonewton]"] = UBASE("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[kN]"] = UBASE("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[hectonewton]"] = UBASE("SI", "hectonewton", 1.000000000000000E+02, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[hN]"] = UBASE("SI", "hectonewton", 1.000000000000000E+02, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[decacnewton]"] = UBASE("SI", "decacnewton", 1.000000000000000E+01, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[daN]"] = UBASE("SI", "decacnewton", 1.000000000000000E+01, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[decinewton]"] = UBASE("SI", "decinewton", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[dN]"] = UBASE("SI", "decinewton", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[centinewton]"] = UBASE("SI", "centinewton", 1.000000000000000E-02, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[cN]"] = UBASE("SI", "centinewton", 1.000000000000000E-02, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[millinewton]"] = UBASE("SI", "millinewton", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[NH]"] = UBASE("SI", "millinewton", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[micronewton]"] = UBASE("SI", "micronewton", 1.000000000000000E-06, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[uN]"] = UBASE("SI", "micronewton", 1.000000000000000E-06, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[nanonewton]"] = UBASE("SI", "nanonewton", 1.000000000000000E-09, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[nN]"] = UBASE("SI", "nanonewton", 1.000000000000000E-09, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[piconewton]"] = UBASE("SI", "piconewton", 1.000000000000000E-12, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[pN]"] = UBASE("SI", "piconewton", 1.000000000000000E-12, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[femtonewton]"] = UBASE("SI", "femtonewton", 1.000000000000000E-15, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[fN]"] = UBASE("SI", "femtonewton", 1.000000000000000E-15, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[attonewton]"] = UBASE("SI", "attonewton", 1.000000000000000E-18, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[aN]"] = UBASE("SI", "attonewton", 1.000000000000000E-18, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[zeptonewton]"] = UBASE("SI", "zeptonewton", 1.000000000000000E-21, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[zN]"] = UBASE("SI", "zeptonewton", 1.000000000000000E-21, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[yoctonewton]"] = UBASE("SI", "yoctonewton", 1.000000000000000E-24, "kg.m/s2", "M.L/T2", "1.0");
   unit["SI[yN]"] = UBASE("SI", "yoctonewton", 1.000000000000000E-24, "kg.m/s2", "M.L/T2", "1.0");
   _map["force"] = BaseSystem("force", unit, "1.0");

   unit.clear();


   unit["a.u.[au-of-linear-momentum]"] = UBASE("a.u.", "au-of-linear-momentum", 1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0");
   unit["a.u.[aulm]"] = UBASE("a.u.", "au-of-linear-momentum", 1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0");
   unit["cgs[bole]"] = UBASE("cgs", "bole", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0");
   unit["cgs[gramcentimeter-per-second]"] = UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0");
   unit["cgs[gcm/sec]"] = UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0");
   unit["SI[newton-second]"] = UBASE("SI", "newton-second", 1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0");
   unit["SI[N-sec]"] = UBASE("SI", "newton-second", 1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0");
   _map["momentum"] = BaseSystem("momentum", unit, "1.0");

   unit.clear();


   unit["a.u.[au-of-action]"] = UBASE("a.u.", "au-of-action", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0");
   unit["a.u.[aua]"] = UBASE("a.u.", "au-of-action", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0");
   unit["a.u.[au-of-angular-momentum]"] = UBASE("a.u.", "au-of-angular-momentum", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0");
   unit["a.u.[auam]"] = UBASE("a.u.", "au-of-angular-momentum", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0");
   unit["Scientific[planck]"] = UBASE("Scientific", "planck", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0");
   unit["SI[joule-second]"] = UBASE("SI", "joule-second", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0");
   unit["SI[J-sec]"] = UBASE("SI", "joule-second", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0");
   _map["action"] = BaseSystem("action", unit, "1.0");

   unit.clear();


   unit["Scientific[sumner-unit]"] = UBASE("Scientific", "sumner-unit", 3.333333333333330E-09, "kg/s", "M/T", "1.0");
   unit["SI[kilogram-per-second]"] = UBASE("SI", "kilogram-per-second", 1.000000000000000E+00, "kg/s", "M/T", "1.0");
   unit["SI[kg/sec]"] = UBASE("SI", "kilogram-per-second", 1.000000000000000E+00, "kg/s", "M/T", "1.0");
   unit["SI[newton-per-meter]"] = UBASE("SI", "newton-per-meter", 1.000000000000000E+00, "kg/s", "M/T", "1.0");
   unit["SI[N/m]"] = UBASE("SI", "newton-per-meter", 1.000000000000000E+00, "kg/s", "M/T", "1.0");
   _map["massFlow"] = BaseSystem("massFlow", unit, "1.0");

   unit.clear();


   unit["Imperial[bisquare-foot]"] = UBASE("Imperial", "bisquare-foot", 8.630974841241600E-03, "m4", "L4", "1.0");
   unit["Imperial[ft4]"] = UBASE("Imperial", "bisquare-foot", 8.630974841241600E-03, "m4", "L4", "1.0");
   unit["Imperial[bisquare-inch]"] = UBASE("Imperial", "bisquare-inch", 4.162314256000000E-07, "m4", "L4", "1.0");
   unit["Imperial[in4]"] = UBASE("Imperial", "bisquare-inch", 4.162314256000000E-07, "m4", "L4", "1.0");
   unit["SI[bisquare-meter]"] = UBASE("SI", "bisquare-meter", 1.000000000000000E+00, "m4", "L4", "1.0");
   unit["SI[m4]"] = UBASE("SI", "bisquare-meter", 1.000000000000000E+00, "m4", "L4", "1.0");
   unit["US[barrel-mile]"] = UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0");
   unit["US[bbl-mi]"] = UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0");
   unit["US[mi4]"] = UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0");
   _map["quadMoment"] = BaseSystem("quadMoment", unit, "1.0");

   unit.clear();


}

// EOF
