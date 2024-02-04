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
// File Count.java
//
// Units for Count
//
// Class for Count units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class Count extends SingleSystem
{
   private static Count singleton_ = new Count();

   public static Count Instance()
   {
      return singleton_;
   }

   private Count()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("Imperial[baker's-dozen]",   new UBASE("Imperial", "baker's-dozen", 13, "O", "O", "1.0"));
      unit.put("Imperial[bale]",   new UBASE("Imperial", "bale", 4800, "O", "O", "1.0"));
      unit.put("Imperial[bl]",   new UBASE("Imperial", "bale", 4800, "O", "O", "1.0"));
      unit.put("INT[bale]",   new UBASE("INT", "bale", 5000, "O", "O", "1.0"));
      unit.put("INT[bl]",   new UBASE("INT", "bale", 5000, "O", "O", "1.0"));
      unit.put("UK[brace]",   new UBASE("UK", "brace", 2, "O", "O", "1.0"));
      unit.put("Imperial[bundle]",   new UBASE("Imperial", "bundle", 1000, "O", "O", "1.0"));
      unit.put("Imperial[bdl]",   new UBASE("Imperial", "bundle", 1000, "O", "O", "1.0"));
      unit.put("Imperial[bundle(old)]",   new UBASE("Imperial", "bundle(old)", 960, "O", "O", "1.0"));
      unit.put("Imperial[bdl(old)]",   new UBASE("Imperial", "bundle(old)", 960, "O", "O", "1.0"));
      unit.put("Imperial[decade]",   new UBASE("Imperial", "decade", 10, "O", "O", "1.0"));
      unit.put("UK[dicker]",   new UBASE("UK", "dicker", 10, "O", "O", "1.0"));
      unit.put("Imperial[dozen]",   new UBASE("Imperial", "dozen", 12, "O", "O", "1.0"));
      unit.put("Imperial[doz]",   new UBASE("Imperial", "dozen", 12, "O", "O", "1.0"));
      unit.put("Imperial[dz]",   new UBASE("Imperial", "dozen", 12, "O", "O", "1.0"));
      unit.put("UK[flock]",   new UBASE("UK", "flock", 40, "O", "O", "1.0"));
      unit.put("Imperial[great-gross]",   new UBASE("Imperial", "great-gross", 1728, "O", "O", "1.0"));
      unit.put("Imperial[great-hundred]",   new UBASE("Imperial", "great-hundred", 120, "O", "O", "1.0"));
      unit.put("UK[gross]",   new UBASE("UK", "gross", 144, "O", "O", "1.0"));
      unit.put("Imperial[hat-trick]",   new UBASE("Imperial", "hat-trick", 3, "O", "O", "1.0"));
      unit.put("Imperial[nest]",   new UBASE("Imperial", "hat-trick", 3, "O", "O", "1.0"));
      unit.put("Roman[hecatomb]",   new UBASE("Roman", "hecatomb", 100, "O", "O", "1.0"));
      unit.put("MKS[hebdo]",   new UBASE("MKS", "hebdo", 10000000, "O", "O", "1.0"));
      unit.put("Greek[hekatomb]",   new UBASE("Greek", "hekatomb", 100, "O", "O", "1.0"));
      unit.put("Imperial[hundred]",   new UBASE("Imperial", "hundred", 100, "O", "O", "1.0"));
      unit.put("Indian[lakh]",   new UBASE("Indian", "lakh", 100000, "O", "O", "1.0"));
      unit.put("UK[last]",   new UBASE("UK", "last", 13200, "O", "O", "1.0"));
      unit.put("UK[long-hundred]",   new UBASE("UK", "long-hundred", 132, "O", "O", "1.0"));
      unit.put("UK[pair]",   new UBASE("UK", "pair", 2, "O", "O", "1.0"));
      unit.put("UK[perfect-ream]",   new UBASE("UK", "perfect-ream", 512, "O", "O", "1.0"));
      unit.put("UK[piece]",   new UBASE("UK", "piece", 1, "O", "O", "1.0"));
      unit.put("UK[pc]",   new UBASE("UK", "piece", 1, "O", "O", "1.0"));
      unit.put("UK[point]",   new UBASE("UK", "point", 1, "O", "O", "1.0"));
      unit.put("US[quires(new)]",   new UBASE("US", "quires(new)", 25, "O", "O", "1.0"));
      unit.put("US[quires(old)]",   new UBASE("US", "quires(old)", 24, "O", "O", "1.0"));
      unit.put("INT[ream]",   new UBASE("INT", "ream", 500, "O", "O", "1.0"));
      unit.put("Imperial[ream(old)]",   new UBASE("Imperial", "ream(old)", 480, "O", "O", "1.0"));
      unit.put("UK[score]",   new UBASE("UK", "score", 20, "O", "O", "1.0"));
      unit.put("UK[shock]",   new UBASE("UK", "shock", 60, "O", "O", "1.0"));
      unit.put("UK[shook]",   new UBASE("UK", "shook", 60, "O", "O", "1.0"));
      unit.put("UK[ten-hundred]",   new UBASE("UK", "ten-hundred", 1320, "O", "O", "1.0"));
      unit.put("Imperial[thousand]",   new UBASE("Imperial", "thousand", 1000, "O", "O", "1.0"));
      unit.put("Imperial[timber]",   new UBASE("Imperial", "timber", 40, "O", "O", "1.0"));
      unit.put("UK[timer]",   new UBASE("UK", "timer", 40, "O", "O", "1.0"));
      unit.put("UK[unity]",   new UBASE("UK", "unity", 1, "O", "O", "1.0"));
      unit.put("UK[warp]",   new UBASE("UK", "warp", 4, "O", "O", "1.0"));
      unit.put("UK[yoke]",   new UBASE("UK", "yoke", 2, "O", "O", "1.0"));
      _map.put("count",   new BaseSystem("count", unit, "1.0"));

      unit.clear();


   }

}
// EOF
