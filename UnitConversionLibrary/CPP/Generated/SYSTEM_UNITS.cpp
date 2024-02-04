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
// File SYSTEM_UNITS.cpp
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

#include"SYSTEM_UNITS.hpp"

SYSTEM_UNITS& SYSTEM_UNITS::Instance(void)
{
    static SYSTEM_UNITS singleton;
    return singleton;
}

SYSTEM_UNITS::SYSTEM_UNITS(void) : SystemUnits("SystemUnits")
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["au"] = UBASE("@", "au", 1.495978707000000E+11, "m","L", "1.0");
   area["square-parsec"] = UBASE("@", "square-parsec", 9.521406136918410E+32, "m2","L2", "1.0");
   mass["solar-mass"] = UBASE("@", "solar-mass", 1.988470000000000E+30, "kg","M", "1.0");
   liquid["cubic-parsec"] = UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0");
   dry["cubic-parsec"] = UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3","L3", "1.0");
   _map["@"] = BaseSystem("@", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["bohr-radius"] = UBASE("a.u.", "bohr-radius", 5.291772109060850E-11, "m","L", "1.0");
   area["atomic-cross-section"] = UBASE("a.u.", "atomic-cross-section", 8.797355429314450E-21, "m2","L2", "1.0");
   mass["electron-mass"] = UBASE("a.u.", "electron-mass", 9.109383701500000E-31, "kg","M", "1.0");
   liquid["atomic-volume"] = UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0");
   dry["atomic-volume"] = UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3","L3", "1.0");
   _map["a.u."] = BaseSystem("a.u.", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   mass["pound(apothecary)"] = UBASE("UK_US_Apoth", "pound(apothecary)", 3.732417216000000E-01, "kg","M", "1.0");
   _map["UK_US_Apoth"] = BaseSystem("UK_US_Apoth", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("UK", "foot", 3.048000000000000E-01, "m","L", "1.0");
   length["foot(UK-old)"] = UBASE("UK", "foot(UK-old)", 3.047997347632710E-01, "m","L", "1.0");
   area["square-foot"] = UBASE("UK", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0");
   mass["pound"] = UBASE("UK", "pound", 4.535923700000000E-01, "kg","M", "1.0");
   mass["pound(UK-Imperial)"] = UBASE("UK", "pound(UK-Imperial)", 4.535923380000000E-01, "kg","M", "1.0");
   liquid["gallon(UK)"] = UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0");
   liquid["gallon(UK-beer)"] = UBASE("UK", "gallon(UK-beer)", 4.621152048000000E-03, "m3","L3", "1.0");
   dry["gallon(UK)"] = UBASE("UK", "gallon(UK)", 4.546092000000000E-03, "m3","L3", "1.0");
   _map["UK"] = BaseSystem("UK", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("US", "foot", 3.048000000000000E-01, "m","L", "1.0");
   length["vara(US-Texas)"] = UBASE("US", "vara(US-Texas)", 8.466666666666670E-01, "m","L", "1.0");
   length["foot(US-survey)"] = UBASE("US", "foot(US-survey)", 3.048006096012190E-01, "m","L", "1.0");
   area["square-foot"] = UBASE("US", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0");
   area["vara(US-Texas)"] = UBASE("US", "vara(US-Texas)", 7.168601466640000E+02, "m2","L2", "1.0");
   mass["pound"] = UBASE("US", "pound", 4.535923700000000E-01, "kg","M", "1.0");
   liquid["gallon(US)"] = UBASE("US", "gallon(US)", 3.785411784000000E-03, "m3","L3", "1.0");
   dry["gallon(US)"] = UBASE("US", "gallon(US)", 4.404883770860000E-03, "m3","L3", "1.0");
   _map["US"] = BaseSystem("US", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("CAN", "foot", 3.048000000000000E-01, "m","L", "1.0");
   area["square-foot"] = UBASE("CAN", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0");
   mass["pound"] = UBASE("CAN", "pound", 4.535923380000000E-01, "kg","M", "1.0");
   liquid["gallon"] = UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0");
   dry["gallon"] = UBASE("CAN", "gallon", 4.546092000000000E-03, "m3","L3", "1.0");
   _map["CAN"] = BaseSystem("CAN", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["centimeter"] = UBASE("cgs", "centimeter", 1.000000000000000E-02, "m","L", "1.0");
   area["square-centimeter"] = UBASE("cgs", "square-centimeter", 1.000000000000000E-04, "m2","L2", "1.0");
   mass["gram"] = UBASE("cgs", "gram", 1.000000000000000E-03, "kg","M", "1.0");
   liquid["liter"] = UBASE("cgs", "liter", 1.000000000000000E-03, "m3","L3", "1.0");
   dry["cubic-centimeter"] = UBASE("cgs", "cubic-centimeter", 1.000000000000000E-06, "m3","L3", "1.0");
   _map["cgs"] = BaseSystem("cgs", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("FPS", "foot", 3.048000000000000E-01, "m","L", "1.0");
   area["square-foot"] = UBASE("FPS", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0");
   mass["pound"] = UBASE("FPS", "pound", 4.535923700000000E-01, "kg","M", "1.0");
   liquid["gallon"] = UBASE("FPS", "gallon", 3.785411784000000E-03, "m3","L3", "1.0");
   dry["cubic-foot"] = UBASE("FPS", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0");
   _map["FPS"] = BaseSystem("FPS", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["meter"] = UBASE("MKpS", "meter", 1.000000000000000E+00, "m","L", "1.0");
   area["square-meter"] = UBASE("MKpS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0");
   mass["hyl"] = UBASE("MKpS", "hyl", 9.806650000000000E+00, "kg","M", "1.0");
   liquid["cubic-meter"] = UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0");
   dry["cubic-meter"] = UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0");
   _map["MKpS"] = BaseSystem("MKpS", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["meter"] = UBASE("MTS", "meter", 1.000000000000000E+00, "m","L", "1.0");
   area["square-meter"] = UBASE("MTS", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0");
   mass["tonne"] = UBASE("MTS", "tonne", 1.000000000000000E+03, "kg","M", "1.0");
   liquid["stere"] = UBASE("MTS", "stere", 1.000000000000000E+00, "m3","L3", "1.0");
   dry["cubic-meter"] = UBASE("MTS", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0");
   _map["MTS"] = BaseSystem("MTS", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["meter"] = UBASE("SI", "meter", 1.000000000000000E+00, "m","L", "1.0");
   area["square-meter"] = UBASE("SI", "square-meter", 1.000000000000000E+00, "m2","L2", "1.0");
   mass["kilogram"] = UBASE("SI", "kilogram", 1.000000000000000E+00, "kg","M", "1.0");
   liquid["cubic-meter"] = UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0");
   dry["cubic-meter"] = UBASE("SI", "cubic-meter", 1.000000000000000E+00, "m3","L3", "1.0");
   _map["SI"] = BaseSystem("SI", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   mass["ounce"] = UBASE("Troy", "ounce", 3.110347680000000E-02, "kg","M", "1.0");
   _map["Troy"] = BaseSystem("Troy", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("Imperial", "foot", 3.048000000000000E-01, "m","L", "1.0");
   area["square-foot"] = UBASE("Imperial", "square-foot", 9.290304000000000E-02, "m2","L2", "1.0");
   mass["pound"] = UBASE("Imperial", "pound", 4.535923380000000E-01, "kg","M", "1.0");
   liquid["gallon"] = UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0");
   dry["gallon"] = UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3","L3", "1.0");
   _map["Imperial"] = BaseSystem("Imperial", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Abyssinian", "pic", 6.860000000000000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Abyssinian", "square-pic", 4.705960000000000E-01, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Abyssinian", "rottolo", 3.110000000000000E-01, "kg","M", "1.0");
   liquid["madega"] = UBASE("Abyssinian", "madega", 4.400000000000000E-04, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Abyssinian", "cubic-pic", 3.228288560000000E-01, "m3","L3", "1.0");
   _map["Abyssinian"] = BaseSystem("Abyssinian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic(dzera-a-torky)"] = UBASE("Algerian", "pic(dzera-a-torky)", 6.230000000000000E-01, "m","L", "1.0");
   length["pic(dzera-a-raby)"] = UBASE("Algerian", "pic(dzera-a-raby)", 4.670000000000000E-01, "m","L", "1.0");
   area["square-pic(dzera-a-torky)"] = UBASE("Algerian", "square-pic(dzera-a-torky)", 3.881290000000000E-01, "m2","L2", "1.0");
   area["square-pic(dzera-a-raby)"] = UBASE("Algerian", "square-pic(dzera-a-raby)", 2.180890000000000E-01, "m2","L2", "1.0");
   mass["ukkia"] = UBASE("Algerian", "ukkia", 3.413000000000000E-02, "kg","M", "1.0");
   liquid["khoul"] = UBASE("Algerian", "khoul", 1.666666666666670E-02, "m3","L3", "1.0");
   liquid["metalli"] = UBASE("Algerian", "metalli", 1.790000000000000E-02, "m3","L3", "1.0");
   dry["caffiso"] = UBASE("Algerian", "caffiso", 3.174700000000000E-01, "m3","L3", "1.0");
   _map["Algerian"] = BaseSystem("Algerian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["thuoc-moc"] = UBASE("Annamese", "thuoc-moc", 4.250000000000000E-01, "m","L", "1.0");
   length["thuoc-de-ruong"] = UBASE("Annamese", "thuoc-de-ruong", 4.700000000000000E-01, "m","L", "1.0");
   length["thuoc-vai"] = UBASE("Annamese", "thuoc-vai", 6.440000000000000E-01, "m","L", "1.0");
   length["ngu"] = UBASE("Annamese", "ngu", 2.000000000000000E+00, "m","L", "1.0");
   area["square-ngu"] = UBASE("Annamese", "square-ngu", 5.522500000000000E+00, "m2","L2", "1.0");
   area["thon"] = UBASE("Annamese", "thon", 2.400000000000000E+00, "m2","L2", "1.0");
   mass["dong"] = UBASE("Annamese", "dong", 3.775000000000000E-03, "kg","M", "1.0");
   liquid["hao"] = UBASE("Annamese", "hao", 2.826000000000000E-02, "m3","L3", "1.0");
   liquid["dau"] = UBASE("Annamese", "dau", 1.000000000000000E-03, "m3","L3", "1.0");
   liquid["thang(cochinchina)"] = UBASE("Annamese", "thang(cochinchina)", 2.766000000000000E-03, "m3","L3", "1.0");
   dry["than"] = UBASE("Annamese", "than", 1.600000000000000E+00, "m3","L3", "1.0");
   _map["Annamese"] = BaseSystem("Annamese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("Arabic", "foot", 3.200000000000000E-01, "m","L", "1.0");
   area["feddan"] = UBASE("Arabic", "feddan", 5.898240000000000E+03, "m2","L2", "1.0");
   mass["rotl"] = UBASE("Arabic", "rotl", 3.400000000000000E-01, "kg","M", "1.0");
   liquid["sa"] = UBASE("Arabic", "sa", 4.212500000000000E-03, "m3","L3", "1.0");
   dry["cafiz"] = UBASE("Arabic", "cafiz", 3.264000000000000E-02, "m3","L3", "1.0");
   _map["Arabic"] = BaseSystem("Arabic", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Argentinian", "vara", 8.666000000000000E-01, "m","L", "1.0");
   area["square-vara"] = UBASE("Argentinian", "square-vara", 7.509955600000000E-01, "m2","L2", "1.0");
   mass["libra"] = UBASE("Argentinian", "libra", 4.594000000000000E-01, "kg","M", "1.0");
   liquid["frasco"] = UBASE("Argentinian", "frasco", 2.375000000000000E-03, "m3","L3", "1.0");
   dry["fanega"] = UBASE("Argentinian", "fanega", 1.371977000000000E-01, "m3","L3", "1.0");
   _map["Argentinian"] = BaseSystem("Argentinian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pous"] = UBASE("Attic", "pous", 3.085600000000000E-01, "m","L", "1.0");
   area["square-pous"] = UBASE("Attic", "square-pous", 9.520927360000000E-02, "m2","L2", "1.0");
   mass["talent"] = UBASE("Attic", "talent", 2.592000000000000E+01, "kg","M", "1.0");
   liquid["cotyle"] = UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0");
   dry["cotyle"] = UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3","L3", "1.0");
   dry["chenix"] = UBASE("Attic", "chenix", 1.080000000000000E-03, "m3","L3", "1.0");
   _map["Attic"] = BaseSystem("Attic", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fuss"] = UBASE("Austrian", "fuss", 3.160800000000000E-01, "m","L", "1.0");
   length["ell"] = UBASE("Austrian", "ell", 7.792000000000000E-01, "m","L", "1.0");
   area["joch"] = UBASE("Austrian", "joch", 5.754618224640000E+03, "m2","L2", "1.0");
   mass["pfund"] = UBASE("Austrian", "pfund", 5.600100000000000E-01, "kg","M", "1.0");
   mass["pfund(apothecary)"] = UBASE("Austrian", "pfund(apothecary)", 4.200075000000000E-01, "kg","M", "1.0");
   liquid["mass"] = UBASE("Austrian", "mass", 1.415100000000000E-03, "m3","L3", "1.0");
   dry["metzel"] = UBASE("Austrian", "metzel", 6.148900000000000E-02, "m3","L3", "1.0");
   _map["Austrian"] = BaseSystem("Austrian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["canna"] = UBASE("Belearic", "canna", 1.564000000000000E+00, "m","L", "1.0");
   area["square-canna"] = UBASE("Belearic", "square-canna", 2.446096000000000E+00, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Belearic", "rottolo", 4.080000000000000E-01, "kg","M", "1.0");
   liquid["quartera"] = UBASE("Belearic", "quartera", 7.197000000000000E-02, "m3","L3", "1.0");
   dry["quartin"] = UBASE("Belearic", "quartin", 2.714000000000000E-02, "m3","L3", "1.0");
   _map["Belearic"] = BaseSystem("Belearic", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["perche"] = UBASE("Belgian", "perche", 6.497000000000000E+00, "m","L", "1.0");
   area["arpent"] = UBASE("Belgian", "arpent", 4.221100900000000E+01, "m2","L2", "1.0");
   mass["livre"] = UBASE("Belgian", "livre", 4.895000000000000E-01, "kg","M", "1.0");
   liquid["pot"] = UBASE("Belgian", "pot", 5.000000000000000E-04, "m3","L3", "1.0");
   dry["pot"] = UBASE("Belgian", "pot", 1.500000000000000E-03, "m3","L3", "1.0");
   _map["Belgian"] = BaseSystem("Belgian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pe"] = UBASE("Brazilian", "pe", 3.333333333333330E-01, "m","L", "1.0");
   area["salamis(nominal)"] = UBASE("Brazilian", "salamis(nominal)", 4.537500000000000E+03, "m2","L2", "1.0");
   area["salamis(min)"] = UBASE("Brazilian", "salamis(min)", 3.025000000000000E+03, "m2","L2", "1.0");
   area["salamis(max)"] = UBASE("Brazilian", "salamis(max)", 6.050000000000000E+03, "m2","L2", "1.0");
   area["tarefa(nominal)"] = UBASE("Brazilian", "tarefa(nominal)", 3.500000000000000E+03, "m2","L2", "1.0");
   area["tarefa(min)"] = UBASE("Brazilian", "tarefa(min)", 3.000000000000000E+03, "m2","L2", "1.0");
   area["tarefa(max)"] = UBASE("Brazilian", "tarefa(max)", 4.000000000000000E+03, "m2","L2", "1.0");
   mass["libra"] = UBASE("Brazilian", "libra", 4.590500000000000E-01, "kg","M", "1.0");
   liquid["alquiera"] = UBASE("Brazilian", "alquiera", 5.324000000000000E-03, "m3","L3", "1.0");
   liquid["alquiera(Bahia)"] = UBASE("Brazilian", "alquiera(Bahia)", 3.524000000000000E-03, "m3","L3", "1.0");
   liquid["alquiera(common)"] = UBASE("Brazilian", "alquiera(common)", 3.626000000000000E-03, "m3","L3", "1.0");
   dry["cubic-pe"] = UBASE("Brazilian", "cubic-pe", 3.703703703703700E-02, "m3","L3", "1.0");
   dry["alquiera(salt)"] = UBASE("Brazilian", "alquiera(salt)", 4.076000000000000E-03, "m3","L3", "1.0");
   _map["Brazilian"] = BaseSystem("Brazilian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["sandong"] = UBASE("Burmese", "sandong", 5.588000000000000E-01, "m","L", "1.0");
   area["square-sandong"] = UBASE("Burmese", "square-sandong", 3.122574400000000E-01, "m2","L2", "1.0");
   mass["catty"] = UBASE("Burmese", "catty", 5.440000000000000E-01, "kg","M", "1.0");
   liquid["byee"] = UBASE("Burmese", "byee", 5.050000000000000E-04, "m3","L3", "1.0");
   dry["cubic-sandong"] = UBASE("Burmese", "cubic-sandong", 1.744894574720000E-01, "m3","L3", "1.0");
   _map["Burmese"] = BaseSystem("Burmese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["muoi"] = UBASE("Cambodian", "muoi", 1.000000000000000E+00, "m","L", "1.0");
   area["square-muoi"] = UBASE("Cambodian", "square-muoi", 1.000000000000000E+00, "m2","L2", "1.0");
   mass["neal"] = UBASE("Cambodian", "neal", 6.000000000000000E-01, "kg","M", "1.0");
   liquid["sesep"] = UBASE("Cambodian", "sesep", 4.000000000000000E-02, "m3","L3", "1.0");
   dry["cubic-muoi"] = UBASE("Cambodian", "cubic-muoi", 1.000000000000000E+00, "m3","L3", "1.0");
   _map["Cambodian"] = BaseSystem("Cambodian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["covid(Ceylon)"] = UBASE("Ceylonese", "covid(Ceylon)", 4.640000000000000E-01, "m","L", "1.0");
   length["covid(Madras)"] = UBASE("Ceylonese", "covid(Madras)", 4.720000000000000E-01, "m","L", "1.0");
   area["square-covid(Ceylon)"] = UBASE("Ceylonese", "square-covid(Ceylon)", 2.152960000000000E-01, "m2","L2", "1.0");
   area["square-covid(Madras)"] = UBASE("Ceylonese", "square-covid(Madras)", 2.227840000000000E-01, "m2","L2", "1.0");
   mass["seer"] = UBASE("Ceylonese", "seer", 2.834950000000000E-01, "kg","M", "1.0");
   liquid["cubic-covid(Ceylon)"] = UBASE("Ceylonese", "cubic-covid(Ceylon)", 9.989734400000000E-02, "m3","L3", "1.0");
   liquid["cubic-covid(Madras)"] = UBASE("Ceylonese", "cubic-covid(Madras)", 1.051540480000000E-01, "m3","L3", "1.0");
   dry["chundroon"] = UBASE("Ceylonese", "chundroon", 2.649000000000000E-04, "m3","L3", "1.0");
   _map["Ceylonese"] = BaseSystem("Ceylonese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["bara"] = UBASE("Chilean", "bara", 8.360000000000000E-01, "m","L", "1.0");
   area["square-bara"] = UBASE("Chilean", "square-bara", 6.988960000000000E-01, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Chilean", "libbra", 4.600930000000000E-01, "kg","M", "1.0");
   liquid["almude"] = UBASE("Chilean", "almude", 8.083000000000000E-03, "m3","L3", "1.0");
   dry["cubic-bara"] = UBASE("Chilean", "cubic-bara", 5.842770560000000E-01, "m3","L3", "1.0");
   _map["Chilean"] = BaseSystem("Chilean", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["tchi"] = UBASE("Chinese", "tchi", 3.200000000000000E-01, "m","L", "1.0");
   length["chek"] = UBASE("Chinese", "chek", 3.714750000000000E-01, "m","L", "1.0");
   area["meou"] = UBASE("Chinese", "meou", 6.144000000000000E+02, "m2","L2", "1.0");
   area["fang-chi"] = UBASE("Chinese", "fang-chi", 1.024000000000000E-01, "m2","L2", "1.0");
   area["mau5"] = UBASE("Chinese", "mau5", 7.614000000000000E+02, "m2","L2", "1.0");
   mass["jin"] = UBASE("Chinese", "jin", 5.968160000000000E-01, "kg","M", "1.0");
   liquid["cheng"] = UBASE("Chinese", "cheng", 1.035468800000000E-03, "m3","L3", "1.0");
   liquid["cyut3"] = UBASE("Chinese", "cyut3", 1.031000000000000E-03, "m3","L3", "1.0");
   dry["cubic-tchi"] = UBASE("Chinese", "cubic-tchi", 3.276800000000000E-02, "m3","L3", "1.0");
   _map["Chinese"] = BaseSystem("Chinese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Colombian", "vara", 8.000000000000000E-01, "m","L", "1.0");
   area["square-vara"] = UBASE("Colombian", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Colombian", "libbra", 5.000000000000000E-01, "kg","M", "1.0");
   liquid["cubic-vara"] = UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0");
   _map["Colombian"] = BaseSystem("Colombian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Costa-Rican", "vara", 8.393000000000000E-01, "m","L", "1.0");
   area["manzana"] = UBASE("Costa-Rican", "manzana", 7.044244900000000E+03, "m2","L2", "1.0");
   mass["fanega"] = UBASE("Costa-Rican", "fanega", 9.200000000000000E+01, "kg","M", "1.0");
   liquid["botella(nominal)"] = UBASE("Costa-Rican", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0");
   liquid["botella(min)"] = UBASE("Costa-Rican", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0");
   liquid["botella(max)"] = UBASE("Costa-Rican", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Costa-Rican", "cubic-vara", 5.912234744570000E-01, "m3","L3", "1.0");
   _map["Costa-Rican"] = BaseSystem("Costa-Rican", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Cuban", "vara", 8.479536000000000E-01, "m","L", "1.0");
   area["cabaliera"] = UBASE("Cuban", "cabaliera", 1.342020000000000E+05, "m2","L2", "1.0");
   mass["libra"] = UBASE("Cuban", "libra", 4.608951746418000E-01, "kg","M", "1.0");
   liquid["bocoy"] = UBASE("Cuban", "bocoy", 1.362700000000000E-01, "m3","L3", "1.0");
   dry["fanega"] = UBASE("Cuban", "fanega", 5.634727319684110E-02, "m3","L3", "1.0");
   _map["Cuban"] = BaseSystem("Cuban", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Cypriot", "pic", 6.096000000000000E-01, "m","L", "1.0");
   area["scala"] = UBASE("Cypriot", "scala", 1.337803776000000E+03, "m2","L2", "1.0");
   mass["oke"] = UBASE("Cypriot", "oke", 1.270058636000000E+00, "kg","M", "1.0");
   liquid["oke"] = UBASE("Cypriot", "oke", 1.278550000000000E-03, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Cypriot", "cubic-pic", 2.265347727360000E-01, "m3","L3", "1.0");
   _map["Cypriot"] = BaseSystem("Cypriot", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["stopa(Bohemian)"] = UBASE("Czech", "stopa(Bohemian)", 2.960000000000000E-01, "m","L", "1.0");
   length["stopa(Praha)"] = UBASE("Czech", "stopa(Praha)", 2.965000000000000E-01, "m","L", "1.0");
   length["stopa(Moravian)"] = UBASE("Czech", "stopa(Moravian)", 2.840000000000000E-01, "m","L", "1.0");
   length["stopa(Silesian)"] = UBASE("Czech", "stopa(Silesian)", 2.895000000000000E-01, "m","L", "1.0");
   area["merice"] = UBASE("Czech", "merice", 2.000000000000000E+03, "m2","L2", "1.0");
   mass["quintal"] = UBASE("Czech", "quintal", 5.000000000000000E+01, "kg","M", "1.0");
   liquid["merice"] = UBASE("Czech", "merice", 7.060000000000000E-02, "m3","L3", "1.0");
   dry["cubic-stopa(Bohemian)"] = UBASE("Czech", "cubic-stopa(Bohemian)", 2.593433600000000E-02, "m3","L3", "1.0");
   dry["cubic-stopa(Praha)"] = UBASE("Czech", "cubic-stopa(Praha)", 2.606598212500000E-02, "m3","L3", "1.0");
   dry["cubic-stopa(Moravian)"] = UBASE("Czech", "cubic-stopa(Moravian)", 2.290630400000000E-02, "m3","L3", "1.0");
   dry["cubic-stopa(Silesian)"] = UBASE("Czech", "cubic-stopa(Silesian)", 2.426306737500000E-02, "m3","L3", "1.0");
   _map["Czech"] = BaseSystem("Czech", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fod"] = UBASE("Danish", "fod", 3.138570000000000E-01, "m","L", "1.0");
   length["danskmil"] = UBASE("Danish", "danskmil", 7.532500000000000E+03, "m","L", "1.0");
   area["square-ruthe"] = UBASE("Danish", "square-ruthe", 1.418489516865600E+01, "m2","L2", "1.0");
   area["tondelande"] = UBASE("Danish", "tondelande", 5.516230000000000E+03, "m2","L2", "1.0");
   mass["pund"] = UBASE("Danish", "pund", 5.000000000000000E-01, "kg","M", "1.0");
   liquid["pott"] = UBASE("Danish", "pott", 9.661520492510560E-04, "m3","L3", "1.0");
   dry["korntonde"] = UBASE("Danish", "korntonde", 1.391258950921520E-01, "m3","L3", "1.0");
   _map["Danish"] = BaseSystem("Danish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["voeten"] = UBASE("Dutch", "voeten", 2.830594000000000E-01, "m","L", "1.0");
   area["morgen"] = UBASE("Dutch", "morgen", 8.244346000000000E+03, "m2","L2", "1.0");
   mass["pond(Amsterdam)"] = UBASE("Dutch", "pond(Amsterdam)", 4.940903200000000E-01, "kg","M", "1.0");
   mass["pond(ordinary)"] = UBASE("Dutch", "pond(ordinary)", 4.921677200000000E-01, "kg","M", "1.0");
   mass["pond(apothecary)"] = UBASE("Dutch", "pond(apothecary)", 3.691257900000000E-01, "kg","M", "1.0");
   liquid["mingelen"] = UBASE("Dutch", "mingelen", 1.200000000000000E-03, "m3","L3", "1.0");
   dry["schepel"] = UBASE("Dutch", "schepel", 2.726000000000000E-02, "m3","L3", "1.0");
   _map["Dutch"] = BaseSystem("Dutch", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["derah(royal-cubit)"] = UBASE("Egyptian", "derah(royal-cubit)", 5.235000000000000E-01, "m","L", "1.0");
   length["diraa"] = UBASE("Egyptian", "diraa", 5.800000000000000E-01, "m","L", "1.0");
   length["derah(cubit)"] = UBASE("Egyptian", "derah(cubit)", 4.495800000000000E-01, "m","L", "1.0");
   length["palm(short)"] = UBASE("Egyptian", "palm(short)", 7.485714286000000E-02, "m","L", "1.0");
   area["pekeis"] = UBASE("Egyptian", "pekeis", 2.740522500000000E+01, "m2","L2", "1.0");
   area["feddan-masri"] = UBASE("Egyptian", "feddan-masri", 4.200080000000000E+03, "m2","L2", "1.0");
   mass["deben"] = UBASE("Egyptian", "deben", 1.365000000000000E-02, "kg","M", "1.0");
   mass["oke"] = UBASE("Egyptian", "oke", 1.248000000000000E+00, "kg","M", "1.0");
   liquid["keddah"] = UBASE("Egyptian", "keddah", 2.062500000000000E-03, "m3","L3", "1.0");
   dry["khar"] = UBASE("Egyptian", "khar", 3.400000000000000E-02, "m3","L3", "1.0");
   _map["Egyptian"] = BaseSystem("Egyptian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["cubi"] = UBASE("Eritrean", "cubi", 3.200000000000000E-01, "m","L", "1.0");
   area["square-cubi"] = UBASE("Eritrean", "square-cubi", 1.024000000000000E-01, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Eritrean", "rottolo", 4.480000000000000E-01, "kg","M", "1.0");
   liquid["messe"] = UBASE("Eritrean", "messe", 1.500000000000000E-03, "m3","L3", "1.0");
   dry["cubic-cubi"] = UBASE("Eritrean", "cubic-cubi", 3.276800000000000E-02, "m3","L3", "1.0");
   _map["Eritrean"] = BaseSystem("Eritrean", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["arshine"] = UBASE("Estonian", "arshine", 3.071120000000000E+01, "m","L", "1.0");
   area["lofstelle"] = UBASE("Estonian", "lofstelle", 1.855000000000000E+03, "m2","L2", "1.0");
   area["tonnland"] = UBASE("Estonian", "tonnland", 5.462700000000000E+03, "m2","L2", "1.0");
   mass["pfund"] = UBASE("Estonian", "pfund", 4.600000000000000E-01, "kg","M", "1.0");
   liquid["hulmit"] = UBASE("Estonian", "hulmit", 1.148000000000000E-02, "m3","L3", "1.0");
   liquid["kulimet"] = UBASE("Estonian", "kulimet", 1.150161280000000E-02, "m3","L3", "1.0");
   dry["cubic-elle"] = UBASE("Estonian", "cubic-elle", 9.619307168929790E+02, "m3","L3", "1.0");
   _map["Estonian"] = BaseSystem("Estonian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["kend"] = UBASE("Ethiopian", "kend", 4.900000000000000E-01, "m","L", "1.0");
   area["square-kend"] = UBASE("Ethiopian", "square-kend", 2.401000000000000E-01, "m2","L2", "1.0");
   mass["farasula(ivory)"] = UBASE("Ethiopian", "farasula(ivory)", 1.347840000000000E+01, "kg","M", "1.0");
   mass["farasula(coffee)"] = UBASE("Ethiopian", "farasula(coffee)", 1.684800000000000E+01, "kg","M", "1.0");
   mass["farasula(rubber)"] = UBASE("Ethiopian", "farasula(rubber)", 1.797120000000000E+01, "kg","M", "1.0");
   liquid["kuba"] = UBASE("Ethiopian", "kuba", 1.016000000000000E-03, "m3","L3", "1.0");
   dry["madega"] = UBASE("Ethiopian", "madega", 4.400000000000000E-04, "m3","L3", "1.0");
   _map["Ethiopian"] = BaseSystem("Ethiopian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["jalka"] = UBASE("Finnish", "jalka", 2.969000000000000E-01, "m","L", "1.0");
   area["kannunala"] = UBASE("Finnish", "kannunala", 8.814961000000000E+01, "m2","L2", "1.0");
   mass["naula"] = UBASE("Finnish", "naula", 4.250797024000000E-01, "kg","M", "1.0");
   liquid["tunna"] = UBASE("Finnish", "tunna", 1.634900000000000E-01, "m3","L3", "1.0");
   liquid["tuoppi"] = UBASE("Finnish", "tuoppi", 1.308580960450000E-03, "m3","L3", "1.0");
   dry["tuoppi"] = UBASE("Finnish", "tuoppi", 1.327400000000000E-03, "m3","L3", "1.0");
   _map["Finnish"] = BaseSystem("Finnish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["toise"] = UBASE("French", "toise", 1.949036500200000E+00, "m","L", "1.0");
   length["pied(metric)"] = UBASE("French", "pied(metric)", 3.333333333333330E-01, "m","L", "1.0");
   length["pied(de-Paris/du-Roi)"] = UBASE("French", "pied(de-Paris/du-Roi)", 3.248394167000000E-01, "m","L", "1.0");
   length["bourgeois"] = UBASE("French", "bourgeois", 3.175000000000000E-03, "m","L", "1.0");
   length["canne(Provence)"] = UBASE("French", "canne(Provence)", 1.968500000000000E+00, "m","L", "1.0");
   length["point-didot"] = UBASE("French", "point-didot", 3.759715471075000E-04, "m","L", "1.0");
   length["pied(commum)"] = UBASE("French", "pied(commum)", 2.236067977500000E-01, "m","L", "1.0");
   length["pied(d'ordonance)"] = UBASE("French", "pied(d'ordonance)", 3.248400000000000E-01, "m","L", "1.0");
   length["toise(du-Chatelet)"] = UBASE("French", "toise(du-Chatelet)", 1.949090000000000E+00, "m","L", "1.0");
   area["pied-carre"] = UBASE("French", "pied-carre", 1.055206466419960E-01, "m2","L2", "1.0");
   area["journal(Nantes)"] = UBASE("French", "journal(Nantes)", 2.671000000000000E+03, "m2","L2", "1.0");
   area["ares"] = UBASE("French", "ares", 1.000000000000000E+02, "m2","L2", "1.0");
   area["exots(Agen)"] = UBASE("French", "exots(Agen)", 1.687500000000000E+01, "m2","L2", "1.0");
   area["dextres(Montpellier)"] = UBASE("French", "dextres(Montpellier)", 1.920000000000000E+01, "m2","L2", "1.0");
   area["corterade(Montpellier)"] = UBASE("French", "corterade(Montpellier)", 2.877000000000000E+03, "m2","L2", "1.0");
   area["journal(Bretagne)"] = UBASE("French", "journal(Bretagne)", 4.863000000000000E+03, "m2","L2", "1.0");
   area["becheree(Lyonnais)"] = UBASE("French", "becheree(Lyonnais)", 1.367000000000000E+03, "m2","L2", "1.0");
   area["journal(Lyonnais)"] = UBASE("French", "journal(Lyonnais)", 4.000000000000000E+03, "m2","L2", "1.0");
   mass["livre(de-Paris)"] = UBASE("French", "livre(de-Paris)", 4.895058500000000E-01, "kg","M", "1.0");
   mass["livre(Charlemange)"] = UBASE("French", "livre(Charlemange)", 3.671280000000000E-01, "kg","M", "1.0");
   mass["livre(metric)"] = UBASE("French", "livre(metric)", 1.000000000000000E+00, "kg","M", "1.0");
   liquid["pinte"] = UBASE("French", "pinte", 9.521462584750000E-04, "m3","L3", "1.0");
   liquid["chopine(Provence-wine)"] = UBASE("French", "chopine(Provence-wine)", 2.299250000000000E-04, "m3","L3", "1.0");
   liquid["liter(old)"] = UBASE("French", "liter(old)", 1.000002800100000E-03, "m3","L3", "1.0");
   dry["setier"] = UBASE("French", "setier", 1.516800000000000E-01, "m3","L3", "1.0");
   dry["picotins"] = UBASE("French", "picotins", 3.125000000000000E-03, "m3","L3", "1.0");
   _map["French"] = BaseSystem("French", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fuss"] = UBASE("German", "fuss", 3.138570000000000E-01, "m","L", "1.0");
   area["klafter"] = UBASE("German", "klafter", 1.440020334575000E+02, "m2","L2", "1.0");
   mass["pfund"] = UBASE("German", "pfund", 4.677110000000000E-01, "kg","M", "1.0");
   mass["zollpfund"] = UBASE("German", "zollpfund", 5.144821000000000E-01, "kg","M", "1.0");
   liquid["quart"] = UBASE("German", "quart", 1.145069095408660E-03, "m3","L3", "1.0");
   dry["metzen"] = UBASE("German", "metzen", 3.705960000000000E-02, "m3","L3", "1.0");
   dry["metze"] = UBASE("German", "metze", 3.435890000000000E-03, "m3","L3", "1.0");
   _map["German"] = BaseSystem("German", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["piki(short)"] = UBASE("Greek", "piki(short)", 6.480000000000000E-01, "m","L", "1.0");
   length["piki(long)"] = UBASE("Greek", "piki(long)", 6.690000000000000E-01, "m","L", "1.0");
   length["piki(mansonary)"] = UBASE("Greek", "piki(mansonary)", 7.500000000000000E-01, "m","L", "1.0");
   length["amma"] = UBASE("Greek", "amma", 2.100000000000000E+01, "m","L", "1.0");
   area["stremma"] = UBASE("Greek", "stremma", 1.000000000000000E+03, "m2","L2", "1.0");
   mass["oka"] = UBASE("Greek", "oka", 1.280000000000000E+00, "kg","M", "1.0");
   liquid["oka(average)"] = UBASE("Greek", "oka(average)", 1.336500000000000E-03, "m3","L3", "1.0");
   liquid["baril"] = UBASE("Greek", "baril", 7.423600000000000E-02, "m3","L3", "1.0");
   dry["sexte"] = UBASE("Greek", "sexte", 5.400000000000000E-04, "m3","L3", "1.0");
   _map["Greek"] = BaseSystem("Greek", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Guatemalan", "vara", 8.359000000000000E-01, "m","L", "1.0");
   area["manzana"] = UBASE("Guatemalan", "manzana", 6.987288100000000E+03, "m2","L2", "1.0");
   mass["fanega"] = UBASE("Guatemalan", "fanega", 9.200000000000000E+01, "kg","M", "1.0");
   liquid["botella(nominal)"] = UBASE("Guatemalan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0");
   liquid["botella(min)"] = UBASE("Guatemalan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0");
   liquid["botella(max)"] = UBASE("Guatemalan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0");
   dry["cubic-vera"] = UBASE("Guatemalan", "cubic-vera", 5.840674122790000E-01, "m3","L3", "1.0");
   _map["Guatemalan"] = BaseSystem("Guatemalan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Guinean", "pic", 5.780000000000000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Guinean", "square-pic", 3.340840000000000E-01, "m2","L2", "1.0");
   mass["benda"] = UBASE("Guinean", "benda", 6.420000000000000E-02, "kg","M", "1.0");
   liquid["cubic-pic"] = UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3","L3", "1.0");
   _map["Guinean"] = BaseSystem("Guinean", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["toise"] = UBASE("Haitian", "toise", 1.948800000000000E+00, "m","L", "1.0");
   area["carreau"] = UBASE("Haitian", "carreau", 1.292300000000000E+03, "m2","L2", "1.0");
   mass["gwo-mamit"] = UBASE("Haitian", "gwo-mamit", 1.700000000000000E+00, "kg","M", "1.0");
   liquid["baril"] = UBASE("Haitian", "baril", 1.000000000000000E-01, "m3","L3", "1.0");
   dry["cubic-toise"] = UBASE("Haitian", "cubic-toise", 7.401194422272000E+00, "m3","L3", "1.0");
   _map["Haitian"] = BaseSystem("Haitian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["cubit"] = UBASE("Hebrew", "cubit", 5.550000000000000E-01, "m","L", "1.0");
   length["cubit(acared)"] = UBASE("Hebrew", "cubit(acared)", 6.400000000000000E-01, "m","L", "1.0");
   area["geris"] = UBASE("Hebrew", "geris", 3.141592653589790E-04, "m2","L2", "1.0");
   mass["mina(sacred)"] = UBASE("Hebrew", "mina(sacred)", 8.500000000000000E-01, "kg","M", "1.0");
   mass["mina(Talmudic)"] = UBASE("Hebrew", "mina(Talmudic)", 3.542000000000000E-01, "kg","M", "1.0");
   liquid["bath(old)"] = UBASE("Hebrew", "bath(old)", 2.937600000000000E-02, "m3","L3", "1.0");
   liquid["bath(new)"] = UBASE("Hebrew", "bath(new)", 2.142000000000000E-02, "m3","L3", "1.0");
   dry["ephah(old)"] = UBASE("Hebrew", "ephah(old)", 2.937600000000000E-02, "m3","L3", "1.0");
   dry["ephah(new)"] = UBASE("Hebrew", "ephah(new)", 2.142000000000000E-02, "m3","L3", "1.0");
   _map["Hebrew"] = BaseSystem("Hebrew", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Honduran", "vara", 8.128000000000000E-01, "m","L", "1.0");
   area["manzana"] = UBASE("Honduran", "manzana", 6.606438400000000E+04, "m2","L2", "1.0");
   mass["fanega"] = UBASE("Honduran", "fanega", 9.200000000000000E+01, "kg","M", "1.0");
   liquid["botella(nominal)"] = UBASE("Honduran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0");
   liquid["botella(min)"] = UBASE("Honduran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0");
   liquid["botella(max)"] = UBASE("Honduran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Honduran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0");
   _map["Honduran"] = BaseSystem("Honduran", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["faust"] = UBASE("Hungarian", "faust", 1.053600000000000E-01, "m","L", "1.0");
   area["square-meile"] = UBASE("Hungarian", "square-meile", 6.978262126496050E+07, "m2","L2", "1.0");
   mass["oka"] = UBASE("Hungarian", "oka", 1.329479142678000E+00, "kg","M", "1.0");
   liquid["eimer"] = UBASE("Hungarian", "eimer", 5.430000000000000E-02, "m3","L3", "1.0");
   dry["cubic-faust"] = UBASE("Hungarian", "cubic-faust", 1.169572870656000E-03, "m3","L3", "1.0");
   _map["Hungarian"] = BaseSystem("Hungarian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fet"] = UBASE("Icelandic", "fet", 3.138570000000000E-01, "m","L", "1.0");
   area["ferfaomur"] = UBASE("Icelandic", "ferfaomur", 3.546223792164000E+00, "m2","L2", "1.0");
   mass["pund"] = UBASE("Icelandic", "pund", 5.000000000000000E-01, "kg","M", "1.0");
   liquid["cubic-fet"] = UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3","L3", "1.0");
   dry["pottar"] = UBASE("Icelandic", "pottar", 9.661520492510560E-04, "m3","L3", "1.0");
   _map["Icelandic"] = BaseSystem("Icelandic", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["hasta"] = UBASE("Indian", "hasta", 4.570000000000000E-01, "m","L", "1.0");
   length["guz(Bombay)"] = UBASE("Indian", "guz(Bombay)", 6.858000000000000E-01, "m","L", "1.0");
   length["guz(Calcutta)"] = UBASE("Indian", "guz(Calcutta)", 9.150000000000000E-01, "m","L", "1.0");
   area["cawnie"] = UBASE("Indian", "cawnie", 5.400000000000000E+02, "m2","L2", "1.0");
   area["square-guz(Bombay)"] = UBASE("Indian", "square-guz(Bombay)", 4.703216400000000E-01, "m2","L2", "1.0");
   area["square-guz(Calcutta)"] = UBASE("Indian", "square-guz(Calcutta)", 8.372250000000000E-01, "m2","L2", "1.0");
   area["ground"] = UBASE("Indian", "ground", 2.030000000000000E+01, "m2","L2", "1.0");
   area["kani"] = UBASE("Indian", "kani", 3.075000000000000E+02, "m2","L2", "1.0");
   area["chahar"] = UBASE("Indian", "chahar", 2.962000000000000E-02, "m2","L2", "1.0");
   mass["pala"] = UBASE("Indian", "pala", 4.700000000000000E-02, "kg","M", "1.0");
   mass["seer"] = UBASE("Indian", "seer", 9.330400000000000E-01, "kg","M", "1.0");
   mass["drona"] = UBASE("Indian", "drona", 1.320000000000000E+01, "kg","M", "1.0");
   liquid["parah"] = UBASE("Indian", "parah", 1.101000000000000E-01, "m3","L3", "1.0");
   dry["drona"] = UBASE("Indian", "drona", 1.320000000000000E-02, "m3","L3", "1.0");
   dry["seer"] = UBASE("Indian", "seer", 1.000000000000000E-03, "m3","L3", "1.0");
   _map["Indian"] = BaseSystem("Indian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["depa"] = UBASE("Indonesian", "depa", 1.700000000000000E+00, "m","L", "1.0");
   area["bahoe"] = UBASE("Indonesian", "bahoe", 7.096500000000000E+03, "m2","L2", "1.0");
   mass["picul"] = UBASE("Indonesian", "picul", 6.176130250000000E+01, "kg","M", "1.0");
   mass["thail(precious-metal)"] = UBASE("Indonesian", "thail(precious-metal)", 5.409000000000000E+01, "kg","M", "1.0");
   mass["thail(opium)"] = UBASE("Indonesian", "thail(opium)", 3.860100000000000E+01, "kg","M", "1.0");
   liquid["kan"] = UBASE("Indonesian", "kan", 1.575100000000000E-03, "m3","L3", "1.0");
   dry["cubic-depa"] = UBASE("Indonesian", "cubic-depa", 4.913000000000000E+00, "m3","L3", "1.0");
   _map["Indonesian"] = BaseSystem("Indonesian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot"] = UBASE("Irish", "foot", 3.048000000000000E-01, "m","L", "1.0");
   length["troighid"] = UBASE("Irish", "troighid", 2.500000000000000E-01, "m","L", "1.0");
   area["achar"] = UBASE("Irish", "achar", 4.046856422400000E+03, "m2","L2", "1.0");
   mass["penginn"] = UBASE("Irish", "penginn", 4.000000000000000E-04, "kg","M", "1.0");
   liquid["gallon"] = UBASE("Irish", "gallon", 3.565825126400000E-03, "m3","L3", "1.0");
   liquid["meisrin"] = UBASE("Irish", "meisrin", 6.600000000000000E-01, "m3","L3", "1.0");
   dry["cubic-foot"] = UBASE("Irish", "cubic-foot", 2.831684659200000E-02, "m3","L3", "1.0");
   dry["cubic-troighid"] = UBASE("Irish", "cubic-troighid", 1.562500000000000E-02, "m3","L3", "1.0");
   _map["Irish"] = BaseSystem("Irish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["piedi-liprando"] = UBASE("Italian", "piedi-liprando", 5.137700000000000E-01, "m","L", "1.0");
   area["giornata"] = UBASE("Italian", "giornata", 3.800000000000000E+03, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Italian", "libbra", 3.070000000000000E-01, "kg","M", "1.0");
   liquid["barile(Florence-oil)"] = UBASE("Italian", "barile(Florence-oil)", 3.343000000000000E-02, "m3","L3", "1.0");
   liquid["barile(Florence-wine)"] = UBASE("Italian", "barile(Florence-wine)", 4.560000000000000E-02, "m3","L3", "1.0");
   dry["cubic-piedi-liprando"] = UBASE("Italian", "cubic-piedi-liprando", 1.356145303196330E-01, "m3","L3", "1.0");
   _map["Italian"] = BaseSystem("Italian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["shaku"] = UBASE("Japanese", "shaku", 3.030303030303030E-01, "m","L", "1.0");
   area["tsubo"] = UBASE("Japanese", "tsubo", 3.305785123966940E+00, "m2","L2", "1.0");
   mass["kwan"] = UBASE("Japanese", "kwan", 3.750000000000000E+00, "kg","M", "1.0");
   mass["tael"] = UBASE("Japanese", "tael", 3.751000000000000E-02, "kg","M", "1.0");
   liquid["sho"] = UBASE("Japanese", "sho", 1.803906836964690E-03, "m3","L3", "1.0");
   dry["cubic-shaku"] = UBASE("Japanese", "cubic-shaku", 2.782647410746580E-02, "m3","L3", "1.0");
   _map["Japanese"] = BaseSystem("Japanese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["elle"] = UBASE("Latvian", "elle", 5.370000000000000E-01, "m","L", "1.0");
   area["kapp"] = UBASE("Latvian", "kapp", 1.486400000000000E+02, "m2","L2", "1.0");
   mass["pfund"] = UBASE("Latvian", "pfund", 4.190000000000000E-01, "kg","M", "1.0");
   liquid["stoof"] = UBASE("Latvian", "stoof", 1.275200000000000E-03, "m3","L3", "1.0");
   liquid["faden"] = UBASE("Latvian", "faden", 4.077000000000000E+00, "m3","L3", "1.0");
   dry["kulmet"] = UBASE("Latvian", "kulmet", 1.091062080000000E-02, "m3","L3", "1.0");
   _map["Latvian"] = BaseSystem("Latvian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Libyan", "pic", 6.800000000000000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Libyan", "square-pic", 4.624000000000000E-01, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Libyan", "rottolo", 5.128000000000000E-01, "kg","M", "1.0");
   liquid["barile"] = UBASE("Libyan", "barile", 6.249750000000000E-02, "m3","L3", "1.0");
   dry["orba"] = UBASE("Libyan", "orba", 7.692000000000000E-03, "m3","L3", "1.0");
   _map["Libyan"] = BaseSystem("Libyan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["canna"] = UBASE("Maltese", "canna", 2.088000000000000E+00, "m","L", "1.0");
   area["qasba-kwadra"] = UBASE("Maltese", "qasba-kwadra", 4.359744000000000E+00, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Maltese", "rottolo", 7.937900000000000E-01, "kg","M", "1.0");
   liquid["salma"] = UBASE("Maltese", "salma", 2.909440000000000E+02, "m3","L3", "1.0");
   liquid["baril"] = UBASE("Maltese", "baril", 4.316200000000000E+01, "m3","L3", "1.0");
   liquid["caffiso"] = UBASE("Maltese", "caffiso", 2.045700000000000E+01, "m3","L3", "1.0");
   dry["tomna"] = UBASE("Maltese", "tomna", 1.818436800000000E-02, "m3","L3", "1.0");
   _map["Maltese"] = BaseSystem("Maltese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   liquid["cash"] = UBASE("Mauritius", "cash", 2.271100000000000E-01, "m3","L3", "1.0");
   _map["Mauritius"] = BaseSystem("Mauritius", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Mexican", "vara", 8.380000000000000E-01, "m","L", "1.0");
   area["fanega"] = UBASE("Mexican", "fanega", 3.566275929600000E+04, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Mexican", "libbra", 4.602463400000000E-01, "kg","M", "1.0");
   liquid["cuartillo(wine)"] = UBASE("Mexican", "cuartillo(wine)", 4.562640000000000E-04, "m3","L3", "1.0");
   liquid["cuartillo(oil)"] = UBASE("Mexican", "cuartillo(oil)", 5.061620000000000E-04, "m3","L3", "1.0");
   dry["cuartillo"] = UBASE("Mexican", "cuartillo", 1.891800000000000E-03, "m3","L3", "1.0");
   _map["Mexican"] = BaseSystem("Mexican", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["aldan"] = UBASE("Mozambican", "aldan", 1.600000000000000E+00, "m","L", "1.0");
   area["square-aldan"] = UBASE("Mozambican", "square-aldan", 2.560000000000000E+00, "m2","L2", "1.0");
   mass["bahar"] = UBASE("Mozambican", "bahar", 1.090000000000000E+02, "kg","M", "1.0");
   liquid["cubic-aldan"] = UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0");
   dry["cubic-aldan"] = UBASE("Mozambican", "cubic-aldan", 4.096000000000000E+00, "m3","L3", "1.0");
   _map["Mozambican"] = BaseSystem("Mozambican", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Moroccan", "pic", 6.100000000000000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Moroccan", "square-pic", 3.721000000000000E-01, "m2","L2", "1.0");
   mass["rotal"] = UBASE("Moroccan", "rotal", 5.075000000000000E-01, "kg","M", "1.0");
   liquid["mud"] = UBASE("Moroccan", "mud", 1.400000000000000E-02, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Moroccan", "cubic-pic", 2.269810000000000E-01, "m3","L3", "1.0");
   _map["Moroccan"] = BaseSystem("Moroccan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Nicaraguan", "vara", 8.128000000000000E-01, "m","L", "1.0");
   area["manzana"] = UBASE("Nicaraguan", "manzana", 6.988921041000000E+03, "m2","L2", "1.0");
   mass["fanega"] = UBASE("Nicaraguan", "fanega", 9.200000000000000E+01, "kg","M", "1.0");
   liquid["botella(nominal)"] = UBASE("Nicaraguan", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0");
   liquid["botella(min)"] = UBASE("Nicaraguan", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0");
   liquid["botella(max)"] = UBASE("Nicaraguan", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Nicaraguan", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0");
   _map["Nicaraguan"] = BaseSystem("Nicaraguan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fod"] = UBASE("Norwegian", "fod", 3.137000000000000E-01, "m","L", "1.0");
   area["kvadrat-rode"] = UBASE("Norwegian", "kvadrat-rode", 9.840769000000000E+00, "m2","L2", "1.0");
   mass["skaalpund"] = UBASE("Norwegian", "skaalpund", 4.981000000000000E-01, "kg","M", "1.0");
   liquid["pot"] = UBASE("Norwegian", "pot", 9.651000000000000E-04, "m3","L3", "1.0");
   dry["korntonde"] = UBASE("Norwegian", "korntonde", 1.389744000000000E-01, "m3","L3", "1.0");
   _map["Norwegian"] = BaseSystem("Norwegian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Paraguayan", "vara", 8.660000000000000E-01, "m","L", "1.0");
   length["vara(old)"] = UBASE("Paraguayan", "vara(old)", 8.385600000000000E-01, "m","L", "1.0");
   area["lifio"] = UBASE("Paraguayan", "lifio", 7.499560000000000E+01, "m2","L2", "1.0");
   area["lifio(old)"] = UBASE("Paraguayan", "lifio(old)", 4.883605057152000E+03, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Paraguayan", "libbra", 4.590000000000000E-01, "kg","M", "1.0");
   mass["libbra(old)"] = UBASE("Paraguayan", "libbra(old)", 4.600800000000000E-01, "kg","M", "1.0");
   liquid["fanega"] = UBASE("Paraguayan", "fanega", 2.880000000000000E-01, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Paraguayan", "cubic-vara", 6.494618960000000E-01, "m3","L3", "1.0");
   _map["Paraguayan"] = BaseSystem("Paraguayan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["zereth"] = UBASE("Persian", "zereth", 3.200000000000000E-01, "m","L", "1.0");
   length["farsakh"] = UBASE("Persian", "farsakh", 5.486400000000000E+03, "m","L", "1.0");
   area["gar"] = UBASE("Persian", "gar", 1.474560000000000E+01, "m2","L2", "1.0");
   mass["talent"] = UBASE("Persian", "talent", 3.260000000000000E+01, "kg","M", "1.0");
   mass["rottel"] = UBASE("Persian", "rottel", 4.600000000000000E-01, "kg","M", "1.0");
   liquid["sextario"] = UBASE("Persian", "sextario", 3.300000000000000E-04, "m3","L3", "1.0");
   liquid["chenica"] = UBASE("Persian", "chenica", 1.320000000000000E-03, "m3","L3", "1.0");
   dry["amphora"] = UBASE("Persian", "amphora", 3.260000000000000E-02, "m3","L3", "1.0");
   _map["Persian"] = BaseSystem("Persian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Peruvian", "vara", 8.359800000000000E-01, "m","L", "1.0");
   length["pie"] = UBASE("Peruvian", "pie", 2.786600000000000E-01, "m","L", "1.0");
   area["fanegada"] = UBASE("Peruvian", "fanegada", 3.144881521800000E+03, "m2","L2", "1.0");
   area["topo"] = UBASE("Peruvian", "topo", 2.705995833868800E+03, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Peruvian", "libbra", 4.600900000000000E-01, "kg","M", "1.0");
   liquid["cubic-vara"] = UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3","L3", "1.0");
   _map["Peruvian"] = BaseSystem("Peruvian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["talampakan"] = UBASE("Philippine", "talampakan", 3.048000000000000E-01, "m","L", "1.0");
   area["balita"] = UBASE("Philippine", "balita", 2.795000000000000E+03, "m2","L2", "1.0");
   mass["catty"] = UBASE("Philippine", "catty", 6.000000000000000E-01, "kg","M", "1.0");
   liquid["kaban"] = UBASE("Philippine", "kaban", 9.990000000000000E-02, "m3","L3", "1.0");
   dry["cubic-talampakan"] = UBASE("Philippine", "cubic-talampakan", 2.831684659200000E-02, "m3","L3", "1.0");
   _map["Philippine"] = BaseSystem("Philippine", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["stopa(new)"] = UBASE("Polish", "stopa(new)", 2.880000000000000E-01, "m","L", "1.0");
   length["stopa(Warsaw)"] = UBASE("Polish", "stopa(Warsaw)", 2.978000000000000E-01, "m","L", "1.0");
   length["stopa(Cracow)"] = UBASE("Polish", "stopa(Cracow)", 2.356400000000000E-01, "m","L", "1.0");
   area["square-stopa(new)"] = UBASE("Polish", "square-stopa(new)", 8.294400000000000E-02, "m2","L2", "1.0");
   area["square-stopa(Warsaw)"] = UBASE("Polish", "square-stopa(Warsaw)", 8.868484000000000E-02, "m2","L2", "1.0");
   area["square-stopa(Cracow)"] = UBASE("Polish", "square-stopa(Cracow)", 5.552620960000000E-02, "m2","L2", "1.0");
   mass["funt"] = UBASE("Polish", "funt", 4.055040000000000E-01, "kg","M", "1.0");
   liquid["kwarta"] = UBASE("Polish", "kwarta", 1.000000000000000E-03, "m3","L3", "1.0");
   dry["cubic-stopa"] = UBASE("Polish", "cubic-stopa", 2.388787200000000E-02, "m3","L3", "1.0");
   _map["Polish"] = BaseSystem("Polish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pe"] = UBASE("Portuguese", "pe", 3.285000000000000E-01, "m","L", "1.0");
   area["square-vera"] = UBASE("Portuguese", "square-vera", 1.199025000000000E+00, "m2","L2", "1.0");
   mass["libra"] = UBASE("Portuguese", "libra", 4.590000000000000E-01, "kg","M", "1.0");
   liquid["almude"] = UBASE("Portuguese", "almude", 1.650000000000000E-02, "m3","L3", "1.0");
   dry["fanga"] = UBASE("Portuguese", "fanga", 5.400000000000000E-02, "m3","L3", "1.0");
   _map["Portuguese"] = BaseSystem("Portuguese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   area["cuerda"] = UBASE("Puerto-Rican", "cuerda", 3.930395625000000E+03, "m2","L2", "1.0");
   _map["Puerto-Rican"] = BaseSystem("Puerto-Rican", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pes(common)"] = UBASE("Roman", "pes(common)", 2.944000000000000E-01, "m","L", "1.0");
   length["pes(1st-legal)"] = UBASE("Roman", "pes(1st-legal)", 2.962000000000000E-01, "m","L", "1.0");
   length["pes(2nd-legal)"] = UBASE("Roman", "pes(2nd-legal)", 2.967000000000000E-01, "m","L", "1.0");
   length["pes(Druisian)"] = UBASE("Roman", "pes(Druisian)", 3.196000000000000E-01, "m","L", "1.0");
   area["quadratus(common)"] = UBASE("Roman", "quadratus(common)", 8.667136000000000E-02, "m2","L2", "1.0");
   area["quadratus(1st-legal)"] = UBASE("Roman", "quadratus(1st-legal)", 8.773444000000000E-02, "m2","L2", "1.0");
   area["quadratus(2nd-legal)"] = UBASE("Roman", "quadratus(2nd-legal)", 8.803089000000000E-02, "m2","L2", "1.0");
   area["quadratus(Druisian)"] = UBASE("Roman", "quadratus(Druisian)", 1.021441600000000E-01, "m2","L2", "1.0");
   mass["uncia"] = UBASE("Roman", "uncia", 2.725000000000000E-02, "kg","M", "1.0");
   liquid["sextarius"] = UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3","L3", "1.0");
   dry["modius"] = UBASE("Roman", "modius", 8.788480000000000E-03, "m3","L3", "1.0");
   _map["Roman"] = BaseSystem("Roman", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["halibiu"] = UBASE("Romanian", "halibiu", 7.010000000000000E-01, "m","L", "1.0");
   length["palma"] = UBASE("Romanian", "palma", 2.500000000000000E-01, "m","L", "1.0");
   area["feredela"] = UBASE("Romanian", "feredela", 1.250000000000000E+00, "m2","L2", "1.0");
   mass["cantar"] = UBASE("Romanian", "cantar", 5.600000000000000E+01, "kg","M", "1.0");
   mass["font"] = UBASE("Romanian", "font", 5.000000000000000E-01, "kg","M", "1.0");
   liquid["viacka"] = UBASE("Romanian", "viacka", 1.415000000000000E-02, "m3","L3", "1.0");
   liquid["litra"] = UBASE("Romanian", "litra", 2.500000000000000E-04, "m3","L3", "1.0");
   dry["dimerla"] = UBASE("Romanian", "dimerla", 2.460000000000000E-02, "m3","L3", "1.0");
   _map["Romanian"] = BaseSystem("Romanian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foute"] = UBASE("Russian", "foute", 3.048000000000000E-01, "m","L", "1.0");
   mass["funt"] = UBASE("Russian", "funt", 4.095171792456690E-01, "kg","M", "1.0");
   mass["doli"] = UBASE("Russian", "doli", 4.443494030000000E-05, "kg","M", "1.0");
   liquid["vedro"] = UBASE("Russian", "vedro", 1.229941000000000E-02, "m3","L3", "1.0");
   dry["garnetz"] = UBASE("Russian", "garnetz", 3.279842666666670E-03, "m3","L3", "1.0");
   _map["Russian"] = BaseSystem("Russian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Salvadoran", "vara", 8.128000000000000E-01, "m","L", "1.0");
   area["square-vara"] = UBASE("Salvadoran", "square-vara", 6.606438400000000E-01, "m2","L2", "1.0");
   mass["fanega"] = UBASE("Salvadoran", "fanega", 9.200000000000000E+01, "kg","M", "1.0");
   liquid["botella(nominal)"] = UBASE("Salvadoran", "botella(nominal)", 6.500000000000000E-04, "m3","L3", "1.0");
   liquid["botella(min)"] = UBASE("Salvadoran", "botella(min)", 6.300000000000000E-04, "m3","L3", "1.0");
   liquid["botella(max)"] = UBASE("Salvadoran", "botella(max)", 6.700000000000000E-04, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Salvadoran", "cubic-vara", 5.369713131520000E-01, "m3","L3", "1.0");
   _map["Salvadoran"] = BaseSystem("Salvadoran", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["farsakh"] = UBASE("Saudi-Arabian", "farsakh", 4.830000000000000E+03, "m","L", "1.0");
   area["square-covid"] = UBASE("Saudi-Arabian", "square-covid", 2.323240000000000E-01, "m2","L2", "1.0");
   mass["maund"] = UBASE("Saudi-Arabian", "maund", 1.350000000000000E+00, "kg","M", "1.0");
   liquid["nusfiah"] = UBASE("Saudi-Arabian", "nusfiah", 9.500000000000000E-04, "m3","L3", "1.0");
   dry["teman"] = UBASE("Saudi-Arabian", "teman", 8.500000000000000E-02, "m3","L3", "1.0");
   _map["Saudi-Arabian"] = BaseSystem("Saudi-Arabian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["foot(traditional)"] = UBASE("Scottish", "foot(traditional)", 3.064460845920000E-01, "m","L", "1.0");
   length["foot"] = UBASE("Scottish", "foot", 3.064500000000000E-01, "m","L", "1.0");
   area["square-foot"] = UBASE("Scottish", "square-foot", 9.390920276176720E-02, "m2","L2", "1.0");
   mass["pound"] = UBASE("Scottish", "pound", 6.168856232000000E-01, "kg","M", "1.0");
   liquid["gallon"] = UBASE("Scottish", "gallon", 1.355590372684800E-02, "m3","L3", "1.0");
   liquid["jug"] = UBASE("Scottish", "jug", 1.694918130000000E-03, "m3","L3", "1.0");
   dry["lippy(oat-barley-malt)"] = UBASE("Scottish", "lippy(oat-barley-malt)", 3.283066337080000E-03, "m3","L3", "1.0");
   dry["lippy(wheat-peas-beans-rice-salt)"] = UBASE("Scottish", "lippy(wheat-peas-beans-rice-salt)", 2.250484660312000E-03, "m3","L3", "1.0");
   _map["Scottish"] = BaseSystem("Scottish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["top"] = UBASE("Somalian", "top", 3.920000000000000E+00, "m","L", "1.0");
   area["darat"] = UBASE("Somalian", "darat", 8.000000000000000E+03, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Somalian", "rottolo", 4.480000000000000E-01, "kg","M", "1.0");
   liquid["chela"] = UBASE("Somalian", "chela", 1.359000000000000E-03, "m3","L3", "1.0");
   dry["cubic-top"] = UBASE("Somalian", "cubic-top", 6.023628800000000E+01, "m3","L3", "1.0");
   _map["Somalian"] = BaseSystem("Somalian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Spanish", "vara", 8.359050000000000E-01, "m","L", "1.0");
   area["square-vara"] = UBASE("Spanish", "square-vara", 6.987371690250000E-01, "m2","L2", "1.0");
   mass["libra"] = UBASE("Spanish", "libra", 4.600930000000000E-01, "kg","M", "1.0");
   liquid["arroba(water)"] = UBASE("Spanish", "arroba(water)", 1.564316200000000E-02, "m3","L3", "1.0");
   liquid["arroba(wine)"] = UBASE("Spanish", "arroba(wine)", 1.613300000000000E-02, "m3","L3", "1.0");
   liquid["arroba(oil)"] = UBASE("Spanish", "arroba(oil)", 1.256300000000000E-02, "m3","L3", "1.0");
   dry["fanega"] = UBASE("Spanish", "fanega", 5.550100000000000E-02, "m3","L3", "1.0");
   _map["Spanish"] = BaseSystem("Spanish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fot"] = UBASE("Swedish", "fot", 2.969000000000000E-01, "m","L", "1.0");
   area["kvadratfot"] = UBASE("Swedish", "kvadratfot", 8.814961000000000E-02, "m2","L2", "1.0");
   mass["skalpund"] = UBASE("Swedish", "skalpund", 4.250797024000000E-01, "kg","M", "1.0");
   liquid["kanna"] = UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0");
   dry["kanna"] = UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3","L3", "1.0");
   _map["Swedish"] = BaseSystem("Swedish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["fuss"] = UBASE("Swiss", "fuss", 3.000000000000000E-01, "m","L", "1.0");
   length["douzieme"] = UBASE("Swiss", "douzieme", 1.880000000000000E-04, "m","L", "1.0");
   area["arpent"] = UBASE("Swiss", "arpent", 3.600000000000000E+01, "m2","L2", "1.0");
   mass["livre"] = UBASE("Swiss", "livre", 5.000000000000000E-01, "kg","M", "1.0");
   mass["livre(apothecary)"] = UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg","M", "1.0");
   liquid["pot"] = UBASE("Swiss", "pot", 1.500000000000000E-03, "m3","L3", "1.0");
   dry["emine"] = UBASE("Swiss", "emine", 1.500000000000000E-02, "m3","L3", "1.0");
   _map["Swiss"] = BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Syrian", "pic", 5.820000000000000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Syrian", "square-pic", 3.387240000000000E-01, "m2","L2", "1.0");
   mass["rottolo"] = UBASE("Syrian", "rottolo", 1.785000000000000E+00, "kg","M", "1.0");
   liquid["rotl"] = UBASE("Syrian", "rotl", 3.200000000000000E-03, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Syrian", "cubic-pic", 1.971373680000000E-01, "m3","L3", "1.0");
   _map["Syrian"] = BaseSystem("Syrian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["wah"] = UBASE("Thai", "wah", 2.000000000000000E+00, "m","L", "1.0");
   area["square-wah"] = UBASE("Thai", "square-wah", 4.000000000000000E+00, "m2","L2", "1.0");
   mass["tchang"] = UBASE("Thai", "tchang", 1.200000000000000E+00, "kg","M", "1.0");
   liquid["tanan(nomial)"] = UBASE("Thai", "tanan(nomial)", 1.000000000000000E-03, "m3","L3", "1.0");
   liquid["tanan(min)"] = UBASE("Thai", "tanan(min)", 9.000000000000000E-04, "m3","L3", "1.0");
   liquid["tanan(max)"] = UBASE("Thai", "tanan(max)", 1.200000000000000E-03, "m3","L3", "1.0");
   dry["cubic-wah"] = UBASE("Thai", "cubic-wah", 8.000000000000000E+00, "m3","L3", "1.0");
   _map["Thai"] = BaseSystem("Thai", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic(Tunisian)"] = UBASE("Tunisian", "pic(Tunisian)", 5.625000000000000E-01, "m","L", "1.0");
   length["pic(Endezian)"] = UBASE("Tunisian", "pic(Endezian)", 6.730000000000000E-01, "m","L", "1.0");
   length["pic(Arabic)"] = UBASE("Tunisian", "pic(Arabic)", 4.880000000000000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Tunisian", "square-pic", 3.164062500000000E-01, "m2","L2", "1.0");
   mass["uckir"] = UBASE("Tunisian", "uckir", 3.149500000000000E-02, "kg","M", "1.0");
   liquid["cafisso"] = UBASE("Tunisian", "cafisso", 4.960000000000000E-01, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Tunisian", "cubic-pic", 1.779785156250000E-01, "m3","L3", "1.0");
   _map["Tunisian"] = BaseSystem("Tunisian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pic"] = UBASE("Turkish", "pic", 7.553972464870000E-01, "m","L", "1.0");
   area["square-pic"] = UBASE("Turkish", "square-pic", 5.706250000001410E-01, "m2","L2", "1.0");
   mass["oka"] = UBASE("Turkish", "oka", 1.283000000000000E+00, "kg","M", "1.0");
   liquid["cubic-zira"] = UBASE("Turkish", "cubic-zira", 1.000000000000000E+00, "m3","L3", "1.0");
   liquid["fortin"] = UBASE("Turkish", "fortin", 4.000000000000000E-01, "m3","L3", "1.0");
   dry["cubic-pic"] = UBASE("Turkish", "cubic-pic", 4.310485537767510E-01, "m3","L3", "1.0");
   _map["Turkish"] = BaseSystem("Turkish", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["hasch/altschin"] = UBASE("Turkmenian", "hasch/altschin", 7.112000000000000E-01, "m","L", "1.0");
   area["square-hasch"] = UBASE("Turkmenian", "square-hasch", 5.058054400000000E-01, "m2","L2", "1.0");
   mass["batman(nomial)"] = UBASE("Turkmenian", "batman(nomial)", 1.265000000000000E+02, "kg","M", "1.0");
   mass["batman(min)"] = UBASE("Turkmenian", "batman(min)", 1.250000000000000E+02, "kg","M", "1.0");
   mass["batman(max)"] = UBASE("Turkmenian", "batman(max)", 1.280000000000000E+02, "kg","M", "1.0");
   liquid["cubic-hasch"] = UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0");
   dry["cubic-hasch"] = UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3","L3", "1.0");
   _map["Turkmenian"] = BaseSystem("Turkmenian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["vara"] = UBASE("Venezuelan", "vara", 8.000000000000000E-01, "m","L", "1.0");
   area["square-vara"] = UBASE("Venezuelan", "square-vara", 6.400000000000000E-01, "m2","L2", "1.0");
   mass["libbra"] = UBASE("Venezuelan", "libbra", 5.000000000000000E-01, "kg","M", "1.0");
   liquid["arroba"] = UBASE("Venezuelan", "arroba", 1.613700000000000E-02, "m3","L3", "1.0");
   dry["cubic-vara"] = UBASE("Venezuelan", "cubic-vara", 5.120000000000000E-01, "m3","L3", "1.0");
   _map["Venezuelan"] = BaseSystem("Venezuelan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["stopa"] = UBASE("Yugoslavian", "stopa", 3.160000000000000E-01, "m","L", "1.0");
   area["square-stopa"] = UBASE("Yugoslavian", "square-stopa", 9.985600000000000E-02, "m2","L2", "1.0");
   mass["oka"] = UBASE("Yugoslavian", "oka", 1.280000000000000E+00, "kg","M", "1.0");
   liquid["cubic-stopa"] = UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0");
   dry["cubic-stopa"] = UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3","L3", "1.0");
   _map["Yugoslavian"] = BaseSystem("Yugoslavian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["cape-foot"] = UBASE("South-African", "cape-foot", 3.148580000000000E-01, "m","L", "1.0");
   length["rijnlandse-voet"] = UBASE("South-African", "rijnlandse-voet", 3.139440000000000E-01, "m","L", "1.0");
   area["morgen"] = UBASE("South-African", "morgen", 8.565320000000000E+03, "m2","L2", "1.0");
   mass["pond"] = UBASE("South-African", "pond", 4.940903200000000E-01, "kg","M", "1.0");
   liquid["kanne"] = UBASE("South-African", "kanne", 1.329000000000000E-03, "m3","L3", "1.0");
   liquid["firkin"] = UBASE("South-African", "firkin", 4.091482800000000E-02, "m3","L3", "1.0");
   dry["schepel"] = UBASE("South-African", "schepel", 2.727500000000000E-02, "m3","L3", "1.0");
   dry["gantang"] = UBASE("South-African", "gantang", 9.200000000000000E-03, "m3","L3", "1.0");
   _map["South-African"] = BaseSystem("South-African", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   mass["catty"] = UBASE("Far-East", "catty", 6.048000000000000E-01, "kg","M", "1.0");
   _map["Far-East"] = BaseSystem("Far-East", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pik"] = UBASE("East-Med", "pik", 7.112000000000000E-01, "m","L", "1.0");
   length["arshin"] = UBASE("East-Med", "arshin", 7.112000000000000E-01, "m","L", "1.0");
   area["square-pik"] = UBASE("East-Med", "square-pik", 5.058054400000000E-01, "m2","L2", "1.0");
   area["square-arshin"] = UBASE("East-Med", "square-arshin", 5.058054400000000E-01, "m2","L2", "1.0");
   mass["oka"] = UBASE("East-Med", "oka", 1.270058636000000E+00, "kg","M", "1.0");
   liquid["cubic-pik"] = UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0");
   liquid["krina"] = UBASE("East-Med", "krina", 2.000000000000000E-02, "m3","L3", "1.0");
   dry["cubic-pik"] = UBASE("East-Med", "cubic-pik", 3.597288289280000E-01, "m3","L3", "1.0");
   dry["cubic-arshin"] = UBASE("East-Med", "cubic-arshin", 3.597288289280000E-01, "m3","L3", "1.0");
   _map["East-Med"] = BaseSystem("East-Med", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["taung"] = UBASE("Myanmar", "taung", 4.572000000000000E-01, "m","L", "1.0");
   area["square-taung"] = UBASE("Myanmar", "square-taung", 2.090318400000000E-01, "m2","L2", "1.0");
   mass["aseittha"] = UBASE("Myanmar", "aseittha", 4.082330000000000E-01, "kg","M", "1.0");
   liquid["hkwet"] = UBASE("Myanmar", "hkwet", 1.278590000000000E-03, "m3","L3", "1.0");
   dry["cubic-taung"] = UBASE("Myanmar", "cubic-taung", 9.556935724800000E-02, "m3","L3", "1.0");
   _map["Myanmar"] = BaseSystem("Myanmar", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["palf"] = UBASE("Welsh", "palf", 3.048000000000000E-01, "m","L", "1.0");
   area["erw(Venedotian)"] = UBASE("Welsh", "erw(Venedotian)", 1.426990694400000E+03, "m2","L2", "1.0");
   area["erw(Dimetian)"] = UBASE("Welsh", "erw(Dimetian)", 8.561944166400000E+02, "m2","L2", "1.0");
   mass["pwys"] = UBASE("Welsh", "pwys", 4.535923380000000E-01, "kg","M", "1.0");
   liquid["hestawr"] = UBASE("Welsh", "hestawr", 7.047814033376000E-02, "m3","L3", "1.0");
   dry["cubic-palf"] = UBASE("Welsh", "cubic-palf", 2.831684659200000E-02, "m3","L3", "1.0");
   _map["Welsh"] = BaseSystem("Welsh", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["paramaanuwa"] = UBASE("Sri-Lankan", "paramaanuwa", 3.306670000000000E-08, "m","L", "1.0");
   area["laaha"] = UBASE("Sri-Lankan", "laaha", 4.598700000000000E+00, "m2","L2", "1.0");
   mass["gunja"] = UBASE("Sri-Lankan", "gunja", 1.200000000000000E-04, "kg","M", "1.0");
   liquid["seer"] = UBASE("Sri-Lankan", "seer", 1.135623535200000E-03, "m3","L3", "1.0");
   dry["seer"] = UBASE("Sri-Lankan", "seer", 7.062500000000000E-04, "m3","L3", "1.0");
   _map["Sri-Lankan"] = BaseSystem("Sri-Lankan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["rahf"] = UBASE("Malagasy", "rahf", 1.180084000000000E+00, "m","L", "1.0");
   area["square-rahf"] = UBASE("Malagasy", "square-rahf", 1.392598247056000E+00, "m2","L2", "1.0");
   mass["nanki"] = UBASE("Malagasy", "nanki", 6.479891000000000E-04, "kg","M", "1.0");
   liquid["cubic-rahf"] = UBASE("Malagasy", "cubic-rahf", 1.643382909778830E+00, "m3","L3", "1.0");
   dry["bambou"] = UBASE("Malagasy", "bambou", 2.001579185478780E-03, "m3","L3", "1.0");
   _map["Malagasy"] = BaseSystem("Malagasy", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["ohra"] = UBASE("Tanzanian", "ohra", 5.709920000000000E-01, "m","L", "1.0");
   area["square-ohra"] = UBASE("Tanzanian", "square-ohra", 3.260318640640000E-01, "m2","L2", "1.0");
   mass["mane"] = UBASE("Tanzanian", "mane", 9.104052458270000E-01, "kg","M", "1.0");
   mass["bazla"] = UBASE("Tanzanian", "bazla", 1.552465245562000E+01, "kg","M", "1.0");
   mass["franzella"] = UBASE("Tanzanian", "franzella", 1.600373671681400E+01, "kg","M", "1.0");
   liquid["cubic-ohra"] = UBASE("Tanzanian", "cubic-ohra", 1.861615861256320E-01, "m3","L3", "1.0");
   dry["djezla"] = UBASE("Tanzanian", "djezla", 2.574214075690580E-01, "m3","L3", "1.0");
   _map["Tanzanian"] = BaseSystem("Tanzanian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["gaz-i-shah"] = UBASE("Afghan", "gaz-i-shah", 1.065000000000000E+00, "m","L", "1.0");
   area["jareeb"] = UBASE("Afghan", "jareeb", 2.000000000000000E+03, "m2","L2", "1.0");
   mass["nakhud"] = UBASE("Afghan", "nakhud", 1.900000000000000E-04, "kg","M", "1.0");
   mass["seer"] = UBASE("Afghan", "seer", 7.066000000000000E+00, "kg","M", "1.0");
   liquid["cubic-gaz-i-shah"] = UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0");
   dry["cubic-gaz-i-shah"] = UBASE("Afghan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3","L3", "1.0");
   _map["Afghan"] = BaseSystem("Afghan", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["cheok"] = UBASE("Korean", "cheok", 3.030303030303030E-01, "m","L", "1.0");
   area["pyeong"] = UBASE("Korean", "pyeong", 3.305785123966940E+00, "m2","L2", "1.0");
   mass["gwan"] = UBASE("Korean", "gwan", 3.750000000000000E+00, "kg","M", "1.0");
   liquid["doe"] = UBASE("Korean", "doe", 1.803906836964690E-03, "m3","L3", "1.0");
   dry["cubic-cheok"] = UBASE("Korean", "cubic-cheok", 2.782647410746580E-02, "m3","L3", "1.0");
   _map["Korean"] = BaseSystem("Korean", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["muscat"] = UBASE("Omani", "muscat", 9.939020000000000E-01, "m","L", "1.0");
   area["square-muscat"] = UBASE("Omani", "square-muscat", 9.878411856040000E-01, "m2","L2", "1.0");
   mass["maund"] = UBASE("Omani", "maund", 3.968933237500000E+00, "kg","M", "1.0");
   liquid["ferren"] = UBASE("Omani", "ferren", 3.000090255291360E-02, "m3","L3", "1.0");
   dry["cubic-muscat"] = UBASE("Omani", "cubic-muscat", 9.818173300541870E-01, "m3","L3", "1.0");
   _map["Omani"] = BaseSystem("Omani", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["karam"] = UBASE("Pakistani", "karam", 1.676400000000000E+00, "m","L", "1.0");
   area["square-karam"] = UBASE("Pakistani", "square-karam", 2.810316960000000E+00, "m2","L2", "1.0");
   mass["tola"] = UBASE("Pakistani", "tola", 1.166375000000000E-02, "kg","M", "1.0");
   liquid["cubic-karam"] = UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0");
   dry["cubic-karam"] = UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3","L3", "1.0");
   _map["Pakistani"] = BaseSystem("Pakistani", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["chhioh"] = UBASE("Taiwanese", "chhioh", 3.030303030303030E-01, "m","L", "1.0");
   area["pe"] = UBASE("Taiwanese", "pe", 3.305785123966940E+00, "m2","L2", "1.0");
   mass["nu"] = UBASE("Taiwanese", "nu", 3.750000000000000E-02, "kg","M", "1.0");
   liquid["liter"] = UBASE("Taiwanese", "liter", 1.000000000000000E-03, "m3","L3", "1.0");
   dry["cubic-chhioh"] = UBASE("Taiwanese", "cubic-chhioh", 2.782647410746580E-02, "m3","L3", "1.0");
   _map["Taiwanese"] = BaseSystem("Taiwanese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["yaar"] = UBASE("Tamil", "yaar", 9.333123317760000E-01, "m","L", "1.0");
   area["cent"] = UBASE("Tamil", "cent", 4.046856422400000E+01, "m2","L2", "1.0");
   mass["palam"] = UBASE("Tamil", "palam", 4.800000000000000E-02, "kg","M", "1.0");
   liquid["padi"] = UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0");
   dry["padi"] = UBASE("Tamil", "padi", 1.344000000000000E-03, "m3","L3", "1.0");
   _map["Tamil"] = BaseSystem("Tamil", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["angul"] = UBASE("Nepalese", "angul", 1.905000000000000E-02, "m","L", "1.0");
   area["dam"] = UBASE("Nepalese", "dam", 1.987254090000000E+00, "m2","L2", "1.0");
   area["dhur"] = UBASE("Nepalese", "dhur", 1.693157904000000E+01, "m2","L2", "1.0");
   mass["tola"] = UBASE("Nepalese", "tola", 1.166000000000000E-02, "kg","M", "1.0");
   mass["pau"] = UBASE("Nepalese", "pau", 1.990000000000000E-01, "kg","M", "1.0");
   liquid["pathi"] = UBASE("Nepalese", "pathi", 4.545960000000000E-03, "m3","L3", "1.0");
   dry["cubic-angul"] = UBASE("Nepalese", "cubic-angul", 6.913292625000000E-06, "m3","L3", "1.0");
   _map["Nepalese"] = BaseSystem("Nepalese", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["pous"] = UBASE("Byzantine", "pous", 3.085000000000000E-01, "m","L", "1.0");
   area["pous"] = UBASE("Byzantine", "pous", 9.517225000000000E-02, "m2","L2", "1.0");
   mass["ogkia"] = UBASE("Byzantine", "ogkia", 2.725000000000000E-02, "kg","M", "1.0");
   liquid["xestes"] = UBASE("Byzantine", "xestes", 5.492800000000000E-04, "m3","L3", "1.0");
   dry["cubic-pous"] = UBASE("Byzantine", "cubic-pous", 2.936063912500000E-02, "m3","L3", "1.0");
   _map["Byzantine"] = BaseSystem("Byzantine", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["sajin"] = UBASE("Tatar", "sajin", 2.133600000000000E+00, "m","L", "1.0");
   area["quadrat-sajin"] = UBASE("Tatar", "quadrat-sajin", 4.552248960000000E+00, "m2","L2", "1.0");
   mass["qadaq"] = UBASE("Tatar", "qadaq", 4.095000000000000E-01, "kg","M", "1.0");
   liquid["garnets"] = UBASE("Tatar", "garnets", 3.279733333333330E-03, "m3","L3", "1.0");
   dry["cubic-qadaq"] = UBASE("Tatar", "cubic-qadaq", 6.866915737500000E-02, "m3","L3", "1.0");
   _map["Tatar"] = BaseSystem("Tatar", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


   length["kus"] = UBASE("Sumerian", "kus", 5.186000000000000E-01, "m","L", "1.0");
   area["gin"] = UBASE("Sumerian", "gin", 2.689459600000000E-01, "m2","L2", "1.0");
   mass["mana"] = UBASE("Sumerian", "mana", 5.040000000000000E-01, "kg","M", "1.0");
   liquid["sila"] = UBASE("Sumerian", "sila", 1.000000000000000E-03, "m3","L3", "1.0");
   dry["cubic-kus"] = UBASE("Sumerian", "cubic-kus", 1.394753748560000E-01, "m3","L3", "1.0");
   _map["Sumerian"] = BaseSystem("Sumerian", length, area, mass, liquid, dry, "1.0");

   length.clear();
   area.clear();
   mass.clear();
   liquid.clear();
   dry.clear();


}

// EOF
