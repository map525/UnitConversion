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
// File GLOBAL_UNITS.cs
//
// Units by country.
//
// Class for system units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class GLOBAL_UNITS : CanonicalSystem
   {
       private static GLOBAL_UNITS singleton_ = new GLOBAL_UNITS();

       public static GLOBAL_UNITS Instance()
       {
           return singleton_;
       }

       private void unit0()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("astronomical-unit",   new UBASE("@", "astronomical-unit", 1.495978707000000E+11, "m", "L", "1.0"));
          length.Add("AU",   new UBASE("@", "AU", 1.495978707000000E+11, "m", "L", "1.0"));
          length.Add("UA",   new UBASE("@", "UA", 1.495978707000000E+11, "m", "L", "1.0"));
          length.Add("au",   new UBASE("@", "au", 1.495978707000000E+11, "m", "L", "1.0"));
          length.Add("ua",   new UBASE("@", "ua", 1.495978707000000E+11, "m", "L", "1.0"));
          length.Add("hubble",   new UBASE("@", "hubble", 9.454254955488000E+24, "m", "L", "1.0"));
          length.Add("light-minute",   new UBASE("@", "light-minute", 1.798754748000000E+10, "m", "L", "1.0"));
          length.Add("lmin",   new UBASE("@", "lmin", 1.798754748000000E+10, "m", "L", "1.0"));
          length.Add("cmin",   new UBASE("@", "cmin", 1.798754748000000E+10, "m", "L", "1.0"));
          length.Add("light-second",   new UBASE("@", "light-second", 2.997924580000000E+08, "m", "L", "1.0"));
          length.Add("lsec",   new UBASE("@", "lsec", 2.997924580000000E+08, "m", "L", "1.0"));
          length.Add("csec",   new UBASE("@", "csec", 2.997924580000000E+08, "m", "L", "1.0"));
          length.Add("light-year",   new UBASE("@", "light-year", 9.460730472580800E+15, "m", "L", "1.0"));
          length.Add("ly",   new UBASE("@", "ly", 9.460730472580800E+15, "m", "L", "1.0"));
          length.Add("AL",   new UBASE("@", "AL", 9.460730472580800E+15, "m", "L", "1.0"));
          length.Add("al. light-years",   new UBASE("@", "al. light-years", 9.460730472580800E+15, "m", "L", "1.0"));
          length.Add("parsec",   new UBASE("@", "parsec", 3.085677581491370E+16, "m", "L", "1.0"));
          length.Add("pc",   new UBASE("@", "pc", 3.085677581491370E+16, "m", "L", "1.0"));
          length.Add("parsecs",   new UBASE("@", "parsecs", 3.085677581491370E+16, "m", "L", "1.0"));
          length.Add("siriometer",   new UBASE("@", "siriometer", 1.495978707000000E+17, "m", "L", "1.0"));
          length.Add("siriusweit",   new UBASE("@", "siriusweit", 1.542838790745680E+17, "m", "L", "1.0"));
          length.Add("spat",   new UBASE("@", "spat", 1.000000000000000E+12, "m", "L", "1.0"));
          length.Add("S",   new UBASE("@", "S", 1.000000000000000E+12, "m", "L", "1.0"));
          area.Add("square-parsec",   new UBASE("@", "square-parsec", 9.521406136918410E+32, "m2", "L2", "1.0"));
          area.Add("sq-parsec",   new UBASE("@", "sq-parsec", 9.521406136918410E+32, "m2", "L2", "1.0"));
          mass.Add("mass-of-sun",   new UBASE("@", "mass-of-sun", 1.988470000000000E+30, "kg", "M", "1.0"));
          mass.Add("solar-mass",   new UBASE("@", "solar-mass", 1.988470000000000E+30, "kg", "M", "1.0"));
          mass.Add("MO",   new UBASE("@", "MO", 1.988470000000000E+30, "kg", "M", "1.0"));
          dry.Add("cubic-parsec",   new UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3", "L3", "1.0"));
          dry.Add("cu-parsec",   new UBASE("@", "cu-parsec", 2.937998946096350E+49, "m3", "L3", "1.0"));
          _map.Add("@",   new BaseSystem("@", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit1()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("au-of-length",   new UBASE("a.u.", "au-of-length", 5.291772109030000E-11, "m", "L", "1.0"));
          length.Add("aul",   new UBASE("a.u.", "aul", 5.291772109030000E-11, "m", "L", "1.0"));
          length.Add("bohr",   new UBASE("a.u.", "bohr", 5.291772109060850E-11, "m", "L", "1.0"));
          length.Add("ao",   new UBASE("a.u.", "ao", 5.291772109060850E-11, "m", "L", "1.0"));
          length.Add("b",   new UBASE("a.u.", "b", 5.291772109060850E-11, "m", "L", "1.0"));
          length.Add("bohr-radius",   new UBASE("a.u.", "bohr-radius", 5.291772109060850E-11, "m", "L", "1.0"));
          length.Add("first-bohr-radius",   new UBASE("a.u.", "first-bohr-radius", 5.291772109060850E-11, "m", "L", "1.0"));
          area.Add("square-bohr",   new UBASE("a.u.", "square-bohr", 2.800285205423440E-21, "m2", "L2", "1.0"));
          area.Add("ao2",   new UBASE("a.u.", "ao2", 2.800285205423440E-21, "m2", "L2", "1.0"));
          mass.Add("au-of-mass",   new UBASE("a.u.", "au-of-mass", 9.109383701500000E-31, "kg", "M", "1.0"));
          mass.Add("aum",   new UBASE("a.u.", "aum", 9.109383701500000E-31, "kg", "M", "1.0"));
          mass.Add("electron-rest-mass",   new UBASE("a.u.", "electron-rest-mass", 9.109383701500000E-31, "kg", "M", "1.0"));
          mass.Add("mo",   new UBASE("a.u.", "mo", 9.109383701500000E-31, "kg", "M", "1.0"));
          mass.Add("me",   new UBASE("a.u.", "me", 9.109383701500000E-31, "kg", "M", "1.0"));
          dry.Add("atomic-volume",   new UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3", "L3", "1.0"));
          dry.Add("ao3",   new UBASE("a.u.", "ao3", 6.207146679245500E-31, "m3", "L3", "1.0"));
          _map.Add("a.u.",   new BaseSystem("a.u.", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit2()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("berri",   new UBASE("Abyssinian", "berri", 8.232000000000000E-01, "m", "L", "1.0"));
          length.Add("farsang",   new UBASE("Abyssinian", "farsang", 5.070226000000000E+03, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Abyssinian", "pic", 6.860000000000000E-01, "m", "L", "1.0"));
          area.Add("square-pic",   new UBASE("Abyssinian", "square-pic", 4.705960000000000E-01, "m2", "L2", "1.0"));
          mass.Add("derime",   new UBASE("Abyssinian", "derime", 2.591666666666670E-03, "kg", "M", "1.0"));
          mass.Add("drachm",   new UBASE("Abyssinian", "drachm", 2.844166666666670E-04, "kg", "M", "1.0"));
          mass.Add("mocha",   new UBASE("Abyssinian", "mocha", 3.110000000000000E-02, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Abyssinian", "rottolo", 3.110000000000000E-01, "kg", "M", "1.0"));
          mass.Add("wakea",   new UBASE("Abyssinian", "wakea", 2.591666666666670E-02, "kg", "M", "1.0"));
          liquid.Add("ardeb(long)",   new UBASE("Abyssinian", "ardeb(long)", 1.056000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("ardeb(short)",   new UBASE("Abyssinian", "ardeb(short)", 4.400000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kuba",   new UBASE("Abyssinian", "kuba", 1.012000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("madega",   new UBASE("Abyssinian", "madega", 4.400000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Abyssinian", "cubic-pic", 3.228288560000000E-01, "m3", "L3", "1.0"));
          _map.Add("Abyssinian",   new BaseSystem("Abyssinian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit3()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("foot",   new UBASE("African", "foot", 3.148580000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("African", "feet", 3.148580000000000E-01, "m", "L", "1.0"));
          length.Add("mkono",   new UBASE("African", "mkono", 4.572000000000000E-01, "m", "L", "1.0"));
          length.Add("travel-hour",   new UBASE("African", "travel-hour", 3.700000000000000E+03, "m", "L", "1.0"));
          mass.Add("bahar",   new UBASE("African", "bahar", 1.090000000000000E+02, "kg", "M", "1.0"));
          _map.Add("African",   new BaseSystem("African", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit4()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("gaz-i-shah",   new UBASE("Afgan", "gaz-i-shah", 1.065000000000000E+00, "m", "L", "1.0"));
          length.Add("girah-i-gaz-i-shah",   new UBASE("Afgan", "girah-i-gaz-i-shah", 6.600000000000000E-02, "m", "L", "1.0"));
          length.Add("gaz-i-mimar",   new UBASE("Afgan", "gaz-i-mimar", 8.380000000000000E-01, "m", "L", "1.0"));
          length.Add("gaz-i-jareeb",   new UBASE("Afgan", "gaz-i-jareeb", 7.360000000000000E-01, "m", "L", "1.0"));
          length.Add("jareeb",   new UBASE("Afgan", "jareeb", 4.418300000000000E+01, "m", "L", "1.0"));
          length.Add("biswah",   new UBASE("Afgan", "biswah", 9.879000000000000E+00, "m", "L", "1.0"));
          length.Add("biswasah",   new UBASE("Afgan", "biswasah", 2.209000000000000E+00, "m", "L", "1.0"));
          length.Add("goes",   new UBASE("Afgan", "goes", 1.160000000000000E+00, "m", "L", "1.0"));
          length.Add("kandahari",   new UBASE("Afgan", "kandahari", 1.054100000000000E+00, "m", "L", "1.0"));
          length.Add("kadam",   new UBASE("Afgan", "kadam", 7.112000000000000E-01, "m", "L", "1.0"));
          length.Add("farsakh",   new UBASE("Afgan", "farsakh", 8.046720000000000E+03, "m", "L", "1.0"));
          area.Add("jareeb",   new UBASE("Afgan", "jareeb", 3.048000000000000E-01, "m2", "L2", "1.0"));
          area.Add("tanab",   new UBASE("Afgan", "tanab", 3.439827959040000E+05, "m2", "L2", "1.0"));
          mass.Add("nakhud",   new UBASE("Afgan", "nakhud", 1.900000000000000E-04, "kg", "M", "1.0"));
          mass.Add("misqal",   new UBASE("Afgan", "misqal", 4.560000000000000E-03, "kg", "M", "1.0"));
          mass.Add("khurd",   new UBASE("Afgan", "khurd", 1.104000000000000E-01, "kg", "M", "1.0"));
          mass.Add("pao",   new UBASE("Afgan", "pao", 4.416000000000000E-01, "kg", "M", "1.0"));
          mass.Add("charak",   new UBASE("Afgan", "charak", 1.766400000000000E+00, "kg", "M", "1.0"));
          mass.Add("seer",   new UBASE("Afgan", "seer", 7.066000000000000E+00, "kg", "M", "1.0"));
          mass.Add("miskal",   new UBASE("Afgan", "miskal", 2.355333333333330E-01, "kg", "M", "1.0"));
          mass.Add("man",   new UBASE("Afgan", "man", 5.652800000000000E+02, "kg", "M", "1.0"));
          mass.Add("kharwar",   new UBASE("Afgan", "kharwar", 5.652800000000000E+04, "kg", "M", "1.0"));
          mass.Add("puri",   new UBASE("Afgan", "puri", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("khaltar",   new UBASE("Afgan", "khaltar", 7.066000000000000E+00, "kg", "M", "1.0"));
          mass.Add("herati-seer",   new UBASE("Afgan", "herati-seer", 9.330400000000000E-02, "kg", "M", "1.0"));
          mass.Add("herati-man",   new UBASE("Afgan", "herati-man", 3.732160000000000E+00, "kg", "M", "1.0"));
          mass.Add("herati-kharwar",   new UBASE("Afgan", "herati-kharwar", 3.732160000000000E+02, "kg", "M", "1.0"));
          mass.Add("mazar-seer",   new UBASE("Afgan", "mazar-seer", 1.049670000000000E+01, "kg", "M", "1.0"));
          mass.Add("mazar-man",   new UBASE("Afgan", "mazar-man", 1.679472000000000E+02, "kg", "M", "1.0"));
          mass.Add("marzar-kharwar",   new UBASE("Afgan", "marzar-kharwar", 5.038416000000000E+02, "kg", "M", "1.0"));
          mass.Add("tashkurghan-seer",   new UBASE("Afgan", "tashkurghan-seer", 8.397360000000000E+00, "kg", "M", "1.0"));
          mass.Add("tashkurghan-man",   new UBASE("Afgan", "tashkurghan-man", 6.717888000000000E+01, "kg", "M", "1.0"));
          liquid.Add("cubic-gaz-i-shah",   new UBASE("Afgan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-gaz-i-shah",   new UBASE("Afgan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3", "L3", "1.0"));
          _map.Add("Afgan",   new BaseSystem("Afgan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit5()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("nus(raby)",   new UBASE("Algerian", "nus(raby)", 2.335000000000000E-01, "m", "L", "1.0"));
          length.Add("nus(torky)",   new UBASE("Algerian", "nus(torky)", 3.115000000000000E-01, "m", "L", "1.0"));
          length.Add("pic(dzera-a-raby)",   new UBASE("Algerian", "pic(dzera-a-raby)", 4.670000000000000E-01, "m", "L", "1.0"));
          length.Add("pic(dzera-a-torky)",   new UBASE("Algerian", "pic(dzera-a-torky)", 6.230000000000000E-01, "m", "L", "1.0"));
          length.Add("rebia(raby)",   new UBASE("Algerian", "rebia(raby)", 1.167500000000000E-01, "m", "L", "1.0"));
          length.Add("rebia(torky)",   new UBASE("Algerian", "rebia(torky)", 1.557500000000000E-01, "m", "L", "1.0"));
          length.Add("termin(raby)",   new UBASE("Algerian", "termin(raby)", 5.837500000000000E-02, "m", "L", "1.0"));
          length.Add("termin(torky)",   new UBASE("Algerian", "termin(torky)", 7.787500000000000E-02, "m", "L", "1.0"));
          area.Add("square-pic(dzera-a-torky)",   new UBASE("Algerian", "square-pic(dzera-a-torky)", 3.881290000000000E-01, "m2", "L2", "1.0"));
          area.Add("square-pic(dzera-a-raby)",   new UBASE("Algerian", "square-pic(dzera-a-raby)", 2.180890000000000E-01, "m2", "L2", "1.0"));
          mass.Add("cantar(kebyr)",   new UBASE("Algerian", "cantar(kebyr)", 8.191200000000000E+01, "kg", "M", "1.0"));
          mass.Add("cantar(khaldary)",   new UBASE("Algerian", "cantar(khaldary)", 6.143400000000000E+01, "kg", "M", "1.0"));
          mass.Add("cantar(thary)",   new UBASE("Algerian", "cantar(thary)", 5.460800000000000E+01, "kg", "M", "1.0"));
          mass.Add("gyral",   new UBASE("Algerian", "gyral", 2.070000000000000E-01, "kg", "M", "1.0"));
          mass.Add("metical",   new UBASE("Algerian", "metical", 4.707586206896550E-03, "kg", "M", "1.0"));
          mass.Add("metsquat",   new UBASE("Algerian", "metsquat", 4.707586206896550E-03, "kg", "M", "1.0"));
          mass.Add("rottolo(kebyr)",   new UBASE("Algerian", "rottolo(kebyr)", 8.191200000000000E-01, "kg", "M", "1.0"));
          mass.Add("rottolo(khaldary)",   new UBASE("Algerian", "rottolo(khaldary)", 6.143400000000000E-01, "kg", "M", "1.0"));
          mass.Add("rottolo(thary)",   new UBASE("Algerian", "rottolo(thary)", 5.460800000000000E-01, "kg", "M", "1.0"));
          mass.Add("ukkia",   new UBASE("Algerian", "ukkia", 3.413000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("caffiso",   new UBASE("Algerian", "caffiso", 3.170833333333330E-01, "m3", "L3", "1.0"));
          liquid.Add("calisse",   new UBASE("Algerian", "calisse", 3.170833333333330E-01, "m3", "L3", "1.0"));
          liquid.Add("khoul",   new UBASE("Algerian", "khoul", 1.666666666666670E-02, "m3", "L3", "1.0"));
          liquid.Add("kolleh",   new UBASE("Algerian", "kolleh", 1.666666666666670E-02, "m3", "L3", "1.0"));
          liquid.Add("metalli",   new UBASE("Algerian", "metalli", 1.790000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("saah",   new UBASE("Algerian", "saah", 5.800000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("ssah",   new UBASE("Algerian", "ssah", 5.800000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("caffiso",   new UBASE("Algerian", "caffiso", 3.174700000000000E-01, "m3", "L3", "1.0"));
          dry.Add("tarie",   new UBASE("Algerian", "tarie", 1.587350000000000E-01, "m3", "L3", "1.0"));
          dry.Add("tarri",   new UBASE("Algerian", "tarri", 1.587350000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Algerian",   new BaseSystem("Algerian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit6()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("chai-vai",   new UBASE("Annamese", "chai-vai", 1.463040000000000E+01, "m", "L", "1.0"));
          length.Add("cong-ly",   new UBASE("Annamese", "cong-ly", 1.000000000000000E+03, "m", "L", "1.0"));
          length.Add("dam",   new UBASE("Annamese", "dam", 5.760000000000000E+02, "m", "L", "1.0"));
          length.Add("gon",   new UBASE("Annamese", "gon", 1.410000000000000E+02, "m", "L", "1.0"));
          length.Add("hao",   new UBASE("Annamese", "hao", 4.000000000000000E-05, "m", "L", "1.0"));
          length.Add("hot",   new UBASE("Annamese", "hot", 4.000000000000000E-07, "m", "L", "1.0"));
          length.Add("li",   new UBASE("Annamese", "li", 4.000000000000000E-04, "m", "L", "1.0"));
          length.Add("ly",   new UBASE("Annamese", "ly", 4.000000000000000E-04, "m", "L", "1.0"));
          length.Add("ly(Annamite)",   new UBASE("Annamese", "ly(Annamite)", 4.700000000000000E-03, "m", "L", "1.0"));
          length.Add("mao",   new UBASE("Annamese", "mao", 7.050000000000000E+01, "m", "L", "1.0"));
          length.Add("ngu",   new UBASE("Annamese", "ngu", 2.000000000000000E+00, "m", "L", "1.0"));
          length.Add("ngu(Annamite)",   new UBASE("Annamese", "ngu(Annamite)", 2.350000000000000E+00, "m", "L", "1.0"));
          length.Add("phan",   new UBASE("Annamese", "phan", 4.000000000000000E-03, "m", "L", "1.0"));
          length.Add("phan(1914)",   new UBASE("Annamese", "phan(1914)", 4.700000000000000E-03, "m", "L", "1.0"));
          length.Add("phi-unit",   new UBASE("Annamese", "phi-unit", 4.700000000000000E-03, "m", "L", "1.0"));
          length.Add("p-unit",   new UBASE("Annamese", "p-unit", 4.700000000000000E-03, "m", "L", "1.0"));
          length.Add("sao",   new UBASE("Annamese", "sao", 7.050000000000000E+00, "m", "L", "1.0"));
          length.Add("tac",   new UBASE("Annamese", "tac", 4.000000000000000E-02, "m", "L", "1.0"));
          length.Add("tam",   new UBASE("Annamese", "tam", 2.350000000000000E+00, "m", "L", "1.0"));
          length.Add("tat",   new UBASE("Annamese", "tat", 4.700000000000000E-02, "m", "L", "1.0"));
          length.Add("that",   new UBASE("Annamese", "that", 1.410000000000000E+01, "m", "L", "1.0"));
          length.Add("thi-ly",   new UBASE("Annamese", "thi-ly", 5.000000000000000E+02, "m", "L", "1.0"));
          length.Add("thuoc",   new UBASE("Annamese", "thuoc", 4.000000000000000E-01, "m", "L", "1.0"));
          length.Add("thuoc-de-ruong",   new UBASE("Annamese", "thuoc-de-ruong", 4.700000000000000E-01, "m", "L", "1.0"));
          length.Add("thuoc-moc",   new UBASE("Annamese", "thuoc-moc", 4.250000000000000E-01, "m", "L", "1.0"));
          length.Add("thuoc-ta",   new UBASE("Annamese", "thuoc-ta", 4.000000000000000E-01, "m", "L", "1.0"));
          length.Add("thuoc-vai",   new UBASE("Annamese", "thuoc-vai", 6.440000000000000E-01, "m", "L", "1.0"));
          length.Add("ti",   new UBASE("Annamese", "ti", 4.000000000000000E-06, "m", "L", "1.0"));
          length.Add("truong",   new UBASE("Annamese", "truong", 4.000000000000000E+00, "m", "L", "1.0"));
          length.Add("truong(Annamite)",   new UBASE("Annamese", "truong(Annamite)", 4.700000000000000E-01, "m", "L", "1.0"));
          length.Add("tuc",   new UBASE("Annamese", "tuc", 4.000000000000000E-02, "m", "L", "1.0"));
          length.Add("vi",   new UBASE("Annamese", "vi", 4.000000000000000E-08, "m", "L", "1.0"));
          length.Add("xich",   new UBASE("Annamese", "xich", 4.000000000000000E-01, "m", "L", "1.0"));
          area.Add("cao",   new UBASE("Annamese", "cao", 3.600000000000000E+02, "m2", "L2", "1.0"));
          area.Add("cong",   new UBASE("Annamese", "cong", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("cong-dat",   new UBASE("Annamese", "cong-dat", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("dam-vuong",   new UBASE("Annamese", "dam-vuong", 3.317760000000000E+05, "m2", "L2", "1.0"));
          area.Add("ghe",   new UBASE("Annamese", "ghe", 1.600000000000000E-01, "m2", "L2", "1.0"));
          area.Add("khau",   new UBASE("Annamese", "khau", 1.600000000000000E-02, "m2", "L2", "1.0"));
          area.Add("mau",   new UBASE("Annamese", "mau", 3.600000000000000E+03, "m2", "L2", "1.0"));
          area.Add("mau(Annamite)",   new UBASE("Annamese", "mau(Annamite)", 4.970250000000000E+03, "m2", "L2", "1.0"));
          area.Add("mieng",   new UBASE("Annamese", "mieng", 3.600000000000000E+01, "m2", "L2", "1.0"));
          area.Add("o",   new UBASE("Annamese", "o", 1.600000000000000E-01, "m2", "L2", "1.0"));
          area.Add("phan",   new UBASE("Annamese", "phan", 2.400000000000000E-01, "m2", "L2", "1.0"));
          area.Add("quo",   new UBASE("Annamese", "quo", 9.940500000000000E+03, "m2", "L2", "1.0"));
          area.Add("sao",   new UBASE("Annamese", "sao", 3.600000000000000E+02, "m2", "L2", "1.0"));
          area.Add("sao(Annamite)",   new UBASE("Annamese", "sao(Annamite)", 4.970250000000000E+02, "m2", "L2", "1.0"));
          area.Add("square-ngu",   new UBASE("Annamese", "square-ngu", 5.522500000000000E+00, "m2", "L2", "1.0"));
          area.Add("tac",   new UBASE("Annamese", "tac", 2.400000000000000E+00, "m2", "L2", "1.0"));
          area.Add("than",   new UBASE("Annamese", "than", 4.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("thon",   new UBASE("Annamese", "thon", 2.400000000000000E+00, "m2", "L2", "1.0"));
          area.Add("thuoc",   new UBASE("Annamese", "thuoc", 2.400000000000000E+01, "m2", "L2", "1.0"));
          area.Add("thuoc(Annamite)",   new UBASE("Annamese", "thuoc(Annamite)", 3.313500000000000E+01, "m2", "L2", "1.0"));
          area.Add("xich",   new UBASE("Annamese", "xich", 2.400000000000000E+01, "m2", "L2", "1.0"));
          mass.Add("binh",   new UBASE("Annamese", "binh", 3.020000000000000E+01, "kg", "M", "1.0"));
          mass.Add("can",   new UBASE("Annamese", "can", 6.040000000000000E-01, "kg", "M", "1.0"));
          mass.Add("can-ta",   new UBASE("Annamese", "can-ta", 6.040000000000000E-01, "kg", "M", "1.0"));
          mass.Add("cay",   new UBASE("Annamese", "cay", 3.775000000000000E-02, "kg", "M", "1.0"));
          mass.Add("chi",   new UBASE("Annamese", "chi", 3.775000000000000E-03, "kg", "M", "1.0"));
          mass.Add("dong",   new UBASE("Annamese", "dong", 3.775000000000000E-03, "kg", "M", "1.0"));
          mass.Add("dong-can",   new UBASE("Annamese", "dong-can", 3.775000000000000E-03, "kg", "M", "1.0"));
          mass.Add("fan",   new UBASE("Annamese", "fan", 3.775000000000000E-04, "kg", "M", "1.0"));
          mass.Add("hao",   new UBASE("Annamese", "hao", 3.775000000000000E-06, "kg", "M", "1.0"));
          mass.Add("hot",   new UBASE("Annamese", "hot", 3.775000000000000E-08, "kg", "M", "1.0"));
          mass.Add("li",   new UBASE("Annamese", "li", 3.775000000000000E-05, "kg", "M", "1.0"));
          mass.Add("kwan",   new UBASE("Annamese", "kwan", 6.795000000000000E+01, "kg", "M", "1.0"));
          mass.Add("lang",   new UBASE("Annamese", "lang", 3.775000000000000E-02, "kg", "M", "1.0"));
          mass.Add("luong",   new UBASE("Annamese", "luong", 3.775000000000000E-02, "kg", "M", "1.0"));
          mass.Add("ly",   new UBASE("Annamese", "ly", 3.775000000000000E-05, "kg", "M", "1.0"));
          mass.Add("nen",   new UBASE("Annamese", "nen", 3.775000000000000E-01, "kg", "M", "1.0"));
          mass.Add("neu",   new UBASE("Annamese", "neu", 3.775000000000000E-01, "kg", "M", "1.0"));
          mass.Add("phan",   new UBASE("Annamese", "phan", 3.775000000000000E-04, "kg", "M", "1.0"));
          mass.Add("picul",   new UBASE("Annamese", "picul", 6.040000000000000E+01, "kg", "M", "1.0"));
          mass.Add("quan",   new UBASE("Annamese", "quan", 3.020000000000000E+02, "kg", "M", "1.0"));
          mass.Add("ta",   new UBASE("Annamese", "ta", 6.040000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tan",   new UBASE("Annamese", "tan", 6.040000000000000E+02, "kg", "M", "1.0"));
          mass.Add("ti",   new UBASE("Annamese", "ti", 3.775000000000000E-07, "kg", "M", "1.0"));
          mass.Add("tien",   new UBASE("Annamese", "tien", 3.775000000000000E-03, "kg", "M", "1.0"));
          mass.Add("vi",   new UBASE("Annamese", "vi", 3.775000000000000E-09, "kg", "M", "1.0"));
          mass.Add("yen",   new UBASE("Annamese", "yen", 6.040000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("bat",   new UBASE("Annamese", "bat", 5.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cap",   new UBASE("Annamese", "cap", 2.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("dau",   new UBASE("Annamese", "dau", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gia",   new UBASE("Annamese", "gia", 2.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("gia(rice)",   new UBASE("Annamese", "gia(rice)", 4.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("hao",   new UBASE("Annamese", "hao", 2.826000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("hiep",   new UBASE("Annamese", "hiep", 2.766000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("hoc",   new UBASE("Annamese", "hoc", 7.191600000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("nham",   new UBASE("Annamese", "nham", 2.000000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("nhon",   new UBASE("Annamese", "nhon", 2.000000000000000E-07, "m3", "L3", "1.0"));
          liquid.Add("phuong(rice)",   new UBASE("Annamese", "phuong(rice)", 2.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("sao",   new UBASE("Annamese", "sao", 2.000000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("shita",   new UBASE("Annamese", "shita", 2.826000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("thang",   new UBASE("Annamese", "thang", 2.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("thang(cochinchina)",   new UBASE("Annamese", "thang(cochinchina)", 2.766000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("thung",   new UBASE("Annamese", "thung", 2.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("thung(cochinchina)",   new UBASE("Annamese", "thung(cochinchina)", 2.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("thuoc(cochinchina)",   new UBASE("Annamese", "thuoc(cochinchina)", 2.766000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("tost",   new UBASE("Annamese", "tost", 2.000000000000000E-07, "m3", "L3", "1.0"));
          liquid.Add("tuc",   new UBASE("Annamese", "tuc", 3.333333333333330E-09, "m3", "L3", "1.0"));
          liquid.Add("uyen",   new UBASE("Annamese", "uyen", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("vuong(cochinchina)",   new UBASE("Annamese", "vuong(cochinchina)", 3.595800000000000E-02, "m3", "L3", "1.0"));
          dry.Add("hoc",   new UBASE("Annamese", "hoc", 1.600000000000000E+01, "m3", "L3", "1.0"));
          dry.Add("le",   new UBASE("Annamese", "le", 1.600000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("mieng",   new UBASE("Annamese", "mieng", 1.440000000000000E+01, "m3", "L3", "1.0"));
          dry.Add("phuong",   new UBASE("Annamese", "phuong", 8.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("than",   new UBASE("Annamese", "than", 1.600000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("toa",   new UBASE("Annamese", "toa", 5.652000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("vuong",   new UBASE("Annamese", "vuong", 8.000000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("Annamese",   new BaseSystem("Annamese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit7()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("assbaa",   new UBASE("Arabic", "assbaa", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("barid",   new UBASE("Arabic", "barid", 2.304000000000000E+04, "m", "L", "1.0"));
          length.Add("cabda",   new UBASE("Arabic", "cabda", 8.000000000000000E-02, "m", "L", "1.0"));
          length.Add("cubit(hachemic)",   new UBASE("Arabic", "cubit(hachemic)", 6.400000000000000E-01, "m", "L", "1.0"));
          length.Add("cubit(new)",   new UBASE("Arabic", "cubit(new)", 4.800000000000000E-01, "m", "L", "1.0"));
          length.Add("dhira(hachemic)",   new UBASE("Arabic", "dhira(hachemic)", 6.400000000000000E-01, "m", "L", "1.0"));
          length.Add("dhira(new)",   new UBASE("Arabic", "dhira(new)", 4.800000000000000E-01, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Arabic", "finger", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Arabic", "foot", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Arabic", "feet", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("ghalva",   new UBASE("Arabic", "ghalva", 2.304000000000000E+02, "m", "L", "1.0"));
          length.Add("ghalwah",   new UBASE("Arabic", "ghalwah", 2.304000000000000E+02, "m", "L", "1.0"));
          length.Add("marhala",   new UBASE("Arabic", "marhala", 4.608000000000000E+04, "m", "L", "1.0"));
          length.Add("marhalah",   new UBASE("Arabic", "marhalah", 4.608000000000000E+04, "m", "L", "1.0"));
          length.Add("mille",   new UBASE("Arabic", "mille", 1.920000000000000E+03, "m", "L", "1.0"));
          length.Add("orgye",   new UBASE("Arabic", "orgye", 1.920000000000000E+00, "m", "L", "1.0"));
          length.Add("parasang",   new UBASE("Arabic", "parasang", 5.760000000000000E+03, "m", "L", "1.0"));
          length.Add("qabdhah",   new UBASE("Arabic", "qabdhah", 8.000000000000000E-02, "m", "L", "1.0"));
          length.Add("qasab",   new UBASE("Arabic", "qasab", 3.840000000000000E+00, "m", "L", "1.0"));
          length.Add("qasbah",   new UBASE("Arabic", "qasbah", 3.840000000000000E+00, "m", "L", "1.0"));
          length.Add("seir",   new UBASE("Arabic", "seir", 1.920000000000000E+02, "m", "L", "1.0"));
          length.Add("stadion",   new UBASE("Arabic", "stadion", 1.920000000000000E+02, "m", "L", "1.0"));
          length.Add("veredus",   new UBASE("Arabic", "veredus", 2.304000000000000E+04, "m", "L", "1.0"));
          area.Add("achir",   new UBASE("Arabic", "achir", 1.474560000000000E+01, "m2", "L2", "1.0"));
          area.Add("cafiz",   new UBASE("Arabic", "cafiz", 1.474560000000000E+02, "m2", "L2", "1.0"));
          area.Add("daneq",   new UBASE("Arabic", "daneq", 9.830400000000000E+02, "m2", "L2", "1.0"));
          area.Add("djarib",   new UBASE("Arabic", "djarib", 1.474560000000000E+03, "m2", "L2", "1.0"));
          area.Add("feddan",   new UBASE("Arabic", "feddan", 5.898240000000000E+03, "m2", "L2", "1.0"));
          area.Add("habbah",   new UBASE("Arabic", "habbah", 8.192000000000000E+01, "m2", "L2", "1.0"));
          area.Add("qamha",   new UBASE("Arabic", "qamha", 6.144000000000000E+01, "m2", "L2", "1.0"));
          area.Add("qasaba",   new UBASE("Arabic", "qasaba", 1.474560000000000E+01, "m2", "L2", "1.0"));
          area.Add("qirat",   new UBASE("Arabic", "qirat", 2.457600000000000E+02, "m2", "L2", "1.0"));
          area.Add("square-cubit",   new UBASE("Arabic", "square-cubit", 4.096000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("dihrem",   new UBASE("Arabic", "dihrem", 2.833333333333330E-03, "kg", "M", "1.0"));
          mass.Add("kikkar",   new UBASE("Arabic", "kikkar", 4.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("man",   new UBASE("Arabic", "man", 6.800000000000000E-01, "kg", "M", "1.0"));
          mass.Add("nasch",   new UBASE("Arabic", "nasch", 5.666666666666670E-02, "kg", "M", "1.0"));
          mass.Add("nevat",   new UBASE("Arabic", "nevat", 1.416666666666670E-02, "kg", "M", "1.0"));
          mass.Add("oeque",   new UBASE("Arabic", "oeque", 1.360000000000000E+00, "kg", "M", "1.0"));
          mass.Add("oka",   new UBASE("Arabic", "oka", 1.360000000000000E+00, "kg", "M", "1.0"));
          mass.Add("oukia",   new UBASE("Arabic", "oukia", 1.133333333333330E-01, "kg", "M", "1.0"));
          mass.Add("quanthar",   new UBASE("Arabic", "quanthar", 3.400000000000000E+01, "kg", "M", "1.0"));
          mass.Add("rotl",   new UBASE("Arabic", "rotl", 3.400000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("sa",   new UBASE("Arabic", "sa", 4.212500000000000E-03, "m3", "L3", "1.0"));
          dry.Add("artabe",   new UBASE("Arabic", "artabe", 6.528000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cafiz",   new UBASE("Arabic", "cafiz", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("caphite",   new UBASE("Arabic", "caphite", 1.360000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("ferk",   new UBASE("Arabic", "ferk", 8.160000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("gariba",   new UBASE("Arabic", "gariba", 2.611200000000000E-01, "m3", "L3", "1.0"));
          dry.Add("khoul",   new UBASE("Arabic", "khoul", 1.632000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("kiladja",   new UBASE("Arabic", "kiladja", 1.360000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("kist",   new UBASE("Arabic", "kist", 1.360000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("makuk",   new UBASE("Arabic", "makuk", 4.080000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("modius",   new UBASE("Arabic", "modius", 4.080000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("mudd",   new UBASE("Arabic", "mudd", 6.800000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("sa",   new UBASE("Arabic", "sa", 2.720000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("saa",   new UBASE("Arabic", "saa", 2.720000000000000E-03, "m3", "L3", "1.0"));
          _map.Add("Arabic",   new BaseSystem("Arabic", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit8()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("milla",   new UBASE("Argentinian", "milla", 1.850191000000000E+03, "m", "L", "1.0"));
          length.Add("palma",   new UBASE("Argentinian", "palma", 2.166500000000000E-01, "m", "L", "1.0"));
          length.Add("braza",   new UBASE("Argentinian", "braza", 1.733200000000000E+00, "m", "L", "1.0"));
          length.Add("cuadra",   new UBASE("Argentinian", "cuadra", 1.299900000000000E+02, "m", "L", "1.0"));
          length.Add("cuarta",   new UBASE("Argentinian", "cuarta", 5.937500000000000E-04, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Argentinian", "legua", 5.199600000000000E+03, "m", "L", "1.0"));
          length.Add("linea",   new UBASE("Argentinian", "linea", 2.006018518518520E-03, "m", "L", "1.0"));
          length.Add("pie",   new UBASE("Argentinian", "pie", 2.888666666666670E-01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Argentinian", "pulgada", 2.407222222222220E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Argentinian", "vara", 8.666000000000000E-01, "m", "L", "1.0"));
          area.Add("square-vara",   new UBASE("Argentinian", "square-vara", 7.509955600000000E-01, "m2", "L2", "1.0"));
          mass.Add("adarme",   new UBASE("Argentinian", "adarme", 1.794531250000000E-03, "kg", "M", "1.0"));
          mass.Add("arroba",   new UBASE("Argentinian", "arroba", 1.148500000000000E+01, "kg", "M", "1.0"));
          mass.Add("granos",   new UBASE("Argentinian", "granos", 4.984809027777780E-05, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Argentinian", "libra", 4.594000000000000E-01, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Argentinian", "onza", 2.871250000000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Argentinian", "quintal", 4.594000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tonelada",   new UBASE("Argentinian", "tonelada", 9.188000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("baril",   new UBASE("Argentinian", "baril", 7.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuarta",   new UBASE("Argentinian", "cuarta", 5.937500000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cuerta",   new UBASE("Argentinian", "cuerta", 1.140000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("frasco",   new UBASE("Argentinian", "frasco", 2.375000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("octava",   new UBASE("Argentinian", "octava", 2.968750000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pipa",   new UBASE("Argentinian", "pipa", 4.560000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cuartilla",   new UBASE("Argentinian", "cuartilla", 3.429942500000000E-02, "m3", "L3", "1.0"));
          dry.Add("fanega",   new UBASE("Argentinian", "fanega", 1.371977000000000E-01, "m3", "L3", "1.0"));
          dry.Add("lastre",   new UBASE("Argentinian", "lastre", 2.057965500000000E+00, "m3", "L3", "1.0"));
          dry.Add("tonelada",   new UBASE("Argentinian", "tonelada", 9.603839000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Argentinian",   new BaseSystem("Argentinian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit9()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("aldan",   new UBASE("Asian", "aldan", 1.600000000000000E+00, "m", "L", "1.0"));
          area.Add("square-aldan",   new UBASE("Asian", "square-aldan", 2.560000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("catty",   new UBASE("Asian", "catty", 6.048000000000000E-01, "kg", "M", "1.0"));
          mass.Add("koyan",   new UBASE("Asian", "koyan", 2.419200000000000E+03, "kg", "M", "1.0"));
          mass.Add("tael",   new UBASE("Asian", "tael", 3.779936416666670E-02, "kg", "M", "1.0"));
          mass.Add("tahil",   new UBASE("Asian", "tahil", 3.779936416666670E-02, "kg", "M", "1.0"));
          liquid.Add("cubic-aldan",   new UBASE("Asian", "cubic-aldan", 4.096000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("Asian",   new BaseSystem("Asian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit10()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("akaina",   new UBASE("Attic", "akaina", 2.777040000000000E+00, "m", "L", "1.0"));
          length.Add("arnma",   new UBASE("Attic", "arnma", 1.851360000000000E+01, "m", "L", "1.0"));
          length.Add("bema",   new UBASE("Attic", "bema", 7.714000000000000E-01, "m", "L", "1.0"));
          length.Add("bema-diplun",   new UBASE("Attic", "bema-diplun", 1.542800000000000E+00, "m", "L", "1.0"));
          length.Add("bema-haplun",   new UBASE("Attic", "bema-haplun", 7.714000000000000E-01, "m", "L", "1.0"));
          length.Add("condylos",   new UBASE("Attic", "condylos", 3.857000000000000E-02, "m", "L", "1.0"));
          length.Add("cubit(long)",   new UBASE("Attic", "cubit(long)", 6.171200000000000E-01, "m", "L", "1.0"));
          length.Add("daktylos",   new UBASE("Attic", "daktylos", 1.928500000000000E-02, "m", "L", "1.0"));
          length.Add("dekapous",   new UBASE("Attic", "dekapous", 3.085600000000000E+00, "m", "L", "1.0"));
          length.Add("diaulos",   new UBASE("Attic", "diaulos", 3.702720000000000E+02, "m", "L", "1.0"));
          length.Add("dichas",   new UBASE("Attic", "dichas", 1.542800000000000E-01, "m", "L", "1.0"));
          length.Add("diploun-bema",   new UBASE("Attic", "diploun-bema", 1.542800000000000E+00, "m", "L", "1.0"));
          length.Add("dolichos",   new UBASE("Attic", "dolichos", 2.221632000000000E+03, "m", "L", "1.0"));
          length.Add("doron",   new UBASE("Attic", "doron", 7.714000000000000E-02, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Attic", "finger", 1.928500000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Attic", "foot", 3.085600000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Attic", "feet", 3.085600000000000E-01, "m", "L", "1.0"));
          length.Add("hamma",   new UBASE("Attic", "hamma", 1.851360000000000E+01, "m", "L", "1.0"));
          length.Add("haploun-bema",   new UBASE("Attic", "haploun-bema", 7.714000000000000E-01, "m", "L", "1.0"));
          length.Add("hemipodion",   new UBASE("Attic", "hemipodion", 1.542800000000000E-01, "m", "L", "1.0"));
          length.Add("hippikon",   new UBASE("Attic", "hippikon", 7.405440000000000E+02, "m", "L", "1.0"));
          length.Add("kalamos",   new UBASE("Attic", "kalamos", 3.085600000000000E+00, "m", "L", "1.0"));
          length.Add("kondylos",   new UBASE("Attic", "kondylos", 3.857000000000000E-02, "m", "L", "1.0"));
          length.Add("lichas",   new UBASE("Attic", "lichas", 1.928500000000000E-01, "m", "L", "1.0"));
          length.Add("milion",   new UBASE("Attic", "milion", 1.481088000000000E+03, "m", "L", "1.0"));
          length.Add("mille",   new UBASE("Attic", "mille", 1.388520000000000E+03, "m", "L", "1.0"));
          length.Add("orguia",   new UBASE("Attic", "orguia", 1.851360000000000E+00, "m", "L", "1.0"));
          length.Add("orgyia",   new UBASE("Attic", "orgyia", 1.851360000000000E+00, "m", "L", "1.0"));
          length.Add("orthodoron",   new UBASE("Attic", "orthodoron", 2.121350000000000E-01, "m", "L", "1.0"));
          length.Add("palaiste",   new UBASE("Attic", "palaiste", 7.714000000000000E-02, "m", "L", "1.0"));
          length.Add("palestra",   new UBASE("Attic", "palestra", 7.714000000000000E-02, "m", "L", "1.0"));
          length.Add("parasange",   new UBASE("Attic", "parasange", 5.554080000000000E+03, "m", "L", "1.0"));
          length.Add("pechus",   new UBASE("Attic", "pechus", 4.628400000000000E-01, "m", "L", "1.0"));
          length.Add("pechya",   new UBASE("Attic", "pechya", 4.628400000000000E-01, "m", "L", "1.0"));
          length.Add("pechys",   new UBASE("Attic", "pechys", 4.628400000000000E-01, "m", "L", "1.0"));
          length.Add("plethron",   new UBASE("Attic", "plethron", 3.085600000000000E+01, "m", "L", "1.0"));
          length.Add("pous",   new UBASE("Attic", "pous", 3.085600000000000E-01, "m", "L", "1.0"));
          length.Add("pygme",   new UBASE("Attic", "pygme", 3.471300000000000E-01, "m", "L", "1.0"));
          length.Add("pygon",   new UBASE("Attic", "pygon", 3.857000000000000E-01, "m", "L", "1.0"));
          length.Add("royal-pechus",   new UBASE("Attic", "royal-pechus", 5.206950000000000E-01, "m", "L", "1.0"));
          length.Add("schoinos",   new UBASE("Attic", "schoinos", 7.405440000000000E+03, "m", "L", "1.0"));
          length.Add("spithame",   new UBASE("Attic", "spithame", 2.314200000000000E-01, "m", "L", "1.0"));
          length.Add("spithane",   new UBASE("Attic", "spithane", 2.314200000000000E-01, "m", "L", "1.0"));
          length.Add("stadion",   new UBASE("Attic", "stadion", 1.851360000000000E+02, "m", "L", "1.0"));
          length.Add("stage",   new UBASE("Attic", "stage", 2.962176000000000E+04, "m", "L", "1.0"));
          length.Add("stathmos",   new UBASE("Attic", "stathmos", 2.468480000000000E+04, "m", "L", "1.0"));
          length.Add("xylon",   new UBASE("Attic", "xylon", 1.388520000000000E+00, "m", "L", "1.0"));
          area.Add("aroura",   new UBASE("Attic", "aroura", 2.380231840000000E+02, "m2", "L2", "1.0"));
          area.Add("hektos",   new UBASE("Attic", "hektos", 1.586821226666670E+02, "m2", "L2", "1.0"));
          area.Add("hexapodes",   new UBASE("Attic", "hexapodes", 3.427533849600000E+00, "m2", "L2", "1.0"));
          area.Add("square-akaina",   new UBASE("Attic", "square-akaina", 9.520927360000000E+00, "m2", "L2", "1.0"));
          area.Add("square-dekapode",   new UBASE("Attic", "square-dekapode", 9.520927360000000E+00, "m2", "L2", "1.0"));
          area.Add("square-plethron",   new UBASE("Attic", "square-plethron", 9.520927360000000E+02, "m2", "L2", "1.0"));
          area.Add("square-pous",   new UBASE("Attic", "square-pous", 9.520927360000000E-02, "m2", "L2", "1.0"));
          mass.Add("chalque",   new UBASE("Attic", "chalque", 9.000000000000000E-05, "kg", "M", "1.0"));
          mass.Add("diobol",   new UBASE("Attic", "diobol", 1.440000000000000E-03, "kg", "M", "1.0"));
          mass.Add("drachma",   new UBASE("Attic", "drachma", 4.320000000000000E-03, "kg", "M", "1.0"));
          mass.Add("mina",   new UBASE("Attic", "mina", 4.320000000000000E-01, "kg", "M", "1.0"));
          mass.Add("mine",   new UBASE("Attic", "mine", 4.320000000000000E-01, "kg", "M", "1.0"));
          mass.Add("obol",   new UBASE("Attic", "obol", 7.200000000000000E-04, "kg", "M", "1.0"));
          mass.Add("talent",   new UBASE("Attic", "talent", 2.592000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("amphora",   new UBASE("Attic", "amphora", 1.728000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cheme",   new UBASE("Attic", "cheme", 9.000000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("chous",   new UBASE("Attic", "chous", 1.080000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("congius",   new UBASE("Attic", "congius", 3.240000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("cotyle",   new UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("hemikotyle",   new UBASE("Attic", "hemikotyle", 1.350000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("hemina",   new UBASE("Attic", "hemina", 2.700000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("keramion",   new UBASE("Attic", "keramion", 2.592000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("khous",   new UBASE("Attic", "khous", 3.240000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kochliarion",   new UBASE("Attic", "kochliarion", 4.500000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("konche",   new UBASE("Attic", "konche", 2.250000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("kotyle",   new UBASE("Attic", "kotyle", 2.700000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kyathos",   new UBASE("Attic", "kyathos", 4.500000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("meterte",   new UBASE("Attic", "meterte", 3.888000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("mystron",   new UBASE("Attic", "mystron", 1.125000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("oxybathon",   new UBASE("Attic", "oxybathon", 6.750000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("tetarton",   new UBASE("Attic", "tetarton", 1.350000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("tryblion",   new UBASE("Attic", "tryblion", 2.700000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("xestes",   new UBASE("Attic", "xestes", 5.400000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("chenica",   new UBASE("Attic", "chenica", 1.080000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("chenix",   new UBASE("Attic", "chenix", 1.080000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("choinix",   new UBASE("Attic", "choinix", 1.080000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cotyle",   new UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cyanthos",   new UBASE("Attic", "cyanthos", 4.500000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("hekteus",   new UBASE("Attic", "hekteus", 8.640000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("hektos",   new UBASE("Attic", "hektos", 8.640000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("hemiekton",   new UBASE("Attic", "hemiekton", 4.320000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("hemina",   new UBASE("Attic", "hemina", 2.700000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("kochliarion",   new UBASE("Attic", "kochliarion", 4.500000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("kotyle",   new UBASE("Attic", "kotyle", 2.700000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("kyathos",   new UBASE("Attic", "kyathos", 4.500000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("maris",   new UBASE("Attic", "maris", 6.480000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("medimnos",   new UBASE("Attic", "medimnos", 5.184000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("modius",   new UBASE("Attic", "modius", 8.640000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("oxybaphon",   new UBASE("Attic", "oxybaphon", 6.750000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("oxybathon",   new UBASE("Attic", "oxybathon", 6.750000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("xestes",   new UBASE("Attic", "xestes", 5.400000000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Attic",   new BaseSystem("Attic", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit11()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("ell",   new UBASE("Austrian", "ell", 7.792000000000000E-01, "m", "L", "1.0"));
          length.Add("faust",   new UBASE("Austrian", "faust", 1.053600000000000E-01, "m", "L", "1.0"));
          length.Add("fuss",   new UBASE("Austrian", "fuss", 3.160800000000000E-01, "m", "L", "1.0"));
          length.Add("klafter",   new UBASE("Austrian", "klafter", 1.896480000000000E+00, "m", "L", "1.0"));
          length.Add("linie",   new UBASE("Austrian", "linie", 2.195000000000000E-03, "m", "L", "1.0"));
          length.Add("meile",   new UBASE("Austrian", "meile", 7.585920000000000E+03, "m", "L", "1.0"));
          length.Add("meile(Bohemia)",   new UBASE("Austrian", "meile(Bohemia)", 6.910000000000000E+03, "m", "L", "1.0"));
          length.Add("meile(Malachia)",   new UBASE("Austrian", "meile(Malachia)", 7.848500000000000E+03, "m", "L", "1.0"));
          length.Add("punk",   new UBASE("Austrian", "punk", 1.829166666666670E-04, "m", "L", "1.0"));
          length.Add("rute",   new UBASE("Austrian", "rute", 3.160800000000000E+00, "m", "L", "1.0"));
          length.Add("ruthe",   new UBASE("Austrian", "ruthe", 3.792960000000000E+00, "m", "L", "1.0"));
          length.Add("spanne",   new UBASE("Austrian", "spanne", 2.107200000000000E-01, "m", "L", "1.0"));
          area.Add("joch",   new UBASE("Austrian", "joch", 5.754618224640000E+03, "m2", "L2", "1.0"));
          area.Add("metze",   new UBASE("Austrian", "metze", 1.918206074880000E+03, "m2", "L2", "1.0"));
          area.Add("square-klafter",   new UBASE("Austrian", "square-klafter", 3.596636390400000E+00, "m2", "L2", "1.0"));
          mass.Add("denat",   new UBASE("Austrian", "denat", 1.093769531250000E-03, "kg", "M", "1.0"));
          mass.Add("drachme(apothecary)",   new UBASE("Austrian", "drachme(apothecary)", 4.375078125000000E-03, "kg", "M", "1.0"));
          mass.Add("gran(apothecary)",   new UBASE("Austrian", "gran(apothecary)", 7.291796875000000E-05, "kg", "M", "1.0"));
          mass.Add("karch",   new UBASE("Austrian", "karch", 2.240040000000000E+02, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Austrian", "loth", 1.750031250000000E-02, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("Austrian", "mark", 2.800050000000000E-01, "kg", "M", "1.0"));
          mass.Add("pfenig",   new UBASE("Austrian", "pfenig", 1.093769531250000E-03, "kg", "M", "1.0"));
          mass.Add("pfund",   new UBASE("Austrian", "pfund", 5.600100000000000E-01, "kg", "M", "1.0"));
          mass.Add("pfund(apothecary)",   new UBASE("Austrian", "pfund(apothecary)", 4.200075000000000E-01, "kg", "M", "1.0"));
          mass.Add("pfund(ordinary-apothecary)",   new UBASE("Austrian", "pfund(ordinary-apothecary)", 5.600100000000000E-01, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Austrian", "pound", 5.600044800358400E-01, "kg", "M", "1.0"));
          mass.Add("quentchen",   new UBASE("Austrian", "quentchen", 4.375078125000000E-03, "kg", "M", "1.0"));
          mass.Add("saum",   new UBASE("Austrian", "saum", 1.540027500000000E+02, "kg", "M", "1.0"));
          mass.Add("scruple(apothecary)",   new UBASE("Austrian", "scruple(apothecary)", 1.458359375000000E-03, "kg", "M", "1.0"));
          mass.Add("stein",   new UBASE("Austrian", "stein", 1.120020000000000E+01, "kg", "M", "1.0"));
          mass.Add("unze",   new UBASE("Austrian", "unze", 3.500062500000000E-02, "kg", "M", "1.0"));
          mass.Add("unze(apothecary)",   new UBASE("Austrian", "unze(apothecary)", 3.500062500000000E-02, "kg", "M", "1.0"));
          mass.Add("vierding",   new UBASE("Austrian", "vierding", 1.400025000000000E-01, "kg", "M", "1.0"));
          mass.Add("zentner",   new UBASE("Austrian", "zentner", 5.600100000000000E+01, "kg", "M", "1.0"));
          mass.Add("zollpfund",   new UBASE("Austrian", "zollpfund", 5.600044800358400E-01, "kg", "M", "1.0"));
          liquid.Add("dreiling",   new UBASE("Austrian", "dreiling", 1.698120000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("eimer",   new UBASE("Austrian", "eimer", 5.660400000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("fass",   new UBASE("Austrian", "fass", 5.660400000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("fuder",   new UBASE("Austrian", "fuder", 1.811328000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("halbe",   new UBASE("Austrian", "halbe", 7.075500000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("mass",   new UBASE("Austrian", "mass", 1.415100000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("pliff",   new UBASE("Austrian", "pliff", 1.768875000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("seidel",   new UBASE("Austrian", "seidel", 3.537750000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("viertel",   new UBASE("Austrian", "viertel", 1.415100000000000E-02, "m3", "L3", "1.0"));
          dry.Add("achtel",   new UBASE("Austrian", "achtel", 7.686125000000000E-03, "m3", "L3", "1.0"));
          dry.Add("becher",   new UBASE("Austrian", "becher", 4.803828125000000E-04, "m3", "L3", "1.0"));
          dry.Add("futtermassel",   new UBASE("Austrian", "futtermassel", 1.921531250000000E-03, "m3", "L3", "1.0"));
          dry.Add("metzel",   new UBASE("Austrian", "metzel", 6.148900000000000E-02, "m3", "L3", "1.0"));
          dry.Add("mulhmassel",   new UBASE("Austrian", "mulhmassel", 3.843062500000000E-03, "m3", "L3", "1.0"));
          dry.Add("muth",   new UBASE("Austrian", "muth", 1.844670000000000E+00, "m3", "L3", "1.0"));
          dry.Add("probmetze",   new UBASE("Austrian", "probmetze", 6.004785156250000E-05, "m3", "L3", "1.0"));
          dry.Add("viertel",   new UBASE("Austrian", "viertel", 1.537225000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Austrian",   new BaseSystem("Austrian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit12()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("canna",   new UBASE("Balearic", "canna", 1.564000000000000E+00, "m", "L", "1.0"));
          length.Add("palmos",   new UBASE("Balearic", "palmos", 1.955000000000000E-01, "m", "L", "1.0"));
          area.Add("square-canna",   new UBASE("Balearic", "square-canna", 2.446096000000000E+00, "m2", "L2", "1.0"));
          mass.Add("arroba",   new UBASE("Balearic", "arroba", 1.060800000000000E+01, "kg", "M", "1.0"));
          mass.Add("cantaro",   new UBASE("Balearic", "cantaro", 4.243200000000000E+01, "kg", "M", "1.0"));
          mass.Add("cantaro-barbaresco",   new UBASE("Balearic", "cantaro-barbaresco", 4.080000000000000E+01, "kg", "M", "1.0"));
          mass.Add("cargo",   new UBASE("Balearic", "cargo", 1.272960000000000E+02, "kg", "M", "1.0"));
          mass.Add("corta",   new UBASE("Balearic", "corta", 3.672000000000000E+00, "kg", "M", "1.0"));
          mass.Add("libra-mayor",   new UBASE("Balearic", "libra-mayor", 1.224000000000000E+00, "kg", "M", "1.0"));
          mass.Add("misura",   new UBASE("Balearic", "misura", 1.468800000000000E+01, "kg", "M", "1.0"));
          mass.Add("quartano",   new UBASE("Balearic", "quartano", 3.672000000000000E+00, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Balearic", "rottolo", 4.080000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("almude",   new UBASE("Balearic", "almude", 1.999166666666670E-03, "m3", "L3", "1.0"));
          liquid.Add("barcella",   new UBASE("Balearic", "barcella", 1.199500000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("quartera",   new UBASE("Balearic", "quartera", 7.197000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("almude",   new UBASE("Balearic", "almude", 1.043846153846150E-03, "m3", "L3", "1.0"));
          dry.Add("quarte",   new UBASE("Balearic", "quarte", 4.175384615384620E-03, "m3", "L3", "1.0"));
          dry.Add("quartin",   new UBASE("Balearic", "quartin", 2.714000000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Balearic",   new BaseSystem("Balearic", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit13()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("ell",   new UBASE("Belgian", "ell", 6.858000000000000E-01, "m", "L", "1.0"));
          length.Add("perche",   new UBASE("Belgian", "perche", 6.497000000000000E+00, "m", "L", "1.0"));
          length.Add("pied",   new UBASE("Belgian", "pied", 3.248500000000000E+00, "m", "L", "1.0"));
          area.Add("arpent",   new UBASE("Belgian", "arpent", 4.221100900000000E+03, "m2", "L2", "1.0"));
          mass.Add("balle",   new UBASE("Belgian", "balle", 9.790000000000000E+01, "kg", "M", "1.0"));
          mass.Add("charge",   new UBASE("Belgian", "charge", 1.958000000000000E+02, "kg", "M", "1.0"));
          mass.Add("chariot",   new UBASE("Belgian", "chariot", 8.076750000000000E+01, "kg", "M", "1.0"));
          mass.Add("livre",   new UBASE("Belgian", "livre", 4.895000000000000E-01, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Belgian", "loth", 1.529687500000000E-02, "kg", "M", "1.0"));
          mass.Add("marc",   new UBASE("Belgian", "marc", 2.447500000000000E-01, "kg", "M", "1.0"));
          mass.Add("once",   new UBASE("Belgian", "once", 3.059375000000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Belgian", "quintal", 4.895000000000000E+01, "kg", "M", "1.0"));
          mass.Add("schiffpfund",   new UBASE("Belgian", "schiffpfund", 1.468500000000000E+02, "kg", "M", "1.0"));
          mass.Add("stein",   new UBASE("Belgian", "stein", 3.916000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("pot",   new UBASE("Belgian", "pot", 5.000000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("pot",   new UBASE("Belgian", "pot", 1.500000000000000E-03, "m3", "L3", "1.0"));
          _map.Add("Belgian",   new BaseSystem("Belgian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit14()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("braca",   new UBASE("Brazilian", "braca", 2.222222222222220E+00, "m", "L", "1.0"));
          length.Add("legoa",   new UBASE("Brazilian", "legoa", 6.666666666666670E+03, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Brazilian", "legua", 6.666666666666670E+03, "m", "L", "1.0"));
          length.Add("palmo",   new UBASE("Brazilian", "palmo", 2.222222222222220E-01, "m", "L", "1.0"));
          length.Add("passo-geometrico",   new UBASE("Brazilian", "passo-geometrico", 1.666666666666670E+00, "m", "L", "1.0"));
          length.Add("pe",   new UBASE("Brazilian", "pe", 3.333333333333330E-01, "m", "L", "1.0"));
          length.Add("polegada",   new UBASE("Brazilian", "polegada", 2.777777777777780E-02, "m", "L", "1.0"));
          length.Add("pulgado",   new UBASE("Brazilian", "pulgado", 2.777777777777780E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Brazilian", "vara", 1.111111111111110E+00, "m", "L", "1.0"));
          area.Add("alqueire",   new UBASE("Brazilian", "alqueire", 3.630000000000000E+04, "m2", "L2", "1.0"));
          area.Add("salamis",   new UBASE("Brazilian", "salamis", 4.537500000000000E+03, "m2", "L2", "1.0"));
          area.Add("tarefa",   new UBASE("Brazilian", "tarefa", 3.500000000000000E+03, "m2", "L2", "1.0"));
          mass.Add("arroba",   new UBASE("Brazilian", "arroba", 1.468960000000000E+01, "kg", "M", "1.0"));
          mass.Add("bale",   new UBASE("Brazilian", "bale", 1.133980925000000E+02, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Brazilian", "libra", 4.590500000000000E-01, "kg", "M", "1.0"));
          mass.Add("marco",   new UBASE("Brazilian", "marco", 2.295250000000000E-01, "kg", "M", "1.0"));
          mass.Add("onca",   new UBASE("Brazilian", "onca", 2.869062500000000E-02, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Brazilian", "onza", 2.869062500000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Brazilian", "quintal", 5.875840000000000E+01, "kg", "M", "1.0"));
          mass.Add("tonelada",   new UBASE("Brazilian", "tonelada", 7.932384000000000E+02, "kg", "M", "1.0"));
          liquid.Add("almude",   new UBASE("Brazilian", "almude", 3.194400000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("almude(Bahia)",   new UBASE("Brazilian", "almude(Bahia)", 2.114400000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("almude(common)",   new UBASE("Brazilian", "almude(common)", 2.175600000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("alquiera",   new UBASE("Brazilian", "alquiera", 5.324000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("alquiera(Bahia)",   new UBASE("Brazilian", "alquiera(Bahia)", 3.524000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("alquiera(common",   new UBASE("Brazilian", "alquiera(common", 3.626000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("canada",   new UBASE("Brazilian", "canada", 2.662000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("canada(Bahia)",   new UBASE("Brazilian", "canada(Bahia)", 1.762000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("canada(common)",   new UBASE("Brazilian", "canada(common)", 1.813000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("cargueiro",   new UBASE("Brazilian", "cargueiro", 8.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("moio",   new UBASE("Brazilian", "moio", 3.194400000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("moio(Bahia))",   new UBASE("Brazilian", "moio(Bahia))", 2.114400000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("moio(common)",   new UBASE("Brazilian", "moio(common)", 2.175600000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pipa",   new UBASE("Brazilian", "pipa", 4.791600000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pipa(Bahia)",   new UBASE("Brazilian", "pipa(Bahia)", 3.171600000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pipa(common)",   new UBASE("Brazilian", "pipa(common)", 3.263400000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tonel",   new UBASE("Brazilian", "tonel", 9.583200000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tonel(Bahia)",   new UBASE("Brazilian", "tonel(Bahia)", 6.343200000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tonel(common)",   new UBASE("Brazilian", "tonel(common)", 6.526800000000000E-01, "m3", "L3", "1.0"));
          dry.Add("almude(salt)",   new UBASE("Brazilian", "almude(salt)", 2.445600000000000E-02, "m3", "L3", "1.0"));
          dry.Add("alquiera(salt)",   new UBASE("Brazilian", "alquiera(salt)", 4.076000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("canada(salt)",   new UBASE("Brazilian", "canada(salt)", 2.038000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-pe",   new UBASE("Brazilian", "cubic-pe", 3.703703703703700E-02, "m3", "L3", "1.0"));
          dry.Add("moio(salt)",   new UBASE("Brazilian", "moio(salt)", 2.445600000000000E-01, "m3", "L3", "1.0"));
          dry.Add("pipa(salt)",   new UBASE("Brazilian", "pipa(salt)", 3.668400000000000E-01, "m3", "L3", "1.0"));
          dry.Add("tonel(salt)",   new UBASE("Brazilian", "tonel(salt)", 7.336800000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Brazilian",   new BaseSystem("Brazilian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit15()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("arshin",   new UBASE("Bulgarian", "arshin", 7.112000000000000E-01, "m", "L", "1.0"));
          area.Add("square-arshin",   new UBASE("Bulgarian", "square-arshin", 5.058054400000000E-01, "m2", "L2", "1.0"));
          mass.Add("oka",   new UBASE("Bulgarian", "oka", 1.270058636000000E+00, "kg", "M", "1.0"));
          mass.Add("tovar",   new UBASE("Bulgarian", "tovar", 1.270058636000000E+02, "kg", "M", "1.0"));
          liquid.Add("krina",   new UBASE("Bulgarian", "krina", 2.000000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-arshin",   new UBASE("Bulgarian", "cubic-arshin", 3.597288289280000E-01, "m3", "L3", "1.0"));
          _map.Add("Bulgarian",   new BaseSystem("Bulgarian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit16()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("bamboo",   new UBASE("Burmese", "bamboo", 3.911600000000000E+00, "m", "L", "1.0"));
          length.Add("dain",   new UBASE("Burmese", "dain", 3.911600000000000E+03, "m", "L", "1.0"));
          length.Add("dha",   new UBASE("Burmese", "dha", 3.911600000000000E+00, "m", "L", "1.0"));
          length.Add("lan",   new UBASE("Burmese", "lan", 2.235200000000000E+00, "m", "L", "1.0"));
          length.Add("oke-thapal",   new UBASE("Burmese", "oke-thapal", 7.823200000000000E+01, "m", "L", "1.0"));
          length.Add("palgat",   new UBASE("Burmese", "palgat", 1.016000000000000E-01, "m", "L", "1.0"));
          length.Add("sandong",   new UBASE("Burmese", "sandong", 5.588000000000000E-01, "m", "L", "1.0"));
          length.Add("taim",   new UBASE("Burmese", "taim", 4.572000000000000E-01, "m", "L", "1.0"));
          area.Add("square-sandong",   new UBASE("Burmese", "square-sandong", 3.122574400000000E-01, "m2", "L2", "1.0"));
          mass.Add("candy",   new UBASE("Burmese", "candy", 2.448000000000000E+02, "kg", "M", "1.0"));
          mass.Add("catty",   new UBASE("Burmese", "catty", 5.440000000000000E-01, "kg", "M", "1.0"));
          mass.Add("mat",   new UBASE("Burmese", "mat", 4.080000000000000E-03, "kg", "M", "1.0"));
          mass.Add("moo",   new UBASE("Burmese", "moo", 2.040000000000000E-03, "kg", "M", "1.0"));
          mass.Add("pai",   new UBASE("Burmese", "pai", 1.020000000000000E-03, "kg", "M", "1.0"));
          mass.Add("ruay",   new UBASE("Burmese", "ruay", 2.550000000000000E-04, "kg", "M", "1.0"));
          mass.Add("tical",   new UBASE("Burmese", "tical", 1.632000000000000E-02, "kg", "M", "1.0"));
          mass.Add("viss",   new UBASE("Burmese", "viss", 1.632000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("byee",   new UBASE("Burmese", "byee", 5.050000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kwai",   new UBASE("Burmese", "kwai", 4.040000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("lamany",   new UBASE("Burmese", "lamany", 6.312500000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("seit",   new UBASE("Burmese", "seit", 2.020000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("zalay",   new UBASE("Burmese", "zalay", 1.262500000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("zayoot",   new UBASE("Burmese", "zayoot", 1.010000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-sandong",   new UBASE("Burmese", "cubic-sandong", 1.744894574720000E-01, "m3", "L3", "1.0"));
          _map.Add("Burmese",   new BaseSystem("Burmese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit17()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("daktylos",   new UBASE("Byzantine", "daktylos", 1.928125000000000E-02, "m", "L", "1.0"));
          length.Add("palaiste",   new UBASE("Byzantine", "palaiste", 7.712500000000000E-02, "m", "L", "1.0"));
          length.Add("anticheir",   new UBASE("Byzantine", "anticheir", 7.712500000000000E-02, "m", "L", "1.0"));
          length.Add("hemipodion",   new UBASE("Byzantine", "hemipodion", 1.542500000000000E-01, "m", "L", "1.0"));
          length.Add("spithame",   new UBASE("Byzantine", "spithame", 3.085000000000000E-01, "m", "L", "1.0"));
          length.Add("pous",   new UBASE("Byzantine", "pous", 3.085000000000000E-01, "m", "L", "1.0"));
          length.Add("demosios-pekhys",   new UBASE("Byzantine", "demosios-pekhys", 6.170000000000000E-01, "m", "L", "1.0"));
          length.Add("basilikos-pekhys",   new UBASE("Byzantine", "basilikos-pekhys", 6.170000000000000E-01, "m", "L", "1.0"));
          length.Add("geometrikos-pekhys",   new UBASE("Byzantine", "geometrikos-pekhys", 6.170000000000000E-01, "m", "L", "1.0"));
          length.Add("bema-haploun",   new UBASE("Byzantine", "bema-haploun", 9.255000000000000E-01, "m", "L", "1.0"));
          length.Add("bema-deploun",   new UBASE("Byzantine", "bema-deploun", 1.542500000000000E+00, "m", "L", "1.0"));
          length.Add("haple-orguia",   new UBASE("Byzantine", "haple-orguia", 1.851000000000000E+00, "m", "L", "1.0"));
          length.Add("demosios-orguia",   new UBASE("Byzantine", "demosios-orguia", 2.159500000000000E+00, "m", "L", "1.0"));
          length.Add("basilikos-orguia",   new UBASE("Byzantine", "basilikos-orguia", 2.159500000000000E+00, "m", "L", "1.0"));
          length.Add("dekapodon",   new UBASE("Byzantine", "dekapodon", 3.085000000000000E+00, "m", "L", "1.0"));
          length.Add("skhoinion",   new UBASE("Byzantine", "skhoinion", 1.851000000000000E+01, "m", "L", "1.0"));
          length.Add("plethron",   new UBASE("Byzantine", "plethron", 3.085000000000000E+01, "m", "L", "1.0"));
          length.Add("stadion",   new UBASE("Byzantine", "stadion", 1.851000000000000E+02, "m", "L", "1.0"));
          length.Add("doxariou-bole",   new UBASE("Byzantine", "doxariou-bole", 3.085000000000000E+02, "m", "L", "1.0"));
          length.Add("milion",   new UBASE("Byzantine", "milion", 1.542500000000000E+03, "m", "L", "1.0"));
          length.Add("skhoinos",   new UBASE("Byzantine", "skhoinos", 6.170000000000000E+03, "m", "L", "1.0"));
          length.Add("hodos-hemeras",   new UBASE("Byzantine", "hodos-hemeras", 4.627500000000000E+04, "m", "L", "1.0"));
          length.Add("hodos-sabbatou",   new UBASE("Byzantine", "hodos-sabbatou", 3.239250000000000E+05, "m", "L", "1.0"));
          area.Add("pous",   new UBASE("Byzantine", "pous", 9.517225000000000E-02, "m2", "L2", "1.0"));
          area.Add("stremma",   new UBASE("Byzantine", "stremma", 9.517225000000000E+02, "m2", "L2", "1.0"));
          area.Add("modios-zeugarion",   new UBASE("Byzantine", "modios-zeugarion", 2.855167500000000E+03, "m2", "L2", "1.0"));
          mass.Add("gramma",   new UBASE("Byzantine", "gramma", 1.135416666666670E-03, "kg", "M", "1.0"));
          mass.Add("tremisis",   new UBASE("Byzantine", "tremisis", 1.135416666666670E-03, "kg", "M", "1.0"));
          mass.Add("semisis",   new UBASE("Byzantine", "semisis", 2.270833333333330E-03, "kg", "M", "1.0"));
          mass.Add("nomisma",   new UBASE("Byzantine", "nomisma", 4.541666666666670E-03, "kg", "M", "1.0"));
          mass.Add("ouggia",   new UBASE("Byzantine", "ouggia", 2.725000000000000E-02, "kg", "M", "1.0"));
          mass.Add("ogkia",   new UBASE("Byzantine", "ogkia", 2.725000000000000E-02, "kg", "M", "1.0"));
          mass.Add("ougkia",   new UBASE("Byzantine", "ougkia", 2.725000000000000E-02, "kg", "M", "1.0"));
          mass.Add("litra",   new UBASE("Byzantine", "litra", 3.270000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("ouggia",   new UBASE("Byzantine", "ouggia", 1.830933333333330E-04, "m3", "L3", "1.0"));
          liquid.Add("ogkia",   new UBASE("Byzantine", "ogkia", 1.830933333333330E-04, "m3", "L3", "1.0"));
          liquid.Add("ougkia",   new UBASE("Byzantine", "ougkia", 1.830933333333330E-04, "m3", "L3", "1.0"));
          liquid.Add("kotyle",   new UBASE("Byzantine", "kotyle", 2.746400000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("hemixestion",   new UBASE("Byzantine", "hemixestion", 2.746400000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("xestes",   new UBASE("Byzantine", "xestes", 5.492800000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("litra",   new UBASE("Byzantine", "litra", 2.197120000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("phoukta",   new UBASE("Byzantine", "phoukta", 3.387226666666670E-03, "m3", "L3", "1.0"));
          liquid.Add("modios",   new UBASE("Byzantine", "modios", 8.788480000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-pous",   new UBASE("Byzantine", "cubic-pous", 2.936063912500000E-02, "m3", "L3", "1.0"));
          _map.Add("Byzantine",   new BaseSystem("Byzantine", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit18()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cham-am",   new UBASE("Cambodian", "cham-am", 2.500000000000000E-01, "m", "L", "1.0"));
          length.Add("muoi",   new UBASE("Cambodian", "muoi", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("muoi-thuoc",   new UBASE("Cambodian", "muoi-thuoc", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("phyeam",   new UBASE("Cambodian", "phyeam", 5.000000000000000E+00, "m", "L", "1.0"));
          length.Add("sen",   new UBASE("Cambodian", "sen", 4.000000000000000E+01, "m", "L", "1.0"));
          length.Add("thneap",   new UBASE("Cambodian", "thneap", 2.083333333333330E-02, "m", "L", "1.0"));
          length.Add("yoch",   new UBASE("Cambodian", "yoch", 1.600000000000000E+04, "m", "L", "1.0"));
          area.Add("square-muoi",   new UBASE("Cambodian", "square-muoi", 1.000000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("chin",   new UBASE("Cambodian", "chin", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("chong",   new UBASE("Cambodian", "chong", 3.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("hap",   new UBASE("Cambodian", "hap", 6.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("hun",   new UBASE("Cambodian", "hun", 3.750000000000000E-04, "kg", "M", "1.0"));
          mass.Add("lin",   new UBASE("Cambodian", "lin", 3.750000000000000E-05, "kg", "M", "1.0"));
          mass.Add("muoi",   new UBASE("Cambodian", "muoi", 1.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("neal",   new UBASE("Cambodian", "neal", 6.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("picul",   new UBASE("Cambodian", "picul", 6.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("pram-roi",   new UBASE("Cambodian", "pram-roi", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("tael",   new UBASE("Cambodian", "tael", 3.750000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("kantang",   new UBASE("Cambodian", "kantang", 7.500000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("muoi",   new UBASE("Cambodian", "muoi", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("sesep",   new UBASE("Cambodian", "sesep", 4.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("tao",   new UBASE("Cambodian", "tao", 1.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("thang",   new UBASE("Cambodian", "thang", 3.000000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-muoi",   new UBASE("Cambodian", "cubic-muoi", 1.000000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("Cambodian",   new BaseSystem("Cambodian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit19()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("arpent(du-roi)",   new UBASE("CAN", "arpent(du-roi)", 5.847109500600000E+01, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("CAN", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("CAN", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("league",   new UBASE("CAN", "league", 4.828032000000000E+03, "m", "L", "1.0"));
          length.Add("perche",   new UBASE("CAN", "perche", 5.847109500600000E+00, "m", "L", "1.0"));
          area.Add("acre",   new UBASE("CAN", "acre", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("ac",   new UBASE("CAN", "ac", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("acres",   new UBASE("CAN", "acres", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("arpent",   new UBASE("CAN", "arpent", 3.418868951200680E+03, "m2", "L2", "1.0"));
          area.Add("a",   new UBASE("CAN", "a", 3.418868951200680E+03, "m2", "L2", "1.0"));
          area.Add("square-league",   new UBASE("CAN", "square-league", 2.330989299302400E+07, "m2", "L2", "1.0"));
          area.Add("sq-leag",   new UBASE("CAN", "sq-leag", 2.330989299302400E+07, "m2", "L2", "1.0"));
          area.Add("square-leagues",   new UBASE("CAN", "square-leagues", 2.330989299302400E+07, "m2", "L2", "1.0"));
          area.Add("square-foot",   new UBASE("CAN", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("CAN", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("unit",   new UBASE("CAN", "unit", 2.500000000000000E+05, "m2", "L2", "1.0"));
          mass.Add("hundredweight",   new UBASE("CAN", "hundredweight", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt",   new UBASE("CAN", "cwt", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(long)",   new UBASE("CAN", "hundredweight(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cH(long)",   new UBASE("CAN", "cH(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(long)",   new UBASE("CAN", "cwt(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("Ig(long)",   new UBASE("CAN", "Ig(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(gross)",   new UBASE("CAN", "hundredweight(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cH(gross)",   new UBASE("CAN", "cH(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(gross)",   new UBASE("CAN", "cwt(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("Ig(gross)",   new UBASE("CAN", "Ig(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(short)",   new UBASE("CAN", "hundredweight(short)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("sh(short)",   new UBASE("CAN", "sh(short)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(short)",   new UBASE("CAN", "cwt(short)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(net)",   new UBASE("CAN", "hundredweight(net)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("sh(net)",   new UBASE("CAN", "sh(net)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(net)",   new UBASE("CAN", "cwt(net)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("CAN", "pound", 4.535923380000000E-01, "kg", "M", "1.0"));
          mass.Add("pounds",   new UBASE("CAN", "pounds", 4.535923380000000E-01, "kg", "M", "1.0"));
          mass.Add("lb",   new UBASE("CAN", "lb", 4.535923380000000E-01, "kg", "M", "1.0"));
          liquid.Add("gallon",   new UBASE("CAN", "gallon", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gal",   new UBASE("CAN", "gal", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallons",   new UBASE("CAN", "gallons", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("liter-per-flush",   new UBASE("CAN", "liter-per-flush", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("lpf",   new UBASE("CAN", "lpf", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("LPF",   new UBASE("CAN", "LPF", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("bank-cubic-meter",   new UBASE("CAN", "bank-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("BCM",   new UBASE("CAN", "BCM", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("pied-mesure-planche",   new UBASE("CAN", "pied-mesure-planche", 2.359737216000000E-03, "m3", "L3", "1.0"));
          dry.Add("pmp",   new UBASE("CAN", "pmp", 2.359737216000000E-03, "m3", "L3", "1.0"));
          _map.Add("CAN",   new BaseSystem("CAN", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit20()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("covid(Ceylon)",   new UBASE("Ceylon", "covid(Ceylon)", 4.640000000000000E-01, "m", "L", "1.0"));
          length.Add("covid(Madras)",   new UBASE("Ceylon", "covid(Madras)", 4.720000000000000E-01, "m", "L", "1.0"));
          area.Add("square-covid(Ceylon)",   new UBASE("Ceylon", "square-covid(Ceylon)", 2.152960000000000E-01, "m2", "L2", "1.0"));
          area.Add("square-covid(Madras)",   new UBASE("Ceylon", "square-covid(Madras)", 2.227840000000000E-01, "m2", "L2", "1.0"));
          mass.Add("candy(Ceylon)",   new UBASE("Ceylon", "candy(Ceylon)", 2.267960000000000E+02, "kg", "M", "1.0"));
          mass.Add("candy(Madras)",   new UBASE("Ceylon", "candy(Madras)", 2.267960000000000E+02, "kg", "M", "1.0"));
          mass.Add("fanam(Ceylon)",   new UBASE("Ceylon", "fanam(Ceylon)", 9.843576388888890E-05, "kg", "M", "1.0"));
          mass.Add("fanam(Madras)",   new UBASE("Ceylon", "fanam(Madras)", 9.843576388888890E-05, "kg", "M", "1.0"));
          mass.Add("maund(Ceylon)",   new UBASE("Ceylon", "maund(Ceylon)", 1.133980000000000E+01, "kg", "M", "1.0"));
          mass.Add("maund(Madras)",   new UBASE("Ceylon", "maund(Madras)", 1.133980000000000E+01, "kg", "M", "1.0"));
          mass.Add("pagoda(Ceylon)",   new UBASE("Ceylon", "pagoda(Ceylon)", 3.543687500000000E-03, "kg", "M", "1.0"));
          mass.Add("pagoda(Madras)",   new UBASE("Ceylon", "pagoda(Madras)", 3.543687500000000E-03, "kg", "M", "1.0"));
          mass.Add("pollam(Ceylon)",   new UBASE("Ceylon", "pollam(Ceylon)", 3.543687500000000E-02, "kg", "M", "1.0"));
          mass.Add("pollam(Madras)",   new UBASE("Ceylon", "pollam(Madras)", 3.543687500000000E-02, "kg", "M", "1.0"));
          mass.Add("powa(Ceylon)",   new UBASE("Ceylon", "powa(Ceylon)", 7.087375000000000E-02, "kg", "M", "1.0"));
          mass.Add("powa(Madras)",   new UBASE("Ceylon", "powa(Madras)", 7.087375000000000E-02, "kg", "M", "1.0"));
          mass.Add("seer(Ceylon)",   new UBASE("Ceylon", "seer(Ceylon)", 2.834950000000000E-01, "kg", "M", "1.0"));
          mass.Add("seer(Madras)",   new UBASE("Ceylon", "seer(Madras)", 2.834950000000000E-01, "kg", "M", "1.0"));
          mass.Add("varahan(Ceylon)",   new UBASE("Ceylon", "varahan(Ceylon)", 3.543687500000000E-02, "kg", "M", "1.0"));
          mass.Add("varahan(Madras)",   new UBASE("Ceylon", "varahan(Madras)", 3.543687500000000E-02, "kg", "M", "1.0"));
          mass.Add("vis(Ceylon)",   new UBASE("Ceylon", "vis(Ceylon)", 1.417475000000000E+00, "kg", "M", "1.0"));
          mass.Add("vis(Madras)",   new UBASE("Ceylon", "vis(Madras)", 1.417475000000000E+00, "kg", "M", "1.0"));
          liquid.Add("cubic-covid(Ceylon)",   new UBASE("Ceylon", "cubic-covid(Ceylon)", 9.989734400000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cubic-covid(Madras)",   new UBASE("Ceylon", "cubic-covid(Madras)", 1.051540480000000E-01, "m3", "L3", "1.0"));
          dry.Add("chundroon",   new UBASE("Ceylon", "chundroon", 2.649000000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Ceylon",   new BaseSystem("Ceylon", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit21()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("centimeter",   new UBASE("cgs", "centimeter", 1.000000000000000E-02, "m", "L", "1.0"));
          length.Add("cm",   new UBASE("cgs", "cm", 1.000000000000000E-02, "m", "L", "1.0"));
          length.Add("decimeter",   new UBASE("cgs", "decimeter", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("dm",   new UBASE("cgs", "dm", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("millimeter",   new UBASE("cgs", "millimeter", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("mm",   new UBASE("cgs", "mm", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("micrometer",   new UBASE("cgs", "micrometer", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("um",   new UBASE("cgs", "um", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("decameter",   new UBASE("cgs", "decameter", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("dam",   new UBASE("cgs", "dam", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("meter",   new UBASE("cgs", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("m",   new UBASE("cgs", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("hectometer",   new UBASE("cgs", "hectometer", 1.000000000000000E+02, "m", "L", "1.0"));
          length.Add("hm",   new UBASE("cgs", "hm", 1.000000000000000E+02, "m", "L", "1.0"));
          length.Add("kilometer",   new UBASE("cgs", "kilometer", 1.000000000000000E+03, "m", "L", "1.0"));
          length.Add("km",   new UBASE("cgs", "km", 1.000000000000000E+03, "m", "L", "1.0"));
          area.Add("darey",   new UBASE("cgs", "darey", 9.869232667160000E-13, "m2", "L2", "1.0"));
          area.Add("square-centimeter",   new UBASE("cgs", "square-centimeter", 1.000000000000000E-04, "m2", "L2", "1.0"));
          area.Add("cm2",   new UBASE("cgs", "cm2", 1.000000000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-decimeter",   new UBASE("cgs", "square-decimeter", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("dm2",   new UBASE("cgs", "dm2", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-millimeter",   new UBASE("cgs", "square-millimeter", 1.000000000000000E-06, "m2", "L2", "1.0"));
          area.Add("mm2",   new UBASE("cgs", "mm2", 1.000000000000000E-06, "m2", "L2", "1.0"));
          area.Add("square-microimeter",   new UBASE("cgs", "square-microimeter", 1.000000000000000E-10, "m2", "L2", "1.0"));
          area.Add("um2",   new UBASE("cgs", "um2", 1.000000000000000E-10, "m2", "L2", "1.0"));
          area.Add("square-nanometer",   new UBASE("cgs", "square-nanometer", 1.000000000000000E-18, "m2", "L2", "1.0"));
          area.Add("nm2",   new UBASE("cgs", "nm2", 1.000000000000000E-18, "m2", "L2", "1.0"));
          area.Add("square-decameter",   new UBASE("cgs", "square-decameter", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("dam2",   new UBASE("cgs", "dam2", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-meter",   new UBASE("cgs", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("m2",   new UBASE("cgs", "m2", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("square-hectometer",   new UBASE("cgs", "square-hectometer", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("hm2",   new UBASE("cgs", "hm2", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("square-kilometer",   new UBASE("cgs", "square-kilometer", 1.000000000000000E+06, "m2", "L2", "1.0"));
          area.Add("km2",   new UBASE("cgs", "km2", 1.000000000000000E+06, "m2", "L2", "1.0"));
          mass.Add("glug",   new UBASE("cgs", "glug", 9.806650000000000E-01, "kg", "M", "1.0"));
          mass.Add("kilogram",   new UBASE("cgs", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kg",   new UBASE("cgs", "kg", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("gram",   new UBASE("cgs", "gram", 1.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("g",   new UBASE("cgs", "g", 1.000000000000000E-03, "kg", "M", "1.0"));
          dry.Add("cubic-centimeter",   new UBASE("cgs", "cubic-centimeter", 1.000000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("cm3",   new UBASE("cgs", "cm3", 1.000000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("cubic-decimeter",   new UBASE("cgs", "cubic-decimeter", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("dm3",   new UBASE("cgs", "dm3", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-millimeter",   new UBASE("cgs", "cubic-millimeter", 1.000000000000000E-09, "m3", "L3", "1.0"));
          dry.Add("mm3",   new UBASE("cgs", "mm3", 1.000000000000000E-09, "m3", "L3", "1.0"));
          dry.Add("cubic-microimeter",   new UBASE("cgs", "cubic-microimeter", 1.000000000000000E-15, "m3", "L3", "1.0"));
          dry.Add("um3",   new UBASE("cgs", "um3", 1.000000000000000E-15, "m3", "L3", "1.0"));
          dry.Add("cubic-nanometer",   new UBASE("cgs", "cubic-nanometer", 1.000000000000000E-27, "m3", "L3", "1.0"));
          dry.Add("nm3",   new UBASE("cgs", "nm3", 1.000000000000000E-27, "m3", "L3", "1.0"));
          dry.Add("cubic-decameter",   new UBASE("cgs", "cubic-decameter", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("dam3",   new UBASE("cgs", "dam3", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("cgs", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("m3",   new UBASE("cgs", "m3", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-hectometer",   new UBASE("cgs", "cubic-hectometer", 1.000000000000000E+06, "m3", "L3", "1.0"));
          dry.Add("hm3",   new UBASE("cgs", "hm3", 1.000000000000000E+06, "m3", "L3", "1.0"));
          dry.Add("cubic-kilometer",   new UBASE("cgs", "cubic-kilometer", 1.000000000000000E+09, "m3", "L3", "1.0"));
          dry.Add("km3",   new UBASE("cgs", "km3", 1.000000000000000E+09, "m3", "L3", "1.0"));
          _map.Add("cgs",   new BaseSystem("cgs", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit22()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("bara",   new UBASE("Chilean", "bara", 8.360000000000000E-01, "m", "L", "1.0"));
          length.Add("g",   new UBASE("Chilean", "g", 8.360000000000000E-01, "m", "L", "1.0"));
          length.Add("cuadra",   new UBASE("Chilean", "cuadra", 1.254000000000000E+02, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Chilean", "legua", 4.514400000000000E+03, "m", "L", "1.0"));
          length.Add("linea",   new UBASE("Chilean", "linea", 1.935185185185190E-03, "m", "L", "1.0"));
          length.Add("pie",   new UBASE("Chilean", "pie", 2.786666666666670E-01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Chilean", "pulgada", 2.322222222222220E-02, "m", "L", "1.0"));
          area.Add("square-bara",   new UBASE("Chilean", "square-bara", 6.988960000000000E-01, "m2", "L2", "1.0"));
          mass.Add("adarme",   new UBASE("Chilean", "adarme", 1.797238281250000E-03, "kg", "M", "1.0"));
          mass.Add("arroba",   new UBASE("Chilean", "arroba", 1.150232500000000E+01, "kg", "M", "1.0"));
          mass.Add("castellano",   new UBASE("Chilean", "castellano", 4.600930000000000E-03, "kg", "M", "1.0"));
          mass.Add("granos",   new UBASE("Chilean", "granos", 4.992328559027780E-05, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Chilean", "libbra", 4.600930000000000E-01, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Chilean", "onza", 2.875581250000000E-02, "kg", "M", "1.0"));
          mass.Add("quintale",   new UBASE("Chilean", "quintale", 4.600930000000000E+01, "kg", "M", "1.0"));
          mass.Add("sastellano",   new UBASE("Chilean", "sastellano", 4.600930000000000E-03, "kg", "M", "1.0"));
          liquid.Add("almude",   new UBASE("Chilean", "almude", 8.083000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("arroba",   new UBASE("Chilean", "arroba", 3.233200000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Chilean", "cuartillo", 1.010375000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("fanega",   new UBASE("Chilean", "fanega", 9.699600000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-bara",   new UBASE("Chilean", "cubic-bara", 5.842770560000000E-01, "m3", "L3", "1.0"));
          _map.Add("Chilean",   new BaseSystem("Chilean", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit23()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("bu",   new UBASE("Chinese", "bu", 1.600000000000000E+00, "m", "L", "1.0"));
          length.Add("chek",   new UBASE("Chinese", "chek", 3.714750000000000E-01, "m", "L", "1.0"));
          length.Add("chi",   new UBASE("Chinese", "chi", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("chi(metric)",   new UBASE("Chinese", "chi(metric)", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("cun",   new UBASE("Chinese", "cun", 3.200000000000000E-02, "m", "L", "1.0"));
          length.Add("cun(metric)",   new UBASE("Chinese", "cun(metric)", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("fan",   new UBASE("Chinese", "fan", 3.714750000000000E-03, "m", "L", "1.0"));
          length.Add("fen",   new UBASE("Chinese", "fen", 3.200000000000000E-03, "m", "L", "1.0"));
          length.Add("fen(gros)",   new UBASE("Chinese", "fen(gros)", 3.840000000000000E+01, "m", "L", "1.0"));
          length.Add("fen(metric)",   new UBASE("Chinese", "fen(metric)", 1.000000000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Chinese", "foot", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Chinese", "feet", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("shaku",   new UBASE("Chinese", "shaku", 3.030303030303030E-01, "m", "L", "1.0"));
          length.Add("hao",   new UBASE("Chinese", "hao", 3.200000000000000E-05, "m", "L", "1.0"));
          length.Add("hao(metric)",   new UBASE("Chinese", "hao(metric)", 1.000000000000000E-04, "m", "L", "1.0"));
          length.Add("hoe",   new UBASE("Chinese", "hoe", 3.200000000000000E-07, "m", "L", "1.0"));
          length.Add("hu(metric)",   new UBASE("Chinese", "hu(metric)", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("li(large)",   new UBASE("Chinese", "li(large)", 5.760000000000000E+02, "m", "L", "1.0"));
          length.Add("li(metric-large)",   new UBASE("Chinese", "li(metric-large)", 1.000000000000000E+03, "m", "L", "1.0"));
          length.Add("li(metric-small)",   new UBASE("Chinese", "li(metric-small)", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("li(small)",   new UBASE("Chinese", "li(small)", 3.200000000000000E-04, "m", "L", "1.0"));
          length.Add("kyo",   new UBASE("Chinese", "kyo", 9.600000000000000E+01, "m", "L", "1.0"));
          length.Add("pou",   new UBASE("Chinese", "pou", 1.600000000000000E+00, "m", "L", "1.0"));
          length.Add("pou(old)",   new UBASE("Chinese", "pou(old)", 5.760000000000000E+03, "m", "L", "1.0"));
          length.Add("si(metic)",   new UBASE("Chinese", "si(metic)", 1.000000000000000E-05, "m", "L", "1.0"));
          length.Add("su",   new UBASE("Chinese", "su", 3.200000000000000E-06, "m", "L", "1.0"));
          length.Add("tchi",   new UBASE("Chinese", "tchi", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("thaan",   new UBASE("Chinese", "thaan", 4.608000000000000E+04, "m", "L", "1.0"));
          length.Add("thsan",   new UBASE("Chinese", "thsan", 4.608000000000000E+04, "m", "L", "1.0"));
          length.Add("tsouen",   new UBASE("Chinese", "tsouen", 3.200000000000000E-02, "m", "L", "1.0"));
          length.Add("tsun",   new UBASE("Chinese", "tsun", 3.714750000000000E-02, "m", "L", "1.0"));
          length.Add("yan",   new UBASE("Chinese", "yan", 3.200000000000000E+01, "m", "L", "1.0"));
          length.Add("yin",   new UBASE("Chinese", "yin", 3.200000000000000E+01, "m", "L", "1.0"));
          length.Add("yn",   new UBASE("Chinese", "yn", 3.200000000000000E+01, "m", "L", "1.0"));
          length.Add("zhang",   new UBASE("Chinese", "zhang", 3.200000000000000E+00, "m", "L", "1.0"));
          length.Add("zoll",   new UBASE("Chinese", "zoll", 2.615475000000000E-02, "m", "L", "1.0"));
          area.Add("cek3",   new UBASE("Chinese", "cek3", 1.269000000000000E-01, "m2", "L2", "1.0"));
          area.Add("ching",   new UBASE("Chinese", "ching", 6.144000000000000E+04, "m2", "L2", "1.0"));
          area.Add("fan1",   new UBASE("Chinese", "fan1", 7.614000000000000E+01, "m2", "L2", "1.0"));
          area.Add("fang-chi",   new UBASE("Chinese", "fang-chi", 1.024000000000000E-01, "m2", "L2", "1.0"));
          area.Add("fang-cun",   new UBASE("Chinese", "fang-cun", 1.024000000000000E-03, "m2", "L2", "1.0"));
          area.Add("fang-zhang",   new UBASE("Chinese", "fang-zhang", 1.024000000000000E+01, "m2", "L2", "1.0"));
          area.Add("fen",   new UBASE("Chinese", "fen", 6.144000000000000E+01, "m2", "L2", "1.0"));
          area.Add("hao",   new UBASE("Chinese", "hao", 6.144000000000000E-01, "m2", "L2", "1.0"));
          area.Add("king",   new UBASE("Chinese", "king", 6.144000000000000E+03, "m2", "L2", "1.0"));
          area.Add("kish",   new UBASE("Chinese", "kish", 1.536000000000000E+02, "m2", "L2", "1.0"));
          area.Add("kung",   new UBASE("Chinese", "kung", 2.560000000000000E+00, "m2", "L2", "1.0"));
          area.Add("li",   new UBASE("Chinese", "li", 6.144000000000000E+00, "m2", "L2", "1.0"));
          area.Add("lyi",   new UBASE("Chinese", "lyi", 6.144000000000000E+00, "m2", "L2", "1.0"));
          area.Add("mau5",   new UBASE("Chinese", "mau5", 7.614000000000000E+02, "m2", "L2", "1.0"));
          area.Add("meou",   new UBASE("Chinese", "meou", 6.144000000000000E+02, "m2", "L2", "1.0"));
          area.Add("mu",   new UBASE("Chinese", "mu", 6.144000000000000E+02, "m2", "L2", "1.0"));
          area.Add("pou3",   new UBASE("Chinese", "pou3", 3.172500000000000E+00, "m2", "L2", "1.0"));
          area.Add("qing",   new UBASE("Chinese", "qing", 6.144000000000000E+04, "m2", "L2", "1.0"));
          area.Add("zoeng6",   new UBASE("Chinese", "zoeng6", 1.269000000000000E+01, "m2", "L2", "1.0"));
          mass.Add("candareen",   new UBASE("Chinese", "candareen", 3.779936416666670E-04, "kg", "M", "1.0"));
          mass.Add("candareen(troy)",   new UBASE("Chinese", "candareen(troy)", 3.732417216000000E-04, "kg", "M", "1.0"));
          mass.Add("cash",   new UBASE("Chinese", "cash", 3.779936416666670E-05, "kg", "M", "1.0"));
          mass.Add("catty",   new UBASE("Chinese", "catty", 6.047898266666670E-01, "kg", "M", "1.0"));
          mass.Add("dan",   new UBASE("Chinese", "dan", 7.161792000000000E+01, "kg", "M", "1.0"));
          mass.Add("fan",   new UBASE("Chinese", "fan", 3.779936416666670E-04, "kg", "M", "1.0"));
          mass.Add("fen",   new UBASE("Chinese", "fen", 3.730100000000000E-04, "kg", "M", "1.0"));
          mass.Add("hao",   new UBASE("Chinese", "hao", 3.730100000000000E-06, "kg", "M", "1.0"));
          mass.Add("jin",   new UBASE("Chinese", "jin", 5.968160000000000E-01, "kg", "M", "1.0"));
          mass.Add("jun",   new UBASE("Chinese", "jun", 1.790448000000000E+01, "kg", "M", "1.0"));
          mass.Add("kan",   new UBASE("Chinese", "kan", 6.047898266666670E-01, "kg", "M", "1.0"));
          mass.Add("kwan",   new UBASE("Chinese", "kwan", 1.790448000000000E+01, "kg", "M", "1.0"));
          mass.Add("leung",   new UBASE("Chinese", "leung", 3.779936416666670E-02, "kg", "M", "1.0"));
          mass.Add("li",   new UBASE("Chinese", "li", 3.730100000000000E-05, "kg", "M", "1.0"));
          mass.Add("liang",   new UBASE("Chinese", "liang", 3.730100000000000E-02, "kg", "M", "1.0"));
          mass.Add("mace",   new UBASE("Chinese", "mace", 3.779936416666670E-03, "kg", "M", "1.0"));
          mass.Add("mace(troy)",   new UBASE("Chinese", "mace(troy)", 3.732417216000000E-03, "kg", "M", "1.0"));
          mass.Add("picul",   new UBASE("Chinese", "picul", 6.047898266666670E+01, "kg", "M", "1.0"));
          mass.Add("qian",   new UBASE("Chinese", "qian", 3.730100000000000E-03, "kg", "M", "1.0"));
          mass.Add("shih",   new UBASE("Chinese", "shih", 7.161792000000000E+01, "kg", "M", "1.0"));
          mass.Add("shu",   new UBASE("Chinese", "shu", 1.554208333333330E-05, "kg", "M", "1.0"));
          mass.Add("tael",   new UBASE("Chinese", "tael", 3.779936416666670E-02, "kg", "M", "1.0"));
          mass.Add("tael(troy)",   new UBASE("Chinese", "tael(troy)", 3.732417216000000E-02, "kg", "M", "1.0"));
          mass.Add("tail(Hong-Kong)",   new UBASE("Chinese", "tail(Hong-Kong)", 3.779946637000000E-02, "kg", "M", "1.0"));
          mass.Add("tail(Singapore)",   new UBASE("Chinese", "tail(Singapore)", 3.779303777000000E-02, "kg", "M", "1.0"));
          mass.Add("tail(Taiwan)",   new UBASE("Chinese", "tail(Taiwan)", 3.750093752000000E-02, "kg", "M", "1.0"));
          mass.Add("tam",   new UBASE("Chinese", "tam", 6.047898266666670E+01, "kg", "M", "1.0"));
          mass.Add("tan",   new UBASE("Chinese", "tan", 5.968160000000000E+01, "kg", "M", "1.0"));
          mass.Add("tchin",   new UBASE("Chinese", "tchin", 5.968160000000000E-01, "kg", "M", "1.0"));
          mass.Add("tsin",   new UBASE("Chinese", "tsin", 3.779936416666670E-03, "kg", "M", "1.0"));
          mass.Add("tsouen",   new UBASE("Chinese", "tsouen", 3.730100000000000E-03, "kg", "M", "1.0"));
          mass.Add("zhu",   new UBASE("Chinese", "zhu", 1.554208333333330E-03, "kg", "M", "1.0"));
          liquid.Add("chao",   new UBASE("Chinese", "chao", 1.035468800000000E-05, "m3", "L3", "1.0"));
          liquid.Add("chei",   new UBASE("Chinese", "chei", 1.035468800000000E-01, "m3", "L3", "1.0"));
          liquid.Add("cheng",   new UBASE("Chinese", "cheng", 1.035468800000000E-03, "m3", "L3", "1.0"));
          liquid.Add("co",   new UBASE("Chinese", "co", 1.035468800000000E-06, "m3", "L3", "1.0"));
          liquid.Add("cyut3",   new UBASE("Chinese", "cyut3", 1.031000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("dan",   new UBASE("Chinese", "dan", 1.035468800000000E-01, "m3", "L3", "1.0"));
          liquid.Add("dou",   new UBASE("Chinese", "dou", 1.035468800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("gam1-dak6",   new UBASE("Chinese", "gam1-dak6", 1.031000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("ge",   new UBASE("Chinese", "ge", 1.035468800000000E-04, "m3", "L3", "1.0"));
          liquid.Add("hou",   new UBASE("Chinese", "hou", 5.177344000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("hu",   new UBASE("Chinese", "hu", 5.177344000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("kho",   new UBASE("Chinese", "kho", 1.035468800000000E-04, "m3", "L3", "1.0"));
          liquid.Add("ping",   new UBASE("Chinese", "ping", 5.177344000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("quei",   new UBASE("Chinese", "quei", 1.035468800000000E-07, "m3", "L3", "1.0"));
          liquid.Add("sei",   new UBASE("Chinese", "sei", 1.035468800000000E-01, "m3", "L3", "1.0"));
          liquid.Add("sek6",   new UBASE("Chinese", "sek6", 1.031000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("shao",   new UBASE("Chinese", "shao", 1.035468800000000E-05, "m3", "L3", "1.0"));
          liquid.Add("sheng",   new UBASE("Chinese", "sheng", 1.035468800000000E-03, "m3", "L3", "1.0"));
          liquid.Add("to",   new UBASE("Chinese", "to", 1.035468800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("yo",   new UBASE("Chinese", "yo", 2.070937600000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-tchi",   new UBASE("Chinese", "cubic-tchi", 3.276800000000000E-02, "m3", "L3", "1.0"));
          dry.Add("fang",   new UBASE("Chinese", "fang", 3.276800000000000E+00, "m3", "L3", "1.0"));
          dry.Add("ma",   new UBASE("Chinese", "ma", 3.276800000000000E+00, "m3", "L3", "1.0"));
          _map.Add("Chinese",   new BaseSystem("Chinese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit24()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cuadra",   new UBASE("Colombian", "cuadra", 8.000000000000000E+01, "m", "L", "1.0"));
          length.Add("cuarta",   new UBASE("Colombian", "cuarta", 2.000000000000000E-01, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Colombian", "legua", 5.000000000000000E+03, "m", "L", "1.0"));
          length.Add("pie",   new UBASE("Colombian", "pie", 2.666666666666670E-01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Colombian", "pulgada", 2.222222222222220E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Colombian", "vara", 8.000000000000000E-01, "m", "L", "1.0"));
          area.Add("square-vara",   new UBASE("Colombian", "square-vara", 6.400000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("arroba",   new UBASE("Colombian", "arroba", 1.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Colombian", "carga", 1.250000000000000E+02, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Colombian", "libbra", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Colombian", "onza", 3.125000000000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Colombian", "quintal", 5.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("saco",   new UBASE("Colombian", "saco", 6.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tonelada",   new UBASE("Colombian", "tonelada", 1.000000000000000E+03, "kg", "M", "1.0"));
          liquid.Add("cubic-vara",   new UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Colombian",   new BaseSystem("Colombian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit25()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cuarta",   new UBASE("Costa-Rican", "cuarta", 2.098250000000000E-01, "m", "L", "1.0"));
          length.Add("mecate",   new UBASE("Costa-Rican", "mecate", 2.014320000000000E+01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Costa-Rican", "pulgada", 2.331388888888890E-02, "m", "L", "1.0"));
          length.Add("tercia",   new UBASE("Costa-Rican", "tercia", 2.797666666666670E-01, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Costa-Rican", "vara", 8.393000000000000E-01, "m", "L", "1.0"));
          area.Add("caballiera",   new UBASE("Costa-Rican", "caballiera", 4.508316736000000E+05, "m2", "L2", "1.0"));
          area.Add("manzana",   new UBASE("Costa-Rican", "manzana", 7.044244900000000E+03, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Costa-Rican", "square-vara", 7.044244900000000E-01, "m2", "L2", "1.0"));
          mass.Add("caja",   new UBASE("Costa-Rican", "caja", 1.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Costa-Rican", "carga", 1.610000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fanega",   new UBASE("Costa-Rican", "fanega", 9.200000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("botella",   new UBASE("Costa-Rican", "botella", 6.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cajuella",   new UBASE("Costa-Rican", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Costa-Rican", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Costa-Rican", "cubic-vara", 5.912234744570000E-01, "m3", "L3", "1.0"));
          _map.Add("Costa-Rican",   new BaseSystem("Costa-Rican", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit26()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("legua",   new UBASE("Cuban", "legua", 6.773333333333330E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Cuban", "vara", 8.479536000000000E-01, "m", "L", "1.0"));
          area.Add("caballiera",   new UBASE("Cuban", "caballiera", 1.342020000000000E+05, "m2", "L2", "1.0"));
          area.Add("cordele",   new UBASE("Cuban", "cordele", 4.142037037037040E+02, "m2", "L2", "1.0"));
          area.Add("fanega",   new UBASE("Cuban", "fanega", 1.118350000000000E+04, "m2", "L2", "1.0"));
          mass.Add("libra",   new UBASE("Cuban", "libra", 4.608951746418000E-01, "kg", "M", "1.0"));
          liquid.Add("arroba",   new UBASE("Cuban", "arroba", 1.613723684210530E-02, "m3", "L3", "1.0"));
          liquid.Add("bocoy",   new UBASE("Cuban", "bocoy", 1.362700000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("fanega",   new UBASE("Cuban", "fanega", 6.056444444444440E-02, "m3", "L3", "1.0"));
          liquid.Add("barrile",   new UBASE("Cuban", "barrile", 2.271166666666670E-02, "m3", "L3", "1.0"));
          dry.Add("fanega",   new UBASE("Cuban", "fanega", 5.634727319684110E-02, "m3", "L3", "1.0"));
          _map.Add("Cuban",   new BaseSystem("Cuban", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit27()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("foot",   new UBASE("Cypriot", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Cypriot", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Cypriot", "pic", 6.096000000000000E-01, "m", "L", "1.0"));
          area.Add("donum",   new UBASE("Cypriot", "donum", 1.337803776000000E+03, "m2", "L2", "1.0"));
          area.Add("dunum",   new UBASE("Cypriot", "dunum", 1.337803776000000E+03, "m2", "L2", "1.0"));
          area.Add("scala",   new UBASE("Cypriot", "scala", 1.337803776000000E+03, "m2", "L2", "1.0"));
          mass.Add("aleppo",   new UBASE("Cypriot", "aleppo", 1.005886439712000E+02, "kg", "M", "1.0"));
          mass.Add("drachme",   new UBASE("Cypriot", "drachme", 3.175146590000000E-03, "kg", "M", "1.0"));
          mass.Add("kantar",   new UBASE("Cypriot", "kantar", 5.588257998400000E+01, "kg", "M", "1.0"));
          mass.Add("mussa",   new UBASE("Cypriot", "mussa", 6.350293180000000E+00, "kg", "M", "1.0"));
          mass.Add("oke",   new UBASE("Cypriot", "oke", 1.270058636000000E+00, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Cypriot", "rottolo", 5.588257998400000E-01, "kg", "M", "1.0"));
          mass.Add("stone",   new UBASE("Cypriot", "stone", 6.350293180000000E+00, "kg", "M", "1.0"));
          mass.Add("ton",   new UBASE("Cypriot", "ton", 1.016046908800000E+03, "kg", "M", "1.0"));
          mass.Add("uqqa",   new UBASE("Cypriot", "uqqa", 1.270058636000000E+00, "kg", "M", "1.0"));
          liquid.Add("cass",   new UBASE("Cypriot", "cass", 4.730635000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gomari",   new UBASE("Cypriot", "gomari", 1.636544000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("kartos",   new UBASE("Cypriot", "kartos", 5.114200000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kile",   new UBASE("Cypriot", "kile", 3.579940000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("kouza",   new UBASE("Cypriot", "kouza", 1.022840000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("medimno",   new UBASE("Cypriot", "medimno", 7.159880000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("oke",   new UBASE("Cypriot", "oke", 1.278550000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Cypriot", "cubic-pic", 2.265347727360000E-01, "m3", "L3", "1.0"));
          _map.Add("Cypriot",   new BaseSystem("Cypriot", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit28()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("latro(Bohemian)",   new UBASE("Czech", "latro(Bohemian)", 1.909200000000000E+00, "m", "L", "1.0"));
          length.Add("latro(Moravian)",   new UBASE("Czech", "latro(Moravian)", 1.831800000000000E+00, "m", "L", "1.0"));
          length.Add("latro-(Praha)",   new UBASE("Czech", "latro-(Praha)", 1.912425000000000E+00, "m", "L", "1.0"));
          length.Add("latro(Silesian)",   new UBASE("Czech", "latro(Silesian)", 1.867275000000000E+00, "m", "L", "1.0"));
          length.Add("lehen",   new UBASE("Czech", "lehen", 1.280160000000000E+01, "m", "L", "1.0"));
          length.Add("loket(Bohemian)",   new UBASE("Czech", "loket(Bohemian)", 5.920000000000000E-01, "m", "L", "1.0"));
          length.Add("loket(Moravian)",   new UBASE("Czech", "loket(Moravian)", 5.680000000000000E-01, "m", "L", "1.0"));
          length.Add("loket(Praha)",   new UBASE("Czech", "loket(Praha)", 5.930000000000000E-01, "m", "L", "1.0"));
          length.Add("loket(Silesian)",   new UBASE("Czech", "loket(Silesian)", 5.790000000000000E-01, "m", "L", "1.0"));
          length.Add("mile(Bohemian)",   new UBASE("Czech", "mile(Bohemian)", 6.987672000000000E+03, "m", "L", "1.0"));
          length.Add("mile(Moravian)",   new UBASE("Czech", "mile(Moravian)", 6.704388000000000E+03, "m", "L", "1.0"));
          length.Add("mile(Praha)",   new UBASE("Czech", "mile(Praha)", 6.999475500000000E+03, "m", "L", "1.0"));
          length.Add("mile(Silesian)",   new UBASE("Czech", "mile(Silesian)", 6.834226500000000E+03, "m", "L", "1.0"));
          length.Add("sah(Bohemian)",   new UBASE("Czech", "sah(Bohemian)", 1.776000000000000E+00, "m", "L", "1.0"));
          length.Add("sah(Moravian)",   new UBASE("Czech", "sah(Moravian)", 1.704000000000000E+00, "m", "L", "1.0"));
          length.Add("sah(Praha)",   new UBASE("Czech", "sah(Praha)", 1.779000000000000E+00, "m", "L", "1.0"));
          length.Add("sah(Silesian)",   new UBASE("Czech", "sah(Silesian)", 1.737000000000000E+00, "m", "L", "1.0"));
          length.Add("stopa(Bohemian)",   new UBASE("Czech", "stopa(Bohemian)", 2.960000000000000E-01, "m", "L", "1.0"));
          length.Add("stopa(Moravian)",   new UBASE("Czech", "stopa(Moravian)", 2.840000000000000E-01, "m", "L", "1.0"));
          length.Add("stopa(Praha)",   new UBASE("Czech", "stopa(Praha)", 2.965000000000000E-01, "m", "L", "1.0"));
          length.Add("stopa(Silesian)",   new UBASE("Czech", "stopa(Silesian)", 2.895000000000000E-01, "m", "L", "1.0"));
          area.Add("jitro",   new UBASE("Czech", "jitro", 5.756000000000000E+03, "m2", "L2", "1.0"));
          area.Add("korec",   new UBASE("Czech", "korec", 2.878000000000000E+03, "m2", "L2", "1.0"));
          area.Add("lan",   new UBASE("Czech", "lan", 1.726800000000000E+05, "m2", "L2", "1.0"));
          area.Add("merice",   new UBASE("Czech", "merice", 2.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("mira",   new UBASE("Czech", "mira", 2.878000000000000E+03, "m2", "L2", "1.0"));
          area.Add("strych",   new UBASE("Czech", "strych", 2.878000000000000E+03, "m2", "L2", "1.0"));
          mass.Add("quintal",   new UBASE("Czech", "quintal", 5.000000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("korec",   new UBASE("Czech", "korec", 9.354500000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("merice",   new UBASE("Czech", "merice", 7.060000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("strych",   new UBASE("Czech", "strych", 9.354500000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-stopa(Bohemian)",   new UBASE("Czech", "cubic-stopa(Bohemian)", 2.593433600000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-stopa(Praha)",   new UBASE("Czech", "cubic-stopa(Praha)", 2.606598212500000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-stopa(Moravian)",   new UBASE("Czech", "cubic-stopa(Moravian)", 2.290630400000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-stopa(Silesian)",   new UBASE("Czech", "cubic-stopa(Silesian)", 2.426306737500000E-02, "m3", "L3", "1.0"));
          _map.Add("Czech",   new BaseSystem("Czech", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit29()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("alen",   new UBASE("Danish", "alen", 6.277140000000000E-01, "m", "L", "1.0"));
          length.Add("aln",   new UBASE("Danish", "aln", 6.277140000000000E-01, "m", "L", "1.0"));
          length.Add("danskmil",   new UBASE("Danish", "danskmil", 7.532500000000000E+03, "m", "L", "1.0"));
          length.Add("favn",   new UBASE("Danish", "favn", 1.883142000000000E+00, "m", "L", "1.0"));
          length.Add("fod",   new UBASE("Danish", "fod", 3.138570000000000E-01, "m", "L", "1.0"));
          length.Add("kvater",   new UBASE("Danish", "kvater", 1.569285000000000E-01, "m", "L", "1.0"));
          length.Add("linie",   new UBASE("Danish", "linie", 2.179562500000000E-03, "m", "L", "1.0"));
          length.Add("miil",   new UBASE("Danish", "miil", 7.532568000000000E+03, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("Danish", "mile", 7.532568000000000E+03, "m", "L", "1.0"));
          length.Add("palme",   new UBASE("Danish", "palme", 8.860010162601630E-02, "m", "L", "1.0"));
          length.Add("rut",   new UBASE("Danish", "rut", 5.021712000000000E+00, "m", "L", "1.0"));
          length.Add("rute",   new UBASE("Danish", "rute", 3.766284000000000E+00, "m", "L", "1.0"));
          length.Add("ruthe",   new UBASE("Danish", "ruthe", 3.766284000000000E+00, "m", "L", "1.0"));
          length.Add("skrupel",   new UBASE("Danish", "skrupel", 1.816302083333330E-04, "m", "L", "1.0"));
          length.Add("tomme",   new UBASE("Danish", "tomme", 2.615475000000000E-02, "m", "L", "1.0"));
          area.Add("album",   new UBASE("Danish", "album", 2.955186493470000E+02, "m2", "L2", "1.0"));
          area.Add("fjerdingar",   new UBASE("Danish", "fjerdingar", 8.865559480410000E+02, "m2", "L2", "1.0"));
          area.Add("penge",   new UBASE("Danish", "penge", 8.152238602675860E+01, "m2", "L2", "1.0"));
          area.Add("pflug",   new UBASE("Danish", "pflug", 9.078332907939840E+05, "m2", "L2", "1.0"));
          area.Add("skiepper",   new UBASE("Danish", "skiepper", 3.546223792164000E+03, "m2", "L2", "1.0"));
          area.Add("square-ruthe",   new UBASE("Danish", "square-ruthe", 1.418489516865600E+01, "m2", "L2", "1.0"));
          area.Add("tonde",   new UBASE("Danish", "tonde", 2.836979033731200E+04, "m2", "L2", "1.0"));
          area.Add("tondelande",   new UBASE("Danish", "tondelande", 5.516230000000000E+03, "m2", "L2", "1.0"));
          mass.Add("bismerpund",   new UBASE("Danish", "bismerpund", 6.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("centner",   new UBASE("Danish", "centner", 5.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("es",   new UBASE("Danish", "es", 5.463286713286710E-05, "kg", "M", "1.0"));
          mass.Add("lispund",   new UBASE("Danish", "lispund", 8.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Danish", "loth", 1.562500000000000E-02, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("Danish", "mark", 2.500000000000000E-01, "kg", "M", "1.0"));
          mass.Add("ort",   new UBASE("Danish", "ort", 9.765625000000000E-04, "kg", "M", "1.0"));
          mass.Add("pund",   new UBASE("Danish", "pund", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("quintin",   new UBASE("Danish", "quintin", 3.906250000000000E-03, "kg", "M", "1.0"));
          mass.Add("skippund",   new UBASE("Danish", "skippund", 1.600000000000000E+02, "kg", "M", "1.0"));
          mass.Add("skyplast",   new UBASE("Danish", "skyplast", 2.600000000000000E+03, "kg", "M", "1.0"));
          mass.Add("unze",   new UBASE("Danish", "unze", 3.125000000000000E-02, "kg", "M", "1.0"));
          mass.Add("waag",   new UBASE("Danish", "waag", 1.800000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("anker",   new UBASE("Danish", "anker", 3.864608197004220E-02, "m3", "L3", "1.0"));
          liquid.Add("cubic-fod",   new UBASE("Danish", "cubic-fod", 3.091686557603380E-02, "m3", "L3", "1.0"));
          liquid.Add("fuder",   new UBASE("Danish", "fuder", 9.275059672810140E-01, "m3", "L3", "1.0"));
          liquid.Add("kande",   new UBASE("Danish", "kande", 1.932304098502110E-03, "m3", "L3", "1.0"));
          liquid.Add("ohm",   new UBASE("Danish", "ohm", 1.545843278801690E-01, "m3", "L3", "1.0"));
          liquid.Add("oxhoft",   new UBASE("Danish", "oxhoft", 2.318764918202530E-01, "m3", "L3", "1.0"));
          liquid.Add("paegel",   new UBASE("Danish", "paegel", 2.415380123127640E-04, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("Danish", "pipe", 4.637529836405070E-01, "m3", "L3", "1.0"));
          liquid.Add("pot",   new UBASE("Danish", "pot", 9.670000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pott",   new UBASE("Danish", "pott", 9.661520492510560E-04, "m3", "L3", "1.0"));
          liquid.Add("potte",   new UBASE("Danish", "potte", 9.661520492510560E-04, "m3", "L3", "1.0"));
          liquid.Add("smortonde",   new UBASE("Danish", "smortonde", 1.313966786981440E-01, "m3", "L3", "1.0"));
          liquid.Add("stubchen",   new UBASE("Danish", "stubchen", 3.864608197004220E-03, "m3", "L3", "1.0"));
          liquid.Add("tonde",   new UBASE("Danish", "tonde", 1.391258950921520E-01, "m3", "L3", "1.0"));
          liquid.Add("viertel",   new UBASE("Danish", "viertel", 7.729216394008450E-03, "m3", "L3", "1.0"));
          dry.Add("achtel",   new UBASE("Danish", "achtel", 2.173842110814880E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-fod",   new UBASE("Danish", "cubic-fod", 3.091686557603380E-02, "m3", "L3", "1.0"));
          dry.Add("fjerdingar",   new UBASE("Danish", "fjerdingar", 3.478147377303800E-02, "m3", "L3", "1.0"));
          dry.Add("korntonde",   new UBASE("Danish", "korntonde", 1.391258950921520E-01, "m3", "L3", "1.0"));
          dry.Add("last",   new UBASE("Danish", "last", 3.060769692027350E+00, "m3", "L3", "1.0"));
          dry.Add("ottingkar",   new UBASE("Danish", "ottingkar", 1.739073688651900E-02, "m3", "L3", "1.0"));
          dry.Add("pott",   new UBASE("Danish", "pott", 9.661520492510560E-04, "m3", "L3", "1.0"));
          dry.Add("skaeppe",   new UBASE("Danish", "skaeppe", 1.739073688651900E-02, "m3", "L3", "1.0"));
          dry.Add("skieppe",   new UBASE("Danish", "skieppe", 1.739073688651900E-02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Danish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Danish", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("viertel",   new UBASE("Danish", "viertel", 4.347684221629750E-03, "m3", "L3", "1.0"));
          _map.Add("Danish",   new BaseSystem("Danish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit30()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("duim",   new UBASE("Dutch", "duim", 2.358828333333330E-02, "m", "L", "1.0"));
          length.Add("duim(metric)",   new UBASE("Dutch", "duim(metric)", 1.000000000000000E-02, "m", "L", "1.0"));
          length.Add("duime",   new UBASE("Dutch", "duime", 2.358828333333330E-02, "m", "L", "1.0"));
          length.Add("el(metric)",   new UBASE("Dutch", "el(metric)", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("ell",   new UBASE("Dutch", "ell", 7.076485000000000E-01, "m", "L", "1.0"));
          length.Add("ell(metric)",   new UBASE("Dutch", "ell(metric)", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("elle",   new UBASE("Dutch", "elle", 7.076485000000000E-01, "m", "L", "1.0"));
          length.Add("grote",   new UBASE("Dutch", "grote", 9.600000000000000E-02, "m", "L", "1.0"));
          length.Add("hand",   new UBASE("Dutch", "hand", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("lyne",   new UBASE("Dutch", "lyne", 1.965690277777780E-03, "m", "L", "1.0"));
          length.Add("kleine",   new UBASE("Dutch", "kleine", 3.000000000000000E-02, "m", "L", "1.0"));
          length.Add("line(metric)",   new UBASE("Dutch", "line(metric)", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("mijl",   new UBASE("Dutch", "mijl", 5.000244301000000E+03, "m", "L", "1.0"));
          length.Add("mijl(metric)",   new UBASE("Dutch", "mijl(metric)", 1.000000000000000E+03, "m", "L", "1.0"));
          length.Add("myl",   new UBASE("Dutch", "myl", 1.000048860200000E+03, "m", "L", "1.0"));
          length.Add("palm(metric)",   new UBASE("Dutch", "palm(metric)", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("roede",   new UBASE("Dutch", "roede", 3.679772200000000E+00, "m", "L", "1.0"));
          length.Add("roede(metric)",   new UBASE("Dutch", "roede(metric)", 1.000000000000000E+01, "m", "L", "1.0"));
          length.Add("roeden",   new UBASE("Dutch", "roeden", 3.679772200000000E+00, "m", "L", "1.0"));
          length.Add("rood(metric)",   new UBASE("Dutch", "rood(metric)", 1.000000000000000E+01, "m", "L", "1.0"));
          length.Add("streep(metric)",   new UBASE("Dutch", "streep(metric)", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("uren",   new UBASE("Dutch", "uren", 5.000244301000000E+03, "m", "L", "1.0"));
          length.Add("voet",   new UBASE("Dutch", "voet", 2.830594000000000E-01, "m", "L", "1.0"));
          length.Add("voeten",   new UBASE("Dutch", "voeten", 2.830594000000000E-01, "m", "L", "1.0"));
          area.Add("bunder",   new UBASE("Dutch", "bunder", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("hont",   new UBASE("Dutch", "hont", 1.354072344389280E+03, "m2", "L2", "1.0"));
          area.Add("morgen",   new UBASE("Dutch", "morgen", 8.244346000000000E+03, "m2", "L2", "1.0"));
          area.Add("roede",   new UBASE("Dutch", "roede", 1.354072344389280E+01, "m2", "L2", "1.0"));
          area.Add("vierkante-roede(metric)",   new UBASE("Dutch", "vierkante-roede(metric)", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("voet",   new UBASE("Dutch", "voet", 8.012262392836000E-02, "m2", "L2", "1.0"));
          mass.Add("drachme",   new UBASE("Dutch", "drachme", 3.845060312500000E-03, "kg", "M", "1.0"));
          mass.Add("drachme(apothecary)",   new UBASE("Dutch", "drachme(apothecary)", 3.845060312500000E-03, "kg", "M", "1.0"));
          mass.Add("engel",   new UBASE("Dutch", "engel", 1.538024125000000E-03, "kg", "M", "1.0"));
          mass.Add("grein",   new UBASE("Dutch", "grein", 6.408433854166670E-05, "kg", "M", "1.0"));
          mass.Add("grein(apothecary)",   new UBASE("Dutch", "grein(apothecary)", 6.408433854166670E-05, "kg", "M", "1.0"));
          mass.Add("korrel(metric)",   new UBASE("Dutch", "korrel(metric)", 1.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("last",   new UBASE("Dutch", "last", 1.976361280000000E+03, "kg", "M", "1.0"));
          mass.Add("lood(metric)",   new UBASE("Dutch", "lood(metric)", 1.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("Dutch", "mark", 2.460838600000000E-01, "kg", "M", "1.0"));
          mass.Add("ons",   new UBASE("Dutch", "ons", 3.076048250000000E-02, "kg", "M", "1.0"));
          mass.Add("ons(Apothecary)",   new UBASE("Dutch", "ons(Apothecary)", 3.076048250000000E-02, "kg", "M", "1.0"));
          mass.Add("ons(metric)",   new UBASE("Dutch", "ons(metric)", 1.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("pond",   new UBASE("Dutch", "pond", 4.921677200000000E-01, "kg", "M", "1.0"));
          mass.Add("pond(Amsterdam)",   new UBASE("Dutch", "pond(Amsterdam)", 4.940903200000000E-01, "kg", "M", "1.0"));
          mass.Add("pond(apothecary)",   new UBASE("Dutch", "pond(apothecary)", 3.691257900000000E-01, "kg", "M", "1.0"));
          mass.Add("pond(metric)",   new UBASE("Dutch", "pond(metric)", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("scheepslast",   new UBASE("Dutch", "scheepslast", 1.976361280000000E+03, "kg", "M", "1.0"));
          mass.Add("scrupel(apothecary)",   new UBASE("Dutch", "scrupel(apothecary)", 1.281686770833330E-03, "kg", "M", "1.0"));
          mass.Add("unze",   new UBASE("Dutch", "unze", 3.076048250000000E-02, "kg", "M", "1.0"));
          mass.Add("vierling",   new UBASE("Dutch", "vierling", 3.845060312500000E-04, "kg", "M", "1.0"));
          mass.Add("wigtje(metric)",   new UBASE("Dutch", "wigtje(metric)", 1.000000000000000E-03, "kg", "M", "1.0"));
          liquid.Add("aam",   new UBASE("Dutch", "aam", 1.536000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("anker",   new UBASE("Dutch", "anker", 3.840000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("mingel",   new UBASE("Dutch", "mingel", 1.200000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("mingelen",   new UBASE("Dutch", "mingelen", 1.200000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("mutsje",   new UBASE("Dutch", "mutsje", 1.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("oxhoofd",   new UBASE("Dutch", "oxhoofd", 2.304000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("oxhooft",   new UBASE("Dutch", "oxhooft", 2.304000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("Dutch", "pint", 6.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("steekan",   new UBASE("Dutch", "steekan", 1.920000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("stoop",   new UBASE("Dutch", "stoop", 2.400000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("vat",   new UBASE("Dutch", "vat", 9.216000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("zak",   new UBASE("Dutch", "zak", 1.000000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("kop",   new UBASE("Dutch", "kop", 8.518750000000000E-04, "m3", "L3", "1.0"));
          dry.Add("kop(metric)",   new UBASE("Dutch", "kop(metric)", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("last",   new UBASE("Dutch", "last", 2.944080000000000E+00, "m3", "L3", "1.0"));
          dry.Add("maatje(metric)",   new UBASE("Dutch", "maatje(metric)", 1.000000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("mud",   new UBASE("Dutch", "mud", 1.090400000000000E-01, "m3", "L3", "1.0"));
          dry.Add("mud(metric)",   new UBASE("Dutch", "mud(metric)", 1.000000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("schepel",   new UBASE("Dutch", "schepel", 2.726000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("teerling-el(metric)",   new UBASE("Dutch", "teerling-el(metric)", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("vierd",   new UBASE("Dutch", "vierd", 6.815000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("vingerhoed(metric)",   new UBASE("Dutch", "vingerhoed(metric)", 1.000000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("wisse(metric)",   new UBASE("Dutch", "wisse(metric)", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("zak",   new UBASE("Dutch", "zak", 8.178000000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Dutch",   new BaseSystem("Dutch", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit31()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("pik",   new UBASE("East-Med", "pik", 5.780000000000000E-01, "m", "L", "1.0"));
          _map.Add("East-Med",   new BaseSystem("East-Med", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit32()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("abdat",   new UBASE("Egyptian", "abdat", 9.666666666666670E-02, "m", "L", "1.0"));
          length.Add("atour",   new UBASE("Egyptian", "atour", 5.235000000000000E+03, "m", "L", "1.0"));
          length.Add("atour(royal)",   new UBASE("Egyptian", "atour(royal)", 1.047000000000000E+04, "m", "L", "1.0"));
          length.Add("canne",   new UBASE("Egyptian", "canne", 4.071666666666670E+00, "m", "L", "1.0"));
          length.Add("choryos",   new UBASE("Egyptian", "choryos", 8.725000000000000E-02, "m", "L", "1.0"));
          length.Add("derah",   new UBASE("Egyptian", "derah", 4.495800000000000E-01, "m", "L", "1.0"));
          length.Add("derah(royal)",   new UBASE("Egyptian", "derah(royal)", 5.235000000000000E-01, "m", "L", "1.0"));
          length.Add("dichas",   new UBASE("Egyptian", "dichas", 1.745000000000000E-01, "m", "L", "1.0"));
          length.Add("digit",   new UBASE("Egyptian", "digit", 1.090625000000000E-02, "m", "L", "1.0"));
          length.Add("diraa",   new UBASE("Egyptian", "diraa", 5.800000000000000E-01, "m", "L", "1.0"));
          length.Add("double-remen",   new UBASE("Egyptian", "double-remen", 7.403407999023150E-01, "m", "L", "1.0"));
          length.Add("farsakh",   new UBASE("Egyptian", "farsakh", 1.740000000000000E+03, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Egyptian", "finger", 2.181250000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Egyptian", "foot", 3.490000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Egyptian", "feet", 3.490000000000000E-01, "m", "L", "1.0"));
          length.Add("gasab",   new UBASE("Egyptian", "gasab", 2.320000000000000E+00, "m", "L", "1.0"));
          length.Add("kadam",   new UBASE("Egyptian", "kadam", 2.900000000000000E-01, "m", "L", "1.0"));
          length.Add("kassabah",   new UBASE("Egyptian", "kassabah", 3.480000000000000E+00, "m", "L", "1.0"));
          length.Add("kirat",   new UBASE("Egyptian", "kirat", 2.416666666666670E-02, "m", "L", "1.0"));
          length.Add("long-cubit",   new UBASE("Egyptian", "long-cubit", 6.980000000000000E-01, "m", "L", "1.0"));
          length.Add("mil-hachmi",   new UBASE("Egyptian", "mil-hachmi", 5.800000000000000E+02, "m", "L", "1.0"));
          length.Add("mille",   new UBASE("Egyptian", "mille", 1.745000000000000E+03, "m", "L", "1.0"));
          length.Add("orgye",   new UBASE("Egyptian", "orgye", 2.094000000000000E+00, "m", "L", "1.0"));
          length.Add("palm(short)",   new UBASE("Egyptian", "palm(short)", 7.485714286000000E-02, "m", "L", "1.0"));
          length.Add("parasange",   new UBASE("Egyptian", "parasange", 6.980000000000000E+03, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Egyptian", "pic", 5.800000000000000E-01, "m", "L", "1.0"));
          length.Add("pigon",   new UBASE("Egyptian", "pigon", 4.362500000000000E-01, "m", "L", "1.0"));
          length.Add("senus",   new UBASE("Egyptian", "senus", 5.235000000000000E+01, "m", "L", "1.0"));
          length.Add("shoeme",   new UBASE("Egyptian", "shoeme", 6.282000000000000E+03, "m", "L", "1.0"));
          length.Add("spithame",   new UBASE("Egyptian", "spithame", 2.617500000000000E-01, "m", "L", "1.0"));
          length.Add("stade",   new UBASE("Egyptian", "stade", 2.094000000000000E+02, "m", "L", "1.0"));
          length.Add("thebs",   new UBASE("Egyptian", "thebs", 2.617500000000000E-02, "m", "L", "1.0"));
          length.Add("xilon",   new UBASE("Egyptian", "xilon", 1.570500000000000E+00, "m", "L", "1.0"));
          length.Add("zereth",   new UBASE("Egyptian", "zereth", 3.490000000000000E-01, "m", "L", "1.0"));
          area.Add("aurure",   new UBASE("Egyptian", "aurure", 2.740522500000000E+03, "m2", "L2", "1.0"));
          area.Add("feddan-masri",   new UBASE("Egyptian", "feddan-masri", 4.200080000000000E+03, "m2", "L2", "1.0"));
          area.Add("kirat-kamel",   new UBASE("Egyptian", "kirat-kamel", 1.750033333333330E+02, "m2", "L2", "1.0"));
          area.Add("pekeis",   new UBASE("Egyptian", "pekeis", 2.740522500000000E+01, "m2", "L2", "1.0"));
          area.Add("rema",   new UBASE("Egyptian", "rema", 1.370261250000000E+03, "m2", "L2", "1.0"));
          area.Add("sahme",   new UBASE("Egyptian", "sahme", 7.291805555555560E+00, "m2", "L2", "1.0"));
          area.Add("setta",   new UBASE("Egyptian", "setta", 2.740522500000000E+04, "m2", "L2", "1.0"));
          area.Add("square-cubit",   new UBASE("Egyptian", "square-cubit", 2.740522500000000E-01, "m2", "L2", "1.0"));
          area.Add("su",   new UBASE("Egyptian", "su", 1.712826562500000E+02, "m2", "L2", "1.0"));
          area.Add("ten",   new UBASE("Egyptian", "ten", 2.740522500000000E+02, "m2", "L2", "1.0"));
          mass.Add("deben",   new UBASE("Egyptian", "deben", 1.365000000000000E-02, "kg", "M", "1.0"));
          mass.Add("dirhem",   new UBASE("Egyptian", "dirhem", 2.808000000000000E-02, "kg", "M", "1.0"));
          mass.Add("gerah",   new UBASE("Egyptian", "gerah", 6.825000000000000E-04, "kg", "M", "1.0"));
          mass.Add("grain",   new UBASE("Egyptian", "grain", 9.100000000000000E-04, "kg", "M", "1.0"));
          mass.Add("helm",   new UBASE("Egyptian", "helm", 2.496000000000000E+02, "kg", "M", "1.0"));
          mass.Add("kantar",   new UBASE("Egyptian", "kantar", 4.492800000000000E+01, "kg", "M", "1.0"));
          mass.Add("kedet",   new UBASE("Egyptian", "kedet", 1.365000000000000E-01, "kg", "M", "1.0"));
          mass.Add("kikkar",   new UBASE("Egyptian", "kikkar", 4.095000000000000E+01, "kg", "M", "1.0"));
          mass.Add("kirat",   new UBASE("Egyptian", "kirat", 1.755000000000000E-03, "kg", "M", "1.0"));
          mass.Add("maan",   new UBASE("Egyptian", "maan", 8.500000000000000E-04, "kg", "M", "1.0"));
          mass.Add("mine",   new UBASE("Egyptian", "mine", 8.190000000000000E-01, "kg", "M", "1.0"));
          mass.Add("miskal",   new UBASE("Egyptian", "miskal", 1.123200000000000E-01, "kg", "M", "1.0"));
          mass.Add("obol",   new UBASE("Egyptian", "obol", 6.825000000000000E-04, "kg", "M", "1.0"));
          mass.Add("oke",   new UBASE("Egyptian", "oke", 1.248000000000000E+00, "kg", "M", "1.0"));
          mass.Add("okieh",   new UBASE("Egyptian", "okieh", 3.369600000000000E-01, "kg", "M", "1.0"));
          mass.Add("rotoli",   new UBASE("Egyptian", "rotoli", 4.492800000000000E-01, "kg", "M", "1.0"));
          mass.Add("sep",   new UBASE("Egyptian", "sep", 1.365000000000000E-03, "kg", "M", "1.0"));
          mass.Add("sicles",   new UBASE("Egyptian", "sicles", 1.365000000000000E-02, "kg", "M", "1.0"));
          mass.Add("talent",   new UBASE("Egyptian", "talent", 4.095000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("ardeb",   new UBASE("Egyptian", "ardeb", 1.980000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("daribah",   new UBASE("Egyptian", "daribah", 1.584000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("keddah",   new UBASE("Egyptian", "keddah", 2.062500000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("keila",   new UBASE("Egyptian", "keila", 1.650000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("khanoubah",   new UBASE("Egyptian", "khanoubah", 1.289062500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kirat",   new UBASE("Egyptian", "kirat", 6.445312500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("maloua",   new UBASE("Egyptian", "maloua", 4.125000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("nisf-keddah",   new UBASE("Egyptian", "nisf-keddah", 1.031250000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("rob",   new UBASE("Egyptian", "rob", 8.250000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("robbah",   new UBASE("Egyptian", "robbah", 5.156250000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("toumnah",   new UBASE("Egyptian", "toumnah", 2.578125000000000E-04, "m3", "L3", "1.0"));
          dry.Add("apt",   new UBASE("Egyptian", "apt", 8.500000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("artabe",   new UBASE("Egyptian", "artabe", 5.100000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("hecte",   new UBASE("Egyptian", "hecte", 2.125000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("keramion",   new UBASE("Egyptian", "keramion", 3.400000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("khar",   new UBASE("Egyptian", "khar", 3.400000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("letech",   new UBASE("Egyptian", "letech", 1.434375000000000E-01, "m3", "L3", "1.0"));
          dry.Add("man",   new UBASE("Egyptian", "man", 8.500000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("meterte-of-heron",   new UBASE("Egyptian", "meterte-of-heron", 4.250000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("mine",   new UBASE("Egyptian", "mine", 8.500000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("outen",   new UBASE("Egyptian", "outen", 2.125000000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Egyptian",   new BaseSystem("Egyptian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit33()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cubi",   new UBASE("Eritrean", "cubi", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("derah",   new UBASE("Eritrean", "derah", 4.600000000000000E-01, "m", "L", "1.0"));
          length.Add("emmet",   new UBASE("Eritrean", "emmet", 4.600000000000000E-01, "m", "L", "1.0"));
          area.Add("square-cubi",   new UBASE("Eritrean", "square-cubi", 1.024000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("gisla",   new UBASE("Eritrean", "gisla", 1.630720000000000E+02, "kg", "M", "1.0"));
          mass.Add("okia",   new UBASE("Eritrean", "okia", 2.800000000000000E-02, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Eritrean", "rottolo", 4.480000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("cabaho",   new UBASE("Eritrean", "cabaho", 6.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("entelam",   new UBASE("Eritrean", "entelam", 1.920000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("ghebeta",   new UBASE("Eritrean", "ghebeta", 2.400000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("messe",   new UBASE("Eritrean", "messe", 1.500000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("tanica",   new UBASE("Eritrean", "tanica", 1.800000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-cubi",   new UBASE("Eritrean", "cubic-cubi", 3.276800000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Eritrean",   new BaseSystem("Eritrean", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit34()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("arshine",   new UBASE("Estonian", "arshine", 3.071120000000000E+01, "m", "L", "1.0"));
          length.Add("elle",   new UBASE("Estonian", "elle", 9.871457142857140E+00, "m", "L", "1.0"));
          length.Add("faden",   new UBASE("Estonian", "faden", 9.213360000000000E+01, "m", "L", "1.0"));
          length.Add("foute",   new UBASE("Estonian", "foute", 1.316194285714290E+01, "m", "L", "1.0"));
          area.Add("lofstelle(Livonian)",   new UBASE("Estonian", "lofstelle(Livonian)", 3.710000000000000E+03, "m2", "L2", "1.0"));
          area.Add("lofstelle(Reval)",   new UBASE("Estonian", "lofstelle(Reval)", 1.855000000000000E+03, "m2", "L2", "1.0"));
          area.Add("tondeland",   new UBASE("Estonian", "tondeland", 5.462700000000000E+03, "m2", "L2", "1.0"));
          area.Add("tonnland(Livonian)",   new UBASE("Estonian", "tonnland(Livonian)", 5.194000000000000E+03, "m2", "L2", "1.0"));
          area.Add("tonnland(Reval)",   new UBASE("Estonian", "tonnland(Reval)", 5.462700000000000E+03, "m2", "L2", "1.0"));
          mass.Add("centner",   new UBASE("Estonian", "centner", 5.520000000000000E+01, "kg", "M", "1.0"));
          mass.Add("liespfund",   new UBASE("Estonian", "liespfund", 9.200000000000000E+00, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Estonian", "loth", 1.437500000000000E-02, "kg", "M", "1.0"));
          mass.Add("pfund",   new UBASE("Estonian", "pfund", 4.600000000000000E-01, "kg", "M", "1.0"));
          mass.Add("quent",   new UBASE("Estonian", "quent", 3.593750000000000E-03, "kg", "M", "1.0"));
          mass.Add("schiffspfund",   new UBASE("Estonian", "schiffspfund", 1.840000000000000E+02, "kg", "M", "1.0"));
          mass.Add("ton",   new UBASE("Estonian", "ton", 1.104000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("hulmit",   new UBASE("Estonian", "hulmit", 1.148000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("kulimet",   new UBASE("Estonian", "kulimet", 1.150161280000000E-02, "m3", "L3", "1.0"));
          liquid.Add("lof-(Livonian)",   new UBASE("Estonian", "lof-(Livonian)", 6.888000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("lof-(Reval)",   new UBASE("Estonian", "lof-(Reval)", 3.444000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("tonne",   new UBASE("Estonian", "tonne", 1.377600000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-elle",   new UBASE("Estonian", "cubic-elle", 9.619307168929790E+02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Estonian", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Estonian", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          _map.Add("Estonian",   new BaseSystem("Estonian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit35()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("gat",   new UBASE("Ethiopian", "gat", 8.000000000000000E-02, "m", "L", "1.0"));
          length.Add("kend",   new UBASE("Ethiopian", "kend", 4.900000000000000E-01, "m", "L", "1.0"));
          length.Add("sintzer",   new UBASE("Ethiopian", "sintzer", 1.600000000000000E-01, "m", "L", "1.0"));
          length.Add("tat",   new UBASE("Ethiopian", "tat", 2.500000000000000E-02, "m", "L", "1.0"));
          area.Add("square-kend",   new UBASE("Ethiopian", "square-kend", 2.401000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("alada",   new UBASE("Ethiopian", "alada", 1.560000000000000E-02, "kg", "M", "1.0"));
          mass.Add("farasula(coffee)",   new UBASE("Ethiopian", "farasula(coffee)", 1.684800000000000E+01, "kg", "M", "1.0"));
          mass.Add("farasula(ivory)",   new UBASE("Ethiopian", "farasula(ivory)", 1.347840000000000E+01, "kg", "M", "1.0"));
          mass.Add("farasula(rubber)",   new UBASE("Ethiopian", "farasula(rubber)", 1.797120000000000E+01, "kg", "M", "1.0"));
          mass.Add("kasm",   new UBASE("Ethiopian", "kasm", 3.900000000000000E-03, "kg", "M", "1.0"));
          mass.Add("mutagalla",   new UBASE("Ethiopian", "mutagalla", 7.800000000000000E-03, "kg", "M", "1.0"));
          mass.Add("neter",   new UBASE("Ethiopian", "neter", 3.360000000000000E-01, "kg", "M", "1.0"));
          mass.Add("wogiet",   new UBASE("Ethiopian", "wogiet", 3.120000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("kuba",   new UBASE("Ethiopian", "kuba", 1.016000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("madega",   new UBASE("Ethiopian", "madega", 4.400000000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Ethiopian",   new BaseSystem("Ethiopian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit36()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("jalka",   new UBASE("Finnish", "jalka", 2.969000000000000E-01, "m", "L", "1.0"));
          length.Add("kyynara",   new UBASE("Finnish", "kyynara", 5.938000000000000E-01, "m", "L", "1.0"));
          length.Add("linja",   new UBASE("Finnish", "linja", 2.061805555555560E-03, "m", "L", "1.0"));
          length.Add("paivamatka",   new UBASE("Finnish", "paivamatka", 2.137680000000000E+04, "m", "L", "1.0"));
          length.Add("peninkulma(new)",   new UBASE("Finnish", "peninkulma(new)", 1.068840000000000E+04, "m", "L", "1.0"));
          length.Add("peninkulma(old)",   new UBASE("Finnish", "peninkulma(old)", 5.999755200000000E+03, "m", "L", "1.0"));
          length.Add("ruotsinvirsta",   new UBASE("Finnish", "ruotsinvirsta", 2.672100000000000E+03, "m", "L", "1.0"));
          length.Add("syli",   new UBASE("Finnish", "syli", 1.781400000000000E+00, "m", "L", "1.0"));
          length.Add("tuuma",   new UBASE("Finnish", "tuuma", 2.474166666666670E-02, "m", "L", "1.0"));
          length.Add("vaaksa",   new UBASE("Finnish", "vaaksa", 1.484500000000000E-01, "m", "L", "1.0"));
          length.Add("vakomitta",   new UBASE("Finnish", "vakomitta", 2.137680000000000E+02, "m", "L", "1.0"));
          length.Add("virsta",   new UBASE("Finnish", "virsta", 1.068840000000000E+03, "m", "L", "1.0"));
          area.Add("kannunala",   new UBASE("Finnish", "kannunala", 8.814961000000000E+01, "m2", "L2", "1.0"));
          area.Add("kapanala",   new UBASE("Finnish", "kapanala", 1.542618175000000E+02, "m2", "L2", "1.0"));
          area.Add("panninala",   new UBASE("Finnish", "panninala", 2.468189080000000E+03, "m2", "L2", "1.0"));
          area.Add("tynnyrinala",   new UBASE("Finnish", "tynnyrinala", 4.936378160000000E+03, "m2", "L2", "1.0"));
          mass.Add("kippunta",   new UBASE("Finnish", "kippunta", 1.700318809600000E+02, "kg", "M", "1.0"));
          mass.Add("kvintiini",   new UBASE("Finnish", "kvintiini", 3.320935175000000E-03, "kg", "M", "1.0"));
          mass.Add("leiviska",   new UBASE("Finnish", "leiviska", 8.501594048000000E+00, "kg", "M", "1.0"));
          mass.Add("luoti",   new UBASE("Finnish", "luoti", 1.328374070000000E-02, "kg", "M", "1.0"));
          mass.Add("markka",   new UBASE("Finnish", "markka", 2.125398512000000E-01, "kg", "M", "1.0"));
          mass.Add("naula",   new UBASE("Finnish", "naula", 4.250797024000000E-01, "kg", "M", "1.0"));
          mass.Add("sentneri",   new UBASE("Finnish", "sentneri", 4.250797024000000E+01, "kg", "M", "1.0"));
          mass.Add("unssi",   new UBASE("Finnish", "unssi", 2.656748140000000E-02, "kg", "M", "1.0"));
          liquid.Add("ankkuri",   new UBASE("Finnish", "ankkuri", 3.925742881350000E-02, "m3", "L3", "1.0"));
          liquid.Add("jumpru",   new UBASE("Finnish", "jumpru", 8.178631002812500E-05, "m3", "L3", "1.0"));
          liquid.Add("kannor",   new UBASE("Finnish", "kannor", 2.595079365079360E-03, "m3", "L3", "1.0"));
          liquid.Add("kannu",   new UBASE("Finnish", "kannu", 2.617161920900000E-03, "m3", "L3", "1.0"));
          liquid.Add("kappa",   new UBASE("Finnish", "kappa", 5.234323841800000E-03, "m3", "L3", "1.0"));
          liquid.Add("kortteli",   new UBASE("Finnish", "kortteli", 3.271452401125000E-04, "m3", "L3", "1.0"));
          liquid.Add("lasti",   new UBASE("Finnish", "lasti", 1.507485266438400E+00, "m3", "L3", "1.0"));
          liquid.Add("ottingar",   new UBASE("Finnish", "ottingar", 1.557047619047620E-02, "m3", "L3", "1.0"));
          liquid.Add("sextingar",   new UBASE("Finnish", "sextingar", 7.785238095238100E-03, "m3", "L3", "1.0"));
          liquid.Add("tunna",   new UBASE("Finnish", "tunna", 1.634900000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tuoppi",   new UBASE("Finnish", "tuoppi", 1.308580960450000E-03, "m3", "L3", "1.0"));
          liquid.Add("tynnyri",   new UBASE("Finnish", "tynnyri", 1.256237722032000E-01, "m3", "L3", "1.0"));
          dry.Add("jumpru",   new UBASE("Finnish", "jumpru", 8.296250000000000E-05, "m3", "L3", "1.0"));
          dry.Add("kannu",   new UBASE("Finnish", "kannu", 2.654800000000000E-03, "m3", "L3", "1.0"));
          dry.Add("kappa",   new UBASE("Finnish", "kappa", 5.309600000000000E-03, "m3", "L3", "1.0"));
          dry.Add("kortteli",   new UBASE("Finnish", "kortteli", 3.318500000000000E-04, "m3", "L3", "1.0"));
          dry.Add("lasti",   new UBASE("Finnish", "lasti", 2.038886400000000E+00, "m3", "L3", "1.0"));
          dry.Add("nelikko",   new UBASE("Finnish", "nelikko", 4.247680000000000E-02, "m3", "L3", "1.0"));
          dry.Add("panni",   new UBASE("Finnish", "panni", 8.495360000000000E-02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Finnish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Finnish", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("tuoppi",   new UBASE("Finnish", "tuoppi", 1.327400000000000E-03, "m3", "L3", "1.0"));
          dry.Add("tynnyri",   new UBASE("Finnish", "tynnyri", 1.699072000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Finnish",   new BaseSystem("Finnish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit37()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("foot",   new UBASE("FPS", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("ft",   new UBASE("FPS", "ft", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("FPS", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("FPS", "inch", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("in",   new UBASE("FPS", "in", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("inches",   new UBASE("FPS", "inches", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("FPS", "yard", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yd",   new UBASE("FPS", "yd", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yards",   new UBASE("FPS", "yards", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("FPS", "mile", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mi",   new UBASE("FPS", "mi", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("FPS", "miles", 1.609344000000000E+03, "m", "L", "1.0"));
          area.Add("square-foot",   new UBASE("FPS", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("ft2",   new UBASE("FPS", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("sq-ft",   new UBASE("FPS", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("FPS", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-inch",   new UBASE("FPS", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("in2",   new UBASE("FPS", "in2", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("sq-in",   new UBASE("FPS", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-inches",   new UBASE("FPS", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-yard",   new UBASE("FPS", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("yd2",   new UBASE("FPS", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("sq-yd",   new UBASE("FPS", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("square-yards",   new UBASE("FPS", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("square-mile",   new UBASE("FPS", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("mi2",   new UBASE("FPS", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi",   new UBASE("FPS", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-miles",   new UBASE("FPS", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0"));
          mass.Add("geepound",   new UBASE("FPS", "geepound", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("FPS", "pound", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb",   new UBASE("FPS", "lb", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pounds",   new UBASE("FPS", "pounds", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("ounce",   new UBASE("FPS", "ounce", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("oz",   new UBASE("FPS", "oz", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("ounces",   new UBASE("FPS", "ounces", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("pound-mass",   new UBASE("FPS", "pound-mass", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(WMA1963)",   new UBASE("FPS", "pound(WMA1963)", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(1963)",   new UBASE("FPS", "lb(1963)", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("USMB",   new UBASE("FPS", "USMB", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("slinch",   new UBASE("FPS", "slinch", 1.751268352464760E+02, "kg", "M", "1.0"));
          mass.Add("slug",   new UBASE("FPS", "slug", 1.459390293720640E+01, "kg", "M", "1.0"));
          liquid.Add("gallon",   new UBASE("FPS", "gallon", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gal",   new UBASE("FPS", "gal", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallons",   new UBASE("FPS", "gallons", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("FPS", "quart", 9.463529460000000E-04, "m3", "L3", "1.0"));
          liquid.Add("qt",   new UBASE("FPS", "qt", 9.463529460000000E-04, "m3", "L3", "1.0"));
          liquid.Add("quarts",   new UBASE("FPS", "quarts", 9.463529460000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("FPS", "pint", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pt",   new UBASE("FPS", "pt", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pints",   new UBASE("FPS", "pints", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cup",   new UBASE("FPS", "cup", 2.365882365000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cups",   new UBASE("FPS", "cups", 2.365882365000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("FPS", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("ft3",   new UBASE("FPS", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cu-ft",   new UBASE("FPS", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-feet",   new UBASE("FPS", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-inch",   new UBASE("FPS", "cubic-inch", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("in3",   new UBASE("FPS", "in3", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cu-in",   new UBASE("FPS", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-inches",   new UBASE("FPS", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-yard",   new UBASE("FPS", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("yd3",   new UBASE("FPS", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cu-yd",   new UBASE("FPS", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-yards",   new UBASE("FPS", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-mile",   new UBASE("FPS", "cubic-mile", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("mi3",   new UBASE("FPS", "mi3", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cu-mi",   new UBASE("FPS", "cu-mi", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cubic-miles",   new UBASE("FPS", "cubic-miles", 4.168181825440580E+09, "m3", "L3", "1.0"));
          _map.Add("FPS",   new BaseSystem("FPS", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit38()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("agate",   new UBASE("French", "agate", 2.067843509085650E-03, "m", "L", "1.0"));
          length.Add("agate(old)",   new UBASE("French", "agate(old)", 1.933567956547620E-03, "m", "L", "1.0"));
          length.Add("arpent",   new UBASE("French", "arpent", 7.146467167400000E+01, "m", "L", "1.0"));
          length.Add("arpent(metric)",   new UBASE("French", "arpent(metric)", 5.847109500600000E+01, "m", "L", "1.0"));
          length.Add("arpent(commun)",   new UBASE("French", "arpent(commun)", 4.472135955000000E+02, "m", "L", "1.0"));
          length.Add("arpent(ordinaire)",   new UBASE("French", "arpent(ordinaire)", 6.496788334000000E+01, "m", "L", "1.0"));
          length.Add("aune",   new UBASE("French", "aune", 6.496788334000000E-01, "m", "L", "1.0"));
          length.Add("bourgeois",   new UBASE("French", "bourgeois", 3.175000000000000E-03, "m", "L", "1.0"));
          length.Add("brasse",   new UBASE("French", "brasse", 1.624197083500000E+00, "m", "L", "1.0"));
          length.Add("brevier",   new UBASE("French", "brevier", 2.822222222222220E-03, "m", "L", "1.0"));
          length.Add("brilliant",   new UBASE("French", "brilliant", 1.234722222222220E-03, "m", "L", "1.0"));
          length.Add("canne",   new UBASE("French", "canne", 1.968500000000000E+00, "m", "L", "1.0"));
          length.Add("canon",   new UBASE("French", "canon", 1.693333333333330E-02, "m", "L", "1.0"));
          length.Add("cicero",   new UBASE("French", "cicero", 4.511658565277780E-03, "m", "L", "1.0"));
          length.Add("coudee(de-Paris)",   new UBASE("French", "coudee(de-Paris)", 4.872591250500000E-01, "m", "L", "1.0"));
          length.Add("encablure",   new UBASE("French", "encablure", 1.949036500200000E+02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("French", "foot", 3.248394167000000E-01, "m", "L", "1.0"));
          length.Add("gaillarde",   new UBASE("French", "gaillarde", 3.007772376860000E-03, "m", "L", "1.0"));
          length.Add("lieue(des-Postes)",   new UBASE("French", "lieue(des-Postes)", 4.287880300440000E+03, "m", "L", "1.0"));
          length.Add("lieue(Anjou)",   new UBASE("French", "lieue(Anjou)", 4.581000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Artois)",   new UBASE("French", "lieue(Artois)", 3.964000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Beauce)",   new UBASE("French", "lieue(Beauce)", 3.268000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Bourbonnais)",   new UBASE("French", "lieue(Bourbonnais)", 4.826000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Bourgogne)",   new UBASE("French", "lieue(Bourgogne)", 5.121000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Bretagne)",   new UBASE("French", "lieue(Bretagne)", 4.581000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(de-20-aue-degre)",   new UBASE("French", "lieue(de-20-aue-degre)", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(de-25-aue-degre)",   new UBASE("French", "lieue(de-25-aue-degre)", 4.445000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(deParis)",   new UBASE("French", "lieue(deParis)", 3.898073000400000E+03, "m", "L", "1.0"));
          length.Add("lieue(Gascogne)",   new UBASE("French", "lieue(Gascogne)", 5.849000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Gatinais)",   new UBASE("French", "lieue(Gatinais)", 3.268000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Maine)",   new UBASE("French", "lieue(Maine)", 3.964000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(marine)",   new UBASE("French", "lieue(marine)", 5.564900000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(mean)",   new UBASE("French", "lieue(mean)", 5.008400000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(metric)",   new UBASE("French", "lieue(metric)", 4.000000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(nautical)",   new UBASE("French", "lieue(nautical)", 5.847109500600000E+03, "m", "L", "1.0"));
          length.Add("lieue(Poitou)",   new UBASE("French", "lieue(Poitou)", 3.964000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Provence)",   new UBASE("French", "lieue(Provence)", 5.849000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(Sologne-et-Touraine)",   new UBASE("French", "lieue(Sologne-et-Touraine)", 3.933000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(vieille)",   new UBASE("French", "lieue(vieille)", 4.451900000000000E+03, "m", "L", "1.0"));
          length.Add("lieue(ancienne)",   new UBASE("French", "lieue(ancienne)", 3.248394167000000E+03, "m", "L", "1.0"));
          length.Add("lieue(tarifaire)",   new UBASE("French", "lieue(tarifaire)", 4.677687600480000E+03, "m", "L", "1.0"));
          length.Add("ligne",   new UBASE("French", "ligne", 2.255829282638890E-03, "m", "L", "1.0"));
          length.Add("ligne(metric)",   new UBASE("French", "ligne(metric)", 2.314814814814810E-03, "m", "L", "1.0"));
          length.Add("mignonette",   new UBASE("French", "mignonette", 2.443815056192130E-03, "m", "L", "1.0"));
          length.Add("mignonne",   new UBASE("French", "mignonne", 2.631800829745370E-03, "m", "L", "1.0"));
          length.Add("mille-marin",   new UBASE("French", "mille-marin", 1.949036500200000E+03, "m", "L", "1.0"));
          length.Add("nonpareil",   new UBASE("French", "nonpareil", 2.116666666666670E-03, "m", "L", "1.0"));
          length.Add("pan",   new UBASE("French", "pan", 2.460625000000000E-01, "m", "L", "1.0"));
          length.Add("pas(de-Paris)",   new UBASE("French", "pas(de-Paris)", 6.240000000000000E-01, "m", "L", "1.0"));
          length.Add("pas(geographique)",   new UBASE("French", "pas(geographique)", 1.624197083500000E+00, "m", "L", "1.0"));
          length.Add("perche(du-roi)",   new UBASE("French", "perche(du-roi)", 5.847109500600000E+00, "m", "L", "1.0"));
          length.Add("perche(Eaux-et-Forets)",   new UBASE("French", "perche(Eaux-et-Forets)", 7.146467167400000E+00, "m", "L", "1.0"));
          length.Add("perche(ordinaire)",   new UBASE("French", "perche(ordinaire)", 6.496788334000000E+00, "m", "L", "1.0"));
          length.Add("perche-d'arpent",   new UBASE("French", "perche-d'arpent", 7.146467167400000E+00, "m", "L", "1.0"));
          length.Add("petit-romain",   new UBASE("French", "petit-romain", 3.383743923967500E-03, "m", "L", "1.0"));
          length.Add("petit-texte",   new UBASE("French", "petit-texte", 2.819786603306250E-03, "m", "L", "1.0"));
          length.Add("philosophla",   new UBASE("French", "philosophla", 4.135687018182500E-03, "m", "L", "1.0"));
          length.Add("pied(commum)",   new UBASE("French", "pied(commum)", 2.236067977500000E-01, "m", "L", "1.0"));
          length.Add("pied(d'Ordonance)",   new UBASE("French", "pied(d'Ordonance)", 3.248400000000000E-01, "m", "L", "1.0"));
          length.Add("pied(du-roi)",   new UBASE("French", "pied(du-roi)", 3.248394167000000E-01, "m", "L", "1.0"));
          length.Add("pied(metric)",   new UBASE("French", "pied(metric)", 3.333333333333330E-01, "m", "L", "1.0"));
          length.Add("point",   new UBASE("French", "point", 1.879857735532410E-04, "m", "L", "1.0"));
          length.Add("point(Berthold)",   new UBASE("French", "point(Berthold)", 3.759398496240600E-04, "m", "L", "1.0"));
          length.Add("point(Didot)",   new UBASE("French", "point(Didot)", 3.759715471075000E-04, "m", "L", "1.0"));
          length.Add("point(Fournier)",   new UBASE("French", "point(Fournier)", 3.446405848476080E-04, "m", "L", "1.0"));
          length.Add("point(IN)",   new UBASE("French", "point(IN)", 3.987700000000000E-04, "m", "L", "1.0"));
          length.Add("point(metric)",   new UBASE("French", "point(metric)", 3.750000000000000E-04, "m", "L", "1.0"));
          length.Add("point(Truchet)",   new UBASE("French", "point(Truchet)", 1.880000000000000E-04, "m", "L", "1.0"));
          length.Add("pouce",   new UBASE("French", "pouce", 2.706995139166670E-02, "m", "L", "1.0"));
          length.Add("pouce(metric)",   new UBASE("French", "pouce(metric)", 2.777777777777780E-02, "m", "L", "1.0"));
          length.Add("quinxe-seize(de-Paris)",   new UBASE("French", "quinxe-seize(de-Paris)", 1.827221718937500E+00, "m", "L", "1.0"));
          length.Add("ruby(old)",   new UBASE("French", "ruby(old)", 1.814285714285710E-03, "m", "L", "1.0"));
          length.Add("toise(de-Perou)",   new UBASE("French", "toise(de-Perou)", 1.949036500200000E+00, "m", "L", "1.0"));
          length.Add("toise(d'ordonance)",   new UBASE("French", "toise(d'ordonance)", 1.949040000000000E+00, "m", "L", "1.0"));
          length.Add("toise(du-Chatelet)",   new UBASE("French", "toise(du-Chatelet)", 1.949090000000000E+00, "m", "L", "1.0"));
          length.Add("toise(metric)",   new UBASE("French", "toise(metric)", 2.000000000000000E+00, "m", "L", "1.0"));
          area.Add("are",   new UBASE("French", "are", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("a",   new UBASE("French", "a", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("arpent",   new UBASE("French", "arpent", 3.418868951200680E+03, "m2", "L2", "1.0"));
          area.Add("arpent(carre-du-roi)",   new UBASE("French", "arpent(carre-du-roi)", 3.418868951200680E+03, "m2", "L2", "1.0"));
          area.Add("arpent(carre-ordinaire)",   new UBASE("French", "arpent(carre-ordinaire)", 4.220825865679850E+03, "m2", "L2", "1.0"));
          area.Add("arpent(carre)",   new UBASE("French", "arpent(carre)", 5.107199297472620E+03, "m2", "L2", "1.0"));
          area.Add("arpent(de-Paris)",   new UBASE("French", "arpent(de-Paris)", 3.418868951200680E+03, "m2", "L2", "1.0"));
          area.Add("arpent(Eaux-et-Forets)",   new UBASE("French", "arpent(Eaux-et-Forets)", 5.107199297472620E+03, "m2", "L2", "1.0"));
          area.Add("arpent(ordinaire-metric)",   new UBASE("French", "arpent(ordinaire-metric)", 4.225000000000000E+03, "m2", "L2", "1.0"));
          area.Add("becheree",   new UBASE("French", "becheree", 1.367000000000000E+03, "m2", "L2", "1.0"));
          area.Add("boisselee(Nantes)",   new UBASE("French", "boisselee(Nantes)", 3.561333333333330E+02, "m2", "L2", "1.0"));
          area.Add("boisselee(Versailles)",   new UBASE("French", "boisselee(Versailles)", 6.250000000000000E+02, "m2", "L2", "1.0"));
          area.Add("canne-carree",   new UBASE("French", "canne-carree", 3.874992250000000E+00, "m2", "L2", "1.0"));
          area.Add("carteree",   new UBASE("French", "carteree", 7.290000000000000E+03, "m2", "L2", "1.0"));
          area.Add("carton(Montpellier)",   new UBASE("French", "carton(Montpellier)", 7.200000000000000E+02, "m2", "L2", "1.0"));
          area.Add("cartonnee(Haute-Loire)",   new UBASE("French", "cartonnee(Haute-Loire)", 8.333333333333330E+02, "m2", "L2", "1.0"));
          area.Add("cartonnet(Agen)",   new UBASE("French", "cartonnet(Agen)", 1.215000000000000E+03, "m2", "L2", "1.0"));
          area.Add("corterade(Montpellier)",   new UBASE("French", "corterade(Montpellier)", 2.877000000000000E+03, "m2", "L2", "1.0"));
          area.Add("cosse(Provence)",   new UBASE("French", "cosse(Provence)", 3.900000000000000E+01, "m2", "L2", "1.0"));
          area.Add("dextres(Montpellier)",   new UBASE("French", "dextres(Montpellier)", 1.920000000000000E+01, "m2", "L2", "1.0"));
          area.Add("eminee(Provence)",   new UBASE("French", "eminee(Provence)", 7.750000000000000E+02, "m2", "L2", "1.0"));
          area.Add("exots(Agen)",   new UBASE("French", "exots(Agen)", 1.687500000000000E+01, "m2", "L2", "1.0"));
          area.Add("hectare",   new UBASE("French", "hectare", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("hommee(Nantes)",   new UBASE("French", "hommee(Nantes)", 4.451666666666670E+02, "m2", "L2", "1.0"));
          area.Add("journal",   new UBASE("French", "journal", 4.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("journal(Bretagne)",   new UBASE("French", "journal(Bretagne)", 4.863000000000000E+03, "m2", "L2", "1.0"));
          area.Add("journal(Lyonnais)",   new UBASE("French", "journal(Lyonnais)", 4.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("journal(Nantes)",   new UBASE("French", "journal(Nantes)", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("journeau",   new UBASE("French", "journeau", 4.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("journee",   new UBASE("French", "journee", 4.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("latte",   new UBASE("French", "latte", 4.050000000000000E+02, "m2", "L2", "1.0"));
          area.Add("metairee",   new UBASE("French", "metairee", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("minee(Versailles)",   new UBASE("French", "minee(Versailles)", 2.500000000000000E+03, "m2", "L2", "1.0"));
          area.Add("minotee(Versailles)",   new UBASE("French", "minotee(Versailles)", 1.250000000000000E+03, "m2", "L2", "1.0"));
          area.Add("oeuvree",   new UBASE("French", "oeuvree", 6.700000000000000E+02, "m2", "L2", "1.0"));
          area.Add("pan-carre",   new UBASE("French", "pan-carre", 6.054675390625000E-02, "m2", "L2", "1.0"));
          area.Add("panal",   new UBASE("French", "panal", 6.250000000000000E+02, "m2", "L2", "1.0"));
          area.Add("perche(d'arpentcarree)",   new UBASE("French", "perche(d'arpentcarree)", 5.107199297472620E+01, "m2", "L2", "1.0"));
          area.Add("perche(deParis)",   new UBASE("French", "perche(deParis)", 3.418868951200680E+01, "m2", "L2", "1.0"));
          area.Add("perche(du-roi-carree)",   new UBASE("French", "perche(du-roi-carree)", 3.418868951200680E+01, "m2", "L2", "1.0"));
          area.Add("perche(Eaux-et-Forets)",   new UBASE("French", "perche(Eaux-et-Forets)", 5.107199297472620E+01, "m2", "L2", "1.0"));
          area.Add("perche(ordinaire)",   new UBASE("French", "perche(ordinaire)", 4.220825865679850E+01, "m2", "L2", "1.0"));
          area.Add("perche(Versailles)",   new UBASE("French", "perche(Versailles)", 5.000000000000000E+01, "m2", "L2", "1.0"));
          area.Add("pied-carre",   new UBASE("French", "pied-carre", 1.055206466419960E-01, "m2", "L2", "1.0"));
          area.Add("poignere",   new UBASE("French", "poignere", 1.333333333333330E+03, "m2", "L2", "1.0"));
          area.Add("rege(ble)",   new UBASE("French", "rege(ble)", 6.666666666666670E+01, "m2", "L2", "1.0"));
          area.Add("rege(vigne)",   new UBASE("French", "rege(vigne)", 8.000000000000000E+01, "m2", "L2", "1.0"));
          area.Add("salmee",   new UBASE("French", "salmee", 6.200000000000000E+03, "m2", "L2", "1.0"));
          area.Add("secton",   new UBASE("French", "secton", 2.837000000000000E+03, "m2", "L2", "1.0"));
          area.Add("seteree",   new UBASE("French", "seteree", 1.440000000000000E+03, "m2", "L2", "1.0"));
          area.Add("square-league(metric)",   new UBASE("French", "square-league(metric)", 1.600000000000000E+07, "m2", "L2", "1.0"));
          area.Add("sq-lg(metric)",   new UBASE("French", "sq-lg(metric)", 1.600000000000000E+07, "m2", "L2", "1.0"));
          area.Add("toise-carree",   new UBASE("French", "toise-carree", 3.798743279111860E+00, "m2", "L2", "1.0"));
          area.Add("vergee",   new UBASE("French", "vergee", 1.276799824368150E+03, "m2", "L2", "1.0"));
          area.Add("vergee(du-roi)",   new UBASE("French", "vergee(du-roi)", 8.547172378001690E+02, "m2", "L2", "1.0"));
          area.Add("vergee(ordinaire)",   new UBASE("French", "vergee(ordinaire)", 1.055206466419960E+03, "m2", "L2", "1.0"));
          mass.Add("decitonne",   new UBASE("French", "decitonne", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("denier(de-Charlemagne)",   new UBASE("French", "denier(de-Charlemagne)", 1.529700000000000E-03, "kg", "M", "1.0"));
          mass.Add("denier(de-Paris)",   new UBASE("French", "denier(de-Paris)", 1.274754817708330E-03, "kg", "M", "1.0"));
          mass.Add("denier(metric)",   new UBASE("French", "denier(metric)", 1.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("grain(de-Charlemange)",   new UBASE("French", "grain(de-Charlemange)", 6.373750000000000E-05, "kg", "M", "1.0"));
          mass.Add("grain(de-Paris)",   new UBASE("French", "grain(de-Paris)", 5.311478407118060E-05, "kg", "M", "1.0"));
          mass.Add("grain(metric)",   new UBASE("French", "grain(metric)", 1.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("gros(de-Paris)",   new UBASE("French", "gros(de-Paris)", 3.824264453125000E-03, "kg", "M", "1.0"));
          mass.Add("gros(metric)",   new UBASE("French", "gros(metric)", 1.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("livre(de-Charlemagne)",   new UBASE("French", "livre(de-Charlemagne)", 3.671280000000000E-01, "kg", "M", "1.0"));
          mass.Add("livre(de-Paris-metric)",   new UBASE("French", "livre(de-Paris-metric)", 4.895058500000000E-01, "kg", "M", "1.0"));
          mass.Add("livre(de-Paris)",   new UBASE("French", "livre(de-Paris)", 4.895058500000000E-01, "kg", "M", "1.0"));
          mass.Add("livre(metric)",   new UBASE("French", "livre(metric)", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("lot(deParis)",   new UBASE("French", "lot(deParis)", 1.529705781250000E-02, "kg", "M", "1.0"));
          mass.Add("marc(de-Paris)",   new UBASE("French", "marc(de-Paris)", 2.447529250000000E-01, "kg", "M", "1.0"));
          mass.Add("millier(de-Paris)",   new UBASE("French", "millier(de-Paris)", 4.895058500000000E+02, "kg", "M", "1.0"));
          mass.Add("millier(metric)",   new UBASE("French", "millier(metric)", 1.000000000000000E+03, "kg", "M", "1.0"));
          mass.Add("obole(de-Charlemagne)",   new UBASE("French", "obole(de-Charlemagne)", 7.648500000000000E-04, "kg", "M", "1.0"));
          mass.Add("once(de-Paris)",   new UBASE("French", "once(de-Paris)", 3.059411562500000E-02, "kg", "M", "1.0"));
          mass.Add("once(metric)",   new UBASE("French", "once(metric)", 1.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("quarteron(de-Paris)",   new UBASE("French", "quarteron(de-Paris)", 1.223764625000000E-01, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("French", "quintal", 4.895058500000000E+01, "kg", "M", "1.0"));
          mass.Add("q",   new UBASE("French", "q", 4.895058500000000E+01, "kg", "M", "1.0"));
          mass.Add("quintal(metric)",   new UBASE("French", "quintal(metric)", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("q(metric)",   new UBASE("French", "q(metric)", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("sac(charcoal)",   new UBASE("French", "sac(charcoal)", 5.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("sol(de-Charlemagne)",   new UBASE("French", "sol(de-Charlemagne)", 1.835640000000000E-02, "kg", "M", "1.0"));
          mass.Add("tonneau-de-mer",   new UBASE("French", "tonneau-de-mer", 9.790117000000000E+02, "kg", "M", "1.0"));
          liquid.Add("balthazar",   new UBASE("French", "balthazar", 1.212291200000000E-02, "m3", "L3", "1.0"));
          liquid.Add("barral",   new UBASE("French", "barral", 3.678800000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bouteille-champenoise",   new UBASE("French", "bouteille-champenoise", 7.576820000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cade",   new UBASE("French", "cade", 1.904292516950000E-03, "m3", "L3", "1.0"));
          liquid.Add("chopine(de-Paris)",   new UBASE("French", "chopine(de-Paris)", 4.760731292375000E-04, "m3", "L3", "1.0"));
          liquid.Add("chopine(Provence-wine)",   new UBASE("French", "chopine(Provence-wine)", 2.299250000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("demiard(de-Paris)",   new UBASE("French", "demiard(de-Paris)", 2.380365646187500E-04, "m3", "L3", "1.0"));
          liquid.Add("demi-posson",   new UBASE("French", "demi-posson", 1.190182823093750E-04, "m3", "L3", "1.0"));
          liquid.Add("demi-setier",   new UBASE("French", "demi-setier", 2.380365646187500E-04, "m3", "L3", "1.0"));
          liquid.Add("feuillette(de-Paris)",   new UBASE("French", "feuillette(de-Paris)", 1.371090612204000E-01, "m3", "L3", "1.0"));
          liquid.Add("liter(old)",   new UBASE("French", "liter(old)", 1.000002800100000E-03, "m3", "L3", "1.0"));
          liquid.Add("jeroboam",   new UBASE("French", "jeroboam", 3.030728000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("jigger",   new UBASE("French", "jigger", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("magnum",   new UBASE("French", "magnum", 1.515364000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("mathusalem",   new UBASE("French", "mathusalem", 6.819138000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("methuselah",   new UBASE("French", "methuselah", 6.819138000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("muid(de-Paris)",   new UBASE("French", "muid(de-Paris)", 2.742181224408000E-01, "m3", "L3", "1.0"));
          liquid.Add("nabuchodonosor",   new UBASE("French", "nabuchodonosor", 1.515364000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("nabuchadnezzar",   new UBASE("French", "nabuchadnezzar", 1.515364000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("pied-cube",   new UBASE("French", "pied-cube", 3.427726530510000E-02, "m3", "L3", "1.0"));
          liquid.Add("pinte(deParis)",   new UBASE("French", "pinte(deParis)", 9.521462584750000E-04, "m3", "L3", "1.0"));
          liquid.Add("pinte(wine)",   new UBASE("French", "pinte(wine)", 4.598500000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("French", "pipe", 4.113271836612000E-01, "m3", "L3", "1.0"));
          liquid.Add("posson(de-Paris)",   new UBASE("French", "posson(de-Paris)", 1.190182823093750E-04, "m3", "L3", "1.0"));
          liquid.Add("pot(de-Paris)",   new UBASE("French", "pot(de-Paris)", 1.904292516950000E-03, "m3", "L3", "1.0"));
          liquid.Add("pot(Provence)",   new UBASE("French", "pot(Provence)", 9.197000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("potiche-de-mercure",   new UBASE("French", "potiche-de-mercure", 3.447302012000000E+01, "m3", "L3", "1.0"));
          liquid.Add("pouce-cube",   new UBASE("French", "pouce-cube", 1.983638038489580E-05, "m3", "L3", "1.0"));
          liquid.Add("quade(de-Paris)",   new UBASE("French", "quade(de-Paris)", 1.904292516950000E-03, "m3", "L3", "1.0"));
          liquid.Add("quarteau",   new UBASE("French", "quarteau", 6.855453061020000E-02, "m3", "L3", "1.0"));
          liquid.Add("quartaut(de-Paris)",   new UBASE("French", "quartaut(de-Paris)", 6.855453061020000E-02, "m3", "L3", "1.0"));
          liquid.Add("rehoboam",   new UBASE("French", "rehoboam", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("reputed-quart",   new UBASE("French", "reputed-quart", 7.576820000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("roquille(de-Paris)",   new UBASE("French", "roquille(de-Paris)", 2.975457057734380E-05, "m3", "L3", "1.0"));
          liquid.Add("salmanazar",   new UBASE("French", "salmanazar", 9.092184000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("salmarazd",   new UBASE("French", "salmarazd", 9.092184000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("salomon",   new UBASE("French", "salomon", 1.818436800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("solomon",   new UBASE("French", "solomon", 1.818436800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("tonneau",   new UBASE("French", "tonneau", 2.742181224408000E-01, "m3", "L3", "1.0"));
          liquid.Add("velte(de-Paris)",   new UBASE("French", "velte(de-Paris)", 7.617170067800000E-03, "m3", "L3", "1.0"));
          dry.Add("boisseau",   new UBASE("French", "boisseau", 1.250000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("boisseau(de-Paris)",   new UBASE("French", "boisseau(de-Paris)", 1.264000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("canne-cube",   new UBASE("French", "canne-cube", 7.627922244125000E+00, "m3", "L3", "1.0"));
          dry.Add("litron(de-Paris)",   new UBASE("French", "litron(de-Paris)", 7.900000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("mine(de-Paris)",   new UBASE("French", "mine(de-Paris)", 7.584000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("minot(de-Paris)",   new UBASE("French", "minot(de-Paris)", 3.792000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("muid(de-Paris)",   new UBASE("French", "muid(de-Paris)", 1.820160000000000E+00, "m3", "L3", "1.0"));
          dry.Add("pan-cube",   new UBASE("French", "pan-cube", 1.489828563305660E-02, "m3", "L3", "1.0"));
          dry.Add("picotins",   new UBASE("French", "picotins", 3.125000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("piece",   new UBASE("French", "piece", 2.250000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("quart(de-Paris}",   new UBASE("French", "quart(de-Paris}", 3.160000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("setier(de-Paris)",   new UBASE("French", "setier(de-Paris)", 1.516800000000000E-01, "m3", "L3", "1.0"));
          dry.Add("solive(de-Paris)",   new UBASE("French", "solive(de-Paris)", 1.028317959149790E-01, "m3", "L3", "1.0"));
          dry.Add("stere",   new UBASE("French", "stere", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("tonneau-de-jauge",   new UBASE("French", "tonneau-de-jauge", 2.831684659200000E+00, "m3", "L3", "1.0"));
          dry.Add("tonneau-de-mer",   new UBASE("French", "tonneau-de-mer", 1.415842329600000E-02, "m3", "L3", "1.0"));
          dry.Add("voie(de-Paris)",   new UBASE("French", "voie(de-Paris)", 1.919526857079600E+00, "m3", "L3", "1.0"));
          _map.Add("French",   new BaseSystem("French", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit39()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("elle",   new UBASE("German", "elle", 6.669461250000000E-01, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("German", "foot", 3.138570000000000E-01, "m", "L", "1.0"));
          length.Add("fuss",   new UBASE("German", "fuss", 3.138570000000000E-01, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("German", "inch", 2.615475000000000E-02, "m", "L", "1.0"));
          length.Add("klafter",   new UBASE("German", "klafter", 1.883142000000000E+00, "m", "L", "1.0"));
          length.Add("lachter",   new UBASE("German", "lachter", 1.977299100000000E+00, "m", "L", "1.0"));
          length.Add("line",   new UBASE("German", "line", 2.179562500000000E-03, "m", "L", "1.0"));
          length.Add("linie",   new UBASE("German", "linie", 2.179562500000000E-03, "m", "L", "1.0"));
          length.Add("meile",   new UBASE("German", "meile", 7.532568000000000E+03, "m", "L", "1.0"));
          length.Add("meile(Baden)",   new UBASE("German", "meile(Baden)", 8.889000000000000E+03, "m", "L", "1.0"));
          length.Add("meile(Baltic)",   new UBASE("German", "meile(Baltic)", 7.467500000000000E+03, "m", "L", "1.0"));
          length.Add("meile(Bayern)",   new UBASE("German", "meile(Bayern)", 7.420438000000000E+03, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("German", "mile", 7.532568000000000E+03, "m", "L", "1.0"));
          length.Add("punkt",   new UBASE("German", "punkt", 1.816302083333330E-04, "m", "L", "1.0"));
          length.Add("ruthe",   new UBASE("German", "ruthe", 3.766284000000000E+00, "m", "L", "1.0"));
          length.Add("wegstunde",   new UBASE("German", "wegstunde", 3.766284000000000E+03, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("German", "yard", 3.766284000000000E+00, "m", "L", "1.0"));
          area.Add("joch",   new UBASE("German", "joch", 5.760081338300000E+03, "m2", "L2", "1.0"));
          area.Add("klafter",   new UBASE("German", "klafter", 1.440020334575000E+02, "m2", "L2", "1.0"));
          area.Add("morgen",   new UBASE("German", "morgen", 2.553281130358080E+03, "m2", "L2", "1.0"));
          mass.Add("doppelzentner",   new UBASE("German", "doppelzentner", 1.028964200000000E+02, "kg", "M", "1.0"));
          mass.Add("gran",   new UBASE("German", "gran", 6.089986979166670E-05, "kg", "M", "1.0"));
          mass.Add("hyl",   new UBASE("German", "hyl", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("kommerzlast",   new UBASE("German", "kommerzlast", 3.000000000000000E+03, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("German", "loth", 1.461596875000000E-02, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("German", "mark", 2.338555000000000E-01, "kg", "M", "1.0"));
          mass.Add("metric-slug",   new UBASE("German", "metric-slug", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("mug",   new UBASE("German", "mug", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("par",   new UBASE("German", "par", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("pfennig",   new UBASE("German", "pfennig", 9.134980468750000E-04, "kg", "M", "1.0"));
          mass.Add("pfund",   new UBASE("German", "pfund", 4.677110000000000E-01, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("German", "pound", 4.677110000000000E-01, "kg", "M", "1.0"));
          mass.Add("quentchen",   new UBASE("German", "quentchen", 4.871989583333330E-03, "kg", "M", "1.0"));
          mass.Add("quint",   new UBASE("German", "quint", 3.653992187500000E-03, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("German", "quintal", 5.144821000000000E+01, "kg", "M", "1.0"));
          mass.Add("schiffspfund",   new UBASE("German", "schiffspfund", 1.543446300000000E+02, "kg", "M", "1.0"));
          mass.Add("stein",   new UBASE("German", "stein", 1.028964200000000E+01, "kg", "M", "1.0"));
          mass.Add("techma",   new UBASE("German", "techma", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("TMS",   new UBASE("German", "TMS", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("unze",   new UBASE("German", "unze", 2.923193750000000E-02, "kg", "M", "1.0"));
          mass.Add("zentner",   new UBASE("German", "zentner", 5.144821000000000E+01, "kg", "M", "1.0"));
          mass.Add("zollpfund",   new UBASE("German", "zollpfund", 5.144821000000000E-01, "kg", "M", "1.0"));
          liquid.Add("ahm",   new UBASE("German", "ahm", 3.435207286225980E-01, "m3", "L3", "1.0"));
          liquid.Add("anker",   new UBASE("German", "anker", 3.435207286225980E-02, "m3", "L3", "1.0"));
          liquid.Add("eimer",   new UBASE("German", "eimer", 6.870414572451950E-02, "m3", "L3", "1.0"));
          liquid.Add("fuder",   new UBASE("German", "fuder", 8.244497486942350E-01, "m3", "L3", "1.0"));
          liquid.Add("halbnoseln",   new UBASE("German", "halbnoseln", 5.367511384728090E-04, "m3", "L3", "1.0"));
          liquid.Add("kannen",   new UBASE("German", "kannen", 4.294009107782470E-03, "m3", "L3", "1.0"));
          liquid.Add("nosel",   new UBASE("German", "nosel", 1.073502276945620E-03, "m3", "L3", "1.0"));
          liquid.Add("ohm",   new UBASE("German", "ohm", 1.374082914490390E-01, "m3", "L3", "1.0"));
          liquid.Add("oxhoft",   new UBASE("German", "oxhoft", 2.061124371735590E-01, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("German", "quart", 1.145069095408660E-03, "m3", "L3", "1.0"));
          liquid.Add("quartiers",   new UBASE("German", "quartiers", 2.147004553891240E-03, "m3", "L3", "1.0"));
          liquid.Add("stauf",   new UBASE("German", "stauf", 8.588018215564940E-03, "m3", "L3", "1.0"));
          liquid.Add("stubchen",   new UBASE("German", "stubchen", 8.588018215564940E-03, "m3", "L3", "1.0"));
          liquid.Add("viertel",   new UBASE("German", "viertel", 1.717603643112990E-02, "m3", "L3", "1.0"));
          liquid.Add("viertelnoseln",   new UBASE("German", "viertelnoseln", 2.683755692364040E-04, "m3", "L3", "1.0"));
          dry.Add("dreissiger",   new UBASE("German", "dreissiger", 1.158112500000000E-03, "m3", "L3", "1.0"));
          dry.Add("massel",   new UBASE("German", "massel", 4.632450000000000E-03, "m3", "L3", "1.0"));
          dry.Add("metze",   new UBASE("German", "metze", 3.435890000000000E-03, "m3", "L3", "1.0"));
          dry.Add("metzen",   new UBASE("German", "metzen", 3.705960000000000E-02, "m3", "L3", "1.0"));
          dry.Add("quart",   new UBASE("German", "quart", 1.145296666666670E-03, "m3", "L3", "1.0"));
          dry.Add("scheffel",   new UBASE("German", "scheffel", 2.223576000000000E-01, "m3", "L3", "1.0"));
          _map.Add("German",   new BaseSystem("German", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit40()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("amma(nautical)",   new UBASE("Greek", "amma(nautical)", 2.100000000000000E+01, "m", "L", "1.0"));
          length.Add("piki(long)",   new UBASE("Greek", "piki(long)", 6.690000000000000E-01, "m", "L", "1.0"));
          length.Add("piki(mansonry)",   new UBASE("Greek", "piki(mansonry)", 7.500000000000000E-01, "m", "L", "1.0"));
          length.Add("piki(short)",   new UBASE("Greek", "piki(short)", 6.480000000000000E-01, "m", "L", "1.0"));
          area.Add("stremma",   new UBASE("Greek", "stremma", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("stremma(royal)",   new UBASE("Greek", "stremma(royal)", 1.270000000000000E+03, "m2", "L2", "1.0"));
          mass.Add("dramme",   new UBASE("Greek", "dramme", 3.276800000000000E-03, "kg", "M", "1.0"));
          mass.Add("mina",   new UBASE("Greek", "mina", 1.536000000000000E+00, "kg", "M", "1.0"));
          mass.Add("oka",   new UBASE("Greek", "oka", 1.280000000000000E+00, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Greek", "pound", 5.120000000000000E-01, "kg", "M", "1.0"));
          mass.Add("stater",   new UBASE("Greek", "stater", 5.120000000000000E+01, "kg", "M", "1.0"));
          mass.Add("talaton",   new UBASE("Greek", "talaton", 1.536000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("baril",   new UBASE("Greek", "baril", 7.423600000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("oka",   new UBASE("Greek", "oka", 1.336500000000000E-03, "m3", "L3", "1.0"));
          dry.Add("sexte",   new UBASE("Greek", "sexte", 5.400000000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Greek",   new BaseSystem("Greek", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit41()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cuarta",   new UBASE("Guatemalan", "cuarta", 2.089750000000000E-01, "m", "L", "1.0"));
          length.Add("mecate",   new UBASE("Guatemalan", "mecate", 2.006160000000000E+01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Guatemalan", "pulgada", 2.321944444444440E-02, "m", "L", "1.0"));
          length.Add("tercia",   new UBASE("Guatemalan", "tercia", 2.786333333333330E-01, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Guatemalan", "vara", 8.359000000000000E-01, "m", "L", "1.0"));
          area.Add("caballiera",   new UBASE("Guatemalan", "caballiera", 4.471864384000000E+05, "m2", "L2", "1.0"));
          area.Add("manzana",   new UBASE("Guatemalan", "manzana", 6.987288100000000E+03, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Guatemalan", "square-vara", 6.987288100000000E-01, "m2", "L2", "1.0"));
          mass.Add("caja",   new UBASE("Guatemalan", "caja", 1.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Guatemalan", "carga", 1.610000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fanega",   new UBASE("Guatemalan", "fanega", 9.200000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("botella",   new UBASE("Guatemalan", "botella", 6.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cajuella",   new UBASE("Guatemalan", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Guatemalan", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Guatemalan", "cubic-vara", 5.840674122790000E-01, "m3", "L3", "1.0"));
          _map.Add("Guatemalan",   new BaseSystem("Guatemalan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit42()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("jacktan",   new UBASE("Guinean", "jacktan", 3.657969333333330E+00, "m", "L", "1.0"));
          length.Add("jaktan",   new UBASE("Guinean", "jaktan", 3.657969333333330E+00, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Guinean", "pic", 5.780000000000000E-01, "m", "L", "1.0"));
          length.Add("pick",   new UBASE("Guinean", "pick", 2.356400000000000E-01, "m", "L", "1.0"));
          area.Add("square-pic",   new UBASE("Guinean", "square-pic", 3.340840000000000E-01, "m2", "L2", "1.0"));
          mass.Add("aguirage",   new UBASE("Guinean", "aguirage", 4.012500000000000E-03, "kg", "M", "1.0"));
          mass.Add("akey",   new UBASE("Guinean", "akey", 1.337500000000000E-03, "kg", "M", "1.0"));
          mass.Add("benda",   new UBASE("Guinean", "benda", 6.420000000000000E-02, "kg", "M", "1.0"));
          mass.Add("eggaba",   new UBASE("Guinean", "eggaba", 2.140000000000000E-02, "kg", "M", "1.0"));
          mass.Add("gammell",   new UBASE("Guinean", "gammell", 1.953991200000000E+02, "kg", "M", "1.0"));
          mass.Add("kantar",   new UBASE("Guinean", "kantar", 9.769956000000000E+02, "kg", "M", "1.0"));
          mass.Add("mediatabla",   new UBASE("Guinean", "mediatabla", 2.006250000000000E-03, "kg", "M", "1.0"));
          mass.Add("offa",   new UBASE("Guinean", "offa", 3.210000000000000E-02, "kg", "M", "1.0"));
          mass.Add("piso",   new UBASE("Guinean", "piso", 8.025000000000000E-03, "kg", "M", "1.0"));
          mass.Add("quinto",   new UBASE("Guinean", "quinto", 6.018750000000000E-03, "kg", "M", "1.0"));
          mass.Add("seron",   new UBASE("Guinean", "seron", 1.203750000000000E-02, "kg", "M", "1.0"));
          mass.Add("uzan",   new UBASE("Guinean", "uzan", 8.025000000000000E-03, "kg", "M", "1.0"));
          liquid.Add("cubic-pic",   new UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3", "L3", "1.0"));
          _map.Add("Guinean",   new BaseSystem("Guinean", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit43()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("aune",   new UBASE("Haitian", "aune", 1.188000000000000E-01, "m", "L", "1.0"));
          length.Add("toise",   new UBASE("Haitian", "toise", 1.948800000000000E+00, "m", "L", "1.0"));
          area.Add("carreau",   new UBASE("Haitian", "carreau", 1.292300000000000E+03, "m2", "L2", "1.0"));
          mass.Add("gwo-mamit",   new UBASE("Haitian", "gwo-mamit", 1.700000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("baril",   new UBASE("Haitian", "baril", 1.000000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("corde",   new UBASE("Haitian", "corde", 3.840000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("toise-cube",   new UBASE("Haitian", "toise-cube", 8.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-toise",   new UBASE("Haitian", "cubic-toise", 7.401194422272000E+00, "m3", "L3", "1.0"));
          _map.Add("Haitian",   new BaseSystem("Haitian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit44()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("amah",   new UBASE("Hebrew", "amah", 5.550000000000000E-01, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("Hebrew", "cubit", 5.550000000000000E-01, "m", "L", "1.0"));
          length.Add("cubit(sacred)",   new UBASE("Hebrew", "cubit(sacred)", 6.400000000000000E-01, "m", "L", "1.0"));
          length.Add("derekh-yom",   new UBASE("Hebrew", "derekh-yom", 4.440000000000000E+04, "m", "L", "1.0"));
          length.Add("ell",   new UBASE("Hebrew", "ell", 5.550000000000000E-01, "m", "L", "1.0"));
          length.Add("etzba",   new UBASE("Hebrew", "etzba", 2.312500000000000E-02, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Hebrew", "finger", 2.312500000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Hebrew", "foot", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("hasit",   new UBASE("Hebrew", "hasit", 1.850000000000000E-01, "m", "L", "1.0"));
          length.Add("mil",   new UBASE("Hebrew", "mil", 1.110000000000000E+03, "m", "L", "1.0"));
          length.Add("palm",   new UBASE("Hebrew", "palm", 9.250000000000000E-02, "m", "L", "1.0"));
          length.Add("parasa",   new UBASE("Hebrew", "parasa", 4.440000000000000E+03, "m", "L", "1.0"));
          length.Add("pesiah",   new UBASE("Hebrew", "pesiah", 5.550000000000000E-01, "m", "L", "1.0"));
          length.Add("ris",   new UBASE("Hebrew", "ris", 1.480000000000000E+02, "m", "L", "1.0"));
          length.Add("tefach",   new UBASE("Hebrew", "tefach", 9.250000000000000E-02, "m", "L", "1.0"));
          length.Add("zeret",   new UBASE("Hebrew", "zeret", 2.775000000000000E-01, "m", "L", "1.0"));
          length.Add("zereth",   new UBASE("Hebrew", "zereth", 2.775000000000000E-01, "m", "L", "1.0"));
          area.Add("adashah",   new UBASE("Hebrew", "adashah", 3.490658503988660E-05, "m2", "L2", "1.0"));
          area.Add("amah-al-amah",   new UBASE("Hebrew", "amah-al-amah", 3.080250000000000E-01, "m2", "L2", "1.0"));
          area.Add("beit-kor",   new UBASE("Hebrew", "beit-kor", 2.300022675000000E+04, "m2", "L2", "1.0"));
          area.Add("beit-rova",   new UBASE("Hebrew", "beit-rova", 3.395975625000000E+01, "m2", "L2", "1.0"));
          area.Add("beit-seah",   new UBASE("Hebrew", "beit-seah", 7.022970000000000E+02, "m2", "L2", "1.0"));
          area.Add("geris",   new UBASE("Hebrew", "geris", 3.141592653589790E-04, "m2", "L2", "1.0"));
          area.Add("searah",   new UBASE("Hebrew", "searah", 8.726646259971650E-06, "m2", "L2", "1.0"));
          mass.Add("bekah",   new UBASE("Hebrew", "bekah", 7.083333333333330E-03, "kg", "M", "1.0"));
          mass.Add("gerah",   new UBASE("Hebrew", "gerah", 7.083333333333330E-04, "kg", "M", "1.0"));
          mass.Add("kikkar",   new UBASE("Hebrew", "kikkar", 5.100480000000000E+01, "kg", "M", "1.0"));
          mass.Add("kikkar(sacred)",   new UBASE("Hebrew", "kikkar(sacred)", 5.100000000000000E+01, "kg", "M", "1.0"));
          mass.Add("litra",   new UBASE("Hebrew", "litra", 8.500800000000000E-01, "kg", "M", "1.0"));
          mass.Add("litra(sacred)",   new UBASE("Hebrew", "litra(sacred)", 8.500000000000000E-01, "kg", "M", "1.0"));
          mass.Add("mehah",   new UBASE("Hebrew", "mehah", 5.903333333333330E-04, "kg", "M", "1.0"));
          mass.Add("mina",   new UBASE("Hebrew", "mina", 3.542000000000000E-01, "kg", "M", "1.0"));
          mass.Add("mina(sacred)",   new UBASE("Hebrew", "mina(sacred)", 8.500000000000000E-01, "kg", "M", "1.0"));
          mass.Add("obol",   new UBASE("Hebrew", "obol", 5.903333333333330E-04, "kg", "M", "1.0"));
          mass.Add("pondiuscule",   new UBASE("Hebrew", "pondiuscule", 2.951666666666670E-04, "kg", "M", "1.0"));
          mass.Add("rabah(sacred)",   new UBASE("Hebrew", "rabah(sacred)", 3.541666666666670E-03, "kg", "M", "1.0"));
          mass.Add("shekel",   new UBASE("Hebrew", "shekel", 1.416800000000000E-02, "kg", "M", "1.0"));
          mass.Add("shekel(sacred)",   new UBASE("Hebrew", "shekel(sacred)", 1.416666666666670E-02, "kg", "M", "1.0"));
          mass.Add("talent",   new UBASE("Hebrew", "talent", 2.125200000000000E+01, "kg", "M", "1.0"));
          mass.Add("talent-of-moses(sacred)",   new UBASE("Hebrew", "talent-of-moses(sacred)", 4.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("zuzah",   new UBASE("Hebrew", "zuzah", 3.542000000000000E-03, "kg", "M", "1.0"));
          liquid.Add("bath(new)",   new UBASE("Hebrew", "bath(new)", 2.142000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bath(old)",   new UBASE("Hebrew", "bath(old)", 2.937600000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("hin",   new UBASE("Hebrew", "hin", 3.570000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("beitza",   new UBASE("Hebrew", "beitza", 1.296319444444440E-03, "m3", "L3", "1.0"));
          dry.Add("cab",   new UBASE("Hebrew", "cab", 1.190000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cor",   new UBASE("Hebrew", "cor", 2.142000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("ephah(new)",   new UBASE("Hebrew", "ephah(new)", 2.142000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("ephah(old)",   new UBASE("Hebrew", "ephah(old)", 2.937600000000000E-02, "m3", "L3", "1.0"));
          dry.Add("gomor",   new UBASE("Hebrew", "gomor", 2.142000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("homer",   new UBASE("Hebrew", "homer", 1.320000000000000E+02, "m3", "L3", "1.0"));
          dry.Add("kab",   new UBASE("Hebrew", "kab", 1.190000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("kezayit",   new UBASE("Hebrew", "kezayit", 1.087920966702880E-26, "m3", "L3", "1.0"));
          dry.Add("kor",   new UBASE("Hebrew", "kor", 2.142000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("lethek",   new UBASE("Hebrew", "lethek", 9.459000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("log",   new UBASE("Hebrew", "log", 2.975000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("modius",   new UBASE("Hebrew", "modius", 6.426000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("omer",   new UBASE("Hebrew", "omer", 9.806650000000000E+03, "m3", "L3", "1.0"));
          dry.Add("sath",   new UBASE("Hebrew", "sath", 6.426000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("seah",   new UBASE("Hebrew", "seah", 2.787091200000000E-01, "m3", "L3", "1.0"));
          _map.Add("Hebrew",   new BaseSystem("Hebrew", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit45()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cuarta",   new UBASE("Honduran", "cuarta", 2.032000000000000E-01, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Honduran", "legua", 4.064000000000000E+03, "m", "L", "1.0"));
          length.Add("mecate",   new UBASE("Honduran", "mecate", 1.950720000000000E+01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Honduran", "pulgada", 2.257777777777780E-02, "m", "L", "1.0"));
          length.Add("tercia",   new UBASE("Honduran", "tercia", 2.709333333333330E-01, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Honduran", "vara", 8.128000000000000E-01, "m", "L", "1.0"));
          area.Add("caballiera",   new UBASE("Honduran", "caballiera", 4.228120576000000E+05, "m2", "L2", "1.0"));
          area.Add("labor",   new UBASE("Honduran", "labor", 6.606438400000000E+05, "m2", "L2", "1.0"));
          area.Add("legua",   new UBASE("Honduran", "legua", 1.651609600000000E+07, "m2", "L2", "1.0"));
          area.Add("manzana",   new UBASE("Honduran", "manzana", 6.606438400000000E+04, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Honduran", "square-vara", 6.606438400000000E-01, "m2", "L2", "1.0"));
          mass.Add("caja",   new UBASE("Honduran", "caja", 1.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Honduran", "carga", 1.610000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fanega",   new UBASE("Honduran", "fanega", 9.200000000000000E+01, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Honduran", "quintal", 4.600000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("almude",   new UBASE("Honduran", "almude", 2.031250000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("botella",   new UBASE("Honduran", "botella", 6.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cajuella",   new UBASE("Honduran", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Honduran", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("fanega",   new UBASE("Honduran", "fanega", 2.437500000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("octavillos",   new UBASE("Honduran", "octavillos", 1.269531250000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Honduran", "cubic-vara", 5.369713131520000E-01, "m3", "L3", "1.0"));
          _map.Add("Honduran",   new BaseSystem("Honduran", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit46()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("arasz",   new UBASE("Hungarian", "arasz", 1.975500000000000E-01, "m", "L", "1.0"));
          length.Add("arsin",   new UBASE("Hungarian", "arsin", 5.844753388560000E-01, "m", "L", "1.0"));
          length.Add("faust",   new UBASE("Hungarian", "faust", 1.053600000000000E-01, "m", "L", "1.0"));
          length.Add("huvelyk",   new UBASE("Hungarian", "huvelyk", 2.634000000000000E-02, "m", "L", "1.0"));
          length.Add("kettoslepes",   new UBASE("Hungarian", "kettoslepes", 1.896480000000000E+00, "m", "L", "1.0"));
          length.Add("lab",   new UBASE("Hungarian", "lab", 3.160800000000000E-01, "m", "L", "1.0"));
          length.Add("lepes",   new UBASE("Hungarian", "lepes", 9.482400000000000E-01, "m", "L", "1.0"));
          length.Add("marok",   new UBASE("Hungarian", "marok", 1.053600000000000E-01, "m", "L", "1.0"));
          length.Add("meile",   new UBASE("Hungarian", "meile", 8.353599300000000E+03, "m", "L", "1.0"));
          length.Add("merfold",   new UBASE("Hungarian", "merfold", 8.353599300000000E+03, "m", "L", "1.0"));
          length.Add("mertfold",   new UBASE("Hungarian", "mertfold", 8.353599300000000E+03, "m", "L", "1.0"));
          length.Add("ol",   new UBASE("Hungarian", "ol", 3.160800000000000E+00, "m", "L", "1.0"));
          length.Add("rof",   new UBASE("Hungarian", "rof", 6.321600000000000E-01, "m", "L", "1.0"));
          length.Add("rud",   new UBASE("Hungarian", "rud", 6.321600000000000E+00, "m", "L", "1.0"));
          length.Add("stab",   new UBASE("Hungarian", "stab", 1.580400000000000E+00, "m", "L", "1.0"));
          length.Add("tenyer",   new UBASE("Hungarian", "tenyer", 7.902000000000000E-02, "m", "L", "1.0"));
          length.Add("ujj",   new UBASE("Hungarian", "ujj", 1.975500000000000E-02, "m", "L", "1.0"));
          area.Add("hold",   new UBASE("Hungarian", "hold", 4.316000067103950E+03, "m2", "L2", "1.0"));
          area.Add("joch",   new UBASE("Hungarian", "joch", 4.316000067103950E+03, "m2", "L2", "1.0"));
          area.Add("square-meile",   new UBASE("Hungarian", "square-meile", 6.978262126496050E+07, "m2", "L2", "1.0"));
          area.Add("square-mertfold",   new UBASE("Hungarian", "square-mertfold", 6.978262126496050E+07, "m2", "L2", "1.0"));
          mass.Add("oka",   new UBASE("Hungarian", "oka", 1.329479142678000E+00, "kg", "M", "1.0"));
          liquid.Add("ako",   new UBASE("Hungarian", "ako", 6.244500000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("eimer",   new UBASE("Hungarian", "eimer", 5.430000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("fass",   new UBASE("Hungarian", "fass", 1.989009000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("halbe",   new UBASE("Hungarian", "halbe", 8.484375000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("itcze",   new UBASE("Hungarian", "itcze", 8.484375000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("metzen",   new UBASE("Hungarian", "metzen", 6.244500000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-faust",   new UBASE("Hungarian", "cubic-faust", 1.169572870656000E-03, "m3", "L3", "1.0"));
          _map.Add("Hungarian",   new BaseSystem("Hungarian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit47()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("alin",   new UBASE("Icelandic", "alin", 6.277140000000000E-01, "m", "L", "1.0"));
          length.Add("faomur",   new UBASE("Icelandic", "faomur", 1.883142000000000E+00, "m", "L", "1.0"));
          length.Add("fet",   new UBASE("Icelandic", "fet", 3.138570000000000E-01, "m", "L", "1.0"));
          length.Add("lina",   new UBASE("Icelandic", "lina", 2.179562500000000E-03, "m", "L", "1.0"));
          length.Add("mila-alandi",   new UBASE("Icelandic", "mila-alandi", 7.532568000000000E+03, "m", "L", "1.0"));
          length.Add("pingmannaleio",   new UBASE("Icelandic", "pingmannaleio", 3.766284000000000E+04, "m", "L", "1.0"));
          length.Add("pumlungur",   new UBASE("Icelandic", "pumlungur", 2.615475000000000E-02, "m", "L", "1.0"));
          area.Add("engjateigur",   new UBASE("Icelandic", "engjateigur", 5.673958067462400E+03, "m2", "L2", "1.0"));
          area.Add("feralin",   new UBASE("Icelandic", "feralin", 3.940248657960000E-01, "m2", "L2", "1.0"));
          area.Add("ferfaomur",   new UBASE("Icelandic", "ferfaomur", 3.546223792164000E+00, "m2", "L2", "1.0"));
          area.Add("ferfet",   new UBASE("Icelandic", "ferfet", 9.850621644900000E-02, "m2", "L2", "1.0"));
          area.Add("fermila",   new UBASE("Icelandic", "fermila", 5.673958067462400E+06, "m2", "L2", "1.0"));
          area.Add("ferpumlungur",   new UBASE("Icelandic", "ferpumlungur", 6.840709475625000E-04, "m2", "L2", "1.0"));
          area.Add("tundagslatta",   new UBASE("Icelandic", "tundagslatta", 3.191601412947600E+03, "m2", "L2", "1.0"));
          mass.Add("batt",   new UBASE("Icelandic", "batt", 1.600000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fierding",   new UBASE("Icelandic", "fierding", 2.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("liespund",   new UBASE("Icelandic", "liespund", 3.200000000000000E+01, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("Icelandic", "mark", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("pund",   new UBASE("Icelandic", "pund", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("skippund",   new UBASE("Icelandic", "skippund", 1.600000000000000E+02, "kg", "M", "1.0"));
          mass.Add("tunna-smjors",   new UBASE("Icelandic", "tunna-smjors", 1.120000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fisk",   new UBASE("Icelandic", "fisk", 4.000000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("cubic-fet",   new UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3", "L3", "1.0"));
          dry.Add("almen-tunna",   new UBASE("Icelandic", "almen-tunna", 1.159382459101270E-01, "m3", "L3", "1.0"));
          dry.Add("anker",   new UBASE("Icelandic", "anker", 3.864608197004220E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-fet",   new UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3", "L3", "1.0"));
          dry.Add("kornskeppa",   new UBASE("Icelandic", "kornskeppa", 1.739073688651900E-02, "m3", "L3", "1.0"));
          dry.Add("korntunna",   new UBASE("Icelandic", "korntunna", 1.391258950921520E-01, "m3", "L3", "1.0"));
          dry.Add("oltunna",   new UBASE("Icelandic", "oltunna", 1.313966786981440E-01, "m3", "L3", "1.0"));
          dry.Add("pottar",   new UBASE("Icelandic", "pottar", 9.661520492510560E-04, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Icelandic", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Icelandic", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          _map.Add("Icelandic",   new BaseSystem("Icelandic", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit48()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("barleycorn",   new UBASE("Imperial", "barleycorn", 8.466666666666670E-03, "m", "L", "1.0"));
          length.Add("billet",   new UBASE("Imperial", "billet", 1.016000000000000E+00, "m", "L", "1.0"));
          length.Add("bolt",   new UBASE("Imperial", "bolt", 3.657600000000000E+01, "m", "L", "1.0"));
          length.Add("calibre",   new UBASE("Imperial", "calibre", 2.540000000000000E-04, "m", "L", "1.0"));
          length.Add("cable",   new UBASE("Imperial", "cable", 1.828800000000000E+02, "m", "L", "1.0"));
          length.Add("centiinch",   new UBASE("Imperial", "centiinch", 2.540000000000000E-04, "m", "L", "1.0"));
          length.Add("chain",   new UBASE("Imperial", "chain", 2.011680000000000E+01, "m", "L", "1.0"));
          length.Add("ch",   new UBASE("Imperial", "ch", 2.011680000000000E+01, "m", "L", "1.0"));
          length.Add("cin",   new UBASE("Imperial", "cin", 2.540000000000000E-04, "m", "L", "1.0"));
          length.Add("colombian",   new UBASE("Imperial", "colombian", 5.644444444000000E-03, "m", "L", "1.0"));
          length.Add("diamond",   new UBASE("Imperial", "diamond", 1.411111111111110E-03, "m", "L", "1.0"));
          length.Add("ell",   new UBASE("Imperial", "ell", 1.143000000000000E+00, "m", "L", "1.0"));
          length.Add("english",   new UBASE("Imperial", "english", 4.938888888888890E-03, "m", "L", "1.0"));
          length.Add("excelsior",   new UBASE("Imperial", "excelsior", 1.058333333333330E-03, "m", "L", "1.0"));
          length.Add("fathom",   new UBASE("Imperial", "fathom", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("fath",   new UBASE("Imperial", "fath", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("fathoms",   new UBASE("Imperial", "fathoms", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Imperial", "finger", 1.905000000000000E-02, "m", "L", "1.0"));
          length.Add("finger-length",   new UBASE("Imperial", "finger-length", 1.143000000000000E-01, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Imperial", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("ft",   new UBASE("Imperial", "ft", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Imperial", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("furlong",   new UBASE("Imperial", "furlong", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("fur",   new UBASE("Imperial", "fur", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("furlongs",   new UBASE("Imperial", "furlongs", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("great-primer",   new UBASE("Imperial", "great-primer", 6.350000000000000E-03, "m", "L", "1.0"));
          length.Add("hand",   new UBASE("Imperial", "hand", 1.016000000000000E-01, "m", "L", "1.0"));
          length.Add("hd",   new UBASE("Imperial", "hd", 1.016000000000000E-01, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("Imperial", "inch", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("in",   new UBASE("Imperial", "in", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("inches",   new UBASE("Imperial", "inches", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("land",   new UBASE("Imperial", "land", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("league",   new UBASE("Imperial", "league", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("leag",   new UBASE("Imperial", "leag", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("leagues",   new UBASE("Imperial", "leagues", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("league(statute)",   new UBASE("Imperial", "league(statute)", 4.828032000000000E+03, "m", "L", "1.0"));
          length.Add("leag(statute)",   new UBASE("Imperial", "leag(statute)", 4.828032000000000E+03, "m", "L", "1.0"));
          length.Add("st-lg",   new UBASE("Imperial", "st-lg", 4.828032000000000E+03, "m", "L", "1.0"));
          length.Add("link",   new UBASE("Imperial", "link", 2.011680000000000E-01, "m", "L", "1.0"));
          length.Add("long-primer",   new UBASE("Imperial", "long-primer", 3.527777777777780E-03, "m", "L", "1.0"));
          length.Add("meridian",   new UBASE("Imperial", "meridian", 1.552222222222220E-02, "m", "L", "1.0"));
          length.Add("microinch",   new UBASE("Imperial", "microinch", 2.540000000000000E-08, "m", "L", "1.0"));
          length.Add("uin",   new UBASE("Imperial", "uin", 2.540000000000000E-08, "m", "L", "1.0"));
          length.Add("mil",   new UBASE("Imperial", "mil", 2.540000000000000E-05, "m", "L", "1.0"));
          length.Add("mile(geographical)",   new UBASE("Imperial", "mile(geographical)", 1.855324800000000E+03, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("Imperial", "mile", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mi",   new UBASE("Imperial", "mi", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("Imperial", "miles", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mile(telegraph)",   new UBASE("Imperial", "mile(telegraph)", 1.855317600000000E+03, "m", "L", "1.0"));
          length.Add("mi(tel)",   new UBASE("Imperial", "mi(tel)", 1.855317600000000E+03, "m", "L", "1.0"));
          length.Add("nautical-mile",   new UBASE("Imperial", "nautical-mile", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("nmi",   new UBASE("Imperial", "nmi", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("pace",   new UBASE("Imperial", "pace", 1.524000000000000E+00, "m", "L", "1.0"));
          length.Add("pearl",   new UBASE("Imperial", "pearl", 1.763888888888890E-03, "m", "L", "1.0"));
          length.Add("perch",   new UBASE("Imperial", "perch", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("pole",   new UBASE("Imperial", "pole", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("rod",   new UBASE("Imperial", "rod", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("rd",   new UBASE("Imperial", "rd", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("rods",   new UBASE("Imperial", "rods", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("small-pica",   new UBASE("Imperial", "small-pica", 3.880555555555560E-03, "m", "L", "1.0"));
          length.Add("span",   new UBASE("Imperial", "span", 2.286000000000000E-01, "m", "L", "1.0"));
          length.Add("sp",   new UBASE("Imperial", "sp", 2.286000000000000E-01, "m", "L", "1.0"));
          length.Add("stick",   new UBASE("Imperial", "stick", 5.080000000000000E-02, "m", "L", "1.0"));
          length.Add("tenthmeter",   new UBASE("Imperial", "tenthmeter", 1.000000000000000E-10, "m", "L", "1.0"));
          length.Add("A",   new UBASE("Imperial", "A", 1.000000000000000E-10, "m", "L", "1.0"));
          length.Add("thou",   new UBASE("Imperial", "thou", 2.540000000000000E-05, "m", "L", "1.0"));
          length.Add("twip",   new UBASE("Imperial", "twip", 1.763888888888890E-05, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("Imperial", "yard", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yd",   new UBASE("Imperial", "yd", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yards",   new UBASE("Imperial", "yards", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yard(WMA1963)",   new UBASE("Imperial", "yard(WMA1963)", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yd(WMA1963)",   new UBASE("Imperial", "yd(WMA1963)", 9.144000000000000E-01, "m", "L", "1.0"));
          area.Add("acre",   new UBASE("Imperial", "acre", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("acres",   new UBASE("Imperial", "acres", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("circular-inch",   new UBASE("Imperial", "circular-inch", 5.067074790974980E-04, "m2", "L2", "1.0"));
          area.Add("cin",   new UBASE("Imperial", "cin", 5.067074790974980E-04, "m2", "L2", "1.0"));
          area.Add("cir-In",   new UBASE("Imperial", "cir-In", 5.067074790974980E-04, "m2", "L2", "1.0"));
          area.Add("circular-mil",   new UBASE("Imperial", "circular-mil", 5.067074790980000E-10, "m2", "L2", "1.0"));
          area.Add("cmil",   new UBASE("Imperial", "cmil", 5.067074790980000E-10, "m2", "L2", "1.0"));
          area.Add("cir-mil",   new UBASE("Imperial", "cir-mil", 5.067074790980000E-10, "m2", "L2", "1.0"));
          area.Add("circular-mile(nautical)",   new UBASE("Imperial", "circular-mile(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0"));
          area.Add("cmi(nautical)",   new UBASE("Imperial", "cmi(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0"));
          area.Add("cir-mi(nautical)",   new UBASE("Imperial", "cir-mi(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0"));
          area.Add("circular-mile(statute)",   new UBASE("Imperial", "circular-mile(statute)", 2.034171905079120E+06, "m2", "L2", "1.0"));
          area.Add("cmi(statute)",   new UBASE("Imperial", "cmi(statute)", 2.034171905079120E+06, "m2", "L2", "1.0"));
          area.Add("cir-mi(statute)",   new UBASE("Imperial", "cir-mi(statute)", 2.034171905079120E+06, "m2", "L2", "1.0"));
          area.Add("column-inch",   new UBASE("Imperial", "column-inch", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("perch",   new UBASE("Imperial", "perch", 2.529285264000000E+01, "m2", "L2", "1.0"));
          area.Add("quarter-section",   new UBASE("Imperial", "quarter-section", 6.474970275840000E+04, "m2", "L2", "1.0"));
          area.Add("roll",   new UBASE("Imperial", "roll", 2.787091200000000E+00, "m2", "L2", "1.0"));
          area.Add("rood",   new UBASE("Imperial", "rood", 1.011714105600000E+03, "m2", "L2", "1.0"));
          area.Add("sabine",   new UBASE("Imperial", "sabine", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("section-of-land",   new UBASE("Imperial", "section-of-land", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square(Imperial)",   new UBASE("Imperial", "square(Imperial)", 9.290304000000000E+00, "m2", "L2", "1.0"));
          area.Add("sq",   new UBASE("Imperial", "sq", 9.290304000000000E+00, "m2", "L2", "1.0"));
          area.Add("square-foot",   new UBASE("Imperial", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("ft2",   new UBASE("Imperial", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("sq-ft",   new UBASE("Imperial", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("Imperial", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-league(nautical)",   new UBASE("Imperial", "square-league(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0"));
          area.Add("sq-leag(nautical)",   new UBASE("Imperial", "sq-leag(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0"));
          area.Add("square-inch",   new UBASE("Imperial", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("in2",   new UBASE("Imperial", "in2", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("sq-in",   new UBASE("Imperial", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-inches",   new UBASE("Imperial", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-league(statute)",   new UBASE("Imperial", "square-league(statute)", 2.330989299302400E+07, "m2", "L2", "1.0"));
          area.Add("sq-leag(statute)",   new UBASE("Imperial", "sq-leag(statute)", 2.330989299302400E+07, "m2", "L2", "1.0"));
          area.Add("square-miie",   new UBASE("Imperial", "square-miie", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi",   new UBASE("Imperial", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("mi2",   new UBASE("Imperial", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-miles",   new UBASE("Imperial", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-mile(geographical)",   new UBASE("Imperial", "square-mile(geographical)", 3.442230113495040E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(geo)",   new UBASE("Imperial", "sq-mi(geo)", 3.442230113495040E+06, "m2", "L2", "1.0"));
          area.Add("square-mile(statute)",   new UBASE("Imperial", "square-mile(statute)", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(statute)",   new UBASE("Imperial", "sq-mi(statute)", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-mile(telegraph)",   new UBASE("Imperial", "square-mile(telegraph)", 3.442203396869760E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(tel)",   new UBASE("Imperial", "sq-mi(tel)", 3.442203396869760E+06, "m2", "L2", "1.0"));
          area.Add("square-perch",   new UBASE("Imperial", "square-perch", 2.529285264000000E+01, "m2", "L2", "1.0"));
          area.Add("square-pole",   new UBASE("Imperial", "square-pole", 2.529285264000000E+01, "m2", "L2", "1.0"));
          area.Add("square-rod",   new UBASE("Imperial", "square-rod", 2.529285264000000E+01, "m2", "L2", "1.0"));
          area.Add("rd2",   new UBASE("Imperial", "rd2", 2.529285264000000E+01, "m2", "L2", "1.0"));
          area.Add("square-rods",   new UBASE("Imperial", "square-rods", 2.529285264000000E+01, "m2", "L2", "1.0"));
          area.Add("square-yard",   new UBASE("Imperial", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("yd2",   new UBASE("Imperial", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("sq-yd",   new UBASE("Imperial", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("square-yards",   new UBASE("Imperial", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("square-yard(WMA1963)",   new UBASE("Imperial", "square-yard(WMA1963)", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("yd2(WMA1963)",   new UBASE("Imperial", "yd2(WMA1963)", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("sq-yd(WMA1963)",   new UBASE("Imperial", "sq-yd(WMA1963)", 8.361273600000000E-01, "m2", "L2", "1.0"));
          mass.Add("blanc",   new UBASE("Imperial", "blanc", 2.170138888888890E-10, "kg", "M", "1.0"));
          mass.Add("cental",   new UBASE("Imperial", "cental", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cH",   new UBASE("Imperial", "cH", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt",   new UBASE("Imperial", "cwt", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("kin-tal",   new UBASE("Imperial", "kin-tal", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("centner",   new UBASE("Imperial", "centner", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("dram",   new UBASE("Imperial", "dram", 1.771845195312500E-03, "kg", "M", "1.0"));
          mass.Add("dr",   new UBASE("Imperial", "dr", 1.771845195312500E-03, "kg", "M", "1.0"));
          mass.Add("drachm",   new UBASE("Imperial", "drachm", 1.771845195312500E-03, "kg", "M", "1.0"));
          mass.Add("dram(apothecary)",   new UBASE("Imperial", "dram(apothecary)", 3.887934600000000E-03, "kg", "M", "1.0"));
          mass.Add("dr(ap)",   new UBASE("Imperial", "dr(ap)", 3.887934600000000E-03, "kg", "M", "1.0"));
          mass.Add("drachm(ap)",   new UBASE("Imperial", "drachm(ap)", 3.887934600000000E-03, "kg", "M", "1.0"));
          mass.Add("drachm(troy)",   new UBASE("Imperial", "drachm(troy)", 3.887934600000000E-03, "kg", "M", "1.0"));
          mass.Add("dr(troy)",   new UBASE("Imperial", "dr(troy)", 3.887934600000000E-03, "kg", "M", "1.0"));
          mass.Add("droit",   new UBASE("Imperial", "droit", 1.041666666666670E-07, "kg", "M", "1.0"));
          mass.Add("flask-of-mercury",   new UBASE("Imperial", "flask-of-mercury", 3.447302012000000E+01, "kg", "M", "1.0"));
          mass.Add("Hg-flask",   new UBASE("Imperial", "Hg-flask", 3.447302012000000E+01, "kg", "M", "1.0"));
          mass.Add("grain",   new UBASE("Imperial", "grain", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("gr",   new UBASE("Imperial", "gr", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("grain(apothecary)",   new UBASE("Imperial", "grain(apothecary)", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("gr(ap)",   new UBASE("Imperial", "gr(ap)", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("grain(troy)",   new UBASE("Imperial", "grain(troy)", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("gr(troy)",   new UBASE("Imperial", "gr(troy)", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("hundredweight",   new UBASE("Imperial", "hundredweight", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("kintal",   new UBASE("Imperial", "kintal", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("long-ton",   new UBASE("Imperial", "long-ton", 1.016046908800000E+03, "kg", "M", "1.0"));
          mass.Add("lg-ton",   new UBASE("Imperial", "lg-ton", 1.016046908800000E+03, "kg", "M", "1.0"));
          mass.Add("mite",   new UBASE("Imperial", "mite", 2.500000000000000E-06, "kg", "M", "1.0"));
          mass.Add("mounce",   new UBASE("Imperial", "mounce", 2.500000000000000E-02, "kg", "M", "1.0"));
          mass.Add("ounce",   new UBASE("Imperial", "ounce", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("oz",   new UBASE("Imperial", "oz", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("ounces",   new UBASE("Imperial", "ounces", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("ounce(apothecary)",   new UBASE("Imperial", "ounce(apothecary)", 3.110347680000000E-02, "kg", "M", "1.0"));
          mass.Add("oz(ap)",   new UBASE("Imperial", "oz(ap)", 3.110347680000000E-02, "kg", "M", "1.0"));
          mass.Add("ounce(metric)",   new UBASE("Imperial", "ounce(metric)", 2.500000000000000E-02, "kg", "M", "1.0"));
          mass.Add("oz(metric)",   new UBASE("Imperial", "oz(metric)", 2.500000000000000E-02, "kg", "M", "1.0"));
          mass.Add("ounce(troy)",   new UBASE("Imperial", "ounce(troy)", 3.110347680000000E-02, "kg", "M", "1.0"));
          mass.Add("oz(troy)",   new UBASE("Imperial", "oz(troy)", 3.110347680000000E-02, "kg", "M", "1.0"));
          mass.Add("pennyweight(troy)",   new UBASE("Imperial", "pennyweight(troy)", 1.555173840000000E-03, "kg", "M", "1.0"));
          mass.Add("dwt(troy)",   new UBASE("Imperial", "dwt(troy)", 1.555173840000000E-03, "kg", "M", "1.0"));
          mass.Add("peridot(jeweller)",   new UBASE("Imperial", "peridot(jeweller)", 5.208333333333330E-09, "kg", "M", "1.0"));
          mass.Add("point(jeweller)",   new UBASE("Imperial", "point(jeweller)", 2.000000000000000E-06, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Imperial", "pound", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb",   new UBASE("Imperial", "lb", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pounds",   new UBASE("Imperial", "pounds", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(apothecary)",   new UBASE("Imperial", "pound(apothecary)", 3.732417216000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(ap)",   new UBASE("Imperial", "lb(ap)", 3.732417216000000E-01, "kg", "M", "1.0"));
          mass.Add("la(ap)",   new UBASE("Imperial", "la(ap)", 3.732417216000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(troy)",   new UBASE("Imperial", "pound(troy)", 3.732417216000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(troy)",   new UBASE("Imperial", "lb(troy)", 3.732417216000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(WMA1963)",   new UBASE("Imperial", "pound(WMA1963)", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(WMA1963)",   new UBASE("Imperial", "lb(WMA1963)", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("USMB",   new UBASE("Imperial", "USMB", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pound-mass",   new UBASE("Imperial", "pound-mass", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("quarter",   new UBASE("Imperial", "quarter", 1.270058636000000E+01, "kg", "M", "1.0"));
          mass.Add("q",   new UBASE("Imperial", "q", 1.270058636000000E+01, "kg", "M", "1.0"));
          mass.Add("qtr",   new UBASE("Imperial", "qtr", 1.270058636000000E+01, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Imperial", "quintal", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("slug",   new UBASE("Imperial", "slug", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("slugs",   new UBASE("Imperial", "slugs", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("stone",   new UBASE("Imperial", "stone", 6.350293180000000E+00, "kg", "M", "1.0"));
          mass.Add("st",   new UBASE("Imperial", "st", 6.350293180000000E+00, "kg", "M", "1.0"));
          liquid.Add("cup",   new UBASE("Imperial", "cup", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cups",   new UBASE("Imperial", "cups", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("fluid-ounce",   new UBASE("Imperial", "fluid-ounce", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("fl-oz",   new UBASE("Imperial", "fl-oz", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("fluid-scruple",   new UBASE("Imperial", "fluid-scruple", 1.183878125000000E-06, "m3", "L3", "1.0"));
          liquid.Add("fl-s",   new UBASE("Imperial", "fl-s", 1.183878125000000E-06, "m3", "L3", "1.0"));
          liquid.Add("fluid-drachm",   new UBASE("Imperial", "fluid-drachm", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("fl-d",   new UBASE("Imperial", "fl-d", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("gallon",   new UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gal",   new UBASE("Imperial", "gal", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallons",   new UBASE("Imperial", "gallons", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gill",   new UBASE("Imperial", "gill", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("gi",   new UBASE("Imperial", "gi", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("minim",   new UBASE("Imperial", "minim", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("m",   new UBASE("Imperial", "m", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("min",   new UBASE("Imperial", "min", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("Imperial", "pint", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pt",   new UBASE("Imperial", "pt", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pints",   new UBASE("Imperial", "pints", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("Imperial", "quart", 1.136523000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("qt",   new UBASE("Imperial", "qt", 1.136523000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("quarts",   new UBASE("Imperial", "quarts", 1.136523000000000E-03, "m3", "L3", "1.0"));
          dry.Add("bank-cubic-meter",   new UBASE("Imperial", "bank-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("BCM",   new UBASE("Imperial", "BCM", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("board-foot-measure",   new UBASE("Imperial", "board-foot-measure", 2.359737216000000E-03, "m3", "L3", "1.0"));
          dry.Add("fum",   new UBASE("Imperial", "fum", 2.359737216000000E-03, "m3", "L3", "1.0"));
          dry.Add("BM",   new UBASE("Imperial", "BM", 2.359737216000000E-03, "m3", "L3", "1.0"));
          dry.Add("fbm",   new UBASE("Imperial", "fbm", 2.359737216000000E-03, "m3", "L3", "1.0"));
          dry.Add("bushel",   new UBASE("Imperial", "bushel", 3.636873600000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubem",   new UBASE("Imperial", "cubem", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cuben",   new UBASE("Imperial", "cuben", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cu-Mi",   new UBASE("Imperial", "cu-Mi", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("Imperial", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("ft3",   new UBASE("Imperial", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cu-ft",   new UBASE("Imperial", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-feet",   new UBASE("Imperial", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-inch",   new UBASE("Imperial", "cubic-inch", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("in3",   new UBASE("Imperial", "in3", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cu-in",   new UBASE("Imperial", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-inches",   new UBASE("Imperial", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-yard",   new UBASE("Imperial", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("yd3",   new UBASE("Imperial", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cu-yd",   new UBASE("Imperial", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-yards",   new UBASE("Imperial", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("forty-foot-equivalent-unit",   new UBASE("Imperial", "forty-foot-equivalent-unit", 7.249112727552000E+01, "m3", "L3", "1.0"));
          dry.Add("FEU",   new UBASE("Imperial", "FEU", 7.249112727552000E+01, "m3", "L3", "1.0"));
          dry.Add("FEQ",   new UBASE("Imperial", "FEQ", 7.249112727552000E+01, "m3", "L3", "1.0"));
          dry.Add("freight-ton",   new UBASE("Imperial", "freight-ton", 1.132673863680000E+00, "m3", "L3", "1.0"));
          dry.Add("peck",   new UBASE("Imperial", "peck", 9.092184000000000E-03, "m3", "L3", "1.0"));
          dry.Add("perche(masonry)",   new UBASE("Imperial", "perche(masonry)", 7.008419531520000E-01, "m3", "L3", "1.0"));
          dry.Add("quarter",   new UBASE("Imperial", "quarter", 2.909498880000000E-01, "m3", "L3", "1.0"));
          dry.Add("standard-cubic-foot",   new UBASE("Imperial", "standard-cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("ft3(STP)",   new UBASE("Imperial", "ft3(STP)", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("tablespoon(metric)",   new UBASE("Imperial", "tablespoon(metric)", 1.500000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("tbsp(metric)",   new UBASE("Imperial", "tbsp(metric)", 1.500000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("timber",   new UBASE("Imperial", "timber", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("twenty-foot-equivalent-unit",   new UBASE("Imperial", "twenty-foot-equivalent-unit", 3.624556363776000E+01, "m3", "L3", "1.0"));
          dry.Add("TEU",   new UBASE("Imperial", "TEU", 3.624556363776000E+01, "m3", "L3", "1.0"));
          dry.Add("TEQ",   new UBASE("Imperial", "TEQ", 3.624556363776000E+01, "m3", "L3", "1.0"));
          _map.Add("Imperial",   new BaseSystem("Imperial", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit49()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("beesa(Calcutta)",   new UBASE("Indian", "beesa(Calcutta)", 5.337500000000000E+01, "m", "L", "1.0"));
          length.Add("angula",   new UBASE("Indian", "angula", 1.904166666666670E-02, "m", "L", "1.0"));
          length.Add("anguli(Bombay)",   new UBASE("Indian", "anguli(Bombay)", 4.286250000000000E-02, "m", "L", "1.0"));
          length.Add("anguli(Calcutta)",   new UBASE("Indian", "anguli(Calcutta)", 5.718750000000000E-02, "m", "L", "1.0"));
          length.Add("beesa(Bombay)",   new UBASE("Indian", "beesa(Bombay)", 4.000500000000000E+01, "m", "L", "1.0"));
          length.Add("begah(Bombay)",   new UBASE("Indian", "begah(Bombay)", 8.001000000000000E+02, "m", "L", "1.0"));
          length.Add("begah(Calcutta)",   new UBASE("Indian", "begah(Calcutta)", 1.067500000000000E+03, "m", "L", "1.0"));
          length.Add("coss(Bombay)",   new UBASE("Indian", "coss(Bombay)", 1.371600000000000E+03, "m", "L", "1.0"));
          length.Add("coss(Calcutta)",   new UBASE("Indian", "coss(Calcutta)", 1.830000000000000E+03, "m", "L", "1.0"));
          length.Add("covid(Bombay)",   new UBASE("Indian", "covid(Bombay)", 3.429000000000000E-01, "m", "L", "1.0"));
          length.Add("covid(Calcutta)",   new UBASE("Indian", "covid(Calcutta)", 4.575000000000000E-01, "m", "L", "1.0"));
          length.Add("crosa",   new UBASE("Indian", "crosa", 3.656000000000000E+03, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("Indian", "cubit", 4.570000000000000E-01, "m", "L", "1.0"));
          length.Add("danda(Bombay)",   new UBASE("Indian", "danda(Bombay)", 1.371600000000000E+00, "m", "L", "1.0"));
          length.Add("danda(Calcutta)",   new UBASE("Indian", "danda(Calcutta)", 1.830000000000000E+00, "m", "L", "1.0"));
          length.Add("dhanush",   new UBASE("Indian", "dhanush", 1.828000000000000E+00, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Indian", "finger", 1.904166666666670E-02, "m", "L", "1.0"));
          length.Add("gavyuti",   new UBASE("Indian", "gavyuti", 7.312000000000000E+03, "m", "L", "1.0"));
          length.Add("gaz(Bombay)",   new UBASE("Indian", "gaz(Bombay)", 6.858000000000000E-01, "m", "L", "1.0"));
          length.Add("gaz(Calcutta)",   new UBASE("Indian", "gaz(Calcutta)", 9.150000000000000E-01, "m", "L", "1.0"));
          length.Add("girah(Bombay)",   new UBASE("Indian", "girah(Bombay)", 4.286250000000000E-02, "m", "L", "1.0"));
          length.Add("girah(Calcutta)",   new UBASE("Indian", "girah(Calcutta)", 5.718750000000000E-02, "m", "L", "1.0"));
          length.Add("guz(Bombay)",   new UBASE("Indian", "guz(Bombay)", 6.858000000000000E-01, "m", "L", "1.0"));
          length.Add("guz(Calcutta)",   new UBASE("Indian", "guz(Calcutta)", 9.150000000000000E-01, "m", "L", "1.0"));
          length.Add("hasta",   new UBASE("Indian", "hasta", 4.570000000000000E-01, "m", "L", "1.0"));
          length.Add("hath(Bombay)",   new UBASE("Indian", "hath(Bombay)", 3.429000000000000E-01, "m", "L", "1.0"));
          length.Add("hath(Calcutta)",   new UBASE("Indian", "hath(Calcutta)", 4.575000000000000E-01, "m", "L", "1.0"));
          length.Add("jaob(Bombay)",   new UBASE("Indian", "jaob(Bombay)", 4.762500000000000E-03, "m", "L", "1.0"));
          length.Add("jaob(Calcutta)",   new UBASE("Indian", "jaob(Calcutta)", 6.354166666666670E-03, "m", "L", "1.0"));
          length.Add("jow(Bombay)",   new UBASE("Indian", "jow(Bombay)", 4.762500000000000E-03, "m", "L", "1.0"));
          length.Add("jow(Calcutta)",   new UBASE("Indian", "jow(Calcutta)", 6.354166666666670E-03, "m", "L", "1.0"));
          length.Add("kan(Bombay)",   new UBASE("Indian", "kan(Bombay)", 3.771900000000000E+00, "m", "L", "1.0"));
          length.Add("kan(Calcutta)",   new UBASE("Indian", "kan(Calcutta)", 5.032500000000000E+00, "m", "L", "1.0"));
          length.Add("karam(Bombay)",   new UBASE("Indian", "karam(Bombay)", 1.257300000000000E+00, "m", "L", "1.0"));
          length.Add("karam(Calcutta)",   new UBASE("Indian", "karam(Calcutta)", 1.677500000000000E+00, "m", "L", "1.0"));
          length.Add("kathi(Bombay)",   new UBASE("Indian", "kathi(Bombay)", 2.000250000000000E+00, "m", "L", "1.0"));
          length.Add("kathi(Calcutta)",   new UBASE("Indian", "kathi(Calcutta)", 2.668750000000000E+00, "m", "L", "1.0"));
          length.Add("moot(Bombay)",   new UBASE("Indian", "moot(Bombay)", 5.715000000000000E-02, "m", "L", "1.0"));
          length.Add("moot(Calcutta)",   new UBASE("Indian", "moot(Calcutta)", 7.625000000000000E-02, "m", "L", "1.0"));
          length.Add("niranga(Bombay)",   new UBASE("Indian", "niranga(Bombay)", 6.858000000000000E+00, "m", "L", "1.0"));
          length.Add("niranga(Calcutta)",   new UBASE("Indian", "niranga(Calcutta)", 9.150000000000000E+00, "m", "L", "1.0"));
          length.Add("orgyla",   new UBASE("Indian", "orgyla", 1.828000000000000E+00, "m", "L", "1.0"));
          length.Add("pally",   new UBASE("Indian", "pally", 5.505000000000000E-03, "m", "L", "1.0"));
          length.Add("pand(Bombay)",   new UBASE("Indian", "pand(Bombay)", 4.000500000000000E+01, "m", "L", "1.0"));
          length.Add("pand(Calcutta)",   new UBASE("Indian", "pand(Calcutta)", 5.337500000000000E+01, "m", "L", "1.0"));
          length.Add("span(Bombay)",   new UBASE("Indian", "span(Bombay)", 1.714500000000000E-01, "m", "L", "1.0"));
          length.Add("span(Calcutta)",   new UBASE("Indian", "span(Calcutta)", 2.287500000000000E-01, "m", "L", "1.0"));
          length.Add("span(vistati)",   new UBASE("Indian", "span(vistati)", 2.285000000000000E-01, "m", "L", "1.0"));
          length.Add("tassoos(Bombay)",   new UBASE("Indian", "tassoos(Bombay)", 2.857500000000000E-02, "m", "L", "1.0"));
          length.Add("tassoos(Calcutta)",   new UBASE("Indian", "tassoos(Calcutta)", 3.812500000000000E-02, "m", "L", "1.0"));
          length.Add("unglee(Bombay)",   new UBASE("Indian", "unglee(Bombay)", 1.428750000000000E-02, "m", "L", "1.0"));
          length.Add("unglee(Calcutta)",   new UBASE("Indian", "unglee(Calcutta)", 1.906250000000000E-02, "m", "L", "1.0"));
          length.Add("vistati",   new UBASE("Indian", "vistati", 2.285000000000000E-01, "m", "L", "1.0"));
          length.Add("yodjana",   new UBASE("Indian", "yodjana", 1.462400000000000E+04, "m", "L", "1.0"));
          area.Add("begah(Bombay)",   new UBASE("Indian", "begah(Bombay)", 7.525146240000000E+02, "m2", "L2", "1.0"));
          area.Add("begah(Calcutta)",   new UBASE("Indian", "begah(Calcutta)", 1.339560000000000E+03, "m2", "L2", "1.0"));
          area.Add("biggah(Bombay)",   new UBASE("Indian", "biggah(Bombay)", 7.525146240000000E+02, "m2", "L2", "1.0"));
          area.Add("biggah(Calcutta)",   new UBASE("Indian", "biggah(Calcutta)", 1.339560000000000E+03, "m2", "L2", "1.0"));
          area.Add("bigha(Bangladesh)",   new UBASE("Indian", "bigha(Bangladesh)", 1.337803776000000E+03, "m2", "L2", "1.0"));
          area.Add("bigha",   new UBASE("Indian", "bigha", 2.529285264000000E+03, "m2", "L2", "1.0"));
          area.Add("cawney",   new UBASE("Indian", "cawney", 5.395808563200000E+03, "m2", "L2", "1.0"));
          area.Add("cawnie",   new UBASE("Indian", "cawnie", 5.400000000000000E+02, "m2", "L2", "1.0"));
          area.Add("chahar",   new UBASE("Indian", "chahar", 2.962000000000000E-02, "m2", "L2", "1.0"));
          area.Add("chattack(Bombay)",   new UBASE("Indian", "chattack(Bombay)", 2.351608200000000E+00, "m2", "L2", "1.0"));
          area.Add("chattack(Calcutta)",   new UBASE("Indian", "chattack(Calcutta)", 4.186125000000000E+00, "m2", "L2", "1.0"));
          area.Add("cottah(Bombay)",   new UBASE("Indian", "cottah(Bombay)", 3.762573120000000E+01, "m2", "L2", "1.0"));
          area.Add("cottah(Calcutta)",   new UBASE("Indian", "cottah(Calcutta)", 6.697800000000000E+01, "m2", "L2", "1.0"));
          area.Add("ghamaon(Bombay)",   new UBASE("Indian", "ghamaon(Bombay)", 1.505029248000000E+03, "m2", "L2", "1.0"));
          area.Add("ghamaon(Calcutta)",   new UBASE("Indian", "ghamaon(Calcutta)", 2.679120000000000E+03, "m2", "L2", "1.0"));
          area.Add("ground",   new UBASE("Indian", "ground", 2.030000000000000E+01, "m2", "L2", "1.0"));
          area.Add("kanal(Bombay)",   new UBASE("Indian", "kanal(Bombay)", 1.881286560000000E+02, "m2", "L2", "1.0"));
          area.Add("kanal(Calcutta)",   new UBASE("Indian", "kanal(Calcutta)", 3.348900000000000E+02, "m2", "L2", "1.0"));
          area.Add("kani",   new UBASE("Indian", "kani", 3.075000000000000E+02, "m2", "L2", "1.0"));
          area.Add("marla(Bombay)",   new UBASE("Indian", "marla(Bombay)", 9.406432800000000E+00, "m2", "L2", "1.0"));
          area.Add("marla(Calcutta)",   new UBASE("Indian", "marla(Calcutta)", 1.674450000000000E+01, "m2", "L2", "1.0"));
          area.Add("square-guz(Bombay)",   new UBASE("Indian", "square-guz(Bombay)", 4.703216400000000E-01, "m2", "L2", "1.0"));
          area.Add("square-guz(Calcutta)",   new UBASE("Indian", "square-guz(Calcutta)", 8.372250000000000E-01, "m2", "L2", "1.0"));
          area.Add("tenab(Bombay)",   new UBASE("Indian", "tenab(Bombay)", 1.175804100000000E+03, "m2", "L2", "1.0"));
          area.Add("tenab(Calcutta)",   new UBASE("Indian", "tenab(Calcutta)", 2.093062500000000E+03, "m2", "L2", "1.0"));
          mass.Add("achita",   new UBASE("Indian", "achita", 9.400000000000000E+02, "kg", "M", "1.0"));
          mass.Add("adha",   new UBASE("Indian", "adha", 4.665200000000000E-01, "kg", "M", "1.0"));
          mass.Add("adhaka",   new UBASE("Indian", "adhaka", 3.300000000000000E+00, "kg", "M", "1.0"));
          mass.Add("adher",   new UBASE("Indian", "adher", 4.665200000000000E-01, "kg", "M", "1.0"));
          mass.Add("adh-pav",   new UBASE("Indian", "adh-pav", 1.166300000000000E-01, "kg", "M", "1.0"));
          mass.Add("baha",   new UBASE("Indian", "baha", 2.640000000000000E+03, "kg", "M", "1.0"));
          mass.Add("bale",   new UBASE("Indian", "bale", 1.814369480000000E+02, "kg", "M", "1.0"));
          mass.Add("bara",   new UBASE("Indian", "bara", 9.400000000000000E+01, "kg", "M", "1.0"));
          mass.Add("bazar",   new UBASE("Indian", "bazar", 3.732160000000000E+01, "kg", "M", "1.0"));
          mass.Add("bhari",   new UBASE("Indian", "bhari", 1.166300000000000E-02, "kg", "M", "1.0"));
          mass.Add("candy",   new UBASE("Indian", "candy", 7.464320000000000E+02, "kg", "M", "1.0"));
          mass.Add("chawal",   new UBASE("Indian", "chawal", 7.593098958333330E-06, "kg", "M", "1.0"));
          mass.Add("chhataank",   new UBASE("Indian", "chhataank", 5.831500000000000E-02, "kg", "M", "1.0"));
          mass.Add("chittak",   new UBASE("Indian", "chittak", 5.831500000000000E-02, "kg", "M", "1.0"));
          mass.Add("cudava",   new UBASE("Indian", "cudava", 4.125000000000000E-01, "kg", "M", "1.0"));
          mass.Add("cumbha",   new UBASE("Indian", "cumbha", 2.640000000000000E+02, "kg", "M", "1.0"));
          mass.Add("cumbha(short)",   new UBASE("Indian", "cumbha(short)", 2.640000000000000E+01, "kg", "M", "1.0"));
          mass.Add("das",   new UBASE("Indian", "das", 9.330400000000000E+00, "kg", "M", "1.0"));
          mass.Add("daseri",   new UBASE("Indian", "daseri", 9.330400000000000E+00, "kg", "M", "1.0"));
          mass.Add("dhai",   new UBASE("Indian", "dhai", 2.332600000000000E+00, "kg", "M", "1.0"));
          mass.Add("dhan",   new UBASE("Indian", "dhan", 3.037239583333330E-05, "kg", "M", "1.0"));
          mass.Add("dharana",   new UBASE("Indian", "dharana", 4.700000000000000E-03, "kg", "M", "1.0"));
          mass.Add("dhaser",   new UBASE("Indian", "dhaser", 2.332600000000000E+00, "kg", "M", "1.0"));
          mass.Add("dhurra",   new UBASE("Indian", "dhurra", 4.665200000000000E+00, "kg", "M", "1.0"));
          mass.Add("drona",   new UBASE("Indian", "drona", 1.320000000000000E+01, "kg", "M", "1.0"));
          mass.Add("fally",   new UBASE("Indian", "fally", 4.665200000000000E+00, "kg", "M", "1.0"));
          mass.Add("hara",   new UBASE("Indian", "hara", 9.400000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kancha",   new UBASE("Indian", "kancha", 1.457875000000000E-02, "kg", "M", "1.0"));
          mass.Add("kharsha",   new UBASE("Indian", "kharsha", 1.410000000000000E-02, "kg", "M", "1.0"));
          mass.Add("kona",   new UBASE("Indian", "kona", 7.050000000000000E-03, "kg", "M", "1.0"));
          mass.Add("masha",   new UBASE("Indian", "masha", 9.719166666666670E-04, "kg", "M", "1.0"));
          mass.Add("masha(old)",   new UBASE("Indian", "masha(old)", 8.812500000000000E-04, "kg", "M", "1.0"));
          mass.Add("maund",   new UBASE("Indian", "maund", 3.732160000000000E+01, "kg", "M", "1.0"));
          mass.Add("musti",   new UBASE("Indian", "musti", 5.156250000000000E-02, "kg", "M", "1.0"));
          mass.Add("pala(old)",   new UBASE("Indian", "pala(old)", 4.700000000000000E-02, "kg", "M", "1.0"));
          mass.Add("pala",   new UBASE("Indian", "pala", 5.156250000000000E-02, "kg", "M", "1.0"));
          mass.Add("panch",   new UBASE("Indian", "panch", 4.665200000000000E+00, "kg", "M", "1.0"));
          mass.Add("parah",   new UBASE("Indian", "parah", 3.110133333333330E-02, "kg", "M", "1.0"));
          mass.Add("paseri",   new UBASE("Indian", "paseri", 4.665200000000000E+00, "kg", "M", "1.0"));
          mass.Add("pav",   new UBASE("Indian", "pav", 2.332600000000000E-01, "kg", "M", "1.0"));
          mass.Add("pince",   new UBASE("Indian", "pince", 3.110133333333330E-02, "kg", "M", "1.0"));
          mass.Add("powa",   new UBASE("Indian", "powa", 2.332600000000000E-01, "kg", "M", "1.0"));
          mass.Add("prastha",   new UBASE("Indian", "prastha", 8.250000000000000E-01, "kg", "M", "1.0"));
          mass.Add("raik",   new UBASE("Indian", "raik", 1.166300000000000E+00, "kg", "M", "1.0"));
          mass.Add("ratica",   new UBASE("Indian", "ratica", 1.468750000000000E-04, "kg", "M", "1.0"));
          mass.Add("ratti",   new UBASE("Indian", "ratti", 1.214895833333330E-04, "kg", "M", "1.0"));
          mass.Add("retti",   new UBASE("Indian", "retti", 1.468750000000000E-04, "kg", "M", "1.0"));
          mass.Add("ruttee",   new UBASE("Indian", "ruttee", 1.214895833333330E-04, "kg", "M", "1.0"));
          mass.Add("sava",   new UBASE("Indian", "sava", 1.166300000000000E+00, "kg", "M", "1.0"));
          mass.Add("savaser",   new UBASE("Indian", "savaser", 1.166300000000000E+00, "kg", "M", "1.0"));
          mass.Add("seer",   new UBASE("Indian", "seer", 9.330400000000000E-01, "kg", "M", "1.0"));
          mass.Add("seer(SA)",   new UBASE("Indian", "seer(SA)", 9.331075439455000E-01, "kg", "M", "1.0"));
          mass.Add("ser",   new UBASE("Indian", "ser", 9.330400000000000E-01, "kg", "M", "1.0"));
          mass.Add("shari",   new UBASE("Indian", "shari", 2.112000000000000E+02, "kg", "M", "1.0"));
          mass.Add("sicca",   new UBASE("Indian", "sicca", 1.166300000000000E-02, "kg", "M", "1.0"));
          mass.Add("siki",   new UBASE("Indian", "siki", 2.915750000000000E-03, "kg", "M", "1.0"));
          mass.Add("tak",   new UBASE("Indian", "tak", 2.915750000000000E-03, "kg", "M", "1.0"));
          mass.Add("tank",   new UBASE("Indian", "tank", 1.295888888888890E-02, "kg", "M", "1.0"));
          mass.Add("tank-sala",   new UBASE("Indian", "tank-sala", 2.643750000000000E-03, "kg", "M", "1.0"));
          mass.Add("tola",   new UBASE("Indian", "tola", 1.175000000000000E-02, "kg", "M", "1.0"));
          mass.Add("tolah",   new UBASE("Indian", "tolah", 1.166300000000000E-02, "kg", "M", "1.0"));
          mass.Add("tuba",   new UBASE("Indian", "tuba", 4.700000000000000E+00, "kg", "M", "1.0"));
          mass.Add("yava",   new UBASE("Indian", "yava", 1.468750000000000E-05, "kg", "M", "1.0"));
          liquid.Add("adoulie",   new UBASE("Indian", "adoulie", 6.881250000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("candy",   new UBASE("Indian", "candy", 8.808000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("chattack",   new UBASE("Indian", "chattack", 6.881250000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("chhataank",   new UBASE("Indian", "chhataank", 1.075195312500000E-04, "m3", "L3", "1.0"));
          liquid.Add("garce",   new UBASE("Indian", "garce", 8.808000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("khahoon",   new UBASE("Indian", "khahoon", 1.761600000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("khoonke",   new UBASE("Indian", "khoonke", 8.601562500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("kunk",   new UBASE("Indian", "kunk", 3.440625000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("mapte",   new UBASE("Indian", "mapte", 5.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("maund",   new UBASE("Indian", "maund", 6.881250000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("pally",   new UBASE("Indian", "pally", 5.505000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("parah",   new UBASE("Indian", "parah", 1.101000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pav",   new UBASE("Indian", "pav", 4.300781250000000E-04, "m3", "L3", "1.0"));
          liquid.Add("raik",   new UBASE("Indian", "raik", 1.376250000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("seer",   new UBASE("Indian", "seer", 1.720312500000000E-03, "m3", "L3", "1.0"));
          liquid.Add("soally",   new UBASE("Indian", "soally", 1.101000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tipree",   new UBASE("Indian", "tipree", 8.601562500000000E-04, "m3", "L3", "1.0"));
          dry.Add("adhaka",   new UBASE("Indian", "adhaka", 3.300000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("baha",   new UBASE("Indian", "baha", 2.640000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("chipte",   new UBASE("Indian", "chipte", 1.250000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cudava",   new UBASE("Indian", "cudava", 4.125000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cumbha",   new UBASE("Indian", "cumbha", 2.640000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("drona",   new UBASE("Indian", "drona", 1.320000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("kolve",   new UBASE("Indian", "kolve", 6.250000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("nilve",   new UBASE("Indian", "nilve", 3.125000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("pala",   new UBASE("Indian", "pala", 5.156250000000000E-05, "m3", "L3", "1.0"));
          dry.Add("prastha",   new UBASE("Indian", "prastha", 8.250000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("seer",   new UBASE("Indian", "seer", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("ser",   new UBASE("Indian", "ser", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("shari",   new UBASE("Indian", "shari", 2.112000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("shon-cumbha",   new UBASE("Indian", "shon-cumbha", 2.640000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("musti",   new UBASE("Indian", "musti", 5.156250000000000E-05, "m3", "L3", "1.0"));
          _map.Add("Indian",   new BaseSystem("Indian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit50()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("depa",   new UBASE("Indonesian", "depa", 1.700000000000000E+00, "m", "L", "1.0"));
          length.Add("hasta",   new UBASE("Indonesian", "hasta", 4.250000000000000E-01, "m", "L", "1.0"));
          length.Add("kilan",   new UBASE("Indonesian", "kilan", 2.125000000000000E-01, "m", "L", "1.0"));
          area.Add("bahoe",   new UBASE("Indonesian", "bahoe", 7.096500000000000E+03, "m2", "L2", "1.0"));
          mass.Add("amat",   new UBASE("Indonesian", "amat", 1.235226050000000E+02, "kg", "M", "1.0"));
          mass.Add("bahar(long)",   new UBASE("Indonesian", "bahar(long)", 2.779258612500000E+02, "kg", "M", "1.0"));
          mass.Add("bahar(short)",   new UBASE("Indonesian", "bahar(short)", 1.852839075000000E+02, "kg", "M", "1.0"));
          mass.Add("catty",   new UBASE("Indonesian", "catty", 6.176130250000000E-01, "kg", "M", "1.0"));
          mass.Add("hoen",   new UBASE("Indonesian", "hoen", 3.860100000000000E-02, "kg", "M", "1.0"));
          mass.Add("kabi",   new UBASE("Indonesian", "kabi", 6.176130250000000E-01, "kg", "M", "1.0"));
          mass.Add("kojang(Batavia)",   new UBASE("Indonesian", "kojang(Batavia)", 1.667555167500000E+03, "kg", "M", "1.0"));
          mass.Add("kojang(Semarang)",   new UBASE("Indonesian", "kojang(Semarang)", 1.729316470000000E+03, "kg", "M", "1.0"));
          mass.Add("kojang(Soerabaya)",   new UBASE("Indonesian", "kojang(Soerabaya)", 1.852839075000000E+03, "kg", "M", "1.0"));
          mass.Add("kulack",   new UBASE("Indonesian", "kulack", 4.477694431250000E+00, "kg", "M", "1.0"));
          mass.Add("picul",   new UBASE("Indonesian", "picul", 6.176130250000000E+01, "kg", "M", "1.0"));
          mass.Add("pikol",   new UBASE("Indonesian", "pikol", 6.176130250000000E+01, "kg", "M", "1.0"));
          mass.Add("real",   new UBASE("Indonesian", "real", 1.930040703125000E-02, "kg", "M", "1.0"));
          mass.Add("soekoe",   new UBASE("Indonesian", "soekoe", 4.825101757812500E-03, "kg", "M", "1.0"));
          mass.Add("soekoe(precious-metal)",   new UBASE("Indonesian", "soekoe(precious-metal)", 6.761250000000000E+00, "kg", "M", "1.0"));
          mass.Add("tael",   new UBASE("Indonesian", "tael", 3.860081406250000E-02, "kg", "M", "1.0"));
          mass.Add("tali",   new UBASE("Indonesian", "tali", 2.412550878906250E-03, "kg", "M", "1.0"));
          mass.Add("tali(precious-metal)",   new UBASE("Indonesian", "tali(precious-metal)", 3.380625000000000E+00, "kg", "M", "1.0"));
          mass.Add("thail",   new UBASE("Indonesian", "thail", 3.860081406250000E-02, "kg", "M", "1.0"));
          mass.Add("thail(opium)",   new UBASE("Indonesian", "thail(opium)", 3.860100000000000E+01, "kg", "M", "1.0"));
          mass.Add("thail(precious-metal)",   new UBASE("Indonesian", "thail(precious-metal)", 5.409000000000000E+01, "kg", "M", "1.0"));
          mass.Add("timbang",   new UBASE("Indonesian", "timbang", 3.088065125000000E+02, "kg", "M", "1.0"));
          mass.Add("tjembang-mata",   new UBASE("Indonesian", "tjembang-mata", 3.860100000000000E-02, "kg", "M", "1.0"));
          mass.Add("tji",   new UBASE("Indonesian", "tji", 3.860100000000000E+00, "kg", "M", "1.0"));
          mass.Add("wang",   new UBASE("Indonesian", "wang", 8.041836263020830E-04, "kg", "M", "1.0"));
          liquid.Add("kan",   new UBASE("Indonesian", "kan", 1.575100000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kit",   new UBASE("Indonesian", "kit", 1.496345000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("koelak",   new UBASE("Indonesian", "koelak", 3.740862500000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kojang",   new UBASE("Indonesian", "kojang", 1.984153470000000E+00, "m3", "L3", "1.0"));
          liquid.Add("mutsje",   new UBASE("Indonesian", "mutsje", 1.514519230769230E-04, "m3", "L3", "1.0"));
          liquid.Add("picul",   new UBASE("Indonesian", "picul", 6.613844900000000E-02, "m3", "L3", "1.0"));
          liquid.Add("pintje",   new UBASE("Indonesian", "pintje", 7.572596153846150E-05, "m3", "L3", "1.0"));
          liquid.Add("takar",   new UBASE("Indonesian", "takar", 2.543786500000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-depa",   new UBASE("Indonesian", "cubic-depa", 4.913000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("Indonesian",   new BaseSystem("Indonesian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit51()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("angstrom",   new UBASE("INT", "angstrom", 1.000000000000000E-10, "m", "L", "1.0"));
          length.Add("A",   new UBASE("INT", "A", 1.000000000000000E-10, "m", "L", "1.0"));
          length.Add("cable-length",   new UBASE("INT", "cable-length", 1.852000000000000E+02, "m", "L", "1.0"));
          length.Add("french",   new UBASE("INT", "french", 3.333333333333330E-04, "m", "L", "1.0"));
          length.Add("lap",   new UBASE("INT", "lap", 4.000000000000000E+02, "m", "L", "1.0"));
          length.Add("league",   new UBASE("INT", "league", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("leag",   new UBASE("INT", "leag", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("leagues",   new UBASE("INT", "leagues", 5.556000000000000E+03, "m", "L", "1.0"));
          length.Add("marathon",   new UBASE("INT", "marathon", 4.219498800000000E+04, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("INT", "mile", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mi",   new UBASE("INT", "mi", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("INT", "miles", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("nautical-mile(int)",   new UBASE("INT", "nautical-mile(int)", 1.852000000000000E+03, "m", "L", "1.0"));
          length.Add("nmi(int)",   new UBASE("INT", "nmi(int)", 1.852000000000000E+03, "m", "L", "1.0"));
          length.Add("mile(telegraph)",   new UBASE("INT", "mile(telegraph)", 1.855317600000000E+03, "m", "L", "1.0"));
          length.Add("mi(tel)",   new UBASE("INT", "mi(tel)", 1.855317600000000E+03, "m", "L", "1.0"));
          length.Add("nautical-mile",   new UBASE("INT", "nautical-mile", 1.852000000000000E+03, "m", "L", "1.0"));
          length.Add("nmi",   new UBASE("INT", "nmi", 1.852000000000000E+03, "m", "L", "1.0"));
          length.Add("nautical-miles",   new UBASE("INT", "nautical-miles", 1.852000000000000E+03, "m", "L", "1.0"));
          length.Add("pica(ATA)",   new UBASE("INT", "pica(ATA)", 4.217517642175180E-02, "m", "L", "1.0"));
          length.Add("pica(computer)",   new UBASE("INT", "pica(computer)", 4.233333333333330E-03, "m", "L", "1.0"));
          length.Add("pica(Postscript)",   new UBASE("INT", "pica(Postscript)", 4.233333333333330E-03, "m", "L", "1.0"));
          length.Add("pica(TeX)",   new UBASE("INT", "pica(TeX)", 4.217517642175180E-03, "m", "L", "1.0"));
          length.Add("point(ATA)",   new UBASE("INT", "point(ATA)", 3.514598035145980E-03, "m", "L", "1.0"));
          length.Add("point(computer)",   new UBASE("INT", "point(computer)", 3.527777777777780E-04, "m", "L", "1.0"));
          length.Add("pt",   new UBASE("INT", "pt", 3.527777777777780E-04, "m", "L", "1.0"));
          length.Add("point(Postscript)",   new UBASE("INT", "point(Postscript)", 3.527777777777780E-04, "m", "L", "1.0"));
          length.Add("point(TeX)",   new UBASE("INT", "point(TeX)", 3.514598035145980E-04, "m", "L", "1.0"));
          length.Add("quadrant",   new UBASE("INT", "quadrant", 1.000000000000000E+07, "m", "L", "1.0"));
          length.Add("siegbahn-unit",   new UBASE("INT", "siegbahn-unit", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("x-unit",   new UBASE("INT", "x-unit", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("CuKa1",   new UBASE("INT", "CuKa1", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("X",   new UBASE("INT", "X", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("Ux",   new UBASE("INT", "Ux", 1.000207789700000E-13, "m", "L", "1.0"));
          area.Add("circular-mile",   new UBASE("INT", "circular-mile", 2.034171905079120E+06, "m2", "L2", "1.0"));
          area.Add("cmi",   new UBASE("INT", "cmi", 2.034171905079120E+06, "m2", "L2", "1.0"));
          area.Add("cir-mi",   new UBASE("INT", "cir-mi", 2.034171905079120E+06, "m2", "L2", "1.0"));
          area.Add("circular-mile(nautical)",   new UBASE("INT", "circular-mile(nautical)", 2.693840302229560E+06, "m2", "L2", "1.0"));
          area.Add("cmi(nautical)",   new UBASE("INT", "cmi(nautical)", 2.693840302229560E+06, "m2", "L2", "1.0"));
          area.Add("cir-mi(nautical)",   new UBASE("INT", "cir-mi(nautical)", 2.693840302229560E+06, "m2", "L2", "1.0"));
          area.Add("square-league(nautical)",   new UBASE("INT", "square-league(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0"));
          area.Add("sq-leag(nautical)",   new UBASE("INT", "sq-leag(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0"));
          area.Add("square-mile",   new UBASE("INT", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi",   new UBASE("INT", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("mi2",   new UBASE("INT", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-miles",   new UBASE("INT", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-mile(nautical)",   new UBASE("INT", "square-mile(nautical)", 3.429904000000000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(nautical)",   new UBASE("INT", "sq-mi(nautical)", 3.429904000000000E+06, "m2", "L2", "1.0"));
          mass.Add("carat(metric)",   new UBASE("INT", "carat(metric)", 2.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("ct",   new UBASE("INT", "ct", 2.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("carat(old)",   new UBASE("INT", "carat(old)", 2.053000000000000E-04, "kg", "M", "1.0"));
          mass.Add("ct(old)",   new UBASE("INT", "ct(old)", 2.053000000000000E-04, "kg", "M", "1.0"));
          mass.Add("flask-of-mercury",   new UBASE("INT", "flask-of-mercury", 3.447302012000000E+01, "kg", "M", "1.0"));
          mass.Add("Hg-flask",   new UBASE("INT", "Hg-flask", 3.447302012000000E+01, "kg", "M", "1.0"));
          liquid.Add("blood-unit",   new UBASE("INT", "blood-unit", 4.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("liter(1964)",   new UBASE("INT", "liter(1964)", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("L(1964)",   new UBASE("INT", "L(1964)", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("l(1964)",   new UBASE("INT", "l(1964)", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("normal-cubic-meter",   new UBASE("INT", "normal-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("m3(NTP)",   new UBASE("INT", "m3(NTP)", 1.000000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("Nm3",   new UBASE("INT", "Nm3", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubem",   new UBASE("INT", "cubem", 4.168206834631570E+09, "m3", "L3", "1.0"));
          dry.Add("cuMi",   new UBASE("INT", "cuMi", 4.168206834631570E+09, "m3", "L3", "1.0"));
          dry.Add("standard-cubic-foot",   new UBASE("INT", "standard-cubic-foot", 2.741985888621430E-02, "m3", "L3", "1.0"));
          dry.Add("ft3(STP)",   new UBASE("INT", "ft3(STP)", 2.741985888621430E-02, "m3", "L3", "1.0"));
          dry.Add("standard-cubic-meter",   new UBASE("INT", "standard-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("m3(STP)",   new UBASE("INT", "m3(STP)", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("standard-cubic-meter(old)",   new UBASE("INT", "standard-cubic-meter(old)", 9.161495891329870E-01, "m3", "L3", "1.0"));
          dry.Add("m3(STP-old)",   new UBASE("INT", "m3(STP-old)", 9.161495891329870E-01, "m3", "L3", "1.0"));
          _map.Add("INT",   new BaseSystem("INT", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit52()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("bas",   new UBASE("Irish", "bas", 8.333333333333330E-02, "m", "L", "1.0"));
          length.Add("ceim",   new UBASE("Irish", "ceim", 6.250000000000000E-01, "m", "L", "1.0"));
          length.Add("chain",   new UBASE("Irish", "chain", 2.560320000000000E+01, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("Irish", "cubit", 4.572000000000000E-01, "m", "L", "1.0"));
          length.Add("deisceim",   new UBASE("Irish", "deisceim", 1.500000000000000E+00, "m", "L", "1.0"));
          length.Add("dorn(1/2)",   new UBASE("Irish", "dorn(1/2)", 1.250000000000000E-01, "m", "L", "1.0"));
          length.Add("dorn(5/12)",   new UBASE("Irish", "dorn(5/12)", 1.041666666666670E-01, "m", "L", "1.0"));
          length.Add("fathom",   new UBASE("Irish", "fathom", 4.267200000000000E+00, "m", "L", "1.0"));
          length.Add("fathoms",   new UBASE("Irish", "fathoms", 4.267200000000000E+00, "m", "L", "1.0"));
          length.Add("fertach",   new UBASE("Irish", "fertach", 3.000000000000000E+00, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Irish", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Irish", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("forrach",   new UBASE("Irish", "forrach", 3.600000000000000E+01, "m", "L", "1.0"));
          length.Add("furlong",   new UBASE("Irish", "furlong", 2.560320000000000E+02, "m", "L", "1.0"));
          length.Add("furlongs",   new UBASE("Irish", "furlongs", 2.560320000000000E+02, "m", "L", "1.0"));
          length.Add("gran",   new UBASE("Irish", "gran", 6.944444444444440E-03, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("Irish", "inch", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("inches",   new UBASE("Irish", "inches", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("link",   new UBASE("Irish", "link", 2.560320000000000E+00, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("Irish", "mile", 2.048560800000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("Irish", "miles", 2.048560800000000E+03, "m", "L", "1.0"));
          length.Add("ordlach",   new UBASE("Irish", "ordlach", 2.083333333333330E-02, "m", "L", "1.0"));
          length.Add("pace",   new UBASE("Irish", "pace", 1.524000000000000E+00, "m", "L", "1.0"));
          length.Add("palm",   new UBASE("Irish", "palm", 7.620000000000000E-02, "m", "L", "1.0"));
          length.Add("perch",   new UBASE("Irish", "perch", 6.400800000000000E+00, "m", "L", "1.0"));
          length.Add("span",   new UBASE("Irish", "span", 2.286000000000000E-01, "m", "L", "1.0"));
          length.Add("troighid",   new UBASE("Irish", "troighid", 2.500000000000000E-01, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("Irish", "yard", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yards",   new UBASE("Irish", "yards", 9.144000000000000E-01, "m", "L", "1.0"));
          area.Add("achar",   new UBASE("Irish", "achar", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("acre",   new UBASE("Irish", "acre", 6.527187778064520E+03, "m2", "L2", "1.0"));
          area.Add("ac",   new UBASE("Irish", "ac", 6.527187778064520E+03, "m2", "L2", "1.0"));
          area.Add("acres",   new UBASE("Irish", "acres", 6.527187778064520E+03, "m2", "L2", "1.0"));
          area.Add("baile",   new UBASE("Irish", "baile", 5.827473248256000E+06, "m2", "L2", "1.0"));
          area.Add("seisrech",   new UBASE("Irish", "seisrech", 4.856227706880000E+05, "m2", "L2", "1.0"));
          area.Add("tri-cumaile",   new UBASE("Irish", "tri-cumaile", 9.331200000000000E+04, "m2", "L2", "1.0"));
          area.Add("tuath",   new UBASE("Irish", "tuath", 1.748241974476800E+07, "m2", "L2", "1.0"));
          mass.Add("gran",   new UBASE("Irish", "gran", 5.000000000000000E-05, "kg", "M", "1.0"));
          mass.Add("penginn",   new UBASE("Irish", "penginn", 4.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("pinginn",   new UBASE("Irish", "pinginn", 4.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("screaball",   new UBASE("Irish", "screaball", 1.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("screpall-oir",   new UBASE("Irish", "screpall-oir", 7.087380781250000E-03, "kg", "M", "1.0"));
          mass.Add("screpul",   new UBASE("Irish", "screpul", 1.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("screpull",   new UBASE("Irish", "screpull", 1.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("scripul",   new UBASE("Irish", "scripul", 1.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("scripull",   new UBASE("Irish", "scripull", 1.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("uinge",   new UBASE("Irish", "uinge", 2.880000000000000E-02, "kg", "M", "1.0"));
          mass.Add("ungae",   new UBASE("Irish", "ungae", 2.880000000000000E-02, "kg", "M", "1.0"));
          mass.Add("unge-beg",   new UBASE("Irish", "unge-beg", 1.560000000000000E-02, "kg", "M", "1.0"));
          mass.Add("unge-mor",   new UBASE("Irish", "unge-mor", 3.110000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("barrel",   new UBASE("Irish", "barrel", 1.123234914816000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl",   new UBASE("Irish", "bbl", 1.123234914816000E-01, "m3", "L3", "1.0"));
          liquid.Add("gallon",   new UBASE("Irish", "gallon", 3.565825126400000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallons",   new UBASE("Irish", "gallons", 3.565825126400000E-03, "m3", "L3", "1.0"));
          liquid.Add("hogshead",   new UBASE("Irish", "hogshead", 4.492939659264000E-01, "m3", "L3", "1.0"));
          liquid.Add("hd",   new UBASE("Irish", "hd", 4.492939659264000E-01, "m3", "L3", "1.0"));
          liquid.Add("meisrin",   new UBASE("Irish", "meisrin", 6.600000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("og",   new UBASE("Irish", "og", 5.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("oilmedach",   new UBASE("Irish", "oilmedach", 9.504000000000000E+01, "m3", "L3", "1.0"));
          liquid.Add("olderb",   new UBASE("Irish", "olderb", 7.920000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("Irish", "pint", 4.457281408000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pt",   new UBASE("Irish", "pt", 4.457281408000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pints",   new UBASE("Irish", "pints", 4.457281408000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("Irish", "pipe", 1.797175863705600E+00, "m3", "L3", "1.0"));
          liquid.Add("pottle",   new UBASE("Irish", "pottle", 1.782912563200000E-03, "m3", "L3", "1.0"));
          liquid.Add("puncheon",   new UBASE("Irish", "puncheon", 4.492939659264000E-01, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("Irish", "quart", 8.914562816000000E-04, "m3", "L3", "1.0"));
          liquid.Add("qt",   new UBASE("Irish", "qt", 8.914562816000000E-04, "m3", "L3", "1.0"));
          liquid.Add("quarts",   new UBASE("Irish", "quarts", 8.914562816000000E-04, "m3", "L3", "1.0"));
          liquid.Add("rundlet",   new UBASE("Irish", "rundlet", 6.418485227520000E-02, "m3", "L3", "1.0"));
          liquid.Add("tierce",   new UBASE("Irish", "tierce", 1.497646553088000E-01, "m3", "L3", "1.0"));
          liquid.Add("tun",   new UBASE("Irish", "tun", 8.985879318528000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("Irish", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-feet",   new UBASE("Irish", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-troighid",   new UBASE("Irish", "cubic-troighid", 1.562500000000000E-02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Irish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Irish", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          _map.Add("Irish",   new BaseSystem("Irish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit53()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("canna",   new UBASE("Italian", "canna", 2.055080000000000E+00, "m", "L", "1.0"));
          length.Add("cavezzo",   new UBASE("Italian", "cavezzo", 3.082620000000000E+00, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Italian", "foot", 5.137700000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Italian", "feet", 5.137700000000000E-01, "m", "L", "1.0"));
          length.Add("miglio",   new UBASE("Italian", "miglio", 2.226336666666670E+03, "m", "L", "1.0"));
          length.Add("miglio(Lombardia)",   new UBASE("Italian", "miglio(Lombardia)", 1.784808000000000E+03, "m", "L", "1.0"));
          length.Add("miglio(Napoli)",   new UBASE("Italian", "miglio(Napoli)", 1.855110000000000E+03, "m", "L", "1.0"));
          length.Add("miglio(Piemonte)",   new UBASE("Italian", "miglio(Piemonte)", 2.466076800000000E+03, "m", "L", "1.0"));
          length.Add("miglio(Roma)",   new UBASE("Italian", "miglio(Roma)", 1.487934000000000E+03, "m", "L", "1.0"));
          length.Add("miglio(Toscana)",   new UBASE("Italian", "miglio(Toscana)", 1.635670000000000E+03, "m", "L", "1.0"));
          length.Add("miglio(Venezia)",   new UBASE("Italian", "miglio(Venezia)", 1.738675000000000E+03, "m", "L", "1.0"));
          length.Add("oncia",   new UBASE("Italian", "oncia", 4.281416666666670E-02, "m", "L", "1.0"));
          length.Add("piede-liprando",   new UBASE("Italian", "piede-liprando", 5.137700000000000E-01, "m", "L", "1.0"));
          length.Add("punto",   new UBASE("Italian", "punto", 3.567847222222220E-03, "m", "L", "1.0"));
          length.Add("trabucco",   new UBASE("Italian", "trabucco", 3.082620000000000E+00, "m", "L", "1.0"));
          area.Add("giornata",   new UBASE("Italian", "giornata", 3.800000000000000E+03, "m2", "L2", "1.0"));
          area.Add("tavola",   new UBASE("Italian", "tavola", 3.800000000000000E+01, "m2", "L2", "1.0"));
          mass.Add("cantaro",   new UBASE("Italian", "cantaro", 4.605000000000000E+01, "kg", "M", "1.0"));
          mass.Add("denaro",   new UBASE("Italian", "denaro", 1.065972222222220E-03, "kg", "M", "1.0"));
          mass.Add("grano",   new UBASE("Italian", "grano", 4.441550925925930E-05, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Italian", "libbra", 3.070000000000000E-01, "kg", "M", "1.0"));
          mass.Add("oneia",   new UBASE("Italian", "oneia", 2.558333333333330E-02, "kg", "M", "1.0"));
          mass.Add("ottavo",   new UBASE("Italian", "ottavo", 3.197916666666670E-03, "kg", "M", "1.0"));
          mass.Add("rubbo",   new UBASE("Italian", "rubbo", 7.675000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("barile-di-olio",   new UBASE("Italian", "barile-di-olio", 3.343000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("barile-di-vino",   new UBASE("Italian", "barile-di-vino", 4.560000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-piedi-liprando",   new UBASE("Italian", "cubic-piedi-liprando", 1.356145303196330E-01, "m3", "L3", "1.0"));
          _map.Add("Italian",   new BaseSystem("Italian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit54()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("bu",   new UBASE("Japanese", "bu", 3.030303030303030E-03, "m", "L", "1.0"));
          length.Add("cho",   new UBASE("Japanese", "cho", 1.090909090909090E+02, "m", "L", "1.0"));
          length.Add("hiro",   new UBASE("Japanese", "hiro", 1.515151515151520E+00, "m", "L", "1.0"));
          length.Add("jo",   new UBASE("Japanese", "jo", 3.030303030303030E+00, "m", "L", "1.0"));
          length.Add("ken",   new UBASE("Japanese", "ken", 1.818181818181820E+00, "m", "L", "1.0"));
          length.Add("mo",   new UBASE("Japanese", "mo", 3.030303030303030E-05, "m", "L", "1.0"));
          length.Add("Q",   new UBASE("Japanese", "Q", 2.500000000000000E-04, "m", "L", "1.0"));
          length.Add("quarter",   new UBASE("Japanese", "quarter", 2.500000000000000E-04, "m", "L", "1.0"));
          length.Add("ri",   new UBASE("Japanese", "ri", 3.927272727272730E+03, "m", "L", "1.0"));
          length.Add("rin",   new UBASE("Japanese", "rin", 3.030303030303030E-04, "m", "L", "1.0"));
          length.Add("shaku",   new UBASE("Japanese", "shaku", 3.030303030303030E-01, "m", "L", "1.0"));
          length.Add("shi",   new UBASE("Japanese", "shi", 3.030303030303030E-06, "m", "L", "1.0"));
          length.Add("sun",   new UBASE("Japanese", "sun", 3.030303030303030E-02, "m", "L", "1.0"));
          length.Add("yabiki",   new UBASE("Japanese", "yabiki", 7.575757575757580E-01, "m", "L", "1.0"));
          area.Add("bu",   new UBASE("Japanese", "bu", 3.305785123966940E+00, "m2", "L2", "1.0"));
          area.Add("cho",   new UBASE("Japanese", "cho", 9.917355371900830E+03, "m2", "L2", "1.0"));
          area.Add("chobu",   new UBASE("Japanese", "chobu", 9.917355371900830E+03, "m2", "L2", "1.0"));
          area.Add("go",   new UBASE("Japanese", "go", 3.305785123966940E-01, "m2", "L2", "1.0"));
          area.Add("jo",   new UBASE("Japanese", "jo", 1.652892561983470E+00, "m2", "L2", "1.0"));
          area.Add("se",   new UBASE("Japanese", "se", 9.917355371900830E+01, "m2", "L2", "1.0"));
          area.Add("shaku",   new UBASE("Japanese", "shaku", 3.305785123966940E-02, "m2", "L2", "1.0"));
          area.Add("square-ri",   new UBASE("Japanese", "square-ri", 1.542347107438020E+07, "m2", "L2", "1.0"));
          area.Add("tan",   new UBASE("Japanese", "tan", 9.917355371900830E+02, "m2", "L2", "1.0"));
          area.Add("tsubo",   new UBASE("Japanese", "tsubo", 3.305785123966940E+00, "m2", "L2", "1.0"));
          mass.Add("candareen",   new UBASE("Japanese", "candareen", 3.750000000000000E-04, "kg", "M", "1.0"));
          mass.Add("fun",   new UBASE("Japanese", "fun", 3.750000000000000E-04, "kg", "M", "1.0"));
          mass.Add("hyakume",   new UBASE("Japanese", "hyakume", 3.750000000000000E-01, "kg", "M", "1.0"));
          mass.Add("kan",   new UBASE("Japanese", "kan", 3.750000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kanme",   new UBASE("Japanese", "kanme", 3.750000000000000E+00, "kg", "M", "1.0"));
          mass.Add("karus-hiri-ichi-da",   new UBASE("Japanese", "karus-hiri-ichi-da", 6.750000000000000E+01, "kg", "M", "1.0"));
          mass.Add("kin",   new UBASE("Japanese", "kin", 6.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("kiyak-kin",   new UBASE("Japanese", "kiyak-kin", 6.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("komma-ichi-da",   new UBASE("Japanese", "komma-ichi-da", 1.500000000000000E+02, "kg", "M", "1.0"));
          mass.Add("kwan",   new UBASE("Japanese", "kwan", 3.750000000000000E+00, "kg", "M", "1.0"));
          mass.Add("maru",   new UBASE("Japanese", "maru", 3.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("mo",   new UBASE("Japanese", "mo", 3.750000000000000E-06, "kg", "M", "1.0"));
          mass.Add("momme",   new UBASE("Japanese", "momme", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("monme",   new UBASE("Japanese", "monme", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("nisoku-ichi-nin",   new UBASE("Japanese", "nisoku-ichi-nin", 2.625000000000000E+01, "kg", "M", "1.0"));
          mass.Add("niyo",   new UBASE("Japanese", "niyo", 1.500000000000000E-02, "kg", "M", "1.0"));
          mass.Add("rin",   new UBASE("Japanese", "rin", 3.750000000000000E-05, "kg", "M", "1.0"));
          mass.Add("shi",   new UBASE("Japanese", "shi", 3.750000000000000E-07, "kg", "M", "1.0"));
          mass.Add("tael",   new UBASE("Japanese", "tael", 3.751000000000000E-02, "kg", "M", "1.0"));
          mass.Add("tan",   new UBASE("Japanese", "tan", 6.000000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("go",   new UBASE("Japanese", "go", 1.803906836964690E-04, "m3", "L3", "1.0"));
          liquid.Add("koku",   new UBASE("Japanese", "koku", 1.803906836964690E-01, "m3", "L3", "1.0"));
          liquid.Add("sai",   new UBASE("Japanese", "sai", 1.803906836964690E-06, "m3", "L3", "1.0"));
          liquid.Add("shaku",   new UBASE("Japanese", "shaku", 1.803906836964690E-05, "m3", "L3", "1.0"));
          liquid.Add("sho",   new UBASE("Japanese", "sho", 1.803906836964690E-03, "m3", "L3", "1.0"));
          liquid.Add("to",   new UBASE("Japanese", "to", 1.803906836964690E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-shaku",   new UBASE("Japanese", "cubic-shaku", 2.782647410746580E-02, "m3", "L3", "1.0"));
          _map.Add("Japanese",   new BaseSystem("Japanese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit55()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("ho",   new UBASE("Korean", "ho", 3.030303030303030E-05, "m", "L", "1.0"));
          length.Add("mo",   new UBASE("Korean", "mo", 3.030303030303030E-05, "m", "L", "1.0"));
          length.Add("ri",   new UBASE("Korean", "ri", 3.030303030303030E-04, "m", "L", "1.0"));
          length.Add("pun",   new UBASE("Korean", "pun", 3.030303030303030E-03, "m", "L", "1.0"));
          length.Add("bun",   new UBASE("Korean", "bun", 3.030303030303030E-03, "m", "L", "1.0"));
          length.Add("chi",   new UBASE("Korean", "chi", 3.030303030303030E-02, "m", "L", "1.0"));
          length.Add("chon",   new UBASE("Korean", "chon", 3.030303030303030E-02, "m", "L", "1.0"));
          length.Add("ja",   new UBASE("Korean", "ja", 3.030303030303030E-01, "m", "L", "1.0"));
          length.Add("cheok",   new UBASE("Korean", "cheok", 3.030303030303030E-01, "m", "L", "1.0"));
          length.Add("gan",   new UBASE("Korean", "gan", 1.818181818181820E+00, "m", "L", "1.0"));
          length.Add("bo",   new UBASE("Korean", "bo", 1.818181818181820E+00, "m", "L", "1.0"));
          length.Add("jang",   new UBASE("Korean", "jang", 3.030303030303030E+00, "m", "L", "1.0"));
          length.Add("jeong",   new UBASE("Korean", "jeong", 1.090909090909090E+02, "m", "L", "1.0"));
          length.Add("li",   new UBASE("Korean", "li", 3.927272727272730E+02, "m", "L", "1.0"));
          area.Add("jak",   new UBASE("Korean", "jak", 3.305785123966940E-02, "m2", "L2", "1.0"));
          area.Add("hop",   new UBASE("Korean", "hop", 3.305785123966940E-01, "m2", "L2", "1.0"));
          area.Add("pyeong",   new UBASE("Korean", "pyeong", 3.305785123966940E+00, "m2", "L2", "1.0"));
          area.Add("gan",   new UBASE("Korean", "gan", 3.305785123966940E+00, "m2", "L2", "1.0"));
          area.Add("bo",   new UBASE("Korean", "bo", 3.305785123966940E+00, "m2", "L2", "1.0"));
          area.Add("myo",   new UBASE("Korean", "myo", 9.917355371900830E+01, "m2", "L2", "1.0"));
          area.Add("dan",   new UBASE("Korean", "dan", 9.917355371900830E+02, "m2", "L2", "1.0"));
          area.Add("danbo",   new UBASE("Korean", "danbo", 9.917355371900830E+02, "m2", "L2", "1.0"));
          area.Add("jeong",   new UBASE("Korean", "jeong", 9.917355371900830E+03, "m2", "L2", "1.0"));
          area.Add("jeongbo",   new UBASE("Korean", "jeongbo", 9.917355371900830E+03, "m2", "L2", "1.0"));
          area.Add("gyeong",   new UBASE("Korean", "gyeong", 9.917355371900830E+03, "m2", "L2", "1.0"));
          area.Add("doejigi",   new UBASE("Korean", "doejigi", 3.305785123966940E+01, "m2", "L2", "1.0"));
          area.Add("majigi",   new UBASE("Korean", "majigi", 7.438016528925620E+02, "m2", "L2", "1.0"));
          area.Add("durak",   new UBASE("Korean", "durak", 3.305785123966940E+02, "m2", "L2", "1.0"));
          area.Add("seomjigi",   new UBASE("Korean", "seomjigi", 3.305785123966940E+03, "m2", "L2", "1.0"));
          mass.Add("ho",   new UBASE("Korean", "ho", 3.750000000000000E-06, "kg", "M", "1.0"));
          mass.Add("mo",   new UBASE("Korean", "mo", 3.750000000000000E-06, "kg", "M", "1.0"));
          mass.Add("ri",   new UBASE("Korean", "ri", 3.750000000000000E-05, "kg", "M", "1.0"));
          mass.Add("pun",   new UBASE("Korean", "pun", 3.750000000000000E-04, "kg", "M", "1.0"));
          mass.Add("bun",   new UBASE("Korean", "bun", 3.750000000000000E-04, "kg", "M", "1.0"));
          mass.Add("don",   new UBASE("Korean", "don", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("nyang",   new UBASE("Korean", "nyang", 3.750000000000000E-02, "kg", "M", "1.0"));
          mass.Add("geun",   new UBASE("Korean", "geun", 3.750000000000000E-01, "kg", "M", "1.0"));
          mass.Add("geun(meat)",   new UBASE("Korean", "geun(meat)", 6.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("gwan",   new UBASE("Korean", "gwan", 3.750000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("jak",   new UBASE("Korean", "jak", 1.803906836964690E-05, "m3", "L3", "1.0"));
          liquid.Add("hop",   new UBASE("Korean", "hop", 1.803906836964690E-04, "m3", "L3", "1.0"));
          liquid.Add("doe",   new UBASE("Korean", "doe", 1.803906836964690E-03, "m3", "L3", "1.0"));
          liquid.Add("seung",   new UBASE("Korean", "seung", 1.803906836964690E-03, "m3", "L3", "1.0"));
          liquid.Add("mai",   new UBASE("Korean", "mai", 1.803906836964690E-02, "m3", "L3", "1.0"));
          liquid.Add("du",   new UBASE("Korean", "du", 1.803906836964690E-02, "m3", "L3", "1.0"));
          liquid.Add("seom",   new UBASE("Korean", "seom", 1.803906836964690E-01, "m3", "L3", "1.0"));
          liquid.Add("seok",   new UBASE("Korean", "seok", 1.803906836964690E-01, "m3", "L3", "1.0"));
          liquid.Add("jeom",   new UBASE("Korean", "jeom", 1.803906836964690E-01, "m3", "L3", "1.0"));
          liquid.Add("sogok",   new UBASE("Korean", "sogok", 2.705860255447030E-01, "m3", "L3", "1.0"));
          liquid.Add("pyeongseok",   new UBASE("Korean", "pyeongseok", 2.705860255447030E-01, "m3", "L3", "1.0"));
          liquid.Add("daegok",   new UBASE("Korean", "daegok", 3.607813673929380E-01, "m3", "L3", "1.0"));
          liquid.Add("jeonseok",   new UBASE("Korean", "jeonseok", 3.607813673929380E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-cheok",   new UBASE("Korean", "cubic-cheok", 2.782647410746580E-02, "m3", "L3", "1.0"));
          _map.Add("Korean",   new BaseSystem("Korean", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit56()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("elle",   new UBASE("Latvian", "elle", 5.370000000000000E-01, "m", "L", "1.0"));
          length.Add("meile",   new UBASE("Latvian", "meile", 7.467600000000000E+03, "m", "L", "1.0"));
          length.Add("quartier",   new UBASE("Latvian", "quartier", 1.342500000000000E-01, "m", "L", "1.0"));
          length.Add("verste",   new UBASE("Latvian", "verste", 1.066800000000000E+00, "m", "L", "1.0"));
          area.Add("kapp",   new UBASE("Latvian", "kapp", 1.486400000000000E+02, "m2", "L2", "1.0"));
          area.Add("loofstelle",   new UBASE("Latvian", "loofstelle", 3.716000000000000E+03, "m2", "L2", "1.0"));
          area.Add("pourvette",   new UBASE("Latvian", "pourvette", 3.716000000000000E+03, "m2", "L2", "1.0"));
          area.Add("tonnstelle",   new UBASE("Latvian", "tonnstelle", 5.202400000000000E+03, "m2", "L2", "1.0"));
          mass.Add("centner",   new UBASE("Latvian", "centner", 5.028000000000000E+01, "kg", "M", "1.0"));
          mass.Add("liespfund",   new UBASE("Latvian", "liespfund", 8.380000000000000E+00, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Latvian", "loth", 1.309375000000000E-02, "kg", "M", "1.0"));
          mass.Add("pfund",   new UBASE("Latvian", "pfund", 4.190000000000000E-01, "kg", "M", "1.0"));
          mass.Add("quent",   new UBASE("Latvian", "quent", 3.273437500000000E-03, "kg", "M", "1.0"));
          mass.Add("schiffspfund",   new UBASE("Latvian", "schiffspfund", 1.676000000000000E+02, "kg", "M", "1.0"));
          mass.Add("ton",   new UBASE("Latvian", "ton", 1.005600000000000E+02, "kg", "M", "1.0"));
          liquid.Add("anker",   new UBASE("Latvian", "anker", 3.825600000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("faden",   new UBASE("Latvian", "faden", 4.077000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("kanne",   new UBASE("Latvian", "kanne", 2.550400000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kulmet",   new UBASE("Latvian", "kulmet", 1.147680000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("loof",   new UBASE("Latvian", "loof", 6.886080000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("poure",   new UBASE("Latvian", "poure", 6.886080000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("stoof",   new UBASE("Latvian", "stoof", 1.275200000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("tonne",   new UBASE("Latvian", "tonne", 1.377216000000000E-01, "m3", "L3", "1.0"));
          dry.Add("kulmet",   new UBASE("Latvian", "kulmet", 1.091062080000000E-02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Latvian", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Latvian", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          _map.Add("Latvian",   new BaseSystem("Latvian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit57()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("draa",   new UBASE("Libyan", "draa", 4.533333333333330E-01, "m", "L", "1.0"));
          length.Add("handaze",   new UBASE("Libyan", "handaze", 6.800000000000000E-01, "m", "L", "1.0"));
          length.Add("palmo",   new UBASE("Libyan", "palmo", 2.266666666666670E-01, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Libyan", "pic", 6.800000000000000E-01, "m", "L", "1.0"));
          length.Add("pik",   new UBASE("Libyan", "pik", 6.800000000000000E-01, "m", "L", "1.0"));
          area.Add("denum",   new UBASE("Libyan", "denum", 7.398400000000000E+02, "m2", "L2", "1.0"));
          area.Add("jabia",   new UBASE("Libyan", "jabia", 8.323200000000000E+02, "m2", "L2", "1.0"));
          area.Add("square-pic",   new UBASE("Libyan", "square-pic", 4.624000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("cantar",   new UBASE("Libyan", "cantar", 5.128000000000000E+01, "kg", "M", "1.0"));
          mass.Add("dram",   new UBASE("Libyan", "dram", 3.205000000000000E-03, "kg", "M", "1.0"));
          mass.Add("kharouba",   new UBASE("Libyan", "kharouba", 2.003125000000000E-04, "kg", "M", "1.0"));
          mass.Add("mattaro",   new UBASE("Libyan", "mattaro", 2.153760000000000E+01, "kg", "M", "1.0"));
          mass.Add("metial",   new UBASE("Libyan", "metial", 4.761374187558030E-03, "kg", "M", "1.0"));
          mass.Add("oka",   new UBASE("Libyan", "oka", 1.282000000000000E+00, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Libyan", "rottolo", 5.128000000000000E-01, "kg", "M", "1.0"));
          mass.Add("termino",   new UBASE("Libyan", "termino", 4.006250000000000E-03, "kg", "M", "1.0"));
          mass.Add("uckin",   new UBASE("Libyan", "uckin", 3.205000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("barile",   new UBASE("Libyan", "barile", 6.249750000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bozze",   new UBASE("Libyan", "bozze", 2.604062500000000E-03, "m3", "L3", "1.0"));
          liquid.Add("giarra",   new UBASE("Libyan", "giarra", 4.401232394366200E-02, "m3", "L3", "1.0"));
          liquid.Add("gorraf",   new UBASE("Libyan", "gorraf", 1.249950000000000E-02, "m3", "L3", "1.0"));
          dry.Add("kele",   new UBASE("Libyan", "kele", 2.307600000000000E-02, "m3", "L3", "1.0"));
          dry.Add("marta",   new UBASE("Libyan", "marta", 1.538400000000000E-02, "m3", "L3", "1.0"));
          dry.Add("nufsorba",   new UBASE("Libyan", "nufsorba", 3.846000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("orba",   new UBASE("Libyan", "orba", 7.692000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("temen",   new UBASE("Libyan", "temen", 3.076800000000000E-02, "m3", "L3", "1.0"));
          dry.Add("ueba",   new UBASE("Libyan", "ueba", 1.230720000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Libyan",   new BaseSystem("Libyan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit58()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          liquid.Add("malter",   new UBASE("Luxemburg", "malter", 1.910000000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Luxemburg",   new BaseSystem("Luxemburg", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit59()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("rahf",   new UBASE("Malagasy", "rahf", 6.479891000000000E-04, "m", "L", "1.0"));
          area.Add("square-rahf",   new UBASE("Malagasy", "square-rahf", 1.392598247056000E+00, "m2", "L2", "1.0"));
          mass.Add("nanki",   new UBASE("Malagasy", "nanki", 6.479891000000000E-04, "kg", "M", "1.0"));
          mass.Add("vari",   new UBASE("Malagasy", "vari", 1.943967300000000E-03, "kg", "M", "1.0"));
          mass.Add("sompi",   new UBASE("Malagasy", "sompi", 3.887934600000000E-03, "kg", "M", "1.0"));
          liquid.Add("cubic-rahf",   new UBASE("Malagasy", "cubic-rahf", 1.643382909778830E+00, "m3", "L3", "1.0"));
          dry.Add("bambou",   new UBASE("Malagasy", "bambou", 2.001579185478780E-03, "m3", "L3", "1.0"));
          _map.Add("Malagasy",   new BaseSystem("Malagasy", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit60()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("pulzier",   new UBASE("Maltese", "pulzier", 2.175000000000000E-02, "m", "L", "1.0"));
          length.Add("canna",   new UBASE("Maltese", "canna", 2.088000000000000E+00, "m", "L", "1.0"));
          length.Add("fitel",   new UBASE("Maltese", "fitel", 1.305000000000000E-01, "m", "L", "1.0"));
          length.Add("palmo",   new UBASE("Maltese", "palmo", 2.610000000000000E-01, "m", "L", "1.0"));
          length.Add("qasba",   new UBASE("Maltese", "qasba", 2.088000000000000E+00, "m", "L", "1.0"));
          length.Add("xiber",   new UBASE("Maltese", "xiber", 2.610000000000000E-01, "m", "L", "1.0"));
          area.Add("fitel-kwadru",   new UBASE("Maltese", "fitel-kwadru", 1.703025000000000E-02, "m2", "L2", "1.0"));
          area.Add("kejla",   new UBASE("Maltese", "kejla", 1.860157440000000E+01, "m2", "L2", "1.0"));
          area.Add("modd",   new UBASE("Maltese", "modd", 1.785751142400000E+04, "m2", "L2", "1.0"));
          area.Add("pulzier-kwadru",   new UBASE("Maltese", "pulzier-kwadru", 4.730625000000000E-04, "m2", "L2", "1.0"));
          area.Add("qasba-kwadra",   new UBASE("Maltese", "qasba-kwadra", 4.359744000000000E+00, "m2", "L2", "1.0"));
          area.Add("siegh",   new UBASE("Maltese", "siegh", 1.860157440000000E+02, "m2", "L2", "1.0"));
          area.Add("tomna",   new UBASE("Maltese", "tomna", 1.116094464000000E+03, "m2", "L2", "1.0"));
          area.Add("wejba",   new UBASE("Maltese", "wejba", 4.464377856000000E+03, "m2", "L2", "1.0"));
          area.Add("xiber-kwadru",   new UBASE("Maltese", "xiber-kwadru", 6.812100000000000E-02, "m2", "L2", "1.0"));
          mass.Add("cantaro",   new UBASE("Maltese", "cantaro", 7.937900000000000E+01, "kg", "M", "1.0"));
          mass.Add("kwart",   new UBASE("Maltese", "kwart", 1.984475000000000E-01, "kg", "M", "1.0"));
          mass.Add("kwart(small)",   new UBASE("Maltese", "kwart(small)", 6.614916666666670E-03, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Maltese", "libra", 4.535942857142860E-01, "kg", "M", "1.0"));
          mass.Add("ottav",   new UBASE("Maltese", "ottav", 3.307458333333330E-03, "kg", "M", "1.0"));
          mass.Add("ounce",   new UBASE("Maltese", "ounce", 2.834964285714290E-02, "kg", "M", "1.0"));
          mass.Add("parto",   new UBASE("Maltese", "parto", 1.771852678571430E-03, "kg", "M", "1.0"));
          mass.Add("pezata",   new UBASE("Maltese", "pezata", 2.381370000000000E+02, "kg", "M", "1.0"));
          mass.Add("qantar",   new UBASE("Maltese", "qantar", 7.937900000000000E+01, "kg", "M", "1.0"));
          mass.Add("qsima",   new UBASE("Maltese", "qsima", 9.922375000000000E-01, "kg", "M", "1.0"));
          mass.Add("ratal",   new UBASE("Maltese", "ratal", 7.937900000000000E-01, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Maltese", "rottolo", 7.937900000000000E-01, "kg", "M", "1.0"));
          mass.Add("uqija",   new UBASE("Maltese", "uqija", 2.645966666666670E-02, "kg", "M", "1.0"));
          mass.Add("wizna",   new UBASE("Maltese", "wizna", 3.968950000000000E+00, "kg", "M", "1.0"));
          liquid.Add("baril",   new UBASE("Maltese", "baril", 4.316200000000000E+01, "m3", "L3", "1.0"));
          liquid.Add("barmil",   new UBASE("Maltese", "barmil", 4.316200000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("caffiso",   new UBASE("Maltese", "caffiso", 2.045700000000000E+01, "m3", "L3", "1.0"));
          liquid.Add("garra",   new UBASE("Maltese", "garra", 1.079050000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("kartocc",   new UBASE("Maltese", "kartocc", 1.278562500000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kartocc(alcohol)",   new UBASE("Maltese", "kartocc(alcohol)", 1.135842105263160E-03, "m3", "L3", "1.0"));
          liquid.Add("kejla",   new UBASE("Maltese", "kejla", 1.278562500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kwarta",   new UBASE("Maltese", "kwarta", 5.114250000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kwarta(alcohol)",   new UBASE("Maltese", "kwarta(alcohol)", 5.395250000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kwartin",   new UBASE("Maltese", "kwartin", 3.196406250000000E-05, "m3", "L3", "1.0"));
          liquid.Add("nof(alcohol)",   new UBASE("Maltese", "nof(alcohol)", 5.679210526315790E-04, "m3", "L3", "1.0"));
          liquid.Add("nofs",   new UBASE("Maltese", "nofs", 6.392812500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pinte",   new UBASE("Maltese", "pinte", 1.419802631578950E-04, "m3", "L3", "1.0"));
          liquid.Add("qafiz",   new UBASE("Maltese", "qafiz", 2.045700000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("salma",   new UBASE("Maltese", "salma", 2.909440000000000E+02, "m3", "L3", "1.0"));
          liquid.Add("terz",   new UBASE("Maltese", "terz", 3.196406250000000E-04, "m3", "L3", "1.0"));
          liquid.Add("terz(alcohol)",   new UBASE("Maltese", "terz(alcohol)", 2.839605263157890E-04, "m3", "L3", "1.0"));
          dry.Add("fitel-kubu",   new UBASE("Maltese", "fitel-kubu", 2.222447625000000E-03, "m3", "L3", "1.0"));
          dry.Add("ghabara",   new UBASE("Maltese", "ghabara", 3.030728000000000E-03, "m3", "L3", "1.0"));
          dry.Add("kejla",   new UBASE("Maltese", "kejla", 3.030728000000000E-04, "m3", "L3", "1.0"));
          dry.Add("lumin",   new UBASE("Maltese", "lumin", 3.030728000000000E-05, "m3", "L3", "1.0"));
          dry.Add("modd",   new UBASE("Maltese", "modd", 2.909498880000000E-01, "m3", "L3", "1.0"));
          dry.Add("pulzier-kubu",   new UBASE("Maltese", "pulzier-kubu", 1.028910937500000E-05, "m3", "L3", "1.0"));
          dry.Add("qasba-kubu",   new UBASE("Maltese", "qasba-kubu", 9.103145472000000E+00, "m3", "L3", "1.0"));
          dry.Add("siegh",   new UBASE("Maltese", "siegh", 1.818436800000000E-03, "m3", "L3", "1.0"));
          dry.Add("tomna",   new UBASE("Maltese", "tomna", 1.818436800000000E-02, "m3", "L3", "1.0"));
          dry.Add("xiber-kubu",   new UBASE("Maltese", "xiber-kubu", 1.777958100000000E-02, "m3", "L3", "1.0"));
          _map.Add("Maltese",   new BaseSystem("Maltese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit61()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          liquid.Add("cash",   new UBASE("Mauritius", "cash", 2.271100000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("velt",   new UBASE("Mauritius", "velt", 7.570333333333330E-03, "m3", "L3", "1.0"));
          _map.Add("Mauritius",   new BaseSystem("Mauritius", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit62()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("legua",   new UBASE("Mexican", "legua", 4.190000000000000E+03, "m", "L", "1.0"));
          length.Add("linea",   new UBASE("Mexican", "linea", 1.939814814814810E-03, "m", "L", "1.0"));
          length.Add("milla",   new UBASE("Mexican", "milla", 1.396666666666670E+03, "m", "L", "1.0"));
          length.Add("pie",   new UBASE("Mexican", "pie", 2.793333333333330E-01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Mexican", "pulgada", 2.327777777777780E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Mexican", "vara", 8.380000000000000E-01, "m", "L", "1.0"));
          area.Add("caballiera",   new UBASE("Mexican", "caballiera", 4.279531115520000E+05, "m2", "L2", "1.0"));
          area.Add("fanega",   new UBASE("Mexican", "fanega", 3.566275929600000E+04, "m2", "L2", "1.0"));
          area.Add("labor",   new UBASE("Mexican", "labor", 6.419296673280000E+05, "m2", "L2", "1.0"));
          area.Add("sitio",   new UBASE("Mexican", "sitio", 1.755606314623490E+07, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Mexican", "square-vara", 7.022440000000000E-01, "m2", "L2", "1.0"));
          mass.Add("adarme",   new UBASE("Mexican", "adarme", 1.797837265625000E-03, "kg", "M", "1.0"));
          mass.Add("arroba",   new UBASE("Mexican", "arroba", 1.150615850000000E+01, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Mexican", "libbra", 4.602463400000000E-01, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Mexican", "libra", 4.602463400000000E-01, "kg", "M", "1.0"));
          mass.Add("ochava",   new UBASE("Mexican", "ochava", 3.595674531250000E-03, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Mexican", "onza", 2.876539625000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Mexican", "quintal", 4.602463400000000E+01, "kg", "M", "1.0"));
          mass.Add("tercio",   new UBASE("Mexican", "tercio", 7.363941440000000E+01, "kg", "M", "1.0"));
          mass.Add("terco",   new UBASE("Mexican", "terco", 7.363941440000000E+01, "kg", "M", "1.0"));
          mass.Add("tomin",   new UBASE("Mexican", "tomin", 5.992790885416670E-04, "kg", "M", "1.0"));
          liquid.Add("cuartillo(oil)",   new UBASE("Mexican", "cuartillo(oil)", 5.061620000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cuartillo(wine)",   new UBASE("Mexican", "cuartillo(wine)", 4.562640000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("jarra(oil)",   new UBASE("Mexican", "jarra(oil)", 9.110916000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("jarra(wine)",   new UBASE("Mexican", "jarra(wine)", 8.212752000000000E-03, "m3", "L3", "1.0"));
          dry.Add("almud",   new UBASE("Mexican", "almud", 7.567200000000000E-03, "m3", "L3", "1.0"));
          dry.Add("almude",   new UBASE("Mexican", "almude", 7.567200000000000E-03, "m3", "L3", "1.0"));
          dry.Add("carga",   new UBASE("Mexican", "carga", 1.816128000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cuartillo",   new UBASE("Mexican", "cuartillo", 1.891800000000000E-03, "m3", "L3", "1.0"));
          dry.Add("fanega",   new UBASE("Mexican", "fanega", 9.080640000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Mexican",   new BaseSystem("Mexican", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit63()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("meter",   new UBASE("MKpS", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("m",   new UBASE("MKpS", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          area.Add("square-meter",   new UBASE("MKpS", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("unit-of-mass",   new UBASE("MKpS", "unit-of-mass", 9.806650000000000E+00, "kg", "M", "1.0"));
          mass.Add("unite-de-masse",   new UBASE("MKpS", "unite-de-masse", 9.806650000000000E+00, "kg", "M", "1.0"));
          liquid.Add("cubic-meter",   new UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("MKpS",   new BaseSystem("MKpS", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit64()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("meter",   new UBASE("MKS", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("m",   new UBASE("MKS", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          area.Add("square-meter",   new UBASE("MKS", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("sq-m",   new UBASE("MKS", "sq-m", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("m2",   new UBASE("MKS", "m2", 1.000000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("kilogram",   new UBASE("MKS", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kg",   new UBASE("MKS", "kg", 1.000000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("cubic-meter",   new UBASE("MKS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("cu-m",   new UBASE("MKS", "cu-m", 1.000000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("m3",   new UBASE("MKS", "m3", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("MKS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cu-m",   new UBASE("MKS", "cu-m", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("m3",   new UBASE("MKS", "m3", 1.000000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("MKS",   new BaseSystem("MKS", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit65()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("meter",   new UBASE("MKSA", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("m",   new UBASE("MKSA", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          area.Add("sabine(metric)",   new UBASE("MKSA", "sabine(metric)", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("square-meter",   new UBASE("MKSA", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("kilogram",   new UBASE("MKSA", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kg",   new UBASE("MKSA", "kg", 1.000000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("cubic-meter",   new UBASE("MKSA", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("MKSA", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("MKSA",   new BaseSystem("MKSA", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit66()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("canna",   new UBASE("Moroccan", "canna", 5.337500000000000E-01, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("Moroccan", "cubit", 5.337500000000000E-01, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Moroccan", "pic", 6.100000000000000E-01, "m", "L", "1.0"));
          length.Add("tonni",   new UBASE("Moroccan", "tonni", 7.625000000000000E-02, "m", "L", "1.0"));
          area.Add("square-pic",   new UBASE("Moroccan", "square-pic", 3.721000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("artal",   new UBASE("Moroccan", "artal", 5.075000000000000E-01, "kg", "M", "1.0"));
          mass.Add("gerbe",   new UBASE("Moroccan", "gerbe", 3.045000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kantar",   new UBASE("Moroccan", "kantar", 5.075000000000000E+01, "kg", "M", "1.0"));
          mass.Add("kula",   new UBASE("Moroccan", "kula", 1.116500000000000E+01, "kg", "M", "1.0"));
          mass.Add("rotal",   new UBASE("Moroccan", "rotal", 5.075000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("almude",   new UBASE("Moroccan", "almude", 1.400000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("faah",   new UBASE("Moroccan", "faah", 5.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("fanega",   new UBASE("Moroccan", "fanega", 5.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("mud",   new UBASE("Moroccan", "mud", 1.400000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("mudd",   new UBASE("Moroccan", "mudd", 1.400000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("saah",   new UBASE("Moroccan", "saah", 5.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("sahh",   new UBASE("Moroccan", "sahh", 5.600000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Moroccan", "cubic-pic", 2.269810000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Moroccan",   new BaseSystem("Moroccan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit67()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("meter",   new UBASE("MTS", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("m",   new UBASE("MTS", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          area.Add("square-meter",   new UBASE("MTS", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("decitonne",   new UBASE("MTS", "decitonne", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("dt",   new UBASE("MTS", "dt", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("MTS", "quintal", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("q",   new UBASE("MTS", "q", 1.000000000000000E+02, "kg", "M", "1.0"));
          mass.Add("ton(metric)",   new UBASE("MTS", "ton(metric)", 1.000000000000000E+03, "kg", "M", "1.0"));
          mass.Add("t",   new UBASE("MTS", "t", 1.000000000000000E+03, "kg", "M", "1.0"));
          liquid.Add("cubic-meter",   new UBASE("MTS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("decastere",   new UBASE("MTS", "decastere", 1.000000000000000E+01, "m3", "L3", "1.0"));
          dry.Add("dast",   new UBASE("MTS", "dast", 1.000000000000000E+01, "m3", "L3", "1.0"));
          dry.Add("decistere",   new UBASE("MTS", "decistere", 1.000000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("dst",   new UBASE("MTS", "dst", 1.000000000000000E-01, "m3", "L3", "1.0"));
          _map.Add("MTS",   new BaseSystem("MTS", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit68()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("ga-wout",   new UBASE("Myanmar", "ga-wout", 5.120640000000000E+03, "m", "L", "1.0"));
          length.Add("hnan",   new UBASE("Myanmar", "hnan", 7.937500000000000E-04, "m", "L", "1.0"));
          length.Add("kawtha",   new UBASE("Myanmar", "kawtha", 1.280160000000000E+03, "m", "L", "1.0"));
          length.Add("lan",   new UBASE("Myanmar", "lan", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("let-thit",   new UBASE("Myanmar", "let-thit", 1.905000000000000E-02, "m", "L", "1.0"));
          length.Add("maik",   new UBASE("Myanmar", "maik", 1.524000000000000E-01, "m", "L", "1.0"));
          length.Add("muyaw",   new UBASE("Myanmar", "muyaw", 4.762500000000000E-03, "m", "L", "1.0"));
          length.Add("out-thaba",   new UBASE("Myanmar", "out-thaba", 6.400800000000000E+01, "m", "L", "1.0"));
          length.Add("sanchi",   new UBASE("Myanmar", "sanchi", 7.937500000000000E-05, "m", "L", "1.0"));
          length.Add("ta",   new UBASE("Myanmar", "ta", 3.200400000000000E+00, "m", "L", "1.0"));
          length.Add("taung",   new UBASE("Myanmar", "taung", 4.572000000000000E-01, "m", "L", "1.0"));
          length.Add("yuzana",   new UBASE("Myanmar", "yuzana", 2.048256000000000E+04, "m", "L", "1.0"));
          area.Add("square-taung",   new UBASE("Myanmar", "square-taung", 2.090318400000000E-01, "m2", "L2", "1.0"));
          mass.Add("achein-taya",   new UBASE("Myanmar", "achein-taya", 1.632932000000000E+02, "kg", "M", "1.0"));
          mass.Add("aseittha",   new UBASE("Myanmar", "aseittha", 4.082330000000000E-01, "kg", "M", "1.0"));
          mass.Add("awettha",   new UBASE("Myanmar", "awettha", 2.041165000000000E-01, "kg", "M", "1.0"));
          mass.Add("kyattha",   new UBASE("Myanmar", "kyattha", 1.632932000000000E-02, "kg", "M", "1.0"));
          mass.Add("mattha",   new UBASE("Myanmar", "mattha", 4.082330000000000E-03, "kg", "M", "1.0"));
          mass.Add("mutha",   new UBASE("Myanmar", "mutha", 2.041165000000000E-03, "kg", "M", "1.0"));
          mass.Add("nga-mutha",   new UBASE("Myanmar", "nga-mutha", 8.164660000000000E-03, "kg", "M", "1.0"));
          mass.Add("ngase-tha",   new UBASE("Myanmar", "ngase-tha", 8.164660000000000E-01, "kg", "M", "1.0"));
          mass.Add("peittha",   new UBASE("Myanmar", "peittha", 1.632932000000000E+00, "kg", "M", "1.0"));
          mass.Add("petha",   new UBASE("Myanmar", "petha", 1.020582500000000E-03, "kg", "M", "1.0"));
          mass.Add("yway-gyi",   new UBASE("Myanmar", "yway-gyi", 2.721553333333330E-04, "kg", "M", "1.0"));
          mass.Add("yway-lay",   new UBASE("Myanmar", "yway-lay", 1.360776666666670E-04, "kg", "M", "1.0"));
          liquid.Add("hkwe",   new UBASE("Myanmar", "hkwe", 2.045744000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("hkwet",   new UBASE("Myanmar", "hkwet", 1.278590000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("la-me",   new UBASE("Myanmar", "la-me", 3.196475000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("la-my",   new UBASE("Myanmar", "la-my", 7.991187500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("la-myet",   new UBASE("Myanmar", "la-myet", 1.598237500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pyi",   new UBASE("Myanmar", "pyi", 2.557180000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("sa-le",   new UBASE("Myanmar", "sa-le", 6.392950000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("seit",   new UBASE("Myanmar", "seit", 1.022872000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("tin",   new UBASE("Myanmar", "tin", 4.091488000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-taung",   new UBASE("Myanmar", "cubic-taung", 9.556935724800000E-02, "m3", "L3", "1.0"));
          _map.Add("Myanmar",   new BaseSystem("Myanmar", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit69()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("angul",   new UBASE("Napalese", "angul", 1.905000000000000E-02, "m", "L", "1.0"));
          length.Add("dharnugrah",   new UBASE("Napalese", "dharnugrah", 7.620000000000000E-02, "m", "L", "1.0"));
          length.Add("dhanurmushti",   new UBASE("Napalese", "dhanurmushti", 1.524000000000000E-01, "m", "L", "1.0"));
          length.Add("vitastaa",   new UBASE("Napalese", "vitastaa", 2.286000000000000E-01, "m", "L", "1.0"));
          length.Add("haath",   new UBASE("Napalese", "haath", 4.572000000000000E-01, "m", "L", "1.0"));
          length.Add("dhanush",   new UBASE("Napalese", "dhanush", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("dand",   new UBASE("Napalese", "dand", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("kos",   new UBASE("Napalese", "kos", 3.657600000000000E+03, "m", "L", "1.0"));
          length.Add("kosh",   new UBASE("Napalese", "kosh", 3.657600000000000E+03, "m", "L", "1.0"));
          length.Add("gourt",   new UBASE("Napalese", "gourt", 3.657600000000000E+03, "m", "L", "1.0"));
          length.Add("yojan",   new UBASE("Napalese", "yojan", 1.463040000000000E+04, "m", "L", "1.0"));
          area.Add("dam",   new UBASE("Napalese", "dam", 1.987254090000000E+00, "m2", "L2", "1.0"));
          area.Add("paisa",   new UBASE("Napalese", "paisa", 7.949016360000000E+00, "m2", "L2", "1.0"));
          area.Add("aana",   new UBASE("Napalese", "aana", 3.179606544000000E+01, "m2", "L2", "1.0"));
          area.Add("ropani",   new UBASE("Napalese", "ropani", 5.087370470400000E+02, "m2", "L2", "1.0"));
          area.Add("dhur",   new UBASE("Napalese", "dhur", 1.693157904000000E+01, "m2", "L2", "1.0"));
          area.Add("kattha",   new UBASE("Napalese", "kattha", 3.386315808000000E+02, "m2", "L2", "1.0"));
          area.Add("bigha",   new UBASE("Napalese", "bigha", 6.772631616000000E+03, "m2", "L2", "1.0"));
          area.Add("khetmuri",   new UBASE("Napalese", "khetmuri", 1.271842617600000E+04, "m2", "L2", "1.0"));
          mass.Add("tola",   new UBASE("Napalese", "tola", 1.166000000000000E-02, "kg", "M", "1.0"));
          mass.Add("lal",   new UBASE("Napalese", "lal", 1.166000000000000E-04, "kg", "M", "1.0"));
          mass.Add("chatak",   new UBASE("Napalese", "chatak", 5.247000000000000E-02, "kg", "M", "1.0"));
          mass.Add("pau",   new UBASE("Napalese", "pau", 1.990000000000000E-01, "kg", "M", "1.0"));
          mass.Add("dharni",   new UBASE("Napalese", "dharni", 2.388000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("pathi",   new UBASE("Napalese", "pathi", 4.545960000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("mana",   new UBASE("Napalese", "mana", 5.682450000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("mutthi",   new UBASE("Napalese", "mutthi", 5.682450000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("muri",   new UBASE("Napalese", "muri", 9.091920000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-angul",   new UBASE("Napalese", "cubic-angul", 6.913292625000000E-06, "m3", "L3", "1.0"));
          _map.Add("Napalese",   new BaseSystem("Napalese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit70()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("vara",   new UBASE("Nicaraguan", "vara", 8.128000000000000E-01, "m", "L", "1.0"));
          area.Add("caballiera",   new UBASE("Nicaraguan", "caballiera", 4.472909466240000E+05, "m2", "L2", "1.0"));
          area.Add("manzana",   new UBASE("Nicaraguan", "manzana", 6.988921041000000E+03, "m2", "L2", "1.0"));
          mass.Add("caja",   new UBASE("Nicaraguan", "caja", 1.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Nicaraguan", "carga", 1.610000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fanega",   new UBASE("Nicaraguan", "fanega", 9.200000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("botella",   new UBASE("Nicaraguan", "botella", 6.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cajuella",   new UBASE("Nicaraguan", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Nicaraguan", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Nicaraguan", "cubic-vara", 5.369713131520000E-01, "m3", "L3", "1.0"));
          _map.Add("Nicaraguan",   new BaseSystem("Nicaraguan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit71()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("alen",   new UBASE("Norwegian", "alen", 6.274000000000000E-01, "m", "L", "1.0"));
          length.Add("favn",   new UBASE("Norwegian", "favn", 1.882200000000000E+00, "m", "L", "1.0"));
          length.Add("fjerding",   new UBASE("Norwegian", "fjerding", 2.823300000000000E+03, "m", "L", "1.0"));
          length.Add("fjerdingsvei",   new UBASE("Norwegian", "fjerdingsvei", 2.823300000000000E+03, "m", "L", "1.0"));
          length.Add("fod",   new UBASE("Norwegian", "fod", 3.137000000000000E-01, "m", "L", "1.0"));
          length.Add("fot",   new UBASE("Norwegian", "fot", 3.137000000000000E-01, "m", "L", "1.0"));
          length.Add("geografisk-mil",   new UBASE("Norwegian", "geografisk-mil", 7.421299386218240E+03, "m", "L", "1.0"));
          length.Add("kabellengde",   new UBASE("Norwegian", "kabellengde", 1.882200000000000E+02, "m", "L", "1.0"));
          length.Add("kaffekok",   new UBASE("Norwegian", "kaffekok", 1.129320000000000E+04, "m", "L", "1.0"));
          length.Add("kvartmil",   new UBASE("Norwegian", "kvartmil", 1.882200000000000E+03, "m", "L", "1.0"));
          length.Add("kvater",   new UBASE("Norwegian", "kvater", 1.568500000000000E-01, "m", "L", "1.0"));
          length.Add("las",   new UBASE("Norwegian", "las", 2.823300000000000E+01, "m", "L", "1.0"));
          length.Add("linje",   new UBASE("Norwegian", "linje", 2.178472222222220E-03, "m", "L", "1.0"));
          length.Add("miil",   new UBASE("Norwegian", "miil", 1.129320000000000E+04, "m", "L", "1.0"));
          length.Add("mil",   new UBASE("Norwegian", "mil", 1.129320000000000E+04, "m", "L", "1.0"));
          length.Add("rast",   new UBASE("Norwegian", "rast", 1.129320000000000E+04, "m", "L", "1.0"));
          length.Add("sjomil",   new UBASE("Norwegian", "sjomil", 7.434690000000000E+03, "m", "L", "1.0"));
          length.Add("skruppel",   new UBASE("Norwegian", "skruppel", 1.815393518518520E-04, "m", "L", "1.0"));
          length.Add("stang",   new UBASE("Norwegian", "stang", 3.137000000000000E+00, "m", "L", "1.0"));
          length.Add("steinkast",   new UBASE("Norwegian", "steinkast", 4.705500000000000E+01, "m", "L", "1.0"));
          length.Add("tomme",   new UBASE("Norwegian", "tomme", 2.614166666666670E-02, "m", "L", "1.0"));
          area.Add("kvadrat-rode",   new UBASE("Norwegian", "kvadrat-rode", 9.840769000000000E+00, "m2", "L2", "1.0"));
          area.Add("mal",   new UBASE("Norwegian", "mal", 9.840769000000000E+02, "m2", "L2", "1.0"));
          area.Add("mal(new)",   new UBASE("Norwegian", "mal(new)", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("tonneland",   new UBASE("Norwegian", "tonneland", 3.936307600000000E+03, "m2", "L2", "1.0"));
          mass.Add("bismerpund",   new UBASE("Norwegian", "bismerpund", 5.977200000000000E+00, "kg", "M", "1.0"));
          mass.Add("laup",   new UBASE("Norwegian", "laup", 1.793160000000000E+01, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("Norwegian", "mark", 2.490500000000000E-01, "kg", "M", "1.0"));
          mass.Add("merker",   new UBASE("Norwegian", "merker", 2.490500000000000E-01, "kg", "M", "1.0"));
          mass.Add("ort",   new UBASE("Norwegian", "ort", 9.728515625000000E-04, "kg", "M", "1.0"));
          mass.Add("pund",   new UBASE("Norwegian", "pund", 4.981000000000000E-01, "kg", "M", "1.0"));
          mass.Add("skaalpund",   new UBASE("Norwegian", "skaalpund", 4.981000000000000E-01, "kg", "M", "1.0"));
          mass.Add("skalpund",   new UBASE("Norwegian", "skalpund", 4.981000000000000E-01, "kg", "M", "1.0"));
          mass.Add("skippund",   new UBASE("Norwegian", "skippund", 1.593920000000000E+02, "kg", "M", "1.0"));
          mass.Add("spann",   new UBASE("Norwegian", "spann", 1.793160000000000E+01, "kg", "M", "1.0"));
          mass.Add("vag",   new UBASE("Norwegian", "vag", 1.992400000000000E+01, "kg", "M", "1.0"));
          mass.Add("vette",   new UBASE("Norwegian", "vette", 7.172640000000000E+00, "kg", "M", "1.0"));
          liquid.Add("pot",   new UBASE("Norwegian", "pot", 9.651000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("favn",   new UBASE("Norwegian", "favn", 2.222675449416000E+00, "m3", "L3", "1.0"));
          dry.Add("korntonde",   new UBASE("Norwegian", "korntonde", 1.389744000000000E-01, "m3", "L3", "1.0"));
          dry.Add("pot",   new UBASE("Norwegian", "pot", 9.650000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("skjeppe",   new UBASE("Norwegian", "skjeppe", 1.737180000000000E-02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Norwegian", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Norwegian", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("tonne",   new UBASE("Norwegian", "tonne", 1.389172155885000E-01, "m3", "L3", "1.0"));
          _map.Add("Norwegian",   new BaseSystem("Norwegian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit72()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("muscat",   new UBASE("Omani", "muscat", 9.939020000000000E-01, "m", "L", "1.0"));
          area.Add("square-muscat",   new UBASE("Omani", "square-muscat", 9.878411856040000E-01, "m2", "L2", "1.0"));
          mass.Add("maund",   new UBASE("Omani", "maund", 3.968933237500000E+00, "kg", "M", "1.0"));
          mass.Add("candy",   new UBASE("Omani", "candy", 2.381359942500000E+02, "kg", "M", "1.0"));
          mass.Add("kotschas",   new UBASE("Omani", "kotschas", 1.653722182291670E-01, "kg", "M", "1.0"));
          liquid.Add("ferren",   new UBASE("Omani", "ferren", 3.000090255291360E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-muscat",   new UBASE("Omani", "cubic-muscat", 9.818173300541870E-01, "m3", "L3", "1.0"));
          _map.Add("Omani",   new BaseSystem("Omani", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit73()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("kos",   new UBASE("Pakistani", "kos", 3.621024000000000E+03, "m", "L", "1.0"));
          length.Add("farsang",   new UBASE("Pakistani", "farsang", 4.828032000000000E+03, "m", "L", "1.0"));
          length.Add("karam",   new UBASE("Pakistani", "karam", 1.676400000000000E+00, "m", "L", "1.0"));
          area.Add("kanai",   new UBASE("Pakistani", "kanai", 5.058570528000000E+02, "m2", "L2", "1.0"));
          area.Add("marla",   new UBASE("Pakistani", "marla", 2.529285264000000E+01, "m2", "L2", "1.0"));
          mass.Add("tola",   new UBASE("Pakistani", "tola", 1.166375000000000E-02, "kg", "M", "1.0"));
          mass.Add("ser",   new UBASE("Pakistani", "ser", 9.331000000000000E-01, "kg", "M", "1.0"));
          mass.Add("maund",   new UBASE("Pakistani", "maund", 3.732400000000000E+01, "kg", "M", "1.0"));
          liquid.Add("cubic-karam",   new UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-karam",   new UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3", "L3", "1.0"));
          _map.Add("Pakistani",   new BaseSystem("Pakistani", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit74()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cuadra",   new UBASE("Paraguayan", "cuadra", 8.660000000000000E+01, "m", "L", "1.0"));
          length.Add("cuerda",   new UBASE("Paraguayan", "cuerda", 2.405555555555560E+01, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Paraguayan", "legua", 4.330000000000000E+03, "m", "L", "1.0"));
          length.Add("lieue",   new UBASE("Paraguayan", "lieue", 4.330000000000000E+03, "m", "L", "1.0"));
          length.Add("ligne",   new UBASE("Paraguayan", "ligne", 2.004629629629630E-03, "m", "L", "1.0"));
          length.Add("linea",   new UBASE("Paraguayan", "linea", 2.004629629629630E-03, "m", "L", "1.0"));
          length.Add("piede",   new UBASE("Paraguayan", "piede", 2.886666666666670E-01, "m", "L", "1.0"));
          length.Add("pouce",   new UBASE("Paraguayan", "pouce", 2.405555555555560E-02, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Paraguayan", "pulgada", 2.405555555555560E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Paraguayan", "vara", 8.660000000000000E-01, "m", "L", "1.0"));
          length.Add("vara(old)",   new UBASE("Paraguayan", "vara(old)", 8.385600000000000E-01, "m", "L", "1.0"));
          area.Add("lifio",   new UBASE("Paraguayan", "lifio", 7.499560000000000E+01, "m2", "L2", "1.0"));
          area.Add("lifio(old)",   new UBASE("Paraguayan", "lifio(old)", 4.883605057152000E+03, "m2", "L2", "1.0"));
          mass.Add("arroba",   new UBASE("Paraguayan", "arroba", 1.147500000000000E+01, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Paraguayan", "libbra", 4.590000000000000E-01, "kg", "M", "1.0"));
          mass.Add("libbra(old)",   new UBASE("Paraguayan", "libbra(old)", 4.600800000000000E-01, "kg", "M", "1.0"));
          mass.Add("once",   new UBASE("Paraguayan", "once", 2.868750000000000E-02, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Paraguayan", "onza", 2.868750000000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Paraguayan", "quintal", 4.590000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tonnelada",   new UBASE("Paraguayan", "tonnelada", 9.180000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("almude",   new UBASE("Paraguayan", "almude", 2.400000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("baril",   new UBASE("Paraguayan", "baril", 9.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuarta",   new UBASE("Paraguayan", "cuarta", 7.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cuarto",   new UBASE("Paraguayan", "cuarto", 7.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("fanega",   new UBASE("Paraguayan", "fanega", 2.880000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("frasco",   new UBASE("Paraguayan", "frasco", 3.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("Paraguayan", "pipe", 5.760000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Paraguayan", "cubic-vara", 6.494618960000000E-01, "m3", "L3", "1.0"));
          _map.Add("Paraguayan",   new BaseSystem("Paraguayan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit75()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("parasang(old)",   new UBASE("Persian", "parasang(old)", 6.400000000000000E+03, "m", "L", "1.0"));
          length.Add("parasang",   new UBASE("Persian", "parasang", 5.486400000000000E+03, "m", "L", "1.0"));
          length.Add("aiwas",   new UBASE("Persian", "aiwas", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("angosht",   new UBASE("Persian", "angosht", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("arish",   new UBASE("Persian", "arish", 9.600000000000000E-01, "m", "L", "1.0"));
          length.Add("arsani",   new UBASE("Persian", "arsani", 6.400000000000000E-01, "m", "L", "1.0"));
          length.Add("asparsa",   new UBASE("Persian", "asparsa", 1.920000000000000E+02, "m", "L", "1.0"));
          length.Add("charak",   new UBASE("Persian", "charak", 2.286000000000000E-01, "m", "L", "1.0"));
          length.Add("chebel",   new UBASE("Persian", "chebel", 2.560000000000000E+01, "m", "L", "1.0"));
          length.Add("cubit(long)",   new UBASE("Persian", "cubit(long)", 6.400000000000000E-01, "m", "L", "1.0"));
          length.Add("daca-trayas",   new UBASE("Persian", "daca-trayas", 3.200000000000000E+00, "m", "L", "1.0"));
          length.Add("dva",   new UBASE("Persian", "dva", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("farsakh",   new UBASE("Persian", "farsakh", 5.486400000000000E+03, "m", "L", "1.0"));
          length.Add("farsang",   new UBASE("Persian", "farsang", 6.400000000000000E+03, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Persian", "finger", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Persian", "foot", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Persian", "feet", 3.200000000000000E-01, "m", "L", "1.0"));
          length.Add("gez",   new UBASE("Persian", "gez", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("ghalva",   new UBASE("Persian", "ghalva", 2.304000000000000E+02, "m", "L", "1.0"));
          length.Add("gireh",   new UBASE("Persian", "gireh", 5.715000000000000E-02, "m", "L", "1.0"));
          length.Add("guerze",   new UBASE("Persian", "guerze", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("kswacsh-dva",   new UBASE("Persian", "kswacsh-dva", 6.000000000000000E-01, "m", "L", "1.0"));
          length.Add("mansion",   new UBASE("Persian", "mansion", 2.560000000000000E+04, "m", "L", "1.0"));
          length.Add("mille",   new UBASE("Persian", "mille", 1.728000000000000E+03, "m", "L", "1.0"));
          length.Add("pace",   new UBASE("Persian", "pace", 1.920000000000000E+00, "m", "L", "1.0"));
          length.Add("palm",   new UBASE("Persian", "palm", 8.000000000000000E-02, "m", "L", "1.0"));
          length.Add("panka",   new UBASE("Persian", "panka", 1.500000000000000E+00, "m", "L", "1.0"));
          length.Add("panka-dva",   new UBASE("Persian", "panka-dva", 5.000000000000000E-01, "m", "L", "1.0"));
          length.Add("qasab",   new UBASE("Persian", "qasab", 3.840000000000000E+00, "m", "L", "1.0"));
          length.Add("remen",   new UBASE("Persian", "remen", 4.000000000000000E-01, "m", "L", "1.0"));
          length.Add("schoeme",   new UBASE("Persian", "schoeme", 6.912000000000000E+03, "m", "L", "1.0"));
          length.Add("swacsh-dva",   new UBASE("Persian", "swacsh-dva", 6.000000000000000E-01, "m", "L", "1.0"));
          length.Add("trayas",   new UBASE("Persian", "trayas", 3.000000000000000E-01, "m", "L", "1.0"));
          length.Add("ulna",   new UBASE("Persian", "ulna", 6.400000000000000E-01, "m", "L", "1.0"));
          length.Add("urub",   new UBASE("Persian", "urub", 1.143000000000000E-01, "m", "L", "1.0"));
          length.Add("zar",   new UBASE("Persian", "zar", 1.040075829383890E+00, "m", "L", "1.0"));
          length.Add("zereth",   new UBASE("Persian", "zereth", 3.200000000000000E-01, "m", "L", "1.0"));
          area.Add("gan",   new UBASE("Persian", "gan", 1.474560000000000E+03, "m2", "L2", "1.0"));
          area.Add("gar",   new UBASE("Persian", "gar", 1.474560000000000E+01, "m2", "L2", "1.0"));
          area.Add("gur",   new UBASE("Persian", "gur", 1.474560000000000E+04, "m2", "L2", "1.0"));
          area.Add("ten",   new UBASE("Persian", "ten", 1.474560000000000E+02, "m2", "L2", "1.0"));
          mass.Add("abbassi",   new UBASE("Persian", "abbassi", 3.680000000000000E-01, "kg", "M", "1.0"));
          mass.Add("batman-shirez",   new UBASE("Persian", "batman-shirez", 5.888000000000000E+00, "kg", "M", "1.0"));
          mass.Add("batman-tauris",   new UBASE("Persian", "batman-tauris", 2.944000000000000E+00, "kg", "M", "1.0"));
          mass.Add("carat",   new UBASE("Persian", "carat", 1.916666666666670E-04, "kg", "M", "1.0"));
          mass.Add("danar",   new UBASE("Persian", "danar", 1.840000000000000E-01, "kg", "M", "1.0"));
          mass.Add("dartung",   new UBASE("Persian", "dartung", 1.022222222222220E-03, "kg", "M", "1.0"));
          mass.Add("dirhem",   new UBASE("Persian", "dirhem", 9.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("drachm",   new UBASE("Persian", "drachm", 3.260000000000000E-03, "kg", "M", "1.0"));
          mass.Add("dung",   new UBASE("Persian", "dung", 7.666666666666670E-04, "kg", "M", "1.0"));
          mass.Add("karvar",   new UBASE("Persian", "karvar", 5.888000000000000E+02, "kg", "M", "1.0"));
          mass.Add("makhod",   new UBASE("Persian", "makhod", 1.916666666666670E-04, "kg", "M", "1.0"));
          mass.Add("mine",   new UBASE("Persian", "mine", 3.260000000000000E-01, "kg", "M", "1.0"));
          mass.Add("miskal",   new UBASE("Persian", "miskal", 4.600000000000000E-03, "kg", "M", "1.0"));
          mass.Add("pinar",   new UBASE("Persian", "pinar", 1.472000000000000E-01, "kg", "M", "1.0"));
          mass.Add("rottel",   new UBASE("Persian", "rottel", 4.600000000000000E-01, "kg", "M", "1.0"));
          mass.Add("saddirham",   new UBASE("Persian", "saddirham", 1.472000000000000E+00, "kg", "M", "1.0"));
          mass.Add("sir",   new UBASE("Persian", "sir", 1.840000000000000E-02, "kg", "M", "1.0"));
          mass.Add("talent",   new UBASE("Persian", "talent", 3.260000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tcheirek",   new UBASE("Persian", "tcheirek", 7.360000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("artaba",   new UBASE("Persian", "artaba", 6.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("capichas",   new UBASE("Persian", "capichas", 2.640000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("chenica",   new UBASE("Persian", "chenica", 1.320000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("colluthun",   new UBASE("Persian", "colluthun", 8.250000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("legana",   new UBASE("Persian", "legana", 3.960000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("sabbitha",   new UBASE("Persian", "sabbitha", 7.260000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("sextario",   new UBASE("Persian", "sextario", 3.300000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("amphora",   new UBASE("Persian", "amphora", 3.260000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("amphora(long)",   new UBASE("Persian", "amphora(long)", 9.780000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("artaba(long)",   new UBASE("Persian", "artaba(long)", 6.520000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("artaba(short)",   new UBASE("Persian", "artaba(short)", 4.890000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cados",   new UBASE("Persian", "cados", 1.018750000000000E-03, "m3", "L3", "1.0"));
          dry.Add("gariba",   new UBASE("Persian", "gariba", 2.608000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("makuk",   new UBASE("Persian", "makuk", 4.075000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("woebe(modius)",   new UBASE("Persian", "woebe(modius)", 1.630000000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Persian",   new BaseSystem("Persian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit76()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("pie",   new UBASE("Peruvian", "pie", 2.786600000000000E-01, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Peruvian", "vara", 8.359800000000000E-01, "m", "L", "1.0"));
          area.Add("fanegada",   new UBASE("Peruvian", "fanegada", 3.144881521800000E+03, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Peruvian", "square-vara", 6.988625604000000E-01, "m2", "L2", "1.0"));
          area.Add("topo",   new UBASE("Peruvian", "topo", 2.705995833868800E+03, "m2", "L2", "1.0"));
          mass.Add("arroba",   new UBASE("Peruvian", "arroba", 1.150225000000000E+01, "kg", "M", "1.0"));
          mass.Add("bale",   new UBASE("Peruvian", "bale", 1.133980925000000E+02, "kg", "M", "1.0"));
          mass.Add("fanega",   new UBASE("Peruvian", "fanega", 6.441260000000000E+01, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Peruvian", "libbra", 4.600900000000000E-01, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Peruvian", "quintal", 4.600900000000000E+01, "kg", "M", "1.0"));
          liquid.Add("cubic-vara",   new UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3", "L3", "1.0"));
          _map.Add("Peruvian",   new BaseSystem("Peruvian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit77()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("bisig",   new UBASE("Philippine", "bisig", 4.064000000000000E-01, "m", "L", "1.0"));
          length.Add("dangkal",   new UBASE("Philippine", "dangkal", 2.032000000000000E-01, "m", "L", "1.0"));
          length.Add("dipa",   new UBASE("Philippine", "dipa", 1.727200000000000E+00, "m", "L", "1.0"));
          length.Add("piranggot",   new UBASE("Philippine", "piranggot", 1.270000000000000E-02, "m", "L", "1.0"));
          length.Add("sandamak",   new UBASE("Philippine", "sandamak", 1.016000000000000E-01, "m", "L", "1.0"));
          length.Add("talampakan",   new UBASE("Philippine", "talampakan", 3.048000000000000E-01, "m", "L", "1.0"));
          area.Add("balita",   new UBASE("Philippine", "balita", 2.795000000000000E+03, "m2", "L2", "1.0"));
          area.Add("loan",   new UBASE("Philippine", "loan", 2.795000000000000E+02, "m2", "L2", "1.0"));
          area.Add("quignon",   new UBASE("Philippine", "quignon", 2.795000000000000E+04, "m2", "L2", "1.0"));
          mass.Add("caban",   new UBASE("Philippine", "caban", 5.820000000000000E+01, "kg", "M", "1.0"));
          mass.Add("catty",   new UBASE("Philippine", "catty", 6.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("chinanta",   new UBASE("Philippine", "chinanta", 6.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("dakot",   new UBASE("Philippine", "dakot", 1.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("gatang",   new UBASE("Philippine", "gatang", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("guhit",   new UBASE("Philippine", "guhit", 1.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("kaban",   new UBASE("Philippine", "kaban", 2.500000000000000E+01, "kg", "M", "1.0"));
          mass.Add("kagitna",   new UBASE("Philippine", "kagitna", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("kurot",   new UBASE("Philippine", "kurot", 5.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("lachsa",   new UBASE("Philippine", "lachsa", 2.880000000000000E+01, "kg", "M", "1.0"));
          mass.Add("pecul",   new UBASE("Philippine", "pecul", 6.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("punto",   new UBASE("Philippine", "punto", 2.000000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("apatan",   new UBASE("Philippine", "apatan", 9.990000000000000E-07, "m3", "L3", "1.0"));
          liquid.Add("chupa",   new UBASE("Philippine", "chupa", 3.996000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("ganta",   new UBASE("Philippine", "ganta", 3.996000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kaban",   new UBASE("Philippine", "kaban", 9.990000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("mangok",   new UBASE("Philippine", "mangok", 4.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("salok",   new UBASE("Philippine", "salok", 8.000000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("saro",   new UBASE("Philippine", "saro", 2.500000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-talampakan",   new UBASE("Philippine", "cubic-talampakan", 2.831684659200000E-02, "m3", "L3", "1.0"));
          _map.Add("Philippine",   new BaseSystem("Philippine", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit78()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cal(Cracow)",   new UBASE("Polish", "cal(Cracow)", 1.963666666666670E-02, "m", "L", "1.0"));
          length.Add("cal(new)",   new UBASE("Polish", "cal(new)", 2.400000000000000E-02, "m", "L", "1.0"));
          length.Add("cal(Warsaw)",   new UBASE("Polish", "cal(Warsaw)", 2.481666666666670E-02, "m", "L", "1.0"));
          length.Add("linja(Cracow)",   new UBASE("Polish", "linja(Cracow)", 1.636388888888890E-03, "m", "L", "1.0"));
          length.Add("linja(new)",   new UBASE("Polish", "linja(new)", 2.000000000000000E-03, "m", "L", "1.0"));
          length.Add("linja(Warsaw)",   new UBASE("Polish", "linja(Warsaw)", 2.068055555555560E-03, "m", "L", "1.0"));
          length.Add("lockie(Cracow)",   new UBASE("Polish", "lockie(Cracow)", 1.178200000000000E-01, "m", "L", "1.0"));
          length.Add("lockie(new)",   new UBASE("Polish", "lockie(new)", 1.440000000000000E-01, "m", "L", "1.0"));
          length.Add("lockie(Warsaw)",   new UBASE("Polish", "lockie(Warsaw)", 1.489000000000000E-01, "m", "L", "1.0"));
          length.Add("pret(Cracow)",   new UBASE("Polish", "pret(Cracow)", 3.534600000000000E+00, "m", "L", "1.0"));
          length.Add("pret(new)",   new UBASE("Polish", "pret(new)", 4.320000000000000E+00, "m", "L", "1.0"));
          length.Add("pret(Warsaw)",   new UBASE("Polish", "pret(Warsaw)", 4.467000000000000E+00, "m", "L", "1.0"));
          length.Add("sazen(Cracow)",   new UBASE("Polish", "sazen(Cracow)", 1.413840000000000E+00, "m", "L", "1.0"));
          length.Add("sazen(new)",   new UBASE("Polish", "sazen(new)", 1.728000000000000E+00, "m", "L", "1.0"));
          length.Add("sazen(Warsaw)",   new UBASE("Polish", "sazen(Warsaw)", 1.786800000000000E+00, "m", "L", "1.0"));
          length.Add("stopa(Cracow)",   new UBASE("Polish", "stopa(Cracow)", 2.356400000000000E-01, "m", "L", "1.0"));
          length.Add("stopa(new)",   new UBASE("Polish", "stopa(new)", 2.880000000000000E-01, "m", "L", "1.0"));
          length.Add("stopa(Warsaw)",   new UBASE("Polish", "stopa(Warsaw)", 2.978000000000000E-01, "m", "L", "1.0"));
          area.Add("morga(Cracow)",   new UBASE("Polish", "morga(Cracow)", 3.748019148000000E+03, "m2", "L2", "1.0"));
          area.Add("morga(new)",   new UBASE("Polish", "morga(new)", 5.598720000000000E+03, "m2", "L2", "1.0"));
          area.Add("morga(Warsaw)",   new UBASE("Polish", "morga(Warsaw)", 5.986226700000000E+03, "m2", "L2", "1.0"));
          area.Add("square-pret(Cracow)",   new UBASE("Polish", "square-pret(Cracow)", 1.249339716000000E+01, "m2", "L2", "1.0"));
          area.Add("square-pret(new)",   new UBASE("Polish", "square-pret(new)", 1.866240000000000E+01, "m2", "L2", "1.0"));
          area.Add("square-pret(Warsaw)",   new UBASE("Polish", "square-pret(Warsaw)", 1.995408900000000E+01, "m2", "L2", "1.0"));
          area.Add("square-topa(Cracow)",   new UBASE("Polish", "square-topa(Cracow)", 5.552620960000000E-02, "m2", "L2", "1.0"));
          area.Add("square-stopa(new)",   new UBASE("Polish", "square-stopa(new)", 8.294400000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-stopa(Warsaw)",   new UBASE("Polish", "square-stopa(Warsaw)", 8.868484000000000E-02, "m2", "L2", "1.0"));
          area.Add("wloka(Cracow)",   new UBASE("Polish", "wloka(Cracow)", 1.124405744400000E+05, "m2", "L2", "1.0"));
          area.Add("wloka(new)",   new UBASE("Polish", "wloka(new)", 1.679616000000000E+05, "m2", "L2", "1.0"));
          area.Add("wloka(Warsaw)",   new UBASE("Polish", "wloka(Warsaw)", 1.795868010000000E+05, "m2", "L2", "1.0"));
          mass.Add("centnar",   new UBASE("Polish", "centnar", 4.055040000000000E+01, "kg", "M", "1.0"));
          mass.Add("drachma",   new UBASE("Polish", "drachma", 3.168000000000000E-03, "kg", "M", "1.0"));
          mass.Add("funt",   new UBASE("Polish", "funt", 4.055040000000000E-01, "kg", "M", "1.0"));
          mass.Add("gran",   new UBASE("Polish", "gran", 4.400000000000000E-05, "kg", "M", "1.0"));
          mass.Add("kamian",   new UBASE("Polish", "kamian", 1.013760000000000E+01, "kg", "M", "1.0"));
          mass.Add("lut",   new UBASE("Polish", "lut", 1.267200000000000E-02, "kg", "M", "1.0"));
          mass.Add("skrupul",   new UBASE("Polish", "skrupul", 1.056000000000000E-03, "kg", "M", "1.0"));
          mass.Add("uncja",   new UBASE("Polish", "uncja", 2.534400000000000E-02, "kg", "M", "1.0"));
          liquid.Add("cwierc",   new UBASE("Polish", "cwierc", 3.200000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("garniec",   new UBASE("Polish", "garniec", 4.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("korzec",   new UBASE("Polish", "korzec", 1.280000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("kwarta",   new UBASE("Polish", "kwarta", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kwarterka",   new UBASE("Polish", "kwarterka", 2.500000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-stopa",   new UBASE("Polish", "cubic-stopa", 2.388787200000000E-02, "m3", "L3", "1.0"));
          _map.Add("Polish",   new BaseSystem("Polish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit79()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("braca",   new UBASE("Portuguese", "braca", 2.190000000000000E+00, "m", "L", "1.0"));
          length.Add("covada",   new UBASE("Portuguese", "covada", 6.570000000000000E-01, "m", "L", "1.0"));
          length.Add("covado",   new UBASE("Portuguese", "covado", 6.570000000000000E-01, "m", "L", "1.0"));
          length.Add("estadio",   new UBASE("Portuguese", "estadio", 2.584200000000000E+02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Portuguese", "foot", 3.285000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Portuguese", "feet", 3.285000000000000E-01, "m", "L", "1.0"));
          length.Add("legoa",   new UBASE("Portuguese", "legoa", 6.202080000000000E+03, "m", "L", "1.0"));
          length.Add("linha",   new UBASE("Portuguese", "linha", 2.281250000000000E-03, "m", "L", "1.0"));
          length.Add("milha",   new UBASE("Portuguese", "milha", 2.067360000000000E+03, "m", "L", "1.0"));
          length.Add("palmo",   new UBASE("Portuguese", "palmo", 2.190000000000000E-01, "m", "L", "1.0"));
          length.Add("passo-geometrico",   new UBASE("Portuguese", "passo-geometrico", 1.642500000000000E+00, "m", "L", "1.0"));
          length.Add("pe",   new UBASE("Portuguese", "pe", 3.285000000000000E-01, "m", "L", "1.0"));
          length.Add("polegada",   new UBASE("Portuguese", "polegada", 2.737500000000000E-02, "m", "L", "1.0"));
          length.Add("pollegada",   new UBASE("Portuguese", "pollegada", 2.737500000000000E-02, "m", "L", "1.0"));
          length.Add("ponto",   new UBASE("Portuguese", "ponto", 1.901041666666670E-04, "m", "L", "1.0"));
          length.Add("toesa",   new UBASE("Portuguese", "toesa", 1.971000000000000E+00, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Portuguese", "vara", 1.095000000000000E+00, "m", "L", "1.0"));
          area.Add("ferrado",   new UBASE("Portuguese", "ferrado", 7.254101250000000E+02, "m2", "L2", "1.0"));
          area.Add("geira",   new UBASE("Portuguese", "geira", 5.803281000000000E+03, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Portuguese", "square-vara", 1.199025000000000E+00, "m2", "L2", "1.0"));
          mass.Add("arratel",   new UBASE("Portuguese", "arratel", 4.590000000000000E-01, "kg", "M", "1.0"));
          mass.Add("arroba",   new UBASE("Portuguese", "arroba", 1.468800000000000E+01, "kg", "M", "1.0"));
          mass.Add("escrupolo",   new UBASE("Portuguese", "escrupolo", 1.195312500000000E-03, "kg", "M", "1.0"));
          mass.Add("escrupulo",   new UBASE("Portuguese", "escrupulo", 1.195312500000000E-03, "kg", "M", "1.0"));
          mass.Add("grao",   new UBASE("Portuguese", "grao", 4.980468750000000E-05, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Portuguese", "libra", 4.590000000000000E-01, "kg", "M", "1.0"));
          mass.Add("marco",   new UBASE("Portuguese", "marco", 2.295000000000000E-01, "kg", "M", "1.0"));
          mass.Add("meio",   new UBASE("Portuguese", "meio", 2.295000000000000E-01, "kg", "M", "1.0"));
          mass.Add("oitava",   new UBASE("Portuguese", "oitava", 3.585937500000000E-03, "kg", "M", "1.0"));
          mass.Add("onca",   new UBASE("Portuguese", "onca", 2.868750000000000E-02, "kg", "M", "1.0"));
          mass.Add("outava",   new UBASE("Portuguese", "outava", 3.585937500000000E-03, "kg", "M", "1.0"));
          mass.Add("quarta",   new UBASE("Portuguese", "quarta", 1.147500000000000E-01, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Portuguese", "quintal", 5.875200000000000E+01, "kg", "M", "1.0"));
          mass.Add("tonelada",   new UBASE("Portuguese", "tonelada", 7.931520000000000E+02, "kg", "M", "1.0"));
          liquid.Add("alqueira",   new UBASE("Portuguese", "alqueira", 2.750000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("bota",   new UBASE("Portuguese", "bota", 4.290000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("canada",   new UBASE("Portuguese", "canada", 1.375000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("meio",   new UBASE("Portuguese", "meio", 6.875000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pipa",   new UBASE("Portuguese", "pipa", 4.290000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pote",   new UBASE("Portuguese", "pote", 8.250000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("quartilho",   new UBASE("Portuguese", "quartilho", 3.437500000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("quartillo",   new UBASE("Portuguese", "quartillo", 3.437500000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("tonel",   new UBASE("Portuguese", "tonel", 8.250000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tonnelada",   new UBASE("Portuguese", "tonnelada", 8.580000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("almude",   new UBASE("Portuguese", "almude", 1.650000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("alqueira",   new UBASE("Portuguese", "alqueira", 1.350000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("fanga",   new UBASE("Portuguese", "fanga", 5.400000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("meio",   new UBASE("Portuguese", "meio", 6.750000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("moio",   new UBASE("Portuguese", "moio", 8.100000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("outava",   new UBASE("Portuguese", "outava", 1.687500000000000E-03, "m3", "L3", "1.0"));
          dry.Add("quarto",   new UBASE("Portuguese", "quarto", 3.375000000000000E-03, "m3", "L3", "1.0"));
          _map.Add("Portuguese",   new BaseSystem("Portuguese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit80()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          area.Add("caballeria",   new UBASE("Puerto-Rican", "caballeria", 7.860791250000000E+05, "m2", "L2", "1.0"));
          area.Add("cuerda",   new UBASE("Puerto-Rican", "cuerda", 3.930395625000000E+03, "m2", "L2", "1.0"));
          _map.Add("Puerto-Rican",   new BaseSystem("Puerto-Rican", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit81()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("actus",   new UBASE("Roman", "actus", 3.532800000000000E+01, "m", "L", "1.0"));
          length.Add("cubitum",   new UBASE("Roman", "cubitum", 4.416000000000000E-01, "m", "L", "1.0"));
          length.Add("cubitus",   new UBASE("Roman", "cubitus", 4.416000000000000E-01, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("Roman", "cubit", 4.416000000000000E-01, "m", "L", "1.0"));
          length.Add("decempeda",   new UBASE("Roman", "decempeda", 2.944000000000000E+00, "m", "L", "1.0"));
          length.Add("decempeda-pertica",   new UBASE("Roman", "decempeda-pertica", 2.944000000000000E+00, "m", "L", "1.0"));
          length.Add("digitus",   new UBASE("Roman", "digitus", 1.840000000000000E-02, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Roman", "finger", 1.840000000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Roman", "foot", 2.944000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Roman", "feet", 2.944000000000000E-01, "m", "L", "1.0"));
          length.Add("gradus",   new UBASE("Roman", "gradus", 7.360000000000000E-01, "m", "L", "1.0"));
          length.Add("gradus-pes-sestertius",   new UBASE("Roman", "gradus-pes-sestertius", 7.360000000000000E-01, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Roman", "legua", 2.221500000000000E+03, "m", "L", "1.0"));
          length.Add("leuca",   new UBASE("Roman", "leuca", 2.208000000000000E+03, "m", "L", "1.0"));
          length.Add("leuga",   new UBASE("Roman", "leuga", 2.208000000000000E+03, "m", "L", "1.0"));
          length.Add("mille-passus",   new UBASE("Roman", "mille-passus", 1.472000000000000E+03, "m", "L", "1.0"));
          length.Add("mille-passuum",   new UBASE("Roman", "mille-passuum", 1.472000000000000E+03, "m", "L", "1.0"));
          length.Add("milliarum",   new UBASE("Roman", "milliarum", 1.472000000000000E+03, "m", "L", "1.0"));
          length.Add("palmipes",   new UBASE("Roman", "palmipes", 3.680000000000000E-01, "m", "L", "1.0"));
          length.Add("palmus",   new UBASE("Roman", "palmus", 7.360000000000000E-02, "m", "L", "1.0"));
          length.Add("palmus-major",   new UBASE("Roman", "palmus-major", 2.208000000000000E-01, "m", "L", "1.0"));
          length.Add("passus",   new UBASE("Roman", "passus", 1.472000000000000E+00, "m", "L", "1.0"));
          length.Add("pes",   new UBASE("Roman", "pes", 2.944000000000000E-01, "m", "L", "1.0"));
          length.Add("pes(1st-legal)",   new UBASE("Roman", "pes(1st-legal)", 2.962000000000000E-01, "m", "L", "1.0"));
          length.Add("pes(2nd-legal)",   new UBASE("Roman", "pes(2nd-legal)", 2.967000000000000E-01, "m", "L", "1.0"));
          length.Add("pes(Drussian)",   new UBASE("Roman", "pes(Drussian)", 3.196000000000000E-01, "m", "L", "1.0"));
          length.Add("pollex",   new UBASE("Roman", "pollex", 2.453333333333330E-02, "m", "L", "1.0"));
          length.Add("schoenus",   new UBASE("Roman", "schoenus", 5.924000000000000E+03, "m", "L", "1.0"));
          length.Add("stadium",   new UBASE("Roman", "stadium", 1.997500000000000E+02, "m", "L", "1.0"));
          length.Add("uncia",   new UBASE("Roman", "uncia", 2.453333333333330E-02, "m", "L", "1.0"));
          area.Add("acnua",   new UBASE("Roman", "acnua", 1.263375936000000E+03, "m2", "L2", "1.0"));
          area.Add("actus-quadratus",   new UBASE("Roman", "actus-quadratus", 1.263375936000000E+03, "m2", "L2", "1.0"));
          area.Add("actus-simplex",   new UBASE("Roman", "actus-simplex", 4.211253120000000E+01, "m2", "L2", "1.0"));
          area.Add("bes",   new UBASE("Roman", "bes", 1.684501248000000E+03, "m2", "L2", "1.0"));
          area.Add("centuria",   new UBASE("Roman", "centuria", 5.053503744000000E+05, "m2", "L2", "1.0"));
          area.Add("centurium",   new UBASE("Roman", "centurium", 5.053503744000000E+05, "m2", "L2", "1.0"));
          area.Add("clima",   new UBASE("Roman", "clima", 3.158439840000000E+02, "m2", "L2", "1.0"));
          area.Add("decempeda-quadrata",   new UBASE("Roman", "decempeda-quadrata", 8.667136000000000E+00, "m2", "L2", "1.0"));
          area.Add("deunx",   new UBASE("Roman", "deunx", 2.316189216000000E+03, "m2", "L2", "1.0"));
          area.Add("dextans",   new UBASE("Roman", "dextans", 2.105626560000000E+03, "m2", "L2", "1.0"));
          area.Add("dimidium-scruplum",   new UBASE("Roman", "dimidium-scruplum", 4.386722000000000E+00, "m2", "L2", "1.0"));
          area.Add("dodrans",   new UBASE("Roman", "dodrans", 1.895063904000000E+03, "m2", "L2", "1.0"));
          area.Add("duo-scrupula",   new UBASE("Roman", "duo-scrupula", 1.754688800000000E+01, "m2", "L2", "1.0"));
          area.Add("heredium",   new UBASE("Roman", "heredium", 5.053503744000000E+03, "m2", "L2", "1.0"));
          area.Add("jugerum",   new UBASE("Roman", "jugerum", 2.526751872000000E+03, "m2", "L2", "1.0"));
          area.Add("quadrans",   new UBASE("Roman", "quadrans", 6.316879680000000E+02, "m2", "L2", "1.0"));
          area.Add("quadratus-pes(1st-legal)",   new UBASE("Roman", "quadratus-pes(1st-legal)", 8.773444000000000E-02, "m2", "L2", "1.0"));
          area.Add("quadratus-pes(2nd-legal)",   new UBASE("Roman", "quadratus-pes(2nd-legal)", 8.803089000000000E-02, "m2", "L2", "1.0"));
          area.Add("quadratus-pes(common)",   new UBASE("Roman", "quadratus-pes(common)", 8.667136000000000E-02, "m2", "L2", "1.0"));
          area.Add("quadratus-pes(Drussian)",   new UBASE("Roman", "quadratus-pes(Drussian)", 1.021441600000000E-01, "m2", "L2", "1.0"));
          area.Add("quincunx",   new UBASE("Roman", "quincunx", 1.052813280000000E+03, "m2", "L2", "1.0"));
          area.Add("saltus",   new UBASE("Roman", "saltus", 2.021401497600000E+06, "m2", "L2", "1.0"));
          area.Add("scrupulum",   new UBASE("Roman", "scrupulum", 8.773444000000000E+00, "m2", "L2", "1.0"));
          area.Add("semis",   new UBASE("Roman", "semis", 1.263375936000000E+03, "m2", "L2", "1.0"));
          area.Add("semiuncia",   new UBASE("Roman", "semiuncia", 1.052813280000000E+02, "m2", "L2", "1.0"));
          area.Add("septunx",   new UBASE("Roman", "septunx", 1.473938592000000E+03, "m2", "L2", "1.0"));
          area.Add("sextans",   new UBASE("Roman", "sextans", 4.211253120000000E+02, "m2", "L2", "1.0"));
          area.Add("sextula",   new UBASE("Roman", "sextula", 3.509377600000000E+01, "m2", "L2", "1.0"));
          area.Add("short-actus",   new UBASE("Roman", "short-actus", 3.509377600000000E+01, "m2", "L2", "1.0"));
          area.Add("sicilius",   new UBASE("Roman", "sicilius", 5.264066400000000E+01, "m2", "L2", "1.0"));
          area.Add("triens",   new UBASE("Roman", "triens", 8.422506240000000E+02, "m2", "L2", "1.0"));
          area.Add("uncia",   new UBASE("Roman", "uncia", 2.105626560000000E+02, "m2", "L2", "1.0"));
          area.Add("versum",   new UBASE("Roman", "versum", 8.773444000000000E+02, "m2", "L2", "1.0"));
          mass.Add("bes",   new UBASE("Roman", "bes", 2.180000000000000E-01, "kg", "M", "1.0"));
          mass.Add("bessis",   new UBASE("Roman", "bessis", 2.180000000000000E-01, "kg", "M", "1.0"));
          mass.Add("centum-podium",   new UBASE("Roman", "centum-podium", 3.270000000000000E+01, "kg", "M", "1.0"));
          mass.Add("demidia-sextula",   new UBASE("Roman", "demidia-sextula", 2.270833333333330E-03, "kg", "M", "1.0"));
          mass.Add("denarius",   new UBASE("Roman", "denarius", 3.892857142857140E-03, "kg", "M", "1.0"));
          mass.Add("denier",   new UBASE("Roman", "denier", 3.406250000000000E-03, "kg", "M", "1.0"));
          mass.Add("deunx",   new UBASE("Roman", "deunx", 2.997500000000000E-01, "kg", "M", "1.0"));
          mass.Add("dextans",   new UBASE("Roman", "dextans", 2.725000000000000E-01, "kg", "M", "1.0"));
          mass.Add("dodrans",   new UBASE("Roman", "dodrans", 2.452500000000000E-01, "kg", "M", "1.0"));
          mass.Add("duella",   new UBASE("Roman", "duella", 9.083333333333330E-03, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Roman", "libra", 3.270000000000000E-01, "kg", "M", "1.0"));
          mass.Add("miliaresium",   new UBASE("Roman", "miliaresium", 5.450000000000000E-03, "kg", "M", "1.0"));
          mass.Add("mina",   new UBASE("Roman", "mina", 5.450000000000000E-01, "kg", "M", "1.0"));
          mass.Add("obolus",   new UBASE("Roman", "obolus", 5.677083333333330E-04, "kg", "M", "1.0"));
          mass.Add("podium",   new UBASE("Roman", "podium", 3.270000000000000E-01, "kg", "M", "1.0"));
          mass.Add("quadrans",   new UBASE("Roman", "quadrans", 8.175000000000000E-02, "kg", "M", "1.0"));
          mass.Add("quadrans-teruncius",   new UBASE("Roman", "quadrans-teruncius", 8.175000000000000E-02, "kg", "M", "1.0"));
          mass.Add("quicunx",   new UBASE("Roman", "quicunx", 1.362500000000000E-01, "kg", "M", "1.0"));
          mass.Add("scripulum",   new UBASE("Roman", "scripulum", 1.135416666666670E-03, "kg", "M", "1.0"));
          mass.Add("semis",   new UBASE("Roman", "semis", 1.635000000000000E-01, "kg", "M", "1.0"));
          mass.Add("semisextula",   new UBASE("Roman", "semisextula", 2.270833333333330E-03, "kg", "M", "1.0"));
          mass.Add("semissis",   new UBASE("Roman", "semissis", 1.635000000000000E-01, "kg", "M", "1.0"));
          mass.Add("semiuncia",   new UBASE("Roman", "semiuncia", 1.362500000000000E-02, "kg", "M", "1.0"));
          mass.Add("septunx",   new UBASE("Roman", "septunx", 1.907500000000000E-01, "kg", "M", "1.0"));
          mass.Add("sescuncia",   new UBASE("Roman", "sescuncia", 4.087500000000000E-02, "kg", "M", "1.0"));
          mass.Add("sescunx",   new UBASE("Roman", "sescunx", 4.087500000000000E-02, "kg", "M", "1.0"));
          mass.Add("sextans",   new UBASE("Roman", "sextans", 5.450000000000000E-02, "kg", "M", "1.0"));
          mass.Add("sextula",   new UBASE("Roman", "sextula", 4.541666666666670E-03, "kg", "M", "1.0"));
          mass.Add("siciliquus",   new UBASE("Roman", "siciliquus", 6.812500000000000E-03, "kg", "M", "1.0"));
          mass.Add("sicilium",   new UBASE("Roman", "sicilium", 6.812500000000000E-03, "kg", "M", "1.0"));
          mass.Add("sicilius",   new UBASE("Roman", "sicilius", 6.812500000000000E-03, "kg", "M", "1.0"));
          mass.Add("siliqua",   new UBASE("Roman", "siliqua", 1.892361111111110E-04, "kg", "M", "1.0"));
          mass.Add("solidus",   new UBASE("Roman", "solidus", 4.541666666666670E-03, "kg", "M", "1.0"));
          mass.Add("triens",   new UBASE("Roman", "triens", 1.090000000000000E-01, "kg", "M", "1.0"));
          mass.Add("uncia",   new UBASE("Roman", "uncia", 2.725000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("acetabulum",   new UBASE("Roman", "acetabulum", 6.866000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("ligula",   new UBASE("Roman", "ligula", 1.144333333333330E-05, "m3", "L3", "1.0"));
          liquid.Add("amphora",   new UBASE("Roman", "amphora", 2.636544000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("amphora-quadrantal",   new UBASE("Roman", "amphora-quadrantal", 2.636544000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("chenica",   new UBASE("Roman", "chenica", 8.239200000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cochlearia",   new UBASE("Roman", "cochlearia", 1.144333333333330E-05, "m3", "L3", "1.0"));
          liquid.Add("congius",   new UBASE("Roman", "congius", 3.295680000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("cotyla",   new UBASE("Roman", "cotyla", 2.746400000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("culeus",   new UBASE("Roman", "culeus", 5.273088000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("culleus",   new UBASE("Roman", "culleus", 5.273088000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("cyathus",   new UBASE("Roman", "cyathus", 4.577333333333330E-05, "m3", "L3", "1.0"));
          liquid.Add("dolium",   new UBASE("Roman", "dolium", 5.273088000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("hemina",   new UBASE("Roman", "hemina", 2.746400000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("meterte",   new UBASE("Roman", "meterte", 2.636544000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("quartarius",   new UBASE("Roman", "quartarius", 1.373200000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("quartus",   new UBASE("Roman", "quartus", 1.373200000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("semodius",   new UBASE("Roman", "semodius", 4.394240000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("sextarius",   new UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("urna",   new UBASE("Roman", "urna", 1.318272000000000E-02, "m3", "L3", "1.0"));
          dry.Add("acetabulum",   new UBASE("Roman", "acetabulum", 6.866000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("cotyla",   new UBASE("Roman", "cotyla", 2.746400000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cyathus",   new UBASE("Roman", "cyathus", 4.577333333333330E-05, "m3", "L3", "1.0"));
          dry.Add("hemina",   new UBASE("Roman", "hemina", 2.746400000000000E-04, "m3", "L3", "1.0"));
          dry.Add("ligula",   new UBASE("Roman", "ligula", 1.144333333333330E-05, "m3", "L3", "1.0"));
          dry.Add("modius",   new UBASE("Roman", "modius", 8.788480000000000E-03, "m3", "L3", "1.0"));
          dry.Add("modius-castrensis",   new UBASE("Roman", "modius-castrensis", 1.318272000000000E-02, "m3", "L3", "1.0"));
          dry.Add("muid",   new UBASE("Roman", "muid", 8.788480000000000E-03, "m3", "L3", "1.0"));
          dry.Add("quadrantal",   new UBASE("Roman", "quadrantal", 2.636544000000000E-02, "m3", "L3", "1.0"));
          dry.Add("quartarius",   new UBASE("Roman", "quartarius", 1.373200000000000E-04, "m3", "L3", "1.0"));
          dry.Add("semimodius",   new UBASE("Roman", "semimodius", 4.394240000000000E-03, "m3", "L3", "1.0"));
          dry.Add("sextarius",   new UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Roman",   new BaseSystem("Roman", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit82()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cot(Moldavia)",   new UBASE("Romanian", "cot(Moldavia)", 6.640000000000000E-01, "m", "L", "1.0"));
          length.Add("cot(Wallachia)",   new UBASE("Romanian", "cot(Wallachia)", 6.370000000000000E-01, "m", "L", "1.0"));
          length.Add("deget",   new UBASE("Romanian", "deget", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("endere",   new UBASE("Romanian", "endere", 6.620000000000000E-01, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Romanian", "finger", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("funie",   new UBASE("Romanian", "funie", 7.000000000000000E+01, "m", "L", "1.0"));
          length.Add("halibiu",   new UBASE("Romanian", "halibiu", 7.010000000000000E-01, "m", "L", "1.0"));
          length.Add("lat-de-palma",   new UBASE("Romanian", "lat-de-palma", 1.250000000000000E-01, "m", "L", "1.0"));
          length.Add("leghe",   new UBASE("Romanian", "leghe", 4.444000000000000E+03, "m", "L", "1.0"));
          length.Add("palma",   new UBASE("Romanian", "palma", 2.500000000000000E-01, "m", "L", "1.0"));
          length.Add("palmac",   new UBASE("Romanian", "palmac", 3.480000000000000E-02, "m", "L", "1.0"));
          length.Add("pas-mare",   new UBASE("Romanian", "pas-mare", 1.500000000000000E+00, "m", "L", "1.0"));
          length.Add("pas-mic",   new UBASE("Romanian", "pas-mic", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("picior",   new UBASE("Romanian", "picior", 3.333333333333330E-01, "m", "L", "1.0"));
          length.Add("posta",   new UBASE("Romanian", "posta", 1.400000000000000E+04, "m", "L", "1.0"));
          length.Add("prajina",   new UBASE("Romanian", "prajina", 6.000000000000000E+00, "m", "L", "1.0"));
          length.Add("stanjen",   new UBASE("Romanian", "stanjen", 2.000000000000000E+00, "m", "L", "1.0"));
          length.Add("stringene",   new UBASE("Romanian", "stringene", 1.960000000000000E+00, "m", "L", "1.0"));
          length.Add("versta",   new UBASE("Romanian", "versta", 1.067000000000000E+03, "m", "L", "1.0"));
          area.Add("falce",   new UBASE("Romanian", "falce", 1.430000000000000E+01, "m2", "L2", "1.0"));
          area.Add("feredela",   new UBASE("Romanian", "feredela", 1.250000000000000E+00, "m2", "L2", "1.0"));
          area.Add("lugar",   new UBASE("Romanian", "lugar", 5.700000000000000E+03, "m2", "L2", "1.0"));
          area.Add("pogon",   new UBASE("Romanian", "pogon", 5.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("prajina",   new UBASE("Romanian", "prajina", 1.950000000000000E+02, "m2", "L2", "1.0"));
          area.Add("stanjen-patrat",   new UBASE("Romanian", "stanjen-patrat", 3.596650000000000E+00, "m2", "L2", "1.0"));
          mass.Add("cantar",   new UBASE("Romanian", "cantar", 5.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("dram",   new UBASE("Romanian", "dram", 3.246753246753250E-03, "kg", "M", "1.0"));
          mass.Add("font",   new UBASE("Romanian", "font", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("oke",   new UBASE("Romanian", "oke", 1.272727272727270E+00, "kg", "M", "1.0"));
          liquid.Add("banita(Moldavia)",   new UBASE("Romanian", "banita(Moldavia)", 2.150000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("banita(Wallachia)",   new UBASE("Romanian", "banita(Wallachia)", 3.396000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("chiup",   new UBASE("Romanian", "chiup", 3.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("feredela-feldera",   new UBASE("Romanian", "feredela-feldera", 2.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("giumatate",   new UBASE("Romanian", "giumatate", 1.350000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("litra",   new UBASE("Romanian", "litra", 2.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("merta(Moldavia)",   new UBASE("Romanian", "merta(Moldavia)", 1.150000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("merta(Transylvania)",   new UBASE("Romanian", "merta(Transylvania)", 2.250000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("obroc-mare(Moldavia)",   new UBASE("Romanian", "obroc-mare(Moldavia)", 6.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("obroc-mare(Wallachia)",   new UBASE("Romanian", "obroc-mare(Wallachia)", 5.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("obroc-mic(Moldavia)",   new UBASE("Romanian", "obroc-mic(Moldavia)", 3.300000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("obroc-mic(Wallachia)",   new UBASE("Romanian", "obroc-mic(Wallachia)", 2.750000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("oca(Moldavia)",   new UBASE("Romanian", "oca(Moldavia)", 1.500000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("oca(Wallachia)",   new UBASE("Romanian", "oca(Wallachia)", 1.250000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("oke",   new UBASE("Romanian", "oke", 1.415000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("pinta(Transylvania)",   new UBASE("Romanian", "pinta(Transylvania)", 3.394000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("sau(Moldavia)",   new UBASE("Romanian", "sau(Moldavia)", 3.472222222222220E-06, "m3", "L3", "1.0"));
          liquid.Add("tina",   new UBASE("Romanian", "tina", 1.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("vadra",   new UBASE("Romanian", "vadra", 1.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("viacka",   new UBASE("Romanian", "viacka", 1.415000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("dimerla",   new UBASE("Romanian", "dimerla", 2.460000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("kilo",   new UBASE("Romanian", "kilo", 3.936000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("mirze",   new UBASE("Romanian", "mirze", 1.968000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("oke",   new UBASE("Romanian", "oke", 1.537500000000000E-03, "m3", "L3", "1.0"));
          _map.Add("Romanian",   new BaseSystem("Romanian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit83()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("arshin",   new UBASE("Russian", "arshin", 7.112000000000000E-01, "m", "L", "1.0"));
          length.Add("chetvert",   new UBASE("Russian", "chetvert", 1.778000000000000E-01, "m", "L", "1.0"));
          length.Add("duime",   new UBASE("Russian", "duime", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("dyuym",   new UBASE("Russian", "dyuym", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Russian", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Russian", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("foute",   new UBASE("Russian", "foute", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("fut",   new UBASE("Russian", "fut", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("Russian", "inch", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("ladon",   new UBASE("Russian", "ladon", 7.500000000000000E-02, "m", "L", "1.0"));
          length.Add("line",   new UBASE("Russian", "line", 2.540000000000000E-03, "m", "L", "1.0"));
          length.Add("liniya",   new UBASE("Russian", "liniya", 2.540000000000000E-03, "m", "L", "1.0"));
          length.Add("lokot",   new UBASE("Russian", "lokot", 4.500000000000000E-01, "m", "L", "1.0"));
          length.Add("milya",   new UBASE("Russian", "milya", 7.467600000000000E+03, "m", "L", "1.0"));
          length.Add("paletz",   new UBASE("Russian", "paletz", 1.270000000000000E-02, "m", "L", "1.0"));
          length.Add("pyad",   new UBASE("Russian", "pyad", 1.778000000000000E-01, "m", "L", "1.0"));
          length.Add("saashen",   new UBASE("Russian", "saashen", 2.133600000000000E+00, "m", "L", "1.0"));
          length.Add("sazhen",   new UBASE("Russian", "sazhen", 2.133600000000000E+00, "m", "L", "1.0"));
          length.Add("shag",   new UBASE("Russian", "shag", 7.101840000000000E-01, "m", "L", "1.0"));
          length.Add("sotka",   new UBASE("Russian", "sotka", 2.133600000000000E-02, "m", "L", "1.0"));
          length.Add("tchevert",   new UBASE("Russian", "tchevert", 1.778000000000000E-01, "m", "L", "1.0"));
          length.Add("totchka",   new UBASE("Russian", "totchka", 2.540000000000000E-04, "m", "L", "1.0"));
          length.Add("vershok",   new UBASE("Russian", "vershok", 4.445000000000000E-02, "m", "L", "1.0"));
          length.Add("verst",   new UBASE("Russian", "verst", 1.066800000000000E+03, "m", "L", "1.0"));
          length.Add("versta",   new UBASE("Russian", "versta", 1.066800000000000E+03, "m", "L", "1.0"));
          length.Add("vyorst",   new UBASE("Russian", "vyorst", 1.066800000000000E+03, "m", "L", "1.0"));
          area.Add("dessatine",   new UBASE("Russian", "dessatine", 1.092539750400000E+04, "m2", "L2", "1.0"));
          area.Add("desyatina",   new UBASE("Russian", "desyatina", 1.092539750400000E+04, "m2", "L2", "1.0"));
          mass.Add("berkovets",   new UBASE("Russian", "berkovets", 1.638068716982680E+02, "kg", "M", "1.0"));
          mass.Add("doli",   new UBASE("Russian", "doli", 4.443545781745540E-05, "kg", "M", "1.0"));
          mass.Add("doli(apothecary)",   new UBASE("Russian", "doli(apothecary)", 4.443494030000000E-05, "kg", "M", "1.0"));
          mass.Add("dolya",   new UBASE("Russian", "dolya", 4.443545781745540E-05, "kg", "M", "1.0"));
          mass.Add("drachme(apothecary)",   new UBASE("Russian", "drachme(apothecary)", 3.732534985200000E-03, "kg", "M", "1.0"));
          mass.Add("drakhma(apothecary)",   new UBASE("Russian", "drakhma(apothecary)", 3.732534985200000E-03, "kg", "M", "1.0"));
          mass.Add("funt",   new UBASE("Russian", "funt", 4.095171792456690E-01, "kg", "M", "1.0"));
          mass.Add("funt(apothecary)",   new UBASE("Russian", "funt(apothecary)", 3.583233585792000E-01, "kg", "M", "1.0"));
          mass.Add("grain(apothecary)",   new UBASE("Russian", "grain(apothecary)", 6.220891642000000E-05, "kg", "M", "1.0"));
          mass.Add("gran(apothecary)",   new UBASE("Russian", "gran(apothecary)", 6.220891642000000E-05, "kg", "M", "1.0"));
          mass.Add("lana",   new UBASE("Russian", "lana", 3.412643160380580E-02, "kg", "M", "1.0"));
          mass.Add("lot",   new UBASE("Russian", "lot", 1.279741185142720E-02, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Russian", "loth", 1.279741185142720E-02, "kg", "M", "1.0"));
          mass.Add("once",   new UBASE("Russian", "once", 2.559482370285430E-02, "kg", "M", "1.0"));
          mass.Add("once(apothecary)",   new UBASE("Russian", "once(apothecary)", 2.986027988160000E-02, "kg", "M", "1.0"));
          mass.Add("packen",   new UBASE("Russian", "packen", 4.914206150948030E+02, "kg", "M", "1.0"));
          mass.Add("pood",   new UBASE("Russian", "pood", 1.638068716982680E+01, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Russian", "pound", 4.095171792456690E-01, "kg", "M", "1.0"));
          mass.Add("pound(apothecary)",   new UBASE("Russian", "pound(apothecary)", 3.583233585792000E-01, "kg", "M", "1.0"));
          mass.Add("scrupul(apothecary)",   new UBASE("Russian", "scrupul(apothecary)", 1.244178328400000E-03, "kg", "M", "1.0"));
          mass.Add("scrupule(apothecary)",   new UBASE("Russian", "scrupule(apothecary)", 1.244178328400000E-03, "kg", "M", "1.0"));
          mass.Add("solotnik",   new UBASE("Russian", "solotnik", 4.265803950475720E-03, "kg", "M", "1.0"));
          mass.Add("untsiya(apothecary)",   new UBASE("Russian", "untsiya(apothecary)", 2.986027988160000E-02, "kg", "M", "1.0"));
          mass.Add("zolotnik",   new UBASE("Russian", "zolotnik", 4.265803950475720E-03, "kg", "M", "1.0"));
          liquid.Add("anker",   new UBASE("Russian", "anker", 3.689823000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bochka",   new UBASE("Russian", "bochka", 4.919764000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("botdlka",   new UBASE("Russian", "botdlka", 4.919764000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("bottle(vodka)",   new UBASE("Russian", "bottle(vodka)", 6.149705000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("bottle(wine)",   new UBASE("Russian", "bottle(wine)", 7.687131250000000E-04, "m3", "L3", "1.0"));
          liquid.Add("butylka(vodka)",   new UBASE("Russian", "butylka(vodka)", 6.149705000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("butylka(wine)",   new UBASE("Russian", "butylka(wine)", 7.687131250000000E-04, "m3", "L3", "1.0"));
          liquid.Add("charka",   new UBASE("Russian", "charka", 1.229941000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("chetvert",   new UBASE("Russian", "chetvert", 1.537426250000000E-03, "m3", "L3", "1.0"));
          liquid.Add("chkalik",   new UBASE("Russian", "chkalik", 6.149705000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("fass",   new UBASE("Russian", "fass", 4.919764000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("kosushka",   new UBASE("Russian", "kosushka", 6.149705000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("krouchka",   new UBASE("Russian", "krouchka", 1.229941000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kruzhka",   new UBASE("Russian", "kruzhka", 1.229941000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("Russian", "pipe", 4.427787600000000E-01, "m3", "L3", "1.0"));
          liquid.Add("shkalik",   new UBASE("Russian", "shkalik", 6.149705000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("shtoff",   new UBASE("Russian", "shtoff", 1.537426250000000E-03, "m3", "L3", "1.0"));
          liquid.Add("stekar",   new UBASE("Russian", "stekar", 1.844911500000000E-02, "m3", "L3", "1.0"));
          liquid.Add("tcharka",   new UBASE("Russian", "tcharka", 1.229941000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("vedro",   new UBASE("Russian", "vedro", 1.229941000000000E-02, "m3", "L3", "1.0"));
          dry.Add("chast",   new UBASE("Russian", "chast", 1.093280888888890E-04, "m3", "L3", "1.0"));
          dry.Add("chetverik",   new UBASE("Russian", "chetverik", 2.623874133333330E-02, "m3", "L3", "1.0"));
          dry.Add("chetvert",   new UBASE("Russian", "chetvert", 2.099099306666670E-01, "m3", "L3", "1.0"));
          dry.Add("garnets",   new UBASE("Russian", "garnets", 3.279842666666670E-03, "m3", "L3", "1.0"));
          dry.Add("garnetz",   new UBASE("Russian", "garnetz", 3.279842666666670E-03, "m3", "L3", "1.0"));
          dry.Add("krushky",   new UBASE("Russian", "krushky", 1.311937066666670E-03, "m3", "L3", "1.0"));
          dry.Add("kruzhka",   new UBASE("Russian", "kruzhka", 1.311937066666670E-03, "m3", "L3", "1.0"));
          dry.Add("lof",   new UBASE("Russian", "lof", 6.472222862222220E-02, "m3", "L3", "1.0"));
          dry.Add("osmina",   new UBASE("Russian", "osmina", 1.049549653333330E-01, "m3", "L3", "1.0"));
          dry.Add("osmini",   new UBASE("Russian", "osmini", 1.049549653333330E-01, "m3", "L3", "1.0"));
          dry.Add("payok",   new UBASE("Russian", "payok", 5.247748266666670E-02, "m3", "L3", "1.0"));
          dry.Add("polougametz",   new UBASE("Russian", "polougametz", 1.639921333333330E-03, "m3", "L3", "1.0"));
          dry.Add("tcbetvert",   new UBASE("Russian", "tcbetvert", 2.099099306666670E-01, "m3", "L3", "1.0"));
          dry.Add("tchast",   new UBASE("Russian", "tchast", 1.093280888888890E-04, "m3", "L3", "1.0"));
          dry.Add("tcheverik",   new UBASE("Russian", "tcheverik", 2.623874133333330E-02, "m3", "L3", "1.0"));
          dry.Add("vedro",   new UBASE("Russian", "vedro", 1.311937066666670E-02, "m3", "L3", "1.0"));
          _map.Add("Russian",   new BaseSystem("Russian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit84()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("vara",   new UBASE("Salvadoran", "vara", 8.128000000000000E-01, "m", "L", "1.0"));
          area.Add("square-vara",   new UBASE("Salvadoran", "square-vara", 6.606438400000000E-01, "m2", "L2", "1.0"));
          mass.Add("caja",   new UBASE("Salvadoran", "caja", 1.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Salvadoran", "carga", 1.610000000000000E+02, "kg", "M", "1.0"));
          mass.Add("fanega",   new UBASE("Salvadoran", "fanega", 9.200000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("botella",   new UBASE("Salvadoran", "botella", 6.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cajuella",   new UBASE("Salvadoran", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Salvadoran", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Salvadoran", "cubic-vara", 5.369713131520000E-01, "m3", "L3", "1.0"));
          _map.Add("Salvadoran",   new BaseSystem("Salvadoran", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit85()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("baryd",   new UBASE("Saudi-Arabian", "baryd", 1.932000000000000E+04, "m", "L", "1.0"));
          length.Add("busa",   new UBASE("Saudi-Arabian", "busa", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("cassaba",   new UBASE("Saudi-Arabian", "cassaba", 3.840000000000000E+01, "m", "L", "1.0"));
          length.Add("covid",   new UBASE("Saudi-Arabian", "covid", 4.820000000000000E-01, "m", "L", "1.0"));
          length.Add("farsakh",   new UBASE("Saudi-Arabian", "farsakh", 4.830000000000000E+03, "m", "L", "1.0"));
          length.Add("guz",   new UBASE("Saudi-Arabian", "guz", 6.350000000000000E+00, "m", "L", "1.0"));
          length.Add("marhala",   new UBASE("Saudi-Arabian", "marhala", 3.864000000000000E+04, "m", "L", "1.0"));
          area.Add("square-covid",   new UBASE("Saudi-Arabian", "square-covid", 2.323240000000000E-01, "m2", "L2", "1.0"));
          mass.Add("bahar",   new UBASE("Saudi-Arabian", "bahar", 2.025000000000000E+02, "kg", "M", "1.0"));
          mass.Add("bokard",   new UBASE("Saudi-Arabian", "bokard", 2.025000000000000E+02, "kg", "M", "1.0"));
          mass.Add("buhar",   new UBASE("Saudi-Arabian", "buhar", 6.750000000000000E+01, "kg", "M", "1.0"));
          mass.Add("coffilas",   new UBASE("Saudi-Arabian", "coffilas", 3.375000000000000E-03, "kg", "M", "1.0"));
          mass.Add("farcella",   new UBASE("Saudi-Arabian", "farcella", 1.350000000000000E+01, "kg", "M", "1.0"));
          mass.Add("farzil",   new UBASE("Saudi-Arabian", "farzil", 1.350000000000000E+01, "kg", "M", "1.0"));
          mass.Add("kantar",   new UBASE("Saudi-Arabian", "kantar", 6.750000000000000E+01, "kg", "M", "1.0"));
          mass.Add("maund",   new UBASE("Saudi-Arabian", "maund", 1.350000000000000E+00, "kg", "M", "1.0"));
          mass.Add("ratl",   new UBASE("Saudi-Arabian", "ratl", 4.500000000000000E-01, "kg", "M", "1.0"));
          mass.Add("tukeas",   new UBASE("Saudi-Arabian", "tukeas", 3.375000000000000E-02, "kg", "M", "1.0"));
          mass.Add("vakias",   new UBASE("Saudi-Arabian", "vakias", 3.375000000000000E-02, "kg", "M", "1.0"));
          liquid.Add("ardabb",   new UBASE("Saudi-Arabian", "ardabb", 1.580800000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("ardebb",   new UBASE("Saudi-Arabian", "ardebb", 1.580800000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("cuddy",   new UBASE("Saudi-Arabian", "cuddy", 3.800000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("nusfiah",   new UBASE("Saudi-Arabian", "nusfiah", 9.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("vakia",   new UBASE("Saudi-Arabian", "vakia", 5.937500000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("zudda",   new UBASE("Saudi-Arabian", "zudda", 7.600000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("kella",   new UBASE("Saudi-Arabian", "kella", 3.541666666666670E-02, "m3", "L3", "1.0"));
          dry.Add("mecdema",   new UBASE("Saudi-Arabian", "mecdema", 8.145833333333330E-03, "m3", "L3", "1.0"));
          dry.Add("teman",   new UBASE("Saudi-Arabian", "teman", 8.500000000000000E-02, "m3", "L3", "1.0"));
          _map.Add("Saudi-Arabian",   new BaseSystem("Saudi-Arabian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit86()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("angstrom-star",   new UBASE("Scientific", "angstrom-star", 1.000014819200000E-10, "m", "L", "1.0"));
          length.Add("WKT1",   new UBASE("Scientific", "WKT1", 1.000014819200000E-10, "m", "L", "1.0"));
          length.Add("A*",   new UBASE("Scientific", "A*", 1.000014819200000E-10, "m", "L", "1.0"));
          length.Add("arc-minute",   new UBASE("Scientific", "arc-minute", 2.908882086657220E-04, "m", "L", "1.0"));
          length.Add("arcmin",   new UBASE("Scientific", "arcmin", 2.908882086657220E-04, "m", "L", "1.0"));
          length.Add("arcminute",   new UBASE("Scientific", "arcminute", 2.908882086657220E-04, "m", "L", "1.0"));
          length.Add("arc-second",   new UBASE("Scientific", "arc-second", 4.848136811095360E-06, "m", "L", "1.0"));
          length.Add("arcsec",   new UBASE("Scientific", "arcsec", 4.848136811095360E-06, "m", "L", "1.0"));
          length.Add("arcsecond",   new UBASE("Scientific", "arcsecond", 4.848136811095360E-06, "m", "L", "1.0"));
          length.Add("baromil",   new UBASE("Scientific", "baromil", 7.500616827041700E-04, "m", "L", "1.0"));
          length.Add("bicron",   new UBASE("Scientific", "bicron", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("electron-classical-radius",   new UBASE("Scientific", "electron-classical-radius", 2.817940326204930E-15, "m", "L", "1.0"));
          length.Add("re",   new UBASE("Scientific", "re", 2.817940326204930E-15, "m", "L", "1.0"));
          length.Add("fermi",   new UBASE("Scientific", "fermi", 1.000000000000000E-15, "m", "L", "1.0"));
          length.Add("F",   new UBASE("Scientific", "F", 1.000000000000000E-15, "m", "L", "1.0"));
          length.Add("f",   new UBASE("Scientific", "f", 1.000000000000000E-15, "m", "L", "1.0"));
          length.Add("mickey",   new UBASE("Scientific", "mickey", 1.060000000000000E-04, "m", "L", "1.0"));
          length.Add("micromicron",   new UBASE("Scientific", "micromicron", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("uu",   new UBASE("Scientific", "uu", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("micron",   new UBASE("Scientific", "micron", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("u",   new UBASE("Scientific", "u", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("millimicron",   new UBASE("Scientific", "millimicron", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("mm",   new UBASE("Scientific", "mm", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("nm",   new UBASE("Scientific", "nm", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("mu",   new UBASE("Scientific", "mu", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("milline",   new UBASE("Scientific", "milline", 2.116666666666670E-03, "m", "L", "1.0"));
          length.Add("minion",   new UBASE("Scientific", "minion", 2.469444444444440E-03, "m", "L", "1.0"));
          length.Add("minute-of-arc",   new UBASE("Scientific", "minute-of-arc", 2.908882086657220E-04, "m", "L", "1.0"));
          length.Add("myriameter",   new UBASE("Scientific", "myriameter", 1.000000000000000E+04, "m", "L", "1.0"));
          length.Add("nanon",   new UBASE("Scientific", "nanon", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("paragon",   new UBASE("Scientific", "paragon", 7.055555555555560E-03, "m", "L", "1.0"));
          length.Add("pica(small)",   new UBASE("Scientific", "pica(small)", 3.880555555555560E-03, "m", "L", "1.0"));
          length.Add("rowland",   new UBASE("Scientific", "rowland", 1.000000000000000E-10, "m", "L", "1.0"));
          length.Add("second-of-arc",   new UBASE("Scientific", "second-of-arc", 4.848136811095360E-06, "m", "L", "1.0"));
          length.Add("siegbahn-unit",   new UBASE("Scientific", "siegbahn-unit", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("sigma",   new UBASE("Scientific", "sigma", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("s",   new UBASE("Scientific", "s", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("X-unit",   new UBASE("Scientific", "X-unit", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("UX",   new UBASE("Scientific", "UX", 1.000207789700000E-13, "m", "L", "1.0"));
          length.Add("XU",   new UBASE("Scientific", "XU", 1.000207789700000E-13, "m", "L", "1.0"));
          area.Add("barn",   new UBASE("Scientific", "barn", 1.000000000000000E-28, "m2", "L2", "1.0"));
          area.Add("b",   new UBASE("Scientific", "b", 1.000000000000000E-28, "m2", "L2", "1.0"));
          area.Add("darce",   new UBASE("Scientific", "darce", 1.000000000000000E-12, "m2", "L2", "1.0"));
          area.Add("millidarcy",   new UBASE("Scientific", "millidarcy", 9.869232667160000E-16, "m2", "L2", "1.0"));
          area.Add("perm",   new UBASE("Scientific", "perm", 1.000000000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-angstrom",   new UBASE("Scientific", "square-angstrom", 1.000000000000000E-20, "m2", "L2", "1.0"));
          area.Add("A2",   new UBASE("Scientific", "A2", 1.000000000000000E-20, "m2", "L2", "1.0"));
          area.Add("square-fermi",   new UBASE("Scientific", "square-fermi", 1.000000000000000E-30, "m2", "L2", "1.0"));
          area.Add("F2",   new UBASE("Scientific", "F2", 1.000000000000000E-30, "m2", "L2", "1.0"));
          mass.Add("atomic-unit-of-mass(carbon)",   new UBASE("Scientific", "atomic-unit-of-mass(carbon)", 1.660538728010000E-27, "kg", "M", "1.0"));
          mass.Add("Da(12C)",   new UBASE("Scientific", "Da(12C)", 1.660538728010000E-27, "kg", "M", "1.0"));
          mass.Add("atomic-unit-of-mass(hydrogen)",   new UBASE("Scientific", "atomic-unit-of-mass(hydrogen)", 1.673532249686000E-27, "kg", "M", "1.0"));
          mass.Add("Da(1H)",   new UBASE("Scientific", "Da(1H)", 1.673532249686000E-27, "kg", "M", "1.0"));
          mass.Add("atomic-unit-of-mass(oxygen)",   new UBASE("Scientific", "atomic-unit-of-mass(oxygen)", 1.660010948830000E-27, "kg", "M", "1.0"));
          mass.Add("Da(16O)",   new UBASE("Scientific", "Da(16O)", 1.660010948830000E-27, "kg", "M", "1.0"));
          mass.Add("crith(atm)",   new UBASE("Scientific", "crith(atm)", 8.993845205690000E-05, "kg", "M", "1.0"));
          mass.Add("crith(bar)",   new UBASE("Scientific", "crith(bar)", 8.876235090740000E-05, "kg", "M", "1.0"));
          mass.Add("dalton",   new UBASE("Scientific", "dalton", 1.660539066600000E-27, "kg", "M", "1.0"));
          mass.Add("u",   new UBASE("Scientific", "u", 1.660539066600000E-27, "kg", "M", "1.0"));
          mass.Add("uma",   new UBASE("Scientific", "uma", 1.660539066600000E-27, "kg", "M", "1.0"));
          mass.Add("Da",   new UBASE("Scientific", "Da", 1.660539066600000E-27, "kg", "M", "1.0"));
          mass.Add("gamma",   new UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg", "M", "1.0"));
          mass.Add("g",   new UBASE("Scientific", "g", 1.000000000000000E-09, "kg", "M", "1.0"));
          mass.Add("microgamma",   new UBASE("Scientific", "microgamma", 1.000000000000000E-15, "kg", "M", "1.0"));
          mass.Add("ggg",   new UBASE("Scientific", "ggg", 1.000000000000000E-15, "kg", "M", "1.0"));
          mass.Add("milligarnma",   new UBASE("Scientific", "milligarnma", 1.000000000000000E-12, "kg", "M", "1.0"));
          mass.Add("gg",   new UBASE("Scientific", "gg", 1.000000000000000E-12, "kg", "M", "1.0"));
          mass.Add("myriagram",   new UBASE("Scientific", "myriagram", 1.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("thousand-mass-unit(12C)",   new UBASE("Scientific", "thousand-mass-unit(12C)", 1.492418085601550E-10, "kg", "M", "1.0"));
          mass.Add("TMU(12C)",   new UBASE("Scientific", "TMU(12C)", 1.492418085601550E-10, "kg", "M", "1.0"));
          mass.Add("thousand-mass-unit(16O)",   new UBASE("Scientific", "thousand-mass-unit(16O)", 1.491943740992750E-10, "kg", "M", "1.0"));
          mass.Add("TMU(16O)",   new UBASE("Scientific", "TMU(16O)", 1.491943740992750E-10, "kg", "M", "1.0"));
          mass.Add("thousand-mass-unit(1H)",   new UBASE("Scientific", "thousand-mass-unit(1H)", 1.504096304726540E-10, "kg", "M", "1.0"));
          mass.Add("TMU(1H)",   new UBASE("Scientific", "TMU(1H)", 1.504096304726540E-10, "kg", "M", "1.0"));
          liquid.Add("centiliter",   new UBASE("Scientific", "centiliter", 1.000000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("cl",   new UBASE("Scientific", "cl", 1.000000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("cL",   new UBASE("Scientific", "cL", 1.000000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("cubic-centimeter(Mohr)",   new UBASE("Scientific", "cubic-centimeter(Mohr)", 1.002380000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("cc",   new UBASE("Scientific", "cc", 1.002380000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("centicube",   new UBASE("Scientific", "centicube", 1.002380000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("deciliter",   new UBASE("Scientific", "deciliter", 1.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("dl",   new UBASE("Scientific", "dl", 1.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("dL",   new UBASE("Scientific", "dL", 1.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kanne",   new UBASE("Scientific", "kanne", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("lambda",   new UBASE("Scientific", "lambda", 1.000000000000000E-09, "m3", "L3", "1.0"));
          liquid.Add("l",   new UBASE("Scientific", "l", 1.000000000000000E-09, "m3", "L3", "1.0"));
          liquid.Add("microliter",   new UBASE("Scientific", "microliter", 1.000000000000000E-09, "m3", "L3", "1.0"));
          liquid.Add("ul",   new UBASE("Scientific", "ul", 1.000000000000000E-09, "m3", "L3", "1.0"));
          liquid.Add("milliliter",   new UBASE("Scientific", "milliliter", 1.000000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("ml",   new UBASE("Scientific", "ml", 1.000000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("mL",   new UBASE("Scientific", "mL", 1.000000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Scientific", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Scientific", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          _map.Add("Scientific",   new BaseSystem("Scientific", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit87()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("chain",   new UBASE("Scottish", "chain", 2.267701025980800E+01, "m", "L", "1.0"));
          length.Add("ch",   new UBASE("Scottish", "ch", 2.267701025980800E+01, "m", "L", "1.0"));
          length.Add("ell",   new UBASE("Scottish", "ell", 9.448754274920000E-01, "m", "L", "1.0"));
          length.Add("fall",   new UBASE("Scottish", "fall", 5.669252564952000E+00, "m", "L", "1.0"));
          length.Add("faw",   new UBASE("Scottish", "faw", 5.669252564952000E+00, "m", "L", "1.0"));
          length.Add("fit",   new UBASE("Scottish", "fit", 3.064460845920000E-01, "m", "L", "1.0"));
          length.Add("ft",   new UBASE("Scottish", "ft", 3.064460845920000E-01, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Scottish", "foot", 3.064500000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Scottish", "feet", 3.064500000000000E-01, "m", "L", "1.0"));
          length.Add("foot(traditional)",   new UBASE("Scottish", "foot(traditional)", 3.064460845920000E-01, "m", "L", "1.0"));
          length.Add("ft(trad)",   new UBASE("Scottish", "ft(trad)", 3.064460845920000E-01, "m", "L", "1.0"));
          length.Add("furlong",   new UBASE("Scottish", "furlong", 2.267701025980800E+02, "m", "L", "1.0"));
          length.Add("fur",   new UBASE("Scottish", "fur", 2.267701025980800E+02, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("Scottish", "inch", 2.553717371600000E-02, "m", "L", "1.0"));
          length.Add("inches",   new UBASE("Scottish", "inches", 2.553717371600000E-02, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("Scottish", "mile", 1.813864800000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("Scottish", "miles", 1.813864800000000E+03, "m", "L", "1.0"));
          length.Add("yaird",   new UBASE("Scottish", "yaird", 9.193382537760000E-01, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("Scottish", "yard", 9.193382537760000E-01, "m", "L", "1.0"));
          length.Add("yards",   new UBASE("Scottish", "yards", 9.193382537760000E-01, "m", "L", "1.0"));
          area.Add("acre",   new UBASE("Scottish", "acre", 4.935190759024390E+03, "m2", "L2", "1.0"));
          area.Add("ac",   new UBASE("Scottish", "ac", 4.935190759024390E+03, "m2", "L2", "1.0"));
          area.Add("acre(traditional)",   new UBASE("Scottish", "acre(traditional)", 5.142467943234370E+03, "m2", "L2", "1.0"));
          area.Add("ac(trad)",   new UBASE("Scottish", "ac(trad)", 5.142467943234370E+03, "m2", "L2", "1.0"));
          area.Add("ceathramh",   new UBASE("Scottish", "ceathramh", 1.234192306376250E+06, "m2", "L2", "1.0"));
          area.Add("cota-ban",   new UBASE("Scottish", "cota-ban", 1.285616985808590E+03, "m2", "L2", "1.0"));
          area.Add("dabhach",   new UBASE("Scottish", "dabhach", 3.291179483670000E+06, "m2", "L2", "1.0"));
          area.Add("dauch",   new UBASE("Scottish", "dauch", 3.291179483670000E+06, "m2", "L2", "1.0"));
          area.Add("davoch",   new UBASE("Scottish", "davoch", 3.291179483670000E+06, "m2", "L2", "1.0"));
          area.Add("groatland",   new UBASE("Scottish", "groatland", 1.285616985808590E+03, "m2", "L2", "1.0"));
          area.Add("marg-fhearann",   new UBASE("Scottish", "marg-fhearann", 4.936769225505000E+06, "m2", "L2", "1.0"));
          area.Add("markland",   new UBASE("Scottish", "markland", 4.936769225505000E+06, "m2", "L2", "1.0"));
          area.Add("merkland",   new UBASE("Scottish", "merkland", 4.936769225505000E+06, "m2", "L2", "1.0"));
          area.Add("nook(1824)",   new UBASE("Scottish", "nook(1824)", 1.028493588646870E+05, "m2", "L2", "1.0"));
          area.Add("nook",   new UBASE("Scottish", "nook", 8.093712844800000E+04, "m2", "L2", "1.0"));
          area.Add("ounceland",   new UBASE("Scottish", "ounceland", 8.227948709175000E+05, "m2", "L2", "1.0"));
          area.Add("oxgang",   new UBASE("Scottish", "oxgang", 1.028493588646870E+05, "m2", "L2", "1.0"));
          area.Add("peighinn",   new UBASE("Scottish", "peighinn", 4.113974354587500E+04, "m2", "L2", "1.0"));
          area.Add("pennyland",   new UBASE("Scottish", "pennyland", 4.113974354587500E+04, "m2", "L2", "1.0"));
          area.Add("plougate",   new UBASE("Scottish", "plougate", 8.227948709175000E+05, "m2", "L2", "1.0"));
          area.Add("ploughgate",   new UBASE("Scottish", "ploughgate", 8.227948709175000E+05, "m2", "L2", "1.0"));
          area.Add("quarterland",   new UBASE("Scottish", "quarterland", 1.234192306376250E+06, "m2", "L2", "1.0"));
          area.Add("rod",   new UBASE("Scottish", "rod", 1.285616985808590E+03, "m2", "L2", "1.0"));
          area.Add("rood",   new UBASE("Scottish", "rood", 1.285616985808590E+03, "m2", "L2", "1.0"));
          area.Add("ruid",   new UBASE("Scottish", "ruid", 1.285616985808590E+03, "m2", "L2", "1.0"));
          area.Add("square-ell",   new UBASE("Scottish", "square-ell", 8.927895734781900E-01, "m2", "L2", "1.0"));
          area.Add("square-fall",   new UBASE("Scottish", "square-fall", 3.214042464521480E+01, "m2", "L2", "1.0"));
          area.Add("square-faw",   new UBASE("Scottish", "square-faw", 3.214042464521480E+01, "m2", "L2", "1.0"));
          area.Add("square-foot",   new UBASE("Scottish", "square-foot", 9.390920276176720E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("Scottish", "square-feet", 9.390920276176720E-02, "m2", "L2", "1.0"));
          area.Add("square-inch",   new UBASE("Scottish", "square-inch", 6.521472414011610E-04, "m2", "L2", "1.0"));
          area.Add("square-inches",   new UBASE("Scottish", "square-inches", 6.521472414011610E-04, "m2", "L2", "1.0"));
          area.Add("tri-unga",   new UBASE("Scottish", "tri-unga", 8.227948709175000E+05, "m2", "L2", "1.0"));
          area.Add("unceland",   new UBASE("Scottish", "unceland", 8.227948709175000E+05, "m2", "L2", "1.0"));
          mass.Add("boll(barley)",   new UBASE("Scottish", "boll(barley)", 1.974033994240000E+02, "kg", "M", "1.0"));
          mass.Add("boll(bean)",   new UBASE("Scottish", "boll(bean)", 1.727279744960000E+02, "kg", "M", "1.0"));
          mass.Add("boll(flour)",   new UBASE("Scottish", "boll(flour)", 8.636398724800000E+01, "kg", "M", "1.0"));
          mass.Add("boll(oat)",   new UBASE("Scottish", "boll(oat)", 1.628578045248000E+02, "kg", "M", "1.0"));
          mass.Add("boll(oatmeal)",   new UBASE("Scottish", "boll(oatmeal)", 8.636398724800000E+01, "kg", "M", "1.0"));
          mass.Add("boll(pea)",   new UBASE("Scottish", "boll(pea)", 1.727279744960000E+02, "kg", "M", "1.0"));
          mass.Add("drap",   new UBASE("Scottish", "drap", 1.927767572500000E-03, "kg", "M", "1.0"));
          mass.Add("drop",   new UBASE("Scottish", "drop", 1.927767572500000E-03, "kg", "M", "1.0"));
          mass.Add("dp",   new UBASE("Scottish", "dp", 1.927767572500000E-03, "kg", "M", "1.0"));
          mass.Add("grain",   new UBASE("Scottish", "grain", 6.510416666666670E-05, "kg", "M", "1.0"));
          mass.Add("ounce",   new UBASE("Scottish", "ounce", 3.084428116000000E-02, "kg", "M", "1.0"));
          mass.Add("oz",   new UBASE("Scottish", "oz", 3.084428116000000E-02, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Scottish", "pound", 6.168856232000000E-01, "kg", "M", "1.0"));
          mass.Add("lb",   new UBASE("Scottish", "lb", 6.168856232000000E-01, "kg", "M", "1.0"));
          mass.Add("pund",   new UBASE("Scottish", "pund", 6.168856232000000E-01, "kg", "M", "1.0"));
          mass.Add("stan",   new UBASE("Scottish", "stan", 9.870169971200000E+00, "kg", "M", "1.0"));
          mass.Add("stone",   new UBASE("Scottish", "stone", 9.870169971200000E+00, "kg", "M", "1.0"));
          mass.Add("st",   new UBASE("Scottish", "st", 9.870169971200000E+00, "kg", "M", "1.0"));
          mass.Add("unce",   new UBASE("Scottish", "unce", 3.084428116000000E-02, "kg", "M", "1.0"));
          liquid.Add("barrel",   new UBASE("Scottish", "barrel", 1.084472298147840E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl",   new UBASE("Scottish", "bbl", 1.084472298147840E-01, "m3", "L3", "1.0"));
          liquid.Add("chopine",   new UBASE("Scottish", "chopine", 8.472439829280000E-04, "m3", "L3", "1.0"));
          liquid.Add("gallon",   new UBASE("Scottish", "gallon", 1.355590372684800E-02, "m3", "L3", "1.0"));
          liquid.Add("gill",   new UBASE("Scottish", "gill", 1.059054978660000E-04, "m3", "L3", "1.0"));
          liquid.Add("jug",   new UBASE("Scottish", "jug", 1.694918130000000E-03, "m3", "L3", "1.0"));
          liquid.Add("jug(old)",   new UBASE("Scottish", "jug(old)", 1.694487965856000E-03, "m3", "L3", "1.0"));
          liquid.Add("mutchkin",   new UBASE("Scottish", "mutchkin", 4.261961250000000E-03, "m3", "L3", "1.0"));
          liquid.Add("mutchkin(1824)",   new UBASE("Scottish", "mutchkin(1824)", 4.236219914640000E-04, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("Scottish", "pint", 1.694487965856000E-03, "m3", "L3", "1.0"));
          liquid.Add("pt",   new UBASE("Scottish", "pt", 1.694487965856000E-03, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("Scottish", "quart", 3.388975931712000E-03, "m3", "L3", "1.0"));
          liquid.Add("qt",   new UBASE("Scottish", "qt", 3.388975931712000E-03, "m3", "L3", "1.0"));
          dry.Add("bole(barley)",   new UBASE("Scottish", "bole(barley)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("boll(barley)",   new UBASE("Scottish", "boll(barley)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("bole(bean)",   new UBASE("Scottish", "bole(bean)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("boll(bean)",   new UBASE("Scottish", "boll(bean)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bole(malt)",   new UBASE("Scottish", "bole(malt)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("boll(malt)",   new UBASE("Scottish", "boll(malt)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("bole(oat)",   new UBASE("Scottish", "bole(oat)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("boll(oat)",   new UBASE("Scottish", "boll(oat)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("bole(pea)",   new UBASE("Scottish", "bole(pea)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("boll(pea)",   new UBASE("Scottish", "boll(pea)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bole(rice)",   new UBASE("Scottish", "bole(rice)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("boll(rice)",   new UBASE("Scottish", "boll(rice)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bole(salt)",   new UBASE("Scottish", "bole(salt)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("boll(salt)",   new UBASE("Scottish", "boll(salt)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bole(wheat)",   new UBASE("Scottish", "bole(wheat)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("boll(wheat)",   new UBASE("Scottish", "boll(wheat)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(pea)",   new UBASE("Scottish", "bowe(pea)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(barley)",   new UBASE("Scottish", "bowe(barley)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(bean)",   new UBASE("Scottish", "bowe(bean)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(malt)",   new UBASE("Scottish", "bowe(malt)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(oat)",   new UBASE("Scottish", "bowe(oat)", 2.101162455731200E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(rice)",   new UBASE("Scottish", "bowe(rice)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(salt)",   new UBASE("Scottish", "bowe(salt)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(wheat)",   new UBASE("Scottish", "bowe(wheat)", 1.440310182599680E-01, "m3", "L3", "1.0"));
          dry.Add("chalder(rice)",   new UBASE("Scottish", "chalder(rice)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(barley)",   new UBASE("Scottish", "chalder(barley)", 3.361859929169920E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(bean)",   new UBASE("Scottish", "chalder(bean)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(malt)",   new UBASE("Scottish", "chalder(malt)", 3.361859929169920E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(oats)",   new UBASE("Scottish", "chalder(oats)", 3.361859929169920E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(pea)",   new UBASE("Scottish", "chalder(pea)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(salt)",   new UBASE("Scottish", "chalder(salt)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chalder(wheat)",   new UBASE("Scottish", "chalder(wheat)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(barley)",   new UBASE("Scottish", "chauder(barley)", 3.361859929169920E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(bean)",   new UBASE("Scottish", "chauder(bean)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(malt)",   new UBASE("Scottish", "chauder(malt)", 3.361859929169920E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(oats)",   new UBASE("Scottish", "chauder(oats)", 3.361859929169920E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(pea)",   new UBASE("Scottish", "chauder(pea)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(rice)",   new UBASE("Scottish", "chauder(rice)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(salt)",   new UBASE("Scottish", "chauder(salt)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("chauder(wheat)",   new UBASE("Scottish", "chauder(wheat)", 2.304496292159490E+00, "m3", "L3", "1.0"));
          dry.Add("firlot(bean)",   new UBASE("Scottish", "firlot(bean)", 3.600775456499200E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(malt)",   new UBASE("Scottish", "firlot(malt)", 5.252906139328000E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(barley)",   new UBASE("Scottish", "firlot(barley)", 5.252906139328000E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(oats)",   new UBASE("Scottish", "firlot(oats)", 5.252906139328000E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(pea)",   new UBASE("Scottish", "firlot(pea)", 3.600775456499200E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(rice)",   new UBASE("Scottish", "firlot(rice)", 3.600775456499200E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(salt)",   new UBASE("Scottish", "firlot(salt)", 3.600775456499200E-02, "m3", "L3", "1.0"));
          dry.Add("firlot(wheat)",   new UBASE("Scottish", "firlot(wheat)", 3.600775456499200E-02, "m3", "L3", "1.0"));
          dry.Add("forpet(barley)",   new UBASE("Scottish", "forpet(barley)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(bean)",   new UBASE("Scottish", "forpet(bean)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(malt)",   new UBASE("Scottish", "forpet(malt)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(oat)",   new UBASE("Scottish", "forpet(oat)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(pea)",   new UBASE("Scottish", "forpet(pea)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(rice)",   new UBASE("Scottish", "forpet(rice)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(salt)",   new UBASE("Scottish", "forpet(salt)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("forpet(wheat)",   new UBASE("Scottish", "forpet(wheat)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(barley)",   new UBASE("Scottish", "lippie(barley)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(barley)",   new UBASE("Scottish", "lippy(barley)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(bean)",   new UBASE("Scottish", "lippie(bean)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(bean)",   new UBASE("Scottish", "lippy(bean)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(malt)",   new UBASE("Scottish", "lippie(malt)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(malt)",   new UBASE("Scottish", "lippy(malt)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(oats)",   new UBASE("Scottish", "lippie(oats)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(oats)",   new UBASE("Scottish", "lippy(oats)", 3.283066337080000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(pea)",   new UBASE("Scottish", "lippie(pea)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(pea)",   new UBASE("Scottish", "lippy(pea)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(rice)",   new UBASE("Scottish", "lippie(rice)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(rice)",   new UBASE("Scottish", "lippy(rice)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(salt)",   new UBASE("Scottish", "lippie(salt)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(salt)",   new UBASE("Scottish", "lippy(salt)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippie(wheat)",   new UBASE("Scottish", "lippie(wheat)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("lippy(wheat)",   new UBASE("Scottish", "lippy(wheat)", 2.250484660312000E-03, "m3", "L3", "1.0"));
          dry.Add("peck(bean)",   new UBASE("Scottish", "peck(bean)", 9.001938641248000E-03, "m3", "L3", "1.0"));
          dry.Add("peck(barley)",   new UBASE("Scottish", "peck(barley)", 1.313226534832000E-02, "m3", "L3", "1.0"));
          dry.Add("peck(malt)",   new UBASE("Scottish", "peck(malt)", 1.313226534832000E-02, "m3", "L3", "1.0"));
          dry.Add("peck(oats)",   new UBASE("Scottish", "peck(oats)", 1.313226534832000E-02, "m3", "L3", "1.0"));
          dry.Add("peck(pea)",   new UBASE("Scottish", "peck(pea)", 9.001938641248000E-03, "m3", "L3", "1.0"));
          dry.Add("peck(rice)",   new UBASE("Scottish", "peck(rice)", 9.001938641248000E-03, "m3", "L3", "1.0"));
          dry.Add("peck(salt)",   new UBASE("Scottish", "peck(salt)", 9.001938641248000E-03, "m3", "L3", "1.0"));
          dry.Add("peck(wheat)",   new UBASE("Scottish", "peck(wheat)", 9.001938641248000E-03, "m3", "L3", "1.0"));
          _map.Add("Scottish",   new BaseSystem("Scottish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit88()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("meter",   new UBASE("SI", "meter", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("m",   new UBASE("SI", "m", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("meters",   new UBASE("SI", "meters", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("yottameter",   new UBASE("SI", "yottameter", 1.000000000000000E+24, "m", "L", "1.0"));
          length.Add("Ym",   new UBASE("SI", "Ym", 1.000000000000000E+24, "m", "L", "1.0"));
          length.Add("zettameter",   new UBASE("SI", "zettameter", 1.000000000000000E+21, "m", "L", "1.0"));
          length.Add("Zm",   new UBASE("SI", "Zm", 1.000000000000000E+21, "m", "L", "1.0"));
          length.Add("exameter",   new UBASE("SI", "exameter", 1.000000000000000E+18, "m", "L", "1.0"));
          length.Add("Em",   new UBASE("SI", "Em", 1.000000000000000E+18, "m", "L", "1.0"));
          length.Add("petameter",   new UBASE("SI", "petameter", 1.000000000000000E+15, "m", "L", "1.0"));
          length.Add("Pm",   new UBASE("SI", "Pm", 1.000000000000000E+15, "m", "L", "1.0"));
          length.Add("terameter",   new UBASE("SI", "terameter", 1.000000000000000E+12, "m", "L", "1.0"));
          length.Add("Tm",   new UBASE("SI", "Tm", 1.000000000000000E+12, "m", "L", "1.0"));
          length.Add("gigameter",   new UBASE("SI", "gigameter", 1.000000000000000E+09, "m", "L", "1.0"));
          length.Add("Gm",   new UBASE("SI", "Gm", 1.000000000000000E+09, "m", "L", "1.0"));
          length.Add("megameter",   new UBASE("SI", "megameter", 1.000000000000000E+06, "m", "L", "1.0"));
          length.Add("Mm",   new UBASE("SI", "Mm", 1.000000000000000E+06, "m", "L", "1.0"));
          length.Add("kilometer",   new UBASE("SI", "kilometer", 1.000000000000000E+03, "m", "L", "1.0"));
          length.Add("km",   new UBASE("SI", "km", 1.000000000000000E+03, "m", "L", "1.0"));
          length.Add("hectometer",   new UBASE("SI", "hectometer", 1.000000000000000E+02, "m", "L", "1.0"));
          length.Add("hm",   new UBASE("SI", "hm", 1.000000000000000E+02, "m", "L", "1.0"));
          length.Add("decameter",   new UBASE("SI", "decameter", 1.000000000000000E+01, "m", "L", "1.0"));
          length.Add("dam",   new UBASE("SI", "dam", 1.000000000000000E+01, "m", "L", "1.0"));
          length.Add("decimeter",   new UBASE("SI", "decimeter", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("dm",   new UBASE("SI", "dm", 1.000000000000000E-01, "m", "L", "1.0"));
          length.Add("centimeter",   new UBASE("SI", "centimeter", 1.000000000000000E-02, "m", "L", "1.0"));
          length.Add("cm",   new UBASE("SI", "cm", 1.000000000000000E-02, "m", "L", "1.0"));
          length.Add("millimeter",   new UBASE("SI", "millimeter", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("mm",   new UBASE("SI", "mm", 1.000000000000000E-03, "m", "L", "1.0"));
          length.Add("micrometer",   new UBASE("SI", "micrometer", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("um",   new UBASE("SI", "um", 1.000000000000000E-06, "m", "L", "1.0"));
          length.Add("nanometer",   new UBASE("SI", "nanometer", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("nm",   new UBASE("SI", "nm", 1.000000000000000E-09, "m", "L", "1.0"));
          length.Add("picometer",   new UBASE("SI", "picometer", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("pm",   new UBASE("SI", "pm", 1.000000000000000E-12, "m", "L", "1.0"));
          length.Add("femtometer",   new UBASE("SI", "femtometer", 1.000000000000000E-15, "m", "L", "1.0"));
          length.Add("fm",   new UBASE("SI", "fm", 1.000000000000000E-15, "m", "L", "1.0"));
          length.Add("attometer",   new UBASE("SI", "attometer", 1.000000000000000E-18, "m", "L", "1.0"));
          length.Add("am",   new UBASE("SI", "am", 1.000000000000000E-18, "m", "L", "1.0"));
          length.Add("zeptometer",   new UBASE("SI", "zeptometer", 1.000000000000000E-21, "m", "L", "1.0"));
          length.Add("zm",   new UBASE("SI", "zm", 1.000000000000000E-21, "m", "L", "1.0"));
          length.Add("yoctometer",   new UBASE("SI", "yoctometer", 1.000000000000000E-24, "m", "L", "1.0"));
          length.Add("ym",   new UBASE("SI", "ym", 1.000000000000000E-24, "m", "L", "1.0"));
          area.Add("meter-squared",   new UBASE("SI", "meter-squared", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("m2",   new UBASE("SI", "m2", 1.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("square-yottameter",   new UBASE("SI", "square-yottameter", 1.000000000000000E+48, "m2", "L2", "1.0"));
          area.Add("sq-Ym",   new UBASE("SI", "sq-Ym", 1.000000000000000E+48, "m2", "L2", "1.0"));
          area.Add("Ym2",   new UBASE("SI", "Ym2", 1.000000000000000E+48, "m2", "L2", "1.0"));
          area.Add("square-zettameter",   new UBASE("SI", "square-zettameter", 1.000000000000000E+42, "m2", "L2", "1.0"));
          area.Add("sq-Zm",   new UBASE("SI", "sq-Zm", 1.000000000000000E+42, "m2", "L2", "1.0"));
          area.Add("Zm2",   new UBASE("SI", "Zm2", 1.000000000000000E+42, "m2", "L2", "1.0"));
          area.Add("square-exameter",   new UBASE("SI", "square-exameter", 1.000000000000000E+36, "m2", "L2", "1.0"));
          area.Add("sq-Em",   new UBASE("SI", "sq-Em", 1.000000000000000E+36, "m2", "L2", "1.0"));
          area.Add("Em2",   new UBASE("SI", "Em2", 1.000000000000000E+36, "m2", "L2", "1.0"));
          area.Add("square-petameter",   new UBASE("SI", "square-petameter", 1.000000000000000E+30, "m2", "L2", "1.0"));
          area.Add("sq-Pm",   new UBASE("SI", "sq-Pm", 1.000000000000000E+30, "m2", "L2", "1.0"));
          area.Add("Pm2",   new UBASE("SI", "Pm2", 1.000000000000000E+30, "m2", "L2", "1.0"));
          area.Add("square-terameter",   new UBASE("SI", "square-terameter", 1.000000000000000E+24, "m2", "L2", "1.0"));
          area.Add("sq-Tm",   new UBASE("SI", "sq-Tm", 1.000000000000000E+24, "m2", "L2", "1.0"));
          area.Add("Tm2",   new UBASE("SI", "Tm2", 1.000000000000000E+24, "m2", "L2", "1.0"));
          area.Add("square-gigameter",   new UBASE("SI", "square-gigameter", 1.000000000000000E+18, "m2", "L2", "1.0"));
          area.Add("sq-Gm",   new UBASE("SI", "sq-Gm", 1.000000000000000E+18, "m2", "L2", "1.0"));
          area.Add("Gm2",   new UBASE("SI", "Gm2", 1.000000000000000E+18, "m2", "L2", "1.0"));
          area.Add("square-megameter",   new UBASE("SI", "square-megameter", 1.000000000000000E+12, "m2", "L2", "1.0"));
          area.Add("sq-Mm",   new UBASE("SI", "sq-Mm", 1.000000000000000E+12, "m2", "L2", "1.0"));
          area.Add("Mm2",   new UBASE("SI", "Mm2", 1.000000000000000E+12, "m2", "L2", "1.0"));
          area.Add("square-kilometer",   new UBASE("SI", "square-kilometer", 1.000000000000000E+06, "m2", "L2", "1.0"));
          area.Add("sq-km",   new UBASE("SI", "sq-km", 1.000000000000000E+06, "m2", "L2", "1.0"));
          area.Add("km2",   new UBASE("SI", "km2", 1.000000000000000E+06, "m2", "L2", "1.0"));
          area.Add("square-hectometer",   new UBASE("SI", "square-hectometer", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("sq-hm",   new UBASE("SI", "sq-hm", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("hm2",   new UBASE("SI", "hm2", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("square-decameter",   new UBASE("SI", "square-decameter", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("sq-dam",   new UBASE("SI", "sq-dam", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("dam2",   new UBASE("SI", "dam2", 1.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("square-decimeter",   new UBASE("SI", "square-decimeter", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("sq-dm",   new UBASE("SI", "sq-dm", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("dm2",   new UBASE("SI", "dm2", 1.000000000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-centimeter",   new UBASE("SI", "square-centimeter", 1.000000000000000E-04, "m2", "L2", "1.0"));
          area.Add("sq-cm",   new UBASE("SI", "sq-cm", 1.000000000000000E-04, "m2", "L2", "1.0"));
          area.Add("cm2",   new UBASE("SI", "cm2", 1.000000000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-millimeter",   new UBASE("SI", "square-millimeter", 1.000000000000000E-06, "m2", "L2", "1.0"));
          area.Add("sq-mm",   new UBASE("SI", "sq-mm", 1.000000000000000E-06, "m2", "L2", "1.0"));
          area.Add("mm2",   new UBASE("SI", "mm2", 1.000000000000000E-06, "m2", "L2", "1.0"));
          area.Add("square-micrometer",   new UBASE("SI", "square-micrometer", 1.000000000000000E-12, "m2", "L2", "1.0"));
          area.Add("sq-um",   new UBASE("SI", "sq-um", 1.000000000000000E-12, "m2", "L2", "1.0"));
          area.Add("um2",   new UBASE("SI", "um2", 1.000000000000000E-12, "m2", "L2", "1.0"));
          area.Add("square-nanometer",   new UBASE("SI", "square-nanometer", 1.000000000000000E-18, "m2", "L2", "1.0"));
          area.Add("sq-nm",   new UBASE("SI", "sq-nm", 1.000000000000000E-18, "m2", "L2", "1.0"));
          area.Add("nm2",   new UBASE("SI", "nm2", 1.000000000000000E-18, "m2", "L2", "1.0"));
          area.Add("square-picometer",   new UBASE("SI", "square-picometer", 1.000000000000000E-24, "m2", "L2", "1.0"));
          area.Add("sq-pm",   new UBASE("SI", "sq-pm", 1.000000000000000E-24, "m2", "L2", "1.0"));
          area.Add("pm2",   new UBASE("SI", "pm2", 1.000000000000000E-24, "m2", "L2", "1.0"));
          area.Add("square-femtometer",   new UBASE("SI", "square-femtometer", 1.000000000000000E-30, "m2", "L2", "1.0"));
          area.Add("sq-fm",   new UBASE("SI", "sq-fm", 1.000000000000000E-30, "m2", "L2", "1.0"));
          area.Add("fm2",   new UBASE("SI", "fm2", 1.000000000000000E-30, "m2", "L2", "1.0"));
          area.Add("square-attometer",   new UBASE("SI", "square-attometer", 1.000000000000000E-36, "m2", "L2", "1.0"));
          area.Add("sq-am",   new UBASE("SI", "sq-am", 1.000000000000000E-36, "m2", "L2", "1.0"));
          area.Add("am2",   new UBASE("SI", "am2", 1.000000000000000E-36, "m2", "L2", "1.0"));
          area.Add("square-zeptometer",   new UBASE("SI", "square-zeptometer", 1.000000000000000E-42, "m2", "L2", "1.0"));
          area.Add("sq-zm",   new UBASE("SI", "sq-zm", 1.000000000000000E-42, "m2", "L2", "1.0"));
          area.Add("zm2",   new UBASE("SI", "zm2", 1.000000000000000E-42, "m2", "L2", "1.0"));
          area.Add("square-yoctometer",   new UBASE("SI", "square-yoctometer", 1.000000000000000E-48, "m2", "L2", "1.0"));
          area.Add("sq-ym",   new UBASE("SI", "sq-ym", 1.000000000000000E-48, "m2", "L2", "1.0"));
          area.Add("ym2",   new UBASE("SI", "ym2", 1.000000000000000E-48, "m2", "L2", "1.0"));
          mass.Add("gram",   new UBASE("SI", "gram", 1.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("g",   new UBASE("SI", "g", 1.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("grams",   new UBASE("SI", "grams", 1.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("yottagram",   new UBASE("SI", "yottagram", 1.000000000000000E+21, "kg", "M", "1.0"));
          mass.Add("Yg",   new UBASE("SI", "Yg", 1.000000000000000E+21, "kg", "M", "1.0"));
          mass.Add("zettagram",   new UBASE("SI", "zettagram", 1.000000000000000E+18, "kg", "M", "1.0"));
          mass.Add("Zg",   new UBASE("SI", "Zg", 1.000000000000000E+18, "kg", "M", "1.0"));
          mass.Add("exagram",   new UBASE("SI", "exagram", 1.000000000000000E+15, "kg", "M", "1.0"));
          mass.Add("Eg",   new UBASE("SI", "Eg", 1.000000000000000E+15, "kg", "M", "1.0"));
          mass.Add("petagram",   new UBASE("SI", "petagram", 1.000000000000000E+12, "kg", "M", "1.0"));
          mass.Add("Pg",   new UBASE("SI", "Pg", 1.000000000000000E+12, "kg", "M", "1.0"));
          mass.Add("teragram",   new UBASE("SI", "teragram", 1.000000000000000E+09, "kg", "M", "1.0"));
          mass.Add("Tg",   new UBASE("SI", "Tg", 1.000000000000000E+09, "kg", "M", "1.0"));
          mass.Add("gigagram",   new UBASE("SI", "gigagram", 1.000000000000000E+06, "kg", "M", "1.0"));
          mass.Add("Gg",   new UBASE("SI", "Gg", 1.000000000000000E+06, "kg", "M", "1.0"));
          mass.Add("megagram",   new UBASE("SI", "megagram", 1.000000000000000E+03, "kg", "M", "1.0"));
          mass.Add("Mg",   new UBASE("SI", "Mg", 1.000000000000000E+03, "kg", "M", "1.0"));
          mass.Add("kilogram",   new UBASE("SI", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("kg",   new UBASE("SI", "kg", 1.000000000000000E+00, "kg", "M", "1.0"));
          mass.Add("hectogram",   new UBASE("SI", "hectogram", 1.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("hg",   new UBASE("SI", "hg", 1.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("decagram",   new UBASE("SI", "decagram", 1.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("dag",   new UBASE("SI", "dag", 1.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("decigram",   new UBASE("SI", "decigram", 1.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("dg",   new UBASE("SI", "dg", 1.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("centigram",   new UBASE("SI", "centigram", 1.000000000000000E-05, "kg", "M", "1.0"));
          mass.Add("cg",   new UBASE("SI", "cg", 1.000000000000000E-05, "kg", "M", "1.0"));
          mass.Add("milligram",   new UBASE("SI", "milligram", 1.000000000000000E-06, "kg", "M", "1.0"));
          mass.Add("mg",   new UBASE("SI", "mg", 1.000000000000000E-06, "kg", "M", "1.0"));
          mass.Add("microgram",   new UBASE("SI", "microgram", 1.000000000000000E-09, "kg", "M", "1.0"));
          mass.Add("ug",   new UBASE("SI", "ug", 1.000000000000000E-09, "kg", "M", "1.0"));
          mass.Add("nanogram",   new UBASE("SI", "nanogram", 1.000000000000000E-12, "kg", "M", "1.0"));
          mass.Add("ng",   new UBASE("SI", "ng", 1.000000000000000E-12, "kg", "M", "1.0"));
          mass.Add("picogram",   new UBASE("SI", "picogram", 1.000000000000000E-15, "kg", "M", "1.0"));
          mass.Add("pg",   new UBASE("SI", "pg", 1.000000000000000E-15, "kg", "M", "1.0"));
          mass.Add("femtogram",   new UBASE("SI", "femtogram", 1.000000000000000E-18, "kg", "M", "1.0"));
          mass.Add("fg",   new UBASE("SI", "fg", 1.000000000000000E-18, "kg", "M", "1.0"));
          mass.Add("attogram",   new UBASE("SI", "attogram", 1.000000000000000E-21, "kg", "M", "1.0"));
          mass.Add("ag",   new UBASE("SI", "ag", 1.000000000000000E-21, "kg", "M", "1.0"));
          mass.Add("zeptogram",   new UBASE("SI", "zeptogram", 1.000000000000000E-24, "kg", "M", "1.0"));
          mass.Add("zg",   new UBASE("SI", "zg", 1.000000000000000E-24, "kg", "M", "1.0"));
          mass.Add("yoctogram",   new UBASE("SI", "yoctogram", 1.000000000000000E-27, "kg", "M", "1.0"));
          mass.Add("yg",   new UBASE("SI", "yg", 1.000000000000000E-27, "kg", "M", "1.0"));
          liquid.Add("liter",   new UBASE("SI", "liter", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("l",   new UBASE("SI", "l", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("liters",   new UBASE("SI", "liters", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("meter-cubed",   new UBASE("SI", "meter-cubed", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("m3",   new UBASE("SI", "m3", 1.000000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-yottameter",   new UBASE("SI", "cubic-yottameter", 1.000000000000000E+72, "m3", "L3", "1.0"));
          dry.Add("cu-Ym",   new UBASE("SI", "cu-Ym", 1.000000000000000E+72, "m3", "L3", "1.0"));
          dry.Add("Ym3",   new UBASE("SI", "Ym3", 1.000000000000000E+72, "m3", "L3", "1.0"));
          dry.Add("cubic-zettameter",   new UBASE("SI", "cubic-zettameter", 1.000000000000000E+63, "m3", "L3", "1.0"));
          dry.Add("cu-Zm",   new UBASE("SI", "cu-Zm", 1.000000000000000E+63, "m3", "L3", "1.0"));
          dry.Add("Zm3",   new UBASE("SI", "Zm3", 1.000000000000000E+63, "m3", "L3", "1.0"));
          dry.Add("cubic-exameter",   new UBASE("SI", "cubic-exameter", 1.000000000000000E+54, "m3", "L3", "1.0"));
          dry.Add("cu-Em",   new UBASE("SI", "cu-Em", 1.000000000000000E+54, "m3", "L3", "1.0"));
          dry.Add("Em3",   new UBASE("SI", "Em3", 1.000000000000000E+54, "m3", "L3", "1.0"));
          dry.Add("cubic-petameter",   new UBASE("SI", "cubic-petameter", 1.000000000000000E+45, "m3", "L3", "1.0"));
          dry.Add("cu-Pm",   new UBASE("SI", "cu-Pm", 1.000000000000000E+45, "m3", "L3", "1.0"));
          dry.Add("Pm3",   new UBASE("SI", "Pm3", 1.000000000000000E+45, "m3", "L3", "1.0"));
          dry.Add("cubic-terameter",   new UBASE("SI", "cubic-terameter", 1.000000000000000E+36, "m3", "L3", "1.0"));
          dry.Add("cu-Tm",   new UBASE("SI", "cu-Tm", 1.000000000000000E+36, "m3", "L3", "1.0"));
          dry.Add("Tm3",   new UBASE("SI", "Tm3", 1.000000000000000E+36, "m3", "L3", "1.0"));
          dry.Add("cubic-gigameter",   new UBASE("SI", "cubic-gigameter", 1.000000000000000E+27, "m3", "L3", "1.0"));
          dry.Add("cu-Gm",   new UBASE("SI", "cu-Gm", 1.000000000000000E+27, "m3", "L3", "1.0"));
          dry.Add("Gm3",   new UBASE("SI", "Gm3", 1.000000000000000E+27, "m3", "L3", "1.0"));
          dry.Add("cubic-megameter",   new UBASE("SI", "cubic-megameter", 1.000000000000000E+18, "m3", "L3", "1.0"));
          dry.Add("cu-Mm",   new UBASE("SI", "cu-Mm", 1.000000000000000E+18, "m3", "L3", "1.0"));
          dry.Add("Mm3",   new UBASE("SI", "Mm3", 1.000000000000000E+18, "m3", "L3", "1.0"));
          dry.Add("cubic-kilometer",   new UBASE("SI", "cubic-kilometer", 1.000000000000000E+09, "m3", "L3", "1.0"));
          dry.Add("cu-km",   new UBASE("SI", "cu-km", 1.000000000000000E+09, "m3", "L3", "1.0"));
          dry.Add("km3",   new UBASE("SI", "km3", 1.000000000000000E+09, "m3", "L3", "1.0"));
          dry.Add("cubic-hectometer",   new UBASE("SI", "cubic-hectometer", 1.000000000000000E+06, "m3", "L3", "1.0"));
          dry.Add("cu-hm",   new UBASE("SI", "cu-hm", 1.000000000000000E+06, "m3", "L3", "1.0"));
          dry.Add("hm3",   new UBASE("SI", "hm3", 1.000000000000000E+06, "m3", "L3", "1.0"));
          dry.Add("cubic-decameter",   new UBASE("SI", "cubic-decameter", 1.000000000000000E+03, "m3", "L3", "1.0"));
          dry.Add("cu-dam",   new UBASE("SI", "cu-dam", 1.000000000000000E+03, "m3", "L3", "1.0"));
          dry.Add("dam3",   new UBASE("SI", "dam3", 1.000000000000000E+03, "m3", "L3", "1.0"));
          dry.Add("cubic-decimeter",   new UBASE("SI", "cubic-decimeter", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cu-dm",   new UBASE("SI", "cu-dm", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("dm3",   new UBASE("SI", "dm3", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-centimeter",   new UBASE("SI", "cubic-centimeter", 1.000000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("cu-cm",   new UBASE("SI", "cu-cm", 1.000000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("cm3",   new UBASE("SI", "cm3", 1.000000000000000E-06, "m3", "L3", "1.0"));
          dry.Add("cubic-millimeter",   new UBASE("SI", "cubic-millimeter", 1.000000000000000E-09, "m3", "L3", "1.0"));
          dry.Add("cu-mm",   new UBASE("SI", "cu-mm", 1.000000000000000E-09, "m3", "L3", "1.0"));
          dry.Add("mm3",   new UBASE("SI", "mm3", 1.000000000000000E-09, "m3", "L3", "1.0"));
          dry.Add("cubic-micrometer",   new UBASE("SI", "cubic-micrometer", 1.000000000000000E-18, "m3", "L3", "1.0"));
          dry.Add("cu-um",   new UBASE("SI", "cu-um", 1.000000000000000E-18, "m3", "L3", "1.0"));
          dry.Add("um3",   new UBASE("SI", "um3", 1.000000000000000E-18, "m3", "L3", "1.0"));
          dry.Add("cubic-nanometer",   new UBASE("SI", "cubic-nanometer", 1.000000000000000E-27, "m3", "L3", "1.0"));
          dry.Add("cu-nm",   new UBASE("SI", "cu-nm", 1.000000000000000E-27, "m3", "L3", "1.0"));
          dry.Add("nm3",   new UBASE("SI", "nm3", 1.000000000000000E-27, "m3", "L3", "1.0"));
          dry.Add("cubic-picometer",   new UBASE("SI", "cubic-picometer", 1.000000000000000E-36, "m3", "L3", "1.0"));
          dry.Add("cu-pm",   new UBASE("SI", "cu-pm", 1.000000000000000E-36, "m3", "L3", "1.0"));
          dry.Add("pm3",   new UBASE("SI", "pm3", 1.000000000000000E-36, "m3", "L3", "1.0"));
          dry.Add("cubic-femtometer",   new UBASE("SI", "cubic-femtometer", 1.000000000000000E-45, "m3", "L3", "1.0"));
          dry.Add("cu-fm",   new UBASE("SI", "cu-fm", 1.000000000000000E-45, "m3", "L3", "1.0"));
          dry.Add("fm3",   new UBASE("SI", "fm3", 1.000000000000000E-45, "m3", "L3", "1.0"));
          dry.Add("cubic-attometer",   new UBASE("SI", "cubic-attometer", 1.000000000000000E-54, "m3", "L3", "1.0"));
          dry.Add("cu-am",   new UBASE("SI", "cu-am", 1.000000000000000E-54, "m3", "L3", "1.0"));
          dry.Add("am3",   new UBASE("SI", "am3", 1.000000000000000E-54, "m3", "L3", "1.0"));
          dry.Add("cubic-zeptometer",   new UBASE("SI", "cubic-zeptometer", 1.000000000000000E-63, "m3", "L3", "1.0"));
          dry.Add("cu-zm",   new UBASE("SI", "cu-zm", 1.000000000000000E-63, "m3", "L3", "1.0"));
          dry.Add("zm3",   new UBASE("SI", "zm3", 1.000000000000000E-63, "m3", "L3", "1.0"));
          dry.Add("cubic-yoctometer",   new UBASE("SI", "cubic-yoctometer", 1.000000000000000E-72, "m3", "L3", "1.0"));
          dry.Add("cu-ym",   new UBASE("SI", "cu-ym", 1.000000000000000E-72, "m3", "L3", "1.0"));
          dry.Add("ym3",   new UBASE("SI", "ym3", 1.000000000000000E-72, "m3", "L3", "1.0"));
          _map.Add("SI",   new BaseSystem("SI", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit89()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cubit",   new UBASE("Singaporean", "cubit", 4.572000000000000E-01, "m", "L", "1.0"));
          area.Add("square-cubit",   new UBASE("Singaporean", "square-cubit", 2.090318400000000E-01, "m2", "L2", "1.0"));
          mass.Add("mace",   new UBASE("Singaporean", "mace", 3.369543320000000E-03, "kg", "M", "1.0"));
          mass.Add("buncai",   new UBASE("Singaporean", "buncai", 5.326470402000000E-02, "kg", "M", "1.0"));
          liquid.Add("cubic-cubit",   new UBASE("Singaporean", "cubic-cubit", 9.556935724800000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-cubit",   new UBASE("Singaporean", "cubic-cubit", 9.556935724800000E-02, "m3", "L3", "1.0"));
          _map.Add("Singaporean",   new BaseSystem("Singaporean", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit90()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cubito",   new UBASE("Somalian", "cubito", 5.600000000000000E-01, "m", "L", "1.0"));
          length.Add("top",   new UBASE("Somalian", "top", 3.920000000000000E+00, "m", "L", "1.0"));
          area.Add("darat",   new UBASE("Somalian", "darat", 8.000000000000000E+03, "m2", "L2", "1.0"));
          mass.Add("frasla",   new UBASE("Somalian", "frasla", 1.612800000000000E+01, "kg", "M", "1.0"));
          mass.Add("gisla",   new UBASE("Somalian", "gisla", 1.612800000000000E+02, "kg", "M", "1.0"));
          mass.Add("okia",   new UBASE("Somalian", "okia", 2.800000000000000E-02, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Somalian", "rottolo", 4.480000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("caba",   new UBASE("Somalian", "caba", 4.530000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("chela",   new UBASE("Somalian", "chela", 1.359000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gisla",   new UBASE("Somalian", "gisla", 1.630800000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tabla",   new UBASE("Somalian", "tabla", 2.038500000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-top",   new UBASE("Somalian", "cubic-top", 6.023628800000000E+01, "m3", "L3", "1.0"));
          _map.Add("Somalian",   new BaseSystem("Somalian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit91()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cape-rood",   new UBASE("South-African", "cape-rood", 3.778296000000000E+00, "m", "L", "1.0"));
          length.Add("elle",   new UBASE("South-African", "elle", 7.063740000000000E-01, "m", "L", "1.0"));
          length.Add("rijnlandse-duim",   new UBASE("South-African", "rijnlandse-duim", 2.616200000000000E-02, "m", "L", "1.0"));
          length.Add("rijnlandse-roede",   new UBASE("South-African", "rijnlandse-roede", 3.767328000000000E+00, "m", "L", "1.0"));
          length.Add("rijnlandse-voet",   new UBASE("South-African", "rijnlandse-voet", 3.139440000000000E-01, "m", "L", "1.0"));
          area.Add("morgen",   new UBASE("South-African", "morgen", 8.565320000000000E+03, "m2", "L2", "1.0"));
          mass.Add("bundle",   new UBASE("South-African", "bundle", 3.175000000000000E-01, "kg", "M", "1.0"));
          mass.Add("cape-hundredweight",   new UBASE("South-African", "cape-hundredweight", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cape-ton",   new UBASE("South-African", "cape-ton", 9.071847400000000E+02, "kg", "M", "1.0"));
          mass.Add("loot",   new UBASE("South-African", "loot", 1.544032250000000E-02, "kg", "M", "1.0"));
          mass.Add("ons",   new UBASE("South-African", "ons", 3.088064500000000E-02, "kg", "M", "1.0"));
          mass.Add("pond",   new UBASE("South-African", "pond", 4.940903200000000E-01, "kg", "M", "1.0"));
          liquid.Add("ahm",   new UBASE("South-African", "ahm", 1.289130000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("anker",   new UBASE("South-African", "anker", 3.222825000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("aum",   new UBASE("South-African", "aum", 1.289130000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("barrel",   new UBASE("South-African", "barrel", 1.636593120000000E-01, "m3", "L3", "1.0"));
          liquid.Add("butt",   new UBASE("South-African", "butt", 4.909779360000000E-01, "m3", "L3", "1.0"));
          liquid.Add("dumpie",   new UBASE("South-African", "dumpie", 3.400000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("firkin",   new UBASE("South-African", "firkin", 4.091482800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("flask",   new UBASE("South-African", "flask", 2.295545454545450E-03, "m3", "L3", "1.0"));
          liquid.Add("half-anker",   new UBASE("South-African", "half-anker", 1.611412500000000E-02, "m3", "L3", "1.0"));
          liquid.Add("half-aum",   new UBASE("South-African", "half-aum", 6.445650000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("half-legger",   new UBASE("South-African", "half-legger", 2.578260000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("half-pipe",   new UBASE("South-African", "half-pipe", 2.126400000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("hogshead",   new UBASE("South-African", "hogshead", 2.454889680000000E-01, "m3", "L3", "1.0"));
          liquid.Add("kanne",   new UBASE("South-African", "kanne", 1.329000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("kilderkin",   new UBASE("South-African", "kilderkin", 8.182965600000000E-02, "m3", "L3", "1.0"));
          liquid.Add("legger",   new UBASE("South-African", "legger", 5.156520000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("South-African", "pipe", 4.252800000000000E-01, "m3", "L3", "1.0"));
          dry.Add("bali",   new UBASE("South-African", "bali", 4.600000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("gantang",   new UBASE("South-African", "gantang", 9.200000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("load",   new UBASE("South-African", "load", 1.091000000000000E+00, "m3", "L3", "1.0"));
          dry.Add("muid",   new UBASE("South-African", "muid", 1.091000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("schepel",   new UBASE("South-African", "schepel", 2.727500000000000E-02, "m3", "L3", "1.0"));
          _map.Add("South-African",   new BaseSystem("South-African", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit92()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("codos",   new UBASE("Spanish", "codos", 4.179525000000000E-01, "m", "L", "1.0"));
          length.Add("coto",   new UBASE("Spanish", "coto", 1.044881250000000E-01, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("Spanish", "cubit", 4.179525000000000E-01, "m", "L", "1.0"));
          length.Add("diedo",   new UBASE("Spanish", "diedo", 1.741468750000000E-02, "m", "L", "1.0"));
          length.Add("estadal",   new UBASE("Spanish", "estadal", 3.343620000000000E+00, "m", "L", "1.0"));
          length.Add("estado",   new UBASE("Spanish", "estado", 1.671810000000000E+00, "m", "L", "1.0"));
          length.Add("finger",   new UBASE("Spanish", "finger", 2.000000000000000E-02, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Spanish", "foot", 2.786350000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Spanish", "feet", 2.786350000000000E-01, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Spanish", "legua", 4.179525000000000E+03, "m", "L", "1.0"));
          length.Add("linea",   new UBASE("Spanish", "linea", 1.736111111111110E-03, "m", "L", "1.0"));
          length.Add("milla",   new UBASE("Spanish", "milla", 1.393175000000000E+03, "m", "L", "1.0"));
          length.Add("palma",   new UBASE("Spanish", "palma", 2.089762500000000E-01, "m", "L", "1.0"));
          length.Add("palmo",   new UBASE("Spanish", "palmo", 2.089762500000000E-01, "m", "L", "1.0"));
          length.Add("paso",   new UBASE("Spanish", "paso", 1.393175000000000E+00, "m", "L", "1.0"));
          length.Add("passo",   new UBASE("Spanish", "passo", 1.393175000000000E+00, "m", "L", "1.0"));
          length.Add("pie",   new UBASE("Spanish", "pie", 2.786350000000000E-01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Spanish", "pulgada", 2.321958333333330E-02, "m", "L", "1.0"));
          length.Add("punto",   new UBASE("Spanish", "punto", 1.209353298611110E-04, "m", "L", "1.0"));
          length.Add("sesma",   new UBASE("Spanish", "sesma", 1.393175000000000E-01, "m", "L", "1.0"));
          length.Add("toesas",   new UBASE("Spanish", "toesas", 1.671810000000000E+00, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Spanish", "vara", 8.359050000000000E-01, "m", "L", "1.0"));
          area.Add("aranzada",   new UBASE("Spanish", "aranzada", 4.471917881760000E+03, "m2", "L2", "1.0"));
          area.Add("calemin",   new UBASE("Spanish", "calemin", 5.366301458112000E+02, "m2", "L2", "1.0"));
          area.Add("cuartilla",   new UBASE("Spanish", "cuartilla", 1.746842922562500E+01, "m2", "L2", "1.0"));
          area.Add("fanegada",   new UBASE("Spanish", "fanegada", 6.439561749734400E+03, "m2", "L2", "1.0"));
          area.Add("labor",   new UBASE("Spanish", "labor", 6.987371690250000E+05, "m2", "L2", "1.0"));
          area.Add("labour",   new UBASE("Spanish", "labour", 6.987371690250000E+05, "m2", "L2", "1.0"));
          area.Add("league",   new UBASE("Spanish", "league", 1.746842922562500E+07, "m2", "L2", "1.0"));
          area.Add("square-vara",   new UBASE("Spanish", "square-vara", 6.987371690250000E-01, "m2", "L2", "1.0"));
          area.Add("yugada",   new UBASE("Spanish", "yugada", 3.219780874867200E+05, "m2", "L2", "1.0"));
          mass.Add("adarme",   new UBASE("Spanish", "adarme", 1.797238281250000E-03, "kg", "M", "1.0"));
          mass.Add("arienzo",   new UBASE("Spanish", "arienzo", 1.996931423611110E-04, "kg", "M", "1.0"));
          mass.Add("arroba",   new UBASE("Spanish", "arroba", 1.150232500000000E+01, "kg", "M", "1.0"));
          mass.Add("barril",   new UBASE("Spanish", "barril", 2.300465000000000E+01, "kg", "M", "1.0"));
          mass.Add("dinero",   new UBASE("Spanish", "dinero", 1.198158854166670E-03, "kg", "M", "1.0"));
          mass.Add("escrupulo",   new UBASE("Spanish", "escrupulo", 7.188953125000000E-03, "kg", "M", "1.0"));
          mass.Add("grano",   new UBASE("Spanish", "grano", 4.992328559027780E-05, "kg", "M", "1.0"));
          mass.Add("libra",   new UBASE("Spanish", "libra", 4.600930000000000E-01, "kg", "M", "1.0"));
          mass.Add("marco",   new UBASE("Spanish", "marco", 2.300465000000000E-01, "kg", "M", "1.0"));
          mass.Add("ochava",   new UBASE("Spanish", "ochava", 3.594476562500000E-03, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Spanish", "onza", 2.875581250000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Spanish", "quintal", 4.600930000000000E+01, "kg", "M", "1.0"));
          mass.Add("quintalmacho",   new UBASE("Spanish", "quintalmacho", 6.901395000000000E+01, "kg", "M", "1.0"));
          mass.Add("tomin",   new UBASE("Spanish", "tomin", 5.990794270833330E-04, "kg", "M", "1.0"));
          mass.Add("tondada",   new UBASE("Spanish", "tondada", 9.201860000000000E+02, "kg", "M", "1.0"));
          liquid.Add("arroba",   new UBASE("Spanish", "arroba", 1.256300000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("arroba(water)",   new UBASE("Spanish", "arroba(water)", 1.564316200000000E-02, "m3", "L3", "1.0"));
          liquid.Add("arroba(wine)",   new UBASE("Spanish", "arroba(wine)", 1.613300000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("azumbre",   new UBASE("Spanish", "azumbre", 1.955395250000000E-03, "m3", "L3", "1.0"));
          liquid.Add("bota",   new UBASE("Spanish", "bota", 4.692948600000000E-01, "m3", "L3", "1.0"));
          liquid.Add("cantara",   new UBASE("Spanish", "cantara", 1.564316200000000E-02, "m3", "L3", "1.0"));
          liquid.Add("copas",   new UBASE("Spanish", "copas", 1.222122031250000E-04, "m3", "L3", "1.0"));
          liquid.Add("cuartilla",   new UBASE("Spanish", "cuartilla", 3.910790500000000E-03, "m3", "L3", "1.0"));
          liquid.Add("cuartillo",   new UBASE("Spanish", "cuartillo", 4.888488125000000E-04, "m3", "L3", "1.0"));
          liquid.Add("moio",   new UBASE("Spanish", "moio", 2.502905920000000E-01, "m3", "L3", "1.0"));
          liquid.Add("panilla",   new UBASE("Spanish", "panilla", 1.564316200000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pipa",   new UBASE("Spanish", "pipa", 4.223653740000000E-01, "m3", "L3", "1.0"));
          dry.Add("almud",   new UBASE("Spanish", "almud", 4.625083333333330E-03, "m3", "L3", "1.0"));
          dry.Add("almude",   new UBASE("Spanish", "almude", 4.625083333333330E-03, "m3", "L3", "1.0"));
          dry.Add("cahiz",   new UBASE("Spanish", "cahiz", 6.660120000000000E-01, "m3", "L3", "1.0"));
          dry.Add("calemin",   new UBASE("Spanish", "calemin", 4.625083333333330E-03, "m3", "L3", "1.0"));
          dry.Add("celemin",   new UBASE("Spanish", "celemin", 4.625083333333330E-03, "m3", "L3", "1.0"));
          dry.Add("cuartilla",   new UBASE("Spanish", "cuartilla", 1.387525000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cuartillo",   new UBASE("Spanish", "cuartillo", 1.156270833333330E-03, "m3", "L3", "1.0"));
          dry.Add("fanega",   new UBASE("Spanish", "fanega", 5.550100000000000E-02, "m3", "L3", "1.0"));
          dry.Add("fanegada",   new UBASE("Spanish", "fanegada", 6.439561749734400E+03, "m3", "L3", "1.0"));
          dry.Add("medio",   new UBASE("Spanish", "medio", 2.312541666666670E-03, "m3", "L3", "1.0"));
          dry.Add("ochavillo",   new UBASE("Spanish", "ochavillo", 7.226692708333330E-05, "m3", "L3", "1.0"));
          dry.Add("racion",   new UBASE("Spanish", "racion", 2.890677083333330E-04, "m3", "L3", "1.0"));
          _map.Add("Spanish",   new BaseSystem("Spanish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit93()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("aangula",   new UBASE("Sri-Lankan", "aangula", 1.904999992680960E+01, "m", "L", "1.0"));
          length.Add("anu",   new UBASE("Sri-Lankan", "anu", 1.190401200000000E-06, "m", "L", "1.0"));
          length.Add("dhannamaasa",   new UBASE("Sri-Lankan", "dhannamaasa", 2.721428560972800E+00, "m", "L", "1.0"));
          length.Add("likkha",   new UBASE("Sri-Lankan", "likkha", 5.553935838720000E-02, "m", "L", "1.0"));
          length.Add("paramaanuwa",   new UBASE("Sri-Lankan", "paramaanuwa", 3.306670000000000E-08, "m", "L", "1.0"));
          length.Add("ratharenu",   new UBASE("Sri-Lankan", "ratharenu", 1.542759955200000E-03, "m", "L", "1.0"));
          length.Add("thajjaari",   new UBASE("Sri-Lankan", "thajjaari", 4.285444320000000E-05, "m", "L", "1.0"));
          length.Add("ukha",   new UBASE("Sri-Lankan", "ukha", 3.887755087104000E-01, "m", "L", "1.0"));
          area.Add("amuna",   new UBASE("Sri-Lankan", "amuna", 8.093712000000000E+03, "m2", "L2", "1.0"));
          area.Add("kareesa",   new UBASE("Sri-Lankan", "kareesa", 1.287636000000000E+02, "m2", "L2", "1.0"));
          area.Add("kiriya",   new UBASE("Sri-Lankan", "kiriya", 3.237484800000000E+04, "m2", "L2", "1.0"));
          area.Add("kuruni",   new UBASE("Sri-Lankan", "kuruni", 2.207376000000000E+03, "m2", "L2", "1.0"));
          area.Add("laaha",   new UBASE("Sri-Lankan", "laaha", 4.598700000000000E+00, "m2", "L2", "1.0"));
          area.Add("paela",   new UBASE("Sri-Lankan", "paela", 1.839480000000000E+02, "m2", "L2", "1.0"));
          mass.Add("aka",   new UBASE("Sri-Lankan", "aka", 6.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("dharana",   new UBASE("Sri-Lankan", "dharana", 4.800000000000000E-03, "kg", "M", "1.0"));
          mass.Add("gunja",   new UBASE("Sri-Lankan", "gunja", 1.200000000000000E-04, "kg", "M", "1.0"));
          mass.Add("maasaka",   new UBASE("Sri-Lankan", "maasaka", 2.400000000000000E-04, "kg", "M", "1.0"));
          mass.Add("pala",   new UBASE("Sri-Lankan", "pala", 4.800000000000000E-02, "kg", "M", "1.0"));
          mass.Add("swarna",   new UBASE("Sri-Lankan", "swarna", 2.400000000000000E-02, "kg", "M", "1.0"));
          mass.Add("veeha",   new UBASE("Sri-Lankan", "veeha", 3.000000000000000E-05, "kg", "M", "1.0"));
          liquid.Add("parrah",   new UBASE("Sri-Lankan", "parrah", 2.555152954200000E-02, "m3", "L3", "1.0"));
          liquid.Add("seer",   new UBASE("Sri-Lankan", "seer", 1.135623535200000E-03, "m3", "L3", "1.0"));
          dry.Add("ammonam",   new UBASE("Sri-Lankan", "ammonam", 2.034000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("chundoo",   new UBASE("Sri-Lankan", "chundoo", 2.354166666666670E-04, "m3", "L3", "1.0"));
          dry.Add("parrah",   new UBASE("Sri-Lankan", "parrah", 2.542500000000000E-02, "m3", "L3", "1.0"));
          dry.Add("seer",   new UBASE("Sri-Lankan", "seer", 7.062500000000000E-04, "m3", "L3", "1.0"));
          _map.Add("Sri-Lankan",   new BaseSystem("Sri-Lankan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit94()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("se",   new UBASE("Sumerian", "se", 2.881111111111110E-03, "m", "L", "1.0"));
          length.Add("su-si",   new UBASE("Sumerian", "su-si", 1.728666666666670E-02, "m", "L", "1.0"));
          length.Add("su-du-a",   new UBASE("Sumerian", "su-du-a", 3.457333333333330E-01, "m", "L", "1.0"));
          length.Add("kus",   new UBASE("Sumerian", "kus", 5.186000000000000E-01, "m", "L", "1.0"));
          length.Add("grir",   new UBASE("Sumerian", "grir", 1.037200000000000E+00, "m", "L", "1.0"));
          length.Add("gi",   new UBASE("Sumerian", "gi", 3.111600000000000E+00, "m", "L", "1.0"));
          length.Add("nindan",   new UBASE("Sumerian", "nindan", 6.223200000000000E+00, "m", "L", "1.0"));
          length.Add("ese",   new UBASE("Sumerian", "ese", 6.223200000000000E+01, "m", "L", "1.0"));
          length.Add("us",   new UBASE("Sumerian", "us", 3.733920000000000E+02, "m", "L", "1.0"));
          length.Add("da-na",   new UBASE("Sumerian", "da-na", 1.120176000000000E+04, "m", "L", "1.0"));
          area.Add("gin",   new UBASE("Sumerian", "gin", 2.689459600000000E-01, "m2", "L2", "1.0"));
          area.Add("sar",   new UBASE("Sumerian", "sar", 3.872821824000000E+01, "m2", "L2", "1.0"));
          area.Add("uzalak",   new UBASE("Sumerian", "uzalak", 9.682054560000000E+02, "m2", "L2", "1.0"));
          area.Add("upu",   new UBASE("Sumerian", "upu", 1.936410912000000E+03, "m2", "L2", "1.0"));
          area.Add("iku",   new UBASE("Sumerian", "iku", 3.872821824000000E+03, "m2", "L2", "1.0"));
          area.Add("bur",   new UBASE("Sumerian", "bur", 6.971079283200000E+04, "m2", "L2", "1.0"));
          mass.Add("se",   new UBASE("Sumerian", "se", 4.666666666666670E-04, "kg", "M", "1.0"));
          mass.Add("gin",   new UBASE("Sumerian", "gin", 8.400000000000000E-03, "kg", "M", "1.0"));
          mass.Add("mana",   new UBASE("Sumerian", "mana", 5.040000000000000E-01, "kg", "M", "1.0"));
          mass.Add("gun",   new UBASE("Sumerian", "gun", 1.814400000000000E+03, "kg", "M", "1.0"));
          liquid.Add("gin",   new UBASE("Sumerian", "gin", 1.666666666666670E-05, "m3", "L3", "1.0"));
          liquid.Add("sila",   new UBASE("Sumerian", "sila", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("ban",   new UBASE("Sumerian", "ban", 1.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("barig",   new UBASE("Sumerian", "barig", 6.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("gur",   new UBASE("Sumerian", "gur", 3.000000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-kus",   new UBASE("Sumerian", "cubic-kus", 1.394753748560000E-01, "m3", "L3", "1.0"));
          _map.Add("Sumerian",   new BaseSystem("Sumerian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit95()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("aln",   new UBASE("Swedish", "aln", 5.938000000000000E-01, "m", "L", "1.0"));
          length.Add("alnar",   new UBASE("Swedish", "alnar", 5.344200000000000E+00, "m", "L", "1.0"));
          length.Add("alen",   new UBASE("Swedish", "alen", 5.938000000000000E-01, "m", "L", "1.0"));
          length.Add("ell",   new UBASE("Swedish", "ell", 5.344200000000000E+00, "m", "L", "1.0"));
          length.Add("fanen",   new UBASE("Swedish", "fanen", 1.781400000000000E+00, "m", "L", "1.0"));
          length.Add("famn",   new UBASE("Swedish", "famn", 1.781400000000000E+00, "m", "L", "1.0"));
          length.Add("fingerbredd",   new UBASE("Swedish", "fingerbredd", 1.855625000000000E-02, "m", "L", "1.0"));
          length.Add("fjardingsvag",   new UBASE("Swedish", "fjardingsvag", 2.672100000000000E+03, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("Swedish", "foot", 2.969000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("Swedish", "feet", 2.969000000000000E-01, "m", "L", "1.0"));
          length.Add("fot",   new UBASE("Swedish", "fot", 2.969000000000000E-01, "m", "L", "1.0"));
          length.Add("kvarter",   new UBASE("Swedish", "kvarter", 1.484500000000000E-01, "m", "L", "1.0"));
          length.Add("kyndemil",   new UBASE("Swedish", "kyndemil", 1.599994100000000E+04, "m", "L", "1.0"));
          length.Add("linje",   new UBASE("Swedish", "linje", 2.061805555555560E-03, "m", "L", "1.0"));
          length.Add("mil",   new UBASE("Swedish", "mil", 5.344200000000000E+03, "m", "L", "1.0"));
          length.Add("nymil",   new UBASE("Swedish", "nymil", 1.000000000000000E+04, "m", "L", "1.0"));
          length.Add("ref",   new UBASE("Swedish", "ref", 4.750400000000000E+01, "m", "L", "1.0"));
          length.Add("rev",   new UBASE("Swedish", "rev", 4.750400000000000E+01, "m", "L", "1.0"));
          length.Add("skogsmil",   new UBASE("Swedish", "skogsmil", 4.999796000000000E+03, "m", "L", "1.0"));
          length.Add("stang",   new UBASE("Swedish", "stang", 4.750400000000000E+00, "m", "L", "1.0"));
          length.Add("steg",   new UBASE("Swedish", "steg", 8.907000000000000E-01, "m", "L", "1.0"));
          length.Add("stenkast",   new UBASE("Swedish", "stenkast", 4.750400000000000E+00, "m", "L", "1.0"));
          length.Add("tum",   new UBASE("Swedish", "tum", 2.474166666666670E-02, "m", "L", "1.0"));
          length.Add("tvarhand",   new UBASE("Swedish", "tvarhand", 9.896666666666670E-02, "m", "L", "1.0"));
          area.Add("fjardingsland",   new UBASE("Swedish", "fjardingsland", 2.468189080000000E+03, "m2", "L2", "1.0"));
          area.Add("hektar",   new UBASE("Swedish", "hektar", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("kannaland",   new UBASE("Swedish", "kannaland", 8.814961000000000E+01, "m2", "L2", "1.0"));
          area.Add("kappland",   new UBASE("Swedish", "kappland", 1.542618175000000E+02, "m2", "L2", "1.0"));
          area.Add("kvadratmil",   new UBASE("Swedish", "kvadratmil", 2.856047364000000E+07, "m2", "L2", "1.0"));
          area.Add("kvadrattum",   new UBASE("Swedish", "kvadrattum", 6.121500694444440E-04, "m2", "L2", "1.0"));
          area.Add("kvardratfot",   new UBASE("Swedish", "kvardratfot", 8.814961000000000E-02, "m2", "L2", "1.0"));
          area.Add("pundland",   new UBASE("Swedish", "pundland", 1.974551264000000E+04, "m2", "L2", "1.0"));
          area.Add("spannland",   new UBASE("Swedish", "spannland", 9.872756320000000E+03, "m2", "L2", "1.0"));
          area.Add("square-foot",   new UBASE("Swedish", "square-foot", 8.814961000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("Swedish", "square-feet", 8.814961000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-ref",   new UBASE("Swedish", "square-ref", 8.814961000000000E+02, "m2", "L2", "1.0"));
          area.Add("tunland",   new UBASE("Swedish", "tunland", 4.936378160000000E+03, "m2", "L2", "1.0"));
          area.Add("tunnland",   new UBASE("Swedish", "tunnland", 4.936378160000000E+03, "m2", "L2", "1.0"));
          mass.Add("ass",   new UBASE("Swedish", "ass", 4.804246184448460E-05, "kg", "M", "1.0"));
          mass.Add("bismerpund",   new UBASE("Swedish", "bismerpund", 5.100956428800000E+00, "kg", "M", "1.0"));
          mass.Add("centner",   new UBASE("Swedish", "centner", 4.250797024000000E+01, "kg", "M", "1.0"));
          mass.Add("korn",   new UBASE("Swedish", "korn", 4.250797024000000E-04, "kg", "M", "1.0"));
          mass.Add("liespund",   new UBASE("Swedish", "liespund", 8.501594048000000E+00, "kg", "M", "1.0"));
          mass.Add("lispund",   new UBASE("Swedish", "lispund", 8.501594048000000E+00, "kg", "M", "1.0"));
          mass.Add("lod",   new UBASE("Swedish", "lod", 1.328374070000000E-02, "kg", "M", "1.0"));
          mass.Add("mark",   new UBASE("Swedish", "mark", 2.125398512000000E-01, "kg", "M", "1.0"));
          mass.Add("nylast",   new UBASE("Swedish", "nylast", 5.100956428800000E+03, "kg", "M", "1.0"));
          mass.Add("ort",   new UBASE("Swedish", "ort", 4.250797024000000E-03, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Swedish", "pound", 4.250797024444000E-01, "kg", "M", "1.0"));
          mass.Add("quintin",   new UBASE("Swedish", "quintin", 3.320935175000000E-03, "kg", "M", "1.0"));
          mass.Add("skalpund",   new UBASE("Swedish", "skalpund", 4.250797024000000E-01, "kg", "M", "1.0"));
          mass.Add("skeppsund",   new UBASE("Swedish", "skeppsund", 1.700318809600000E+02, "kg", "M", "1.0"));
          mass.Add("sten",   new UBASE("Swedish", "sten", 1.360255047680000E+01, "kg", "M", "1.0"));
          mass.Add("uns",   new UBASE("Swedish", "uns", 2.656748140000000E-02, "kg", "M", "1.0"));
          mass.Add("waag",   new UBASE("Swedish", "waag", 7.013815089600000E+01, "kg", "M", "1.0"));
          liquid.Add("am",   new UBASE("Swedish", "am", 1.570297152540000E-01, "m3", "L3", "1.0"));
          liquid.Add("ankare",   new UBASE("Swedish", "ankare", 3.925742881350000E-02, "m3", "L3", "1.0"));
          liquid.Add("anker",   new UBASE("Swedish", "anker", 3.925742881350000E-02, "m3", "L3", "1.0"));
          liquid.Add("fat",   new UBASE("Swedish", "fat", 1.570297152540000E-01, "m3", "L3", "1.0"));
          liquid.Add("fjarding",   new UBASE("Swedish", "fjarding", 3.140594305080000E-02, "m3", "L3", "1.0"));
          liquid.Add("fuder",   new UBASE("Swedish", "fuder", 9.421782915240000E-01, "m3", "L3", "1.0"));
          liquid.Add("jungfrur",   new UBASE("Swedish", "jungfrur", 8.178631002812500E-05, "m3", "L3", "1.0"));
          liquid.Add("kvarter",   new UBASE("Swedish", "kvarter", 4.361936534833330E-04, "m3", "L3", "1.0"));
          liquid.Add("ohm",   new UBASE("Swedish", "ohm", 1.570297152540000E-01, "m3", "L3", "1.0"));
          liquid.Add("oxhoft",   new UBASE("Swedish", "oxhoft", 2.355445728810000E-01, "m3", "L3", "1.0"));
          liquid.Add("pipe",   new UBASE("Swedish", "pipe", 4.710891457620000E-01, "m3", "L3", "1.0"));
          liquid.Add("pot",   new UBASE("Swedish", "pot", 9.693192299629630E-04, "m3", "L3", "1.0"));
          liquid.Add("quarter",   new UBASE("Swedish", "quarter", 4.361936534833330E-04, "m3", "L3", "1.0"));
          liquid.Add("stop",   new UBASE("Swedish", "stop", 1.308580960450000E-03, "m3", "L3", "1.0"));
          liquid.Add("storfamn",   new UBASE("Swedish", "storfamn", 3.768713166096000E+00, "m3", "L3", "1.0"));
          liquid.Add("tunna",   new UBASE("Swedish", "tunna", 1.256237722032000E-01, "m3", "L3", "1.0"));
          dry.Add("eimer",   new UBASE("Swedish", "eimer", 7.851485762700000E-02, "m3", "L3", "1.0"));
          dry.Add("fjerdingar",   new UBASE("Swedish", "fjerdingar", 1.832013344630000E-02, "m3", "L3", "1.0"));
          dry.Add("halvspanna",   new UBASE("Swedish", "halvspanna", 3.664026689260000E-02, "m3", "L3", "1.0"));
          dry.Add("junkfra",   new UBASE("Swedish", "junkfra", 8.178631002812500E-05, "m3", "L3", "1.0"));
          dry.Add("kanna",   new UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3", "L3", "1.0"));
          dry.Add("kappar",   new UBASE("Swedish", "kappar", 4.580033361575000E-03, "m3", "L3", "1.0"));
          dry.Add("kollast",   new UBASE("Swedish", "kollast", 1.978574412200400E+00, "m3", "L3", "1.0"));
          dry.Add("koltunna",   new UBASE("Swedish", "koltunna", 1.648812010167000E-01, "m3", "L3", "1.0"));
          dry.Add("kubikfamn",   new UBASE("Swedish", "kubikfamn", 5.653069749144000E+00, "m3", "L3", "1.0"));
          dry.Add("ort",   new UBASE("Swedish", "ort", 8.178631002812500E-05, "m3", "L3", "1.0"));
          dry.Add("quarter",   new UBASE("Swedish", "quarter", 4.361936534833330E-04, "m3", "L3", "1.0"));
          dry.Add("spanna",   new UBASE("Swedish", "spanna", 7.328053378520000E-02, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("Swedish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("Swedish", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("stop",   new UBASE("Swedish", "stop", 1.308580960450000E-03, "m3", "L3", "1.0"));
          dry.Add("tunna",   new UBASE("Swedish", "tunna", 1.465610675704000E-01, "m3", "L3", "1.0"));
          _map.Add("Swedish",   new BaseSystem("Swedish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit96()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("aune",   new UBASE("Swiss", "aune", 6.000000000000000E-01, "m", "L", "1.0"));
          length.Add("brache",   new UBASE("Swiss", "brache", 6.000000000000000E-01, "m", "L", "1.0"));
          length.Add("douzieme",   new UBASE("Swiss", "douzieme", 1.880000000000000E-04, "m", "L", "1.0"));
          length.Add("elle",   new UBASE("Swiss", "elle", 6.000000000000000E-01, "m", "L", "1.0"));
          length.Add("fathom",   new UBASE("Swiss", "fathom", 1.800000000000000E+00, "m", "L", "1.0"));
          length.Add("fuss",   new UBASE("Swiss", "fuss", 3.000000000000000E-01, "m", "L", "1.0"));
          length.Add("klafter",   new UBASE("Swiss", "klafter", 1.800000000000000E+00, "m", "L", "1.0"));
          length.Add("lieue",   new UBASE("Swiss", "lieue", 4.800000000000000E+03, "m", "L", "1.0"));
          length.Add("ligne",   new UBASE("Swiss", "ligne", 2.083333333333330E-03, "m", "L", "1.0"));
          length.Add("linie",   new UBASE("Swiss", "linie", 2.083333333333330E-03, "m", "L", "1.0"));
          length.Add("perche",   new UBASE("Swiss", "perche", 4.800000000000000E+00, "m", "L", "1.0"));
          length.Add("pied",   new UBASE("Swiss", "pied", 3.000000000000000E-01, "m", "L", "1.0"));
          length.Add("pouce",   new UBASE("Swiss", "pouce", 2.500000000000000E-02, "m", "L", "1.0"));
          length.Add("ruthe",   new UBASE("Swiss", "ruthe", 1.800000000000000E+00, "m", "L", "1.0"));
          length.Add("stunde",   new UBASE("Swiss", "stunde", 4.800000000000000E+03, "m", "L", "1.0"));
          length.Add("toise",   new UBASE("Swiss", "toise", 1.800000000000000E+00, "m", "L", "1.0"));
          length.Add("zoll",   new UBASE("Swiss", "zoll", 2.500000000000000E-02, "m", "L", "1.0"));
          area.Add("arpent",   new UBASE("Swiss", "arpent", 3.600000000000000E+01, "m2", "L2", "1.0"));
          mass.Add("drachme(apothecary)",   new UBASE("Swiss", "drachme(apothecary)", 3.906250000000000E-03, "kg", "M", "1.0"));
          mass.Add("grain(apothecary)",   new UBASE("Swiss", "grain(apothecary)", 6.510416666666670E-05, "kg", "M", "1.0"));
          mass.Add("livre",   new UBASE("Swiss", "livre", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("livre(apothecary)",   new UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg", "M", "1.0"));
          mass.Add("livre(ordinary-apothecary)",   new UBASE("Swiss", "livre(ordinary-apothecary)", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("loth",   new UBASE("Swiss", "loth", 1.562500000000000E-02, "kg", "M", "1.0"));
          mass.Add("once",   new UBASE("Swiss", "once", 3.125000000000000E-02, "kg", "M", "1.0"));
          mass.Add("once(apothecary)",   new UBASE("Swiss", "once(apothecary)", 3.125000000000000E-02, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("Swiss", "pound", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Swiss", "quintal", 5.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("scruple(apothecary)",   new UBASE("Swiss", "scruple(apothecary)", 1.302083333333330E-03, "kg", "M", "1.0"));
          mass.Add("zollpfund",   new UBASE("Swiss", "zollpfund", 5.000000000000000E-01, "kg", "M", "1.0"));
          liquid.Add("immi",   new UBASE("Swiss", "immi", 1.500000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("muid",   new UBASE("Swiss", "muid", 1.500000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("pot",   new UBASE("Swiss", "pot", 1.500000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("setier",   new UBASE("Swiss", "setier", 3.750000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("double-quarteron",   new UBASE("Swiss", "double-quarteron", 3.000000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("emine",   new UBASE("Swiss", "emine", 1.500000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("quarteron",   new UBASE("Swiss", "quarteron", 1.500000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("sac",   new UBASE("Swiss", "sac", 1.500000000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Swiss",   new BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit97()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("pic",   new UBASE("Syrian", "pic", 5.820000000000000E-01, "m", "L", "1.0"));
          area.Add("square-pic",   new UBASE("Syrian", "square-pic", 3.387240000000000E-01, "m2", "L2", "1.0"));
          mass.Add("cantar",   new UBASE("Syrian", "cantar", 1.785000000000000E+02, "kg", "M", "1.0"));
          mass.Add("cola",   new UBASE("Syrian", "cola", 6.247500000000000E+01, "kg", "M", "1.0"));
          mass.Add("drachme",   new UBASE("Syrian", "drachme", 4.462500000000000E-03, "kg", "M", "1.0"));
          mass.Add("metecali",   new UBASE("Syrian", "metecali", 4.462500000000000E-03, "kg", "M", "1.0"));
          mass.Add("mitcal",   new UBASE("Syrian", "mitcal", 4.462500000000000E-03, "kg", "M", "1.0"));
          mass.Add("once",   new UBASE("Syrian", "once", 2.975000000000000E-02, "kg", "M", "1.0"));
          mass.Add("pesi",   new UBASE("Syrian", "pesi", 2.975000000000000E-03, "kg", "M", "1.0"));
          mass.Add("rottolo",   new UBASE("Syrian", "rottolo", 1.785000000000000E+00, "kg", "M", "1.0"));
          mass.Add("zurbo",   new UBASE("Syrian", "zurbo", 4.908750000000000E+01, "kg", "M", "1.0"));
          liquid.Add("garava",   new UBASE("Syrian", "garava", 1.440000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("makuk",   new UBASE("Syrian", "makuk", 8.000000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("rotl",   new UBASE("Syrian", "rotl", 3.200000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Syrian", "cubic-pic", 1.971373680000000E-01, "m3", "L3", "1.0"));
          _map.Add("Syrian",   new BaseSystem("Syrian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit98()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("hun",   new UBASE("Taiwanese", "hun", 3.030303030303030E-03, "m", "L", "1.0"));
          length.Add("chhun",   new UBASE("Taiwanese", "chhun", 3.030303030303030E-02, "m", "L", "1.0"));
          length.Add("chhioh",   new UBASE("Taiwanese", "chhioh", 3.030303030303030E-01, "m", "L", "1.0"));
          length.Add("tng",   new UBASE("Taiwanese", "tng", 3.030303030303030E+00, "m", "L", "1.0"));
          area.Add("pe",   new UBASE("Taiwanese", "pe", 3.305785123966940E+00, "m2", "L2", "1.0"));
          area.Add("bo",   new UBASE("Taiwanese", "bo", 9.917355371900830E+01, "m2", "L2", "1.0"));
          area.Add("hun",   new UBASE("Taiwanese", "hun", 9.699173553719010E+02, "m2", "L2", "1.0"));
          area.Add("kah",   new UBASE("Taiwanese", "kah", 9.699173553719010E+03, "m2", "L2", "1.0"));
          area.Add("le",   new UBASE("Taiwanese", "le", 4.849586776859500E+04, "m2", "L2", "1.0"));
          mass.Add("li",   new UBASE("Taiwanese", "li", 3.750000000000000E-05, "kg", "M", "1.0"));
          mass.Add("hun",   new UBASE("Taiwanese", "hun", 3.750000000000000E-04, "kg", "M", "1.0"));
          mass.Add("chi",   new UBASE("Taiwanese", "chi", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("nu",   new UBASE("Taiwanese", "nu", 3.750000000000000E-02, "kg", "M", "1.0"));
          mass.Add("kin",   new UBASE("Taiwanese", "kin", 6.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("kun",   new UBASE("Taiwanese", "kun", 6.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("ta",   new UBASE("Taiwanese", "ta", 6.000000000000000E+01, "kg", "M", "1.0"));
          liquid.Add("ilter",   new UBASE("Taiwanese", "ilter", 1.000000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("cubic-chhioh",   new UBASE("Taiwanese", "cubic-chhioh", 2.782647410746580E-02, "m3", "L3", "1.0"));
          _map.Add("Taiwanese",   new BaseSystem("Taiwanese", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit99()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("koan",   new UBASE("Tamil", "koan", 1.158953125000000E-11, "m", "L", "1.0"));
          length.Add("nunnanu",   new UBASE("Tamil", "nunnanu", 1.158953125000000E-10, "m", "L", "1.0"));
          length.Add("anu",   new UBASE("Tamil", "anu", 1.158953125000000E-09, "m", "L", "1.0"));
          length.Add("kadirtugal",   new UBASE("Tamil", "kadirtugal", 9.271625000000000E-09, "m", "L", "1.0"));
          length.Add("tusumbu",   new UBASE("Tamil", "tusumbu", 7.417300000000000E-08, "m", "L", "1.0"));
          length.Add("mayirnuni",   new UBASE("Tamil", "mayirnuni", 5.933840000000000E-07, "m", "L", "1.0"));
          length.Add("nunnmanal",   new UBASE("Tamil", "nunnmanal", 4.747072000000000E-06, "m", "L", "1.0"));
          length.Add("siru-kadugu",   new UBASE("Tamil", "siru-kadugu", 3.797657600000000E-05, "m", "L", "1.0"));
          length.Add("yel",   new UBASE("Tamil", "yel", 3.038126080000000E-04, "m", "L", "1.0"));
          length.Add("nel",   new UBASE("Tamil", "nel", 2.430500864000000E-03, "m", "L", "1.0"));
          length.Add("viral",   new UBASE("Tamil", "viral", 1.944400691200000E-02, "m", "L", "1.0"));
          length.Add("san",   new UBASE("Tamil", "san", 2.333280829440000E-01, "m", "L", "1.0"));
          length.Add("immi",   new UBASE("Tamil", "immi", 2.333280829440000E-01, "m", "L", "1.0"));
          length.Add("mulam",   new UBASE("Tamil", "mulam", 4.666561658880000E-01, "m", "L", "1.0"));
          length.Add("yaar",   new UBASE("Tamil", "yaar", 9.333123317760000E-01, "m", "L", "1.0"));
          length.Add("pagam",   new UBASE("Tamil", "pagam", 1.866624663552000E+00, "m", "L", "1.0"));
          length.Add("kadam",   new UBASE("Tamil", "kadam", 1.166640414720000E+03, "m", "L", "1.0"));
          area.Add("cent",   new UBASE("Tamil", "cent", 4.046856422400000E+01, "m2", "L2", "1.0"));
          area.Add("marakkal-vitaippatu",   new UBASE("Tamil", "marakkal-vitaippatu", 3.237485137920000E+02, "m2", "L2", "1.0"));
          area.Add("kuruni",   new UBASE("Tamil", "kuruni", 3.237485137920000E+02, "m2", "L2", "1.0"));
          area.Add("patakku",   new UBASE("Tamil", "patakku", 6.474970275840000E+02, "m2", "L2", "1.0"));
          area.Add("mukkuruni",   new UBASE("Tamil", "mukkuruni", 9.712455413760000E+02, "m2", "L2", "1.0"));
          area.Add("kajam",   new UBASE("Tamil", "kajam", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("visam",   new UBASE("Tamil", "visam", 3.344509440000000E+00, "m2", "L2", "1.0"));
          area.Add("kuli",   new UBASE("Tamil", "kuli", 1.335596179009900E+01, "m2", "L2", "1.0"));
          area.Add("ma",   new UBASE("Tamil", "ma", 1.335596179009900E+03, "m2", "L2", "1.0"));
          area.Add("kani",   new UBASE("Tamil", "kani", 5.342384716039610E+03, "m2", "L2", "1.0"));
          area.Add("veli",   new UBASE("Tamil", "veli", 2.671192358019800E+04, "m2", "L2", "1.0"));
          area.Add("thakku",   new UBASE("Tamil", "thakku", 7.023469824000000E-01, "m2", "L2", "1.0"));
          area.Add("parappu",   new UBASE("Tamil", "parappu", 2.529285264000000E+02, "m2", "L2", "1.0"));
          area.Add("lacham",   new UBASE("Tamil", "lacham", 2.529285264000000E+02, "m2", "L2", "1.0"));
          area.Add("kulies",   new UBASE("Tamil", "kulies", 1.405158480000000E+01, "m2", "L2", "1.0"));
          mass.Add("palam",   new UBASE("Tamil", "palam", 4.800000000000000E-02, "kg", "M", "1.0"));
          mass.Add("kaqhsu",   new UBASE("Tamil", "kaqhsu", 1.200000000000000E-02, "kg", "M", "1.0"));
          mass.Add("kalancu",   new UBASE("Tamil", "kalancu", 3.000000000000000E-03, "kg", "M", "1.0"));
          mass.Add("panaveadai",   new UBASE("Tamil", "panaveadai", 6.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("vardgadedai",   new UBASE("Tamil", "vardgadedai", 4.800000000000000E-03, "kg", "M", "1.0"));
          mass.Add("mancddi",   new UBASE("Tamil", "mancddi", 6.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("kunrimani",   new UBASE("Tamil", "kunrimani", 3.000000000000000E-04, "kg", "M", "1.0"));
          mass.Add("nel-edai",   new UBASE("Tamil", "nel-edai", 7.500000000000000E-05, "kg", "M", "1.0"));
          mass.Add("veesai",   new UBASE("Tamil", "veesai", 1.920000000000000E+00, "kg", "M", "1.0"));
          mass.Add("ka",   new UBASE("Tamil", "ka", 4.800000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tulam",   new UBASE("Tamil", "tulam", 1.152000000000000E+01, "kg", "M", "1.0"));
          mass.Add("manangu",   new UBASE("Tamil", "manangu", 1.536000000000000E+01, "kg", "M", "1.0"));
          mass.Add("param",   new UBASE("Tamil", "param", 3.072000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("padi",   new UBASE("Tamil", "padi", 1.344000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("ulakku",   new UBASE("Tamil", "ulakku", 6.720000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("marakkal",   new UBASE("Tamil", "marakkal", 5.376000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("padakku",   new UBASE("Tamil", "padakku", 1.075200000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("toni",   new UBASE("Tamil", "toni", 2.150400000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("kottai",   new UBASE("Tamil", "kottai", 1.128960000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("uri",   new UBASE("Tamil", "uri", 1.344000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("alakku",   new UBASE("Tamil", "alakku", 3.360000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("mahani",   new UBASE("Tamil", "mahani", 1.680000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("sevidu",   new UBASE("Tamil", "sevidu", 6.720000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("lacham(paddy)",   new UBASE("Tamil", "lacham(paddy)", 1.686190176000000E+02, "m3", "L3", "1.0"));
          dry.Add("padi",   new UBASE("Tamil", "padi", 1.344000000000000E-03, "m3", "L3", "1.0"));
          dry.Add("uri",   new UBASE("Tamil", "uri", 6.720000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("ulakku",   new UBASE("Tamil", "ulakku", 3.360000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("alakku",   new UBASE("Tamil", "alakku", 1.680000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("sevidu",   new UBASE("Tamil", "sevidu", 3.360000000000000E-05, "m3", "L3", "1.0"));
          dry.Add("nel",   new UBASE("Tamil", "nel", 9.333333333333330E-08, "m3", "L3", "1.0"));
          dry.Add("marakkal",   new UBASE("Tamil", "marakkal", 1.075200000000000E-02, "m3", "L3", "1.0"));
          dry.Add("kuruni",   new UBASE("Tamil", "kuruni", 1.075200000000000E-02, "m3", "L3", "1.0"));
          dry.Add("padakku",   new UBASE("Tamil", "padakku", 2.150400000000000E-02, "m3", "L3", "1.0"));
          dry.Add("toni",   new UBASE("Tamil", "toni", 4.300800000000000E-02, "m3", "L3", "1.0"));
          dry.Add("kalam",   new UBASE("Tamil", "kalam", 1.290240000000000E-01, "m3", "L3", "1.0"));
          dry.Add("parai",   new UBASE("Tamil", "parai", 5.376000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("karisai",   new UBASE("Tamil", "karisai", 4.300800000000000E+00, "m3", "L3", "1.0"));
          dry.Add("pothi",   new UBASE("Tamil", "pothi", 1.290240000000000E-01, "m3", "L3", "1.0"));
          dry.Add("modai",   new UBASE("Tamil", "modai", 1.290240000000000E-01, "m3", "L3", "1.0"));
          dry.Add("kottai",   new UBASE("Tamil", "kottai", 2.257920000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Tamil",   new BaseSystem("Tamil", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit100()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("ohra",   new UBASE("Tanzanian", "ohra", 5.709920000000000E-01, "m", "L", "1.0"));
          area.Add("square-ohra",   new UBASE("Tanzanian", "square-ohra", 3.260318640640000E-01, "m2", "L2", "1.0"));
          mass.Add("mane",   new UBASE("Tanzanian", "mane", 9.104052458270000E-01, "kg", "M", "1.0"));
          mass.Add("bazla",   new UBASE("Tanzanian", "bazla", 1.552465245562000E+01, "kg", "M", "1.0"));
          mass.Add("franzella",   new UBASE("Tanzanian", "franzella", 1.600373671681400E+01, "kg", "M", "1.0"));
          liquid.Add("cubic-ohra",   new UBASE("Tanzanian", "cubic-ohra", 1.861615861256320E-01, "m3", "L3", "1.0"));
          dry.Add("djzela",   new UBASE("Tanzanian", "djzela", 2.574214075690580E-01, "m3", "L3", "1.0"));
          _map.Add("Tanzanian",   new BaseSystem("Tanzanian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit101()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("duym",   new UBASE("Tatar", "duym", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("qans",   new UBASE("Tatar", "qans", 4.445000000000000E-02, "m", "L", "1.0"));
          length.Add("fut",   new UBASE("Tatar", "fut", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("cirek",   new UBASE("Tatar", "cirek", 1.778000000000000E-01, "m", "L", "1.0"));
          length.Add("soyam",   new UBASE("Tatar", "soyam", 1.778000000000000E-01, "m", "L", "1.0"));
          length.Add("arsin",   new UBASE("Tatar", "arsin", 7.112000000000000E-01, "m", "L", "1.0"));
          length.Add("sajin",   new UBASE("Tatar", "sajin", 2.133600000000000E+00, "m", "L", "1.0"));
          length.Add("caqrim",   new UBASE("Tatar", "caqrim", 1.066800000000000E+03, "m", "L", "1.0"));
          length.Add("farsax",   new UBASE("Tatar", "farsax", 6.934200000000000E+03, "m", "L", "1.0"));
          length.Add("parasang",   new UBASE("Tatar", "parasang", 6.934200000000000E+03, "m", "L", "1.0"));
          length.Add("mil",   new UBASE("Tatar", "mil", 7.467600000000000E+03, "m", "L", "1.0"));
          length.Add("atni-tuqtawsiz-yuriyu",   new UBASE("Tatar", "atni-tuqtawsiz-yuriyu", 1.920240000000000E+04, "m", "L", "1.0"));
          length.Add("cayawlenen-konlek-yuli",   new UBASE("Tatar", "cayawlenen-konlek-yuli", 3.627120000000000E+04, "m", "L", "1.0"));
          length.Add("antnin-konlek-yuli",   new UBASE("Tatar", "antnin-konlek-yuli", 4.480560000000000E+04, "m", "L", "1.0"));
          length.Add("cayawlenen-ayliq-yuli",   new UBASE("Tatar", "cayawlenen-ayliq-yuli", 1.120140000000000E+06, "m", "L", "1.0"));
          area.Add("quadrat-sajin",   new UBASE("Tatar", "quadrat-sajin", 4.552248960000000E+00, "m2", "L2", "1.0"));
          area.Add("carib",   new UBASE("Tatar", "carib", 1.820899584000000E+03, "m2", "L2", "1.0"));
          area.Add("distina",   new UBASE("Tatar", "distina", 1.092539750400000E+04, "m2", "L2", "1.0"));
          area.Add("cirek",   new UBASE("Tatar", "cirek", 5.462698752000000E+03, "m2", "L2", "1.0"));
          area.Add("quadrat-carqrim",   new UBASE("Tatar", "quadrat-carqrim", 1.138062240000000E+06, "m2", "L2", "1.0"));
          mass.Add("oles",   new UBASE("Tatar", "oles", 4.443359375000000E-05, "kg", "M", "1.0"));
          mass.Add("misqal",   new UBASE("Tatar", "misqal", 4.265625000000000E-03, "kg", "M", "1.0"));
          mass.Add("lot",   new UBASE("Tatar", "lot", 1.279687500000000E-02, "kg", "M", "1.0"));
          mass.Add("qadaq",   new UBASE("Tatar", "qadaq", 4.095000000000000E-01, "kg", "M", "1.0"));
          mass.Add("pot",   new UBASE("Tatar", "pot", 1.638000000000000E+01, "kg", "M", "1.0"));
          mass.Add("qantar",   new UBASE("Tatar", "qantar", 4.095000000000000E+01, "kg", "M", "1.0"));
          mass.Add("bevrkovets",   new UBASE("Tatar", "bevrkovets", 1.638000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("garnets",   new UBASE("Tatar", "garnets", 3.279733333333330E-03, "m3", "L3", "1.0"));
          liquid.Add("cirektan",   new UBASE("Tatar", "cirektan", 2.623786666666670E-02, "m3", "L3", "1.0"));
          liquid.Add("cirek",   new UBASE("Tatar", "cirek", 2.099029333333330E-01, "m3", "L3", "1.0"));
          liquid.Add("cilak",   new UBASE("Tatar", "cilak", 1.229900000000000E+01, "m3", "L3", "1.0"));
          liquid.Add("podawqa",   new UBASE("Tatar", "podawqa", 1.600000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("pociq",   new UBASE("Tatar", "pociq", 3.200000000000000E+01, "m3", "L3", "1.0"));
          liquid.Add("batman",   new UBASE("Tatar", "batman", 6.400000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-qadaq",   new UBASE("Tatar", "cubic-qadaq", 6.866915737500000E-02, "m3", "L3", "1.0"));
          _map.Add("Tatar",   new BaseSystem("Tatar", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit102()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("anukabiet",   new UBASE("Thai", "anukabiet", 2.604166666666670E-03, "m", "L", "1.0"));
          length.Add("kabiet",   new UBASE("Thai", "kabiet", 5.208333333333330E-03, "m", "L", "1.0"));
          length.Add("ken",   new UBASE("Thai", "ken", 1.000000000000000E+00, "m", "L", "1.0"));
          length.Add("keup",   new UBASE("Thai", "keup", 2.500000000000000E-01, "m", "L", "1.0"));
          length.Add("khuep",   new UBASE("Thai", "khuep", 2.500000000000000E-01, "m", "L", "1.0"));
          length.Add("krabiat",   new UBASE("Thai", "krabiat", 5.208333333333330E-03, "m", "L", "1.0"));
          length.Add("nio",   new UBASE("Thai", "nio", 2.083333333333330E-02, "m", "L", "1.0"));
          length.Add("niou",   new UBASE("Thai", "niou", 2.083333333333330E-02, "m", "L", "1.0"));
          length.Add("roeneng",   new UBASE("Thai", "roeneng", 4.000000000000000E+03, "m", "L", "1.0"));
          length.Add("sawk",   new UBASE("Thai", "sawk", 5.000000000000000E-01, "m", "L", "1.0"));
          length.Add("sen",   new UBASE("Thai", "sen", 4.000000000000000E+01, "m", "L", "1.0"));
          length.Add("sok",   new UBASE("Thai", "sok", 5.000000000000000E-01, "m", "L", "1.0"));
          length.Add("wa",   new UBASE("Thai", "wa", 2.000000000000000E+00, "m", "L", "1.0"));
          length.Add("wah",   new UBASE("Thai", "wah", 2.000000000000000E+00, "m", "L", "1.0"));
          length.Add("yot",   new UBASE("Thai", "yot", 1.600000000000000E+04, "m", "L", "1.0"));
          length.Add("yote",   new UBASE("Thai", "yote", 1.600000000000000E+04, "m", "L", "1.0"));
          area.Add("ngan",   new UBASE("Thai", "ngan", 4.000000000000000E+02, "m2", "L2", "1.0"));
          area.Add("rai",   new UBASE("Thai", "rai", 1.600000000000000E+03, "m2", "L2", "1.0"));
          area.Add("square-wah(Thai)",   new UBASE("Thai", "square-wah(Thai)", 4.000000000000000E+00, "m2", "L2", "1.0"));
          area.Add("tarang-wa",   new UBASE("Thai", "tarang-wa", 4.000000000000000E+00, "m2", "L2", "1.0"));
          mass.Add("baht",   new UBASE("Thai", "baht", 1.500000000000000E-02, "kg", "M", "1.0"));
          mass.Add("bara",   new UBASE("Thai", "bara", 4.800000000000000E+02, "kg", "M", "1.0"));
          mass.Add("chang",   new UBASE("Thai", "chang", 1.200000000000000E+00, "kg", "M", "1.0"));
          mass.Add("doon",   new UBASE("Thai", "doon", 2.400000000000000E+01, "kg", "M", "1.0"));
          mass.Add("fuang",   new UBASE("Thai", "fuang", 1.875000000000000E-03, "kg", "M", "1.0"));
          mass.Add("grani",   new UBASE("Thai", "grani", 9.375000000000000E-04, "kg", "M", "1.0"));
          mass.Add("hap",   new UBASE("Thai", "hap", 6.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("klam",   new UBASE("Thai", "klam", 2.343750000000000E-04, "kg", "M", "1.0"));
          mass.Add("klom",   new UBASE("Thai", "klom", 1.171875000000000E-04, "kg", "M", "1.0"));
          mass.Add("pai",   new UBASE("Thai", "pai", 4.687500000000000E-04, "kg", "M", "1.0"));
          mass.Add("salueng",   new UBASE("Thai", "salueng", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("salung",   new UBASE("Thai", "salung", 3.750000000000000E-03, "kg", "M", "1.0"));
          mass.Add("sompay",   new UBASE("Thai", "sompay", 9.375000000000000E-04, "kg", "M", "1.0"));
          mass.Add("tamlueng",   new UBASE("Thai", "tamlueng", 6.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("tamlung",   new UBASE("Thai", "tamlung", 6.000000000000000E-02, "kg", "M", "1.0"));
          mass.Add("tchang",   new UBASE("Thai", "tchang", 1.200000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("ban",   new UBASE("Thai", "ban", 1.600000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("chai-meu",   new UBASE("Thai", "chai-meu", 3.125000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("changawn",   new UBASE("Thai", "changawn", 5.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cohi",   new UBASE("Thai", "cohi", 3.200000000000000E+01, "m3", "L3", "1.0"));
          liquid.Add("fai-mue",   new UBASE("Thai", "fai-mue", 1.250000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kam-meu",   new UBASE("Thai", "kam-meu", 1.250000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kam-mue",   new UBASE("Thai", "kam-mue", 1.250000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("kanahm",   new UBASE("Thai", "kanahm", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("koyan",   new UBASE("Thai", "koyan", 3.200000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("kwian",   new UBASE("Thai", "kwian", 3.200000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("kwien",   new UBASE("Thai", "kwien", 3.200000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("laang",   new UBASE("Thai", "laang", 5.000000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("niou",   new UBASE("Thai", "niou", 1.000000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("sat",   new UBASE("Thai", "sat", 2.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("seste",   new UBASE("Thai", "seste", 8.000000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tamlaum",   new UBASE("Thai", "tamlaum", 4.000000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("tanan",   new UBASE("Thai", "tanan", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("tang",   new UBASE("Thai", "tang", 4.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("thanan",   new UBASE("Thai", "thanan", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("thang",   new UBASE("Thai", "thang", 2.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("yip-mue",   new UBASE("Thai", "yip-mue", 7.812500000000000E-06, "m3", "L3", "1.0"));
          dry.Add("cubic-wah",   new UBASE("Thai", "cubic-wah", 8.000000000000000E+00, "m3", "L3", "1.0"));
          _map.Add("Thai",   new BaseSystem("Thai", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit103()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("pic(Arabic)",   new UBASE("Tunisian", "pic(Arabic)", 4.880000000000000E-01, "m", "L", "1.0"));
          length.Add("pic(Endezian)",   new UBASE("Tunisian", "pic(Endezian)", 6.730000000000000E-01, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Tunisian", "pic", 5.625000000000000E-01, "m", "L", "1.0"));
          area.Add("square-pic",   new UBASE("Tunisian", "square-pic", 3.164062500000000E-01, "m2", "L2", "1.0"));
          mass.Add("cantaro",   new UBASE("Tunisian", "cantaro", 3.149500000000000E+00, "kg", "M", "1.0"));
          mass.Add("cantaro(attari)",   new UBASE("Tunisian", "cantaro(attari)", 5.039200000000000E+01, "kg", "M", "1.0"));
          mass.Add("cantaro(khaddari)",   new UBASE("Tunisian", "cantaro(khaddari)", 6.299000000000000E+01, "kg", "M", "1.0"));
          mass.Add("cantaro(sucki)",   new UBASE("Tunisian", "cantaro(sucki)", 5.669100000000000E+01, "kg", "M", "1.0"));
          mass.Add("rottolo(attari)",   new UBASE("Tunisian", "rottolo(attari)", 5.039200000000000E-01, "kg", "M", "1.0"));
          mass.Add("rottolo(khaddari)",   new UBASE("Tunisian", "rottolo(khaddari)", 6.299000000000000E-01, "kg", "M", "1.0"));
          mass.Add("rottolo(sucki)",   new UBASE("Tunisian", "rottolo(sucki)", 5.669100000000000E-01, "kg", "M", "1.0"));
          mass.Add("uckir",   new UBASE("Tunisian", "uckir", 3.149500000000000E-02, "kg", "M", "1.0"));
          liquid.Add("cafisso",   new UBASE("Tunisian", "cafisso", 4.960000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("metter",   new UBASE("Tunisian", "metter", 1.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("millerole",   new UBASE("Tunisian", "millerole", 6.400000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("mitre",   new UBASE("Tunisian", "mitre", 1.000000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("saah",   new UBASE("Tunisian", "saah", 3.844961240310080E-03, "m3", "L3", "1.0"));
          liquid.Add("whiba",   new UBASE("Tunisian", "whiba", 3.100000000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Tunisian", "cubic-pic", 1.779785156250000E-01, "m3", "L3", "1.0"));
          _map.Add("Tunisian",   new BaseSystem("Tunisian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit104()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("arsin",   new UBASE("Turkish", "arsin", 7.553972464870000E-01, "m", "L", "1.0"));
          length.Add("ayak",   new UBASE("Turkish", "ayak", 3.776986232435000E-01, "m", "L", "1.0"));
          length.Add("berid",   new UBASE("Turkish", "berid", 2.266191739461000E+02, "m", "L", "1.0"));
          length.Add("buyuk-donum",   new UBASE("Turkish", "buyuk-donum", 2.720169375000670E+03, "m", "L", "1.0"));
          length.Add("endazem",   new UBASE("Turkish", "endazem", 6.294977054058330E-01, "m", "L", "1.0"));
          length.Add("eski-mil",   new UBASE("Turkish", "eski-mil", 1.888493116217500E+03, "m", "L", "1.0"));
          length.Add("fersah",   new UBASE("Turkish", "fersah", 5.665479348652500E+03, "m", "L", "1.0"));
          length.Add("hat",   new UBASE("Turkish", "hat", 2.622907105857640E-03, "m", "L", "1.0"));
          length.Add("hatt",   new UBASE("Turkish", "hatt", 2.622907105857640E-03, "m", "L", "1.0"));
          length.Add("kadem",   new UBASE("Turkish", "kadem", 3.776986232435000E-01, "m", "L", "1.0"));
          length.Add("kerrab",   new UBASE("Turkish", "kerrab", 4.721232790543750E-02, "m", "L", "1.0"));
          length.Add("kirab",   new UBASE("Turkish", "kirab", 4.721232790543750E-02, "m", "L", "1.0"));
          length.Add("kulac",   new UBASE("Turkish", "kulac", 1.828800000000000E+00, "m", "L", "1.0"));
          length.Add("menzil",   new UBASE("Turkish", "menzil", 2.266191739461000E+02, "m", "L", "1.0"));
          length.Add("merhale",   new UBASE("Turkish", "merhale", 4.532383478922000E+04, "m", "L", "1.0"));
          length.Add("nockat",   new UBASE("Turkish", "nockat", 2.185755921548030E-04, "m", "L", "1.0"));
          length.Add("nokta",   new UBASE("Turkish", "nokta", 2.185755921548030E-04, "m", "L", "1.0"));
          length.Add("nul",   new UBASE("Turkish", "nul", 1.007196328649330E+03, "m", "L", "1.0"));
          length.Add("parmack",   new UBASE("Turkish", "parmack", 3.147488527029170E-02, "m", "L", "1.0"));
          length.Add("pic",   new UBASE("Turkish", "pic", 7.553972464870000E-01, "m", "L", "1.0"));
          length.Add("rubu",   new UBASE("Turkish", "rubu", 9.442465581087500E-02, "m", "L", "1.0"));
          length.Add("urumb",   new UBASE("Turkish", "urumb", 9.442465581087500E-02, "m", "L", "1.0"));
          length.Add("urup",   new UBASE("Turkish", "urup", 9.442465581087500E-02, "m", "L", "1.0"));
          length.Add("zirai",   new UBASE("Turkish", "zirai", 7.553972464870000E-01, "m", "L", "1.0"));
          area.Add("djeril",   new UBASE("Turkish", "djeril", 1.000000000000000E+04, "m2", "L2", "1.0"));
          area.Add("donum",   new UBASE("Turkish", "donum", 9.130000000002260E+02, "m2", "L2", "1.0"));
          area.Add("donum(metric)",   new UBASE("Turkish", "donum(metric)", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("dunum",   new UBASE("Turkish", "dunum", 9.130000000002260E+02, "m2", "L2", "1.0"));
          area.Add("dunum(metric)",   new UBASE("Turkish", "dunum(metric)", 1.000000000000000E+03, "m2", "L2", "1.0"));
          area.Add("eski-donum",   new UBASE("Turkish", "eski-donum", 9.130000000002260E+02, "m2", "L2", "1.0"));
          area.Add("square-pic",   new UBASE("Turkish", "square-pic", 5.706250000001410E-01, "m2", "L2", "1.0"));
          mass.Add("batman",   new UBASE("Turkish", "batman", 7.698000000000000E+00, "kg", "M", "1.0"));
          mass.Add("ceki",   new UBASE("Turkish", "ceki", 2.258080000000000E+02, "kg", "M", "1.0"));
          mass.Add("cequi",   new UBASE("Turkish", "cequi", 3.207500000000000E-01, "kg", "M", "1.0"));
          mass.Add("denke",   new UBASE("Turkish", "denke", 8.018750000000000E-04, "kg", "M", "1.0"));
          mass.Add("dirham",   new UBASE("Turkish", "dirham", 3.207500000000000E-03, "kg", "M", "1.0"));
          mass.Add("dirhem",   new UBASE("Turkish", "dirhem", 3.207500000000000E-03, "kg", "M", "1.0"));
          mass.Add("drachm",   new UBASE("Turkish", "drachm", 3.207500000000000E-03, "kg", "M", "1.0"));
          mass.Add("kantar",   new UBASE("Turkish", "kantar", 5.645200000000000E+01, "kg", "M", "1.0"));
          mass.Add("karat",   new UBASE("Turkish", "karat", 2.004687500000000E-04, "kg", "M", "1.0"));
          mass.Add("kirat",   new UBASE("Turkish", "kirat", 2.004687500000000E-04, "kg", "M", "1.0"));
          mass.Add("miskal",   new UBASE("Turkish", "miskal", 4.811250000000000E-03, "kg", "M", "1.0"));
          mass.Add("oka",   new UBASE("Turkish", "oka", 1.283000000000000E+00, "kg", "M", "1.0"));
          mass.Add("okka",   new UBASE("Turkish", "okka", 1.283000000000000E+00, "kg", "M", "1.0"));
          mass.Add("rottel",   new UBASE("Turkish", "rottel", 5.645200000000000E-01, "kg", "M", "1.0"));
          mass.Add("tcheki",   new UBASE("Turkish", "tcheki", 2.258080000000000E+02, "kg", "M", "1.0"));
          mass.Add("yusdrum",   new UBASE("Turkish", "yusdrum", 3.207500000000000E-01, "kg", "M", "1.0"));
          liquid.Add("chinik",   new UBASE("Turkish", "chinik", 2.500000000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("cubic-zira",   new UBASE("Turkish", "cubic-zira", 1.000000000000000E+00, "m3", "L3", "1.0"));
          liquid.Add("fortin",   new UBASE("Turkish", "fortin", 4.000000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("kile",   new UBASE("Turkish", "kile", 1.000000000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("sinik",   new UBASE("Turkish", "sinik", 9.250000000000000E-04, "m3", "L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Turkish", "cubic-pic", 4.310485537767510E-01, "m3", "L3", "1.0"));
          _map.Add("Turkish",   new BaseSystem("Turkish", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit105()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("altschin",   new UBASE("Turkmenian", "altschin", 7.112000000000000E-01, "m", "L", "1.0"));
          length.Add("hasch",   new UBASE("Turkmenian", "hasch", 7.112000000000000E-01, "m", "L", "1.0"));
          area.Add("square-hasch",   new UBASE("Turkmenian", "square-hasch", 5.058054400000000E-01, "m2", "L2", "1.0"));
          mass.Add("batman",   new UBASE("Turkmenian", "batman", 1.280000000000000E+02, "kg", "M", "1.0"));
          mass.Add("mimtscha",   new UBASE("Turkmenian", "mimtscha", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("sir",   new UBASE("Turkmenian", "sir", 1.600000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tscharik",   new UBASE("Turkmenian", "tscharik", 2.000000000000000E+00, "kg", "M", "1.0"));
          liquid.Add("cubic-hasch",   new UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-hasch",   new UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3", "L3", "1.0"));
          _map.Add("Turkmenian",   new BaseSystem("Turkmenian", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit106()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("barleycorn",   new UBASE("UK", "barleycorn", 8.466666666666670E-03, "m", "L", "1.0"));
          length.Add("bundle",   new UBASE("UK", "bundle", 1.536192000000000E+04, "m", "L", "1.0"));
          length.Add("bdl",   new UBASE("UK", "bdl", 1.536192000000000E+04, "m", "L", "1.0"));
          length.Add("bundle(wool)",   new UBASE("UK", "bundle(wool)", 1.024128000000000E+04, "m", "L", "1.0"));
          length.Add("bdl(wool)",   new UBASE("UK", "bdl(wool)", 1.024128000000000E+04, "m", "L", "1.0"));
          length.Add("button",   new UBASE("UK", "button", 2.116666666666670E-03, "m", "L", "1.0"));
          length.Add("cable-length(nautical)",   new UBASE("UK", "cable-length(nautical)", 1.853184000000000E+02, "m", "L", "1.0"));
          length.Add("chain(Gunter)",   new UBASE("UK", "chain(Gunter)", 2.011680000000000E+01, "m", "L", "1.0"));
          length.Add("ch(Gunter)",   new UBASE("UK", "ch(Gunter)", 2.011680000000000E+01, "m", "L", "1.0"));
          length.Add("chain(nautical)",   new UBASE("UK", "chain(nautical)", 4.572000000000000E+00, "m", "L", "1.0"));
          length.Add("ch(nautical)",   new UBASE("UK", "ch(nautical)", 4.572000000000000E+00, "m", "L", "1.0"));
          length.Add("chain(surveyor)",   new UBASE("UK", "chain(surveyor)", 2.011680000000000E+01, "m", "L", "1.0"));
          length.Add("ch(surveyor)",   new UBASE("UK", "ch(surveyor)", 2.011680000000000E+01, "m", "L", "1.0"));
          length.Add("cubit",   new UBASE("UK", "cubit", 4.572000000000000E-01, "m", "L", "1.0"));
          length.Add("cu",   new UBASE("UK", "cu", 4.572000000000000E-01, "m", "L", "1.0"));
          length.Add("cut(cotton)",   new UBASE("UK", "cut(cotton)", 6.583680000000000E+01, "m", "L", "1.0"));
          length.Add("cut(linen)",   new UBASE("UK", "cut(linen)", 2.743200000000000E+02, "m", "L", "1.0"));
          length.Add("cut(wool)",   new UBASE("UK", "cut(wool)", 4.267200000000000E+01, "m", "L", "1.0"));
          length.Add("digit",   new UBASE("UK", "digit", 1.905000000000000E-02, "m", "L", "1.0"));
          length.Add("ell",   new UBASE("UK", "ell", 9.398000000000000E-01, "m", "L", "1.0"));
          length.Add("emerald",   new UBASE("UK", "emerald", 2.293055555555560E-03, "m", "L", "1.0"));
          length.Add("fall",   new UBASE("UK", "fall", 6.858000000000000E+00, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("UK", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("ft",   new UBASE("UK", "ft", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("UK", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("foot(old)",   new UBASE("UK", "foot(old)", 3.047997347632710E-01, "m", "L", "1.0"));
          length.Add("ft(old)",   new UBASE("UK", "ft(old)", 3.047997347632710E-01, "m", "L", "1.0"));
          length.Add("furlong",   new UBASE("UK", "furlong", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("fur",   new UBASE("UK", "fur", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("furlongs",   new UBASE("UK", "furlongs", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("goad",   new UBASE("UK", "goad", 1.371600000000000E+00, "m", "L", "1.0"));
          length.Add("hank(cotton)",   new UBASE("UK", "hank(cotton)", 7.680960000000000E+02, "m", "L", "1.0"));
          length.Add("hank(wool)",   new UBASE("UK", "hank(wool)", 5.120640000000000E+02, "m", "L", "1.0"));
          length.Add("heer(linen)",   new UBASE("UK", "heer(linen)", 5.486400000000000E+02, "m", "L", "1.0"));
          length.Add("inch(old)",   new UBASE("UK", "inch(old)", 2.539998000000000E-02, "m", "L", "1.0"));
          length.Add("in(old)",   new UBASE("UK", "in(old)", 2.539998000000000E-02, "m", "L", "1.0"));
          length.Add("iron",   new UBASE("UK", "iron", 5.291666666666670E-04, "m", "L", "1.0"));
          length.Add("lap",   new UBASE("UK", "lap", 4.023360000000000E+02, "m", "L", "1.0"));
          length.Add("lea",   new UBASE("UK", "lea", 1.097280000000000E+02, "m", "L", "1.0"));
          length.Add("lea(cotton)",   new UBASE("UK", "lea(cotton)", 1.097280000000000E+02, "m", "L", "1.0"));
          length.Add("lea(linen)",   new UBASE("UK", "lea(linen)", 2.743200000000000E+02, "m", "L", "1.0"));
          length.Add("lea(wool)",   new UBASE("UK", "lea(wool)", 7.315200000000000E+01, "m", "L", "1.0"));
          length.Add("league",   new UBASE("UK", "league", 5.559552000000000E+03, "m", "L", "1.0"));
          length.Add("leag",   new UBASE("UK", "leag", 5.559552000000000E+03, "m", "L", "1.0"));
          length.Add("line",   new UBASE("UK", "line", 2.116666666666670E-03, "m", "L", "1.0"));
          length.Add("link(Gunter)",   new UBASE("UK", "link(Gunter)", 2.011680000000000E-01, "m", "L", "1.0"));
          length.Add("link(surveyor)",   new UBASE("UK", "link(surveyor)", 2.011680000000000E-01, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("UK", "mile", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mi",   new UBASE("UK", "mi", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mile(statute)",   new UBASE("UK", "mile(statute)", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("UK", "miles", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mile(London)",   new UBASE("UK", "mile(London)", 1.524000000000000E+03, "m", "L", "1.0"));
          length.Add("mile(nautical)",   new UBASE("UK", "mile(nautical)", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("mi(nautical)",   new UBASE("UK", "mi(nautical)", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("mile(old-nautical)",   new UBASE("UK", "mile(old-nautical)", 1.854981710400000E+03, "m", "L", "1.0"));
          length.Add("mon",   new UBASE("UK", "mon", 2.540000000000000E-05, "m", "L", "1.0"));
          length.Add("nail",   new UBASE("UK", "nail", 5.715000000000000E-02, "m", "L", "1.0"));
          length.Add("nautical-mile",   new UBASE("UK", "nautical-mile", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("nmi",   new UBASE("UK", "nmi", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("nautical-miles",   new UBASE("UK", "nautical-miles", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("ounce(shoes)",   new UBASE("UK", "ounce(shoes)", 3.968750000000000E-04, "m", "L", "1.0"));
          length.Add("pace",   new UBASE("UK", "pace", 7.620000000000000E-01, "m", "L", "1.0"));
          length.Add("palm",   new UBASE("UK", "palm", 7.620000000000000E-02, "m", "L", "1.0"));
          length.Add("plm",   new UBASE("UK", "plm", 7.620000000000000E-02, "m", "L", "1.0"));
          length.Add("point(Australian)",   new UBASE("UK", "point(Australian)", 2.540000000000000E-04, "m", "L", "1.0"));
          length.Add("point",   new UBASE("UK", "point", 1.763888888888890E-04, "m", "L", "1.0"));
          length.Add("pt",   new UBASE("UK", "pt", 1.763888888888890E-04, "m", "L", "1.0"));
          length.Add("point(meteorological)",   new UBASE("UK", "point(meteorological)", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("quarter-yard",   new UBASE("UK", "quarter-yard", 2.286000000000000E-01, "m", "L", "1.0"));
          length.Add("rope",   new UBASE("UK", "rope", 6.096000000000000E+00, "m", "L", "1.0"));
          length.Add("ruby(modern)",   new UBASE("UK", "ruby(modern)", 1.940277777777780E-03, "m", "L", "1.0"));
          length.Add("shackles",   new UBASE("UK", "shackles", 2.743200000000000E+01, "m", "L", "1.0"));
          length.Add("shaftment(old)",   new UBASE("UK", "shaftment(old)", 1.524000000000000E-01, "m", "L", "1.0"));
          length.Add("shaftment",   new UBASE("UK", "shaftment", 1.500000000000000E-01, "m", "L", "1.0"));
          length.Add("skein",   new UBASE("UK", "skein", 1.097280000000000E+02, "m", "L", "1.0"));
          length.Add("spindle(cotton)",   new UBASE("UK", "spindle(cotton)", 1.382572800000000E+04, "m", "L", "1.0"));
          length.Add("spindle(jute)",   new UBASE("UK", "spindle(jute)", 1.316736000000000E+04, "m", "L", "1.0"));
          length.Add("step",   new UBASE("UK", "step", 7.620000000000000E-01, "m", "L", "1.0"));
          length.Add("travel-hour(boat)",   new UBASE("UK", "travel-hour(boat)", 6.500000000000000E+03, "m", "L", "1.0"));
          length.Add("travel-hour(horse)",   new UBASE("UK", "travel-hour(horse)", 5.000000000000000E+03, "m", "L", "1.0"));
          length.Add("travel-hour(man)",   new UBASE("UK", "travel-hour(man)", 4.828000000000000E+03, "m", "L", "1.0"));
          length.Add("wrap",   new UBASE("UK", "wrap", 7.315200000000000E+01, "m", "L", "1.0"));
          length.Add("yard(old)",   new UBASE("UK", "yard(old)", 9.143992042898120E-01, "m", "L", "1.0"));
          length.Add("yd(old)",   new UBASE("UK", "yd(old)", 9.143992042898120E-01, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("UK", "yard", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yd",   new UBASE("UK", "yd", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yards",   new UBASE("UK", "yards", 9.144000000000000E-01, "m", "L", "1.0"));
          area.Add("acre",   new UBASE("UK", "acre", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("ac",   new UBASE("UK", "ac", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("acres",   new UBASE("UK", "acres", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("acre(cunningham)",   new UBASE("UK", "acre(cunningham)", 5.188277464615390E+03, "m2", "L2", "1.0"));
          area.Add("ac(cunhm)",   new UBASE("UK", "ac(cunhm)", 5.188277464615390E+03, "m2", "L2", "1.0"));
          area.Add("acre(cunhm)",   new UBASE("UK", "acre(cunhm)", 5.188277464615390E+03, "m2", "L2", "1.0"));
          area.Add("acre(plantation)",   new UBASE("UK", "acre(plantation)", 5.188277464615390E+03, "m2", "L2", "1.0"));
          area.Add("ac(plant)",   new UBASE("UK", "ac(plant)", 5.188277464615390E+03, "m2", "L2", "1.0"));
          area.Add("acre(plant)",   new UBASE("UK", "acre(plant)", 5.188277464615390E+03, "m2", "L2", "1.0"));
          area.Add("bolt(cotton)",   new UBASE("UK", "bolt(cotton)", 9.754819200000000E+01, "m2", "L2", "1.0"));
          area.Add("bolt(wool)",   new UBASE("UK", "bolt(wool)", 1.393545600000000E+02, "m2", "L2", "1.0"));
          area.Add("bovate",   new UBASE("UK", "bovate", 6.070284633600000E+04, "m2", "L2", "1.0"));
          area.Add("fall",   new UBASE("UK", "fall", 4.703216400000000E+01, "m2", "L2", "1.0"));
          area.Add("gallon-per-foot",   new UBASE("UK", "gallon-per-foot", 1.491500000000000E-02, "m2", "L2", "1.0"));
          area.Add("gal/ft",   new UBASE("UK", "gal/ft", 1.491500000000000E-02, "m2", "L2", "1.0"));
          area.Add("gallon-per-mile",   new UBASE("UK", "gallon-per-mile", 2.824810606060610E-06, "m2", "L2", "1.0"));
          area.Add("gal/mi",   new UBASE("UK", "gal/mi", 2.824810606060610E-06, "m2", "L2", "1.0"));
          area.Add("hide",   new UBASE("UK", "hide", 4.856227706880000E+03, "m2", "L2", "1.0"));
          area.Add("hundred",   new UBASE("UK", "hundred", 4.856227706880000E+05, "m2", "L2", "1.0"));
          area.Add("open-window-unit",   new UBASE("UK", "open-window-unit", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("owu",   new UBASE("UK", "owu", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("rood",   new UBASE("UK", "rood", 1.011714105600000E+03, "m2", "L2", "1.0"));
          area.Add("shed",   new UBASE("UK", "shed", 1.000000000000000E-52, "m2", "L2", "1.0"));
          area.Add("skein",   new UBASE("UK", "skein", 1.204023398400000E+04, "m2", "L2", "1.0"));
          area.Add("skein(cotton)",   new UBASE("UK", "skein(cotton)", 2.787091200000000E+00, "m2", "L2", "1.0"));
          area.Add("square-chain(Gunter)",   new UBASE("UK", "square-chain(Gunter)", 4.046856422400000E+02, "m2", "L2", "1.0"));
          area.Add("sq-ch(Gunter)",   new UBASE("UK", "sq-ch(Gunter)", 4.046856422400000E+02, "m2", "L2", "1.0"));
          area.Add("square-chain(surveyor)",   new UBASE("UK", "square-chain(surveyor)", 4.046856422400000E+02, "m2", "L2", "1.0"));
          area.Add("sq-ch(surveyor)",   new UBASE("UK", "sq-ch(surveyor)", 4.046856422400000E+02, "m2", "L2", "1.0"));
          area.Add("square-foot",   new UBASE("UK", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("ft2",   new UBASE("UK", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("sq-ft",   new UBASE("UK", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("UK", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-inch",   new UBASE("UK", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("in2",   new UBASE("UK", "in2", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("sq-in",   new UBASE("UK", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-inches",   new UBASE("UK", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-league(nautical)",   new UBASE("UK", "square-league(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0"));
          area.Add("sq-leag(nautical)",   new UBASE("UK", "sq-leag(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0"));
          area.Add("square-mile(nautical)",   new UBASE("UK", "square-mile(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(nautical)",   new UBASE("UK", "sq-mi(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0"));
          area.Add("square-mile",   new UBASE("UK", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi",   new UBASE("UK", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("mi2",   new UBASE("UK", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-miles",   new UBASE("UK", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-yard(old)",   new UBASE("UK", "square-yard(old)", 8.361259048058420E-01, "m2", "L2", "1.0"));
          area.Add("yd2(old)",   new UBASE("UK", "yd2(old)", 8.361259048058420E-01, "m2", "L2", "1.0"));
          area.Add("sq-yd(old)",   new UBASE("UK", "sq-yd(old)", 8.361259048058420E-01, "m2", "L2", "1.0"));
          area.Add("square-yard",   new UBASE("UK", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("yd2",   new UBASE("UK", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("sq-yd",   new UBASE("UK", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("square-yards",   new UBASE("UK", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("vergees(Guernsey)",   new UBASE("UK", "vergees(Guernsey)", 1.541659589485710E+03, "m2", "L2", "1.0"));
          area.Add("vergees(Jersey)",   new UBASE("UK", "vergees(Jersey)", 1.798602854400000E+03, "m2", "L2", "1.0"));
          area.Add("virgate",   new UBASE("UK", "virgate", 1.214056926720000E+05, "m2", "L2", "1.0"));
          mass.Add("bag(cement)",   new UBASE("UK", "bag(cement)", 4.263768278000000E+01, "kg", "M", "1.0"));
          mass.Add("bale",   new UBASE("UK", "bale", 3.401942775000000E+02, "kg", "M", "1.0"));
          mass.Add("bl",   new UBASE("UK", "bl", 3.401942775000000E+02, "kg", "M", "1.0"));
          mass.Add("barrel(butter)",   new UBASE("UK", "barrel(butter)", 1.016046908800000E+02, "kg", "M", "1.0"));
          mass.Add("barrel(cement)",   new UBASE("UK", "barrel(cement)", 1.705507311200000E+02, "kg", "M", "1.0"));
          mass.Add("barrel(salt)",   new UBASE("UK", "barrel(salt)", 1.270058636000000E+02, "kg", "M", "1.0"));
          mass.Add("block",   new UBASE("UK", "block", 2.267961850000000E+00, "kg", "M", "1.0"));
          mass.Add("box",   new UBASE("UK", "box", 4.082331330000000E+01, "kg", "M", "1.0"));
          mass.Add("brick",   new UBASE("UK", "brick", 3.175146590000000E+00, "kg", "M", "1.0"));
          mass.Add("carat(old)",   new UBASE("UK", "carat(old)", 2.049589523300000E-04, "kg", "M", "1.0"));
          mass.Add("ct",   new UBASE("UK", "ct", 2.049589523300000E-04, "kg", "M", "1.0"));
          mass.Add("chalder(coal)",   new UBASE("UK", "chalder(coal)", 2.692524308320000E+03, "kg", "M", "1.0"));
          mass.Add("chd",   new UBASE("UK", "chd", 2.692524308320000E+03, "kg", "M", "1.0"));
          mass.Add("clove(butter)",   new UBASE("UK", "clove(butter)", 3.628738960000000E+00, "kg", "M", "1.0"));
          mass.Add("clove(customary-stone)",   new UBASE("UK", "clove(customary-stone)", 3.628738960000000E+00, "kg", "M", "1.0"));
          mass.Add("clove(wool)",   new UBASE("UK", "clove(wool)", 3.628738960000000E+00, "kg", "M", "1.0"));
          mass.Add("coal-skip",   new UBASE("UK", "coal-skip", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("drop",   new UBASE("UK", "drop", 1.943967300000000E-03, "kg", "M", "1.0"));
          mass.Add("dutch-cask(butter)",   new UBASE("UK", "dutch-cask(butter)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("firkin(butter)",   new UBASE("UK", "firkin(butter)", 2.540117272000000E+01, "kg", "M", "1.0"));
          mass.Add("fother",   new UBASE("UK", "fother", 9.906457360800000E+02, "kg", "M", "1.0"));
          mass.Add("fothers",   new UBASE("UK", "fothers", 9.525439770000000E+02, "kg", "M", "1.0"));
          mass.Add("fotmal",   new UBASE("UK", "fotmal", 3.175146590000000E+01, "kg", "M", "1.0"));
          mass.Add("frail",   new UBASE("UK", "frail", 2.267961850000000E+01, "kg", "M", "1.0"));
          mass.Add("geepound",   new UBASE("UK", "geepound", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("grain(jeweller)",   new UBASE("UK", "grain(jeweller)", 5.000000000000000E-05, "kg", "M", "1.0"));
          mass.Add("gr(jeweller)",   new UBASE("UK", "gr(jeweller)", 5.000000000000000E-05, "kg", "M", "1.0"));
          mass.Add("grain",   new UBASE("UK", "grain", 6.479891000000000E-05, "kg", "M", "1.0"));
          mass.Add("hundredweight(long)",   new UBASE("UK", "hundredweight(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cH(long)",   new UBASE("UK", "cH(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(long)",   new UBASE("UK", "cwt(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("lg(long)",   new UBASE("UK", "lg(long)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(gross)",   new UBASE("UK", "hundredweight(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cH(gross)",   new UBASE("UK", "cH(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(gross)",   new UBASE("UK", "cwt(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("lg(gross)",   new UBASE("UK", "lg(gross)", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("keel",   new UBASE("UK", "keel", 2.143858977568000E+04, "kg", "M", "1.0"));
          mass.Add("keel(coal)",   new UBASE("UK", "keel(coal)", 2.154019446656000E+04, "kg", "M", "1.0"));
          mass.Add("load",   new UBASE("UK", "load", 1.143052772400000E+02, "kg", "M", "1.0"));
          mass.Add("load(straw)",   new UBASE("UK", "load(straw)", 5.878557115200000E+02, "kg", "M", "1.0"));
          mass.Add("load(wool)",   new UBASE("UK", "load(wool)", 1.371663326880000E+03, "kg", "M", "1.0"));
          mass.Add("mancus",   new UBASE("UK", "mancus", 6.220695360000000E-02, "kg", "M", "1.0"));
          mass.Add("mast",   new UBASE("UK", "mast", 9.331043040000000E-01, "kg", "M", "1.0"));
          mass.Add("mite",   new UBASE("UK", "mite", 3.239945500000000E-06, "kg", "M", "1.0"));
          mass.Add("ounce",   new UBASE("UK", "ounce", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("oz",   new UBASE("UK", "oz", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("ounce(mercantile)",   new UBASE("UK", "ounce(mercantile)", 2.915950950000000E-02, "kg", "M", "1.0"));
          mass.Add("oz(mercantile)",   new UBASE("UK", "oz(mercantile)", 2.915950950000000E-02, "kg", "M", "1.0"));
          mass.Add("ounce(tower)",   new UBASE("UK", "ounce(tower)", 2.915950950000000E-02, "kg", "M", "1.0"));
          mass.Add("oz(tower)",   new UBASE("UK", "oz(tower)", 2.915950950000000E-02, "kg", "M", "1.0"));
          mass.Add("pennyweight(mercantile)",   new UBASE("UK", "pennyweight(mercantile)", 1.417476156250000E-03, "kg", "M", "1.0"));
          mass.Add("dwt(mercantile)",   new UBASE("UK", "dwt(mercantile)", 1.417476156250000E-03, "kg", "M", "1.0"));
          mass.Add("pennyweight(tower)",   new UBASE("UK", "pennyweight(tower)", 1.457975475000000E-03, "kg", "M", "1.0"));
          mass.Add("dwt(tower)",   new UBASE("UK", "dwt(tower)", 1.457975475000000E-03, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("UK", "pound", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb",   new UBASE("UK", "lb", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pounds",   new UBASE("UK", "pounds", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(mercantile)",   new UBASE("UK", "pound(mercantile)", 4.373926425000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(mercantile)",   new UBASE("UK", "lb(mercantile)", 4.373926425000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(merchant)",   new UBASE("UK", "pound(merchant)", 4.665521520000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(merchant)",   new UBASE("UK", "lb(merchant)", 4.665521520000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(new-hay)",   new UBASE("UK", "pound(new-hay)", 2.721554220000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(new-hay)",   new UBASE("UK", "lb(new-hay)", 2.721554220000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(old-hay)",   new UBASE("UK", "pound(old-hay)", 2.915950950000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(old-hay)",   new UBASE("UK", "lb(old-hay)", 2.915950950000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(old-merchant)",   new UBASE("UK", "pound(old-merchant)", 4.976556288000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(standard)",   new UBASE("UK", "pound(standard)", 4.535923380000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(IS)",   new UBASE("UK", "lb(IS)", 4.535923380000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(straw)",   new UBASE("UK", "pound(straw)", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(straw)",   new UBASE("UK", "lb(straw)", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pound(tower)",   new UBASE("UK", "pound(tower)", 3.499141140000000E-01, "kg", "M", "1.0"));
          mass.Add("lb(tower)",   new UBASE("UK", "lb(tower)", 3.499141140000000E-01, "kg", "M", "1.0"));
          mass.Add("quarter",   new UBASE("UK", "quarter", 1.270058636000000E+01, "kg", "M", "1.0"));
          mass.Add("quartern",   new UBASE("UK", "quartern", 1.814369480000000E+00, "kg", "M", "1.0"));
          mass.Add("room",   new UBASE("UK", "room", 7.112328361600000E+03, "kg", "M", "1.0"));
          mass.Add("sack(coal)",   new UBASE("UK", "sack(coal)", 1.120000000000000E+02, "kg", "M", "1.0"));
          mass.Add("sack(large-coal)",   new UBASE("UK", "sack(large-coal)", 1.016046908800000E+02, "kg", "M", "1.0"));
          mass.Add("sack(wool)",   new UBASE("UK", "sack(wool)", 1.651076226800000E+02, "kg", "M", "1.0"));
          mass.Add("sarpler(wool)",   new UBASE("UK", "sarpler(wool)", 9.071847400000000E+02, "kg", "M", "1.0"));
          mass.Add("score",   new UBASE("UK", "score", 9.071847400000000E+00, "kg", "M", "1.0"));
          mass.Add("scruple(apothecary)",   new UBASE("UK", "scruple(apothecary)", 1.295978200000000E-03, "kg", "M", "1.0"));
          mass.Add("s(ap)",   new UBASE("UK", "s(ap)", 1.295978200000000E-03, "kg", "M", "1.0"));
          mass.Add("scr(ap)",   new UBASE("UK", "scr(ap)", 1.295978200000000E-03, "kg", "M", "1.0"));
          mass.Add("ship-load",   new UBASE("UK", "ship-load", 4.308038893312000E+05, "kg", "M", "1.0"));
          mass.Add("slug",   new UBASE("UK", "slug", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("stone",   new UBASE("UK", "stone", 6.350293180000000E+00, "kg", "M", "1.0"));
          mass.Add("st",   new UBASE("UK", "st", 6.350293180000000E+00, "kg", "M", "1.0"));
          mass.Add("stone(lead)",   new UBASE("UK", "stone(lead)", 5.669904625000000E+00, "kg", "M", "1.0"));
          mass.Add("stone(wool)",   new UBASE("UK", "stone(wool)", 5.669904625000000E+00, "kg", "M", "1.0"));
          mass.Add("st(wool)",   new UBASE("UK", "st(wool)", 5.669904625000000E+00, "kg", "M", "1.0"));
          mass.Add("tod",   new UBASE("UK", "tod", 1.270058636000000E+01, "kg", "M", "1.0"));
          mass.Add("ton(assay)",   new UBASE("UK", "ton(assay)", 3.061224489795920E-05, "kg", "M", "1.0"));
          mass.Add("AT",   new UBASE("UK", "AT", 3.061224489795920E-05, "kg", "M", "1.0"));
          mass.Add("ton(long)",   new UBASE("UK", "ton(long)", 1.016046908800000E+03, "kg", "M", "1.0"));
          mass.Add("lg-ton",   new UBASE("UK", "lg-ton", 1.016046908800000E+03, "kg", "M", "1.0"));
          mass.Add("ton(shipping)",   new UBASE("UK", "ton(shipping)", 1.169698140599040E+03, "kg", "M", "1.0"));
          mass.Add("truss",   new UBASE("UK", "truss", 1.632932532000000E+01, "kg", "M", "1.0"));
          mass.Add("tub",   new UBASE("UK", "tub", 3.810175908000000E+01, "kg", "M", "1.0"));
          mass.Add("tub(butter)",   new UBASE("UK", "tub(butter)", 3.810175908000000E+01, "kg", "M", "1.0"));
          mass.Add("wey",   new UBASE("UK", "wey", 1.143052772400000E+02, "kg", "M", "1.0"));
          mass.Add("wey(lead)",   new UBASE("UK", "wey(lead)", 7.937866475000000E+01, "kg", "M", "1.0"));
          mass.Add("whey(Essex)",   new UBASE("UK", "whey(Essex)", 1.070477993200000E+02, "kg", "M", "1.0"));
          mass.Add("whey(Suffolk)",   new UBASE("UK", "whey(Suffolk)", 1.614788837200000E+02, "kg", "M", "1.0"));
          liquid.Add("acre-foot",   new UBASE("UK", "acre-foot", 1.233481837547520E+03, "m3", "L3", "1.0"));
          liquid.Add("ac-ft",   new UBASE("UK", "ac-ft", 1.233481837547520E+03, "m3", "L3", "1.0"));
          liquid.Add("acre-ft",   new UBASE("UK", "acre-ft", 1.233481837547520E+03, "m3", "L3", "1.0"));
          liquid.Add("acre-inch",   new UBASE("UK", "acre-inch", 1.027901531289600E+02, "m3", "L3", "1.0"));
          liquid.Add("ac-in",   new UBASE("UK", "ac-in", 1.027901531289600E+02, "m3", "L3", "1.0"));
          liquid.Add("acre-in",   new UBASE("UK", "acre-in", 1.027901531289600E+02, "m3", "L3", "1.0"));
          liquid.Add("anker",   new UBASE("UK", "anker", 4.546092000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("balthazar",   new UBASE("UK", "balthazar", 1.212291200000000E-02, "m3", "L3", "1.0"));
          liquid.Add("barrel",   new UBASE("UK", "barrel", 1.663614737280000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl",   new UBASE("UK", "bbl", 1.663614737280000E-01, "m3", "L3", "1.0"));
          liquid.Add("barrel(beer)",   new UBASE("UK", "barrel(beer)", 1.636593120000000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl(beer)",   new UBASE("UK", "bbl(beer)", 1.636593120000000E-01, "m3", "L3", "1.0"));
          liquid.Add("barrel(wine)",   new UBASE("UK", "barrel(wine)", 1.432018980000000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl(wine)",   new UBASE("UK", "bbl(wine)", 1.432018980000000E-01, "m3", "L3", "1.0"));
          liquid.Add("beer-butt",   new UBASE("UK", "beer-butt", 4.990844211840000E-01, "m3", "L3", "1.0"));
          liquid.Add("bt(beer)",   new UBASE("UK", "bt(beer)", 4.990844211840000E-01, "m3", "L3", "1.0"));
          liquid.Add("breakfast-cup",   new UBASE("UK", "breakfast-cup", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("bucket",   new UBASE("UK", "bucket", 1.818436800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bk",   new UBASE("UK", "bk", 1.818436800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bushel",   new UBASE("UK", "bushel", 3.636873600000000E-02, "m3", "L3", "1.0"));
          liquid.Add("bu",   new UBASE("UK", "bu", 3.636873600000000E-02, "m3", "L3", "1.0"));
          liquid.Add("butt",   new UBASE("UK", "butt", 4.909779360000000E-01, "m3", "L3", "1.0"));
          liquid.Add("bt",   new UBASE("UK", "bt", 4.909779360000000E-01, "m3", "L3", "1.0"));
          liquid.Add("chopine",   new UBASE("UK", "chopine", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("coomb",   new UBASE("UK", "coomb", 1.454749440000000E-01, "m3", "L3", "1.0"));
          liquid.Add("cran",   new UBASE("UK", "cran", 1.704784500000000E-01, "m3", "L3", "1.0"));
          liquid.Add("mease",   new UBASE("UK", "mease", 1.704784500000000E-01, "m3", "L3", "1.0"));
          liquid.Add("cup",   new UBASE("UK", "cup", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cups",   new UBASE("UK", "cups", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("demiard",   new UBASE("UK", "demiard", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("drachm",   new UBASE("UK", "drachm", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("fl-dr",   new UBASE("UK", "fl-dr", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("dram",   new UBASE("UK", "dram", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("drop",   new UBASE("UK", "drop", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("min",   new UBASE("UK", "min", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("firkin",   new UBASE("UK", "firkin", 4.091482800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("fir",   new UBASE("UK", "fir", 4.091482800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("firkin(beer)",   new UBASE("UK", "firkin(beer)", 4.159036843200000E-02, "m3", "L3", "1.0"));
          liquid.Add("flagon",   new UBASE("UK", "flagon", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("fluid-dram",   new UBASE("UK", "fluid-dram", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("fluid-ounce",   new UBASE("UK", "fluid-ounce", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("fl-oz",   new UBASE("UK", "fl-oz", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("gallon",   new UBASE("UK", "gallon", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gal",   new UBASE("UK", "gal", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallons",   new UBASE("UK", "gallons", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallon(beer)",   new UBASE("UK", "gallon(beer)", 4.621152048000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gill",   new UBASE("UK", "gill", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("gi",   new UBASE("UK", "gi", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("hogshead",   new UBASE("UK", "hogshead", 2.864037960000000E-01, "m3", "L3", "1.0"));
          liquid.Add("hdd",   new UBASE("UK", "hdd", 2.864037960000000E-01, "m3", "L3", "1.0"));
          liquid.Add("hogshead(beer)",   new UBASE("UK", "hogshead(beer)", 2.495422105920000E-01, "m3", "L3", "1.0"));
          liquid.Add("hdd(beer)",   new UBASE("UK", "hdd(beer)", 2.495422105920000E-01, "m3", "L3", "1.0"));
          liquid.Add("jeroboam",   new UBASE("UK", "jeroboam", 3.030728000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("jigger",   new UBASE("UK", "jigger", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("kilderkin",   new UBASE("UK", "kilderkin", 8.182965600000000E-02, "m3", "L3", "1.0"));
          liquid.Add("last",   new UBASE("UK", "last", 2.909498880000000E+00, "m3", "L3", "1.0"));
          liquid.Add("magnum",   new UBASE("UK", "magnum", 1.515364000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("mathusalem",   new UBASE("UK", "mathusalem", 6.819138000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("methuselah",   new UBASE("UK", "methuselah", 6.819138000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("minim",   new UBASE("UK", "minim", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("M",   new UBASE("UK", "M", 5.919390625000000E-08, "m3", "L3", "1.0"));
          liquid.Add("nabuchodonosor",   new UBASE("UK", "nabuchodonosor", 1.515364000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("nabuchadnezzar",   new UBASE("UK", "nabuchadnezzar", 1.515364000000000E-02, "m3", "L3", "1.0"));
          liquid.Add("noggin",   new UBASE("UK", "noggin", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("nogg",   new UBASE("UK", "nogg", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("ounce",   new UBASE("UK", "ounce", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("ounces",   new UBASE("UK", "ounces", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("oz",   new UBASE("UK", "oz", 2.841307500000000E-05, "m3", "L3", "1.0"));
          liquid.Add("pin",   new UBASE("UK", "pin", 2.045741400000000E-02, "m3", "L3", "1.0"));
          liquid.Add("pin(beer)",   new UBASE("UK", "pin(beer)", 2.079518421600000E-02, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("UK", "pint", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pt",   new UBASE("UK", "pt", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pints",   new UBASE("UK", "pints", 5.682615000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pottle",   new UBASE("UK", "pottle", 2.273046000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("puncheon",   new UBASE("UK", "puncheon", 3.182264400000000E-01, "m3", "L3", "1.0"));
          liquid.Add("puncheon(beer)",   new UBASE("UK", "puncheon(beer)", 3.327229474560000E-01, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("UK", "quart", 1.136523000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("qt",   new UBASE("UK", "qt", 1.136523000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("quarts",   new UBASE("UK", "quarts", 1.136523000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("quarter",   new UBASE("UK", "quarter", 2.909498880000000E-01, "m3", "L3", "1.0"));
          liquid.Add("quatern",   new UBASE("UK", "quatern", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("rehoboam",   new UBASE("UK", "rehoboam", 4.546092000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("reputed-quart",   new UBASE("UK", "reputed-quart", 6.309019640000000E-04, "m3", "L3", "1.0"));
          liquid.Add("roquille",   new UBASE("UK", "roquille", 1.420653750000000E-04, "m3", "L3", "1.0"));
          liquid.Add("sack",   new UBASE("UK", "sack", 1.091062080000000E-01, "m3", "L3", "1.0"));
          liquid.Add("sk",   new UBASE("UK", "sk", 1.091062080000000E-01, "m3", "L3", "1.0"));
          liquid.Add("salmarazd",   new UBASE("UK", "salmarazd", 9.092184000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("salmanazar",   new UBASE("UK", "salmanazar", 9.092184000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("salomon",   new UBASE("UK", "salomon", 1.818436800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("scruple",   new UBASE("UK", "scruple", 1.183878125000000E-06, "m3", "L3", "1.0"));
          liquid.Add("seam",   new UBASE("UK", "seam", 2.909498880000000E-01, "m3", "L3", "1.0"));
          liquid.Add("solomon",   new UBASE("UK", "solomon", 1.818436800000000E-02, "m3", "L3", "1.0"));
          liquid.Add("strike",   new UBASE("UK", "strike", 7.273747200000000E-02, "m3", "L3", "1.0"));
          liquid.Add("tablespoon",   new UBASE("UK", "tablespoon", 2.000000000000000E-05, "m3", "L3", "1.0"));
          liquid.Add("teacupful",   new UBASE("UK", "teacupful", 1.478676478125000E-04, "m3", "L3", "1.0"));
          liquid.Add("tcf",   new UBASE("UK", "tcf", 1.478676478125000E-04, "m3", "L3", "1.0"));
          liquid.Add("teaspoonful",   new UBASE("UK", "teaspoonful", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("tspf",   new UBASE("UK", "tspf", 3.551634375000000E-06, "m3", "L3", "1.0"));
          liquid.Add("ton(water)",   new UBASE("UK", "ton(water)", 1.018324608000000E+00, "m3", "L3", "1.0"));
          liquid.Add("tumblerful",   new UBASE("UK", "tumblerful", 2.841307500000000E-04, "m3", "L3", "1.0"));
          liquid.Add("tun(beer)",   new UBASE("UK", "tun(beer)", 9.981688423680000E-01, "m3", "L3", "1.0"));
          liquid.Add("wey",   new UBASE("UK", "wey", 1.454749440000000E+00, "m3", "L3", "1.0"));
          liquid.Add("gallon(wine)",   new UBASE("UK", "gallon(wine)", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("glassful(wine)",   new UBASE("UK", "glassful(wine)", 7.103268750000000E-05, "m3", "L3", "1.0"));
          dry.Add("amber",   new UBASE("UK", "amber", 1.454749440000000E-01, "m3", "L3", "1.0"));
          dry.Add("peck",   new UBASE("UK", "peck", 9.092184000000000E-03, "m3", "L3", "1.0"));
          dry.Add("pk",   new UBASE("UK", "pk", 9.092184000000000E-03, "m3", "L3", "1.0"));
          dry.Add("bag",   new UBASE("UK", "bag", 1.091062080000000E-01, "m3", "L3", "1.0"));
          dry.Add("barrel(bulk)",   new UBASE("UK", "barrel(bulk)", 1.415842329600000E-01, "m3", "L3", "1.0"));
          dry.Add("bole(corn)",   new UBASE("UK", "bole(corn)", 1.454749440000000E-01, "m3", "L3", "1.0"));
          dry.Add("boll(corn)",   new UBASE("UK", "boll(corn)", 1.454749440000000E-01, "m3", "L3", "1.0"));
          dry.Add("bowe(corn)",   new UBASE("UK", "bowe(corn)", 1.454749440000000E-01, "m3", "L3", "1.0"));
          dry.Add("chaldron",   new UBASE("UK", "chaldron", 1.309274496000000E+00, "m3", "L3", "1.0"));
          dry.Add("chal",   new UBASE("UK", "chal", 1.309274496000000E+00, "m3", "L3", "1.0"));
          dry.Add("cord(wood)",   new UBASE("UK", "cord(wood)", 3.624556363776000E+00, "m3", "L3", "1.0"));
          dry.Add("cd(wood)",   new UBASE("UK", "cd(wood)", 3.624556363776000E+00, "m3", "L3", "1.0"));
          dry.Add("cord-foot",   new UBASE("UK", "cord-foot", 4.530695454720000E-01, "m3", "L3", "1.0"));
          dry.Add("cord-ft",   new UBASE("UK", "cord-ft", 4.530695454720000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-mile",   new UBASE("UK", "cubic-mile", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cubic-miles",   new UBASE("UK", "cubic-miles", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cubic-inch",   new UBASE("UK", "cubic-inch", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("in3",   new UBASE("UK", "in3", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cu-in",   new UBASE("UK", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-inches",   new UBASE("UK", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("UK", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("ft3",   new UBASE("UK", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cu-ft",   new UBASE("UK", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-feet",   new UBASE("UK", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-yard",   new UBASE("UK", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("yd3",   new UBASE("UK", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cu-yd",   new UBASE("UK", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-yards",   new UBASE("UK", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("deal",   new UBASE("UK", "deal", 2.477724076800000E-01, "m3", "L3", "1.0"));
          dry.Add("firlot(corn)",   new UBASE("UK", "firlot(corn)", 3.636873600000000E-02, "m3", "L3", "1.0"));
          dry.Add("mease",   new UBASE("UK", "mease", 1.704784500000000E-01, "m3", "L3", "1.0"));
          dry.Add("cran",   new UBASE("UK", "cran", 1.704784500000000E-01, "m3", "L3", "1.0"));
          dry.Add("ocean-ton",   new UBASE("UK", "ocean-ton", 1.132673863680000E+00, "m3", "L3", "1.0"));
          dry.Add("quartern",   new UBASE("UK", "quartern", 1.420653750000000E-04, "m3", "L3", "1.0"));
          dry.Add("register-ton",   new UBASE("UK", "register-ton", 2.831684659200000E+00, "m3", "L3", "1.0"));
          dry.Add("riga-last",   new UBASE("UK", "riga-last", 2.265347727360000E+00, "m3", "L3", "1.0"));
          dry.Add("rod",   new UBASE("UK", "rod", 2.831684659200000E+01, "m3", "L3", "1.0"));
          dry.Add("stack",   new UBASE("UK", "stack", 3.058219431936000E+00, "m3", "L3", "1.0"));
          dry.Add("stk",   new UBASE("UK", "stk", 3.058219431936000E+00, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("UK", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("std",   new UBASE("UK", "std", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("strike(feet)",   new UBASE("UK", "strike(feet)", 7.079211648000000E-02, "m3", "L3", "1.0"));
          dry.Add("ton",   new UBASE("UK", "ton", 2.831684659200000E+00, "m3", "L3", "1.0"));
          dry.Add("ton(freight)",   new UBASE("UK", "ton(freight)", 1.132673863680000E+00, "m3", "L3", "1.0"));
          dry.Add("ton(measurement)",   new UBASE("UK", "ton(measurement)", 1.132673863680000E+00, "m3", "L3", "1.0"));
          dry.Add("ton(timber)",   new UBASE("UK", "ton(timber)", 1.132673863680000E+00, "m3", "L3", "1.0"));
          _map.Add("UK",   new BaseSystem("UK", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit107()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("barony",   new UBASE("US", "barony", 1.618742568960000E+07, "m", "L", "1.0"));
          length.Add("billion-cubic-microns-per-square-inch",   new UBASE("US", "billion-cubic-microns-per-square-inch", 1.550003100006200E-06, "m", "L", "1.0"));
          length.Add("bcm",   new UBASE("US", "bcm", 1.550003100006200E-06, "m", "L", "1.0"));
          length.Add("bcmsi",   new UBASE("US", "bcmsi", 1.550003100006200E-06, "m", "L", "1.0"));
          length.Add("block(Eastern)",   new UBASE("US", "block(Eastern)", 8.046720000000000E+01, "m", "L", "1.0"));
          length.Add("block(Midwestern)",   new UBASE("US", "block(Midwestern)", 1.005840000000000E+02, "m", "L", "1.0"));
          length.Add("block(Western)",   new UBASE("US", "block(Western)", 1.609344000000000E+02, "m", "L", "1.0"));
          length.Add("button",   new UBASE("US", "button", 6.350000000000000E-04, "m", "L", "1.0"));
          length.Add("cable-length(nautical)",   new UBASE("US", "cable-length(nautical)", 2.194560000000000E+02, "m", "L", "1.0"));
          length.Add("cannon-shot",   new UBASE("US", "cannon-shot", 5.559552000000000E+03, "m", "L", "1.0"));
          length.Add("chain(engineer)",   new UBASE("US", "chain(engineer)", 3.048000000000000E+01, "m", "L", "1.0"));
          length.Add("ch(engineer)",   new UBASE("US", "ch(engineer)", 3.048000000000000E+01, "m", "L", "1.0"));
          length.Add("chain(Ramsden)",   new UBASE("US", "chain(Ramsden)", 3.048000000000000E+01, "m", "L", "1.0"));
          length.Add("ch(Ramsden)",   new UBASE("US", "ch(Ramsden)", 3.048000000000000E+01, "m", "L", "1.0"));
          length.Add("cup",   new UBASE("US", "cup", 2.365882000000000E-01, "m", "L", "1.0"));
          length.Add("cups",   new UBASE("US", "cups", 2.365882000000000E-01, "m", "L", "1.0"));
          length.Add("cup(metric)",   new UBASE("US", "cup(metric)", 2.000000000000000E-01, "m", "L", "1.0"));
          length.Add("diamond",   new UBASE("US", "diamond", 4.876800000000000E-01, "m", "L", "1.0"));
          length.Add("double-pace",   new UBASE("US", "double-pace", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("foot",   new UBASE("US", "foot", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("ft",   new UBASE("US", "ft", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("feet",   new UBASE("US", "feet", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("foot(survey)",   new UBASE("US", "foot(survey)", 3.048006096012190E-01, "m", "L", "1.0"));
          length.Add("ft(survey)",   new UBASE("US", "ft(survey)", 3.048006096012190E-01, "m", "L", "1.0"));
          length.Add("football-field",   new UBASE("US", "football-field", 1.097280000000000E+02, "m", "L", "1.0"));
          length.Add("furlong",   new UBASE("US", "furlong", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("fur",   new UBASE("US", "fur", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("furlongs",   new UBASE("US", "furlongs", 2.011680000000000E+02, "m", "L", "1.0"));
          length.Add("hide",   new UBASE("US", "hide", 4.046856422400000E+05, "m", "L", "1.0"));
          length.Add("inch(survey)",   new UBASE("US", "inch(survey)", 2.540005080010160E-02, "m", "L", "1.0"));
          length.Add("in(survey)",   new UBASE("US", "in(survey)", 2.540005080010160E-02, "m", "L", "1.0"));
          length.Add("inch",   new UBASE("US", "inch", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("in",   new UBASE("US", "in", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("inches",   new UBASE("US", "inches", 2.540000000000000E-02, "m", "L", "1.0"));
          length.Add("league",   new UBASE("US", "league", 5.559552000000000E+03, "m", "L", "1.0"));
          length.Add("leag",   new UBASE("US", "leag", 5.559552000000000E+03, "m", "L", "1.0"));
          length.Add("leagues",   new UBASE("US", "leagues", 5.559552000000000E+03, "m", "L", "1.0"));
          length.Add("line",   new UBASE("US", "line", 6.350000000000000E-04, "m", "L", "1.0"));
          length.Add("link(engineer)",   new UBASE("US", "link(engineer)", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("link(Ramsden)",   new UBASE("US", "link(Ramsden)", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("lot",   new UBASE("US", "lot", 3.237485137920000E+05, "m", "L", "1.0"));
          length.Add("mark-twain",   new UBASE("US", "mark-twain", 3.657600000000000E+00, "m", "L", "1.0"));
          length.Add("mile",   new UBASE("US", "mile", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mi",   new UBASE("US", "mi", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("miles",   new UBASE("US", "miles", 1.609344000000000E+03, "m", "L", "1.0"));
          length.Add("mile(nautical)",   new UBASE("US", "mile(nautical)", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("mi(nautical)",   new UBASE("US", "mi(nautical)", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("mile(survey)",   new UBASE("US", "mile(survey)", 1.609347218694440E+03, "m", "L", "1.0"));
          length.Add("mi(survey)",   new UBASE("US", "mi(survey)", 1.609347218694440E+03, "m", "L", "1.0"));
          length.Add("nautical-mile",   new UBASE("US", "nautical-mile", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("nmi",   new UBASE("US", "nmi", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("nautical-miles",   new UBASE("US", "nautical-miles", 1.853184000000000E+03, "m", "L", "1.0"));
          length.Add("pace",   new UBASE("US", "pace", 7.620000000000000E-01, "m", "L", "1.0"));
          length.Add("pica",   new UBASE("US", "pica", 4.217517642175180E-03, "m", "L", "1.0"));
          length.Add("pin-length",   new UBASE("US", "pin-length", 1.587500000000000E-03, "m", "L", "1.0"));
          length.Add("point(printer)",   new UBASE("US", "point(printer)", 3.514598035145980E-04, "m", "L", "1.0"));
          length.Add("point(silversmith)",   new UBASE("US", "point(silversmith)", 6.350000000000000E-06, "m", "L", "1.0"));
          length.Add("pt",   new UBASE("US", "pt", 6.350000000000000E-06, "m", "L", "1.0"));
          length.Add("quadrant",   new UBASE("US", "quadrant", 1.000000000000000E-11, "m", "L", "1.0"));
          length.Add("rod",   new UBASE("US", "rod", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("rd",   new UBASE("US", "rd", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("rods",   new UBASE("US", "rods", 5.029200000000000E+00, "m", "L", "1.0"));
          length.Add("standard-gauge",   new UBASE("US", "standard-gauge", 1.435100000000000E+00, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("US", "vara", 8.466666666666670E-01, "m", "L", "1.0"));
          length.Add("yard(survey)",   new UBASE("US", "yard(survey)", 9.144018288036580E-01, "m", "L", "1.0"));
          length.Add("yd(survey)",   new UBASE("US", "yd(survey)", 9.144018288036580E-01, "m", "L", "1.0"));
          length.Add("yard",   new UBASE("US", "yard", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yd",   new UBASE("US", "yd", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("yards",   new UBASE("US", "yards", 9.144000000000000E-01, "m", "L", "1.0"));
          area.Add("acre(survey)",   new UBASE("US", "acre(survey)", 4.046872609874250E+03, "m2", "L2", "1.0"));
          area.Add("ac(survey)",   new UBASE("US", "ac(survey)", 4.046872609874250E+03, "m2", "L2", "1.0"));
          area.Add("acre",   new UBASE("US", "acre", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("ac",   new UBASE("US", "ac", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("acres",   new UBASE("US", "acres", 4.046856422400000E+03, "m2", "L2", "1.0"));
          area.Add("barrel-per-foot",   new UBASE("US", "barrel-per-foot", 3.912088950000000E-01, "m2", "L2", "1.0"));
          area.Add("bbl/ft",   new UBASE("US", "bbl/ft", 3.912088950000000E-01, "m2", "L2", "1.0"));
          area.Add("barrel-per-foot(oil)",   new UBASE("US", "barrel-per-foot(oil)", 5.216118600000000E-01, "m2", "L2", "1.0"));
          area.Add("bbl/ft(oil)",   new UBASE("US", "bbl/ft(oil)", 5.216118600000000E-01, "m2", "L2", "1.0"));
          area.Add("barrel-per-inch",   new UBASE("US", "barrel-per-inch", 4.694506740000000E+00, "m2", "L2", "1.0"));
          area.Add("bbl/in",   new UBASE("US", "bbl/in", 4.694506740000000E+00, "m2", "L2", "1.0"));
          area.Add("barrel-per-inch(oil)",   new UBASE("US", "barrel-per-inch(oil)", 6.259342320000000E+00, "m2", "L2", "1.0"));
          area.Add("brl/in(oil)",   new UBASE("US", "brl/in(oil)", 6.259342320000000E+00, "m2", "L2", "1.0"));
          area.Add("circular-mile(survey)",   new UBASE("US", "circular-mile(survey)", 2.034180041791150E+06, "m2", "L2", "1.0"));
          area.Add("cmi(survey)",   new UBASE("US", "cmi(survey)", 2.034180041791150E+06, "m2", "L2", "1.0"));
          area.Add("cir-mi(survey)",   new UBASE("US", "cir-mi(survey)", 2.034180041791150E+06, "m2", "L2", "1.0"));
          area.Add("circular-millimeter",   new UBASE("US", "circular-millimeter", 7.853981633974480E-07, "m2", "L2", "1.0"));
          area.Add("cmm",   new UBASE("US", "cmm", 7.853981633974480E-07, "m2", "L2", "1.0"));
          area.Add("cir-mm",   new UBASE("US", "cir-mm", 7.853981633974480E-07, "m2", "L2", "1.0"));
          area.Add("flag",   new UBASE("US", "flag", 4.645152000000000E-01, "m2", "L2", "1.0"));
          area.Add("gallon-per-foot",   new UBASE("US", "gallon-per-foot", 1.241933000000000E-02, "m2", "L2", "1.0"));
          area.Add("gal/ft",   new UBASE("US", "gal/ft", 1.241933000000000E-02, "m2", "L2", "1.0"));
          area.Add("gallon-per-mile",   new UBASE("US", "gallon-per-mile", 2.352145833333330E-06, "m2", "L2", "1.0"));
          area.Add("gal/mi",   new UBASE("US", "gal/mi", 2.352145833333330E-06, "m2", "L2", "1.0"));
          area.Add("homestead",   new UBASE("US", "homestead", 6.474970275840000E+05, "m2", "L2", "1.0"));
          area.Add("labor",   new UBASE("US", "labor", 7.168444444444440E+05, "m2", "L2", "1.0"));
          area.Add("legua",   new UBASE("US", "legua", 1.796399565903360E+07, "m2", "L2", "1.0"));
          area.Add("rood",   new UBASE("US", "rood", 3.372380352000000E+02, "m2", "L2", "1.0"));
          area.Add("square-chain(engineer)",   new UBASE("US", "square-chain(engineer)", 9.290304000000000E+02, "m2", "L2", "1.0"));
          area.Add("sq-ch(engineer)",   new UBASE("US", "sq-ch(engineer)", 9.290304000000000E+02, "m2", "L2", "1.0"));
          area.Add("square-chain(Ramsden)",   new UBASE("US", "square-chain(Ramsden)", 9.290287831176020E+02, "m2", "L2", "1.0"));
          area.Add("sq-ch(Ramsden)",   new UBASE("US", "sq-ch(Ramsden)", 9.290287831176020E+02, "m2", "L2", "1.0"));
          area.Add("square-inch",   new UBASE("US", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("in2",   new UBASE("US", "in2", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("sq-in",   new UBASE("US", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-inches",   new UBASE("US", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0"));
          area.Add("square-foot(survey)",   new UBASE("US", "square-foot(survey)", 9.290341161327480E-02, "m2", "L2", "1.0"));
          area.Add("ft2(survey)",   new UBASE("US", "ft2(survey)", 9.290341161327480E-02, "m2", "L2", "1.0"));
          area.Add("square-foot",   new UBASE("US", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("ft2",   new UBASE("US", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("sq-ft",   new UBASE("US", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-feet",   new UBASE("US", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-league(nautical)",   new UBASE("US", "square-league(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0"));
          area.Add("sq-leag(nautical)",   new UBASE("US", "sq-leag(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0"));
          area.Add("square-link(Ramsden)",   new UBASE("US", "square-link(Ramsden)", 9.290304000000000E-02, "m2", "L2", "1.0"));
          area.Add("square-mile(nautical)",   new UBASE("US", "square-mile(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(nautical)",   new UBASE("US", "sq-mi(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0"));
          area.Add("square-mile(survey)",   new UBASE("US", "square-mile(survey)", 2.589998470319520E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi(survey)",   new UBASE("US", "sq-mi(survey)", 2.589998470319520E+06, "m2", "L2", "1.0"));
          area.Add("square-mile",   new UBASE("US", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("sq-mi",   new UBASE("US", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("mi2",   new UBASE("US", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("square-miles",   new UBASE("US", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0"));
          area.Add("circular-mile(nautical)",   new UBASE("US", "circular-mile(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0"));
          area.Add("cmi(nautical)",   new UBASE("US", "cmi(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0"));
          area.Add("square-yard",   new UBASE("US", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("yd2",   new UBASE("US", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("sq-yd",   new UBASE("US", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("square-yards",   new UBASE("US", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0"));
          area.Add("township",   new UBASE("US", "township", 9.323957197209600E+07, "m2", "L2", "1.0"));
          area.Add("vara",   new UBASE("US", "vara", 7.168601466640000E+02, "m2", "L2", "1.0"));
          mass.Add("bale",   new UBASE("US", "bale", 2.267961850000000E+02, "kg", "M", "1.0"));
          mass.Add("bl",   new UBASE("US", "bl", 2.267961850000000E+02, "kg", "M", "1.0"));
          mass.Add("drachm(apothecary)",   new UBASE("US", "drachm(apothecary)", 3.887934600000000E-03, "kg", "M", "1.0"));
          mass.Add("eleventh-gramm",   new UBASE("US", "eleventh-gramm", 1.000000000000000E-14, "kg", "M", "1.0"));
          mass.Add("flask-of-mercury",   new UBASE("US", "flask-of-mercury", 3.401942775000000E+01, "kg", "M", "1.0"));
          mass.Add("Hg-flask",   new UBASE("US", "Hg-flask", 3.401942775000000E+01, "kg", "M", "1.0"));
          mass.Add("geepound",   new UBASE("US", "geepound", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight",   new UBASE("US", "hundredweight", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt",   new UBASE("US", "cwt", 5.080234544000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(short)",   new UBASE("US", "hundredweight(short)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("sh(short)",   new UBASE("US", "sh(short)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(short)",   new UBASE("US", "cwt(short)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("hundredweight(net)",   new UBASE("US", "hundredweight(net)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("sh(net)",   new UBASE("US", "sh(net)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("cwt(net)",   new UBASE("US", "cwt(net)", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("keg",   new UBASE("US", "keg", 4.535923700000000E+01, "kg", "M", "1.0"));
          mass.Add("kilopound",   new UBASE("US", "kilopound", 4.535923700000000E+02, "kg", "M", "1.0"));
          mass.Add("kip",   new UBASE("US", "kip", 4.535923700000000E+02, "kg", "M", "1.0"));
          mass.Add("mancus",   new UBASE("US", "mancus", 5.669904625000000E-02, "kg", "M", "1.0"));
          mass.Add("ounce",   new UBASE("US", "ounce", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("oz",   new UBASE("US", "oz", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("ounces",   new UBASE("US", "ounces", 2.834952312500000E-02, "kg", "M", "1.0"));
          mass.Add("pound",   new UBASE("US", "pound", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("lb",   new UBASE("US", "lb", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("pounds",   new UBASE("US", "pounds", 4.535923700000000E-01, "kg", "M", "1.0"));
          mass.Add("quarter(long)",   new UBASE("US", "quarter(long)", 2.540117272000000E+02, "kg", "M", "1.0"));
          mass.Add("quarter(short)",   new UBASE("US", "quarter(short)", 2.267961850000000E+02, "kg", "M", "1.0"));
          mass.Add("scruple(apothecary)",   new UBASE("US", "scruple(apothecary)", 1.295978200000000E-03, "kg", "M", "1.0"));
          mass.Add("s(ap)",   new UBASE("US", "s(ap)", 1.295978200000000E-03, "kg", "M", "1.0"));
          mass.Add("scr(ap)",   new UBASE("US", "scr(ap)", 1.295978200000000E-03, "kg", "M", "1.0"));
          mass.Add("short-ton",   new UBASE("US", "short-ton", 9.071847400000000E+02, "kg", "M", "1.0"));
          mass.Add("sh-ton",   new UBASE("US", "sh-ton", 9.071847400000000E+02, "kg", "M", "1.0"));
          mass.Add("slinch",   new UBASE("US", "slinch", 1.751268352464760E+02, "kg", "M", "1.0"));
          mass.Add("slug",   new UBASE("US", "slug", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("slugs",   new UBASE("US", "slugs", 1.459390293720640E+01, "kg", "M", "1.0"));
          mass.Add("stick(butter)",   new UBASE("US", "stick(butter)", 1.133980925000000E-01, "kg", "M", "1.0"));
          mass.Add("stk(butter)",   new UBASE("US", "stk(butter)", 1.133980925000000E-01, "kg", "M", "1.0"));
          mass.Add("ton(assay)",   new UBASE("US", "ton(assay)", 3.428571428571430E-05, "kg", "M", "1.0"));
          mass.Add("AT",   new UBASE("US", "AT", 3.428571428571430E-05, "kg", "M", "1.0"));
          mass.Add("ton(shipping)",   new UBASE("US", "ton(shipping)", 1.219040245785600E+03, "kg", "M", "1.0"));
          mass.Add("ton(short)",   new UBASE("US", "ton(short)", 9.071847400000000E+02, "kg", "M", "1.0"));
          liquid.Add("acre-foot(survey)",   new UBASE("US", "acre-foot(survey)", 1.233489238464030E+03, "m3", "L3", "1.0"));
          liquid.Add("ac-ft(survey)",   new UBASE("US", "ac-ft(survey)", 1.233489238464030E+03, "m3", "L3", "1.0"));
          liquid.Add("anker",   new UBASE("US", "anker", 3.785411784000000E-02, "m3", "L3", "1.0"));
          liquid.Add("barge",   new UBASE("US", "barge", 3.974682373200000E+03, "m3", "L3", "1.0"));
          liquid.Add("barrel",   new UBASE("US", "barrel", 2.273046000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl",   new UBASE("US", "bbl", 2.273046000000000E-01, "m3", "L3", "1.0"));
          liquid.Add("barrel(alcohol)",   new UBASE("US", "barrel(alcohol)", 1.892705892000000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl(alcohol)",   new UBASE("US", "bbl(alcohol)", 1.892705892000000E-01, "m3", "L3", "1.0"));
          liquid.Add("barrel(liquid)",   new UBASE("US", "barrel(liquid)", 1.192404711960000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl(liquid)",   new UBASE("US", "bbl(liquid)", 1.192404711960000E-01, "m3", "L3", "1.0"));
          liquid.Add("barrel(oil)",   new UBASE("US", "barrel(oil)", 1.589872949280000E-01, "m3", "L3", "1.0"));
          liquid.Add("bbl(oil)",   new UBASE("US", "bbl(oil)", 1.589872949280000E-01, "m3", "L3", "1.0"));
          liquid.Add("bottle(new)",   new UBASE("US", "bottle(new)", 7.500000000000000E-04, "m3", "L3", "1.0"));
          liquid.Add("bottle(old)",   new UBASE("US", "bottle(old)", 7.570823568000000E-04, "m3", "L3", "1.0"));
          liquid.Add("chopine",   new UBASE("US", "chopine", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("coffee-measure",   new UBASE("US", "coffee-measure", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("coffee-spoon",   new UBASE("US", "coffee-spoon", 2.464460796875000E-06, "m3", "L3", "1.0"));
          liquid.Add("cup",   new UBASE("US", "cup", 2.365882365000000E-04, "m3", "L3", "1.0"));
          liquid.Add("cups",   new UBASE("US", "cups", 2.365882365000000E-04, "m3", "L3", "1.0"));
          liquid.Add("dash",   new UBASE("US", "dash", 2.957352956250000E-06, "m3", "L3", "1.0"));
          liquid.Add("dessert-spoon",   new UBASE("US", "dessert-spoon", 9.857843187500000E-06, "m3", "L3", "1.0"));
          liquid.Add("dsp",   new UBASE("US", "dsp", 9.857843187500000E-06, "m3", "L3", "1.0"));
          liquid.Add("dessert-spoonful",   new UBASE("US", "dessert-spoonful", 9.857843187500000E-06, "m3", "L3", "1.0"));
          liquid.Add("dspf",   new UBASE("US", "dspf", 9.857843187500000E-06, "m3", "L3", "1.0"));
          liquid.Add("drachm",   new UBASE("US", "drachm", 3.696691195312500E-06, "m3", "L3", "1.0"));
          liquid.Add("fl-dr",   new UBASE("US", "fl-dr", 3.696691195312500E-06, "m3", "L3", "1.0"));
          liquid.Add("dram",   new UBASE("US", "dram", 3.696691195312500E-06, "m3", "L3", "1.0"));
          liquid.Add("drink",   new UBASE("US", "drink", 1.478676478125000E-05, "m3", "L3", "1.0"));
          liquid.Add("drop",   new UBASE("US", "drop", 4.928921593750000E-07, "m3", "L3", "1.0"));
          liquid.Add("drop(apothecary)",   new UBASE("US", "drop(apothecary)", 6.161151992187500E-08, "m3", "L3", "1.0"));
          liquid.Add("drp(ap)",   new UBASE("US", "drp(ap)", 6.161151992187500E-08, "m3", "L3", "1.0"));
          liquid.Add("gtt(ap)",   new UBASE("US", "gtt(ap)", 6.161151992187500E-08, "m3", "L3", "1.0"));
          liquid.Add("drop(metric)",   new UBASE("US", "drop(metric)", 5.000000000000000E-08, "m3", "L3", "1.0"));
          liquid.Add("fifth",   new UBASE("US", "fifth", 7.570823568000000E-04, "m3", "L3", "1.0"));
          liquid.Add("firkin",   new UBASE("US", "firkin", 3.406870605600000E-02, "m3", "L3", "1.0"));
          liquid.Add("fir",   new UBASE("US", "fir", 3.406870605600000E-02, "m3", "L3", "1.0"));
          liquid.Add("fluid-dram",   new UBASE("US", "fluid-dram", 3.696691195312500E-06, "m3", "L3", "1.0"));
          liquid.Add("fluid-ounce",   new UBASE("US", "fluid-ounce", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("fl-oz",   new UBASE("US", "fl-oz", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("gallon",   new UBASE("US", "gallon", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gal",   new UBASE("US", "gal", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallons",   new UBASE("US", "gallons", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallon(wine)",   new UBASE("US", "gallon(wine)", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gal(wine)",   new UBASE("US", "gal(wine)", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gallon-per-flush",   new UBASE("US", "gallon-per-flush", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gpf",   new UBASE("US", "gpf", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("GPF",   new UBASE("US", "GPF", 3.785411784000000E-03, "m3", "L3", "1.0"));
          liquid.Add("gill",   new UBASE("US", "gill", 1.182941182500000E-04, "m3", "L3", "1.0"));
          liquid.Add("gi",   new UBASE("US", "gi", 1.182941182500000E-04, "m3", "L3", "1.0"));
          liquid.Add("glass",   new UBASE("US", "glass", 1.182941182500000E-04, "m3", "L3", "1.0"));
          liquid.Add("hogshead",   new UBASE("US", "hogshead", 2.384809423920000E-01, "m3", "L3", "1.0"));
          liquid.Add("hhd",   new UBASE("US", "hhd", 2.384809423920000E-01, "m3", "L3", "1.0"));
          liquid.Add("hgs",   new UBASE("US", "hgs", 2.384809423920000E-01, "m3", "L3", "1.0"));
          liquid.Add("jigger",   new UBASE("US", "jigger", 4.436029434375000E-05, "m3", "L3", "1.0"));
          liquid.Add("keg",   new UBASE("US", "keg", 4.542494140800000E-02, "m3", "L3", "1.0"));
          liquid.Add("liter-per-flush",   new UBASE("US", "liter-per-flush", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("lpf",   new UBASE("US", "lpf", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("LPF",   new UBASE("US", "LPF", 1.000000000000000E-03, "m3", "L3", "1.0"));
          liquid.Add("milliard",   new UBASE("US", "milliard", 1.000000000000000E+09, "m3", "L3", "1.0"));
          liquid.Add("minim",   new UBASE("US", "minim", 6.161151992187500E-08, "m3", "L3", "1.0"));
          liquid.Add("min",   new UBASE("US", "min", 6.161151992187500E-08, "m3", "L3", "1.0"));
          liquid.Add("M",   new UBASE("US", "M", 6.161151992187500E-08, "m3", "L3", "1.0"));
          liquid.Add("ounce",   new UBASE("US", "ounce", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("oz",   new UBASE("US", "oz", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("ounces",   new UBASE("US", "ounces", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("pinch",   new UBASE("US", "pinch", 6.161151992187500E-07, "m3", "L3", "1.0"));
          liquid.Add("pint",   new UBASE("US", "pint", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pt",   new UBASE("US", "pt", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pints",   new UBASE("US", "pints", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("pipe(wine)",   new UBASE("US", "pipe(wine)", 4.769618847840000E-01, "m3", "L3", "1.0"));
          liquid.Add("pony",   new UBASE("US", "pony", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("puncheon(wine)",   new UBASE("US", "puncheon(wine)", 3.179745898560000E-01, "m3", "L3", "1.0"));
          liquid.Add("quart",   new UBASE("US", "quart", 9.463529460000000E-04, "m3", "L3", "1.0"));
          liquid.Add("qt",   new UBASE("US", "qt", 9.463529460000000E-04, "m3", "L3", "1.0"));
          liquid.Add("quarts",   new UBASE("US", "quarts", 9.463529460000000E-04, "m3", "L3", "1.0"));
          liquid.Add("roquille",   new UBASE("US", "roquille", 1.182941182500000E-04, "m3", "L3", "1.0"));
          liquid.Add("saltspoon",   new UBASE("US", "saltspoon", 1.232230398437500E-06, "m3", "L3", "1.0"));
          liquid.Add("ssp",   new UBASE("US", "ssp", 1.232230398437500E-06, "m3", "L3", "1.0"));
          liquid.Add("schooner",   new UBASE("US", "schooner", 3.992426490937500E-04, "m3", "L3", "1.0"));
          liquid.Add("shot",   new UBASE("US", "shot", 2.957352956250000E-05, "m3", "L3", "1.0"));
          liquid.Add("snit",   new UBASE("US", "snit", 8.872058868750000E-05, "m3", "L3", "1.0"));
          liquid.Add("split",   new UBASE("US", "split", 1.892705892000000E-04, "m3", "L3", "1.0"));
          liquid.Add("tablespoon",   new UBASE("US", "tablespoon", 1.478676478125000E-05, "m3", "L3", "1.0"));
          liquid.Add("teacupful",   new UBASE("US", "teacupful", 1.478676478125000E-04, "m3", "L3", "1.0"));
          liquid.Add("teaspoon",   new UBASE("US", "teaspoon", 4.928921593750000E-06, "m3", "L3", "1.0"));
          liquid.Add("teaspoon(metric)",   new UBASE("US", "teaspoon(metric)", 5.000000000000000E-06, "m3", "L3", "1.0"));
          liquid.Add("tenth",   new UBASE("US", "tenth", 3.785411784000000E-04, "m3", "L3", "1.0"));
          liquid.Add("tertian",   new UBASE("US", "tertian", 3.179745898560000E-01, "m3", "L3", "1.0"));
          liquid.Add("tierce",   new UBASE("US", "tierce", 1.589872949280000E-01, "m3", "L3", "1.0"));
          liquid.Add("ton(seawater)",   new UBASE("US", "ton(seawater)", 9.910896307200000E-01, "m3", "L3", "1.0"));
          liquid.Add("tun",   new UBASE("US", "tun", 9.539237695680000E-01, "m3", "L3", "1.0"));
          liquid.Add("tun(wine)",   new UBASE("US", "tun(wine)", 9.539237695680000E-01, "m3", "L3", "1.0"));
          liquid.Add("turn",   new UBASE("US", "turn", 9.539237695680000E-01, "m3", "L3", "1.0"));
          liquid.Add("tu",   new UBASE("US", "tu", 9.539237695680000E-01, "m3", "L3", "1.0"));
          liquid.Add("glassful(water)",   new UBASE("US", "glassful(water)", 4.731764730000000E-04, "m3", "L3", "1.0"));
          liquid.Add("glassful(wine)",   new UBASE("US", "glassful(wine)", 7.393382390625000E-05, "m3", "L3", "1.0"));
          dry.Add("barrel(bulk)",   new UBASE("US", "barrel(bulk)", 1.415842329600000E-01, "m3", "L3", "1.0"));
          dry.Add("barrel(cranberry)",   new UBASE("US", "barrel(cranberry)", 9.547103486400000E-02, "m3", "L3", "1.0"));
          dry.Add("bbl(cranb)",   new UBASE("US", "bbl(cranb)", 9.547103486400000E-02, "m3", "L3", "1.0"));
          dry.Add("barrel(dry)",   new UBASE("US", "barrel(dry)", 1.156281989850750E-01, "m3", "L3", "1.0"));
          dry.Add("bbl(dry)",   new UBASE("US", "bbl(dry)", 1.156281989850750E-01, "m3", "L3", "1.0"));
          dry.Add("bushel",   new UBASE("US", "bushel", 3.523907016688000E-02, "m3", "L3", "1.0"));
          dry.Add("bu",   new UBASE("US", "bu", 3.523907016688000E-02, "m3", "L3", "1.0"));
          dry.Add("bushel(Winchester)",   new UBASE("US", "bushel(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0"));
          dry.Add("bu(Winchester)",   new UBASE("US", "bu(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0"));
          dry.Add("chaldron",   new UBASE("US", "chaldron", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("chopine",   new UBASE("US", "chopine", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("cord",   new UBASE("US", "cord", 3.624556363776000E+00, "m3", "L3", "1.0"));
          dry.Add("cd",   new UBASE("US", "cd", 3.624556363776000E+00, "m3", "L3", "1.0"));
          dry.Add("cubic-in",   new UBASE("US", "cubic-in", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("in3",   new UBASE("US", "in3", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cu-in",   new UBASE("US", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-inches",   new UBASE("US", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("US", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("ft3",   new UBASE("US", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cu-ft",   new UBASE("US", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-feet",   new UBASE("US", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-yard",   new UBASE("US", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("yd3",   new UBASE("US", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cu-yd",   new UBASE("US", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-yards",   new UBASE("US", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-mile",   new UBASE("US", "cubic-mile", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("mi3",   new UBASE("US", "mi3", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cu-mi",   new UBASE("US", "cu-mi", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("cubic-miles",   new UBASE("US", "cubic-miles", 4.168181825440580E+09, "m3", "L3", "1.0"));
          dry.Add("deal",   new UBASE("US", "deal", 3.893566406400000E-02, "m3", "L3", "1.0"));
          dry.Add("dry-barrel",   new UBASE("US", "dry-barrel", 1.156281989850750E-01, "m3", "L3", "1.0"));
          dry.Add("dry-bbl",   new UBASE("US", "dry-bbl", 1.156281989850750E-01, "m3", "L3", "1.0"));
          dry.Add("dry-bushel(Winchester)",   new UBASE("US", "dry-bushel(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0"));
          dry.Add("dry-bu(Winchester)",   new UBASE("US", "dry-bu(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0"));
          dry.Add("dry-peck",   new UBASE("US", "dry-peck", 8.809767541720000E-03, "m3", "L3", "1.0"));
          dry.Add("pk(dry)",   new UBASE("US", "pk(dry)", 8.809767541720000E-03, "m3", "L3", "1.0"));
          dry.Add("dry-pint",   new UBASE("US", "dry-pint", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("pt(dry)",   new UBASE("US", "pt(dry)", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("dry-quart",   new UBASE("US", "dry-quart", 1.101220942715000E-03, "m3", "L3", "1.0"));
          dry.Add("qt(dry)",   new UBASE("US", "qt(dry)", 1.101220942715000E-03, "m3", "L3", "1.0"));
          dry.Add("face-chord",   new UBASE("US", "face-chord", 1.812278181888000E+00, "m3", "L3", "1.0"));
          dry.Add("faggot",   new UBASE("US", "faggot", 2.704059664735010E-02, "m3", "L3", "1.0"));
          dry.Add("fgt",   new UBASE("US", "fgt", 2.704059664735010E-02, "m3", "L3", "1.0"));
          dry.Add("fatt",   new UBASE("US", "fatt", 3.171516315019200E-01, "m3", "L3", "1.0"));
          dry.Add("firkin",   new UBASE("US", "firkin", 3.964395393774000E-02, "m3", "L3", "1.0"));
          dry.Add("gallon",   new UBASE("US", "gallon", 4.404883770860000E-03, "m3", "L3", "1.0"));
          dry.Add("gal",   new UBASE("US", "gal", 4.404883770860000E-03, "m3", "L3", "1.0"));
          dry.Add("gallons",   new UBASE("US", "gallons", 4.404883770860000E-03, "m3", "L3", "1.0"));
          dry.Add("house-cord",   new UBASE("US", "house-cord", 1.208185454592000E+00, "m3", "L3", "1.0"));
          dry.Add("load(squared)",   new UBASE("US", "load(squared)", 1.189307556864000E+00, "m3", "L3", "1.0"));
          dry.Add("load(unhewn)",   new UBASE("US", "load(unhewn)", 7.551159091200000E-01, "m3", "L3", "1.0"));
          dry.Add("marine-ton",   new UBASE("US", "marine-ton", 1.132673863680000E+00, "m3", "L3", "1.0"));
          dry.Add("peck",   new UBASE("US", "peck", 8.809767541720000E-03, "m3", "L3", "1.0"));
          dry.Add("pk",   new UBASE("US", "pk", 8.809767541720000E-03, "m3", "L3", "1.0"));
          dry.Add("pint",   new UBASE("US", "pint", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("pt",   new UBASE("US", "pt", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("pints",   new UBASE("US", "pints", 5.506104713575000E-04, "m3", "L3", "1.0"));
          dry.Add("quart",   new UBASE("US", "quart", 1.101220942715000E-03, "m3", "L3", "1.0"));
          dry.Add("qt",   new UBASE("US", "qt", 1.101220942715000E-03, "m3", "L3", "1.0"));
          dry.Add("quarts",   new UBASE("US", "quarts", 1.101220942715000E-03, "m3", "L3", "1.0"));
          dry.Add("rick",   new UBASE("US", "rick", 1.208185454592000E+00, "m3", "L3", "1.0"));
          dry.Add("split-deal",   new UBASE("US", "split-deal", 3.624556363776000E+00, "m3", "L3", "1.0"));
          dry.Add("standard",   new UBASE("US", "standard", 4.672279687680000E+00, "m3", "L3", "1.0"));
          dry.Add("ton(displacement)",   new UBASE("US", "ton(displacement)", 9.910896307200000E-01, "m3", "L3", "1.0"));
          dry.Add("whole-deal",   new UBASE("US", "whole-deal", 1.622319336000000E-02, "m3", "L3", "1.0"));
          dry.Add("winchester-bushel",   new UBASE("US", "winchester-bushel", 3.523907016688000E-02, "m3", "L3", "1.0"));
          _map.Add("US",   new BaseSystem("US", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit108()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("cuarta",   new UBASE("Venezuelan", "cuarta", 2.000000000000000E-01, "m", "L", "1.0"));
          length.Add("legua",   new UBASE("Venezuelan", "legua", 5.024000000000000E+03, "m", "L", "1.0"));
          length.Add("meile",   new UBASE("Venezuelan", "meile", 5.024000000000000E+03, "m", "L", "1.0"));
          length.Add("pie",   new UBASE("Venezuelan", "pie", 2.666666666666670E-01, "m", "L", "1.0"));
          length.Add("pulgada",   new UBASE("Venezuelan", "pulgada", 2.222222222222220E-02, "m", "L", "1.0"));
          length.Add("vara",   new UBASE("Venezuelan", "vara", 8.000000000000000E-01, "m", "L", "1.0"));
          area.Add("square-vara",   new UBASE("Venezuelan", "square-vara", 6.400000000000000E-01, "m2", "L2", "1.0"));
          mass.Add("arroba",   new UBASE("Venezuelan", "arroba", 1.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("bag",   new UBASE("Venezuelan", "bag", 6.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("carga",   new UBASE("Venezuelan", "carga", 1.250000000000000E+02, "kg", "M", "1.0"));
          mass.Add("libbra",   new UBASE("Venezuelan", "libbra", 5.000000000000000E-01, "kg", "M", "1.0"));
          mass.Add("onza",   new UBASE("Venezuelan", "onza", 3.125000000000000E-02, "kg", "M", "1.0"));
          mass.Add("quintal",   new UBASE("Venezuelan", "quintal", 5.000000000000000E+01, "kg", "M", "1.0"));
          mass.Add("saco",   new UBASE("Venezuelan", "saco", 6.250000000000000E+01, "kg", "M", "1.0"));
          mass.Add("tonelada",   new UBASE("Venezuelan", "tonelada", 1.000000000000000E+03, "kg", "M", "1.0"));
          liquid.Add("arroba",   new UBASE("Venezuelan", "arroba", 1.613700000000000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Venezuelan", "cubic-vara", 5.120000000000000E-01, "m3", "L3", "1.0"));
          _map.Add("Venezuelan",   new BaseSystem("Venezuelan", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit109()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("byr-iau",   new UBASE("Welsh", "byr-iau", 1.219200000000000E+00, "m", "L", "1.0"));
          length.Add("cam",   new UBASE("Welsh", "cam", 2.743200000000000E+00, "m", "L", "1.0"));
          length.Add("cessel-yeu",   new UBASE("Welsh", "cessel-yeu", 3.657600000000000E+00, "m", "L", "1.0"));
          length.Add("eyl-yeu",   new UBASE("Welsh", "eyl-yeu", 2.438400000000000E+00, "m", "L", "1.0"));
          length.Add("gesseylyeu",   new UBASE("Welsh", "gesseylyeu", 3.657600000000000E+00, "m", "L", "1.0"));
          length.Add("gronyn-heyd",   new UBASE("Welsh", "gronyn-heyd", 8.466666666666670E-03, "m", "L", "1.0"));
          length.Add("gwialen",   new UBASE("Welsh", "gwialen", 4.876800000000000E+00, "m", "L", "1.0"));
          length.Add("gwyalen",   new UBASE("Welsh", "gwyalen", 4.876800000000000E+00, "m", "L", "1.0"));
          length.Add("hir-iau",   new UBASE("Welsh", "hir-iau", 4.876800000000000E+00, "m", "L", "1.0"));
          length.Add("hyryeu",   new UBASE("Welsh", "hyryeu", 4.876800000000000E+00, "m", "L", "1.0"));
          length.Add("leap",   new UBASE("Welsh", "leap", 2.057400000000000E+00, "m", "L", "1.0"));
          length.Add("milltir",   new UBASE("Welsh", "milltir", 8.229600000000000E+03, "m", "L", "1.0"));
          length.Add("modfedd",   new UBASE("Welsh", "modfedd", 7.620000000000000E-02, "m", "L", "1.0"));
          length.Add("moduet",   new UBASE("Welsh", "moduet", 7.620000000000000E-02, "m", "L", "1.0"));
          length.Add("mylltyr",   new UBASE("Welsh", "mylltyr", 8.229600000000000E+03, "m", "L", "1.0"));
          length.Add("naid",   new UBASE("Welsh", "naid", 8.229600000000000E+00, "m", "L", "1.0"));
          length.Add("neyt",   new UBASE("Welsh", "neyt", 8.229600000000000E+00, "m", "L", "1.0"));
          length.Add("palf",   new UBASE("Welsh", "palf", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("palyw",   new UBASE("Welsh", "palyw", 3.048000000000000E-01, "m", "L", "1.0"));
          length.Add("ridge",   new UBASE("Welsh", "ridge", 6.172200000000000E+00, "m", "L", "1.0"));
          length.Add("tir",   new UBASE("Welsh", "tir", 8.229600000000000E+03, "m", "L", "1.0"));
          length.Add("troedfedd",   new UBASE("Welsh", "troedfedd", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("troetued",   new UBASE("Welsh", "troetued", 9.144000000000000E-01, "m", "L", "1.0"));
          length.Add("tyr",   new UBASE("Welsh", "tyr", 8.229600000000000E+03, "m", "L", "1.0"));
          length.Add("uerr-teu",   new UBASE("Welsh", "uerr-teu", 1.219200000000000E+00, "m", "L", "1.0"));
          length.Add("uerryeu",   new UBASE("Welsh", "uerryeu", 1.219200000000000E+00, "m", "L", "1.0"));
          length.Add("veieu",   new UBASE("Welsh", "veieu", 2.438400000000000E+00, "m", "L", "1.0"));
          area.Add("cwmwd(Venedotian)",   new UBASE("Welsh", "cwmwd(Venedotian)", 3.653096177664000E+07, "m2", "L2", "1.0"));
          area.Add("ero(Venedotian)",   new UBASE("Welsh", "ero(Venedotian)", 5.707962777600000E+03, "m2", "L2", "1.0"));
          area.Add("erw(Dimetian)",   new UBASE("Welsh", "erw(Dimetian)", 8.561944166400000E+02, "m2", "L2", "1.0"));
          area.Add("erw(Venedotian)",   new UBASE("Welsh", "erw(Venedotian)", 1.426990694400000E+03, "m2", "L2", "1.0"));
          area.Add("free-town(Dimetian)",   new UBASE("Welsh", "free-town(Dimetian)", 8.904421933056000E+04, "m2", "L2", "1.0"));
          area.Add("gafael(Venedotian)",   new UBASE("Welsh", "gafael(Venedotian)", 3.653096177664000E+05, "m2", "L2", "1.0"));
          area.Add("gauael(Venedotian)",   new UBASE("Welsh", "gauael(Venedotian)", 3.653096177664000E+05, "m2", "L2", "1.0"));
          area.Add("kymut(Venedotian)",   new UBASE("Welsh", "kymut(Venedotian)", 3.653096177664000E+07, "m2", "L2", "1.0"));
          area.Add("lowland-manor",   new UBASE("Welsh", "lowland-manor", 8.013979739750400E+05, "m2", "L2", "1.0"));
          area.Add("maenaor-vro",   new UBASE("Welsh", "maenaor-vro", 8.013979739750400E+05, "m2", "L2", "1.0"));
          area.Add("maenaor-vrthtir",   new UBASE("Welsh", "maenaor-vrthtir", 1.068530631966720E+06, "m2", "L2", "1.0"));
          area.Add("maenaor-vwrthdir",   new UBASE("Welsh", "maenaor-vwrthdir", 1.068530631966720E+06, "m2", "L2", "1.0"));
          area.Add("maenor(Venedotian)",   new UBASE("Welsh", "maenor(Venedotian)", 1.826548088832000E+07, "m2", "L2", "1.0"));
          area.Add("maynaul(Venedotian)",   new UBASE("Welsh", "maynaul(Venedotian)", 1.826548088832000E+07, "m2", "L2", "1.0"));
          area.Add("randyr(Venedotian)",   new UBASE("Welsh", "randyr(Venedotian)", 9.132740444160000E+04, "m2", "L2", "1.0"));
          area.Add("rhandir(Venedotian)",   new UBASE("Welsh", "rhandir(Venedotian)", 9.132740444160000E+04, "m2", "L2", "1.0"));
          area.Add("serf-town",   new UBASE("Welsh", "serf-town", 6.678316449792000E+04, "m2", "L2", "1.0"));
          area.Add("shareland",   new UBASE("Welsh", "shareland", 2.226105483264000E+04, "m2", "L2", "1.0"));
          area.Add("stang",   new UBASE("Welsh", "stang", 2.709052646400000E+03, "m2", "L2", "1.0"));
          area.Add("taeogtref",   new UBASE("Welsh", "taeogtref", 8.013979739750400E+05, "m2", "L2", "1.0"));
          area.Add("tref",   new UBASE("Welsh", "tref", 1.461238471065600E+06, "m2", "L2", "1.0"));
          area.Add("tref-rhydd",   new UBASE("Welsh", "tref-rhydd", 1.068530631966720E+06, "m2", "L2", "1.0"));
          area.Add("tref-ryd",   new UBASE("Welsh", "tref-ryd", 1.068530631966720E+06, "m2", "L2", "1.0"));
          area.Add("trew",   new UBASE("Welsh", "trew", 1.461238471065600E+06, "m2", "L2", "1.0"));
          area.Add("tyddyn",   new UBASE("Welsh", "tyddyn", 2.283185111040000E+04, "m2", "L2", "1.0"));
          area.Add("tydyn",   new UBASE("Welsh", "tydyn", 2.283185111040000E+04, "m2", "L2", "1.0"));
          area.Add("upland-manor",   new UBASE("Welsh", "upland-manor", 1.068530631966720E+06, "m2", "L2", "1.0"));
          mass.Add("pwys",   new UBASE("Welsh", "pwys", 4.535923380000000E-01, "kg", "M", "1.0"));
          liquid.Add("hewstawr",   new UBASE("Welsh", "hewstawr", 7.047814033376000E-02, "m3", "L3", "1.0"));
          dry.Add("cubic-palf",   new UBASE("Welsh", "cubic-palf", 2.831684659200000E-02, "m3", "L3", "1.0"));
          _map.Add("Welsh",   new BaseSystem("Welsh", length, area, mass, liquid, dry, "1.0"));

      }




       private void unit110()
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

          length.Add("archine",   new UBASE("Yugoslavian", "archine", 7.110000000000000E-01, "m", "L", "1.0"));
          length.Add("kvat",   new UBASE("Yugoslavian", "kvat", 1.896000000000000E+00, "m", "L", "1.0"));
          length.Add("linia",   new UBASE("Yugoslavian", "linia", 2.179310344827590E-03, "m", "L", "1.0"));
          length.Add("palaz",   new UBASE("Yugoslavian", "palaz", 3.632183908045980E-02, "m", "L", "1.0"));
          length.Add("stopa",   new UBASE("Yugoslavian", "stopa", 3.160000000000000E-01, "m", "L", "1.0"));
          area.Add("danoranja",   new UBASE("Yugoslavian", "danoranja", 3.591820320000000E+03, "m2", "L2", "1.0"));
          area.Add("donum",   new UBASE("Yugoslavian", "donum", 6.989920000000000E+02, "m2", "L2", "1.0"));
          area.Add("dunum",   new UBASE("Yugoslavian", "dunum", 6.989920000000000E+02, "m2", "L2", "1.0"));
          area.Add("lanatz",   new UBASE("Yugoslavian", "lanatz", 5.751705600000000E+03, "m2", "L2", "1.0"));
          area.Add("motyka",   new UBASE("Yugoslavian", "motyka", 7.988480000000000E+02, "m2", "L2", "1.0"));
          area.Add("raliza",   new UBASE("Yugoslavian", "raliza", 2.496400000000000E+03, "m2", "L2", "1.0"));
          area.Add("square-kvat",   new UBASE("Yugoslavian", "square-kvat", 3.594816000000000E+00, "m2", "L2", "1.0"));
          area.Add("square-stopa",   new UBASE("Yugoslavian", "square-stopa", 9.985600000000000E-02, "m2", "L2", "1.0"));
          mass.Add("akov",   new UBASE("Yugoslavian", "akov", 5.120000000000000E+01, "kg", "M", "1.0"));
          mass.Add("drachm",   new UBASE("Yugoslavian", "drachm", 3.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("dramm",   new UBASE("Yugoslavian", "dramm", 3.200000000000000E-03, "kg", "M", "1.0"));
          mass.Add("litra",   new UBASE("Yugoslavian", "litra", 3.200000000000000E-01, "kg", "M", "1.0"));
          mass.Add("oka",   new UBASE("Yugoslavian", "oka", 1.280000000000000E+00, "kg", "M", "1.0"));
          mass.Add("tovar",   new UBASE("Yugoslavian", "tovar", 1.280000000000000E+02, "kg", "M", "1.0"));
          liquid.Add("satlijk",   new UBASE("Yugoslavian", "satlijk", 3.200000000000000E-01, "m3", "L3", "1.0"));
          dry.Add("cubic-stopa",   new UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3", "L3", "1.0"));
          _map.Add("Yugoslavian",   new BaseSystem("Yugoslavian", length, area, mass, liquid, dry, "1.0"));

      }




       private GLOBAL_UNITS() : base("GLOBAL_UNITS")
       {
          unit0();
          unit1();
          unit2();
          unit3();
          unit4();
          unit5();
          unit6();
          unit7();
          unit8();
          unit9();
          unit10();
          unit11();
          unit12();
          unit13();
          unit14();
          unit15();
          unit16();
          unit17();
          unit18();
          unit19();
          unit20();
          unit21();
          unit22();
          unit23();
          unit24();
          unit25();
          unit26();
          unit27();
          unit28();
          unit29();
          unit30();
          unit31();
          unit32();
          unit33();
          unit34();
          unit35();
          unit36();
          unit37();
          unit38();
          unit39();
          unit40();
          unit41();
          unit42();
          unit43();
          unit44();
          unit45();
          unit46();
          unit47();
          unit48();
          unit49();
          unit50();
          unit51();
          unit52();
          unit53();
          unit54();
          unit55();
          unit56();
          unit57();
          unit58();
          unit59();
          unit60();
          unit61();
          unit62();
          unit63();
          unit64();
          unit65();
          unit66();
          unit67();
          unit68();
          unit69();
          unit70();
          unit71();
          unit72();
          unit73();
          unit74();
          unit75();
          unit76();
          unit77();
          unit78();
          unit79();
          unit80();
          unit81();
          unit82();
          unit83();
          unit84();
          unit85();
          unit86();
          unit87();
          unit88();
          unit89();
          unit90();
          unit91();
          unit92();
          unit93();
          unit94();
          unit95();
          unit96();
          unit97();
          unit98();
          unit99();
          unit100();
          unit101();
          unit102();
          unit103();
          unit104();
          unit105();
          unit106();
          unit107();
          unit108();
          unit109();
          unit110();
      }


   }
}
// EOF
