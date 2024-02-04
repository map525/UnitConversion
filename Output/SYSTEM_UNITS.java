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
// File SYSTEM_UNITS.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class SYSTEM_UNITS extends SystemUnits
{
   private static SYSTEM_UNITS singleton_ = new SYSTEM_UNITS();

   public static SYSTEM_UNITS Instance()
   {
      return singleton_;
   }

   private SYSTEM_UNITS()
   {
       super("SystemUnits");
      HashMap<String, UBASE> length = new HashMap<String, UBASE>();
      HashMap<String, UBASE> area = new HashMap<String, UBASE>();
      HashMap<String, UBASE> mass = new HashMap<String, UBASE>();
      HashMap<String, UBASE> liquid = new HashMap<String, UBASE>();
      HashMap<String, UBASE> dry = new HashMap<String, UBASE>();

      length.put("au",   new UBASE("@", "au", 1.495978707000000E+11, "m","L", "1.0"));
      area.put("square-parsec",   new UBASE("@", "square-parsec", 9.521406136918410E+32, "m2","L2", "1.0"));
      mass.put("solar-mass",   new UBASE("@", "solar-mass", 1.988470000000000E+30, "kg","M", "1.0"));
      liquid.put("cubic-parsec",   new UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0"));
      dry.put("cubic-parsec",   new UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0"));
      _map.put("@",   new BaseSystem("@", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("bohr-radius",   new UBASE("a.u.", "bohr-radius", 5.291772109060850E-11, "m","L", "1.0"));
      area.put("atomic-cross-section",   new UBASE("a.u.", "atomic-cross-section", 8.797355429314450E-21, "m2","L2", "1.0"));
      mass.put("electron-mass",   new UBASE("a.u.", "electron-mass", 9.109383701500000E-31, "kg","M", "1.0"));
      liquid.put("atomic-volume",   new UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0"));
      dry.put("atomic-volume",   new UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0"));
      _map.put("a.u.",   new BaseSystem("a.u.", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      mass.put("pound(apothecary)",   new UBASE("UK_US_Apoth", "pound(apothecary)", 3.732417216000000E-01, "kg","M", "1.0"));
      _map.put("UK_US_Apoth",   new BaseSystem("UK_US_Apoth", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("UK", "foot", 3.048000000000000E-01, "m","L", "1.0"));
      length.put("foot(UK-old)",   new UBASE("UK", "foot(UK-old)", 3.047997347632710E-01, "m","L", "1.0"));
      area.put("square-foot",   new UBASE("UK", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
      mass.put("pound",   new UBASE("UK", "pound", 4.535923700000000E-01, "kg","M", "1.0"));
      mass.put("pound(UK-Imperial)",   new UBASE("UK", "pound(UK-Imperial)", 4.535923380000000E-01, "kg","M", "1.0"));
      liquid.put("gallon(UK)",   new UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0"));
      liquid.put("gallon(UK-beer)",   new UBASE("UK", "gallon(UK-beer)", 4.621152048000000E-03, "m3","L3", "1.0"));
      dry.put("gallon(UK)",   new UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0"));
      _map.put("UK",   new BaseSystem("UK", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("US", "foot", 3.048000000000000E-01, "m","L", "1.0"));
      length.put("vara(US-Texas)",   new UBASE("US", "vara(US-Texas)", 8.466666666666670E-01, "m","L", "1.0"));
      length.put("foot(US-survey)",   new UBASE("US", "foot(US-survey)", 3.048006096012190E-01, "m","L", "1.0"));
      area.put("square-foot",   new UBASE("US", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
      area.put("vara(US-Texas)",   new UBASE("US", "vara(US-Texas)", 7.168601466640000E+02, "m2","L2", "1.0"));
      mass.put("pound",   new UBASE("US", "pound", 4.535923700000000E-01, "kg","M", "1.0"));
      liquid.put("gallon(US)",   new UBASE("US", "gallon(US)", 3.785411784000000E-03, "m3","L3", "1.0"));
      dry.put("gallon(US)",   new UBASE("US", "gallon(US)", 4.404883770860000E-03, "m3","L3", "1.0"));
      _map.put("US",   new BaseSystem("US", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("CAN", "foot", 3.048000000000000E-01, "m","L", "1.0"));
      area.put("square-foot",   new UBASE("CAN", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
      mass.put("pound",   new UBASE("CAN", "pound", 4.535923380000000E-01, "kg","M", "1.0"));
      liquid.put("gallon",   new UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
      dry.put("gallon",   new UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
      _map.put("CAN",   new BaseSystem("CAN", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("centimeter",   new UBASE("cgs", "centimeter", 1.000000000000000E-02, "m","L", "1.0"));
      area.put("square-centimeter",   new UBASE("cgs", "square-centimeter", 1.000000000000000E-04, "m2","L2", "1.0"));
      mass.put("gram",   new UBASE("cgs", "gram", 1.000000000000000E-03, "kg","M", "1.0"));
      liquid.put("liter",   new UBASE("cgs", "liter", 1.000000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-centimeter",   new UBASE("cgs", "cubic-centimeter", 1.000000000000000E-06, "m3","L3", "1.0"));
      _map.put("cgs",   new BaseSystem("cgs", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("FPS", "foot", 3.048000000000000E-01, "m","L", "1.0"));
      area.put("square-foot",   new UBASE("FPS", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
      mass.put("pound",   new UBASE("FPS", "pound", 4.535923700000000E-01, "kg","M", "1.0"));
      liquid.put("gallon",   new UBASE("FPS", "gallon", 3.785411784000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-foot",   new UBASE("FPS", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0"));
      _map.put("FPS",   new BaseSystem("FPS", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("meter",   new UBASE("MKpS", "meter", 1.000000000000000E+00, "m","L", "1.0"));
      area.put("square-meter",   new UBASE("MKpS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0"));
      mass.put("hyl",   new UBASE("MKpS", "hyl", 9.806650000000000E+00, "kg","M", "1.0"));
      liquid.put("cubic-meter",   new UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
      dry.put("cubic-meter",   new UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
      _map.put("MKpS",   new BaseSystem("MKpS", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("meter",   new UBASE("MTS", "meter", 1.000000000000000E+00, "m","L", "1.0"));
      area.put("square-meter",   new UBASE("MTS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0"));
      mass.put("tonne",   new UBASE("MTS", "tonne", 1.000000000000000E+03, "kg","M", "1.0"));
      liquid.put("stere",   new UBASE("MTS", "stere", 1.000000000000000E+00, "m3","L3", "1.0"));
      dry.put("cubic-meter",   new UBASE("MTS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
      _map.put("MTS",   new BaseSystem("MTS", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("meter",   new UBASE("SI", "meter", 1.000000000000000E+00, "m","L", "1.0"));
      area.put("square-meter",   new UBASE("SI", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0"));
      mass.put("kilogram",   new UBASE("SI", "kilogram", 1.000000000000000E+00, "kg","M", "1.0"));
      liquid.put("cubic-meter",   new UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
      dry.put("cubic-meter",   new UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0"));
      _map.put("SI",   new BaseSystem("SI", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      mass.put("ounce",   new UBASE("Troy", "ounce", 3.110347680000000E-02, "kg","M", "1.0"));
      _map.put("Troy",   new BaseSystem("Troy", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("Imperial", "foot", 3.048000000000000E-01, "m","L", "1.0"));
      area.put("square-foot",   new UBASE("Imperial", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0"));
      mass.put("pound",   new UBASE("Imperial", "pound", 4.535923380000000E-01, "kg","M", "1.0"));
      liquid.put("gallon",   new UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
      dry.put("gallon",   new UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0"));
      _map.put("Imperial",   new BaseSystem("Imperial", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Abyssinian", "pic", 6.860000000000000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Abyssinian", "square-pic", 4.705960000000000E-01, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Abyssinian", "rottolo", 3.110000000000000E-01, "kg","M", "1.0"));
      liquid.put("madega",   new UBASE("Abyssinian", "madega", 4.400000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Abyssinian", "cubic-pic", 3.228288560000000E-01, "m3","L3", "1.0"));
      _map.put("Abyssinian",   new BaseSystem("Abyssinian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic(dzera-a-torky)",   new UBASE("Algerian", "pic(dzera-a-torky)", 6.230000000000000E-01, "m","L", "1.0"));
      length.put("pic(dzera-a-raby)",   new UBASE("Algerian", "pic(dzera-a-raby)", 4.670000000000000E-01, "m","L", "1.0"));
      area.put("square-pic(dzera-a-torky)",   new UBASE("Algerian", "square-pic(dzera-a-torky)", 3.881290000000000E-01, "m2","L2", "1.0"));
      area.put("square-pic(dzera-a-raby)",   new UBASE("Algerian", "square-pic(dzera-a-raby)", 2.180890000000000E-01, "m2","L2", "1.0"));
      mass.put("ukkia",   new UBASE("Algerian", "ukkia", 3.413000000000000E-02, "kg","M", "1.0"));
      liquid.put("khoul",   new UBASE("Algerian", "khoul", 1.666666666666670E-02, "m3","L3", "1.0"));
      liquid.put("metalli",   new UBASE("Algerian", "metalli", 1.790000000000000E-02, "m3","L3", "1.0"));
      dry.put("caffiso",   new UBASE("Algerian", "caffiso", 3.174700000000000E-01, "m3","L3", "1.0"));
      _map.put("Algerian",   new BaseSystem("Algerian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("thuoc-moc",   new UBASE("Annamese", "thuoc-moc", 4.250000000000000E-01, "m","L", "1.0"));
      length.put("thuoc-de-ruong",   new UBASE("Annamese", "thuoc-de-ruong", 4.700000000000000E-01, "m","L", "1.0"));
      length.put("thuoc-vai",   new UBASE("Annamese", "thuoc-vai", 6.440000000000000E-01, "m","L", "1.0"));
      length.put("ngu",   new UBASE("Annamese", "ngu", 2.000000000000000E+00, "m","L", "1.0"));
      area.put("square-ngu",   new UBASE("Annamese", "square-ngu", 5.522500000000000E+00, "m2","L2", "1.0"));
      area.put("thon",   new UBASE("Annamese", "thon", 2.400000000000000E+00, "m2","L2", "1.0"));
      mass.put("dong",   new UBASE("Annamese", "dong", 3.775000000000000E-03, "kg","M", "1.0"));
      liquid.put("hao",   new UBASE("Annamese", "hao", 2.826000000000000E-02, "m3","L3", "1.0"));
      liquid.put("dau",   new UBASE("Annamese", "dau", 1.000000000000000E-03, "m3","L3", "1.0"));
      liquid.put("thang(cochinchina)",   new UBASE("Annamese", "thang(cochinchina)", 2.766000000000000E-03, "m3","L3", "1.0"));
      dry.put("than",   new UBASE("Annamese", "than", 1.600000000000000E+00, "m3","L3", "1.0"));
      _map.put("Annamese",   new BaseSystem("Annamese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("Arabic", "foot", 3.200000000000000E-01, "m","L", "1.0"));
      area.put("feddan",   new UBASE("Arabic", "feddan", 5.898240000000000E+03, "m2","L2", "1.0"));
      mass.put("rotl",   new UBASE("Arabic", "rotl", 3.400000000000000E-01, "kg","M", "1.0"));
      liquid.put("sa",   new UBASE("Arabic", "sa", 4.212500000000000E-03, "m3","L3", "1.0"));
      dry.put("cafiz",   new UBASE("Arabic", "cafiz", 3.264000000000000E-02, "m3","L3", "1.0"));
      _map.put("Arabic",   new BaseSystem("Arabic", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Argentinian", "vara", 8.666000000000000E-01, "m","L", "1.0"));
      area.put("square-vara",   new UBASE("Argentinian", "square-vara", 7.509955600000000E-01, "m2","L2", "1.0"));
      mass.put("libra",   new UBASE("Argentinian", "libra", 4.594000000000000E-01, "kg","M", "1.0"));
      liquid.put("frasco",   new UBASE("Argentinian", "frasco", 2.375000000000000E-03, "m3","L3", "1.0"));
      dry.put("fanega",   new UBASE("Argentinian", "fanega", 1.371977000000000E-01, "m3","L3", "1.0"));
      _map.put("Argentinian",   new BaseSystem("Argentinian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pous",   new UBASE("Attic", "pous", 3.085600000000000E-01, "m","L", "1.0"));
      area.put("square-pous",   new UBASE("Attic", "square-pous", 9.520927360000000E-02, "m2","L2", "1.0"));
      mass.put("talent",   new UBASE("Attic", "talent", 2.592000000000000E+01, "kg","M", "1.0"));
      liquid.put("cotyle",   new UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("cotyle",   new UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("chenix",   new UBASE("Attic", "chenix", 1.080000000000000E-03, "m3","L3", "1.0"));
      _map.put("Attic",   new BaseSystem("Attic", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fuss",   new UBASE("Austrian", "fuss", 3.160800000000000E-01, "m","L", "1.0"));
      length.put("ell",   new UBASE("Austrian", "ell", 7.792000000000000E-01, "m","L", "1.0"));
      area.put("joch",   new UBASE("Austrian", "joch", 5.754618224640000E+03, "m2","L2", "1.0"));
      mass.put("pfund",   new UBASE("Austrian", "pfund", 5.600100000000000E-01, "kg","M", "1.0"));
      mass.put("pfund(apothecary)",   new UBASE("Austrian", "pfund(apothecary)", 4.200075000000000E-01, "kg","M", "1.0"));
      liquid.put("mass",   new UBASE("Austrian", "mass", 1.415100000000000E-03, "m3","L3", "1.0"));
      dry.put("metzel",   new UBASE("Austrian", "metzel", 6.148900000000000E-02, "m3","L3", "1.0"));
      _map.put("Austrian",   new BaseSystem("Austrian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("canna",   new UBASE("Belearic", "canna", 1.564000000000000E+00, "m","L", "1.0"));
      area.put("square-canna",   new UBASE("Belearic", "square-canna", 2.446096000000000E+00, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Belearic", "rottolo", 4.080000000000000E-01, "kg","M", "1.0"));
      liquid.put("quartera",   new UBASE("Belearic", "quartera", 7.197000000000000E-02, "m3","L3", "1.0"));
      dry.put("quartin",   new UBASE("Belearic", "quartin", 2.714000000000000E-02, "m3","L3", "1.0"));
      _map.put("Belearic",   new BaseSystem("Belearic", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("perche",   new UBASE("Belgian", "perche", 6.497000000000000E+00, "m","L", "1.0"));
      area.put("arpent",   new UBASE("Belgian", "arpent", 4.221100900000000E+01, "m2","L2", "1.0"));
      mass.put("livre",   new UBASE("Belgian", "livre", 4.895000000000000E-01, "kg","M", "1.0"));
      liquid.put("pot",   new UBASE("Belgian", "pot", 5.000000000000000E-04, "m3","L3", "1.0"));
      dry.put("pot",   new UBASE("Belgian", "pot", 1.500000000000000E-03, "m3","L3", "1.0"));
      _map.put("Belgian",   new BaseSystem("Belgian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pe",   new UBASE("Brazilian", "pe", 3.333333333333330E-01, "m","L", "1.0"));
      area.put("salamis(nominal)",   new UBASE("Brazilian", "salamis(nominal)", 4.537500000000000E+03, "m2","L2", "1.0"));
      area.put("salamis(min)",   new UBASE("Brazilian", "salamis(min)", 3.025000000000000E+03, "m2","L2", "1.0"));
      area.put("salamis(max)",   new UBASE("Brazilian", "salamis(max)", 6.050000000000000E+03, "m2","L2", "1.0"));
      area.put("tarefa(nominal)",   new UBASE("Brazilian", "tarefa(nominal)", 3.500000000000000E+03, "m2","L2", "1.0"));
      area.put("tarefa(min)",   new UBASE("Brazilian", "tarefa(min)", 3.000000000000000E+03, "m2","L2", "1.0"));
      area.put("tarefa(max)",   new UBASE("Brazilian", "tarefa(max)", 4.000000000000000E+03, "m2","L2", "1.0"));
      mass.put("libra",   new UBASE("Brazilian", "libra", 4.590500000000000E-01, "kg","M", "1.0"));
      liquid.put("alquiera",   new UBASE("Brazilian", "alquiera", 5.324000000000000E-03, "m3","L3", "1.0"));
      liquid.put("alquiera(Bahia)",   new UBASE("Brazilian", "alquiera(Bahia)", 3.524000000000000E-03, "m3","L3", "1.0"));
      liquid.put("alquiera(common)",   new UBASE("Brazilian", "alquiera(common)", 3.626000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-pe",   new UBASE("Brazilian", "cubic-pe", 3.703703703703700E-02, "m3","L3", "1.0"));
      dry.put("alquiera(salt)",   new UBASE("Brazilian", "alquiera(salt)", 4.076000000000000E-03, "m3","L3", "1.0"));
      _map.put("Brazilian",   new BaseSystem("Brazilian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("sandong",   new UBASE("Burmese", "sandong", 5.588000000000000E-01, "m","L", "1.0"));
      area.put("square-sandong",   new UBASE("Burmese", "square-sandong", 3.122574400000000E-01, "m2","L2", "1.0"));
      mass.put("catty",   new UBASE("Burmese", "catty", 5.440000000000000E-01, "kg","M", "1.0"));
      liquid.put("byee",   new UBASE("Burmese", "byee", 5.050000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-sandong",   new UBASE("Burmese", "cubic-sandong", 1.744894574720000E-01, "m3","L3", "1.0"));
      _map.put("Burmese",   new BaseSystem("Burmese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("muoi",   new UBASE("Cambodian", "muoi", 1.000000000000000E+00, "m","L", "1.0"));
      area.put("square-muoi",   new UBASE("Cambodian", "square-muoi", 1.000000000000000E+00, "m2","L2", "1.0"));
      mass.put("neal",   new UBASE("Cambodian", "neal", 6.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("sesep",   new UBASE("Cambodian", "sesep", 4.000000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-muoi",   new UBASE("Cambodian", "cubic-muoi", 1.000000000000000E+00, "m3","L3", "1.0"));
      _map.put("Cambodian",   new BaseSystem("Cambodian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("covid(Ceylon)",   new UBASE("Ceylonese", "covid(Ceylon)", 4.640000000000000E-01, "m","L", "1.0"));
      length.put("covid(Madras)",   new UBASE("Ceylonese", "covid(Madras)", 4.720000000000000E-01, "m","L", "1.0"));
      area.put("square-covid(Ceylon)",   new UBASE("Ceylonese", "square-covid(Ceylon)", 2.152960000000000E-01, "m2","L2", "1.0"));
      area.put("square-covid(Madras)",   new UBASE("Ceylonese", "square-covid(Madras)", 2.227840000000000E-01, "m2","L2", "1.0"));
      mass.put("seer",   new UBASE("Ceylonese", "seer", 2.834950000000000E-01, "kg","M", "1.0"));
      liquid.put("cubic-covid(Ceylon)",   new UBASE("Ceylonese", "cubic-covid(Ceylon)", 9.989734400000000E-02, "m3","L3", "1.0"));
      liquid.put("cubic-covid(Madras)",   new UBASE("Ceylonese", "cubic-covid(Madras)", 1.051540480000000E-01, "m3","L3", "1.0"));
      dry.put("chundroon",   new UBASE("Ceylonese", "chundroon", 2.649000000000000E-04, "m3","L3", "1.0"));
      _map.put("Ceylonese",   new BaseSystem("Ceylonese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("bara",   new UBASE("Chilean", "bara", 8.360000000000000E-01, "m","L", "1.0"));
      area.put("square-bara",   new UBASE("Chilean", "square-bara", 6.988960000000000E-01, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Chilean", "libbra", 4.600930000000000E-01, "kg","M", "1.0"));
      liquid.put("almude",   new UBASE("Chilean", "almude", 8.083000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-bara",   new UBASE("Chilean", "cubic-bara", 5.842770560000000E-01, "m3","L3", "1.0"));
      _map.put("Chilean",   new BaseSystem("Chilean", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("tchi",   new UBASE("Chinese", "tchi", 3.200000000000000E-01, "m","L", "1.0"));
      length.put("chek",   new UBASE("Chinese", "chek", 3.714750000000000E-01, "m","L", "1.0"));
      area.put("meou",   new UBASE("Chinese", "meou", 6.144000000000000E+02, "m2","L2", "1.0"));
      area.put("fang-chi",   new UBASE("Chinese", "fang-chi", 1.024000000000000E-01, "m2","L2", "1.0"));
      area.put("mau5",   new UBASE("Chinese", "mau5", 7.614000000000000E+02, "m2","L2", "1.0"));
      mass.put("jin",   new UBASE("Chinese", "jin", 5.968160000000000E-01, "kg","M", "1.0"));
      liquid.put("cheng",   new UBASE("Chinese", "cheng", 1.035468800000000E-03, "m3","L3", "1.0"));
      liquid.put("cyut3",   new UBASE("Chinese", "cyut3", 1.031000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-tchi",   new UBASE("Chinese", "cubic-tchi", 3.276800000000000E-02, "m3","L3", "1.0"));
      _map.put("Chinese",   new BaseSystem("Chinese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Colombian", "vara", 8.000000000000000E-01, "m","L", "1.0"));
      area.put("square-vara",   new UBASE("Colombian", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Colombian", "libbra", 5.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("cubic-vara",   new UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0"));
      _map.put("Colombian",   new BaseSystem("Colombian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Costa-Rican", "vara", 8.393000000000000E-01, "m","L", "1.0"));
      area.put("manzana",   new UBASE("Costa-Rican", "manzana", 7.044244900000000E+03, "m2","L2", "1.0"));
      mass.put("fanega",   new UBASE("Costa-Rican", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
      liquid.put("botella(nominal)",   new UBASE("Costa-Rican", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(min)",   new UBASE("Costa-Rican", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(max)",   new UBASE("Costa-Rican", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Costa-Rican", "cubic-vara", 5.912234744570000E-01, "m3","L3", "1.0"));
      _map.put("Costa-Rican",   new BaseSystem("Costa-Rican", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Cuban", "vara", 8.479536000000000E-01, "m","L", "1.0"));
      area.put("cabaliera",   new UBASE("Cuban", "cabaliera", 1.342020000000000E+05, "m2","L2", "1.0"));
      mass.put("libra",   new UBASE("Cuban", "libra", 4.608951746418000E-01, "kg","M", "1.0"));
      liquid.put("bocoy",   new UBASE("Cuban", "bocoy", 1.362700000000000E-01, "m3","L3", "1.0"));
      dry.put("fanega",   new UBASE("Cuban", "fanega", 5.634727319684110E-02, "m3","L3", "1.0"));
      _map.put("Cuban",   new BaseSystem("Cuban", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Cypriot", "pic", 6.096000000000000E-01, "m","L", "1.0"));
      area.put("scala",   new UBASE("Cypriot", "scala", 1.337803776000000E+03, "m2","L2", "1.0"));
      mass.put("oke",   new UBASE("Cypriot", "oke", 1.270058636000000E+00, "kg","M", "1.0"));
      liquid.put("oke",   new UBASE("Cypriot", "oke", 1.278550000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Cypriot", "cubic-pic", 2.265347727360000E-01, "m3","L3", "1.0"));
      _map.put("Cypriot",   new BaseSystem("Cypriot", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("stopa(Bohemian)",   new UBASE("Czech", "stopa(Bohemian)", 2.960000000000000E-01, "m","L", "1.0"));
      length.put("stopa(Praha)",   new UBASE("Czech", "stopa(Praha)", 2.965000000000000E-01, "m","L", "1.0"));
      length.put("stopa(Moravian)",   new UBASE("Czech", "stopa(Moravian)", 2.840000000000000E-01, "m","L", "1.0"));
      length.put("stopa(Silesian)",   new UBASE("Czech", "stopa(Silesian)", 2.895000000000000E-01, "m","L", "1.0"));
      area.put("merice",   new UBASE("Czech", "merice", 2.000000000000000E+03, "m2","L2", "1.0"));
      mass.put("quintal",   new UBASE("Czech", "quintal", 5.000000000000000E+01, "kg","M", "1.0"));
      liquid.put("merice",   new UBASE("Czech", "merice", 7.060000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-stopa(Bohemian)",   new UBASE("Czech", "cubic-stopa(Bohemian)", 2.593433600000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-stopa(Praha)",   new UBASE("Czech", "cubic-stopa(Praha)", 2.606598212500000E-02, "m3","L3", "1.0"));
      dry.put("cubic-stopa(Moravian)",   new UBASE("Czech", "cubic-stopa(Moravian)", 2.290630400000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-stopa(Silesian)",   new UBASE("Czech", "cubic-stopa(Silesian)", 2.426306737500000E-02, "m3","L3", "1.0"));
      _map.put("Czech",   new BaseSystem("Czech", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fod",   new UBASE("Danish", "fod", 3.138570000000000E-01, "m","L", "1.0"));
      length.put("danskmil",   new UBASE("Danish", "danskmil", 7.532500000000000E+03, "m","L", "1.0"));
      area.put("square-ruthe",   new UBASE("Danish", "square-ruthe", 1.418489516865600E+01, "m2","L2", "1.0"));
      area.put("tondelande",   new UBASE("Danish", "tondelande", 5.516230000000000E+03, "m2","L2", "1.0"));
      mass.put("pund",   new UBASE("Danish", "pund", 5.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("pott",   new UBASE("Danish", "pott", 9.661520492510560E-04, "m3","L3", "1.0"));
      dry.put("korntonde",   new UBASE("Danish", "korntonde", 1.391258950921520E-01, "m3","L3", "1.0"));
      _map.put("Danish",   new BaseSystem("Danish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("voeten",   new UBASE("Dutch", "voeten", 2.830594000000000E-01, "m","L", "1.0"));
      area.put("morgen",   new UBASE("Dutch", "morgen", 8.244346000000000E+03, "m2","L2", "1.0"));
      mass.put("pond(Amsterdam)",   new UBASE("Dutch", "pond(Amsterdam)", 4.940903200000000E-01, "kg","M", "1.0"));
      mass.put("pond(ordinary)",   new UBASE("Dutch", "pond(ordinary)", 4.921677200000000E-01, "kg","M", "1.0"));
      mass.put("pond(apothecary)",   new UBASE("Dutch", "pond(apothecary)", 3.691257900000000E-01, "kg","M", "1.0"));
      liquid.put("mingelen",   new UBASE("Dutch", "mingelen", 1.200000000000000E-03, "m3","L3", "1.0"));
      dry.put("schepel",   new UBASE("Dutch", "schepel", 2.726000000000000E-02, "m3","L3", "1.0"));
      _map.put("Dutch",   new BaseSystem("Dutch", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("derah(royal-cubit)",   new UBASE("Egyptian", "derah(royal-cubit)", 5.235000000000000E-01, "m","L", "1.0"));
      length.put("diraa",   new UBASE("Egyptian", "diraa", 5.800000000000000E-01, "m","L", "1.0"));
      length.put("derah(cubit)",   new UBASE("Egyptian", "derah(cubit)", 4.495800000000000E-01, "m","L", "1.0"));
      length.put("palm(short)",   new UBASE("Egyptian", "palm(short)", 7.485714286000000E-02, "m","L", "1.0"));
      area.put("pekeis",   new UBASE("Egyptian", "pekeis", 2.740522500000000E+01, "m2","L2", "1.0"));
      area.put("feddan-masri",   new UBASE("Egyptian", "feddan-masri", 4.200080000000000E+03, "m2","L2", "1.0"));
      mass.put("deben",   new UBASE("Egyptian", "deben", 1.365000000000000E-02, "kg","M", "1.0"));
      mass.put("oke",   new UBASE("Egyptian", "oke", 1.248000000000000E+00, "kg","M", "1.0"));
      liquid.put("keddah",   new UBASE("Egyptian", "keddah", 2.062500000000000E-03, "m3","L3", "1.0"));
      dry.put("khar",   new UBASE("Egyptian", "khar", 3.400000000000000E-02, "m3","L3", "1.0"));
      _map.put("Egyptian",   new BaseSystem("Egyptian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("cubi",   new UBASE("Eritrean", "cubi", 3.200000000000000E-01, "m","L", "1.0"));
      area.put("square-cubi",   new UBASE("Eritrean", "square-cubi", 1.024000000000000E-01, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Eritrean", "rottolo", 4.480000000000000E-01, "kg","M", "1.0"));
      liquid.put("messe",   new UBASE("Eritrean", "messe", 1.500000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-cubi",   new UBASE("Eritrean", "cubic-cubi", 3.276800000000000E-02, "m3","L3", "1.0"));
      _map.put("Eritrean",   new BaseSystem("Eritrean", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("arshine",   new UBASE("Estonian", "arshine", 3.071120000000000E+01, "m","L", "1.0"));
      area.put("lofstelle",   new UBASE("Estonian", "lofstelle", 1.855000000000000E+03, "m2","L2", "1.0"));
      area.put("tonnland",   new UBASE("Estonian", "tonnland", 5.462700000000000E+03, "m2","L2", "1.0"));
      mass.put("pfund",   new UBASE("Estonian", "pfund", 4.600000000000000E-01, "kg","M", "1.0"));
      liquid.put("hulmit",   new UBASE("Estonian", "hulmit", 1.148000000000000E-02, "m3","L3", "1.0"));
      liquid.put("kulimet",   new UBASE("Estonian", "kulimet", 1.150161280000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-elle",   new UBASE("Estonian", "cubic-elle", 9.619307168929790E+02, "m3","L3", "1.0"));
      _map.put("Estonian",   new BaseSystem("Estonian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("kend",   new UBASE("Ethiopian", "kend", 4.900000000000000E-01, "m","L", "1.0"));
      area.put("square-kend",   new UBASE("Ethiopian", "square-kend", 2.401000000000000E-01, "m2","L2", "1.0"));
      mass.put("farasula(ivory)",   new UBASE("Ethiopian", "farasula(ivory)", 1.347840000000000E+01, "kg","M", "1.0"));
      mass.put("farasula(coffee)",   new UBASE("Ethiopian", "farasula(coffee)", 1.684800000000000E+01, "kg","M", "1.0"));
      mass.put("farasula(rubber)",   new UBASE("Ethiopian", "farasula(rubber)", 1.797120000000000E+01, "kg","M", "1.0"));
      liquid.put("kuba",   new UBASE("Ethiopian", "kuba", 1.016000000000000E-03, "m3","L3", "1.0"));
      dry.put("madega",   new UBASE("Ethiopian", "madega", 4.400000000000000E-04, "m3","L3", "1.0"));
      _map.put("Ethiopian",   new BaseSystem("Ethiopian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("jalka",   new UBASE("Finnish", "jalka", 2.969000000000000E-01, "m","L", "1.0"));
      area.put("kannunala",   new UBASE("Finnish", "kannunala", 8.814961000000000E+01, "m2","L2", "1.0"));
      mass.put("naula",   new UBASE("Finnish", "naula", 4.250797024000000E-01, "kg","M", "1.0"));
      liquid.put("tunna",   new UBASE("Finnish", "tunna", 1.634900000000000E-01, "m3","L3", "1.0"));
      liquid.put("tuoppi",   new UBASE("Finnish", "tuoppi", 1.308580960450000E-03, "m3","L3", "1.0"));
      dry.put("tuoppi",   new UBASE("Finnish", "tuoppi", 1.327400000000000E-03, "m3","L3", "1.0"));
      _map.put("Finnish",   new BaseSystem("Finnish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("toise",   new UBASE("French", "toise", 1.949036500200000E+00, "m","L", "1.0"));
      length.put("pied(metric)",   new UBASE("French", "pied(metric)", 3.333333333333330E-01, "m","L", "1.0"));
      length.put("pied(de-Paris/du-Roi)",   new UBASE("French", "pied(de-Paris/du-Roi)", 3.248394167000000E-01, "m","L", "1.0"));
      length.put("bourgeois",   new UBASE("French", "bourgeois", 3.175000000000000E-03, "m","L", "1.0"));
      length.put("canne(Provence)",   new UBASE("French", "canne(Provence)", 1.968500000000000E+00, "m","L", "1.0"));
      length.put("point-didot",   new UBASE("French", "point-didot", 3.759715471075000E-04, "m","L", "1.0"));
      length.put("pied(commum)",   new UBASE("French", "pied(commum)", 2.236067977500000E-01, "m","L", "1.0"));
      length.put("pied(d'ordonance)",   new UBASE("French", "pied(d'ordonance)", 3.248400000000000E-01, "m","L", "1.0"));
      length.put("toise(du-Chatelet)",   new UBASE("French", "toise(du-Chatelet)", 1.949090000000000E+00, "m","L", "1.0"));
      area.put("pied-carre",   new UBASE("French", "pied-carre", 1.055206466419960E-01, "m2","L2", "1.0"));
      area.put("journal(Nantes)",   new UBASE("French", "journal(Nantes)", 2.671000000000000E+03, "m2","L2", "1.0"));
      area.put("ares",   new UBASE("French", "ares", 1.000000000000000E+02, "m2","L2", "1.0"));
      area.put("exots(Agen)",   new UBASE("French", "exots(Agen)", 1.687500000000000E+01, "m2","L2", "1.0"));
      area.put("dextres(Montpellier)",   new UBASE("French", "dextres(Montpellier)", 1.920000000000000E+01, "m2","L2", "1.0"));
      area.put("corterade(Montpellier)",   new UBASE("French", "corterade(Montpellier)", 2.877000000000000E+03, "m2","L2", "1.0"));
      area.put("journal(Bretagne)",   new UBASE("French", "journal(Bretagne)", 4.863000000000000E+03, "m2","L2", "1.0"));
      area.put("becheree(Lyonnais)",   new UBASE("French", "becheree(Lyonnais)", 1.367000000000000E+03, "m2","L2", "1.0"));
      area.put("journal(Lyonnais)",   new UBASE("French", "journal(Lyonnais)", 4.000000000000000E+03, "m2","L2", "1.0"));
      mass.put("livre(de-Paris)",   new UBASE("French", "livre(de-Paris)", 4.895058500000000E-01, "kg","M", "1.0"));
      mass.put("livre(Charlemange)",   new UBASE("French", "livre(Charlemange)", 3.671280000000000E-01, "kg","M", "1.0"));
      mass.put("livre(metric)",   new UBASE("French", "livre(metric)", 1.000000000000000E+00, "kg","M", "1.0"));
      liquid.put("pinte",   new UBASE("French", "pinte", 9.521462584750000E-04, "m3","L3", "1.0"));
      liquid.put("chopine(Provence-wine)",   new UBASE("French", "chopine(Provence-wine)", 2.299250000000000E-04, "m3","L3", "1.0"));
      liquid.put("liter(old)",   new UBASE("French", "liter(old)", 1.000002800100000E-03, "m3","L3", "1.0"));
      dry.put("setier",   new UBASE("French", "setier", 1.516800000000000E-01, "m3","L3", "1.0"));
      dry.put("picotins",   new UBASE("French", "picotins", 3.125000000000000E-03, "m3","L3", "1.0"));
      _map.put("French",   new BaseSystem("French", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fuss",   new UBASE("German", "fuss", 3.138570000000000E-01, "m","L", "1.0"));
      area.put("klafter",   new UBASE("German", "klafter", 1.440020334575000E+02, "m2","L2", "1.0"));
      mass.put("pfund",   new UBASE("German", "pfund", 4.677110000000000E-01, "kg","M", "1.0"));
      mass.put("zollpfund",   new UBASE("German", "zollpfund", 5.144821000000000E-01, "kg","M", "1.0"));
      liquid.put("quart",   new UBASE("German", "quart", 1.145069095408660E-03, "m3","L3", "1.0"));
      dry.put("metzen",   new UBASE("German", "metzen", 3.705960000000000E-02, "m3","L3", "1.0"));
      dry.put("metze",   new UBASE("German", "metze", 3.435890000000000E-03, "m3","L3", "1.0"));
      _map.put("German",   new BaseSystem("German", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("piki(short)",   new UBASE("Greek", "piki(short)", 6.480000000000000E-01, "m","L", "1.0"));
      length.put("piki(long)",   new UBASE("Greek", "piki(long)", 6.690000000000000E-01, "m","L", "1.0"));
      length.put("piki(mansonary)",   new UBASE("Greek", "piki(mansonary)", 7.500000000000000E-01, "m","L", "1.0"));
      length.put("amma",   new UBASE("Greek", "amma", 2.100000000000000E+01, "m","L", "1.0"));
      area.put("stremma",   new UBASE("Greek", "stremma", 1.000000000000000E+03, "m2","L2", "1.0"));
      mass.put("oka",   new UBASE("Greek", "oka", 1.280000000000000E+00, "kg","M", "1.0"));
      liquid.put("oka(average)",   new UBASE("Greek", "oka(average)", 1.336500000000000E-03, "m3","L3", "1.0"));
      liquid.put("baril",   new UBASE("Greek", "baril", 7.423600000000000E-02, "m3","L3", "1.0"));
      dry.put("sexte",   new UBASE("Greek", "sexte", 5.400000000000000E-04, "m3","L3", "1.0"));
      _map.put("Greek",   new BaseSystem("Greek", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Guatemalan", "vara", 8.359000000000000E-01, "m","L", "1.0"));
      area.put("manzana",   new UBASE("Guatemalan", "manzana", 6.987288100000000E+03, "m2","L2", "1.0"));
      mass.put("fanega",   new UBASE("Guatemalan", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
      liquid.put("botella(nominal)",   new UBASE("Guatemalan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(min)",   new UBASE("Guatemalan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(max)",   new UBASE("Guatemalan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-vera",   new UBASE("Guatemalan", "cubic-vera", 5.840674122790000E-01, "m3","L3", "1.0"));
      _map.put("Guatemalan",   new BaseSystem("Guatemalan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Guinean", "pic", 5.780000000000000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Guinean", "square-pic", 3.340840000000000E-01, "m2","L2", "1.0"));
      mass.put("benda",   new UBASE("Guinean", "benda", 6.420000000000000E-02, "kg","M", "1.0"));
      liquid.put("cubic-pic",   new UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0"));
      _map.put("Guinean",   new BaseSystem("Guinean", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("toise",   new UBASE("Haitian", "toise", 1.948800000000000E+00, "m","L", "1.0"));
      area.put("carreau",   new UBASE("Haitian", "carreau", 1.292300000000000E+03, "m2","L2", "1.0"));
      mass.put("gwo-mamit",   new UBASE("Haitian", "gwo-mamit", 1.700000000000000E+00, "kg","M", "1.0"));
      liquid.put("baril",   new UBASE("Haitian", "baril", 1.000000000000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-toise",   new UBASE("Haitian", "cubic-toise", 7.401194422272000E+00, "m3","L3", "1.0"));
      _map.put("Haitian",   new BaseSystem("Haitian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("cubit",   new UBASE("Hebrew", "cubit", 5.550000000000000E-01, "m","L", "1.0"));
      length.put("cubit(acared)",   new UBASE("Hebrew", "cubit(acared)", 6.400000000000000E-01, "m","L", "1.0"));
      area.put("geris",   new UBASE("Hebrew", "geris", 3.141592653589790E-04, "m2","L2", "1.0"));
      mass.put("mina(sacred)",   new UBASE("Hebrew", "mina(sacred)", 8.500000000000000E-01, "kg","M", "1.0"));
      mass.put("mina(Talmudic)",   new UBASE("Hebrew", "mina(Talmudic)", 3.542000000000000E-01, "kg","M", "1.0"));
      liquid.put("bath(old)",   new UBASE("Hebrew", "bath(old)", 2.937600000000000E-02, "m3","L3", "1.0"));
      liquid.put("bath(new)",   new UBASE("Hebrew", "bath(new)", 2.142000000000000E-02, "m3","L3", "1.0"));
      dry.put("ephah(old)",   new UBASE("Hebrew", "ephah(old)", 2.937600000000000E-02, "m3","L3", "1.0"));
      dry.put("ephah(new)",   new UBASE("Hebrew", "ephah(new)", 2.142000000000000E-02, "m3","L3", "1.0"));
      _map.put("Hebrew",   new BaseSystem("Hebrew", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Honduran", "vara", 8.128000000000000E-01, "m","L", "1.0"));
      area.put("manzana",   new UBASE("Honduran", "manzana", 6.606438400000000E+04, "m2","L2", "1.0"));
      mass.put("fanega",   new UBASE("Honduran", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
      liquid.put("botella(nominal)",   new UBASE("Honduran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(min)",   new UBASE("Honduran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(max)",   new UBASE("Honduran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Honduran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0"));
      _map.put("Honduran",   new BaseSystem("Honduran", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("faust",   new UBASE("Hungarian", "faust", 1.053600000000000E-01, "m","L", "1.0"));
      area.put("square-meile",   new UBASE("Hungarian", "square-meile", 6.978262126496050E+07, "m2","L2", "1.0"));
      mass.put("oka",   new UBASE("Hungarian", "oka", 1.329479142678000E+00, "kg","M", "1.0"));
      liquid.put("eimer",   new UBASE("Hungarian", "eimer", 5.430000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-faust",   new UBASE("Hungarian", "cubic-faust", 1.169572870656000E-03, "m3","L3", "1.0"));
      _map.put("Hungarian",   new BaseSystem("Hungarian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fet",   new UBASE("Icelandic", "fet", 3.138570000000000E-01, "m","L", "1.0"));
      area.put("ferfaomur",   new UBASE("Icelandic", "ferfaomur", 3.546223792164000E+00, "m2","L2", "1.0"));
      mass.put("pund",   new UBASE("Icelandic", "pund", 5.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("cubic-fet",   new UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3","L3", "1.0"));
      dry.put("pottar",   new UBASE("Icelandic", "pottar", 9.661520492510560E-04, "m3","L3", "1.0"));
      _map.put("Icelandic",   new BaseSystem("Icelandic", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("hasta",   new UBASE("Indian", "hasta", 4.570000000000000E-01, "m","L", "1.0"));
      length.put("guz(Bombay)",   new UBASE("Indian", "guz(Bombay)", 6.858000000000000E-01, "m","L", "1.0"));
      length.put("guz(Calcutta)",   new UBASE("Indian", "guz(Calcutta)", 9.150000000000000E-01, "m","L", "1.0"));
      area.put("cawnie",   new UBASE("Indian", "cawnie", 5.400000000000000E+02, "m2","L2", "1.0"));
      area.put("square-guz(Bombay)",   new UBASE("Indian", "square-guz(Bombay)", 4.703216400000000E-01, "m2","L2", "1.0"));
      area.put("square-guz(Calcutta)",   new UBASE("Indian", "square-guz(Calcutta)", 8.372250000000000E-01, "m2","L2", "1.0"));
      area.put("ground",   new UBASE("Indian", "ground", 2.030000000000000E+01, "m2","L2", "1.0"));
      area.put("kani",   new UBASE("Indian", "kani", 3.075000000000000E+02, "m2","L2", "1.0"));
      area.put("chahar",   new UBASE("Indian", "chahar", 2.962000000000000E-02, "m2","L2", "1.0"));
      mass.put("pala",   new UBASE("Indian", "pala", 4.700000000000000E-02, "kg","M", "1.0"));
      mass.put("seer",   new UBASE("Indian", "seer", 9.330400000000000E-01, "kg","M", "1.0"));
      mass.put("drona",   new UBASE("Indian", "drona", 1.320000000000000E+01, "kg","M", "1.0"));
      liquid.put("parah",   new UBASE("Indian", "parah", 1.101000000000000E-01, "m3","L3", "1.0"));
      dry.put("drona",   new UBASE("Indian", "drona", 1.320000000000000E-02, "m3","L3", "1.0"));
      dry.put("seer",   new UBASE("Indian", "seer", 1.000000000000000E-03, "m3","L3", "1.0"));
      _map.put("Indian",   new BaseSystem("Indian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("depa",   new UBASE("Indonesian", "depa", 1.700000000000000E+00, "m","L", "1.0"));
      area.put("bahoe",   new UBASE("Indonesian", "bahoe", 7.096500000000000E+03, "m2","L2", "1.0"));
      mass.put("picul",   new UBASE("Indonesian", "picul", 6.176130250000000E+01, "kg","M", "1.0"));
      mass.put("thail(precious-metal)",   new UBASE("Indonesian", "thail(precious-metal)", 5.409000000000000E+01, "kg","M", "1.0"));
      mass.put("thail(opium)",   new UBASE("Indonesian", "thail(opium)", 3.860100000000000E+01, "kg","M", "1.0"));
      liquid.put("kan",   new UBASE("Indonesian", "kan", 1.575100000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-depa",   new UBASE("Indonesian", "cubic-depa", 4.913000000000000E+00, "m3","L3", "1.0"));
      _map.put("Indonesian",   new BaseSystem("Indonesian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot",   new UBASE("Irish", "foot", 3.048000000000000E-01, "m","L", "1.0"));
      length.put("troighid",   new UBASE("Irish", "troighid", 2.500000000000000E-01, "m","L", "1.0"));
      area.put("achar",   new UBASE("Irish", "achar", 4.046856422400000E+03, "m2","L2", "1.0"));
      mass.put("penginn",   new UBASE("Irish", "penginn", 4.000000000000000E-04, "kg","M", "1.0"));
      liquid.put("gallon",   new UBASE("Irish", "gallon", 3.565825126400000E-03, "m3","L3", "1.0"));
      liquid.put("meisrin",   new UBASE("Irish", "meisrin", 6.600000000000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-foot",   new UBASE("Irish", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0"));
      dry.put("cubic-troighid",   new UBASE("Irish", "cubic-troighid", 1.562500000000000E-02, "m3","L3", "1.0"));
      _map.put("Irish",   new BaseSystem("Irish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("piedi-liprando",   new UBASE("Italian", "piedi-liprando", 5.137700000000000E-01, "m","L", "1.0"));
      area.put("giornata",   new UBASE("Italian", "giornata", 3.800000000000000E+03, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Italian", "libbra", 3.070000000000000E-01, "kg","M", "1.0"));
      liquid.put("barile(Florence-oil)",   new UBASE("Italian", "barile(Florence-oil)", 3.343000000000000E-02, "m3","L3", "1.0"));
      liquid.put("barile(Florence-wine)",   new UBASE("Italian", "barile(Florence-wine)", 4.560000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-piedi-liprando",   new UBASE("Italian", "cubic-piedi-liprando", 1.356145303196330E-01, "m3","L3", "1.0"));
      _map.put("Italian",   new BaseSystem("Italian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("shaku",   new UBASE("Japanese", "shaku", 3.030303030303030E-01, "m","L", "1.0"));
      area.put("tsubo",   new UBASE("Japanese", "tsubo", 3.305785123966940E+00, "m2","L2", "1.0"));
      mass.put("kwan",   new UBASE("Japanese", "kwan", 3.750000000000000E+00, "kg","M", "1.0"));
      mass.put("tael",   new UBASE("Japanese", "tael", 3.751000000000000E-02, "kg","M", "1.0"));
      liquid.put("sho",   new UBASE("Japanese", "sho", 1.803906836964690E-03, "m3","L3", "1.0"));
      dry.put("cubic-shaku",   new UBASE("Japanese", "cubic-shaku", 2.782647410746580E-02, "m3","L3", "1.0"));
      _map.put("Japanese",   new BaseSystem("Japanese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("elle",   new UBASE("Latvian", "elle", 5.370000000000000E-01, "m","L", "1.0"));
      area.put("kapp",   new UBASE("Latvian", "kapp", 1.486400000000000E+02, "m2","L2", "1.0"));
      mass.put("pfund",   new UBASE("Latvian", "pfund", 4.190000000000000E-01, "kg","M", "1.0"));
      liquid.put("stoof",   new UBASE("Latvian", "stoof", 1.275200000000000E-03, "m3","L3", "1.0"));
      liquid.put("faden",   new UBASE("Latvian", "faden", 4.077000000000000E+00, "m3","L3", "1.0"));
      dry.put("kulmet",   new UBASE("Latvian", "kulmet", 1.091062080000000E-02, "m3","L3", "1.0"));
      _map.put("Latvian",   new BaseSystem("Latvian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Libyan", "pic", 6.800000000000000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Libyan", "square-pic", 4.624000000000000E-01, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Libyan", "rottolo", 5.128000000000000E-01, "kg","M", "1.0"));
      liquid.put("barile",   new UBASE("Libyan", "barile", 6.249750000000000E-02, "m3","L3", "1.0"));
      dry.put("orba",   new UBASE("Libyan", "orba", 7.692000000000000E-03, "m3","L3", "1.0"));
      _map.put("Libyan",   new BaseSystem("Libyan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("canna",   new UBASE("Maltese", "canna", 2.088000000000000E+00, "m","L", "1.0"));
      area.put("qasba-kwadra",   new UBASE("Maltese", "qasba-kwadra", 4.359744000000000E+00, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Maltese", "rottolo", 7.937900000000000E-01, "kg","M", "1.0"));
      liquid.put("salma",   new UBASE("Maltese", "salma", 2.909440000000000E+02, "m3","L3", "1.0"));
      liquid.put("baril",   new UBASE("Maltese", "baril", 4.316200000000000E+01, "m3","L3", "1.0"));
      liquid.put("caffiso",   new UBASE("Maltese", "caffiso", 2.045700000000000E+01, "m3","L3", "1.0"));
      dry.put("tomna",   new UBASE("Maltese", "tomna", 1.818436800000000E-02, "m3","L3", "1.0"));
      _map.put("Maltese",   new BaseSystem("Maltese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      liquid.put("cash",   new UBASE("Mauritius", "cash", 2.271100000000000E-01, "m3","L3", "1.0"));
      _map.put("Mauritius",   new BaseSystem("Mauritius", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Mexican", "vara", 8.380000000000000E-01, "m","L", "1.0"));
      area.put("fanega",   new UBASE("Mexican", "fanega", 3.566275929600000E+04, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Mexican", "libbra", 4.602463400000000E-01, "kg","M", "1.0"));
      liquid.put("cuartillo(wine)",   new UBASE("Mexican", "cuartillo(wine)", 4.562640000000000E-04, "m3","L3", "1.0"));
      liquid.put("cuartillo(oil)",   new UBASE("Mexican", "cuartillo(oil)", 5.061620000000000E-04, "m3","L3", "1.0"));
      dry.put("cuartillo",   new UBASE("Mexican", "cuartillo", 1.891800000000000E-03, "m3","L3", "1.0"));
      _map.put("Mexican",   new BaseSystem("Mexican", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("aldan",   new UBASE("Mozambican", "aldan", 1.600000000000000E+00, "m","L", "1.0"));
      area.put("square-aldan",   new UBASE("Mozambican", "square-aldan", 2.560000000000000E+00, "m2","L2", "1.0"));
      mass.put("bahar",   new UBASE("Mozambican", "bahar", 1.090000000000000E+02, "kg","M", "1.0"));
      liquid.put("cubic-aldan",   new UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0"));
      dry.put("cubic-aldan",   new UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0"));
      _map.put("Mozambican",   new BaseSystem("Mozambican", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Moroccan", "pic", 6.100000000000000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Moroccan", "square-pic", 3.721000000000000E-01, "m2","L2", "1.0"));
      mass.put("rotal",   new UBASE("Moroccan", "rotal", 5.075000000000000E-01, "kg","M", "1.0"));
      liquid.put("mud",   new UBASE("Moroccan", "mud", 1.400000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Moroccan", "cubic-pic", 2.269810000000000E-01, "m3","L3", "1.0"));
      _map.put("Moroccan",   new BaseSystem("Moroccan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Nicaraguan", "vara", 8.128000000000000E-01, "m","L", "1.0"));
      area.put("manzana",   new UBASE("Nicaraguan", "manzana", 6.988921041000000E+03, "m2","L2", "1.0"));
      mass.put("fanega",   new UBASE("Nicaraguan", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
      liquid.put("botella(nominal)",   new UBASE("Nicaraguan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(min)",   new UBASE("Nicaraguan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(max)",   new UBASE("Nicaraguan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Nicaraguan", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0"));
      _map.put("Nicaraguan",   new BaseSystem("Nicaraguan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fod",   new UBASE("Norwegian", "fod", 3.137000000000000E-01, "m","L", "1.0"));
      area.put("kvadrat-rode",   new UBASE("Norwegian", "kvadrat-rode", 9.840769000000000E+00, "m2","L2", "1.0"));
      mass.put("skaalpund",   new UBASE("Norwegian", "skaalpund", 4.981000000000000E-01, "kg","M", "1.0"));
      liquid.put("pot",   new UBASE("Norwegian", "pot", 9.651000000000000E-04, "m3","L3", "1.0"));
      dry.put("korntonde",   new UBASE("Norwegian", "korntonde", 1.389744000000000E-01, "m3","L3", "1.0"));
      _map.put("Norwegian",   new BaseSystem("Norwegian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Paraguayan", "vara", 8.660000000000000E-01, "m","L", "1.0"));
      length.put("vara(old)",   new UBASE("Paraguayan", "vara(old)", 8.385600000000000E-01, "m","L", "1.0"));
      area.put("lifio",   new UBASE("Paraguayan", "lifio", 7.499560000000000E+01, "m2","L2", "1.0"));
      area.put("lifio(old)",   new UBASE("Paraguayan", "lifio(old)", 4.883605057152000E+03, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Paraguayan", "libbra", 4.590000000000000E-01, "kg","M", "1.0"));
      mass.put("libbra(old)",   new UBASE("Paraguayan", "libbra(old)", 4.600800000000000E-01, "kg","M", "1.0"));
      liquid.put("fanega",   new UBASE("Paraguayan", "fanega", 2.880000000000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Paraguayan", "cubic-vara", 6.494618960000000E-01, "m3","L3", "1.0"));
      _map.put("Paraguayan",   new BaseSystem("Paraguayan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("zereth",   new UBASE("Persian", "zereth", 3.200000000000000E-01, "m","L", "1.0"));
      length.put("farsakh",   new UBASE("Persian", "farsakh", 5.486400000000000E+03, "m","L", "1.0"));
      area.put("gar",   new UBASE("Persian", "gar", 1.474560000000000E+01, "m2","L2", "1.0"));
      mass.put("talent",   new UBASE("Persian", "talent", 3.260000000000000E+01, "kg","M", "1.0"));
      mass.put("rottel",   new UBASE("Persian", "rottel", 4.600000000000000E-01, "kg","M", "1.0"));
      liquid.put("sextario",   new UBASE("Persian", "sextario", 3.300000000000000E-04, "m3","L3", "1.0"));
      liquid.put("chenica",   new UBASE("Persian", "chenica", 1.320000000000000E-03, "m3","L3", "1.0"));
      dry.put("amphora",   new UBASE("Persian", "amphora", 3.260000000000000E-02, "m3","L3", "1.0"));
      _map.put("Persian",   new BaseSystem("Persian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Peruvian", "vara", 8.359800000000000E-01, "m","L", "1.0"));
      length.put("pie",   new UBASE("Peruvian", "pie", 2.786600000000000E-01, "m","L", "1.0"));
      area.put("fanegada",   new UBASE("Peruvian", "fanegada", 3.144881521800000E+03, "m2","L2", "1.0"));
      area.put("topo",   new UBASE("Peruvian", "topo", 2.705995833868800E+03, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Peruvian", "libbra", 4.600900000000000E-01, "kg","M", "1.0"));
      liquid.put("cubic-vara",   new UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0"));
      _map.put("Peruvian",   new BaseSystem("Peruvian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("talampakan",   new UBASE("Philippine", "talampakan", 3.048000000000000E-01, "m","L", "1.0"));
      area.put("balita",   new UBASE("Philippine", "balita", 2.795000000000000E+03, "m2","L2", "1.0"));
      mass.put("catty",   new UBASE("Philippine", "catty", 6.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("kaban",   new UBASE("Philippine", "kaban", 9.990000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-talampakan",   new UBASE("Philippine", "cubic-talampakan", 2.831684659200000E-02, "m3","L3", "1.0"));
      _map.put("Philippine",   new BaseSystem("Philippine", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("stopa(new)",   new UBASE("Polish", "stopa(new)", 2.880000000000000E-01, "m","L", "1.0"));
      length.put("stopa(Warsaw)",   new UBASE("Polish", "stopa(Warsaw)", 2.978000000000000E-01, "m","L", "1.0"));
      length.put("stopa(Cracow)",   new UBASE("Polish", "stopa(Cracow)", 2.356400000000000E-01, "m","L", "1.0"));
      area.put("square-stopa(new)",   new UBASE("Polish", "square-stopa(new)", 8.294400000000000E-02, "m2","L2", "1.0"));
      area.put("square-stopa(Warsaw)",   new UBASE("Polish", "square-stopa(Warsaw)", 8.868484000000000E-02, "m2","L2", "1.0"));
      area.put("square-stopa(Cracow)",   new UBASE("Polish", "square-stopa(Cracow)", 5.552620960000000E-02, "m2","L2", "1.0"));
      mass.put("funt",   new UBASE("Polish", "funt", 4.055040000000000E-01, "kg","M", "1.0"));
      liquid.put("kwarta",   new UBASE("Polish", "kwarta", 1.000000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-stopa",   new UBASE("Polish", "cubic-stopa", 2.388787200000000E-02, "m3","L3", "1.0"));
      _map.put("Polish",   new BaseSystem("Polish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pe",   new UBASE("Portuguese", "pe", 3.285000000000000E-01, "m","L", "1.0"));
      area.put("square-vera",   new UBASE("Portuguese", "square-vera", 1.199025000000000E+00, "m2","L2", "1.0"));
      mass.put("libra",   new UBASE("Portuguese", "libra", 4.590000000000000E-01, "kg","M", "1.0"));
      liquid.put("almude",   new UBASE("Portuguese", "almude", 1.650000000000000E-02, "m3","L3", "1.0"));
      dry.put("fanga",   new UBASE("Portuguese", "fanga", 5.400000000000000E-02, "m3","L3", "1.0"));
      _map.put("Portuguese",   new BaseSystem("Portuguese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      area.put("cuerda",   new UBASE("Puerto-Rican", "cuerda", 3.930395625000000E+03, "m2","L2", "1.0"));
      _map.put("Puerto-Rican",   new BaseSystem("Puerto-Rican", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pes(common)",   new UBASE("Roman", "pes(common)", 2.944000000000000E-01, "m","L", "1.0"));
      length.put("pes(1st-legal)",   new UBASE("Roman", "pes(1st-legal)", 2.962000000000000E-01, "m","L", "1.0"));
      length.put("pes(2nd-legal)",   new UBASE("Roman", "pes(2nd-legal)", 2.967000000000000E-01, "m","L", "1.0"));
      length.put("pes(Druisian)",   new UBASE("Roman", "pes(Druisian)", 3.196000000000000E-01, "m","L", "1.0"));
      area.put("quadratus(common)",   new UBASE("Roman", "quadratus(common)", 8.667136000000000E-02, "m2","L2", "1.0"));
      area.put("quadratus(1st-legal)",   new UBASE("Roman", "quadratus(1st-legal)", 8.773444000000000E-02, "m2","L2", "1.0"));
      area.put("quadratus(2nd-legal)",   new UBASE("Roman", "quadratus(2nd-legal)", 8.803089000000000E-02, "m2","L2", "1.0"));
      area.put("quadratus(Druisian)",   new UBASE("Roman", "quadratus(Druisian)", 1.021441600000000E-01, "m2","L2", "1.0"));
      mass.put("uncia",   new UBASE("Roman", "uncia", 2.725000000000000E-02, "kg","M", "1.0"));
      liquid.put("sextarius",   new UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3","L3", "1.0"));
      dry.put("modius",   new UBASE("Roman", "modius", 8.788480000000000E-03, "m3","L3", "1.0"));
      _map.put("Roman",   new BaseSystem("Roman", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("halibiu",   new UBASE("Romanian", "halibiu", 7.010000000000000E-01, "m","L", "1.0"));
      length.put("palma",   new UBASE("Romanian", "palma", 2.500000000000000E-01, "m","L", "1.0"));
      area.put("feredela",   new UBASE("Romanian", "feredela", 1.250000000000000E+00, "m2","L2", "1.0"));
      mass.put("cantar",   new UBASE("Romanian", "cantar", 5.600000000000000E+01, "kg","M", "1.0"));
      mass.put("font",   new UBASE("Romanian", "font", 5.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("viacka",   new UBASE("Romanian", "viacka", 1.415000000000000E-02, "m3","L3", "1.0"));
      liquid.put("litra",   new UBASE("Romanian", "litra", 2.500000000000000E-04, "m3","L3", "1.0"));
      dry.put("dimerla",   new UBASE("Romanian", "dimerla", 2.460000000000000E-02, "m3","L3", "1.0"));
      _map.put("Romanian",   new BaseSystem("Romanian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foute",   new UBASE("Russian", "foute", 3.048000000000000E-01, "m","L", "1.0"));
      mass.put("funt",   new UBASE("Russian", "funt", 4.095171792456690E-01, "kg","M", "1.0"));
      mass.put("doli",   new UBASE("Russian", "doli", 4.443494030000000E-05, "kg","M", "1.0"));
      liquid.put("vedro",   new UBASE("Russian", "vedro", 1.229941000000000E-02, "m3","L3", "1.0"));
      dry.put("garnetz",   new UBASE("Russian", "garnetz", 3.279842666666670E-03, "m3","L3", "1.0"));
      _map.put("Russian",   new BaseSystem("Russian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Salvadoran", "vara", 8.128000000000000E-01, "m","L", "1.0"));
      area.put("square-vara",   new UBASE("Salvadoran", "square-vara", 6.606438400000000E-01, "m2","L2", "1.0"));
      mass.put("fanega",   new UBASE("Salvadoran", "fanega", 9.200000000000000E+01, "kg","M", "1.0"));
      liquid.put("botella(nominal)",   new UBASE("Salvadoran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(min)",   new UBASE("Salvadoran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0"));
      liquid.put("botella(max)",   new UBASE("Salvadoran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Salvadoran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0"));
      _map.put("Salvadoran",   new BaseSystem("Salvadoran", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("farsakh",   new UBASE("Saudi-Arabian", "farsakh", 4.830000000000000E+03, "m","L", "1.0"));
      area.put("square-covid",   new UBASE("Saudi-Arabian", "square-covid", 2.323240000000000E-01, "m2","L2", "1.0"));
      mass.put("maund",   new UBASE("Saudi-Arabian", "maund", 1.350000000000000E+00, "kg","M", "1.0"));
      liquid.put("nusfiah",   new UBASE("Saudi-Arabian", "nusfiah", 9.500000000000000E-04, "m3","L3", "1.0"));
      dry.put("teman",   new UBASE("Saudi-Arabian", "teman", 8.500000000000000E-02, "m3","L3", "1.0"));
      _map.put("Saudi-Arabian",   new BaseSystem("Saudi-Arabian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("foot(traditional)",   new UBASE("Scottish", "foot(traditional)", 3.064460845920000E-01, "m","L", "1.0"));
      length.put("foot",   new UBASE("Scottish", "foot", 3.064500000000000E-01, "m","L", "1.0"));
      area.put("square-foot",   new UBASE("Scottish", "square-foot", 9.390920276176720E-02, "m2","L2", "1.0"));
      mass.put("pound",   new UBASE("Scottish", "pound", 6.168856232000000E-01, "kg","M", "1.0"));
      liquid.put("gallon",   new UBASE("Scottish", "gallon", 1.355590372684800E-02, "m3","L3", "1.0"));
      liquid.put("jug",   new UBASE("Scottish", "jug", 1.694918130000000E-03, "m3","L3", "1.0"));
      dry.put("lippy(oat-barley-malt)",   new UBASE("Scottish", "lippy(oat-barley-malt)", 3.283066337080000E-03, "m3","L3", "1.0"));
      dry.put("lippy(wheat-peas-beans-rice-salt)",   new UBASE("Scottish", "lippy(wheat-peas-beans-rice-salt)", 2.250484660312000E-03, "m3","L3", "1.0"));
      _map.put("Scottish",   new BaseSystem("Scottish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("top",   new UBASE("Somalian", "top", 3.920000000000000E+00, "m","L", "1.0"));
      area.put("darat",   new UBASE("Somalian", "darat", 8.000000000000000E+03, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Somalian", "rottolo", 4.480000000000000E-01, "kg","M", "1.0"));
      liquid.put("chela",   new UBASE("Somalian", "chela", 1.359000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-top",   new UBASE("Somalian", "cubic-top", 6.023628800000000E+01, "m3","L3", "1.0"));
      _map.put("Somalian",   new BaseSystem("Somalian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Spanish", "vara", 8.359050000000000E-01, "m","L", "1.0"));
      area.put("square-vara",   new UBASE("Spanish", "square-vara", 6.987371690250000E-01, "m2","L2", "1.0"));
      mass.put("libra",   new UBASE("Spanish", "libra", 4.600930000000000E-01, "kg","M", "1.0"));
      liquid.put("arroba(water)",   new UBASE("Spanish", "arroba(water)", 1.564316200000000E-02, "m3","L3", "1.0"));
      liquid.put("arroba(wine)",   new UBASE("Spanish", "arroba(wine)", 1.613300000000000E-02, "m3","L3", "1.0"));
      liquid.put("arroba(oil)",   new UBASE("Spanish", "arroba(oil)", 1.256300000000000E-02, "m3","L3", "1.0"));
      dry.put("fanega",   new UBASE("Spanish", "fanega", 5.550100000000000E-02, "m3","L3", "1.0"));
      _map.put("Spanish",   new BaseSystem("Spanish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fot",   new UBASE("Swedish", "fot", 2.969000000000000E-01, "m","L", "1.0"));
      area.put("kvadratfot",   new UBASE("Swedish", "kvadratfot", 8.814961000000000E-02, "m2","L2", "1.0"));
      mass.put("skalpund",   new UBASE("Swedish", "skalpund", 4.250797024000000E-01, "kg","M", "1.0"));
      liquid.put("kanna",   new UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0"));
      dry.put("kanna",   new UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0"));
      _map.put("Swedish",   new BaseSystem("Swedish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("fuss",   new UBASE("Swiss", "fuss", 3.000000000000000E-01, "m","L", "1.0"));
      length.put("douzieme",   new UBASE("Swiss", "douzieme", 1.880000000000000E-04, "m","L", "1.0"));
      area.put("arpent",   new UBASE("Swiss", "arpent", 3.600000000000000E+01, "m2","L2", "1.0"));
      mass.put("livre",   new UBASE("Swiss", "livre", 5.000000000000000E-01, "kg","M", "1.0"));
      mass.put("livre(apothecary)",   new UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg","M", "1.0"));
      liquid.put("pot",   new UBASE("Swiss", "pot", 1.500000000000000E-03, "m3","L3", "1.0"));
      dry.put("emine",   new UBASE("Swiss", "emine", 1.500000000000000E-02, "m3","L3", "1.0"));
      _map.put("Swiss",   new BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Syrian", "pic", 5.820000000000000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Syrian", "square-pic", 3.387240000000000E-01, "m2","L2", "1.0"));
      mass.put("rottolo",   new UBASE("Syrian", "rottolo", 1.785000000000000E+00, "kg","M", "1.0"));
      liquid.put("rotl",   new UBASE("Syrian", "rotl", 3.200000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Syrian", "cubic-pic", 1.971373680000000E-01, "m3","L3", "1.0"));
      _map.put("Syrian",   new BaseSystem("Syrian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("wah",   new UBASE("Thai", "wah", 2.000000000000000E+00, "m","L", "1.0"));
      area.put("square-wah",   new UBASE("Thai", "square-wah", 4.000000000000000E+00, "m2","L2", "1.0"));
      mass.put("tchang",   new UBASE("Thai", "tchang", 1.200000000000000E+00, "kg","M", "1.0"));
      liquid.put("tanan(nomial)",   new UBASE("Thai", "tanan(nomial)", 1.000000000000000E-03, "m3","L3", "1.0"));
      liquid.put("tanan(min)",   new UBASE("Thai", "tanan(min)", 9.000000000000000E-04, "m3","L3", "1.0"));
      liquid.put("tanan(max)",   new UBASE("Thai", "tanan(max)", 1.200000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-wah",   new UBASE("Thai", "cubic-wah", 8.000000000000000E+00, "m3","L3", "1.0"));
      _map.put("Thai",   new BaseSystem("Thai", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic(Tunisian)",   new UBASE("Tunisian", "pic(Tunisian)", 5.625000000000000E-01, "m","L", "1.0"));
      length.put("pic(Endezian)",   new UBASE("Tunisian", "pic(Endezian)", 6.730000000000000E-01, "m","L", "1.0"));
      length.put("pic(Arabic)",   new UBASE("Tunisian", "pic(Arabic)", 4.880000000000000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Tunisian", "square-pic", 3.164062500000000E-01, "m2","L2", "1.0"));
      mass.put("uckir",   new UBASE("Tunisian", "uckir", 3.149500000000000E-02, "kg","M", "1.0"));
      liquid.put("cafisso",   new UBASE("Tunisian", "cafisso", 4.960000000000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Tunisian", "cubic-pic", 1.779785156250000E-01, "m3","L3", "1.0"));
      _map.put("Tunisian",   new BaseSystem("Tunisian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pic",   new UBASE("Turkish", "pic", 7.553972464870000E-01, "m","L", "1.0"));
      area.put("square-pic",   new UBASE("Turkish", "square-pic", 5.706250000001410E-01, "m2","L2", "1.0"));
      mass.put("oka",   new UBASE("Turkish", "oka", 1.283000000000000E+00, "kg","M", "1.0"));
      liquid.put("cubic-zira",   new UBASE("Turkish", "cubic-zira", 1.000000000000000E+00, "m3","L3", "1.0"));
      liquid.put("fortin",   new UBASE("Turkish", "fortin", 4.000000000000000E-01, "m3","L3", "1.0"));
      dry.put("cubic-pic",   new UBASE("Turkish", "cubic-pic", 4.310485537767510E-01, "m3","L3", "1.0"));
      _map.put("Turkish",   new BaseSystem("Turkish", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("hasch/altschin",   new UBASE("Turkmenian", "hasch/altschin", 7.112000000000000E-01, "m","L", "1.0"));
      area.put("square-hasch",   new UBASE("Turkmenian", "square-hasch", 5.058054400000000E-01, "m2","L2", "1.0"));
      mass.put("batman(nomial)",   new UBASE("Turkmenian", "batman(nomial)", 1.265000000000000E+02, "kg","M", "1.0"));
      mass.put("batman(min)",   new UBASE("Turkmenian", "batman(min)", 1.250000000000000E+02, "kg","M", "1.0"));
      mass.put("batman(max)",   new UBASE("Turkmenian", "batman(max)", 1.280000000000000E+02, "kg","M", "1.0"));
      liquid.put("cubic-hasch",   new UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0"));
      dry.put("cubic-hasch",   new UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0"));
      _map.put("Turkmenian",   new BaseSystem("Turkmenian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("vara",   new UBASE("Venezuelan", "vara", 8.000000000000000E-01, "m","L", "1.0"));
      area.put("square-vara",   new UBASE("Venezuelan", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0"));
      mass.put("libbra",   new UBASE("Venezuelan", "libbra", 5.000000000000000E-01, "kg","M", "1.0"));
      liquid.put("arroba",   new UBASE("Venezuelan", "arroba", 1.613700000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-vara",   new UBASE("Venezuelan", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0"));
      _map.put("Venezuelan",   new BaseSystem("Venezuelan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("stopa",   new UBASE("Yugoslavian", "stopa", 3.160000000000000E-01, "m","L", "1.0"));
      area.put("square-stopa",   new UBASE("Yugoslavian", "square-stopa", 9.985600000000000E-02, "m2","L2", "1.0"));
      mass.put("oka",   new UBASE("Yugoslavian", "oka", 1.280000000000000E+00, "kg","M", "1.0"));
      liquid.put("cubic-stopa",   new UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-stopa",   new UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0"));
      _map.put("Yugoslavian",   new BaseSystem("Yugoslavian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("cape-foot",   new UBASE("South-African", "cape-foot", 3.148580000000000E-01, "m","L", "1.0"));
      length.put("rijnlandse-voet",   new UBASE("South-African", "rijnlandse-voet", 3.139440000000000E-01, "m","L", "1.0"));
      area.put("morgen",   new UBASE("South-African", "morgen", 8.565320000000000E+03, "m2","L2", "1.0"));
      mass.put("pond",   new UBASE("South-African", "pond", 4.940903200000000E-01, "kg","M", "1.0"));
      liquid.put("kanne",   new UBASE("South-African", "kanne", 1.329000000000000E-03, "m3","L3", "1.0"));
      liquid.put("firkin",   new UBASE("South-African", "firkin", 4.091482800000000E-02, "m3","L3", "1.0"));
      dry.put("schepel",   new UBASE("South-African", "schepel", 2.727500000000000E-02, "m3","L3", "1.0"));
      dry.put("gantang",   new UBASE("South-African", "gantang", 9.200000000000000E-03, "m3","L3", "1.0"));
      _map.put("South-African",   new BaseSystem("South-African", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      mass.put("catty",   new UBASE("Far-East", "catty", 6.048000000000000E-01, "kg","M", "1.0"));
      _map.put("Far-East",   new BaseSystem("Far-East", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pik",   new UBASE("East-Med", "pik", 7.112000000000000E-01, "m","L", "1.0"));
      length.put("arshin",   new UBASE("East-Med", "arshin", 7.112000000000000E-01, "m","L", "1.0"));
      area.put("square-pik",   new UBASE("East-Med", "square-pik", 5.058054400000000E-01, "m2","L2", "1.0"));
      area.put("square-arshin",   new UBASE("East-Med", "square-arshin", 5.058054400000000E-01, "m2","L2", "1.0"));
      mass.put("oka",   new UBASE("East-Med", "oka", 1.270058636000000E+00, "kg","M", "1.0"));
      liquid.put("cubic-pik",   new UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0"));
      liquid.put("krina",   new UBASE("East-Med", "krina", 2.000000000000000E-02, "m3","L3", "1.0"));
      dry.put("cubic-pik",   new UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0"));
      dry.put("cubic-arshin",   new UBASE("East-Med", "cubic-arshin", 3.597288289280000E-01, "m3","L3", "1.0"));
      _map.put("East-Med",   new BaseSystem("East-Med", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("taung",   new UBASE("Myanmar", "taung", 4.572000000000000E-01, "m","L", "1.0"));
      area.put("square-taung",   new UBASE("Myanmar", "square-taung", 2.090318400000000E-01, "m2","L2", "1.0"));
      mass.put("aseittha",   new UBASE("Myanmar", "aseittha", 4.082330000000000E-01, "kg","M", "1.0"));
      liquid.put("hkwet",   new UBASE("Myanmar", "hkwet", 1.278590000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-taung",   new UBASE("Myanmar", "cubic-taung", 9.556935724800000E-02, "m3","L3", "1.0"));
      _map.put("Myanmar",   new BaseSystem("Myanmar", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("palf",   new UBASE("Welsh", "palf", 3.048000000000000E-01, "m","L", "1.0"));
      area.put("erw(Venedotian)",   new UBASE("Welsh", "erw(Venedotian)", 1.426990694400000E+03, "m2","L2", "1.0"));
      area.put("erw(Dimetian)",   new UBASE("Welsh", "erw(Dimetian)", 8.561944166400000E+02, "m2","L2", "1.0"));
      mass.put("pwys",   new UBASE("Welsh", "pwys", 4.535923380000000E-01, "kg","M", "1.0"));
      liquid.put("hestawr",   new UBASE("Welsh", "hestawr", 7.047814033376000E-02, "m3","L3", "1.0"));
      dry.put("cubic-palf",   new UBASE("Welsh", "cubic-palf", 2.831684659200000E-02, "m3","L3", "1.0"));
      _map.put("Welsh",   new BaseSystem("Welsh", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("paramaanuwa",   new UBASE("Sri-Lankan", "paramaanuwa", 3.306670000000000E-08, "m","L", "1.0"));
      area.put("laaha",   new UBASE("Sri-Lankan", "laaha", 4.598700000000000E+00, "m2","L2", "1.0"));
      mass.put("gunja",   new UBASE("Sri-Lankan", "gunja", 1.200000000000000E-04, "kg","M", "1.0"));
      liquid.put("seer",   new UBASE("Sri-Lankan", "seer", 1.135623535200000E-03, "m3","L3", "1.0"));
      dry.put("seer",   new UBASE("Sri-Lankan", "seer", 7.062500000000000E-04, "m3","L3", "1.0"));
      _map.put("Sri-Lankan",   new BaseSystem("Sri-Lankan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("rahf",   new UBASE("Malagasy", "rahf", 1.180084000000000E+00, "m","L", "1.0"));
      area.put("square-rahf",   new UBASE("Malagasy", "square-rahf", 1.392598247056000E+00, "m2","L2", "1.0"));
      mass.put("nanki",   new UBASE("Malagasy", "nanki", 6.479891000000000E-04, "kg","M", "1.0"));
      liquid.put("cubic-rahf",   new UBASE("Malagasy", "cubic-rahf", 1.643382909778830E+00, "m3","L3", "1.0"));
      dry.put("bambou",   new UBASE("Malagasy", "bambou", 2.001579185478780E-03, "m3","L3", "1.0"));
      _map.put("Malagasy",   new BaseSystem("Malagasy", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("ohra",   new UBASE("Tanzanian", "ohra", 5.709920000000000E-01, "m","L", "1.0"));
      area.put("square-ohra",   new UBASE("Tanzanian", "square-ohra", 3.260318640640000E-01, "m2","L2", "1.0"));
      mass.put("mane",   new UBASE("Tanzanian", "mane", 9.104052458270000E-01, "kg","M", "1.0"));
      mass.put("bazla",   new UBASE("Tanzanian", "bazla", 1.552465245562000E+01, "kg","M", "1.0"));
      mass.put("franzella",   new UBASE("Tanzanian", "franzella", 1.600373671681400E+01, "kg","M", "1.0"));
      liquid.put("cubic-ohra",   new UBASE("Tanzanian", "cubic-ohra", 1.861615861256320E-01, "m3","L3", "1.0"));
      dry.put("djezla",   new UBASE("Tanzanian", "djezla", 2.574214075690580E-01, "m3","L3", "1.0"));
      _map.put("Tanzanian",   new BaseSystem("Tanzanian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("gaz-i-shah",   new UBASE("Afghan", "gaz-i-shah", 1.065000000000000E+00, "m","L", "1.0"));
      area.put("jareeb",   new UBASE("Afghan", "jareeb", 2.000000000000000E+03, "m2","L2", "1.0"));
      mass.put("nakhud",   new UBASE("Afghan", "nakhud", 1.900000000000000E-04, "kg","M", "1.0"));
      mass.put("seer",   new UBASE("Afghan", "seer", 7.066000000000000E+00, "kg","M", "1.0"));
      liquid.put("cubic-gaz-i-shah",   new UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0"));
      dry.put("cubic-gaz-i-shah",   new UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0"));
      _map.put("Afghan",   new BaseSystem("Afghan", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("cheok",   new UBASE("Korean", "cheok", 3.030303030303030E-01, "m","L", "1.0"));
      area.put("pyeong",   new UBASE("Korean", "pyeong", 3.305785123966940E+00, "m2","L2", "1.0"));
      mass.put("gwan",   new UBASE("Korean", "gwan", 3.750000000000000E+00, "kg","M", "1.0"));
      liquid.put("doe",   new UBASE("Korean", "doe", 1.803906836964690E-03, "m3","L3", "1.0"));
      dry.put("cubic-cheok",   new UBASE("Korean", "cubic-cheok", 2.782647410746580E-02, "m3","L3", "1.0"));
      _map.put("Korean",   new BaseSystem("Korean", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("muscat",   new UBASE("Omani", "muscat", 9.939020000000000E-01, "m","L", "1.0"));
      area.put("square-muscat",   new UBASE("Omani", "square-muscat", 9.878411856040000E-01, "m2","L2", "1.0"));
      mass.put("maund",   new UBASE("Omani", "maund", 3.968933237500000E+00, "kg","M", "1.0"));
      liquid.put("ferren",   new UBASE("Omani", "ferren", 3.000090255291360E-02, "m3","L3", "1.0"));
      dry.put("cubic-muscat",   new UBASE("Omani", "cubic-muscat", 9.818173300541870E-01, "m3","L3", "1.0"));
      _map.put("Omani",   new BaseSystem("Omani", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("karam",   new UBASE("Pakistani", "karam", 1.676400000000000E+00, "m","L", "1.0"));
      area.put("square-karam",   new UBASE("Pakistani", "square-karam", 2.810316960000000E+00, "m2","L2", "1.0"));
      mass.put("tola",   new UBASE("Pakistani", "tola", 1.166375000000000E-02, "kg","M", "1.0"));
      liquid.put("cubic-karam",   new UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0"));
      dry.put("cubic-karam",   new UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0"));
      _map.put("Pakistani",   new BaseSystem("Pakistani", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("chhioh",   new UBASE("Taiwanese", "chhioh", 3.030303030303030E-01, "m","L", "1.0"));
      area.put("pe",   new UBASE("Taiwanese", "pe", 3.305785123966940E+00, "m2","L2", "1.0"));
      mass.put("nu",   new UBASE("Taiwanese", "nu", 3.750000000000000E-02, "kg","M", "1.0"));
      liquid.put("liter",   new UBASE("Taiwanese", "liter", 1.000000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-chhioh",   new UBASE("Taiwanese", "cubic-chhioh", 2.782647410746580E-02, "m3","L3", "1.0"));
      _map.put("Taiwanese",   new BaseSystem("Taiwanese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("yaar",   new UBASE("Tamil", "yaar", 9.333123317760000E-01, "m","L", "1.0"));
      area.put("cent",   new UBASE("Tamil", "cent", 4.046856422400000E+01, "m2","L2", "1.0"));
      mass.put("palam",   new UBASE("Tamil", "palam", 4.800000000000000E-02, "kg","M", "1.0"));
      liquid.put("padi",   new UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0"));
      dry.put("padi",   new UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0"));
      _map.put("Tamil",   new BaseSystem("Tamil", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("angul",   new UBASE("Nepalese", "angul", 1.905000000000000E-02, "m","L", "1.0"));
      area.put("dam",   new UBASE("Nepalese", "dam", 1.987254090000000E+00, "m2","L2", "1.0"));
      area.put("dhur",   new UBASE("Nepalese", "dhur", 1.693157904000000E+01, "m2","L2", "1.0"));
      mass.put("tola",   new UBASE("Nepalese", "tola", 1.166000000000000E-02, "kg","M", "1.0"));
      mass.put("pau",   new UBASE("Nepalese", "pau", 1.990000000000000E-01, "kg","M", "1.0"));
      liquid.put("pathi",   new UBASE("Nepalese", "pathi", 4.545960000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-angul",   new UBASE("Nepalese", "cubic-angul", 6.913292625000000E-06, "m3","L3", "1.0"));
      _map.put("Nepalese",   new BaseSystem("Nepalese", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("pous",   new UBASE("Byzantine", "pous", 3.085000000000000E-01, "m","L", "1.0"));
      area.put("pous",   new UBASE("Byzantine", "pous", 9.517225000000000E-02, "m2","L2", "1.0"));
      mass.put("ogkia",   new UBASE("Byzantine", "ogkia", 2.725000000000000E-02, "kg","M", "1.0"));
      liquid.put("xestes",   new UBASE("Byzantine", "xestes", 5.492800000000000E-04, "m3","L3", "1.0"));
      dry.put("cubic-pous",   new UBASE("Byzantine", "cubic-pous", 2.936063912500000E-02, "m3","L3", "1.0"));
      _map.put("Byzantine",   new BaseSystem("Byzantine", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("sajin",   new UBASE("Tatar", "sajin", 2.133600000000000E+00, "m","L", "1.0"));
      area.put("quadrat-sajin",   new UBASE("Tatar", "quadrat-sajin", 4.552248960000000E+00, "m2","L2", "1.0"));
      mass.put("qadaq",   new UBASE("Tatar", "qadaq", 4.095000000000000E-01, "kg","M", "1.0"));
      liquid.put("garnets",   new UBASE("Tatar", "garnets", 3.279733333333330E-03, "m3","L3", "1.0"));
      dry.put("cubic-qadaq",   new UBASE("Tatar", "cubic-qadaq", 6.866915737500000E-02, "m3","L3", "1.0"));
      _map.put("Tatar",   new BaseSystem("Tatar", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


      length.put("kus",   new UBASE("Sumerian", "kus", 5.186000000000000E-01, "m","L", "1.0"));
      area.put("gin",   new UBASE("Sumerian", "gin", 2.689459600000000E-01, "m2","L2", "1.0"));
      mass.put("mana",   new UBASE("Sumerian", "mana", 5.040000000000000E-01, "kg","M", "1.0"));
      liquid.put("sila",   new UBASE("Sumerian", "sila", 1.000000000000000E-03, "m3","L3", "1.0"));
      dry.put("cubic-kus",   new UBASE("Sumerian", "cubic-kus", 1.394753748560000E-01, "m3","L3", "1.0"));
      _map.put("Sumerian",   new BaseSystem("Sumerian", length, area, mass, liquid, dry, "1.0"));

      length.clear();
      area.clear();
      mass.clear();
      liquid.clear();
      dry.clear();


   }

}
// EOF
