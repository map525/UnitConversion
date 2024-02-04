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
// File Count.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class Count : SingleSystem
   {
       private static Count singleton_ = new Count();

       public static Count Instance()
       {
           return singleton_;
       }

       private Count() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("Imperial[baker's-dozen]",   new UBASE("Imperial", "baker's-dozen", 13, "O", "O", "1.0"));
          unit.Add("Imperial[bale]",   new UBASE("Imperial", "bale", 4800, "O", "O", "1.0"));
          unit.Add("Imperial[bl]",   new UBASE("Imperial", "bale", 4800, "O", "O", "1.0"));
          unit.Add("INT[bale]",   new UBASE("INT", "bale", 5000, "O", "O", "1.0"));
          unit.Add("INT[bl]",   new UBASE("INT", "bale", 5000, "O", "O", "1.0"));
          unit.Add("UK[brace]",   new UBASE("UK", "brace", 2, "O", "O", "1.0"));
          unit.Add("Imperial[bundle]",   new UBASE("Imperial", "bundle", 1000, "O", "O", "1.0"));
          unit.Add("Imperial[bdl]",   new UBASE("Imperial", "bundle", 1000, "O", "O", "1.0"));
          unit.Add("Imperial[bundle(old)]",   new UBASE("Imperial", "bundle(old)", 960, "O", "O", "1.0"));
          unit.Add("Imperial[bdl(old)]",   new UBASE("Imperial", "bundle(old)", 960, "O", "O", "1.0"));
          unit.Add("Imperial[decade]",   new UBASE("Imperial", "decade", 10, "O", "O", "1.0"));
          unit.Add("UK[dicker]",   new UBASE("UK", "dicker", 10, "O", "O", "1.0"));
          unit.Add("Imperial[dozen]",   new UBASE("Imperial", "dozen", 12, "O", "O", "1.0"));
          unit.Add("Imperial[doz]",   new UBASE("Imperial", "dozen", 12, "O", "O", "1.0"));
          unit.Add("Imperial[dz]",   new UBASE("Imperial", "dozen", 12, "O", "O", "1.0"));
          unit.Add("UK[flock]",   new UBASE("UK", "flock", 40, "O", "O", "1.0"));
          unit.Add("Imperial[great-gross]",   new UBASE("Imperial", "great-gross", 1728, "O", "O", "1.0"));
          unit.Add("Imperial[great-hundred]",   new UBASE("Imperial", "great-hundred", 120, "O", "O", "1.0"));
          unit.Add("UK[gross]",   new UBASE("UK", "gross", 144, "O", "O", "1.0"));
          unit.Add("Imperial[hat-trick]",   new UBASE("Imperial", "hat-trick", 3, "O", "O", "1.0"));
          unit.Add("Imperial[nest]",   new UBASE("Imperial", "hat-trick", 3, "O", "O", "1.0"));
          unit.Add("Roman[hecatomb]",   new UBASE("Roman", "hecatomb", 100, "O", "O", "1.0"));
          unit.Add("MKS[hebdo]",   new UBASE("MKS", "hebdo", 10000000, "O", "O", "1.0"));
          unit.Add("Greek[hekatomb]",   new UBASE("Greek", "hekatomb", 100, "O", "O", "1.0"));
          unit.Add("Imperial[hundred]",   new UBASE("Imperial", "hundred", 100, "O", "O", "1.0"));
          unit.Add("Indian[lakh]",   new UBASE("Indian", "lakh", 100000, "O", "O", "1.0"));
          unit.Add("UK[last]",   new UBASE("UK", "last", 13200, "O", "O", "1.0"));
          unit.Add("UK[long-hundred]",   new UBASE("UK", "long-hundred", 132, "O", "O", "1.0"));
          unit.Add("UK[pair]",   new UBASE("UK", "pair", 2, "O", "O", "1.0"));
          unit.Add("UK[perfect-ream]",   new UBASE("UK", "perfect-ream", 512, "O", "O", "1.0"));
          unit.Add("UK[piece]",   new UBASE("UK", "piece", 1, "O", "O", "1.0"));
          unit.Add("UK[pc]",   new UBASE("UK", "piece", 1, "O", "O", "1.0"));
          unit.Add("UK[point]",   new UBASE("UK", "point", 1, "O", "O", "1.0"));
          unit.Add("US[quires(new)]",   new UBASE("US", "quires(new)", 25, "O", "O", "1.0"));
          unit.Add("US[quires(old)]",   new UBASE("US", "quires(old)", 24, "O", "O", "1.0"));
          unit.Add("INT[ream]",   new UBASE("INT", "ream", 500, "O", "O", "1.0"));
          unit.Add("Imperial[ream(old)]",   new UBASE("Imperial", "ream(old)", 480, "O", "O", "1.0"));
          unit.Add("UK[score]",   new UBASE("UK", "score", 20, "O", "O", "1.0"));
          unit.Add("UK[shock]",   new UBASE("UK", "shock", 60, "O", "O", "1.0"));
          unit.Add("UK[shook]",   new UBASE("UK", "shook", 60, "O", "O", "1.0"));
          unit.Add("UK[ten-hundred]",   new UBASE("UK", "ten-hundred", 1320, "O", "O", "1.0"));
          unit.Add("Imperial[thousand]",   new UBASE("Imperial", "thousand", 1000, "O", "O", "1.0"));
          unit.Add("Imperial[timber]",   new UBASE("Imperial", "timber", 40, "O", "O", "1.0"));
          unit.Add("UK[timer]",   new UBASE("UK", "timer", 40, "O", "O", "1.0"));
          unit.Add("UK[unity]",   new UBASE("UK", "unity", 1, "O", "O", "1.0"));
          unit.Add("UK[warp]",   new UBASE("UK", "warp", 4, "O", "O", "1.0"));
          unit.Add("UK[yoke]",   new UBASE("UK", "yoke", 2, "O", "O", "1.0"));
          _map.Add("count",   new BaseSystem("count", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
