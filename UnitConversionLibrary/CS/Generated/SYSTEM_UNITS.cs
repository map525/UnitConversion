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
// File SYSTEM_UNITS.cs
//
// System base units. All other units derived from these units.
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
   public class SYSTEM_UNITS : SystemUnits
   {
       private static SYSTEM_UNITS singleton_ = new SYSTEM_UNITS();

       public static SYSTEM_UNITS Instance()
       {
           return singleton_;
       }

       private SYSTEM_UNITS() : base("SystemUnits")
       {
          Dictionary<string, UBASE> length = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> area = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> mass = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> liquid = new Dictionary<string, UBASE>();
          Dictionary<string, UBASE> dry = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          length.Add("au",   new UBASE("@", "au", 1.495978707000000E+11, "m","L", "1.0"));
          area.Add("square-parsec",   new UBASE("@", "square-parsec", 9.521406136918410E+32, "m2","L2", "1.0"));
          mass.Add("solar-mass",   new UBASE("@", "solar-mass", 1.988470000000000E+30, "kg","M", "1.0"));
          liquid.Add("cubic-parsec",   new UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0"));
          dry.Add("cubic-parsec",   new UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0"));
          _map.Add("@",   new BaseSystem("@", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("bohr-radius",   new UBASE("a.u.", "bohr-radius", 5.291772109060850E-11, "m","L", "1.0"));
          area.Add("atomic-cross-section",   new UBASE("a.u.", "atomic-cross-section", 8.797355429314450E-21, "m2","L2", "1.0"));
          mass.Add("electron-mass",   new UBASE("a.u.", "electron-mass", 9.109383701500000E-31, "kg","M", "1.0"));
          liquid.Add("atomic-volume",   new UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0"));
          dry.Add("atomic-volume",   new UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0"));
          _map.Add("a.u.",   new BaseSystem("a.u.", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          mass.Add("pound(apothecary)",   new UBASE("UK_US_Apoth", "pound(apothecary)", 3.732417216000000E-01, "kg","M", "1.0"));
          _map.Add("UK_US_Apoth",   new BaseSystem("UK_US_Apoth", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("UK", "foot", 3.048000000000000E-01, "m","L", "1.0"));
          length.Add("foot(UK-old)",   new UBASE("UK", "foot(UK-old)", 3.047997347632710E-01, "m","L", "1.0"));
          area.Add("square-foot",   new UBASE("UK", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
          mass.Add("pound",   new UBASE("UK", "pound", 4.535923700000000E-01, "kg","M", "1.0"));
          mass.Add("pound(UK-Imperial)",   new UBASE("UK", "pound(UK-Imperial)", 4.535923380000000E-01, "kg","M", "1.0"));
          liquid.Add("gallon(UK)",   new UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0"));
          liquid.Add("gallon(UK-beer)",   new UBASE("UK", "gallon(UK-beer)", 4.621152048000000E-03, "m3","L3", "1.0"));
          dry.Add("gallon(UK)",   new UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0"));
          _map.Add("UK",   new BaseSystem("UK", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("US", "foot", 3.048000000000000E-01, "m","L", "1.0"));
          length.Add("vara(US-Texas)",   new UBASE("US", "vara(US-Texas)", 8.466666666666670E-01, "m","L", "1.0"));
          length.Add("foot(US-survey)",   new UBASE("US", "foot(US-survey)", 3.048006096012190E-01, "m","L", "1.0"));
          area.Add("square-foot",   new UBASE("US", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
          area.Add("vara(US-Texas)",   new UBASE("US", "vara(US-Texas)", 7.168601466640000E+02, "m2","L2", "1.0"));
          mass.Add("pound",   new UBASE("US", "pound", 4.535923700000000E-01, "kg","M", "1.0"));
          liquid.Add("gallon(US)",   new UBASE("US", "gallon(US)", 3.785411784000000E-03, "m3","L3", "1.0"));
          dry.Add("gallon(US)",   new UBASE("US", "gallon(US)", 4.404883770860000E-03, "m3","L3", "1.0"));
          _map.Add("US",   new BaseSystem("US", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("CAN", "foot", 3.048000000000000E-01, "m","L", "1.0"));
          area.Add("square-foot",   new UBASE("CAN", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
          mass.Add("pound",   new UBASE("CAN", "pound", 4.535923380000000E-01, "kg","M", "1.0"));
          liquid.Add("gallon",   new UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
          dry.Add("gallon",   new UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
          _map.Add("CAN",   new BaseSystem("CAN", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("centimeter",   new UBASE("cgs", "centimeter", 1.000000000000000E-02, "m","L", "1.0"));
          area.Add("square-centimeter",   new UBASE("cgs", "square-centimeter", 1.000000000000000E-04, "m2","L2", "1.0"));
          mass.Add("gram",   new UBASE("cgs", "gram", 1.000000000000000E-03, "kg","M", "1.0"));
          liquid.Add("liter",   new UBASE("cgs", "liter", 1.000000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-centimeter",   new UBASE("cgs", "cubic-centimeter", 1.000000000000000E-06, "m3","L3", "1.0"));
          _map.Add("cgs",   new BaseSystem("cgs", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("FPS", "foot", 3.048000000000000E-01, "m","L", "1.0"));
          area.Add("square-foot",   new UBASE("FPS", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
          mass.Add("pound",   new UBASE("FPS", "pound", 4.535923700000000E-01, "kg","M", "1.0"));
          liquid.Add("gallon",   new UBASE("FPS", "gallon", 3.785411784000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("FPS", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0"));
          _map.Add("FPS",   new BaseSystem("FPS", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("meter",   new UBASE("MKpS", "meter", 1.000000000000000E+00, "m","L", "1.0"));
          area.Add("square-meter",   new UBASE("MKpS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0"));
          mass.Add("hyl",   new UBASE("MKpS", "hyl", 9.806650000000000E+00, "kg","M", "1.0"));
          liquid.Add("cubic-meter",   new UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
          _map.Add("MKpS",   new BaseSystem("MKpS", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("meter",   new UBASE("MTS", "meter", 1.000000000000000E+00, "m","L", "1.0"));
          area.Add("square-meter",   new UBASE("MTS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0"));
          mass.Add("tonne",   new UBASE("MTS", "tonne", 1.000000000000000E+03, "kg","M", "1.0"));
          liquid.Add("stere",   new UBASE("MTS", "stere", 1.000000000000000E+00, "m3","L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("MTS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
          _map.Add("MTS",   new BaseSystem("MTS", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("meter",   new UBASE("SI", "meter", 1.000000000000000E+00, "m","L", "1.0"));
          area.Add("square-meter",   new UBASE("SI", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0"));
          mass.Add("kilogram",   new UBASE("SI", "kilogram", 1.000000000000000E+00, "kg","M", "1.0"));
          liquid.Add("cubic-meter",   new UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
          dry.Add("cubic-meter",   new UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
          _map.Add("SI",   new BaseSystem("SI", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          mass.Add("ounce",   new UBASE("Troy", "ounce", 3.110347680000000E-02, "kg","M", "1.0"));
          _map.Add("Troy",   new BaseSystem("Troy", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("Imperial", "foot", 3.048000000000000E-01, "m","L", "1.0"));
          area.Add("square-foot",   new UBASE("Imperial", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
          mass.Add("pound",   new UBASE("Imperial", "pound", 4.535923380000000E-01, "kg","M", "1.0"));
          liquid.Add("gallon",   new UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
          dry.Add("gallon",   new UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
          _map.Add("Imperial",   new BaseSystem("Imperial", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Abyssinian", "pic", 6.860000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Abyssinian", "square-pic", 4.705960000000000E-01, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Abyssinian", "rottolo", 3.110000000000000E-01, "kg","M", "1.0"));
          liquid.Add("madega",   new UBASE("Abyssinian", "madega", 4.400000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Abyssinian", "cubic-pic", 3.228288560000000E-01, "m3","L3", "1.0"));
          _map.Add("Abyssinian",   new BaseSystem("Abyssinian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic(dzera-a-torky)",   new UBASE("Algerian", "pic(dzera-a-torky)", 6.230000000000000E-01, "m","L", "1.0"));
          length.Add("pic(dzera-a-raby)",   new UBASE("Algerian", "pic(dzera-a-raby)", 4.670000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic(dzera-a-torky)",   new UBASE("Algerian", "square-pic(dzera-a-torky)", 3.881290000000000E-01, "m2","L2", "1.0"));
          area.Add("square-pic(dzera-a-raby)",   new UBASE("Algerian", "square-pic(dzera-a-raby)", 2.180890000000000E-01, "m2","L2", "1.0"));
          mass.Add("ukkia",   new UBASE("Algerian", "ukkia", 3.413000000000000E-02, "kg","M", "1.0"));
          liquid.Add("khoul",   new UBASE("Algerian", "khoul", 1.666666666666670E-02, "m3","L3", "1.0"));
          liquid.Add("metalli",   new UBASE("Algerian", "metalli", 1.790000000000000E-02, "m3","L3", "1.0"));
          dry.Add("caffiso",   new UBASE("Algerian", "caffiso", 3.174700000000000E-01, "m3","L3", "1.0"));
          _map.Add("Algerian",   new BaseSystem("Algerian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("thuoc-moc",   new UBASE("Annamese", "thuoc-moc", 4.250000000000000E-01, "m","L", "1.0"));
          length.Add("thuoc-de-ruong",   new UBASE("Annamese", "thuoc-de-ruong", 4.700000000000000E-01, "m","L", "1.0"));
          length.Add("thuoc-vai",   new UBASE("Annamese", "thuoc-vai", 6.440000000000000E-01, "m","L", "1.0"));
          length.Add("ngu",   new UBASE("Annamese", "ngu", 2.000000000000000E+00, "m","L", "1.0"));
          area.Add("square-ngu",   new UBASE("Annamese", "square-ngu", 5.522500000000000E+00, "m2","L2", "1.0"));
          area.Add("thon",   new UBASE("Annamese", "thon", 2.400000000000000E+00, "m2","L2", "1.0"));
          mass.Add("dong",   new UBASE("Annamese", "dong", 3.775000000000000E-03, "kg","M", "1.0"));
          liquid.Add("hao",   new UBASE("Annamese", "hao", 2.826000000000000E-02, "m3","L3", "1.0"));
          liquid.Add("dau",   new UBASE("Annamese", "dau", 1.000000000000000E-03, "m3","L3", "1.0"));
          liquid.Add("thang(cochinchina)",   new UBASE("Annamese", "thang(cochinchina)", 2.766000000000000E-03, "m3","L3", "1.0"));
          dry.Add("than",   new UBASE("Annamese", "than", 1.600000000000000E+00, "m3","L3", "1.0"));
          _map.Add("Annamese",   new BaseSystem("Annamese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("Arabic", "foot", 3.200000000000000E-01, "m","L", "1.0"));
          area.Add("feddan",   new UBASE("Arabic", "feddan", 5.898240000000000E+03, "m2","L2", "1.0"));
          mass.Add("rotl",   new UBASE("Arabic", "rotl", 3.400000000000000E-01, "kg","M", "1.0"));
          liquid.Add("sa",   new UBASE("Arabic", "sa", 4.212500000000000E-03, "m3","L3", "1.0"));
          dry.Add("cafiz",   new UBASE("Arabic", "cafiz", 3.264000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Arabic",   new BaseSystem("Arabic", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Argentinian", "vara", 8.666000000000000E-01, "m","L", "1.0"));
          area.Add("square-vara",   new UBASE("Argentinian", "square-vara", 7.509955600000000E-01, "m2","L2", "1.0"));
          mass.Add("libra",   new UBASE("Argentinian", "libra", 4.594000000000000E-01, "kg","M", "1.0"));
          liquid.Add("frasco",   new UBASE("Argentinian", "frasco", 2.375000000000000E-03, "m3","L3", "1.0"));
          dry.Add("fanega",   new UBASE("Argentinian", "fanega", 1.371977000000000E-01, "m3","L3", "1.0"));
          _map.Add("Argentinian",   new BaseSystem("Argentinian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pous",   new UBASE("Attic", "pous", 3.085600000000000E-01, "m","L", "1.0"));
          area.Add("square-pous",   new UBASE("Attic", "square-pous", 9.520927360000000E-02, "m2","L2", "1.0"));
          mass.Add("talent",   new UBASE("Attic", "talent", 2.592000000000000E+01, "kg","M", "1.0"));
          liquid.Add("cotyle",   new UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cotyle",   new UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("chenix",   new UBASE("Attic", "chenix", 1.080000000000000E-03, "m3","L3", "1.0"));
          _map.Add("Attic",   new BaseSystem("Attic", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fuss",   new UBASE("Austrian", "fuss", 3.160800000000000E-01, "m","L", "1.0"));
          length.Add("ell",   new UBASE("Austrian", "ell", 7.792000000000000E-01, "m","L", "1.0"));
          area.Add("joch",   new UBASE("Austrian", "joch", 5.754618224640000E+03, "m2","L2", "1.0"));
          mass.Add("pfund",   new UBASE("Austrian", "pfund", 5.600100000000000E-01, "kg","M", "1.0"));
          mass.Add("pfund(apothecary)",   new UBASE("Austrian", "pfund(apothecary)", 4.200075000000000E-01, "kg","M", "1.0"));
          liquid.Add("mass",   new UBASE("Austrian", "mass", 1.415100000000000E-03, "m3","L3", "1.0"));
          dry.Add("metzel",   new UBASE("Austrian", "metzel", 6.148900000000000E-02, "m3","L3", "1.0"));
          _map.Add("Austrian",   new BaseSystem("Austrian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("canna",   new UBASE("Belearic", "canna", 1.564000000000000E+00, "m","L", "1.0"));
          area.Add("square-canna",   new UBASE("Belearic", "square-canna", 2.446096000000000E+00, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Belearic", "rottolo", 4.080000000000000E-01, "kg","M", "1.0"));
          liquid.Add("quartera",   new UBASE("Belearic", "quartera", 7.197000000000000E-02, "m3","L3", "1.0"));
          dry.Add("quartin",   new UBASE("Belearic", "quartin", 2.714000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Belearic",   new BaseSystem("Belearic", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("perche",   new UBASE("Belgian", "perche", 6.497000000000000E+00, "m","L", "1.0"));
          area.Add("arpent",   new UBASE("Belgian", "arpent", 4.221100900000000E+01, "m2","L2", "1.0"));
          mass.Add("livre",   new UBASE("Belgian", "livre", 4.895000000000000E-01, "kg","M", "1.0"));
          liquid.Add("pot",   new UBASE("Belgian", "pot", 5.000000000000000E-04, "m3","L3", "1.0"));
          dry.Add("pot",   new UBASE("Belgian", "pot", 1.500000000000000E-03, "m3","L3", "1.0"));
          _map.Add("Belgian",   new BaseSystem("Belgian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pe",   new UBASE("Brazilian", "pe", 3.333333333333330E-01, "m","L", "1.0"));
          area.Add("salamis(nominal)",   new UBASE("Brazilian", "salamis(nominal)", 4.537500000000000E+03, "m2","L2", "1.0"));
          area.Add("salamis(min)",   new UBASE("Brazilian", "salamis(min)", 3.025000000000000E+03, "m2","L2", "1.0"));
          area.Add("salamis(max)",   new UBASE("Brazilian", "salamis(max)", 6.050000000000000E+03, "m2","L2", "1.0"));
          area.Add("tarefa(nominal)",   new UBASE("Brazilian", "tarefa(nominal)", 3.500000000000000E+03, "m2","L2", "1.0"));
          area.Add("tarefa(min)",   new UBASE("Brazilian", "tarefa(min)", 3.000000000000000E+03, "m2","L2", "1.0"));
          area.Add("tarefa(max)",   new UBASE("Brazilian", "tarefa(max)", 4.000000000000000E+03, "m2","L2", "1.0"));
          mass.Add("libra",   new UBASE("Brazilian", "libra", 4.590500000000000E-01, "kg","M", "1.0"));
          liquid.Add("alquiera",   new UBASE("Brazilian", "alquiera", 5.324000000000000E-03, "m3","L3", "1.0"));
          liquid.Add("alquiera(Bahia)",   new UBASE("Brazilian", "alquiera(Bahia)", 3.524000000000000E-03, "m3","L3", "1.0"));
          liquid.Add("alquiera(common)",   new UBASE("Brazilian", "alquiera(common)", 3.626000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-pe",   new UBASE("Brazilian", "cubic-pe", 3.703703703703700E-02, "m3","L3", "1.0"));
          dry.Add("alquiera(salt)",   new UBASE("Brazilian", "alquiera(salt)", 4.076000000000000E-03, "m3","L3", "1.0"));
          _map.Add("Brazilian",   new BaseSystem("Brazilian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("sandong",   new UBASE("Burmese", "sandong", 5.588000000000000E-01, "m","L", "1.0"));
          area.Add("square-sandong",   new UBASE("Burmese", "square-sandong", 3.122574400000000E-01, "m2","L2", "1.0"));
          mass.Add("catty",   new UBASE("Burmese", "catty", 5.440000000000000E-01, "kg","M", "1.0"));
          liquid.Add("byee",   new UBASE("Burmese", "byee", 5.050000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-sandong",   new UBASE("Burmese", "cubic-sandong", 1.744894574720000E-01, "m3","L3", "1.0"));
          _map.Add("Burmese",   new BaseSystem("Burmese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("muoi",   new UBASE("Cambodian", "muoi", 1.000000000000000E+00, "m","L", "1.0"));
          area.Add("square-muoi",   new UBASE("Cambodian", "square-muoi", 1.000000000000000E+00, "m2","L2", "1.0"));
          mass.Add("neal",   new UBASE("Cambodian", "neal", 6.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("sesep",   new UBASE("Cambodian", "sesep", 4.000000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-muoi",   new UBASE("Cambodian", "cubic-muoi", 1.000000000000000E+00, "m3","L3", "1.0"));
          _map.Add("Cambodian",   new BaseSystem("Cambodian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("covid(Ceylon)",   new UBASE("Ceylonese", "covid(Ceylon)", 4.640000000000000E-01, "m","L", "1.0"));
          length.Add("covid(Madras)",   new UBASE("Ceylonese", "covid(Madras)", 4.720000000000000E-01, "m","L", "1.0"));
          area.Add("square-covid(Ceylon)",   new UBASE("Ceylonese", "square-covid(Ceylon)", 2.152960000000000E-01, "m2","L2", "1.0"));
          area.Add("square-covid(Madras)",   new UBASE("Ceylonese", "square-covid(Madras)", 2.227840000000000E-01, "m2","L2", "1.0"));
          mass.Add("seer",   new UBASE("Ceylonese", "seer", 2.834950000000000E-01, "kg","M", "1.0"));
          liquid.Add("cubic-covid(Ceylon)",   new UBASE("Ceylonese", "cubic-covid(Ceylon)", 9.989734400000000E-02, "m3","L3", "1.0"));
          liquid.Add("cubic-covid(Madras)",   new UBASE("Ceylonese", "cubic-covid(Madras)", 1.051540480000000E-01, "m3","L3", "1.0"));
          dry.Add("chundroon",   new UBASE("Ceylonese", "chundroon", 2.649000000000000E-04, "m3","L3", "1.0"));
          _map.Add("Ceylonese",   new BaseSystem("Ceylonese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("bara",   new UBASE("Chilean", "bara", 8.360000000000000E-01, "m","L", "1.0"));
          area.Add("square-bara",   new UBASE("Chilean", "square-bara", 6.988960000000000E-01, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Chilean", "libbra", 4.600930000000000E-01, "kg","M", "1.0"));
          liquid.Add("almude",   new UBASE("Chilean", "almude", 8.083000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-bara",   new UBASE("Chilean", "cubic-bara", 5.842770560000000E-01, "m3","L3", "1.0"));
          _map.Add("Chilean",   new BaseSystem("Chilean", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("tchi",   new UBASE("Chinese", "tchi", 3.200000000000000E-01, "m","L", "1.0"));
          length.Add("chek",   new UBASE("Chinese", "chek", 3.714750000000000E-01, "m","L", "1.0"));
          area.Add("meou",   new UBASE("Chinese", "meou", 6.144000000000000E+02, "m2","L2", "1.0"));
          area.Add("fang-chi",   new UBASE("Chinese", "fang-chi", 1.024000000000000E-01, "m2","L2", "1.0"));
          area.Add("mau5",   new UBASE("Chinese", "mau5", 7.614000000000000E+02, "m2","L2", "1.0"));
          mass.Add("jin",   new UBASE("Chinese", "jin", 5.968160000000000E-01, "kg","M", "1.0"));
          liquid.Add("cheng",   new UBASE("Chinese", "cheng", 1.035468800000000E-03, "m3","L3", "1.0"));
          liquid.Add("cyut3",   new UBASE("Chinese", "cyut3", 1.031000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-tchi",   new UBASE("Chinese", "cubic-tchi", 3.276800000000000E-02, "m3","L3", "1.0"));
          _map.Add("Chinese",   new BaseSystem("Chinese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Colombian", "vara", 8.000000000000000E-01, "m","L", "1.0"));
          area.Add("square-vara",   new UBASE("Colombian", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Colombian", "libbra", 5.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("cubic-vara",   new UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0"));
          _map.Add("Colombian",   new BaseSystem("Colombian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Costa-Rican", "vara", 8.393000000000000E-01, "m","L", "1.0"));
          area.Add("manzana",   new UBASE("Costa-Rican", "manzana", 7.044244900000000E+03, "m2","L2", "1.0"));
          mass.Add("fanega",   new UBASE("Costa-Rican", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
          liquid.Add("botella(nominal)",   new UBASE("Costa-Rican", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(min)",   new UBASE("Costa-Rican", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(max)",   new UBASE("Costa-Rican", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Costa-Rican", "cubic-vara", 5.912234744570000E-01, "m3","L3", "1.0"));
          _map.Add("Costa-Rican",   new BaseSystem("Costa-Rican", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Cuban", "vara", 8.479536000000000E-01, "m","L", "1.0"));
          area.Add("cabaliera",   new UBASE("Cuban", "cabaliera", 1.342020000000000E+05, "m2","L2", "1.0"));
          mass.Add("libra",   new UBASE("Cuban", "libra", 4.608951746418000E-01, "kg","M", "1.0"));
          liquid.Add("bocoy",   new UBASE("Cuban", "bocoy", 1.362700000000000E-01, "m3","L3", "1.0"));
          dry.Add("fanega",   new UBASE("Cuban", "fanega", 5.634727319684110E-02, "m3","L3", "1.0"));
          _map.Add("Cuban",   new BaseSystem("Cuban", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Cypriot", "pic", 6.096000000000000E-01, "m","L", "1.0"));
          area.Add("scala",   new UBASE("Cypriot", "scala", 1.337803776000000E+03, "m2","L2", "1.0"));
          mass.Add("oke",   new UBASE("Cypriot", "oke", 1.270058636000000E+00, "kg","M", "1.0"));
          liquid.Add("oke",   new UBASE("Cypriot", "oke", 1.278550000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Cypriot", "cubic-pic", 2.265347727360000E-01, "m3","L3", "1.0"));
          _map.Add("Cypriot",   new BaseSystem("Cypriot", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("stopa(Bohemian)",   new UBASE("Czech", "stopa(Bohemian)", 2.960000000000000E-01, "m","L", "1.0"));
          length.Add("stopa(Praha)",   new UBASE("Czech", "stopa(Praha)", 2.965000000000000E-01, "m","L", "1.0"));
          length.Add("stopa(Moravian)",   new UBASE("Czech", "stopa(Moravian)", 2.840000000000000E-01, "m","L", "1.0"));
          length.Add("stopa(Silesian)",   new UBASE("Czech", "stopa(Silesian)", 2.895000000000000E-01, "m","L", "1.0"));
          area.Add("merice",   new UBASE("Czech", "merice", 2.000000000000000E+03, "m2","L2", "1.0"));
          mass.Add("quintal",   new UBASE("Czech", "quintal", 5.000000000000000E+01, "kg","M", "1.0"));
          liquid.Add("merice",   new UBASE("Czech", "merice", 7.060000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-stopa(Bohemian)",   new UBASE("Czech", "cubic-stopa(Bohemian)", 2.593433600000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-stopa(Praha)",   new UBASE("Czech", "cubic-stopa(Praha)", 2.606598212500000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-stopa(Moravian)",   new UBASE("Czech", "cubic-stopa(Moravian)", 2.290630400000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-stopa(Silesian)",   new UBASE("Czech", "cubic-stopa(Silesian)", 2.426306737500000E-02, "m3","L3", "1.0"));
          _map.Add("Czech",   new BaseSystem("Czech", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fod",   new UBASE("Danish", "fod", 3.138570000000000E-01, "m","L", "1.0"));
          length.Add("danskmil",   new UBASE("Danish", "danskmil", 7.532500000000000E+03, "m","L", "1.0"));
          area.Add("square-ruthe",   new UBASE("Danish", "square-ruthe", 1.418489516865600E+01, "m2","L2", "1.0"));
          area.Add("tondelande",   new UBASE("Danish", "tondelande", 5.516230000000000E+03, "m2","L2", "1.0"));
          mass.Add("pund",   new UBASE("Danish", "pund", 5.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("pott",   new UBASE("Danish", "pott", 9.661520492510560E-04, "m3","L3", "1.0"));
          dry.Add("korntonde",   new UBASE("Danish", "korntonde", 1.391258950921520E-01, "m3","L3", "1.0"));
          _map.Add("Danish",   new BaseSystem("Danish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("voeten",   new UBASE("Dutch", "voeten", 2.830594000000000E-01, "m","L", "1.0"));
          area.Add("morgen",   new UBASE("Dutch", "morgen", 8.244346000000000E+03, "m2","L2", "1.0"));
          mass.Add("pond(Amsterdam)",   new UBASE("Dutch", "pond(Amsterdam)", 4.940903200000000E-01, "kg","M", "1.0"));
          mass.Add("pond(ordinary)",   new UBASE("Dutch", "pond(ordinary)", 4.921677200000000E-01, "kg","M", "1.0"));
          mass.Add("pond(apothecary)",   new UBASE("Dutch", "pond(apothecary)", 3.691257900000000E-01, "kg","M", "1.0"));
          liquid.Add("mingelen",   new UBASE("Dutch", "mingelen", 1.200000000000000E-03, "m3","L3", "1.0"));
          dry.Add("schepel",   new UBASE("Dutch", "schepel", 2.726000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Dutch",   new BaseSystem("Dutch", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("derah(royal-cubit)",   new UBASE("Egyptian", "derah(royal-cubit)", 5.235000000000000E-01, "m","L", "1.0"));
          length.Add("diraa",   new UBASE("Egyptian", "diraa", 5.800000000000000E-01, "m","L", "1.0"));
          length.Add("derah(cubit)",   new UBASE("Egyptian", "derah(cubit)", 4.495800000000000E-01, "m","L", "1.0"));
          length.Add("palm(short)",   new UBASE("Egyptian", "palm(short)", 7.485714286000000E-02, "m","L", "1.0"));
          area.Add("pekeis",   new UBASE("Egyptian", "pekeis", 2.740522500000000E+01, "m2","L2", "1.0"));
          area.Add("feddan-masri",   new UBASE("Egyptian", "feddan-masri", 4.200080000000000E+03, "m2","L2", "1.0"));
          mass.Add("deben",   new UBASE("Egyptian", "deben", 1.365000000000000E-02, "kg","M", "1.0"));
          mass.Add("oke",   new UBASE("Egyptian", "oke", 1.248000000000000E+00, "kg","M", "1.0"));
          liquid.Add("keddah",   new UBASE("Egyptian", "keddah", 2.062500000000000E-03, "m3","L3", "1.0"));
          dry.Add("khar",   new UBASE("Egyptian", "khar", 3.400000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Egyptian",   new BaseSystem("Egyptian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("cubi",   new UBASE("Eritrean", "cubi", 3.200000000000000E-01, "m","L", "1.0"));
          area.Add("square-cubi",   new UBASE("Eritrean", "square-cubi", 1.024000000000000E-01, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Eritrean", "rottolo", 4.480000000000000E-01, "kg","M", "1.0"));
          liquid.Add("messe",   new UBASE("Eritrean", "messe", 1.500000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-cubi",   new UBASE("Eritrean", "cubic-cubi", 3.276800000000000E-02, "m3","L3", "1.0"));
          _map.Add("Eritrean",   new BaseSystem("Eritrean", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("arshine",   new UBASE("Estonian", "arshine", 3.071120000000000E+01, "m","L", "1.0"));
          area.Add("lofstelle",   new UBASE("Estonian", "lofstelle", 1.855000000000000E+03, "m2","L2", "1.0"));
          area.Add("tonnland",   new UBASE("Estonian", "tonnland", 5.462700000000000E+03, "m2","L2", "1.0"));
          mass.Add("pfund",   new UBASE("Estonian", "pfund", 4.600000000000000E-01, "kg","M", "1.0"));
          liquid.Add("hulmit",   new UBASE("Estonian", "hulmit", 1.148000000000000E-02, "m3","L3", "1.0"));
          liquid.Add("kulimet",   new UBASE("Estonian", "kulimet", 1.150161280000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-elle",   new UBASE("Estonian", "cubic-elle", 9.619307168929790E+02, "m3","L3", "1.0"));
          _map.Add("Estonian",   new BaseSystem("Estonian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("kend",   new UBASE("Ethiopian", "kend", 4.900000000000000E-01, "m","L", "1.0"));
          area.Add("square-kend",   new UBASE("Ethiopian", "square-kend", 2.401000000000000E-01, "m2","L2", "1.0"));
          mass.Add("farasula(ivory)",   new UBASE("Ethiopian", "farasula(ivory)", 1.347840000000000E+01, "kg","M", "1.0"));
          mass.Add("farasula(coffee)",   new UBASE("Ethiopian", "farasula(coffee)", 1.684800000000000E+01, "kg","M", "1.0"));
          mass.Add("farasula(rubber)",   new UBASE("Ethiopian", "farasula(rubber)", 1.797120000000000E+01, "kg","M", "1.0"));
          liquid.Add("kuba",   new UBASE("Ethiopian", "kuba", 1.016000000000000E-03, "m3","L3", "1.0"));
          dry.Add("madega",   new UBASE("Ethiopian", "madega", 4.400000000000000E-04, "m3","L3", "1.0"));
          _map.Add("Ethiopian",   new BaseSystem("Ethiopian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("jalka",   new UBASE("Finnish", "jalka", 2.969000000000000E-01, "m","L", "1.0"));
          area.Add("kannunala",   new UBASE("Finnish", "kannunala", 8.814961000000000E+01, "m2","L2", "1.0"));
          mass.Add("naula",   new UBASE("Finnish", "naula", 4.250797024000000E-01, "kg","M", "1.0"));
          liquid.Add("tunna",   new UBASE("Finnish", "tunna", 1.634900000000000E-01, "m3","L3", "1.0"));
          liquid.Add("tuoppi",   new UBASE("Finnish", "tuoppi", 1.308580960450000E-03, "m3","L3", "1.0"));
          dry.Add("tuoppi",   new UBASE("Finnish", "tuoppi", 1.327400000000000E-03, "m3","L3", "1.0"));
          _map.Add("Finnish",   new BaseSystem("Finnish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("toise",   new UBASE("French", "toise", 1.949036500200000E+00, "m","L", "1.0"));
          length.Add("pied(metric)",   new UBASE("French", "pied(metric)", 3.333333333333330E-01, "m","L", "1.0"));
          length.Add("pied(de-Paris/du-Roi)",   new UBASE("French", "pied(de-Paris/du-Roi)", 3.248394167000000E-01, "m","L", "1.0"));
          length.Add("bourgeois",   new UBASE("French", "bourgeois", 3.175000000000000E-03, "m","L", "1.0"));
          length.Add("canne(Provence)",   new UBASE("French", "canne(Provence)", 1.968500000000000E+00, "m","L", "1.0"));
          length.Add("point-didot",   new UBASE("French", "point-didot", 3.759715471075000E-04, "m","L", "1.0"));
          length.Add("pied(commum)",   new UBASE("French", "pied(commum)", 2.236067977500000E-01, "m","L", "1.0"));
          length.Add("pied(d'ordonance)",   new UBASE("French", "pied(d'ordonance)", 3.248400000000000E-01, "m","L", "1.0"));
          length.Add("toise(du-Chatelet)",   new UBASE("French", "toise(du-Chatelet)", 1.949090000000000E+00, "m","L", "1.0"));
          area.Add("pied-carre",   new UBASE("French", "pied-carre", 1.055206466419960E-01, "m2","L2", "1.0"));
          area.Add("journal(Nantes)",   new UBASE("French", "journal(Nantes)", 2.671000000000000E+03, "m2","L2", "1.0"));
          area.Add("ares",   new UBASE("French", "ares", 1.000000000000000E+02, "m2","L2", "1.0"));
          area.Add("exots(Agen)",   new UBASE("French", "exots(Agen)", 1.687500000000000E+01, "m2","L2", "1.0"));
          area.Add("dextres(Montpellier)",   new UBASE("French", "dextres(Montpellier)", 1.920000000000000E+01, "m2","L2", "1.0"));
          area.Add("corterade(Montpellier)",   new UBASE("French", "corterade(Montpellier)", 2.877000000000000E+03, "m2","L2", "1.0"));
          area.Add("journal(Bretagne)",   new UBASE("French", "journal(Bretagne)", 4.863000000000000E+03, "m2","L2", "1.0"));
          area.Add("becheree(Lyonnais)",   new UBASE("French", "becheree(Lyonnais)", 1.367000000000000E+03, "m2","L2", "1.0"));
          area.Add("journal(Lyonnais)",   new UBASE("French", "journal(Lyonnais)", 4.000000000000000E+03, "m2","L2", "1.0"));
          mass.Add("livre(de-Paris)",   new UBASE("French", "livre(de-Paris)", 4.895058500000000E-01, "kg","M", "1.0"));
          mass.Add("livre(Charlemange)",   new UBASE("French", "livre(Charlemange)", 3.671280000000000E-01, "kg","M", "1.0"));
          mass.Add("livre(metric)",   new UBASE("French", "livre(metric)", 1.000000000000000E+00, "kg","M", "1.0"));
          liquid.Add("pinte",   new UBASE("French", "pinte", 9.521462584750000E-04, "m3","L3", "1.0"));
          liquid.Add("chopine(Provence-wine)",   new UBASE("French", "chopine(Provence-wine)", 2.299250000000000E-04, "m3","L3", "1.0"));
          liquid.Add("liter(old)",   new UBASE("French", "liter(old)", 1.000002800100000E-03, "m3","L3", "1.0"));
          dry.Add("setier",   new UBASE("French", "setier", 1.516800000000000E-01, "m3","L3", "1.0"));
          dry.Add("picotins",   new UBASE("French", "picotins", 3.125000000000000E-03, "m3","L3", "1.0"));
          _map.Add("French",   new BaseSystem("French", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fuss",   new UBASE("German", "fuss", 3.138570000000000E-01, "m","L", "1.0"));
          area.Add("klafter",   new UBASE("German", "klafter", 1.440020334575000E+02, "m2","L2", "1.0"));
          mass.Add("pfund",   new UBASE("German", "pfund", 4.677110000000000E-01, "kg","M", "1.0"));
          mass.Add("zollpfund",   new UBASE("German", "zollpfund", 5.144821000000000E-01, "kg","M", "1.0"));
          liquid.Add("quart",   new UBASE("German", "quart", 1.145069095408660E-03, "m3","L3", "1.0"));
          dry.Add("metzen",   new UBASE("German", "metzen", 3.705960000000000E-02, "m3","L3", "1.0"));
          dry.Add("metze",   new UBASE("German", "metze", 3.435890000000000E-03, "m3","L3", "1.0"));
          _map.Add("German",   new BaseSystem("German", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("piki(short)",   new UBASE("Greek", "piki(short)", 6.480000000000000E-01, "m","L", "1.0"));
          length.Add("piki(long)",   new UBASE("Greek", "piki(long)", 6.690000000000000E-01, "m","L", "1.0"));
          length.Add("piki(mansonary)",   new UBASE("Greek", "piki(mansonary)", 7.500000000000000E-01, "m","L", "1.0"));
          length.Add("amma",   new UBASE("Greek", "amma", 2.100000000000000E+01, "m","L", "1.0"));
          area.Add("stremma",   new UBASE("Greek", "stremma", 1.000000000000000E+03, "m2","L2", "1.0"));
          mass.Add("oka",   new UBASE("Greek", "oka", 1.280000000000000E+00, "kg","M", "1.0"));
          liquid.Add("oka(average)",   new UBASE("Greek", "oka(average)", 1.336500000000000E-03, "m3","L3", "1.0"));
          liquid.Add("baril",   new UBASE("Greek", "baril", 7.423600000000000E-02, "m3","L3", "1.0"));
          dry.Add("sexte",   new UBASE("Greek", "sexte", 5.400000000000000E-04, "m3","L3", "1.0"));
          _map.Add("Greek",   new BaseSystem("Greek", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Guatemalan", "vara", 8.359000000000000E-01, "m","L", "1.0"));
          area.Add("manzana",   new UBASE("Guatemalan", "manzana", 6.987288100000000E+03, "m2","L2", "1.0"));
          mass.Add("fanega",   new UBASE("Guatemalan", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
          liquid.Add("botella(nominal)",   new UBASE("Guatemalan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(min)",   new UBASE("Guatemalan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(max)",   new UBASE("Guatemalan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-vera",   new UBASE("Guatemalan", "cubic-vera", 5.840674122790000E-01, "m3","L3", "1.0"));
          _map.Add("Guatemalan",   new BaseSystem("Guatemalan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Guinean", "pic", 5.780000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Guinean", "square-pic", 3.340840000000000E-01, "m2","L2", "1.0"));
          mass.Add("benda",   new UBASE("Guinean", "benda", 6.420000000000000E-02, "kg","M", "1.0"));
          liquid.Add("cubic-pic",   new UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0"));
          _map.Add("Guinean",   new BaseSystem("Guinean", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("toise",   new UBASE("Haitian", "toise", 1.948800000000000E+00, "m","L", "1.0"));
          area.Add("carreau",   new UBASE("Haitian", "carreau", 1.292300000000000E+03, "m2","L2", "1.0"));
          mass.Add("gwo-mamit",   new UBASE("Haitian", "gwo-mamit", 1.700000000000000E+00, "kg","M", "1.0"));
          liquid.Add("baril",   new UBASE("Haitian", "baril", 1.000000000000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-toise",   new UBASE("Haitian", "cubic-toise", 7.401194422272000E+00, "m3","L3", "1.0"));
          _map.Add("Haitian",   new BaseSystem("Haitian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("cubit",   new UBASE("Hebrew", "cubit", 5.550000000000000E-01, "m","L", "1.0"));
          length.Add("cubit(acared)",   new UBASE("Hebrew", "cubit(acared)", 6.400000000000000E-01, "m","L", "1.0"));
          area.Add("geris",   new UBASE("Hebrew", "geris", 3.141592653589790E-04, "m2","L2", "1.0"));
          mass.Add("mina(sacred)",   new UBASE("Hebrew", "mina(sacred)", 8.500000000000000E-01, "kg","M", "1.0"));
          mass.Add("mina(Talmudic)",   new UBASE("Hebrew", "mina(Talmudic)", 3.542000000000000E-01, "kg","M", "1.0"));
          liquid.Add("bath(old)",   new UBASE("Hebrew", "bath(old)", 2.937600000000000E-02, "m3","L3", "1.0"));
          liquid.Add("bath(new)",   new UBASE("Hebrew", "bath(new)", 2.142000000000000E-02, "m3","L3", "1.0"));
          dry.Add("ephah(old)",   new UBASE("Hebrew", "ephah(old)", 2.937600000000000E-02, "m3","L3", "1.0"));
          dry.Add("ephah(new)",   new UBASE("Hebrew", "ephah(new)", 2.142000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Hebrew",   new BaseSystem("Hebrew", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Honduran", "vara", 8.128000000000000E-01, "m","L", "1.0"));
          area.Add("manzana",   new UBASE("Honduran", "manzana", 6.606438400000000E+04, "m2","L2", "1.0"));
          mass.Add("fanega",   new UBASE("Honduran", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
          liquid.Add("botella(nominal)",   new UBASE("Honduran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(min)",   new UBASE("Honduran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(max)",   new UBASE("Honduran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Honduran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0"));
          _map.Add("Honduran",   new BaseSystem("Honduran", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("faust",   new UBASE("Hungarian", "faust", 1.053600000000000E-01, "m","L", "1.0"));
          area.Add("square-meile",   new UBASE("Hungarian", "square-meile", 6.978262126496050E+07, "m2","L2", "1.0"));
          mass.Add("oka",   new UBASE("Hungarian", "oka", 1.329479142678000E+00, "kg","M", "1.0"));
          liquid.Add("eimer",   new UBASE("Hungarian", "eimer", 5.430000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-faust",   new UBASE("Hungarian", "cubic-faust", 1.169572870656000E-03, "m3","L3", "1.0"));
          _map.Add("Hungarian",   new BaseSystem("Hungarian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fet",   new UBASE("Icelandic", "fet", 3.138570000000000E-01, "m","L", "1.0"));
          area.Add("ferfaomur",   new UBASE("Icelandic", "ferfaomur", 3.546223792164000E+00, "m2","L2", "1.0"));
          mass.Add("pund",   new UBASE("Icelandic", "pund", 5.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("cubic-fet",   new UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3","L3", "1.0"));
          dry.Add("pottar",   new UBASE("Icelandic", "pottar", 9.661520492510560E-04, "m3","L3", "1.0"));
          _map.Add("Icelandic",   new BaseSystem("Icelandic", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("hasta",   new UBASE("Indian", "hasta", 4.570000000000000E-01, "m","L", "1.0"));
          length.Add("guz(Bombay)",   new UBASE("Indian", "guz(Bombay)", 6.858000000000000E-01, "m","L", "1.0"));
          length.Add("guz(Calcutta)",   new UBASE("Indian", "guz(Calcutta)", 9.150000000000000E-01, "m","L", "1.0"));
          area.Add("cawnie",   new UBASE("Indian", "cawnie", 5.400000000000000E+02, "m2","L2", "1.0"));
          area.Add("square-guz(Bombay)",   new UBASE("Indian", "square-guz(Bombay)", 4.703216400000000E-01, "m2","L2", "1.0"));
          area.Add("square-guz(Calcutta)",   new UBASE("Indian", "square-guz(Calcutta)", 8.372250000000000E-01, "m2","L2", "1.0"));
          area.Add("ground",   new UBASE("Indian", "ground", 2.030000000000000E+01, "m2","L2", "1.0"));
          area.Add("kani",   new UBASE("Indian", "kani", 3.075000000000000E+02, "m2","L2", "1.0"));
          area.Add("chahar",   new UBASE("Indian", "chahar", 2.962000000000000E-02, "m2","L2", "1.0"));
          mass.Add("pala",   new UBASE("Indian", "pala", 4.700000000000000E-02, "kg","M", "1.0"));
          mass.Add("seer",   new UBASE("Indian", "seer", 9.330400000000000E-01, "kg","M", "1.0"));
          mass.Add("drona",   new UBASE("Indian", "drona", 1.320000000000000E+01, "kg","M", "1.0"));
          liquid.Add("parah",   new UBASE("Indian", "parah", 1.101000000000000E-01, "m3","L3", "1.0"));
          dry.Add("drona",   new UBASE("Indian", "drona", 1.320000000000000E-02, "m3","L3", "1.0"));
          dry.Add("seer",   new UBASE("Indian", "seer", 1.000000000000000E-03, "m3","L3", "1.0"));
          _map.Add("Indian",   new BaseSystem("Indian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("depa",   new UBASE("Indonesian", "depa", 1.700000000000000E+00, "m","L", "1.0"));
          area.Add("bahoe",   new UBASE("Indonesian", "bahoe", 7.096500000000000E+03, "m2","L2", "1.0"));
          mass.Add("picul",   new UBASE("Indonesian", "picul", 6.176130250000000E+01, "kg","M", "1.0"));
          mass.Add("thail(precious-metal)",   new UBASE("Indonesian", "thail(precious-metal)", 5.409000000000000E+01, "kg","M", "1.0"));
          mass.Add("thail(opium)",   new UBASE("Indonesian", "thail(opium)", 3.860100000000000E+01, "kg","M", "1.0"));
          liquid.Add("kan",   new UBASE("Indonesian", "kan", 1.575100000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-depa",   new UBASE("Indonesian", "cubic-depa", 4.913000000000000E+00, "m3","L3", "1.0"));
          _map.Add("Indonesian",   new BaseSystem("Indonesian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot",   new UBASE("Irish", "foot", 3.048000000000000E-01, "m","L", "1.0"));
          length.Add("troighid",   new UBASE("Irish", "troighid", 2.500000000000000E-01, "m","L", "1.0"));
          area.Add("achar",   new UBASE("Irish", "achar", 4.046856422400000E+03, "m2","L2", "1.0"));
          mass.Add("penginn",   new UBASE("Irish", "penginn", 4.000000000000000E-04, "kg","M", "1.0"));
          liquid.Add("gallon",   new UBASE("Irish", "gallon", 3.565825126400000E-03, "m3","L3", "1.0"));
          liquid.Add("meisrin",   new UBASE("Irish", "meisrin", 6.600000000000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-foot",   new UBASE("Irish", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-troighid",   new UBASE("Irish", "cubic-troighid", 1.562500000000000E-02, "m3","L3", "1.0"));
          _map.Add("Irish",   new BaseSystem("Irish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("piedi-liprando",   new UBASE("Italian", "piedi-liprando", 5.137700000000000E-01, "m","L", "1.0"));
          area.Add("giornata",   new UBASE("Italian", "giornata", 3.800000000000000E+03, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Italian", "libbra", 3.070000000000000E-01, "kg","M", "1.0"));
          liquid.Add("barile(Florence-oil)",   new UBASE("Italian", "barile(Florence-oil)", 3.343000000000000E-02, "m3","L3", "1.0"));
          liquid.Add("barile(Florence-wine)",   new UBASE("Italian", "barile(Florence-wine)", 4.560000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-piedi-liprando",   new UBASE("Italian", "cubic-piedi-liprando", 1.356145303196330E-01, "m3","L3", "1.0"));
          _map.Add("Italian",   new BaseSystem("Italian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("shaku",   new UBASE("Japanese", "shaku", 3.030303030303030E-01, "m","L", "1.0"));
          area.Add("tsubo",   new UBASE("Japanese", "tsubo", 3.305785123966940E+00, "m2","L2", "1.0"));
          mass.Add("kwan",   new UBASE("Japanese", "kwan", 3.750000000000000E+00, "kg","M", "1.0"));
          mass.Add("tael",   new UBASE("Japanese", "tael", 3.751000000000000E-02, "kg","M", "1.0"));
          liquid.Add("sho",   new UBASE("Japanese", "sho", 1.803906836964690E-03, "m3","L3", "1.0"));
          dry.Add("cubic-shaku",   new UBASE("Japanese", "cubic-shaku", 2.782647410746580E-02, "m3","L3", "1.0"));
          _map.Add("Japanese",   new BaseSystem("Japanese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("elle",   new UBASE("Latvian", "elle", 5.370000000000000E-01, "m","L", "1.0"));
          area.Add("kapp",   new UBASE("Latvian", "kapp", 1.486400000000000E+02, "m2","L2", "1.0"));
          mass.Add("pfund",   new UBASE("Latvian", "pfund", 4.190000000000000E-01, "kg","M", "1.0"));
          liquid.Add("stoof",   new UBASE("Latvian", "stoof", 1.275200000000000E-03, "m3","L3", "1.0"));
          liquid.Add("faden",   new UBASE("Latvian", "faden", 4.077000000000000E+00, "m3","L3", "1.0"));
          dry.Add("kulmet",   new UBASE("Latvian", "kulmet", 1.091062080000000E-02, "m3","L3", "1.0"));
          _map.Add("Latvian",   new BaseSystem("Latvian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Libyan", "pic", 6.800000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Libyan", "square-pic", 4.624000000000000E-01, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Libyan", "rottolo", 5.128000000000000E-01, "kg","M", "1.0"));
          liquid.Add("barile",   new UBASE("Libyan", "barile", 6.249750000000000E-02, "m3","L3", "1.0"));
          dry.Add("orba",   new UBASE("Libyan", "orba", 7.692000000000000E-03, "m3","L3", "1.0"));
          _map.Add("Libyan",   new BaseSystem("Libyan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("canna",   new UBASE("Maltese", "canna", 2.088000000000000E+00, "m","L", "1.0"));
          area.Add("qasba-kwadra",   new UBASE("Maltese", "qasba-kwadra", 4.359744000000000E+00, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Maltese", "rottolo", 7.937900000000000E-01, "kg","M", "1.0"));
          liquid.Add("salma",   new UBASE("Maltese", "salma", 2.909440000000000E+02, "m3","L3", "1.0"));
          liquid.Add("baril",   new UBASE("Maltese", "baril", 4.316200000000000E+01, "m3","L3", "1.0"));
          liquid.Add("caffiso",   new UBASE("Maltese", "caffiso", 2.045700000000000E+01, "m3","L3", "1.0"));
          dry.Add("tomna",   new UBASE("Maltese", "tomna", 1.818436800000000E-02, "m3","L3", "1.0"));
          _map.Add("Maltese",   new BaseSystem("Maltese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          liquid.Add("cash",   new UBASE("Mauritius", "cash", 2.271100000000000E-01, "m3","L3", "1.0"));
          _map.Add("Mauritius",   new BaseSystem("Mauritius", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Mexican", "vara", 8.380000000000000E-01, "m","L", "1.0"));
          area.Add("fanega",   new UBASE("Mexican", "fanega", 3.566275929600000E+04, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Mexican", "libbra", 4.602463400000000E-01, "kg","M", "1.0"));
          liquid.Add("cuartillo(wine)",   new UBASE("Mexican", "cuartillo(wine)", 4.562640000000000E-04, "m3","L3", "1.0"));
          liquid.Add("cuartillo(oil)",   new UBASE("Mexican", "cuartillo(oil)", 5.061620000000000E-04, "m3","L3", "1.0"));
          dry.Add("cuartillo",   new UBASE("Mexican", "cuartillo", 1.891800000000000E-03, "m3","L3", "1.0"));
          _map.Add("Mexican",   new BaseSystem("Mexican", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("aldan",   new UBASE("Mozambican", "aldan", 1.600000000000000E+00, "m","L", "1.0"));
          area.Add("square-aldan",   new UBASE("Mozambican", "square-aldan", 2.560000000000000E+00, "m2","L2", "1.0"));
          mass.Add("bahar",   new UBASE("Mozambican", "bahar", 1.090000000000000E+02, "kg","M", "1.0"));
          liquid.Add("cubic-aldan",   new UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0"));
          dry.Add("cubic-aldan",   new UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0"));
          _map.Add("Mozambican",   new BaseSystem("Mozambican", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Moroccan", "pic", 6.100000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Moroccan", "square-pic", 3.721000000000000E-01, "m2","L2", "1.0"));
          mass.Add("rotal",   new UBASE("Moroccan", "rotal", 5.075000000000000E-01, "kg","M", "1.0"));
          liquid.Add("mud",   new UBASE("Moroccan", "mud", 1.400000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Moroccan", "cubic-pic", 2.269810000000000E-01, "m3","L3", "1.0"));
          _map.Add("Moroccan",   new BaseSystem("Moroccan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Nicaraguan", "vara", 8.128000000000000E-01, "m","L", "1.0"));
          area.Add("manzana",   new UBASE("Nicaraguan", "manzana", 6.988921041000000E+03, "m2","L2", "1.0"));
          mass.Add("fanega",   new UBASE("Nicaraguan", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
          liquid.Add("botella(nominal)",   new UBASE("Nicaraguan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(min)",   new UBASE("Nicaraguan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(max)",   new UBASE("Nicaraguan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Nicaraguan", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0"));
          _map.Add("Nicaraguan",   new BaseSystem("Nicaraguan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fod",   new UBASE("Norwegian", "fod", 3.137000000000000E-01, "m","L", "1.0"));
          area.Add("kvadrat-rode",   new UBASE("Norwegian", "kvadrat-rode", 9.840769000000000E+00, "m2","L2", "1.0"));
          mass.Add("skaalpund",   new UBASE("Norwegian", "skaalpund", 4.981000000000000E-01, "kg","M", "1.0"));
          liquid.Add("pot",   new UBASE("Norwegian", "pot", 9.651000000000000E-04, "m3","L3", "1.0"));
          dry.Add("korntonde",   new UBASE("Norwegian", "korntonde", 1.389744000000000E-01, "m3","L3", "1.0"));
          _map.Add("Norwegian",   new BaseSystem("Norwegian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Paraguayan", "vara", 8.660000000000000E-01, "m","L", "1.0"));
          length.Add("vara(old)",   new UBASE("Paraguayan", "vara(old)", 8.385600000000000E-01, "m","L", "1.0"));
          area.Add("lifio",   new UBASE("Paraguayan", "lifio", 7.499560000000000E+01, "m2","L2", "1.0"));
          area.Add("lifio(old)",   new UBASE("Paraguayan", "lifio(old)", 4.883605057152000E+03, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Paraguayan", "libbra", 4.590000000000000E-01, "kg","M", "1.0"));
          mass.Add("libbra(old)",   new UBASE("Paraguayan", "libbra(old)", 4.600800000000000E-01, "kg","M", "1.0"));
          liquid.Add("fanega",   new UBASE("Paraguayan", "fanega", 2.880000000000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Paraguayan", "cubic-vara", 6.494618960000000E-01, "m3","L3", "1.0"));
          _map.Add("Paraguayan",   new BaseSystem("Paraguayan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("zereth",   new UBASE("Persian", "zereth", 3.200000000000000E-01, "m","L", "1.0"));
          length.Add("farsakh",   new UBASE("Persian", "farsakh", 5.486400000000000E+03, "m","L", "1.0"));
          area.Add("gar",   new UBASE("Persian", "gar", 1.474560000000000E+01, "m2","L2", "1.0"));
          mass.Add("talent",   new UBASE("Persian", "talent", 3.260000000000000E+01, "kg","M", "1.0"));
          mass.Add("rottel",   new UBASE("Persian", "rottel", 4.600000000000000E-01, "kg","M", "1.0"));
          liquid.Add("sextario",   new UBASE("Persian", "sextario", 3.300000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("chenica",   new UBASE("Persian", "chenica", 1.320000000000000E-03, "m3","L3", "1.0"));
          dry.Add("amphora",   new UBASE("Persian", "amphora", 3.260000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Persian",   new BaseSystem("Persian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Peruvian", "vara", 8.359800000000000E-01, "m","L", "1.0"));
          length.Add("pie",   new UBASE("Peruvian", "pie", 2.786600000000000E-01, "m","L", "1.0"));
          area.Add("fanegada",   new UBASE("Peruvian", "fanegada", 3.144881521800000E+03, "m2","L2", "1.0"));
          area.Add("topo",   new UBASE("Peruvian", "topo", 2.705995833868800E+03, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Peruvian", "libbra", 4.600900000000000E-01, "kg","M", "1.0"));
          liquid.Add("cubic-vara",   new UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0"));
          _map.Add("Peruvian",   new BaseSystem("Peruvian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("talampakan",   new UBASE("Philippine", "talampakan", 3.048000000000000E-01, "m","L", "1.0"));
          area.Add("balita",   new UBASE("Philippine", "balita", 2.795000000000000E+03, "m2","L2", "1.0"));
          mass.Add("catty",   new UBASE("Philippine", "catty", 6.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("kaban",   new UBASE("Philippine", "kaban", 9.990000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-talampakan",   new UBASE("Philippine", "cubic-talampakan", 2.831684659200000E-02, "m3","L3", "1.0"));
          _map.Add("Philippine",   new BaseSystem("Philippine", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("stopa(new)",   new UBASE("Polish", "stopa(new)", 2.880000000000000E-01, "m","L", "1.0"));
          length.Add("stopa(Warsaw)",   new UBASE("Polish", "stopa(Warsaw)", 2.978000000000000E-01, "m","L", "1.0"));
          length.Add("stopa(Cracow)",   new UBASE("Polish", "stopa(Cracow)", 2.356400000000000E-01, "m","L", "1.0"));
          area.Add("square-stopa(new)",   new UBASE("Polish", "square-stopa(new)", 8.294400000000000E-02, "m2","L2", "1.0"));
          area.Add("square-stopa(Warsaw)",   new UBASE("Polish", "square-stopa(Warsaw)", 8.868484000000000E-02, "m2","L2", "1.0"));
          area.Add("square-stopa(Cracow)",   new UBASE("Polish", "square-stopa(Cracow)", 5.552620960000000E-02, "m2","L2", "1.0"));
          mass.Add("funt",   new UBASE("Polish", "funt", 4.055040000000000E-01, "kg","M", "1.0"));
          liquid.Add("kwarta",   new UBASE("Polish", "kwarta", 1.000000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-stopa",   new UBASE("Polish", "cubic-stopa", 2.388787200000000E-02, "m3","L3", "1.0"));
          _map.Add("Polish",   new BaseSystem("Polish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pe",   new UBASE("Portuguese", "pe", 3.285000000000000E-01, "m","L", "1.0"));
          area.Add("square-vera",   new UBASE("Portuguese", "square-vera", 1.199025000000000E+00, "m2","L2", "1.0"));
          mass.Add("libra",   new UBASE("Portuguese", "libra", 4.590000000000000E-01, "kg","M", "1.0"));
          liquid.Add("almude",   new UBASE("Portuguese", "almude", 1.650000000000000E-02, "m3","L3", "1.0"));
          dry.Add("fanga",   new UBASE("Portuguese", "fanga", 5.400000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Portuguese",   new BaseSystem("Portuguese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          area.Add("cuerda",   new UBASE("Puerto-Rican", "cuerda", 3.930395625000000E+03, "m2","L2", "1.0"));
          _map.Add("Puerto-Rican",   new BaseSystem("Puerto-Rican", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pes(common)",   new UBASE("Roman", "pes(common)", 2.944000000000000E-01, "m","L", "1.0"));
          length.Add("pes(1st-legal)",   new UBASE("Roman", "pes(1st-legal)", 2.962000000000000E-01, "m","L", "1.0"));
          length.Add("pes(2nd-legal)",   new UBASE("Roman", "pes(2nd-legal)", 2.967000000000000E-01, "m","L", "1.0"));
          length.Add("pes(Druisian)",   new UBASE("Roman", "pes(Druisian)", 3.196000000000000E-01, "m","L", "1.0"));
          area.Add("quadratus(common)",   new UBASE("Roman", "quadratus(common)", 8.667136000000000E-02, "m2","L2", "1.0"));
          area.Add("quadratus(1st-legal)",   new UBASE("Roman", "quadratus(1st-legal)", 8.773444000000000E-02, "m2","L2", "1.0"));
          area.Add("quadratus(2nd-legal)",   new UBASE("Roman", "quadratus(2nd-legal)", 8.803089000000000E-02, "m2","L2", "1.0"));
          area.Add("quadratus(Druisian)",   new UBASE("Roman", "quadratus(Druisian)", 1.021441600000000E-01, "m2","L2", "1.0"));
          mass.Add("uncia",   new UBASE("Roman", "uncia", 2.725000000000000E-02, "kg","M", "1.0"));
          liquid.Add("sextarius",   new UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3","L3", "1.0"));
          dry.Add("modius",   new UBASE("Roman", "modius", 8.788480000000000E-03, "m3","L3", "1.0"));
          _map.Add("Roman",   new BaseSystem("Roman", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("halibiu",   new UBASE("Romanian", "halibiu", 7.010000000000000E-01, "m","L", "1.0"));
          length.Add("palma",   new UBASE("Romanian", "palma", 2.500000000000000E-01, "m","L", "1.0"));
          area.Add("feredela",   new UBASE("Romanian", "feredela", 1.250000000000000E+00, "m2","L2", "1.0"));
          mass.Add("cantar",   new UBASE("Romanian", "cantar", 5.600000000000000E+01, "kg","M", "1.0"));
          mass.Add("font",   new UBASE("Romanian", "font", 5.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("viacka",   new UBASE("Romanian", "viacka", 1.415000000000000E-02, "m3","L3", "1.0"));
          liquid.Add("litra",   new UBASE("Romanian", "litra", 2.500000000000000E-04, "m3","L3", "1.0"));
          dry.Add("dimerla",   new UBASE("Romanian", "dimerla", 2.460000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Romanian",   new BaseSystem("Romanian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foute",   new UBASE("Russian", "foute", 3.048000000000000E-01, "m","L", "1.0"));
          mass.Add("funt",   new UBASE("Russian", "funt", 4.095171792456690E-01, "kg","M", "1.0"));
          mass.Add("doli",   new UBASE("Russian", "doli", 4.443494030000000E-05, "kg","M", "1.0"));
          liquid.Add("vedro",   new UBASE("Russian", "vedro", 1.229941000000000E-02, "m3","L3", "1.0"));
          dry.Add("garnetz",   new UBASE("Russian", "garnetz", 3.279842666666670E-03, "m3","L3", "1.0"));
          _map.Add("Russian",   new BaseSystem("Russian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Salvadoran", "vara", 8.128000000000000E-01, "m","L", "1.0"));
          area.Add("square-vara",   new UBASE("Salvadoran", "square-vara", 6.606438400000000E-01, "m2","L2", "1.0"));
          mass.Add("fanega",   new UBASE("Salvadoran", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
          liquid.Add("botella(nominal)",   new UBASE("Salvadoran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(min)",   new UBASE("Salvadoran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("botella(max)",   new UBASE("Salvadoran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Salvadoran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0"));
          _map.Add("Salvadoran",   new BaseSystem("Salvadoran", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("farsakh",   new UBASE("Saudi-Arabian", "farsakh", 4.830000000000000E+03, "m","L", "1.0"));
          area.Add("square-covid",   new UBASE("Saudi-Arabian", "square-covid", 2.323240000000000E-01, "m2","L2", "1.0"));
          mass.Add("maund",   new UBASE("Saudi-Arabian", "maund", 1.350000000000000E+00, "kg","M", "1.0"));
          liquid.Add("nusfiah",   new UBASE("Saudi-Arabian", "nusfiah", 9.500000000000000E-04, "m3","L3", "1.0"));
          dry.Add("teman",   new UBASE("Saudi-Arabian", "teman", 8.500000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Saudi-Arabian",   new BaseSystem("Saudi-Arabian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("foot(traditional)",   new UBASE("Scottish", "foot(traditional)", 3.064460845920000E-01, "m","L", "1.0"));
          length.Add("foot",   new UBASE("Scottish", "foot", 3.064500000000000E-01, "m","L", "1.0"));
          area.Add("square-foot",   new UBASE("Scottish", "square-foot", 9.390920276176720E-02, "m2","L2", "1.0"));
          mass.Add("pound",   new UBASE("Scottish", "pound", 6.168856232000000E-01, "kg","M", "1.0"));
          liquid.Add("gallon",   new UBASE("Scottish", "gallon", 1.355590372684800E-02, "m3","L3", "1.0"));
          liquid.Add("jug",   new UBASE("Scottish", "jug", 1.694918130000000E-03, "m3","L3", "1.0"));
          dry.Add("lippy(oat-barley-malt)",   new UBASE("Scottish", "lippy(oat-barley-malt)", 3.283066337080000E-03, "m3","L3", "1.0"));
          dry.Add("lippy(wheat-peas-beans-rice-salt)",   new UBASE("Scottish", "lippy(wheat-peas-beans-rice-salt)", 2.250484660312000E-03, "m3","L3", "1.0"));
          _map.Add("Scottish",   new BaseSystem("Scottish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("top",   new UBASE("Somalian", "top", 3.920000000000000E+00, "m","L", "1.0"));
          area.Add("darat",   new UBASE("Somalian", "darat", 8.000000000000000E+03, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Somalian", "rottolo", 4.480000000000000E-01, "kg","M", "1.0"));
          liquid.Add("chela",   new UBASE("Somalian", "chela", 1.359000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-top",   new UBASE("Somalian", "cubic-top", 6.023628800000000E+01, "m3","L3", "1.0"));
          _map.Add("Somalian",   new BaseSystem("Somalian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Spanish", "vara", 8.359050000000000E-01, "m","L", "1.0"));
          area.Add("square-vara",   new UBASE("Spanish", "square-vara", 6.987371690250000E-01, "m2","L2", "1.0"));
          mass.Add("libra",   new UBASE("Spanish", "libra", 4.600930000000000E-01, "kg","M", "1.0"));
          liquid.Add("arroba(water)",   new UBASE("Spanish", "arroba(water)", 1.564316200000000E-02, "m3","L3", "1.0"));
          liquid.Add("arroba(wine)",   new UBASE("Spanish", "arroba(wine)", 1.613300000000000E-02, "m3","L3", "1.0"));
          liquid.Add("arroba(oil)",   new UBASE("Spanish", "arroba(oil)", 1.256300000000000E-02, "m3","L3", "1.0"));
          dry.Add("fanega",   new UBASE("Spanish", "fanega", 5.550100000000000E-02, "m3","L3", "1.0"));
          _map.Add("Spanish",   new BaseSystem("Spanish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fot",   new UBASE("Swedish", "fot", 2.969000000000000E-01, "m","L", "1.0"));
          area.Add("kvadratfot",   new UBASE("Swedish", "kvadratfot", 8.814961000000000E-02, "m2","L2", "1.0"));
          mass.Add("skalpund",   new UBASE("Swedish", "skalpund", 4.250797024000000E-01, "kg","M", "1.0"));
          liquid.Add("kanna",   new UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0"));
          dry.Add("kanna",   new UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0"));
          _map.Add("Swedish",   new BaseSystem("Swedish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("fuss",   new UBASE("Swiss", "fuss", 3.000000000000000E-01, "m","L", "1.0"));
          length.Add("douzieme",   new UBASE("Swiss", "douzieme", 1.880000000000000E-04, "m","L", "1.0"));
          area.Add("arpent",   new UBASE("Swiss", "arpent", 3.600000000000000E+01, "m2","L2", "1.0"));
          mass.Add("livre",   new UBASE("Swiss", "livre", 5.000000000000000E-01, "kg","M", "1.0"));
          mass.Add("livre(apothecary)",   new UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg","M", "1.0"));
          liquid.Add("pot",   new UBASE("Swiss", "pot", 1.500000000000000E-03, "m3","L3", "1.0"));
          dry.Add("emine",   new UBASE("Swiss", "emine", 1.500000000000000E-02, "m3","L3", "1.0"));
          _map.Add("Swiss",   new BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Syrian", "pic", 5.820000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Syrian", "square-pic", 3.387240000000000E-01, "m2","L2", "1.0"));
          mass.Add("rottolo",   new UBASE("Syrian", "rottolo", 1.785000000000000E+00, "kg","M", "1.0"));
          liquid.Add("rotl",   new UBASE("Syrian", "rotl", 3.200000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Syrian", "cubic-pic", 1.971373680000000E-01, "m3","L3", "1.0"));
          _map.Add("Syrian",   new BaseSystem("Syrian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("wah",   new UBASE("Thai", "wah", 2.000000000000000E+00, "m","L", "1.0"));
          area.Add("square-wah",   new UBASE("Thai", "square-wah", 4.000000000000000E+00, "m2","L2", "1.0"));
          mass.Add("tchang",   new UBASE("Thai", "tchang", 1.200000000000000E+00, "kg","M", "1.0"));
          liquid.Add("tanan(nomial)",   new UBASE("Thai", "tanan(nomial)", 1.000000000000000E-03, "m3","L3", "1.0"));
          liquid.Add("tanan(min)",   new UBASE("Thai", "tanan(min)", 9.000000000000000E-04, "m3","L3", "1.0"));
          liquid.Add("tanan(max)",   new UBASE("Thai", "tanan(max)", 1.200000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-wah",   new UBASE("Thai", "cubic-wah", 8.000000000000000E+00, "m3","L3", "1.0"));
          _map.Add("Thai",   new BaseSystem("Thai", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic(Tunisian)",   new UBASE("Tunisian", "pic(Tunisian)", 5.625000000000000E-01, "m","L", "1.0"));
          length.Add("pic(Endezian)",   new UBASE("Tunisian", "pic(Endezian)", 6.730000000000000E-01, "m","L", "1.0"));
          length.Add("pic(Arabic)",   new UBASE("Tunisian", "pic(Arabic)", 4.880000000000000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Tunisian", "square-pic", 3.164062500000000E-01, "m2","L2", "1.0"));
          mass.Add("uckir",   new UBASE("Tunisian", "uckir", 3.149500000000000E-02, "kg","M", "1.0"));
          liquid.Add("cafisso",   new UBASE("Tunisian", "cafisso", 4.960000000000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Tunisian", "cubic-pic", 1.779785156250000E-01, "m3","L3", "1.0"));
          _map.Add("Tunisian",   new BaseSystem("Tunisian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pic",   new UBASE("Turkish", "pic", 7.553972464870000E-01, "m","L", "1.0"));
          area.Add("square-pic",   new UBASE("Turkish", "square-pic", 5.706250000001410E-01, "m2","L2", "1.0"));
          mass.Add("oka",   new UBASE("Turkish", "oka", 1.283000000000000E+00, "kg","M", "1.0"));
          liquid.Add("cubic-zira",   new UBASE("Turkish", "cubic-zira", 1.000000000000000E+00, "m3","L3", "1.0"));
          liquid.Add("fortin",   new UBASE("Turkish", "fortin", 4.000000000000000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-pic",   new UBASE("Turkish", "cubic-pic", 4.310485537767510E-01, "m3","L3", "1.0"));
          _map.Add("Turkish",   new BaseSystem("Turkish", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("hasch/altschin",   new UBASE("Turkmenian", "hasch/altschin", 7.112000000000000E-01, "m","L", "1.0"));
          area.Add("square-hasch",   new UBASE("Turkmenian", "square-hasch", 5.058054400000000E-01, "m2","L2", "1.0"));
          mass.Add("batman(nomial)",   new UBASE("Turkmenian", "batman(nomial)", 1.265000000000000E+02, "kg","M", "1.0"));
          mass.Add("batman(min)",   new UBASE("Turkmenian", "batman(min)", 1.250000000000000E+02, "kg","M", "1.0"));
          mass.Add("batman(max)",   new UBASE("Turkmenian", "batman(max)", 1.280000000000000E+02, "kg","M", "1.0"));
          liquid.Add("cubic-hasch",   new UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-hasch",   new UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0"));
          _map.Add("Turkmenian",   new BaseSystem("Turkmenian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("vara",   new UBASE("Venezuelan", "vara", 8.000000000000000E-01, "m","L", "1.0"));
          area.Add("square-vara",   new UBASE("Venezuelan", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0"));
          mass.Add("libbra",   new UBASE("Venezuelan", "libbra", 5.000000000000000E-01, "kg","M", "1.0"));
          liquid.Add("arroba",   new UBASE("Venezuelan", "arroba", 1.613700000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-vara",   new UBASE("Venezuelan", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0"));
          _map.Add("Venezuelan",   new BaseSystem("Venezuelan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("stopa",   new UBASE("Yugoslavian", "stopa", 3.160000000000000E-01, "m","L", "1.0"));
          area.Add("square-stopa",   new UBASE("Yugoslavian", "square-stopa", 9.985600000000000E-02, "m2","L2", "1.0"));
          mass.Add("oka",   new UBASE("Yugoslavian", "oka", 1.280000000000000E+00, "kg","M", "1.0"));
          liquid.Add("cubic-stopa",   new UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-stopa",   new UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0"));
          _map.Add("Yugoslavian",   new BaseSystem("Yugoslavian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("cape-foot",   new UBASE("South-African", "cape-foot", 3.148580000000000E-01, "m","L", "1.0"));
          length.Add("rijnlandse-voet",   new UBASE("South-African", "rijnlandse-voet", 3.139440000000000E-01, "m","L", "1.0"));
          area.Add("morgen",   new UBASE("South-African", "morgen", 8.565320000000000E+03, "m2","L2", "1.0"));
          mass.Add("pond",   new UBASE("South-African", "pond", 4.940903200000000E-01, "kg","M", "1.0"));
          liquid.Add("kanne",   new UBASE("South-African", "kanne", 1.329000000000000E-03, "m3","L3", "1.0"));
          liquid.Add("firkin",   new UBASE("South-African", "firkin", 4.091482800000000E-02, "m3","L3", "1.0"));
          dry.Add("schepel",   new UBASE("South-African", "schepel", 2.727500000000000E-02, "m3","L3", "1.0"));
          dry.Add("gantang",   new UBASE("South-African", "gantang", 9.200000000000000E-03, "m3","L3", "1.0"));
          _map.Add("South-African",   new BaseSystem("South-African", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          mass.Add("catty",   new UBASE("Far-East", "catty", 6.048000000000000E-01, "kg","M", "1.0"));
          _map.Add("Far-East",   new BaseSystem("Far-East", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pik",   new UBASE("East-Med", "pik", 7.112000000000000E-01, "m","L", "1.0"));
          length.Add("arshin",   new UBASE("East-Med", "arshin", 7.112000000000000E-01, "m","L", "1.0"));
          area.Add("square-pik",   new UBASE("East-Med", "square-pik", 5.058054400000000E-01, "m2","L2", "1.0"));
          area.Add("square-arshin",   new UBASE("East-Med", "square-arshin", 5.058054400000000E-01, "m2","L2", "1.0"));
          mass.Add("oka",   new UBASE("East-Med", "oka", 1.270058636000000E+00, "kg","M", "1.0"));
          liquid.Add("cubic-pik",   new UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0"));
          liquid.Add("krina",   new UBASE("East-Med", "krina", 2.000000000000000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-pik",   new UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0"));
          dry.Add("cubic-arshin",   new UBASE("East-Med", "cubic-arshin", 3.597288289280000E-01, "m3","L3", "1.0"));
          _map.Add("East-Med",   new BaseSystem("East-Med", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("taung",   new UBASE("Myanmar", "taung", 4.572000000000000E-01, "m","L", "1.0"));
          area.Add("square-taung",   new UBASE("Myanmar", "square-taung", 2.090318400000000E-01, "m2","L2", "1.0"));
          mass.Add("aseittha",   new UBASE("Myanmar", "aseittha", 4.082330000000000E-01, "kg","M", "1.0"));
          liquid.Add("hkwet",   new UBASE("Myanmar", "hkwet", 1.278590000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-taung",   new UBASE("Myanmar", "cubic-taung", 9.556935724800000E-02, "m3","L3", "1.0"));
          _map.Add("Myanmar",   new BaseSystem("Myanmar", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("palf",   new UBASE("Welsh", "palf", 3.048000000000000E-01, "m","L", "1.0"));
          area.Add("erw(Venedotian)",   new UBASE("Welsh", "erw(Venedotian)", 1.426990694400000E+03, "m2","L2", "1.0"));
          area.Add("erw(Dimetian)",   new UBASE("Welsh", "erw(Dimetian)", 8.561944166400000E+02, "m2","L2", "1.0"));
          mass.Add("pwys",   new UBASE("Welsh", "pwys", 4.535923380000000E-01, "kg","M", "1.0"));
          liquid.Add("hestawr",   new UBASE("Welsh", "hestawr", 7.047814033376000E-02, "m3","L3", "1.0"));
          dry.Add("cubic-palf",   new UBASE("Welsh", "cubic-palf", 2.831684659200000E-02, "m3","L3", "1.0"));
          _map.Add("Welsh",   new BaseSystem("Welsh", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("paramaanuwa",   new UBASE("Sri-Lankan", "paramaanuwa", 3.306670000000000E-08, "m","L", "1.0"));
          area.Add("laaha",   new UBASE("Sri-Lankan", "laaha", 4.598700000000000E+00, "m2","L2", "1.0"));
          mass.Add("gunja",   new UBASE("Sri-Lankan", "gunja", 1.200000000000000E-04, "kg","M", "1.0"));
          liquid.Add("seer",   new UBASE("Sri-Lankan", "seer", 1.135623535200000E-03, "m3","L3", "1.0"));
          dry.Add("seer",   new UBASE("Sri-Lankan", "seer", 7.062500000000000E-04, "m3","L3", "1.0"));
          _map.Add("Sri-Lankan",   new BaseSystem("Sri-Lankan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("rahf",   new UBASE("Malagasy", "rahf", 1.180084000000000E+00, "m","L", "1.0"));
          area.Add("square-rahf",   new UBASE("Malagasy", "square-rahf", 1.392598247056000E+00, "m2","L2", "1.0"));
          mass.Add("nanki",   new UBASE("Malagasy", "nanki", 6.479891000000000E-04, "kg","M", "1.0"));
          liquid.Add("cubic-rahf",   new UBASE("Malagasy", "cubic-rahf", 1.643382909778830E+00, "m3","L3", "1.0"));
          dry.Add("bambou",   new UBASE("Malagasy", "bambou", 2.001579185478780E-03, "m3","L3", "1.0"));
          _map.Add("Malagasy",   new BaseSystem("Malagasy", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("ohra",   new UBASE("Tanzanian", "ohra", 5.709920000000000E-01, "m","L", "1.0"));
          area.Add("square-ohra",   new UBASE("Tanzanian", "square-ohra", 3.260318640640000E-01, "m2","L2", "1.0"));
          mass.Add("mane",   new UBASE("Tanzanian", "mane", 9.104052458270000E-01, "kg","M", "1.0"));
          mass.Add("bazla",   new UBASE("Tanzanian", "bazla", 1.552465245562000E+01, "kg","M", "1.0"));
          mass.Add("franzella",   new UBASE("Tanzanian", "franzella", 1.600373671681400E+01, "kg","M", "1.0"));
          liquid.Add("cubic-ohra",   new UBASE("Tanzanian", "cubic-ohra", 1.861615861256320E-01, "m3","L3", "1.0"));
          dry.Add("djezla",   new UBASE("Tanzanian", "djezla", 2.574214075690580E-01, "m3","L3", "1.0"));
          _map.Add("Tanzanian",   new BaseSystem("Tanzanian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("gaz-i-shah",   new UBASE("Afghan", "gaz-i-shah", 1.065000000000000E+00, "m","L", "1.0"));
          area.Add("jareeb",   new UBASE("Afghan", "jareeb", 2.000000000000000E+03, "m2","L2", "1.0"));
          mass.Add("nakhud",   new UBASE("Afghan", "nakhud", 1.900000000000000E-04, "kg","M", "1.0"));
          mass.Add("seer",   new UBASE("Afghan", "seer", 7.066000000000000E+00, "kg","M", "1.0"));
          liquid.Add("cubic-gaz-i-shah",   new UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0"));
          dry.Add("cubic-gaz-i-shah",   new UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0"));
          _map.Add("Afghan",   new BaseSystem("Afghan", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("cheok",   new UBASE("Korean", "cheok", 3.030303030303030E-01, "m","L", "1.0"));
          area.Add("pyeong",   new UBASE("Korean", "pyeong", 3.305785123966940E+00, "m2","L2", "1.0"));
          mass.Add("gwan",   new UBASE("Korean", "gwan", 3.750000000000000E+00, "kg","M", "1.0"));
          liquid.Add("doe",   new UBASE("Korean", "doe", 1.803906836964690E-03, "m3","L3", "1.0"));
          dry.Add("cubic-cheok",   new UBASE("Korean", "cubic-cheok", 2.782647410746580E-02, "m3","L3", "1.0"));
          _map.Add("Korean",   new BaseSystem("Korean", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("muscat",   new UBASE("Omani", "muscat", 9.939020000000000E-01, "m","L", "1.0"));
          area.Add("square-muscat",   new UBASE("Omani", "square-muscat", 9.878411856040000E-01, "m2","L2", "1.0"));
          mass.Add("maund",   new UBASE("Omani", "maund", 3.968933237500000E+00, "kg","M", "1.0"));
          liquid.Add("ferren",   new UBASE("Omani", "ferren", 3.000090255291360E-02, "m3","L3", "1.0"));
          dry.Add("cubic-muscat",   new UBASE("Omani", "cubic-muscat", 9.818173300541870E-01, "m3","L3", "1.0"));
          _map.Add("Omani",   new BaseSystem("Omani", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("karam",   new UBASE("Pakistani", "karam", 1.676400000000000E+00, "m","L", "1.0"));
          area.Add("square-karam",   new UBASE("Pakistani", "square-karam", 2.810316960000000E+00, "m2","L2", "1.0"));
          mass.Add("tola",   new UBASE("Pakistani", "tola", 1.166375000000000E-02, "kg","M", "1.0"));
          liquid.Add("cubic-karam",   new UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0"));
          dry.Add("cubic-karam",   new UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0"));
          _map.Add("Pakistani",   new BaseSystem("Pakistani", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("chhioh",   new UBASE("Taiwanese", "chhioh", 3.030303030303030E-01, "m","L", "1.0"));
          area.Add("pe",   new UBASE("Taiwanese", "pe", 3.305785123966940E+00, "m2","L2", "1.0"));
          mass.Add("nu",   new UBASE("Taiwanese", "nu", 3.750000000000000E-02, "kg","M", "1.0"));
          liquid.Add("liter",   new UBASE("Taiwanese", "liter", 1.000000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-chhioh",   new UBASE("Taiwanese", "cubic-chhioh", 2.782647410746580E-02, "m3","L3", "1.0"));
          _map.Add("Taiwanese",   new BaseSystem("Taiwanese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("yaar",   new UBASE("Tamil", "yaar", 9.333123317760000E-01, "m","L", "1.0"));
          area.Add("cent",   new UBASE("Tamil", "cent", 4.046856422400000E+01, "m2","L2", "1.0"));
          mass.Add("palam",   new UBASE("Tamil", "palam", 4.800000000000000E-02, "kg","M", "1.0"));
          liquid.Add("padi",   new UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0"));
          dry.Add("padi",   new UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0"));
          _map.Add("Tamil",   new BaseSystem("Tamil", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("angul",   new UBASE("Nepalese", "angul", 1.905000000000000E-02, "m","L", "1.0"));
          area.Add("dam",   new UBASE("Nepalese", "dam", 1.987254090000000E+00, "m2","L2", "1.0"));
          area.Add("dhur",   new UBASE("Nepalese", "dhur", 1.693157904000000E+01, "m2","L2", "1.0"));
          mass.Add("tola",   new UBASE("Nepalese", "tola", 1.166000000000000E-02, "kg","M", "1.0"));
          mass.Add("pau",   new UBASE("Nepalese", "pau", 1.990000000000000E-01, "kg","M", "1.0"));
          liquid.Add("pathi",   new UBASE("Nepalese", "pathi", 4.545960000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-angul",   new UBASE("Nepalese", "cubic-angul", 6.913292625000000E-06, "m3","L3", "1.0"));
          _map.Add("Nepalese",   new BaseSystem("Nepalese", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("pous",   new UBASE("Byzantine", "pous", 3.085000000000000E-01, "m","L", "1.0"));
          area.Add("pous",   new UBASE("Byzantine", "pous", 9.517225000000000E-02, "m2","L2", "1.0"));
          mass.Add("ogkia",   new UBASE("Byzantine", "ogkia", 2.725000000000000E-02, "kg","M", "1.0"));
          liquid.Add("xestes",   new UBASE("Byzantine", "xestes", 5.492800000000000E-04, "m3","L3", "1.0"));
          dry.Add("cubic-pous",   new UBASE("Byzantine", "cubic-pous", 2.936063912500000E-02, "m3","L3", "1.0"));
          _map.Add("Byzantine",   new BaseSystem("Byzantine", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("sajin",   new UBASE("Tatar", "sajin", 2.133600000000000E+00, "m","L", "1.0"));
          area.Add("quadrat-sajin",   new UBASE("Tatar", "quadrat-sajin", 4.552248960000000E+00, "m2","L2", "1.0"));
          mass.Add("qadaq",   new UBASE("Tatar", "qadaq", 4.095000000000000E-01, "kg","M", "1.0"));
          liquid.Add("garnets",   new UBASE("Tatar", "garnets", 3.279733333333330E-03, "m3","L3", "1.0"));
          dry.Add("cubic-qadaq",   new UBASE("Tatar", "cubic-qadaq", 6.866915737500000E-02, "m3","L3", "1.0"));
          _map.Add("Tatar",   new BaseSystem("Tatar", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


          length.Add("kus",   new UBASE("Sumerian", "kus", 5.186000000000000E-01, "m","L", "1.0"));
          area.Add("gin",   new UBASE("Sumerian", "gin", 2.689459600000000E-01, "m2","L2", "1.0"));
          mass.Add("mana",   new UBASE("Sumerian", "mana", 5.040000000000000E-01, "kg","M", "1.0"));
          liquid.Add("sila",   new UBASE("Sumerian", "sila", 1.000000000000000E-03, "m3","L3", "1.0"));
          dry.Add("cubic-kus",   new UBASE("Sumerian", "cubic-kus", 1.394753748560000E-01, "m3","L3", "1.0"));
          _map.Add("Sumerian",   new BaseSystem("Sumerian", length, area, mass, liquid, dry, "1.0"));

          length.Clear();
          area.Clear();
          mass.Clear();
          liquid.Clear();
          dry.Clear();


      }


   }
}
// EOF
