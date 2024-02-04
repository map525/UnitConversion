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
// File Force.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Force extends SingleSystem
{
   private static Force singleton_ = new Force();

   public static Force Instance()
   {
      return singleton_;
   }

   private Force()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("a.u.[au-of-force]",   new UBASE("a.u.", "au-of-force", 8.238723498236610E-08, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("a.u.[auf]",   new UBASE("a.u.", "au-of-force", 8.238723498236610E-08, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("CAN[ounce-force]",   new UBASE("CAN", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("CAN[ozf]",   new UBASE("CAN", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("cgs[dyne]",   new UBASE("cgs", "dyne", 1.000000000000000E-05, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("cgs[dyn]",   new UBASE("cgs", "dyne", 1.000000000000000E-05, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("FPS[pound-force]",   new UBASE("FPS", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("FPS[lbf]",   new UBASE("FPS", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("FPS[poundal]",   new UBASE("FPS", "poundal", 1.382549543760000E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("FPS[pdl]",   new UBASE("FPS", "poundal", 1.382549543760000E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[kilopound-force]",   new UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[kipf]",   new UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[kip-force]",   new UBASE("Imperial", "kilopound-force", 4.448221615260500E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[ouncedal]",   new UBASE("Imperial", "ouncedal", 8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[odl]",   new UBASE("Imperial", "ouncedal", 8.640934648500000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[pound-force]",   new UBASE("Imperial", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[lbf]",   new UBASE("Imperial", "pound-force", 4.448221615260500E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[tondal]",   new UBASE("Imperial", "tondal", 3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Imperial[tdl]",   new UBASE("Imperial", "tondal", 3.096910978022400E+02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[kilogram-force]",   new UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[kgf]",   new UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[kgp]",   new UBASE("MKpS", "kilogram-force", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[kilogram-weight]",   new UBASE("MKpS", "kilogram-weight", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[kgw]",   new UBASE("MKpS", "kilogram-weight", 9.806650000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[pond]",   new UBASE("MKpS", "pond", 9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MKpS[p]",   new UBASE("MKpS", "pond", 9.806650000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MTS[funal]",   new UBASE("MTS", "funal", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MTS[sthene]",   new UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MTS[sn]",   new UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MTS[sth]",   new UBASE("MTS", "sthene", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("MTS[ton-force(metric)]",   new UBASE("MTS", "ton-force(metric)", 9.806650000000000E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Scientific[crinal]",   new UBASE("Scientific", "crinal", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("Scientific[slug-force]",   new UBASE("Scientific", "slug-force", 1.431172982391550E+02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[newton]",   new UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[N]",   new UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("UK[ounce-force]",   new UBASE("UK", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("UK[ozf]",   new UBASE("UK", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("UK[ton-force(long)]",   new UBASE("UK", "ton-force(long)", 9.964016418183520E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("US[ounce-force]",   new UBASE("US", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("US[ozf]",   new UBASE("US", "ounce-force", 2.780138509537810E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("US[ton-force(short)]",   new UBASE("US", "ton-force(short)", 8.896443230521000E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[yottanewton]",   new UBASE("SI", "yottanewton", 1.000000000000000E+24, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[YN]",   new UBASE("SI", "yottanewton", 1.000000000000000E+24, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[zettanewton]",   new UBASE("SI", "zettanewton", 1.000000000000000E+21, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[ZN]",   new UBASE("SI", "zettanewton", 1.000000000000000E+21, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[exacnewton]",   new UBASE("SI", "exacnewton", 1.000000000000000E+18, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[EN]",   new UBASE("SI", "exacnewton", 1.000000000000000E+18, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[petanewton]",   new UBASE("SI", "petanewton", 1.000000000000000E+15, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[PN]",   new UBASE("SI", "petanewton", 1.000000000000000E+15, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[teranewton]",   new UBASE("SI", "teranewton", 1.000000000000000E+12, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[TN]",   new UBASE("SI", "teranewton", 1.000000000000000E+12, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[giganewton]",   new UBASE("SI", "giganewton", 1.000000000000000E+09, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[GN]",   new UBASE("SI", "giganewton", 1.000000000000000E+09, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[meganewton]",   new UBASE("SI", "meganewton", 1.000000000000000E+06, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[MN]",   new UBASE("SI", "meganewton", 1.000000000000000E+06, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[kilonewton]",   new UBASE("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[kN]",   new UBASE("SI", "kilonewton", 1.000000000000000E+03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[hectonewton]",   new UBASE("SI", "hectonewton", 1.000000000000000E+02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[hN]",   new UBASE("SI", "hectonewton", 1.000000000000000E+02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[decacnewton]",   new UBASE("SI", "decacnewton", 1.000000000000000E+01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[daN]",   new UBASE("SI", "decacnewton", 1.000000000000000E+01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[decinewton]",   new UBASE("SI", "decinewton", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[dN]",   new UBASE("SI", "decinewton", 1.000000000000000E-01, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[centinewton]",   new UBASE("SI", "centinewton", 1.000000000000000E-02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[cN]",   new UBASE("SI", "centinewton", 1.000000000000000E-02, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[millinewton]",   new UBASE("SI", "millinewton", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[NH]",   new UBASE("SI", "millinewton", 1.000000000000000E-03, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[micronewton]",   new UBASE("SI", "micronewton", 1.000000000000000E-06, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[uN]",   new UBASE("SI", "micronewton", 1.000000000000000E-06, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[nanonewton]",   new UBASE("SI", "nanonewton", 1.000000000000000E-09, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[nN]",   new UBASE("SI", "nanonewton", 1.000000000000000E-09, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[piconewton]",   new UBASE("SI", "piconewton", 1.000000000000000E-12, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[pN]",   new UBASE("SI", "piconewton", 1.000000000000000E-12, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[femtonewton]",   new UBASE("SI", "femtonewton", 1.000000000000000E-15, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[fN]",   new UBASE("SI", "femtonewton", 1.000000000000000E-15, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[attonewton]",   new UBASE("SI", "attonewton", 1.000000000000000E-18, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[aN]",   new UBASE("SI", "attonewton", 1.000000000000000E-18, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[zeptonewton]",   new UBASE("SI", "zeptonewton", 1.000000000000000E-21, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[zN]",   new UBASE("SI", "zeptonewton", 1.000000000000000E-21, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[yoctonewton]",   new UBASE("SI", "yoctonewton", 1.000000000000000E-24, "kg.m/s2", "M.L/T2", "1.0"));
      unit.put("SI[yN]",   new UBASE("SI", "yoctonewton", 1.000000000000000E-24, "kg.m/s2", "M.L/T2", "1.0"));
      _map.put("force",   new BaseSystem("force", unit, "1.0"));

      unit.clear();


      unit.put("a.u.[au-of-linear-momentum]",   new UBASE("a.u.", "au-of-linear-momentum", 1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0"));
      unit.put("a.u.[aulm]",   new UBASE("a.u.", "au-of-linear-momentum", 1.992851914100030E-24, "kg.m/s", "M.L/T", "1.0"));
      unit.put("cgs[bole]",   new UBASE("cgs", "bole", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
      unit.put("cgs[gramcentimeter-per-second]",   new UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
      unit.put("cgs[gcm/sec]",   new UBASE("cgs", "gramcentimeter-per-second", 1.000000000000000E-05, "kg.m/s", "M.L/T", "1.0"));
      unit.put("SI[newton-second]",   new UBASE("SI", "newton-second", 1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0"));
      unit.put("SI[N-sec]",   new UBASE("SI", "newton-second", 1.000000000000000E+00, "kg.m/s", "M.L/T", "1.0"));
      _map.put("momentum",   new BaseSystem("momentum", unit, "1.0"));

      unit.clear();


      unit.put("a.u.[au-of-action]",   new UBASE("a.u.", "au-of-action", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0"));
      unit.put("a.u.[aua]",   new UBASE("a.u.", "au-of-action", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0"));
      unit.put("a.u.[au-of-angular-momentum]",   new UBASE("a.u.", "au-of-angular-momentum", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0"));
      unit.put("a.u.[auam]",   new UBASE("a.u.", "au-of-angular-momentum", 1.054571817646160E-34, "kg.m2/s", "M.L2/T", "1.0"));
      unit.put("Scientific[planck]",   new UBASE("Scientific", "planck", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0"));
      unit.put("SI[joule-second]",   new UBASE("SI", "joule-second", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0"));
      unit.put("SI[J-sec]",   new UBASE("SI", "joule-second", 1.000000000000000E+00, "kg.m2/s", "M.L2/T", "1.0"));
      _map.put("action",   new BaseSystem("action", unit, "1.0"));

      unit.clear();


      unit.put("Scientific[sumner-unit]",   new UBASE("Scientific", "sumner-unit", 3.333333333333330E-09, "kg/s", "M/T", "1.0"));
      unit.put("SI[kilogram-per-second]",   new UBASE("SI", "kilogram-per-second", 1.000000000000000E+00, "kg/s", "M/T", "1.0"));
      unit.put("SI[kg/sec]",   new UBASE("SI", "kilogram-per-second", 1.000000000000000E+00, "kg/s", "M/T", "1.0"));
      unit.put("SI[newton-per-meter]",   new UBASE("SI", "newton-per-meter", 1.000000000000000E+00, "kg/s", "M/T", "1.0"));
      unit.put("SI[N/m]",   new UBASE("SI", "newton-per-meter", 1.000000000000000E+00, "kg/s", "M/T", "1.0"));
      _map.put("massFlow",   new BaseSystem("massFlow", unit, "1.0"));

      unit.clear();


      unit.put("Imperial[bisquare-foot]",   new UBASE("Imperial", "bisquare-foot", 8.630974841241600E-03, "m4", "L4", "1.0"));
      unit.put("Imperial[ft4]",   new UBASE("Imperial", "bisquare-foot", 8.630974841241600E-03, "m4", "L4", "1.0"));
      unit.put("Imperial[bisquare-inch]",   new UBASE("Imperial", "bisquare-inch", 4.162314256000000E-07, "m4", "L4", "1.0"));
      unit.put("Imperial[in4]",   new UBASE("Imperial", "bisquare-inch", 4.162314256000000E-07, "m4", "L4", "1.0"));
      unit.put("SI[bisquare-meter]",   new UBASE("SI", "bisquare-meter", 1.000000000000000E+00, "m4", "L4", "1.0"));
      unit.put("SI[m4]",   new UBASE("SI", "bisquare-meter", 1.000000000000000E+00, "m4", "L4", "1.0"));
      unit.put("US[barrel-mile]",   new UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0"));
      unit.put("US[bbl-mi]",   new UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0"));
      unit.put("US[mi4]",   new UBASE("US", "barrel-mile", 2.558652491686070E+02, "m4", "L4", "1.0"));
      _map.put("quadMoment",   new BaseSystem("quadMoment", unit, "1.0"));

      unit.clear();


   }

}
// EOF
