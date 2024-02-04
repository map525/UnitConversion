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
// File GLOBAL_UNITS.cpp
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

#include"GLOBAL_UNITS.hpp"

GLOBAL_UNITS& GLOBAL_UNITS::Instance(void)
{
    static GLOBAL_UNITS singleton;
    return singleton;
}

void GLOBAL_UNITS::unit0(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["astronomical-unit"] = UBASE("@", "astronomical-unit", 1.495978707000000E+11, "m", "L", "1.0");
   length["AU"] = UBASE("@", "AU", 1.495978707000000E+11, "m", "L", "1.0");
   length["UA"] = UBASE("@", "UA", 1.495978707000000E+11, "m", "L", "1.0");
   length["au"] = UBASE("@", "au", 1.495978707000000E+11, "m", "L", "1.0");
   length["ua"] = UBASE("@", "ua", 1.495978707000000E+11, "m", "L", "1.0");
   length["hubble"] = UBASE("@", "hubble", 9.454254955488000E+24, "m", "L", "1.0");
   length["light-minute"] = UBASE("@", "light-minute", 1.798754748000000E+10, "m", "L", "1.0");
   length["lmin"] = UBASE("@", "lmin", 1.798754748000000E+10, "m", "L", "1.0");
   length["cmin"] = UBASE("@", "cmin", 1.798754748000000E+10, "m", "L", "1.0");
   length["light-second"] = UBASE("@", "light-second", 2.997924580000000E+08, "m", "L", "1.0");
   length["lsec"] = UBASE("@", "lsec", 2.997924580000000E+08, "m", "L", "1.0");
   length["csec"] = UBASE("@", "csec", 2.997924580000000E+08, "m", "L", "1.0");
   length["light-year"] = UBASE("@", "light-year", 9.460730472580800E+15, "m", "L", "1.0");
   length["ly"] = UBASE("@", "ly", 9.460730472580800E+15, "m", "L", "1.0");
   length["AL"] = UBASE("@", "AL", 9.460730472580800E+15, "m", "L", "1.0");
   length["al. light-years"] = UBASE("@", "al. light-years", 9.460730472580800E+15, "m", "L", "1.0");
   length["parsec"] = UBASE("@", "parsec", 3.085677581491370E+16, "m", "L", "1.0");
   length["pc"] = UBASE("@", "pc", 3.085677581491370E+16, "m", "L", "1.0");
   length["parsecs"] = UBASE("@", "parsecs", 3.085677581491370E+16, "m", "L", "1.0");
   length["siriometer"] = UBASE("@", "siriometer", 1.495978707000000E+17, "m", "L", "1.0");
   length["siriusweit"] = UBASE("@", "siriusweit", 1.542838790745680E+17, "m", "L", "1.0");
   length["spat"] = UBASE("@", "spat", 1.000000000000000E+12, "m", "L", "1.0");
   length["S"] = UBASE("@", "S", 1.000000000000000E+12, "m", "L", "1.0");
   area["square-parsec"] = UBASE("@", "square-parsec", 9.521406136918410E+32, "m2", "L2", "1.0");
   area["sq-parsec"] = UBASE("@", "sq-parsec", 9.521406136918410E+32, "m2", "L2", "1.0");
   mass["mass-of-sun"] = UBASE("@", "mass-of-sun", 1.988470000000000E+30, "kg", "M", "1.0");
   mass["solar-mass"] = UBASE("@", "solar-mass", 1.988470000000000E+30, "kg", "M", "1.0");
   mass["MO"] = UBASE("@", "MO", 1.988470000000000E+30, "kg", "M", "1.0");
   dry["cubic-parsec"] = UBASE("@", "cubic-parsec", 2.937998946096350E+49, "m3", "L3", "1.0");
   dry["cu-parsec"] = UBASE("@", "cu-parsec", 2.937998946096350E+49, "m3", "L3", "1.0");
   _map["@"] = BaseSystem("@", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit1(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["au-of-length"] = UBASE("a.u.", "au-of-length", 5.291772109030000E-11, "m", "L", "1.0");
   length["aul"] = UBASE("a.u.", "aul", 5.291772109030000E-11, "m", "L", "1.0");
   length["bohr"] = UBASE("a.u.", "bohr", 5.291772109060850E-11, "m", "L", "1.0");
   length["ao"] = UBASE("a.u.", "ao", 5.291772109060850E-11, "m", "L", "1.0");
   length["b"] = UBASE("a.u.", "b", 5.291772109060850E-11, "m", "L", "1.0");
   length["bohr-radius"] = UBASE("a.u.", "bohr-radius", 5.291772109060850E-11, "m", "L", "1.0");
   length["first-bohr-radius"] = UBASE("a.u.", "first-bohr-radius", 5.291772109060850E-11, "m", "L", "1.0");
   area["square-bohr"] = UBASE("a.u.", "square-bohr", 2.800285205423440E-21, "m2", "L2", "1.0");
   area["ao2"] = UBASE("a.u.", "ao2", 2.800285205423440E-21, "m2", "L2", "1.0");
   mass["au-of-mass"] = UBASE("a.u.", "au-of-mass", 9.109383701500000E-31, "kg", "M", "1.0");
   mass["aum"] = UBASE("a.u.", "aum", 9.109383701500000E-31, "kg", "M", "1.0");
   mass["electron-rest-mass"] = UBASE("a.u.", "electron-rest-mass", 9.109383701500000E-31, "kg", "M", "1.0");
   mass["mo"] = UBASE("a.u.", "mo", 9.109383701500000E-31, "kg", "M", "1.0");
   mass["me"] = UBASE("a.u.", "me", 9.109383701500000E-31, "kg", "M", "1.0");
   dry["atomic-volume"] = UBASE("a.u.", "atomic-volume", 6.207146679245500E-31, "m3", "L3", "1.0");
   dry["ao3"] = UBASE("a.u.", "ao3", 6.207146679245500E-31, "m3", "L3", "1.0");
   _map["a.u."] = BaseSystem("a.u.", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit2(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["berri"] = UBASE("Abyssinian", "berri", 8.232000000000000E-01, "m", "L", "1.0");
   length["farsang"] = UBASE("Abyssinian", "farsang", 5.070226000000000E+03, "m", "L", "1.0");
   length["pic"] = UBASE("Abyssinian", "pic", 6.860000000000000E-01, "m", "L", "1.0");
   area["square-pic"] = UBASE("Abyssinian", "square-pic", 4.705960000000000E-01, "m2", "L2", "1.0");
   mass["derime"] = UBASE("Abyssinian", "derime", 2.591666666666670E-03, "kg", "M", "1.0");
   mass["drachm"] = UBASE("Abyssinian", "drachm", 2.844166666666670E-04, "kg", "M", "1.0");
   mass["mocha"] = UBASE("Abyssinian", "mocha", 3.110000000000000E-02, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Abyssinian", "rottolo", 3.110000000000000E-01, "kg", "M", "1.0");
   mass["wakea"] = UBASE("Abyssinian", "wakea", 2.591666666666670E-02, "kg", "M", "1.0");
   liquid["ardeb(long)"] = UBASE("Abyssinian", "ardeb(long)", 1.056000000000000E-02, "m3", "L3", "1.0");
   liquid["ardeb(short)"] = UBASE("Abyssinian", "ardeb(short)", 4.400000000000000E-03, "m3", "L3", "1.0");
   liquid["kuba"] = UBASE("Abyssinian", "kuba", 1.012000000000000E-03, "m3", "L3", "1.0");
   liquid["madega"] = UBASE("Abyssinian", "madega", 4.400000000000000E-04, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Abyssinian", "cubic-pic", 3.228288560000000E-01, "m3", "L3", "1.0");
   _map["Abyssinian"] = BaseSystem("Abyssinian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit3(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["foot"] = UBASE("African", "foot", 3.148580000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("African", "feet", 3.148580000000000E-01, "m", "L", "1.0");
   length["mkono"] = UBASE("African", "mkono", 4.572000000000000E-01, "m", "L", "1.0");
   length["travel-hour"] = UBASE("African", "travel-hour", 3.700000000000000E+03, "m", "L", "1.0");
   mass["bahar"] = UBASE("African", "bahar", 1.090000000000000E+02, "kg", "M", "1.0");
   _map["African"] = BaseSystem("African", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit4(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["gaz-i-shah"] = UBASE("Afgan", "gaz-i-shah", 1.065000000000000E+00, "m", "L", "1.0");
   length["girah-i-gaz-i-shah"] = UBASE("Afgan", "girah-i-gaz-i-shah", 6.600000000000000E-02, "m", "L", "1.0");
   length["gaz-i-mimar"] = UBASE("Afgan", "gaz-i-mimar", 8.380000000000000E-01, "m", "L", "1.0");
   length["gaz-i-jareeb"] = UBASE("Afgan", "gaz-i-jareeb", 7.360000000000000E-01, "m", "L", "1.0");
   length["jareeb"] = UBASE("Afgan", "jareeb", 4.418300000000000E+01, "m", "L", "1.0");
   length["biswah"] = UBASE("Afgan", "biswah", 9.879000000000000E+00, "m", "L", "1.0");
   length["biswasah"] = UBASE("Afgan", "biswasah", 2.209000000000000E+00, "m", "L", "1.0");
   length["goes"] = UBASE("Afgan", "goes", 1.160000000000000E+00, "m", "L", "1.0");
   length["kandahari"] = UBASE("Afgan", "kandahari", 1.054100000000000E+00, "m", "L", "1.0");
   length["kadam"] = UBASE("Afgan", "kadam", 7.112000000000000E-01, "m", "L", "1.0");
   length["farsakh"] = UBASE("Afgan", "farsakh", 8.046720000000000E+03, "m", "L", "1.0");
   area["jareeb"] = UBASE("Afgan", "jareeb", 3.048000000000000E-01, "m2", "L2", "1.0");
   area["tanab"] = UBASE("Afgan", "tanab", 3.439827959040000E+05, "m2", "L2", "1.0");
   mass["nakhud"] = UBASE("Afgan", "nakhud", 1.900000000000000E-04, "kg", "M", "1.0");
   mass["misqal"] = UBASE("Afgan", "misqal", 4.560000000000000E-03, "kg", "M", "1.0");
   mass["khurd"] = UBASE("Afgan", "khurd", 1.104000000000000E-01, "kg", "M", "1.0");
   mass["pao"] = UBASE("Afgan", "pao", 4.416000000000000E-01, "kg", "M", "1.0");
   mass["charak"] = UBASE("Afgan", "charak", 1.766400000000000E+00, "kg", "M", "1.0");
   mass["seer"] = UBASE("Afgan", "seer", 7.066000000000000E+00, "kg", "M", "1.0");
   mass["miskal"] = UBASE("Afgan", "miskal", 2.355333333333330E-01, "kg", "M", "1.0");
   mass["man"] = UBASE("Afgan", "man", 5.652800000000000E+02, "kg", "M", "1.0");
   mass["kharwar"] = UBASE("Afgan", "kharwar", 5.652800000000000E+04, "kg", "M", "1.0");
   mass["puri"] = UBASE("Afgan", "puri", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["khaltar"] = UBASE("Afgan", "khaltar", 7.066000000000000E+00, "kg", "M", "1.0");
   mass["herati-seer"] = UBASE("Afgan", "herati-seer", 9.330400000000000E-02, "kg", "M", "1.0");
   mass["herati-man"] = UBASE("Afgan", "herati-man", 3.732160000000000E+00, "kg", "M", "1.0");
   mass["herati-kharwar"] = UBASE("Afgan", "herati-kharwar", 3.732160000000000E+02, "kg", "M", "1.0");
   mass["mazar-seer"] = UBASE("Afgan", "mazar-seer", 1.049670000000000E+01, "kg", "M", "1.0");
   mass["mazar-man"] = UBASE("Afgan", "mazar-man", 1.679472000000000E+02, "kg", "M", "1.0");
   mass["marzar-kharwar"] = UBASE("Afgan", "marzar-kharwar", 5.038416000000000E+02, "kg", "M", "1.0");
   mass["tashkurghan-seer"] = UBASE("Afgan", "tashkurghan-seer", 8.397360000000000E+00, "kg", "M", "1.0");
   mass["tashkurghan-man"] = UBASE("Afgan", "tashkurghan-man", 6.717888000000000E+01, "kg", "M", "1.0");
   liquid["cubic-gaz-i-shah"] = UBASE("Afgan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3", "L3", "1.0");
   dry["cubic-gaz-i-shah"] = UBASE("Afgan", "cubic-gaz-i-shah", 1.207949625000000E+00, "m3", "L3", "1.0");
   _map["Afgan"] = BaseSystem("Afgan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit5(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["nus(raby)"] = UBASE("Algerian", "nus(raby)", 2.335000000000000E-01, "m", "L", "1.0");
   length["nus(torky)"] = UBASE("Algerian", "nus(torky)", 3.115000000000000E-01, "m", "L", "1.0");
   length["pic(dzera-a-raby)"] = UBASE("Algerian", "pic(dzera-a-raby)", 4.670000000000000E-01, "m", "L", "1.0");
   length["pic(dzera-a-torky)"] = UBASE("Algerian", "pic(dzera-a-torky)", 6.230000000000000E-01, "m", "L", "1.0");
   length["rebia(raby)"] = UBASE("Algerian", "rebia(raby)", 1.167500000000000E-01, "m", "L", "1.0");
   length["rebia(torky)"] = UBASE("Algerian", "rebia(torky)", 1.557500000000000E-01, "m", "L", "1.0");
   length["termin(raby)"] = UBASE("Algerian", "termin(raby)", 5.837500000000000E-02, "m", "L", "1.0");
   length["termin(torky)"] = UBASE("Algerian", "termin(torky)", 7.787500000000000E-02, "m", "L", "1.0");
   area["square-pic(dzera-a-torky)"] = UBASE("Algerian", "square-pic(dzera-a-torky)", 3.881290000000000E-01, "m2", "L2", "1.0");
   area["square-pic(dzera-a-raby)"] = UBASE("Algerian", "square-pic(dzera-a-raby)", 2.180890000000000E-01, "m2", "L2", "1.0");
   mass["cantar(kebyr)"] = UBASE("Algerian", "cantar(kebyr)", 8.191200000000000E+01, "kg", "M", "1.0");
   mass["cantar(khaldary)"] = UBASE("Algerian", "cantar(khaldary)", 6.143400000000000E+01, "kg", "M", "1.0");
   mass["cantar(thary)"] = UBASE("Algerian", "cantar(thary)", 5.460800000000000E+01, "kg", "M", "1.0");
   mass["gyral"] = UBASE("Algerian", "gyral", 2.070000000000000E-01, "kg", "M", "1.0");
   mass["metical"] = UBASE("Algerian", "metical", 4.707586206896550E-03, "kg", "M", "1.0");
   mass["metsquat"] = UBASE("Algerian", "metsquat", 4.707586206896550E-03, "kg", "M", "1.0");
   mass["rottolo(kebyr)"] = UBASE("Algerian", "rottolo(kebyr)", 8.191200000000000E-01, "kg", "M", "1.0");
   mass["rottolo(khaldary)"] = UBASE("Algerian", "rottolo(khaldary)", 6.143400000000000E-01, "kg", "M", "1.0");
   mass["rottolo(thary)"] = UBASE("Algerian", "rottolo(thary)", 5.460800000000000E-01, "kg", "M", "1.0");
   mass["ukkia"] = UBASE("Algerian", "ukkia", 3.413000000000000E-02, "kg", "M", "1.0");
   liquid["caffiso"] = UBASE("Algerian", "caffiso", 3.170833333333330E-01, "m3", "L3", "1.0");
   liquid["calisse"] = UBASE("Algerian", "calisse", 3.170833333333330E-01, "m3", "L3", "1.0");
   liquid["khoul"] = UBASE("Algerian", "khoul", 1.666666666666670E-02, "m3", "L3", "1.0");
   liquid["kolleh"] = UBASE("Algerian", "kolleh", 1.666666666666670E-02, "m3", "L3", "1.0");
   liquid["metalli"] = UBASE("Algerian", "metalli", 1.790000000000000E-02, "m3", "L3", "1.0");
   liquid["saah"] = UBASE("Algerian", "saah", 5.800000000000000E-02, "m3", "L3", "1.0");
   liquid["ssah"] = UBASE("Algerian", "ssah", 5.800000000000000E-02, "m3", "L3", "1.0");
   dry["caffiso"] = UBASE("Algerian", "caffiso", 3.174700000000000E-01, "m3", "L3", "1.0");
   dry["tarie"] = UBASE("Algerian", "tarie", 1.587350000000000E-01, "m3", "L3", "1.0");
   dry["tarri"] = UBASE("Algerian", "tarri", 1.587350000000000E-01, "m3", "L3", "1.0");
   _map["Algerian"] = BaseSystem("Algerian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit6(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["chai-vai"] = UBASE("Annamese", "chai-vai", 1.463040000000000E+01, "m", "L", "1.0");
   length["cong-ly"] = UBASE("Annamese", "cong-ly", 1.000000000000000E+03, "m", "L", "1.0");
   length["dam"] = UBASE("Annamese", "dam", 5.760000000000000E+02, "m", "L", "1.0");
   length["gon"] = UBASE("Annamese", "gon", 1.410000000000000E+02, "m", "L", "1.0");
   length["hao"] = UBASE("Annamese", "hao", 4.000000000000000E-05, "m", "L", "1.0");
   length["hot"] = UBASE("Annamese", "hot", 4.000000000000000E-07, "m", "L", "1.0");
   length["li"] = UBASE("Annamese", "li", 4.000000000000000E-04, "m", "L", "1.0");
   length["ly"] = UBASE("Annamese", "ly", 4.000000000000000E-04, "m", "L", "1.0");
   length["ly(Annamite)"] = UBASE("Annamese", "ly(Annamite)", 4.700000000000000E-03, "m", "L", "1.0");
   length["mao"] = UBASE("Annamese", "mao", 7.050000000000000E+01, "m", "L", "1.0");
   length["ngu"] = UBASE("Annamese", "ngu", 2.000000000000000E+00, "m", "L", "1.0");
   length["ngu(Annamite)"] = UBASE("Annamese", "ngu(Annamite)", 2.350000000000000E+00, "m", "L", "1.0");
   length["phan"] = UBASE("Annamese", "phan", 4.000000000000000E-03, "m", "L", "1.0");
   length["phan(1914)"] = UBASE("Annamese", "phan(1914)", 4.700000000000000E-03, "m", "L", "1.0");
   length["phi-unit"] = UBASE("Annamese", "phi-unit", 4.700000000000000E-03, "m", "L", "1.0");
   length["p-unit"] = UBASE("Annamese", "p-unit", 4.700000000000000E-03, "m", "L", "1.0");
   length["sao"] = UBASE("Annamese", "sao", 7.050000000000000E+00, "m", "L", "1.0");
   length["tac"] = UBASE("Annamese", "tac", 4.000000000000000E-02, "m", "L", "1.0");
   length["tam"] = UBASE("Annamese", "tam", 2.350000000000000E+00, "m", "L", "1.0");
   length["tat"] = UBASE("Annamese", "tat", 4.700000000000000E-02, "m", "L", "1.0");
   length["that"] = UBASE("Annamese", "that", 1.410000000000000E+01, "m", "L", "1.0");
   length["thi-ly"] = UBASE("Annamese", "thi-ly", 5.000000000000000E+02, "m", "L", "1.0");
   length["thuoc"] = UBASE("Annamese", "thuoc", 4.000000000000000E-01, "m", "L", "1.0");
   length["thuoc-de-ruong"] = UBASE("Annamese", "thuoc-de-ruong", 4.700000000000000E-01, "m", "L", "1.0");
   length["thuoc-moc"] = UBASE("Annamese", "thuoc-moc", 4.250000000000000E-01, "m", "L", "1.0");
   length["thuoc-ta"] = UBASE("Annamese", "thuoc-ta", 4.000000000000000E-01, "m", "L", "1.0");
   length["thuoc-vai"] = UBASE("Annamese", "thuoc-vai", 6.440000000000000E-01, "m", "L", "1.0");
   length["ti"] = UBASE("Annamese", "ti", 4.000000000000000E-06, "m", "L", "1.0");
   length["truong"] = UBASE("Annamese", "truong", 4.000000000000000E+00, "m", "L", "1.0");
   length["truong(Annamite)"] = UBASE("Annamese", "truong(Annamite)", 4.700000000000000E-01, "m", "L", "1.0");
   length["tuc"] = UBASE("Annamese", "tuc", 4.000000000000000E-02, "m", "L", "1.0");
   length["vi"] = UBASE("Annamese", "vi", 4.000000000000000E-08, "m", "L", "1.0");
   length["xich"] = UBASE("Annamese", "xich", 4.000000000000000E-01, "m", "L", "1.0");
   area["cao"] = UBASE("Annamese", "cao", 3.600000000000000E+02, "m2", "L2", "1.0");
   area["cong"] = UBASE("Annamese", "cong", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["cong-dat"] = UBASE("Annamese", "cong-dat", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["dam-vuong"] = UBASE("Annamese", "dam-vuong", 3.317760000000000E+05, "m2", "L2", "1.0");
   area["ghe"] = UBASE("Annamese", "ghe", 1.600000000000000E-01, "m2", "L2", "1.0");
   area["khau"] = UBASE("Annamese", "khau", 1.600000000000000E-02, "m2", "L2", "1.0");
   area["mau"] = UBASE("Annamese", "mau", 3.600000000000000E+03, "m2", "L2", "1.0");
   area["mau(Annamite)"] = UBASE("Annamese", "mau(Annamite)", 4.970250000000000E+03, "m2", "L2", "1.0");
   area["mieng"] = UBASE("Annamese", "mieng", 3.600000000000000E+01, "m2", "L2", "1.0");
   area["o"] = UBASE("Annamese", "o", 1.600000000000000E-01, "m2", "L2", "1.0");
   area["phan"] = UBASE("Annamese", "phan", 2.400000000000000E-01, "m2", "L2", "1.0");
   area["quo"] = UBASE("Annamese", "quo", 9.940500000000000E+03, "m2", "L2", "1.0");
   area["sao"] = UBASE("Annamese", "sao", 3.600000000000000E+02, "m2", "L2", "1.0");
   area["sao(Annamite)"] = UBASE("Annamese", "sao(Annamite)", 4.970250000000000E+02, "m2", "L2", "1.0");
   area["square-ngu"] = UBASE("Annamese", "square-ngu", 5.522500000000000E+00, "m2", "L2", "1.0");
   area["tac"] = UBASE("Annamese", "tac", 2.400000000000000E+00, "m2", "L2", "1.0");
   area["than"] = UBASE("Annamese", "than", 4.000000000000000E+00, "m2", "L2", "1.0");
   area["thon"] = UBASE("Annamese", "thon", 2.400000000000000E+00, "m2", "L2", "1.0");
   area["thuoc"] = UBASE("Annamese", "thuoc", 2.400000000000000E+01, "m2", "L2", "1.0");
   area["thuoc(Annamite)"] = UBASE("Annamese", "thuoc(Annamite)", 3.313500000000000E+01, "m2", "L2", "1.0");
   area["xich"] = UBASE("Annamese", "xich", 2.400000000000000E+01, "m2", "L2", "1.0");
   mass["binh"] = UBASE("Annamese", "binh", 3.020000000000000E+01, "kg", "M", "1.0");
   mass["can"] = UBASE("Annamese", "can", 6.040000000000000E-01, "kg", "M", "1.0");
   mass["can-ta"] = UBASE("Annamese", "can-ta", 6.040000000000000E-01, "kg", "M", "1.0");
   mass["cay"] = UBASE("Annamese", "cay", 3.775000000000000E-02, "kg", "M", "1.0");
   mass["chi"] = UBASE("Annamese", "chi", 3.775000000000000E-03, "kg", "M", "1.0");
   mass["dong"] = UBASE("Annamese", "dong", 3.775000000000000E-03, "kg", "M", "1.0");
   mass["dong-can"] = UBASE("Annamese", "dong-can", 3.775000000000000E-03, "kg", "M", "1.0");
   mass["fan"] = UBASE("Annamese", "fan", 3.775000000000000E-04, "kg", "M", "1.0");
   mass["hao"] = UBASE("Annamese", "hao", 3.775000000000000E-06, "kg", "M", "1.0");
   mass["hot"] = UBASE("Annamese", "hot", 3.775000000000000E-08, "kg", "M", "1.0");
   mass["li"] = UBASE("Annamese", "li", 3.775000000000000E-05, "kg", "M", "1.0");
   mass["kwan"] = UBASE("Annamese", "kwan", 6.795000000000000E+01, "kg", "M", "1.0");
   mass["lang"] = UBASE("Annamese", "lang", 3.775000000000000E-02, "kg", "M", "1.0");
   mass["luong"] = UBASE("Annamese", "luong", 3.775000000000000E-02, "kg", "M", "1.0");
   mass["ly"] = UBASE("Annamese", "ly", 3.775000000000000E-05, "kg", "M", "1.0");
   mass["nen"] = UBASE("Annamese", "nen", 3.775000000000000E-01, "kg", "M", "1.0");
   mass["neu"] = UBASE("Annamese", "neu", 3.775000000000000E-01, "kg", "M", "1.0");
   mass["phan"] = UBASE("Annamese", "phan", 3.775000000000000E-04, "kg", "M", "1.0");
   mass["picul"] = UBASE("Annamese", "picul", 6.040000000000000E+01, "kg", "M", "1.0");
   mass["quan"] = UBASE("Annamese", "quan", 3.020000000000000E+02, "kg", "M", "1.0");
   mass["ta"] = UBASE("Annamese", "ta", 6.040000000000000E+01, "kg", "M", "1.0");
   mass["tan"] = UBASE("Annamese", "tan", 6.040000000000000E+02, "kg", "M", "1.0");
   mass["ti"] = UBASE("Annamese", "ti", 3.775000000000000E-07, "kg", "M", "1.0");
   mass["tien"] = UBASE("Annamese", "tien", 3.775000000000000E-03, "kg", "M", "1.0");
   mass["vi"] = UBASE("Annamese", "vi", 3.775000000000000E-09, "kg", "M", "1.0");
   mass["yen"] = UBASE("Annamese", "yen", 6.040000000000000E+00, "kg", "M", "1.0");
   liquid["bat"] = UBASE("Annamese", "bat", 5.000000000000000E-04, "m3", "L3", "1.0");
   liquid["cap"] = UBASE("Annamese", "cap", 2.000000000000000E-04, "m3", "L3", "1.0");
   liquid["dau"] = UBASE("Annamese", "dau", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["gia"] = UBASE("Annamese", "gia", 2.000000000000000E-02, "m3", "L3", "1.0");
   liquid["gia(rice)"] = UBASE("Annamese", "gia(rice)", 4.000000000000000E-02, "m3", "L3", "1.0");
   liquid["hao"] = UBASE("Annamese", "hao", 2.826000000000000E-02, "m3", "L3", "1.0");
   liquid["hiep"] = UBASE("Annamese", "hiep", 2.766000000000000E-04, "m3", "L3", "1.0");
   liquid["hoc"] = UBASE("Annamese", "hoc", 7.191600000000000E-02, "m3", "L3", "1.0");
   liquid["nham"] = UBASE("Annamese", "nham", 2.000000000000000E-06, "m3", "L3", "1.0");
   liquid["nhon"] = UBASE("Annamese", "nhon", 2.000000000000000E-07, "m3", "L3", "1.0");
   liquid["phuong(rice)"] = UBASE("Annamese", "phuong(rice)", 2.600000000000000E-02, "m3", "L3", "1.0");
   liquid["sao"] = UBASE("Annamese", "sao", 2.000000000000000E-06, "m3", "L3", "1.0");
   liquid["shita"] = UBASE("Annamese", "shita", 2.826000000000000E-02, "m3", "L3", "1.0");
   liquid["thang"] = UBASE("Annamese", "thang", 2.000000000000000E-03, "m3", "L3", "1.0");
   liquid["thang(cochinchina)"] = UBASE("Annamese", "thang(cochinchina)", 2.766000000000000E-03, "m3", "L3", "1.0");
   liquid["thung"] = UBASE("Annamese", "thung", 2.000000000000000E-03, "m3", "L3", "1.0");
   liquid["thung(cochinchina)"] = UBASE("Annamese", "thung(cochinchina)", 2.000000000000000E-02, "m3", "L3", "1.0");
   liquid["thuoc(cochinchina)"] = UBASE("Annamese", "thuoc(cochinchina)", 2.766000000000000E-05, "m3", "L3", "1.0");
   liquid["tost"] = UBASE("Annamese", "tost", 2.000000000000000E-07, "m3", "L3", "1.0");
   liquid["tuc"] = UBASE("Annamese", "tuc", 3.333333333333330E-09, "m3", "L3", "1.0");
   liquid["uyen"] = UBASE("Annamese", "uyen", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["vuong(cochinchina)"] = UBASE("Annamese", "vuong(cochinchina)", 3.595800000000000E-02, "m3", "L3", "1.0");
   dry["hoc"] = UBASE("Annamese", "hoc", 1.600000000000000E+01, "m3", "L3", "1.0");
   dry["le"] = UBASE("Annamese", "le", 1.600000000000000E+00, "m3", "L3", "1.0");
   dry["mieng"] = UBASE("Annamese", "mieng", 1.440000000000000E+01, "m3", "L3", "1.0");
   dry["phuong"] = UBASE("Annamese", "phuong", 8.000000000000000E+00, "m3", "L3", "1.0");
   dry["than"] = UBASE("Annamese", "than", 1.600000000000000E+00, "m3", "L3", "1.0");
   dry["toa"] = UBASE("Annamese", "toa", 5.652000000000000E-02, "m3", "L3", "1.0");
   dry["vuong"] = UBASE("Annamese", "vuong", 8.000000000000000E+00, "m3", "L3", "1.0");
   _map["Annamese"] = BaseSystem("Annamese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit7(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["assbaa"] = UBASE("Arabic", "assbaa", 2.000000000000000E-02, "m", "L", "1.0");
   length["barid"] = UBASE("Arabic", "barid", 2.304000000000000E+04, "m", "L", "1.0");
   length["cabda"] = UBASE("Arabic", "cabda", 8.000000000000000E-02, "m", "L", "1.0");
   length["cubit(hachemic)"] = UBASE("Arabic", "cubit(hachemic)", 6.400000000000000E-01, "m", "L", "1.0");
   length["cubit(new)"] = UBASE("Arabic", "cubit(new)", 4.800000000000000E-01, "m", "L", "1.0");
   length["dhira(hachemic)"] = UBASE("Arabic", "dhira(hachemic)", 6.400000000000000E-01, "m", "L", "1.0");
   length["dhira(new)"] = UBASE("Arabic", "dhira(new)", 4.800000000000000E-01, "m", "L", "1.0");
   length["finger"] = UBASE("Arabic", "finger", 2.000000000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Arabic", "foot", 3.200000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Arabic", "feet", 3.200000000000000E-01, "m", "L", "1.0");
   length["ghalva"] = UBASE("Arabic", "ghalva", 2.304000000000000E+02, "m", "L", "1.0");
   length["ghalwah"] = UBASE("Arabic", "ghalwah", 2.304000000000000E+02, "m", "L", "1.0");
   length["marhala"] = UBASE("Arabic", "marhala", 4.608000000000000E+04, "m", "L", "1.0");
   length["marhalah"] = UBASE("Arabic", "marhalah", 4.608000000000000E+04, "m", "L", "1.0");
   length["mille"] = UBASE("Arabic", "mille", 1.920000000000000E+03, "m", "L", "1.0");
   length["orgye"] = UBASE("Arabic", "orgye", 1.920000000000000E+00, "m", "L", "1.0");
   length["parasang"] = UBASE("Arabic", "parasang", 5.760000000000000E+03, "m", "L", "1.0");
   length["qabdhah"] = UBASE("Arabic", "qabdhah", 8.000000000000000E-02, "m", "L", "1.0");
   length["qasab"] = UBASE("Arabic", "qasab", 3.840000000000000E+00, "m", "L", "1.0");
   length["qasbah"] = UBASE("Arabic", "qasbah", 3.840000000000000E+00, "m", "L", "1.0");
   length["seir"] = UBASE("Arabic", "seir", 1.920000000000000E+02, "m", "L", "1.0");
   length["stadion"] = UBASE("Arabic", "stadion", 1.920000000000000E+02, "m", "L", "1.0");
   length["veredus"] = UBASE("Arabic", "veredus", 2.304000000000000E+04, "m", "L", "1.0");
   area["achir"] = UBASE("Arabic", "achir", 1.474560000000000E+01, "m2", "L2", "1.0");
   area["cafiz"] = UBASE("Arabic", "cafiz", 1.474560000000000E+02, "m2", "L2", "1.0");
   area["daneq"] = UBASE("Arabic", "daneq", 9.830400000000000E+02, "m2", "L2", "1.0");
   area["djarib"] = UBASE("Arabic", "djarib", 1.474560000000000E+03, "m2", "L2", "1.0");
   area["feddan"] = UBASE("Arabic", "feddan", 5.898240000000000E+03, "m2", "L2", "1.0");
   area["habbah"] = UBASE("Arabic", "habbah", 8.192000000000000E+01, "m2", "L2", "1.0");
   area["qamha"] = UBASE("Arabic", "qamha", 6.144000000000000E+01, "m2", "L2", "1.0");
   area["qasaba"] = UBASE("Arabic", "qasaba", 1.474560000000000E+01, "m2", "L2", "1.0");
   area["qirat"] = UBASE("Arabic", "qirat", 2.457600000000000E+02, "m2", "L2", "1.0");
   area["square-cubit"] = UBASE("Arabic", "square-cubit", 4.096000000000000E-01, "m2", "L2", "1.0");
   mass["dihrem"] = UBASE("Arabic", "dihrem", 2.833333333333330E-03, "kg", "M", "1.0");
   mass["kikkar"] = UBASE("Arabic", "kikkar", 4.250000000000000E+01, "kg", "M", "1.0");
   mass["man"] = UBASE("Arabic", "man", 6.800000000000000E-01, "kg", "M", "1.0");
   mass["nasch"] = UBASE("Arabic", "nasch", 5.666666666666670E-02, "kg", "M", "1.0");
   mass["nevat"] = UBASE("Arabic", "nevat", 1.416666666666670E-02, "kg", "M", "1.0");
   mass["oeque"] = UBASE("Arabic", "oeque", 1.360000000000000E+00, "kg", "M", "1.0");
   mass["oka"] = UBASE("Arabic", "oka", 1.360000000000000E+00, "kg", "M", "1.0");
   mass["oukia"] = UBASE("Arabic", "oukia", 1.133333333333330E-01, "kg", "M", "1.0");
   mass["quanthar"] = UBASE("Arabic", "quanthar", 3.400000000000000E+01, "kg", "M", "1.0");
   mass["rotl"] = UBASE("Arabic", "rotl", 3.400000000000000E-01, "kg", "M", "1.0");
   liquid["sa"] = UBASE("Arabic", "sa", 4.212500000000000E-03, "m3", "L3", "1.0");
   dry["artabe"] = UBASE("Arabic", "artabe", 6.528000000000000E-02, "m3", "L3", "1.0");
   dry["cafiz"] = UBASE("Arabic", "cafiz", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["caphite"] = UBASE("Arabic", "caphite", 1.360000000000000E-03, "m3", "L3", "1.0");
   dry["ferk"] = UBASE("Arabic", "ferk", 8.160000000000000E-03, "m3", "L3", "1.0");
   dry["gariba"] = UBASE("Arabic", "gariba", 2.611200000000000E-01, "m3", "L3", "1.0");
   dry["khoul"] = UBASE("Arabic", "khoul", 1.632000000000000E-02, "m3", "L3", "1.0");
   dry["kiladja"] = UBASE("Arabic", "kiladja", 1.360000000000000E-03, "m3", "L3", "1.0");
   dry["kist"] = UBASE("Arabic", "kist", 1.360000000000000E-03, "m3", "L3", "1.0");
   dry["makuk"] = UBASE("Arabic", "makuk", 4.080000000000000E-03, "m3", "L3", "1.0");
   dry["modius"] = UBASE("Arabic", "modius", 4.080000000000000E-02, "m3", "L3", "1.0");
   dry["mudd"] = UBASE("Arabic", "mudd", 6.800000000000000E-04, "m3", "L3", "1.0");
   dry["sa"] = UBASE("Arabic", "sa", 2.720000000000000E-03, "m3", "L3", "1.0");
   dry["saa"] = UBASE("Arabic", "saa", 2.720000000000000E-03, "m3", "L3", "1.0");
   _map["Arabic"] = BaseSystem("Arabic", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit8(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["milla"] = UBASE("Argentinian", "milla", 1.850191000000000E+03, "m", "L", "1.0");
   length["palma"] = UBASE("Argentinian", "palma", 2.166500000000000E-01, "m", "L", "1.0");
   length["braza"] = UBASE("Argentinian", "braza", 1.733200000000000E+00, "m", "L", "1.0");
   length["cuadra"] = UBASE("Argentinian", "cuadra", 1.299900000000000E+02, "m", "L", "1.0");
   length["cuarta"] = UBASE("Argentinian", "cuarta", 5.937500000000000E-04, "m", "L", "1.0");
   length["legua"] = UBASE("Argentinian", "legua", 5.199600000000000E+03, "m", "L", "1.0");
   length["linea"] = UBASE("Argentinian", "linea", 2.006018518518520E-03, "m", "L", "1.0");
   length["pie"] = UBASE("Argentinian", "pie", 2.888666666666670E-01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Argentinian", "pulgada", 2.407222222222220E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Argentinian", "vara", 8.666000000000000E-01, "m", "L", "1.0");
   area["square-vara"] = UBASE("Argentinian", "square-vara", 7.509955600000000E-01, "m2", "L2", "1.0");
   mass["adarme"] = UBASE("Argentinian", "adarme", 1.794531250000000E-03, "kg", "M", "1.0");
   mass["arroba"] = UBASE("Argentinian", "arroba", 1.148500000000000E+01, "kg", "M", "1.0");
   mass["granos"] = UBASE("Argentinian", "granos", 4.984809027777780E-05, "kg", "M", "1.0");
   mass["libra"] = UBASE("Argentinian", "libra", 4.594000000000000E-01, "kg", "M", "1.0");
   mass["onza"] = UBASE("Argentinian", "onza", 2.871250000000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Argentinian", "quintal", 4.594000000000000E+01, "kg", "M", "1.0");
   mass["tonelada"] = UBASE("Argentinian", "tonelada", 9.188000000000000E+02, "kg", "M", "1.0");
   liquid["baril"] = UBASE("Argentinian", "baril", 7.600000000000000E-02, "m3", "L3", "1.0");
   liquid["cuarta"] = UBASE("Argentinian", "cuarta", 5.937500000000000E-04, "m3", "L3", "1.0");
   liquid["cuerta"] = UBASE("Argentinian", "cuerta", 1.140000000000000E-01, "m3", "L3", "1.0");
   liquid["frasco"] = UBASE("Argentinian", "frasco", 2.375000000000000E-03, "m3", "L3", "1.0");
   liquid["octava"] = UBASE("Argentinian", "octava", 2.968750000000000E-04, "m3", "L3", "1.0");
   liquid["pipa"] = UBASE("Argentinian", "pipa", 4.560000000000000E-01, "m3", "L3", "1.0");
   dry["cuartilla"] = UBASE("Argentinian", "cuartilla", 3.429942500000000E-02, "m3", "L3", "1.0");
   dry["fanega"] = UBASE("Argentinian", "fanega", 1.371977000000000E-01, "m3", "L3", "1.0");
   dry["lastre"] = UBASE("Argentinian", "lastre", 2.057965500000000E+00, "m3", "L3", "1.0");
   dry["tonelada"] = UBASE("Argentinian", "tonelada", 9.603839000000000E-01, "m3", "L3", "1.0");
   _map["Argentinian"] = BaseSystem("Argentinian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit9(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["aldan"] = UBASE("Asian", "aldan", 1.600000000000000E+00, "m", "L", "1.0");
   area["square-aldan"] = UBASE("Asian", "square-aldan", 2.560000000000000E+00, "m2", "L2", "1.0");
   mass["catty"] = UBASE("Asian", "catty", 6.048000000000000E-01, "kg", "M", "1.0");
   mass["koyan"] = UBASE("Asian", "koyan", 2.419200000000000E+03, "kg", "M", "1.0");
   mass["tael"] = UBASE("Asian", "tael", 3.779936416666670E-02, "kg", "M", "1.0");
   mass["tahil"] = UBASE("Asian", "tahil", 3.779936416666670E-02, "kg", "M", "1.0");
   liquid["cubic-aldan"] = UBASE("Asian", "cubic-aldan", 4.096000000000000E+00, "m3", "L3", "1.0");
   _map["Asian"] = BaseSystem("Asian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit10(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["akaina"] = UBASE("Attic", "akaina", 2.777040000000000E+00, "m", "L", "1.0");
   length["arnma"] = UBASE("Attic", "arnma", 1.851360000000000E+01, "m", "L", "1.0");
   length["bema"] = UBASE("Attic", "bema", 7.714000000000000E-01, "m", "L", "1.0");
   length["bema-diplun"] = UBASE("Attic", "bema-diplun", 1.542800000000000E+00, "m", "L", "1.0");
   length["bema-haplun"] = UBASE("Attic", "bema-haplun", 7.714000000000000E-01, "m", "L", "1.0");
   length["condylos"] = UBASE("Attic", "condylos", 3.857000000000000E-02, "m", "L", "1.0");
   length["cubit(long)"] = UBASE("Attic", "cubit(long)", 6.171200000000000E-01, "m", "L", "1.0");
   length["daktylos"] = UBASE("Attic", "daktylos", 1.928500000000000E-02, "m", "L", "1.0");
   length["dekapous"] = UBASE("Attic", "dekapous", 3.085600000000000E+00, "m", "L", "1.0");
   length["diaulos"] = UBASE("Attic", "diaulos", 3.702720000000000E+02, "m", "L", "1.0");
   length["dichas"] = UBASE("Attic", "dichas", 1.542800000000000E-01, "m", "L", "1.0");
   length["diploun-bema"] = UBASE("Attic", "diploun-bema", 1.542800000000000E+00, "m", "L", "1.0");
   length["dolichos"] = UBASE("Attic", "dolichos", 2.221632000000000E+03, "m", "L", "1.0");
   length["doron"] = UBASE("Attic", "doron", 7.714000000000000E-02, "m", "L", "1.0");
   length["finger"] = UBASE("Attic", "finger", 1.928500000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Attic", "foot", 3.085600000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Attic", "feet", 3.085600000000000E-01, "m", "L", "1.0");
   length["hamma"] = UBASE("Attic", "hamma", 1.851360000000000E+01, "m", "L", "1.0");
   length["haploun-bema"] = UBASE("Attic", "haploun-bema", 7.714000000000000E-01, "m", "L", "1.0");
   length["hemipodion"] = UBASE("Attic", "hemipodion", 1.542800000000000E-01, "m", "L", "1.0");
   length["hippikon"] = UBASE("Attic", "hippikon", 7.405440000000000E+02, "m", "L", "1.0");
   length["kalamos"] = UBASE("Attic", "kalamos", 3.085600000000000E+00, "m", "L", "1.0");
   length["kondylos"] = UBASE("Attic", "kondylos", 3.857000000000000E-02, "m", "L", "1.0");
   length["lichas"] = UBASE("Attic", "lichas", 1.928500000000000E-01, "m", "L", "1.0");
   length["milion"] = UBASE("Attic", "milion", 1.481088000000000E+03, "m", "L", "1.0");
   length["mille"] = UBASE("Attic", "mille", 1.388520000000000E+03, "m", "L", "1.0");
   length["orguia"] = UBASE("Attic", "orguia", 1.851360000000000E+00, "m", "L", "1.0");
   length["orgyia"] = UBASE("Attic", "orgyia", 1.851360000000000E+00, "m", "L", "1.0");
   length["orthodoron"] = UBASE("Attic", "orthodoron", 2.121350000000000E-01, "m", "L", "1.0");
   length["palaiste"] = UBASE("Attic", "palaiste", 7.714000000000000E-02, "m", "L", "1.0");
   length["palestra"] = UBASE("Attic", "palestra", 7.714000000000000E-02, "m", "L", "1.0");
   length["parasange"] = UBASE("Attic", "parasange", 5.554080000000000E+03, "m", "L", "1.0");
   length["pechus"] = UBASE("Attic", "pechus", 4.628400000000000E-01, "m", "L", "1.0");
   length["pechya"] = UBASE("Attic", "pechya", 4.628400000000000E-01, "m", "L", "1.0");
   length["pechys"] = UBASE("Attic", "pechys", 4.628400000000000E-01, "m", "L", "1.0");
   length["plethron"] = UBASE("Attic", "plethron", 3.085600000000000E+01, "m", "L", "1.0");
   length["pous"] = UBASE("Attic", "pous", 3.085600000000000E-01, "m", "L", "1.0");
   length["pygme"] = UBASE("Attic", "pygme", 3.471300000000000E-01, "m", "L", "1.0");
   length["pygon"] = UBASE("Attic", "pygon", 3.857000000000000E-01, "m", "L", "1.0");
   length["royal-pechus"] = UBASE("Attic", "royal-pechus", 5.206950000000000E-01, "m", "L", "1.0");
   length["schoinos"] = UBASE("Attic", "schoinos", 7.405440000000000E+03, "m", "L", "1.0");
   length["spithame"] = UBASE("Attic", "spithame", 2.314200000000000E-01, "m", "L", "1.0");
   length["spithane"] = UBASE("Attic", "spithane", 2.314200000000000E-01, "m", "L", "1.0");
   length["stadion"] = UBASE("Attic", "stadion", 1.851360000000000E+02, "m", "L", "1.0");
   length["stage"] = UBASE("Attic", "stage", 2.962176000000000E+04, "m", "L", "1.0");
   length["stathmos"] = UBASE("Attic", "stathmos", 2.468480000000000E+04, "m", "L", "1.0");
   length["xylon"] = UBASE("Attic", "xylon", 1.388520000000000E+00, "m", "L", "1.0");
   area["aroura"] = UBASE("Attic", "aroura", 2.380231840000000E+02, "m2", "L2", "1.0");
   area["hektos"] = UBASE("Attic", "hektos", 1.586821226666670E+02, "m2", "L2", "1.0");
   area["hexapodes"] = UBASE("Attic", "hexapodes", 3.427533849600000E+00, "m2", "L2", "1.0");
   area["square-akaina"] = UBASE("Attic", "square-akaina", 9.520927360000000E+00, "m2", "L2", "1.0");
   area["square-dekapode"] = UBASE("Attic", "square-dekapode", 9.520927360000000E+00, "m2", "L2", "1.0");
   area["square-plethron"] = UBASE("Attic", "square-plethron", 9.520927360000000E+02, "m2", "L2", "1.0");
   area["square-pous"] = UBASE("Attic", "square-pous", 9.520927360000000E-02, "m2", "L2", "1.0");
   mass["chalque"] = UBASE("Attic", "chalque", 9.000000000000000E-05, "kg", "M", "1.0");
   mass["diobol"] = UBASE("Attic", "diobol", 1.440000000000000E-03, "kg", "M", "1.0");
   mass["drachma"] = UBASE("Attic", "drachma", 4.320000000000000E-03, "kg", "M", "1.0");
   mass["mina"] = UBASE("Attic", "mina", 4.320000000000000E-01, "kg", "M", "1.0");
   mass["mine"] = UBASE("Attic", "mine", 4.320000000000000E-01, "kg", "M", "1.0");
   mass["obol"] = UBASE("Attic", "obol", 7.200000000000000E-04, "kg", "M", "1.0");
   mass["talent"] = UBASE("Attic", "talent", 2.592000000000000E+01, "kg", "M", "1.0");
   liquid["amphora"] = UBASE("Attic", "amphora", 1.728000000000000E-02, "m3", "L3", "1.0");
   liquid["cheme"] = UBASE("Attic", "cheme", 9.000000000000000E-06, "m3", "L3", "1.0");
   liquid["chous"] = UBASE("Attic", "chous", 1.080000000000000E-03, "m3", "L3", "1.0");
   liquid["congius"] = UBASE("Attic", "congius", 3.240000000000000E-03, "m3", "L3", "1.0");
   liquid["cotyle"] = UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3", "L3", "1.0");
   liquid["hemikotyle"] = UBASE("Attic", "hemikotyle", 1.350000000000000E-04, "m3", "L3", "1.0");
   liquid["hemina"] = UBASE("Attic", "hemina", 2.700000000000000E-04, "m3", "L3", "1.0");
   liquid["keramion"] = UBASE("Attic", "keramion", 2.592000000000000E-02, "m3", "L3", "1.0");
   liquid["khous"] = UBASE("Attic", "khous", 3.240000000000000E-03, "m3", "L3", "1.0");
   liquid["kochliarion"] = UBASE("Attic", "kochliarion", 4.500000000000000E-06, "m3", "L3", "1.0");
   liquid["konche"] = UBASE("Attic", "konche", 2.250000000000000E-05, "m3", "L3", "1.0");
   liquid["kotyle"] = UBASE("Attic", "kotyle", 2.700000000000000E-04, "m3", "L3", "1.0");
   liquid["kyathos"] = UBASE("Attic", "kyathos", 4.500000000000000E-05, "m3", "L3", "1.0");
   liquid["meterte"] = UBASE("Attic", "meterte", 3.888000000000000E-02, "m3", "L3", "1.0");
   liquid["mystron"] = UBASE("Attic", "mystron", 1.125000000000000E-05, "m3", "L3", "1.0");
   liquid["oxybathon"] = UBASE("Attic", "oxybathon", 6.750000000000000E-05, "m3", "L3", "1.0");
   liquid["tetarton"] = UBASE("Attic", "tetarton", 1.350000000000000E-04, "m3", "L3", "1.0");
   liquid["tryblion"] = UBASE("Attic", "tryblion", 2.700000000000000E-04, "m3", "L3", "1.0");
   liquid["xestes"] = UBASE("Attic", "xestes", 5.400000000000000E-04, "m3", "L3", "1.0");
   dry["chenica"] = UBASE("Attic", "chenica", 1.080000000000000E-03, "m3", "L3", "1.0");
   dry["chenix"] = UBASE("Attic", "chenix", 1.080000000000000E-03, "m3", "L3", "1.0");
   dry["choinix"] = UBASE("Attic", "choinix", 1.080000000000000E-03, "m3", "L3", "1.0");
   dry["cotyle"] = UBASE("Attic", "cotyle", 2.700000000000000E-04, "m3", "L3", "1.0");
   dry["cyanthos"] = UBASE("Attic", "cyanthos", 4.500000000000000E-05, "m3", "L3", "1.0");
   dry["hekteus"] = UBASE("Attic", "hekteus", 8.640000000000000E-03, "m3", "L3", "1.0");
   dry["hektos"] = UBASE("Attic", "hektos", 8.640000000000000E-03, "m3", "L3", "1.0");
   dry["hemiekton"] = UBASE("Attic", "hemiekton", 4.320000000000000E-03, "m3", "L3", "1.0");
   dry["hemina"] = UBASE("Attic", "hemina", 2.700000000000000E-04, "m3", "L3", "1.0");
   dry["kochliarion"] = UBASE("Attic", "kochliarion", 4.500000000000000E-06, "m3", "L3", "1.0");
   dry["kotyle"] = UBASE("Attic", "kotyle", 2.700000000000000E-04, "m3", "L3", "1.0");
   dry["kyathos"] = UBASE("Attic", "kyathos", 4.500000000000000E-05, "m3", "L3", "1.0");
   dry["maris"] = UBASE("Attic", "maris", 6.480000000000000E-03, "m3", "L3", "1.0");
   dry["medimnos"] = UBASE("Attic", "medimnos", 5.184000000000000E-02, "m3", "L3", "1.0");
   dry["modius"] = UBASE("Attic", "modius", 8.640000000000000E-03, "m3", "L3", "1.0");
   dry["oxybaphon"] = UBASE("Attic", "oxybaphon", 6.750000000000000E-05, "m3", "L3", "1.0");
   dry["oxybathon"] = UBASE("Attic", "oxybathon", 6.750000000000000E-05, "m3", "L3", "1.0");
   dry["xestes"] = UBASE("Attic", "xestes", 5.400000000000000E-04, "m3", "L3", "1.0");
   _map["Attic"] = BaseSystem("Attic", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit11(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["ell"] = UBASE("Austrian", "ell", 7.792000000000000E-01, "m", "L", "1.0");
   length["faust"] = UBASE("Austrian", "faust", 1.053600000000000E-01, "m", "L", "1.0");
   length["fuss"] = UBASE("Austrian", "fuss", 3.160800000000000E-01, "m", "L", "1.0");
   length["klafter"] = UBASE("Austrian", "klafter", 1.896480000000000E+00, "m", "L", "1.0");
   length["linie"] = UBASE("Austrian", "linie", 2.195000000000000E-03, "m", "L", "1.0");
   length["meile"] = UBASE("Austrian", "meile", 7.585920000000000E+03, "m", "L", "1.0");
   length["meile(Bohemia)"] = UBASE("Austrian", "meile(Bohemia)", 6.910000000000000E+03, "m", "L", "1.0");
   length["meile(Malachia)"] = UBASE("Austrian", "meile(Malachia)", 7.848500000000000E+03, "m", "L", "1.0");
   length["punk"] = UBASE("Austrian", "punk", 1.829166666666670E-04, "m", "L", "1.0");
   length["rute"] = UBASE("Austrian", "rute", 3.160800000000000E+00, "m", "L", "1.0");
   length["ruthe"] = UBASE("Austrian", "ruthe", 3.792960000000000E+00, "m", "L", "1.0");
   length["spanne"] = UBASE("Austrian", "spanne", 2.107200000000000E-01, "m", "L", "1.0");
   area["joch"] = UBASE("Austrian", "joch", 5.754618224640000E+03, "m2", "L2", "1.0");
   area["metze"] = UBASE("Austrian", "metze", 1.918206074880000E+03, "m2", "L2", "1.0");
   area["square-klafter"] = UBASE("Austrian", "square-klafter", 3.596636390400000E+00, "m2", "L2", "1.0");
   mass["denat"] = UBASE("Austrian", "denat", 1.093769531250000E-03, "kg", "M", "1.0");
   mass["drachme(apothecary)"] = UBASE("Austrian", "drachme(apothecary)", 4.375078125000000E-03, "kg", "M", "1.0");
   mass["gran(apothecary)"] = UBASE("Austrian", "gran(apothecary)", 7.291796875000000E-05, "kg", "M", "1.0");
   mass["karch"] = UBASE("Austrian", "karch", 2.240040000000000E+02, "kg", "M", "1.0");
   mass["loth"] = UBASE("Austrian", "loth", 1.750031250000000E-02, "kg", "M", "1.0");
   mass["mark"] = UBASE("Austrian", "mark", 2.800050000000000E-01, "kg", "M", "1.0");
   mass["pfenig"] = UBASE("Austrian", "pfenig", 1.093769531250000E-03, "kg", "M", "1.0");
   mass["pfund"] = UBASE("Austrian", "pfund", 5.600100000000000E-01, "kg", "M", "1.0");
   mass["pfund(apothecary)"] = UBASE("Austrian", "pfund(apothecary)", 4.200075000000000E-01, "kg", "M", "1.0");
   mass["pfund(ordinary-apothecary)"] = UBASE("Austrian", "pfund(ordinary-apothecary)", 5.600100000000000E-01, "kg", "M", "1.0");
   mass["pound"] = UBASE("Austrian", "pound", 5.600044800358400E-01, "kg", "M", "1.0");
   mass["quentchen"] = UBASE("Austrian", "quentchen", 4.375078125000000E-03, "kg", "M", "1.0");
   mass["saum"] = UBASE("Austrian", "saum", 1.540027500000000E+02, "kg", "M", "1.0");
   mass["scruple(apothecary)"] = UBASE("Austrian", "scruple(apothecary)", 1.458359375000000E-03, "kg", "M", "1.0");
   mass["stein"] = UBASE("Austrian", "stein", 1.120020000000000E+01, "kg", "M", "1.0");
   mass["unze"] = UBASE("Austrian", "unze", 3.500062500000000E-02, "kg", "M", "1.0");
   mass["unze(apothecary)"] = UBASE("Austrian", "unze(apothecary)", 3.500062500000000E-02, "kg", "M", "1.0");
   mass["vierding"] = UBASE("Austrian", "vierding", 1.400025000000000E-01, "kg", "M", "1.0");
   mass["zentner"] = UBASE("Austrian", "zentner", 5.600100000000000E+01, "kg", "M", "1.0");
   mass["zollpfund"] = UBASE("Austrian", "zollpfund", 5.600044800358400E-01, "kg", "M", "1.0");
   liquid["dreiling"] = UBASE("Austrian", "dreiling", 1.698120000000000E+00, "m3", "L3", "1.0");
   liquid["eimer"] = UBASE("Austrian", "eimer", 5.660400000000000E-02, "m3", "L3", "1.0");
   liquid["fass"] = UBASE("Austrian", "fass", 5.660400000000000E-01, "m3", "L3", "1.0");
   liquid["fuder"] = UBASE("Austrian", "fuder", 1.811328000000000E+00, "m3", "L3", "1.0");
   liquid["halbe"] = UBASE("Austrian", "halbe", 7.075500000000000E-04, "m3", "L3", "1.0");
   liquid["mass"] = UBASE("Austrian", "mass", 1.415100000000000E-03, "m3", "L3", "1.0");
   liquid["pliff"] = UBASE("Austrian", "pliff", 1.768875000000000E-04, "m3", "L3", "1.0");
   liquid["seidel"] = UBASE("Austrian", "seidel", 3.537750000000000E-04, "m3", "L3", "1.0");
   liquid["viertel"] = UBASE("Austrian", "viertel", 1.415100000000000E-02, "m3", "L3", "1.0");
   dry["achtel"] = UBASE("Austrian", "achtel", 7.686125000000000E-03, "m3", "L3", "1.0");
   dry["becher"] = UBASE("Austrian", "becher", 4.803828125000000E-04, "m3", "L3", "1.0");
   dry["futtermassel"] = UBASE("Austrian", "futtermassel", 1.921531250000000E-03, "m3", "L3", "1.0");
   dry["metzel"] = UBASE("Austrian", "metzel", 6.148900000000000E-02, "m3", "L3", "1.0");
   dry["mulhmassel"] = UBASE("Austrian", "mulhmassel", 3.843062500000000E-03, "m3", "L3", "1.0");
   dry["muth"] = UBASE("Austrian", "muth", 1.844670000000000E+00, "m3", "L3", "1.0");
   dry["probmetze"] = UBASE("Austrian", "probmetze", 6.004785156250000E-05, "m3", "L3", "1.0");
   dry["viertel"] = UBASE("Austrian", "viertel", 1.537225000000000E-02, "m3", "L3", "1.0");
   _map["Austrian"] = BaseSystem("Austrian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit12(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["canna"] = UBASE("Balearic", "canna", 1.564000000000000E+00, "m", "L", "1.0");
   length["palmos"] = UBASE("Balearic", "palmos", 1.955000000000000E-01, "m", "L", "1.0");
   area["square-canna"] = UBASE("Balearic", "square-canna", 2.446096000000000E+00, "m2", "L2", "1.0");
   mass["arroba"] = UBASE("Balearic", "arroba", 1.060800000000000E+01, "kg", "M", "1.0");
   mass["cantaro"] = UBASE("Balearic", "cantaro", 4.243200000000000E+01, "kg", "M", "1.0");
   mass["cantaro-barbaresco"] = UBASE("Balearic", "cantaro-barbaresco", 4.080000000000000E+01, "kg", "M", "1.0");
   mass["cargo"] = UBASE("Balearic", "cargo", 1.272960000000000E+02, "kg", "M", "1.0");
   mass["corta"] = UBASE("Balearic", "corta", 3.672000000000000E+00, "kg", "M", "1.0");
   mass["libra-mayor"] = UBASE("Balearic", "libra-mayor", 1.224000000000000E+00, "kg", "M", "1.0");
   mass["misura"] = UBASE("Balearic", "misura", 1.468800000000000E+01, "kg", "M", "1.0");
   mass["quartano"] = UBASE("Balearic", "quartano", 3.672000000000000E+00, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Balearic", "rottolo", 4.080000000000000E-01, "kg", "M", "1.0");
   liquid["almude"] = UBASE("Balearic", "almude", 1.999166666666670E-03, "m3", "L3", "1.0");
   liquid["barcella"] = UBASE("Balearic", "barcella", 1.199500000000000E-02, "m3", "L3", "1.0");
   liquid["quartera"] = UBASE("Balearic", "quartera", 7.197000000000000E-02, "m3", "L3", "1.0");
   dry["almude"] = UBASE("Balearic", "almude", 1.043846153846150E-03, "m3", "L3", "1.0");
   dry["quarte"] = UBASE("Balearic", "quarte", 4.175384615384620E-03, "m3", "L3", "1.0");
   dry["quartin"] = UBASE("Balearic", "quartin", 2.714000000000000E-02, "m3", "L3", "1.0");
   _map["Balearic"] = BaseSystem("Balearic", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit13(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["ell"] = UBASE("Belgian", "ell", 6.858000000000000E-01, "m", "L", "1.0");
   length["perche"] = UBASE("Belgian", "perche", 6.497000000000000E+00, "m", "L", "1.0");
   length["pied"] = UBASE("Belgian", "pied", 3.248500000000000E+00, "m", "L", "1.0");
   area["arpent"] = UBASE("Belgian", "arpent", 4.221100900000000E+03, "m2", "L2", "1.0");
   mass["balle"] = UBASE("Belgian", "balle", 9.790000000000000E+01, "kg", "M", "1.0");
   mass["charge"] = UBASE("Belgian", "charge", 1.958000000000000E+02, "kg", "M", "1.0");
   mass["chariot"] = UBASE("Belgian", "chariot", 8.076750000000000E+01, "kg", "M", "1.0");
   mass["livre"] = UBASE("Belgian", "livre", 4.895000000000000E-01, "kg", "M", "1.0");
   mass["loth"] = UBASE("Belgian", "loth", 1.529687500000000E-02, "kg", "M", "1.0");
   mass["marc"] = UBASE("Belgian", "marc", 2.447500000000000E-01, "kg", "M", "1.0");
   mass["once"] = UBASE("Belgian", "once", 3.059375000000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Belgian", "quintal", 4.895000000000000E+01, "kg", "M", "1.0");
   mass["schiffpfund"] = UBASE("Belgian", "schiffpfund", 1.468500000000000E+02, "kg", "M", "1.0");
   mass["stein"] = UBASE("Belgian", "stein", 3.916000000000000E+00, "kg", "M", "1.0");
   liquid["pot"] = UBASE("Belgian", "pot", 5.000000000000000E-04, "m3", "L3", "1.0");
   dry["pot"] = UBASE("Belgian", "pot", 1.500000000000000E-03, "m3", "L3", "1.0");
   _map["Belgian"] = BaseSystem("Belgian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit14(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["braca"] = UBASE("Brazilian", "braca", 2.222222222222220E+00, "m", "L", "1.0");
   length["legoa"] = UBASE("Brazilian", "legoa", 6.666666666666670E+03, "m", "L", "1.0");
   length["legua"] = UBASE("Brazilian", "legua", 6.666666666666670E+03, "m", "L", "1.0");
   length["palmo"] = UBASE("Brazilian", "palmo", 2.222222222222220E-01, "m", "L", "1.0");
   length["passo-geometrico"] = UBASE("Brazilian", "passo-geometrico", 1.666666666666670E+00, "m", "L", "1.0");
   length["pe"] = UBASE("Brazilian", "pe", 3.333333333333330E-01, "m", "L", "1.0");
   length["polegada"] = UBASE("Brazilian", "polegada", 2.777777777777780E-02, "m", "L", "1.0");
   length["pulgado"] = UBASE("Brazilian", "pulgado", 2.777777777777780E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Brazilian", "vara", 1.111111111111110E+00, "m", "L", "1.0");
   area["alqueire"] = UBASE("Brazilian", "alqueire", 3.630000000000000E+04, "m2", "L2", "1.0");
   area["salamis"] = UBASE("Brazilian", "salamis", 4.537500000000000E+03, "m2", "L2", "1.0");
   area["tarefa"] = UBASE("Brazilian", "tarefa", 3.500000000000000E+03, "m2", "L2", "1.0");
   mass["arroba"] = UBASE("Brazilian", "arroba", 1.468960000000000E+01, "kg", "M", "1.0");
   mass["bale"] = UBASE("Brazilian", "bale", 1.133980925000000E+02, "kg", "M", "1.0");
   mass["libra"] = UBASE("Brazilian", "libra", 4.590500000000000E-01, "kg", "M", "1.0");
   mass["marco"] = UBASE("Brazilian", "marco", 2.295250000000000E-01, "kg", "M", "1.0");
   mass["onca"] = UBASE("Brazilian", "onca", 2.869062500000000E-02, "kg", "M", "1.0");
   mass["onza"] = UBASE("Brazilian", "onza", 2.869062500000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Brazilian", "quintal", 5.875840000000000E+01, "kg", "M", "1.0");
   mass["tonelada"] = UBASE("Brazilian", "tonelada", 7.932384000000000E+02, "kg", "M", "1.0");
   liquid["almude"] = UBASE("Brazilian", "almude", 3.194400000000000E-02, "m3", "L3", "1.0");
   liquid["almude(Bahia)"] = UBASE("Brazilian", "almude(Bahia)", 2.114400000000000E-02, "m3", "L3", "1.0");
   liquid["almude(common)"] = UBASE("Brazilian", "almude(common)", 2.175600000000000E-02, "m3", "L3", "1.0");
   liquid["alquiera"] = UBASE("Brazilian", "alquiera", 5.324000000000000E-03, "m3", "L3", "1.0");
   liquid["alquiera(Bahia)"] = UBASE("Brazilian", "alquiera(Bahia)", 3.524000000000000E-03, "m3", "L3", "1.0");
   liquid["alquiera(common"] = UBASE("Brazilian", "alquiera(common", 3.626000000000000E-03, "m3", "L3", "1.0");
   liquid["canada"] = UBASE("Brazilian", "canada", 2.662000000000000E-03, "m3", "L3", "1.0");
   liquid["canada(Bahia)"] = UBASE("Brazilian", "canada(Bahia)", 1.762000000000000E-03, "m3", "L3", "1.0");
   liquid["canada(common)"] = UBASE("Brazilian", "canada(common)", 1.813000000000000E-03, "m3", "L3", "1.0");
   liquid["cargueiro"] = UBASE("Brazilian", "cargueiro", 8.000000000000000E-02, "m3", "L3", "1.0");
   liquid["moio"] = UBASE("Brazilian", "moio", 3.194400000000000E-01, "m3", "L3", "1.0");
   liquid["moio(Bahia))"] = UBASE("Brazilian", "moio(Bahia))", 2.114400000000000E-01, "m3", "L3", "1.0");
   liquid["moio(common)"] = UBASE("Brazilian", "moio(common)", 2.175600000000000E-01, "m3", "L3", "1.0");
   liquid["pipa"] = UBASE("Brazilian", "pipa", 4.791600000000000E-01, "m3", "L3", "1.0");
   liquid["pipa(Bahia)"] = UBASE("Brazilian", "pipa(Bahia)", 3.171600000000000E-01, "m3", "L3", "1.0");
   liquid["pipa(common)"] = UBASE("Brazilian", "pipa(common)", 3.263400000000000E-01, "m3", "L3", "1.0");
   liquid["tonel"] = UBASE("Brazilian", "tonel", 9.583200000000000E-01, "m3", "L3", "1.0");
   liquid["tonel(Bahia)"] = UBASE("Brazilian", "tonel(Bahia)", 6.343200000000000E-01, "m3", "L3", "1.0");
   liquid["tonel(common)"] = UBASE("Brazilian", "tonel(common)", 6.526800000000000E-01, "m3", "L3", "1.0");
   dry["almude(salt)"] = UBASE("Brazilian", "almude(salt)", 2.445600000000000E-02, "m3", "L3", "1.0");
   dry["alquiera(salt)"] = UBASE("Brazilian", "alquiera(salt)", 4.076000000000000E-03, "m3", "L3", "1.0");
   dry["canada(salt)"] = UBASE("Brazilian", "canada(salt)", 2.038000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-pe"] = UBASE("Brazilian", "cubic-pe", 3.703703703703700E-02, "m3", "L3", "1.0");
   dry["moio(salt)"] = UBASE("Brazilian", "moio(salt)", 2.445600000000000E-01, "m3", "L3", "1.0");
   dry["pipa(salt)"] = UBASE("Brazilian", "pipa(salt)", 3.668400000000000E-01, "m3", "L3", "1.0");
   dry["tonel(salt)"] = UBASE("Brazilian", "tonel(salt)", 7.336800000000000E-01, "m3", "L3", "1.0");
   _map["Brazilian"] = BaseSystem("Brazilian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit15(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["arshin"] = UBASE("Bulgarian", "arshin", 7.112000000000000E-01, "m", "L", "1.0");
   area["square-arshin"] = UBASE("Bulgarian", "square-arshin", 5.058054400000000E-01, "m2", "L2", "1.0");
   mass["oka"] = UBASE("Bulgarian", "oka", 1.270058636000000E+00, "kg", "M", "1.0");
   mass["tovar"] = UBASE("Bulgarian", "tovar", 1.270058636000000E+02, "kg", "M", "1.0");
   liquid["krina"] = UBASE("Bulgarian", "krina", 2.000000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-arshin"] = UBASE("Bulgarian", "cubic-arshin", 3.597288289280000E-01, "m3", "L3", "1.0");
   _map["Bulgarian"] = BaseSystem("Bulgarian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit16(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["bamboo"] = UBASE("Burmese", "bamboo", 3.911600000000000E+00, "m", "L", "1.0");
   length["dain"] = UBASE("Burmese", "dain", 3.911600000000000E+03, "m", "L", "1.0");
   length["dha"] = UBASE("Burmese", "dha", 3.911600000000000E+00, "m", "L", "1.0");
   length["lan"] = UBASE("Burmese", "lan", 2.235200000000000E+00, "m", "L", "1.0");
   length["oke-thapal"] = UBASE("Burmese", "oke-thapal", 7.823200000000000E+01, "m", "L", "1.0");
   length["palgat"] = UBASE("Burmese", "palgat", 1.016000000000000E-01, "m", "L", "1.0");
   length["sandong"] = UBASE("Burmese", "sandong", 5.588000000000000E-01, "m", "L", "1.0");
   length["taim"] = UBASE("Burmese", "taim", 4.572000000000000E-01, "m", "L", "1.0");
   area["square-sandong"] = UBASE("Burmese", "square-sandong", 3.122574400000000E-01, "m2", "L2", "1.0");
   mass["candy"] = UBASE("Burmese", "candy", 2.448000000000000E+02, "kg", "M", "1.0");
   mass["catty"] = UBASE("Burmese", "catty", 5.440000000000000E-01, "kg", "M", "1.0");
   mass["mat"] = UBASE("Burmese", "mat", 4.080000000000000E-03, "kg", "M", "1.0");
   mass["moo"] = UBASE("Burmese", "moo", 2.040000000000000E-03, "kg", "M", "1.0");
   mass["pai"] = UBASE("Burmese", "pai", 1.020000000000000E-03, "kg", "M", "1.0");
   mass["ruay"] = UBASE("Burmese", "ruay", 2.550000000000000E-04, "kg", "M", "1.0");
   mass["tical"] = UBASE("Burmese", "tical", 1.632000000000000E-02, "kg", "M", "1.0");
   mass["viss"] = UBASE("Burmese", "viss", 1.632000000000000E+00, "kg", "M", "1.0");
   liquid["byee"] = UBASE("Burmese", "byee", 5.050000000000000E-04, "m3", "L3", "1.0");
   liquid["kwai"] = UBASE("Burmese", "kwai", 4.040000000000000E-03, "m3", "L3", "1.0");
   liquid["lamany"] = UBASE("Burmese", "lamany", 6.312500000000000E-05, "m3", "L3", "1.0");
   liquid["seit"] = UBASE("Burmese", "seit", 2.020000000000000E-03, "m3", "L3", "1.0");
   liquid["zalay"] = UBASE("Burmese", "zalay", 1.262500000000000E-04, "m3", "L3", "1.0");
   liquid["zayoot"] = UBASE("Burmese", "zayoot", 1.010000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-sandong"] = UBASE("Burmese", "cubic-sandong", 1.744894574720000E-01, "m3", "L3", "1.0");
   _map["Burmese"] = BaseSystem("Burmese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit17(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["daktylos"] = UBASE("Byzantine", "daktylos", 1.928125000000000E-02, "m", "L", "1.0");
   length["palaiste"] = UBASE("Byzantine", "palaiste", 7.712500000000000E-02, "m", "L", "1.0");
   length["anticheir"] = UBASE("Byzantine", "anticheir", 7.712500000000000E-02, "m", "L", "1.0");
   length["hemipodion"] = UBASE("Byzantine", "hemipodion", 1.542500000000000E-01, "m", "L", "1.0");
   length["spithame"] = UBASE("Byzantine", "spithame", 3.085000000000000E-01, "m", "L", "1.0");
   length["pous"] = UBASE("Byzantine", "pous", 3.085000000000000E-01, "m", "L", "1.0");
   length["demosios-pekhys"] = UBASE("Byzantine", "demosios-pekhys", 6.170000000000000E-01, "m", "L", "1.0");
   length["basilikos-pekhys"] = UBASE("Byzantine", "basilikos-pekhys", 6.170000000000000E-01, "m", "L", "1.0");
   length["geometrikos-pekhys"] = UBASE("Byzantine", "geometrikos-pekhys", 6.170000000000000E-01, "m", "L", "1.0");
   length["bema-haploun"] = UBASE("Byzantine", "bema-haploun", 9.255000000000000E-01, "m", "L", "1.0");
   length["bema-deploun"] = UBASE("Byzantine", "bema-deploun", 1.542500000000000E+00, "m", "L", "1.0");
   length["haple-orguia"] = UBASE("Byzantine", "haple-orguia", 1.851000000000000E+00, "m", "L", "1.0");
   length["demosios-orguia"] = UBASE("Byzantine", "demosios-orguia", 2.159500000000000E+00, "m", "L", "1.0");
   length["basilikos-orguia"] = UBASE("Byzantine", "basilikos-orguia", 2.159500000000000E+00, "m", "L", "1.0");
   length["dekapodon"] = UBASE("Byzantine", "dekapodon", 3.085000000000000E+00, "m", "L", "1.0");
   length["skhoinion"] = UBASE("Byzantine", "skhoinion", 1.851000000000000E+01, "m", "L", "1.0");
   length["plethron"] = UBASE("Byzantine", "plethron", 3.085000000000000E+01, "m", "L", "1.0");
   length["stadion"] = UBASE("Byzantine", "stadion", 1.851000000000000E+02, "m", "L", "1.0");
   length["doxariou-bole"] = UBASE("Byzantine", "doxariou-bole", 3.085000000000000E+02, "m", "L", "1.0");
   length["milion"] = UBASE("Byzantine", "milion", 1.542500000000000E+03, "m", "L", "1.0");
   length["skhoinos"] = UBASE("Byzantine", "skhoinos", 6.170000000000000E+03, "m", "L", "1.0");
   length["hodos-hemeras"] = UBASE("Byzantine", "hodos-hemeras", 4.627500000000000E+04, "m", "L", "1.0");
   length["hodos-sabbatou"] = UBASE("Byzantine", "hodos-sabbatou", 3.239250000000000E+05, "m", "L", "1.0");
   area["pous"] = UBASE("Byzantine", "pous", 9.517225000000000E-02, "m2", "L2", "1.0");
   area["stremma"] = UBASE("Byzantine", "stremma", 9.517225000000000E+02, "m2", "L2", "1.0");
   area["modios-zeugarion"] = UBASE("Byzantine", "modios-zeugarion", 2.855167500000000E+03, "m2", "L2", "1.0");
   mass["gramma"] = UBASE("Byzantine", "gramma", 1.135416666666670E-03, "kg", "M", "1.0");
   mass["tremisis"] = UBASE("Byzantine", "tremisis", 1.135416666666670E-03, "kg", "M", "1.0");
   mass["semisis"] = UBASE("Byzantine", "semisis", 2.270833333333330E-03, "kg", "M", "1.0");
   mass["nomisma"] = UBASE("Byzantine", "nomisma", 4.541666666666670E-03, "kg", "M", "1.0");
   mass["ouggia"] = UBASE("Byzantine", "ouggia", 2.725000000000000E-02, "kg", "M", "1.0");
   mass["ogkia"] = UBASE("Byzantine", "ogkia", 2.725000000000000E-02, "kg", "M", "1.0");
   mass["ougkia"] = UBASE("Byzantine", "ougkia", 2.725000000000000E-02, "kg", "M", "1.0");
   mass["litra"] = UBASE("Byzantine", "litra", 3.270000000000000E-01, "kg", "M", "1.0");
   liquid["ouggia"] = UBASE("Byzantine", "ouggia", 1.830933333333330E-04, "m3", "L3", "1.0");
   liquid["ogkia"] = UBASE("Byzantine", "ogkia", 1.830933333333330E-04, "m3", "L3", "1.0");
   liquid["ougkia"] = UBASE("Byzantine", "ougkia", 1.830933333333330E-04, "m3", "L3", "1.0");
   liquid["kotyle"] = UBASE("Byzantine", "kotyle", 2.746400000000000E-04, "m3", "L3", "1.0");
   liquid["hemixestion"] = UBASE("Byzantine", "hemixestion", 2.746400000000000E-04, "m3", "L3", "1.0");
   liquid["xestes"] = UBASE("Byzantine", "xestes", 5.492800000000000E-04, "m3", "L3", "1.0");
   liquid["litra"] = UBASE("Byzantine", "litra", 2.197120000000000E-03, "m3", "L3", "1.0");
   liquid["phoukta"] = UBASE("Byzantine", "phoukta", 3.387226666666670E-03, "m3", "L3", "1.0");
   liquid["modios"] = UBASE("Byzantine", "modios", 8.788480000000000E-02, "m3", "L3", "1.0");
   dry["cubic-pous"] = UBASE("Byzantine", "cubic-pous", 2.936063912500000E-02, "m3", "L3", "1.0");
   _map["Byzantine"] = BaseSystem("Byzantine", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit18(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cham-am"] = UBASE("Cambodian", "cham-am", 2.500000000000000E-01, "m", "L", "1.0");
   length["muoi"] = UBASE("Cambodian", "muoi", 1.000000000000000E+00, "m", "L", "1.0");
   length["muoi-thuoc"] = UBASE("Cambodian", "muoi-thuoc", 1.000000000000000E+00, "m", "L", "1.0");
   length["phyeam"] = UBASE("Cambodian", "phyeam", 5.000000000000000E+00, "m", "L", "1.0");
   length["sen"] = UBASE("Cambodian", "sen", 4.000000000000000E+01, "m", "L", "1.0");
   length["thneap"] = UBASE("Cambodian", "thneap", 2.083333333333330E-02, "m", "L", "1.0");
   length["yoch"] = UBASE("Cambodian", "yoch", 1.600000000000000E+04, "m", "L", "1.0");
   area["square-muoi"] = UBASE("Cambodian", "square-muoi", 1.000000000000000E+00, "m2", "L2", "1.0");
   mass["chin"] = UBASE("Cambodian", "chin", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["chong"] = UBASE("Cambodian", "chong", 3.000000000000000E+01, "kg", "M", "1.0");
   mass["hap"] = UBASE("Cambodian", "hap", 6.000000000000000E+01, "kg", "M", "1.0");
   mass["hun"] = UBASE("Cambodian", "hun", 3.750000000000000E-04, "kg", "M", "1.0");
   mass["lin"] = UBASE("Cambodian", "lin", 3.750000000000000E-05, "kg", "M", "1.0");
   mass["muoi"] = UBASE("Cambodian", "muoi", 1.000000000000000E-03, "kg", "M", "1.0");
   mass["neal"] = UBASE("Cambodian", "neal", 6.000000000000000E-01, "kg", "M", "1.0");
   mass["picul"] = UBASE("Cambodian", "picul", 6.000000000000000E+01, "kg", "M", "1.0");
   mass["pram-roi"] = UBASE("Cambodian", "pram-roi", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["tael"] = UBASE("Cambodian", "tael", 3.750000000000000E-02, "kg", "M", "1.0");
   liquid["kantang"] = UBASE("Cambodian", "kantang", 7.500000000000000E-03, "m3", "L3", "1.0");
   liquid["muoi"] = UBASE("Cambodian", "muoi", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["sesep"] = UBASE("Cambodian", "sesep", 4.000000000000000E-02, "m3", "L3", "1.0");
   liquid["tao"] = UBASE("Cambodian", "tao", 1.500000000000000E-02, "m3", "L3", "1.0");
   liquid["thang"] = UBASE("Cambodian", "thang", 3.000000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-muoi"] = UBASE("Cambodian", "cubic-muoi", 1.000000000000000E+00, "m3", "L3", "1.0");
   _map["Cambodian"] = BaseSystem("Cambodian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit19(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["arpent(du-roi)"] = UBASE("CAN", "arpent(du-roi)", 5.847109500600000E+01, "m", "L", "1.0");
   length["foot"] = UBASE("CAN", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("CAN", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["league"] = UBASE("CAN", "league", 4.828032000000000E+03, "m", "L", "1.0");
   length["perche"] = UBASE("CAN", "perche", 5.847109500600000E+00, "m", "L", "1.0");
   area["acre"] = UBASE("CAN", "acre", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["ac"] = UBASE("CAN", "ac", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["acres"] = UBASE("CAN", "acres", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["arpent"] = UBASE("CAN", "arpent", 3.418868951200680E+03, "m2", "L2", "1.0");
   area["a"] = UBASE("CAN", "a", 3.418868951200680E+03, "m2", "L2", "1.0");
   area["square-league"] = UBASE("CAN", "square-league", 2.330989299302400E+07, "m2", "L2", "1.0");
   area["sq-leag"] = UBASE("CAN", "sq-leag", 2.330989299302400E+07, "m2", "L2", "1.0");
   area["square-leagues"] = UBASE("CAN", "square-leagues", 2.330989299302400E+07, "m2", "L2", "1.0");
   area["square-foot"] = UBASE("CAN", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("CAN", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["unit"] = UBASE("CAN", "unit", 2.500000000000000E+05, "m2", "L2", "1.0");
   mass["hundredweight"] = UBASE("CAN", "hundredweight", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cwt"] = UBASE("CAN", "cwt", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["hundredweight(long)"] = UBASE("CAN", "hundredweight(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cH(long)"] = UBASE("CAN", "cH(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cwt(long)"] = UBASE("CAN", "cwt(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["Ig(long)"] = UBASE("CAN", "Ig(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["hundredweight(gross)"] = UBASE("CAN", "hundredweight(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cH(gross)"] = UBASE("CAN", "cH(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cwt(gross)"] = UBASE("CAN", "cwt(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["Ig(gross)"] = UBASE("CAN", "Ig(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["hundredweight(short)"] = UBASE("CAN", "hundredweight(short)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["sh(short)"] = UBASE("CAN", "sh(short)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cwt(short)"] = UBASE("CAN", "cwt(short)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["hundredweight(net)"] = UBASE("CAN", "hundredweight(net)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["sh(net)"] = UBASE("CAN", "sh(net)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cwt(net)"] = UBASE("CAN", "cwt(net)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["pound"] = UBASE("CAN", "pound", 4.535923380000000E-01, "kg", "M", "1.0");
   mass["pounds"] = UBASE("CAN", "pounds", 4.535923380000000E-01, "kg", "M", "1.0");
   mass["lb"] = UBASE("CAN", "lb", 4.535923380000000E-01, "kg", "M", "1.0");
   liquid["gallon"] = UBASE("CAN", "gallon", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gal"] = UBASE("CAN", "gal", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gallons"] = UBASE("CAN", "gallons", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["liter-per-flush"] = UBASE("CAN", "liter-per-flush", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["lpf"] = UBASE("CAN", "lpf", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["LPF"] = UBASE("CAN", "LPF", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["bank-cubic-meter"] = UBASE("CAN", "bank-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["BCM"] = UBASE("CAN", "BCM", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["pied-mesure-planche"] = UBASE("CAN", "pied-mesure-planche", 2.359737216000000E-03, "m3", "L3", "1.0");
   dry["pmp"] = UBASE("CAN", "pmp", 2.359737216000000E-03, "m3", "L3", "1.0");
   _map["CAN"] = BaseSystem("CAN", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit20(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["covid(Ceylon)"] = UBASE("Ceylon", "covid(Ceylon)", 4.640000000000000E-01, "m", "L", "1.0");
   length["covid(Madras)"] = UBASE("Ceylon", "covid(Madras)", 4.720000000000000E-01, "m", "L", "1.0");
   area["square-covid(Ceylon)"] = UBASE("Ceylon", "square-covid(Ceylon)", 2.152960000000000E-01, "m2", "L2", "1.0");
   area["square-covid(Madras)"] = UBASE("Ceylon", "square-covid(Madras)", 2.227840000000000E-01, "m2", "L2", "1.0");
   mass["candy(Ceylon)"] = UBASE("Ceylon", "candy(Ceylon)", 2.267960000000000E+02, "kg", "M", "1.0");
   mass["candy(Madras)"] = UBASE("Ceylon", "candy(Madras)", 2.267960000000000E+02, "kg", "M", "1.0");
   mass["fanam(Ceylon)"] = UBASE("Ceylon", "fanam(Ceylon)", 9.843576388888890E-05, "kg", "M", "1.0");
   mass["fanam(Madras)"] = UBASE("Ceylon", "fanam(Madras)", 9.843576388888890E-05, "kg", "M", "1.0");
   mass["maund(Ceylon)"] = UBASE("Ceylon", "maund(Ceylon)", 1.133980000000000E+01, "kg", "M", "1.0");
   mass["maund(Madras)"] = UBASE("Ceylon", "maund(Madras)", 1.133980000000000E+01, "kg", "M", "1.0");
   mass["pagoda(Ceylon)"] = UBASE("Ceylon", "pagoda(Ceylon)", 3.543687500000000E-03, "kg", "M", "1.0");
   mass["pagoda(Madras)"] = UBASE("Ceylon", "pagoda(Madras)", 3.543687500000000E-03, "kg", "M", "1.0");
   mass["pollam(Ceylon)"] = UBASE("Ceylon", "pollam(Ceylon)", 3.543687500000000E-02, "kg", "M", "1.0");
   mass["pollam(Madras)"] = UBASE("Ceylon", "pollam(Madras)", 3.543687500000000E-02, "kg", "M", "1.0");
   mass["powa(Ceylon)"] = UBASE("Ceylon", "powa(Ceylon)", 7.087375000000000E-02, "kg", "M", "1.0");
   mass["powa(Madras)"] = UBASE("Ceylon", "powa(Madras)", 7.087375000000000E-02, "kg", "M", "1.0");
   mass["seer(Ceylon)"] = UBASE("Ceylon", "seer(Ceylon)", 2.834950000000000E-01, "kg", "M", "1.0");
   mass["seer(Madras)"] = UBASE("Ceylon", "seer(Madras)", 2.834950000000000E-01, "kg", "M", "1.0");
   mass["varahan(Ceylon)"] = UBASE("Ceylon", "varahan(Ceylon)", 3.543687500000000E-02, "kg", "M", "1.0");
   mass["varahan(Madras)"] = UBASE("Ceylon", "varahan(Madras)", 3.543687500000000E-02, "kg", "M", "1.0");
   mass["vis(Ceylon)"] = UBASE("Ceylon", "vis(Ceylon)", 1.417475000000000E+00, "kg", "M", "1.0");
   mass["vis(Madras)"] = UBASE("Ceylon", "vis(Madras)", 1.417475000000000E+00, "kg", "M", "1.0");
   liquid["cubic-covid(Ceylon)"] = UBASE("Ceylon", "cubic-covid(Ceylon)", 9.989734400000000E-02, "m3", "L3", "1.0");
   liquid["cubic-covid(Madras)"] = UBASE("Ceylon", "cubic-covid(Madras)", 1.051540480000000E-01, "m3", "L3", "1.0");
   dry["chundroon"] = UBASE("Ceylon", "chundroon", 2.649000000000000E-04, "m3", "L3", "1.0");
   _map["Ceylon"] = BaseSystem("Ceylon", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit21(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["centimeter"] = UBASE("cgs", "centimeter", 1.000000000000000E-02, "m", "L", "1.0");
   length["cm"] = UBASE("cgs", "cm", 1.000000000000000E-02, "m", "L", "1.0");
   length["decimeter"] = UBASE("cgs", "decimeter", 1.000000000000000E-01, "m", "L", "1.0");
   length["dm"] = UBASE("cgs", "dm", 1.000000000000000E-01, "m", "L", "1.0");
   length["millimeter"] = UBASE("cgs", "millimeter", 1.000000000000000E-03, "m", "L", "1.0");
   length["mm"] = UBASE("cgs", "mm", 1.000000000000000E-03, "m", "L", "1.0");
   length["micrometer"] = UBASE("cgs", "micrometer", 1.000000000000000E-06, "m", "L", "1.0");
   length["um"] = UBASE("cgs", "um", 1.000000000000000E-06, "m", "L", "1.0");
   length["decameter"] = UBASE("cgs", "decameter", 1.000000000000000E-01, "m", "L", "1.0");
   length["dam"] = UBASE("cgs", "dam", 1.000000000000000E-01, "m", "L", "1.0");
   length["meter"] = UBASE("cgs", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   length["m"] = UBASE("cgs", "m", 1.000000000000000E+00, "m", "L", "1.0");
   length["hectometer"] = UBASE("cgs", "hectometer", 1.000000000000000E+02, "m", "L", "1.0");
   length["hm"] = UBASE("cgs", "hm", 1.000000000000000E+02, "m", "L", "1.0");
   length["kilometer"] = UBASE("cgs", "kilometer", 1.000000000000000E+03, "m", "L", "1.0");
   length["km"] = UBASE("cgs", "km", 1.000000000000000E+03, "m", "L", "1.0");
   area["darey"] = UBASE("cgs", "darey", 9.869232667160000E-13, "m2", "L2", "1.0");
   area["square-centimeter"] = UBASE("cgs", "square-centimeter", 1.000000000000000E-04, "m2", "L2", "1.0");
   area["cm2"] = UBASE("cgs", "cm2", 1.000000000000000E-04, "m2", "L2", "1.0");
   area["square-decimeter"] = UBASE("cgs", "square-decimeter", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["dm2"] = UBASE("cgs", "dm2", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["square-millimeter"] = UBASE("cgs", "square-millimeter", 1.000000000000000E-06, "m2", "L2", "1.0");
   area["mm2"] = UBASE("cgs", "mm2", 1.000000000000000E-06, "m2", "L2", "1.0");
   area["square-microimeter"] = UBASE("cgs", "square-microimeter", 1.000000000000000E-10, "m2", "L2", "1.0");
   area["um2"] = UBASE("cgs", "um2", 1.000000000000000E-10, "m2", "L2", "1.0");
   area["square-nanometer"] = UBASE("cgs", "square-nanometer", 1.000000000000000E-18, "m2", "L2", "1.0");
   area["nm2"] = UBASE("cgs", "nm2", 1.000000000000000E-18, "m2", "L2", "1.0");
   area["square-decameter"] = UBASE("cgs", "square-decameter", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["dam2"] = UBASE("cgs", "dam2", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["square-meter"] = UBASE("cgs", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["m2"] = UBASE("cgs", "m2", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["square-hectometer"] = UBASE("cgs", "square-hectometer", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["hm2"] = UBASE("cgs", "hm2", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["square-kilometer"] = UBASE("cgs", "square-kilometer", 1.000000000000000E+06, "m2", "L2", "1.0");
   area["km2"] = UBASE("cgs", "km2", 1.000000000000000E+06, "m2", "L2", "1.0");
   mass["glug"] = UBASE("cgs", "glug", 9.806650000000000E-01, "kg", "M", "1.0");
   mass["kilogram"] = UBASE("cgs", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["kg"] = UBASE("cgs", "kg", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["gram"] = UBASE("cgs", "gram", 1.000000000000000E-03, "kg", "M", "1.0");
   mass["g"] = UBASE("cgs", "g", 1.000000000000000E-03, "kg", "M", "1.0");
   dry["cubic-centimeter"] = UBASE("cgs", "cubic-centimeter", 1.000000000000000E-06, "m3", "L3", "1.0");
   dry["cm3"] = UBASE("cgs", "cm3", 1.000000000000000E-06, "m3", "L3", "1.0");
   dry["cubic-decimeter"] = UBASE("cgs", "cubic-decimeter", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["dm3"] = UBASE("cgs", "dm3", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-millimeter"] = UBASE("cgs", "cubic-millimeter", 1.000000000000000E-09, "m3", "L3", "1.0");
   dry["mm3"] = UBASE("cgs", "mm3", 1.000000000000000E-09, "m3", "L3", "1.0");
   dry["cubic-microimeter"] = UBASE("cgs", "cubic-microimeter", 1.000000000000000E-15, "m3", "L3", "1.0");
   dry["um3"] = UBASE("cgs", "um3", 1.000000000000000E-15, "m3", "L3", "1.0");
   dry["cubic-nanometer"] = UBASE("cgs", "cubic-nanometer", 1.000000000000000E-27, "m3", "L3", "1.0");
   dry["nm3"] = UBASE("cgs", "nm3", 1.000000000000000E-27, "m3", "L3", "1.0");
   dry["cubic-decameter"] = UBASE("cgs", "cubic-decameter", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["dam3"] = UBASE("cgs", "dam3", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-meter"] = UBASE("cgs", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["m3"] = UBASE("cgs", "m3", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubic-hectometer"] = UBASE("cgs", "cubic-hectometer", 1.000000000000000E+06, "m3", "L3", "1.0");
   dry["hm3"] = UBASE("cgs", "hm3", 1.000000000000000E+06, "m3", "L3", "1.0");
   dry["cubic-kilometer"] = UBASE("cgs", "cubic-kilometer", 1.000000000000000E+09, "m3", "L3", "1.0");
   dry["km3"] = UBASE("cgs", "km3", 1.000000000000000E+09, "m3", "L3", "1.0");
   _map["cgs"] = BaseSystem("cgs", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit22(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["bara"] = UBASE("Chilean", "bara", 8.360000000000000E-01, "m", "L", "1.0");
   length["g"] = UBASE("Chilean", "g", 8.360000000000000E-01, "m", "L", "1.0");
   length["cuadra"] = UBASE("Chilean", "cuadra", 1.254000000000000E+02, "m", "L", "1.0");
   length["legua"] = UBASE("Chilean", "legua", 4.514400000000000E+03, "m", "L", "1.0");
   length["linea"] = UBASE("Chilean", "linea", 1.935185185185190E-03, "m", "L", "1.0");
   length["pie"] = UBASE("Chilean", "pie", 2.786666666666670E-01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Chilean", "pulgada", 2.322222222222220E-02, "m", "L", "1.0");
   area["square-bara"] = UBASE("Chilean", "square-bara", 6.988960000000000E-01, "m2", "L2", "1.0");
   mass["adarme"] = UBASE("Chilean", "adarme", 1.797238281250000E-03, "kg", "M", "1.0");
   mass["arroba"] = UBASE("Chilean", "arroba", 1.150232500000000E+01, "kg", "M", "1.0");
   mass["castellano"] = UBASE("Chilean", "castellano", 4.600930000000000E-03, "kg", "M", "1.0");
   mass["granos"] = UBASE("Chilean", "granos", 4.992328559027780E-05, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Chilean", "libbra", 4.600930000000000E-01, "kg", "M", "1.0");
   mass["onza"] = UBASE("Chilean", "onza", 2.875581250000000E-02, "kg", "M", "1.0");
   mass["quintale"] = UBASE("Chilean", "quintale", 4.600930000000000E+01, "kg", "M", "1.0");
   mass["sastellano"] = UBASE("Chilean", "sastellano", 4.600930000000000E-03, "kg", "M", "1.0");
   liquid["almude"] = UBASE("Chilean", "almude", 8.083000000000000E-03, "m3", "L3", "1.0");
   liquid["arroba"] = UBASE("Chilean", "arroba", 3.233200000000000E-02, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Chilean", "cuartillo", 1.010375000000000E-03, "m3", "L3", "1.0");
   liquid["fanega"] = UBASE("Chilean", "fanega", 9.699600000000000E-02, "m3", "L3", "1.0");
   dry["cubic-bara"] = UBASE("Chilean", "cubic-bara", 5.842770560000000E-01, "m3", "L3", "1.0");
   _map["Chilean"] = BaseSystem("Chilean", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit23(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["bu"] = UBASE("Chinese", "bu", 1.600000000000000E+00, "m", "L", "1.0");
   length["chek"] = UBASE("Chinese", "chek", 3.714750000000000E-01, "m", "L", "1.0");
   length["chi"] = UBASE("Chinese", "chi", 3.200000000000000E-01, "m", "L", "1.0");
   length["chi(metric)"] = UBASE("Chinese", "chi(metric)", 1.000000000000000E+00, "m", "L", "1.0");
   length["cun"] = UBASE("Chinese", "cun", 3.200000000000000E-02, "m", "L", "1.0");
   length["cun(metric)"] = UBASE("Chinese", "cun(metric)", 1.000000000000000E-01, "m", "L", "1.0");
   length["fan"] = UBASE("Chinese", "fan", 3.714750000000000E-03, "m", "L", "1.0");
   length["fen"] = UBASE("Chinese", "fen", 3.200000000000000E-03, "m", "L", "1.0");
   length["fen(gros)"] = UBASE("Chinese", "fen(gros)", 3.840000000000000E+01, "m", "L", "1.0");
   length["fen(metric)"] = UBASE("Chinese", "fen(metric)", 1.000000000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Chinese", "foot", 3.200000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Chinese", "feet", 3.200000000000000E-01, "m", "L", "1.0");
   length["shaku"] = UBASE("Chinese", "shaku", 3.030303030303030E-01, "m", "L", "1.0");
   length["hao"] = UBASE("Chinese", "hao", 3.200000000000000E-05, "m", "L", "1.0");
   length["hao(metric)"] = UBASE("Chinese", "hao(metric)", 1.000000000000000E-04, "m", "L", "1.0");
   length["hoe"] = UBASE("Chinese", "hoe", 3.200000000000000E-07, "m", "L", "1.0");
   length["hu(metric)"] = UBASE("Chinese", "hu(metric)", 1.000000000000000E-06, "m", "L", "1.0");
   length["li(large)"] = UBASE("Chinese", "li(large)", 5.760000000000000E+02, "m", "L", "1.0");
   length["li(metric-large)"] = UBASE("Chinese", "li(metric-large)", 1.000000000000000E+03, "m", "L", "1.0");
   length["li(metric-small)"] = UBASE("Chinese", "li(metric-small)", 1.000000000000000E-03, "m", "L", "1.0");
   length["li(small)"] = UBASE("Chinese", "li(small)", 3.200000000000000E-04, "m", "L", "1.0");
   length["kyo"] = UBASE("Chinese", "kyo", 9.600000000000000E+01, "m", "L", "1.0");
   length["pou"] = UBASE("Chinese", "pou", 1.600000000000000E+00, "m", "L", "1.0");
   length["pou(old)"] = UBASE("Chinese", "pou(old)", 5.760000000000000E+03, "m", "L", "1.0");
   length["si(metic)"] = UBASE("Chinese", "si(metic)", 1.000000000000000E-05, "m", "L", "1.0");
   length["su"] = UBASE("Chinese", "su", 3.200000000000000E-06, "m", "L", "1.0");
   length["tchi"] = UBASE("Chinese", "tchi", 3.200000000000000E-01, "m", "L", "1.0");
   length["thaan"] = UBASE("Chinese", "thaan", 4.608000000000000E+04, "m", "L", "1.0");
   length["thsan"] = UBASE("Chinese", "thsan", 4.608000000000000E+04, "m", "L", "1.0");
   length["tsouen"] = UBASE("Chinese", "tsouen", 3.200000000000000E-02, "m", "L", "1.0");
   length["tsun"] = UBASE("Chinese", "tsun", 3.714750000000000E-02, "m", "L", "1.0");
   length["yan"] = UBASE("Chinese", "yan", 3.200000000000000E+01, "m", "L", "1.0");
   length["yin"] = UBASE("Chinese", "yin", 3.200000000000000E+01, "m", "L", "1.0");
   length["yn"] = UBASE("Chinese", "yn", 3.200000000000000E+01, "m", "L", "1.0");
   length["zhang"] = UBASE("Chinese", "zhang", 3.200000000000000E+00, "m", "L", "1.0");
   length["zoll"] = UBASE("Chinese", "zoll", 2.615475000000000E-02, "m", "L", "1.0");
   area["cek3"] = UBASE("Chinese", "cek3", 1.269000000000000E-01, "m2", "L2", "1.0");
   area["ching"] = UBASE("Chinese", "ching", 6.144000000000000E+04, "m2", "L2", "1.0");
   area["fan1"] = UBASE("Chinese", "fan1", 7.614000000000000E+01, "m2", "L2", "1.0");
   area["fang-chi"] = UBASE("Chinese", "fang-chi", 1.024000000000000E-01, "m2", "L2", "1.0");
   area["fang-cun"] = UBASE("Chinese", "fang-cun", 1.024000000000000E-03, "m2", "L2", "1.0");
   area["fang-zhang"] = UBASE("Chinese", "fang-zhang", 1.024000000000000E+01, "m2", "L2", "1.0");
   area["fen"] = UBASE("Chinese", "fen", 6.144000000000000E+01, "m2", "L2", "1.0");
   area["hao"] = UBASE("Chinese", "hao", 6.144000000000000E-01, "m2", "L2", "1.0");
   area["king"] = UBASE("Chinese", "king", 6.144000000000000E+03, "m2", "L2", "1.0");
   area["kish"] = UBASE("Chinese", "kish", 1.536000000000000E+02, "m2", "L2", "1.0");
   area["kung"] = UBASE("Chinese", "kung", 2.560000000000000E+00, "m2", "L2", "1.0");
   area["li"] = UBASE("Chinese", "li", 6.144000000000000E+00, "m2", "L2", "1.0");
   area["lyi"] = UBASE("Chinese", "lyi", 6.144000000000000E+00, "m2", "L2", "1.0");
   area["mau5"] = UBASE("Chinese", "mau5", 7.614000000000000E+02, "m2", "L2", "1.0");
   area["meou"] = UBASE("Chinese", "meou", 6.144000000000000E+02, "m2", "L2", "1.0");
   area["mu"] = UBASE("Chinese", "mu", 6.144000000000000E+02, "m2", "L2", "1.0");
   area["pou3"] = UBASE("Chinese", "pou3", 3.172500000000000E+00, "m2", "L2", "1.0");
   area["qing"] = UBASE("Chinese", "qing", 6.144000000000000E+04, "m2", "L2", "1.0");
   area["zoeng6"] = UBASE("Chinese", "zoeng6", 1.269000000000000E+01, "m2", "L2", "1.0");
   mass["candareen"] = UBASE("Chinese", "candareen", 3.779936416666670E-04, "kg", "M", "1.0");
   mass["candareen(troy)"] = UBASE("Chinese", "candareen(troy)", 3.732417216000000E-04, "kg", "M", "1.0");
   mass["cash"] = UBASE("Chinese", "cash", 3.779936416666670E-05, "kg", "M", "1.0");
   mass["catty"] = UBASE("Chinese", "catty", 6.047898266666670E-01, "kg", "M", "1.0");
   mass["dan"] = UBASE("Chinese", "dan", 7.161792000000000E+01, "kg", "M", "1.0");
   mass["fan"] = UBASE("Chinese", "fan", 3.779936416666670E-04, "kg", "M", "1.0");
   mass["fen"] = UBASE("Chinese", "fen", 3.730100000000000E-04, "kg", "M", "1.0");
   mass["hao"] = UBASE("Chinese", "hao", 3.730100000000000E-06, "kg", "M", "1.0");
   mass["jin"] = UBASE("Chinese", "jin", 5.968160000000000E-01, "kg", "M", "1.0");
   mass["jun"] = UBASE("Chinese", "jun", 1.790448000000000E+01, "kg", "M", "1.0");
   mass["kan"] = UBASE("Chinese", "kan", 6.047898266666670E-01, "kg", "M", "1.0");
   mass["kwan"] = UBASE("Chinese", "kwan", 1.790448000000000E+01, "kg", "M", "1.0");
   mass["leung"] = UBASE("Chinese", "leung", 3.779936416666670E-02, "kg", "M", "1.0");
   mass["li"] = UBASE("Chinese", "li", 3.730100000000000E-05, "kg", "M", "1.0");
   mass["liang"] = UBASE("Chinese", "liang", 3.730100000000000E-02, "kg", "M", "1.0");
   mass["mace"] = UBASE("Chinese", "mace", 3.779936416666670E-03, "kg", "M", "1.0");
   mass["mace(troy)"] = UBASE("Chinese", "mace(troy)", 3.732417216000000E-03, "kg", "M", "1.0");
   mass["picul"] = UBASE("Chinese", "picul", 6.047898266666670E+01, "kg", "M", "1.0");
   mass["qian"] = UBASE("Chinese", "qian", 3.730100000000000E-03, "kg", "M", "1.0");
   mass["shih"] = UBASE("Chinese", "shih", 7.161792000000000E+01, "kg", "M", "1.0");
   mass["shu"] = UBASE("Chinese", "shu", 1.554208333333330E-05, "kg", "M", "1.0");
   mass["tael"] = UBASE("Chinese", "tael", 3.779936416666670E-02, "kg", "M", "1.0");
   mass["tael(troy)"] = UBASE("Chinese", "tael(troy)", 3.732417216000000E-02, "kg", "M", "1.0");
   mass["tail(Hong-Kong)"] = UBASE("Chinese", "tail(Hong-Kong)", 3.779946637000000E-02, "kg", "M", "1.0");
   mass["tail(Singapore)"] = UBASE("Chinese", "tail(Singapore)", 3.779303777000000E-02, "kg", "M", "1.0");
   mass["tail(Taiwan)"] = UBASE("Chinese", "tail(Taiwan)", 3.750093752000000E-02, "kg", "M", "1.0");
   mass["tam"] = UBASE("Chinese", "tam", 6.047898266666670E+01, "kg", "M", "1.0");
   mass["tan"] = UBASE("Chinese", "tan", 5.968160000000000E+01, "kg", "M", "1.0");
   mass["tchin"] = UBASE("Chinese", "tchin", 5.968160000000000E-01, "kg", "M", "1.0");
   mass["tsin"] = UBASE("Chinese", "tsin", 3.779936416666670E-03, "kg", "M", "1.0");
   mass["tsouen"] = UBASE("Chinese", "tsouen", 3.730100000000000E-03, "kg", "M", "1.0");
   mass["zhu"] = UBASE("Chinese", "zhu", 1.554208333333330E-03, "kg", "M", "1.0");
   liquid["chao"] = UBASE("Chinese", "chao", 1.035468800000000E-05, "m3", "L3", "1.0");
   liquid["chei"] = UBASE("Chinese", "chei", 1.035468800000000E-01, "m3", "L3", "1.0");
   liquid["cheng"] = UBASE("Chinese", "cheng", 1.035468800000000E-03, "m3", "L3", "1.0");
   liquid["co"] = UBASE("Chinese", "co", 1.035468800000000E-06, "m3", "L3", "1.0");
   liquid["cyut3"] = UBASE("Chinese", "cyut3", 1.031000000000000E-03, "m3", "L3", "1.0");
   liquid["dan"] = UBASE("Chinese", "dan", 1.035468800000000E-01, "m3", "L3", "1.0");
   liquid["dou"] = UBASE("Chinese", "dou", 1.035468800000000E-02, "m3", "L3", "1.0");
   liquid["gam1-dak6"] = UBASE("Chinese", "gam1-dak6", 1.031000000000000E-02, "m3", "L3", "1.0");
   liquid["ge"] = UBASE("Chinese", "ge", 1.035468800000000E-04, "m3", "L3", "1.0");
   liquid["hou"] = UBASE("Chinese", "hou", 5.177344000000000E-02, "m3", "L3", "1.0");
   liquid["hu"] = UBASE("Chinese", "hu", 5.177344000000000E-02, "m3", "L3", "1.0");
   liquid["kho"] = UBASE("Chinese", "kho", 1.035468800000000E-04, "m3", "L3", "1.0");
   liquid["ping"] = UBASE("Chinese", "ping", 5.177344000000000E-01, "m3", "L3", "1.0");
   liquid["quei"] = UBASE("Chinese", "quei", 1.035468800000000E-07, "m3", "L3", "1.0");
   liquid["sei"] = UBASE("Chinese", "sei", 1.035468800000000E-01, "m3", "L3", "1.0");
   liquid["sek6"] = UBASE("Chinese", "sek6", 1.031000000000000E-01, "m3", "L3", "1.0");
   liquid["shao"] = UBASE("Chinese", "shao", 1.035468800000000E-05, "m3", "L3", "1.0");
   liquid["sheng"] = UBASE("Chinese", "sheng", 1.035468800000000E-03, "m3", "L3", "1.0");
   liquid["to"] = UBASE("Chinese", "to", 1.035468800000000E-02, "m3", "L3", "1.0");
   liquid["yo"] = UBASE("Chinese", "yo", 2.070937600000000E-04, "m3", "L3", "1.0");
   dry["cubic-tchi"] = UBASE("Chinese", "cubic-tchi", 3.276800000000000E-02, "m3", "L3", "1.0");
   dry["fang"] = UBASE("Chinese", "fang", 3.276800000000000E+00, "m3", "L3", "1.0");
   dry["ma"] = UBASE("Chinese", "ma", 3.276800000000000E+00, "m3", "L3", "1.0");
   _map["Chinese"] = BaseSystem("Chinese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit24(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cuadra"] = UBASE("Colombian", "cuadra", 8.000000000000000E+01, "m", "L", "1.0");
   length["cuarta"] = UBASE("Colombian", "cuarta", 2.000000000000000E-01, "m", "L", "1.0");
   length["legua"] = UBASE("Colombian", "legua", 5.000000000000000E+03, "m", "L", "1.0");
   length["pie"] = UBASE("Colombian", "pie", 2.666666666666670E-01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Colombian", "pulgada", 2.222222222222220E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Colombian", "vara", 8.000000000000000E-01, "m", "L", "1.0");
   area["square-vara"] = UBASE("Colombian", "square-vara", 6.400000000000000E-01, "m2", "L2", "1.0");
   mass["arroba"] = UBASE("Colombian", "arroba", 1.250000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Colombian", "carga", 1.250000000000000E+02, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Colombian", "libbra", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["onza"] = UBASE("Colombian", "onza", 3.125000000000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Colombian", "quintal", 5.000000000000000E+01, "kg", "M", "1.0");
   mass["saco"] = UBASE("Colombian", "saco", 6.250000000000000E+01, "kg", "M", "1.0");
   mass["tonelada"] = UBASE("Colombian", "tonelada", 1.000000000000000E+03, "kg", "M", "1.0");
   liquid["cubic-vara"] = UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Colombian", "cubic-vara", 5.120000000000000E-01, "m3", "L3", "1.0");
   _map["Colombian"] = BaseSystem("Colombian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit25(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cuarta"] = UBASE("Costa-Rican", "cuarta", 2.098250000000000E-01, "m", "L", "1.0");
   length["mecate"] = UBASE("Costa-Rican", "mecate", 2.014320000000000E+01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Costa-Rican", "pulgada", 2.331388888888890E-02, "m", "L", "1.0");
   length["tercia"] = UBASE("Costa-Rican", "tercia", 2.797666666666670E-01, "m", "L", "1.0");
   length["vara"] = UBASE("Costa-Rican", "vara", 8.393000000000000E-01, "m", "L", "1.0");
   area["caballiera"] = UBASE("Costa-Rican", "caballiera", 4.508316736000000E+05, "m2", "L2", "1.0");
   area["manzana"] = UBASE("Costa-Rican", "manzana", 7.044244900000000E+03, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Costa-Rican", "square-vara", 7.044244900000000E-01, "m2", "L2", "1.0");
   mass["caja"] = UBASE("Costa-Rican", "caja", 1.600000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Costa-Rican", "carga", 1.610000000000000E+02, "kg", "M", "1.0");
   mass["fanega"] = UBASE("Costa-Rican", "fanega", 9.200000000000000E+01, "kg", "M", "1.0");
   liquid["botella"] = UBASE("Costa-Rican", "botella", 6.500000000000000E-04, "m3", "L3", "1.0");
   liquid["cajuella"] = UBASE("Costa-Rican", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Costa-Rican", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Costa-Rican", "cubic-vara", 5.912234744570000E-01, "m3", "L3", "1.0");
   _map["Costa-Rican"] = BaseSystem("Costa-Rican", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit26(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["legua"] = UBASE("Cuban", "legua", 6.773333333333330E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Cuban", "vara", 8.479536000000000E-01, "m", "L", "1.0");
   area["caballiera"] = UBASE("Cuban", "caballiera", 1.342020000000000E+05, "m2", "L2", "1.0");
   area["cordele"] = UBASE("Cuban", "cordele", 4.142037037037040E+02, "m2", "L2", "1.0");
   area["fanega"] = UBASE("Cuban", "fanega", 1.118350000000000E+04, "m2", "L2", "1.0");
   mass["libra"] = UBASE("Cuban", "libra", 4.608951746418000E-01, "kg", "M", "1.0");
   liquid["arroba"] = UBASE("Cuban", "arroba", 1.613723684210530E-02, "m3", "L3", "1.0");
   liquid["bocoy"] = UBASE("Cuban", "bocoy", 1.362700000000000E-01, "m3", "L3", "1.0");
   liquid["fanega"] = UBASE("Cuban", "fanega", 6.056444444444440E-02, "m3", "L3", "1.0");
   liquid["barrile"] = UBASE("Cuban", "barrile", 2.271166666666670E-02, "m3", "L3", "1.0");
   dry["fanega"] = UBASE("Cuban", "fanega", 5.634727319684110E-02, "m3", "L3", "1.0");
   _map["Cuban"] = BaseSystem("Cuban", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit27(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["foot"] = UBASE("Cypriot", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Cypriot", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["pic"] = UBASE("Cypriot", "pic", 6.096000000000000E-01, "m", "L", "1.0");
   area["donum"] = UBASE("Cypriot", "donum", 1.337803776000000E+03, "m2", "L2", "1.0");
   area["dunum"] = UBASE("Cypriot", "dunum", 1.337803776000000E+03, "m2", "L2", "1.0");
   area["scala"] = UBASE("Cypriot", "scala", 1.337803776000000E+03, "m2", "L2", "1.0");
   mass["aleppo"] = UBASE("Cypriot", "aleppo", 1.005886439712000E+02, "kg", "M", "1.0");
   mass["drachme"] = UBASE("Cypriot", "drachme", 3.175146590000000E-03, "kg", "M", "1.0");
   mass["kantar"] = UBASE("Cypriot", "kantar", 5.588257998400000E+01, "kg", "M", "1.0");
   mass["mussa"] = UBASE("Cypriot", "mussa", 6.350293180000000E+00, "kg", "M", "1.0");
   mass["oke"] = UBASE("Cypriot", "oke", 1.270058636000000E+00, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Cypriot", "rottolo", 5.588257998400000E-01, "kg", "M", "1.0");
   mass["stone"] = UBASE("Cypriot", "stone", 6.350293180000000E+00, "kg", "M", "1.0");
   mass["ton"] = UBASE("Cypriot", "ton", 1.016046908800000E+03, "kg", "M", "1.0");
   mass["uqqa"] = UBASE("Cypriot", "uqqa", 1.270058636000000E+00, "kg", "M", "1.0");
   liquid["cass"] = UBASE("Cypriot", "cass", 4.730635000000000E-03, "m3", "L3", "1.0");
   liquid["gomari"] = UBASE("Cypriot", "gomari", 1.636544000000000E-01, "m3", "L3", "1.0");
   liquid["kartos"] = UBASE("Cypriot", "kartos", 5.114200000000000E-03, "m3", "L3", "1.0");
   liquid["kile"] = UBASE("Cypriot", "kile", 3.579940000000000E-02, "m3", "L3", "1.0");
   liquid["kouza"] = UBASE("Cypriot", "kouza", 1.022840000000000E-02, "m3", "L3", "1.0");
   liquid["medimno"] = UBASE("Cypriot", "medimno", 7.159880000000000E-02, "m3", "L3", "1.0");
   liquid["oke"] = UBASE("Cypriot", "oke", 1.278550000000000E-03, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Cypriot", "cubic-pic", 2.265347727360000E-01, "m3", "L3", "1.0");
   _map["Cypriot"] = BaseSystem("Cypriot", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit28(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["latro(Bohemian)"] = UBASE("Czech", "latro(Bohemian)", 1.909200000000000E+00, "m", "L", "1.0");
   length["latro(Moravian)"] = UBASE("Czech", "latro(Moravian)", 1.831800000000000E+00, "m", "L", "1.0");
   length["latro-(Praha)"] = UBASE("Czech", "latro-(Praha)", 1.912425000000000E+00, "m", "L", "1.0");
   length["latro(Silesian)"] = UBASE("Czech", "latro(Silesian)", 1.867275000000000E+00, "m", "L", "1.0");
   length["lehen"] = UBASE("Czech", "lehen", 1.280160000000000E+01, "m", "L", "1.0");
   length["loket(Bohemian)"] = UBASE("Czech", "loket(Bohemian)", 5.920000000000000E-01, "m", "L", "1.0");
   length["loket(Moravian)"] = UBASE("Czech", "loket(Moravian)", 5.680000000000000E-01, "m", "L", "1.0");
   length["loket(Praha)"] = UBASE("Czech", "loket(Praha)", 5.930000000000000E-01, "m", "L", "1.0");
   length["loket(Silesian)"] = UBASE("Czech", "loket(Silesian)", 5.790000000000000E-01, "m", "L", "1.0");
   length["mile(Bohemian)"] = UBASE("Czech", "mile(Bohemian)", 6.987672000000000E+03, "m", "L", "1.0");
   length["mile(Moravian)"] = UBASE("Czech", "mile(Moravian)", 6.704388000000000E+03, "m", "L", "1.0");
   length["mile(Praha)"] = UBASE("Czech", "mile(Praha)", 6.999475500000000E+03, "m", "L", "1.0");
   length["mile(Silesian)"] = UBASE("Czech", "mile(Silesian)", 6.834226500000000E+03, "m", "L", "1.0");
   length["sah(Bohemian)"] = UBASE("Czech", "sah(Bohemian)", 1.776000000000000E+00, "m", "L", "1.0");
   length["sah(Moravian)"] = UBASE("Czech", "sah(Moravian)", 1.704000000000000E+00, "m", "L", "1.0");
   length["sah(Praha)"] = UBASE("Czech", "sah(Praha)", 1.779000000000000E+00, "m", "L", "1.0");
   length["sah(Silesian)"] = UBASE("Czech", "sah(Silesian)", 1.737000000000000E+00, "m", "L", "1.0");
   length["stopa(Bohemian)"] = UBASE("Czech", "stopa(Bohemian)", 2.960000000000000E-01, "m", "L", "1.0");
   length["stopa(Moravian)"] = UBASE("Czech", "stopa(Moravian)", 2.840000000000000E-01, "m", "L", "1.0");
   length["stopa(Praha)"] = UBASE("Czech", "stopa(Praha)", 2.965000000000000E-01, "m", "L", "1.0");
   length["stopa(Silesian)"] = UBASE("Czech", "stopa(Silesian)", 2.895000000000000E-01, "m", "L", "1.0");
   area["jitro"] = UBASE("Czech", "jitro", 5.756000000000000E+03, "m2", "L2", "1.0");
   area["korec"] = UBASE("Czech", "korec", 2.878000000000000E+03, "m2", "L2", "1.0");
   area["lan"] = UBASE("Czech", "lan", 1.726800000000000E+05, "m2", "L2", "1.0");
   area["merice"] = UBASE("Czech", "merice", 2.000000000000000E+03, "m2", "L2", "1.0");
   area["mira"] = UBASE("Czech", "mira", 2.878000000000000E+03, "m2", "L2", "1.0");
   area["strych"] = UBASE("Czech", "strych", 2.878000000000000E+03, "m2", "L2", "1.0");
   mass["quintal"] = UBASE("Czech", "quintal", 5.000000000000000E+01, "kg", "M", "1.0");
   liquid["korec"] = UBASE("Czech", "korec", 9.354500000000000E-02, "m3", "L3", "1.0");
   liquid["merice"] = UBASE("Czech", "merice", 7.060000000000000E-02, "m3", "L3", "1.0");
   liquid["strych"] = UBASE("Czech", "strych", 9.354500000000000E-02, "m3", "L3", "1.0");
   dry["cubic-stopa(Bohemian)"] = UBASE("Czech", "cubic-stopa(Bohemian)", 2.593433600000000E-02, "m3", "L3", "1.0");
   dry["cubic-stopa(Praha)"] = UBASE("Czech", "cubic-stopa(Praha)", 2.606598212500000E-02, "m3", "L3", "1.0");
   dry["cubic-stopa(Moravian)"] = UBASE("Czech", "cubic-stopa(Moravian)", 2.290630400000000E-02, "m3", "L3", "1.0");
   dry["cubic-stopa(Silesian)"] = UBASE("Czech", "cubic-stopa(Silesian)", 2.426306737500000E-02, "m3", "L3", "1.0");
   _map["Czech"] = BaseSystem("Czech", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit29(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["alen"] = UBASE("Danish", "alen", 6.277140000000000E-01, "m", "L", "1.0");
   length["aln"] = UBASE("Danish", "aln", 6.277140000000000E-01, "m", "L", "1.0");
   length["danskmil"] = UBASE("Danish", "danskmil", 7.532500000000000E+03, "m", "L", "1.0");
   length["favn"] = UBASE("Danish", "favn", 1.883142000000000E+00, "m", "L", "1.0");
   length["fod"] = UBASE("Danish", "fod", 3.138570000000000E-01, "m", "L", "1.0");
   length["kvater"] = UBASE("Danish", "kvater", 1.569285000000000E-01, "m", "L", "1.0");
   length["linie"] = UBASE("Danish", "linie", 2.179562500000000E-03, "m", "L", "1.0");
   length["miil"] = UBASE("Danish", "miil", 7.532568000000000E+03, "m", "L", "1.0");
   length["mile"] = UBASE("Danish", "mile", 7.532568000000000E+03, "m", "L", "1.0");
   length["palme"] = UBASE("Danish", "palme", 8.860010162601630E-02, "m", "L", "1.0");
   length["rut"] = UBASE("Danish", "rut", 5.021712000000000E+00, "m", "L", "1.0");
   length["rute"] = UBASE("Danish", "rute", 3.766284000000000E+00, "m", "L", "1.0");
   length["ruthe"] = UBASE("Danish", "ruthe", 3.766284000000000E+00, "m", "L", "1.0");
   length["skrupel"] = UBASE("Danish", "skrupel", 1.816302083333330E-04, "m", "L", "1.0");
   length["tomme"] = UBASE("Danish", "tomme", 2.615475000000000E-02, "m", "L", "1.0");
   area["album"] = UBASE("Danish", "album", 2.955186493470000E+02, "m2", "L2", "1.0");
   area["fjerdingar"] = UBASE("Danish", "fjerdingar", 8.865559480410000E+02, "m2", "L2", "1.0");
   area["penge"] = UBASE("Danish", "penge", 8.152238602675860E+01, "m2", "L2", "1.0");
   area["pflug"] = UBASE("Danish", "pflug", 9.078332907939840E+05, "m2", "L2", "1.0");
   area["skiepper"] = UBASE("Danish", "skiepper", 3.546223792164000E+03, "m2", "L2", "1.0");
   area["square-ruthe"] = UBASE("Danish", "square-ruthe", 1.418489516865600E+01, "m2", "L2", "1.0");
   area["tonde"] = UBASE("Danish", "tonde", 2.836979033731200E+04, "m2", "L2", "1.0");
   area["tondelande"] = UBASE("Danish", "tondelande", 5.516230000000000E+03, "m2", "L2", "1.0");
   mass["bismerpund"] = UBASE("Danish", "bismerpund", 6.000000000000000E+00, "kg", "M", "1.0");
   mass["centner"] = UBASE("Danish", "centner", 5.000000000000000E+01, "kg", "M", "1.0");
   mass["es"] = UBASE("Danish", "es", 5.463286713286710E-05, "kg", "M", "1.0");
   mass["lispund"] = UBASE("Danish", "lispund", 8.000000000000000E+00, "kg", "M", "1.0");
   mass["loth"] = UBASE("Danish", "loth", 1.562500000000000E-02, "kg", "M", "1.0");
   mass["mark"] = UBASE("Danish", "mark", 2.500000000000000E-01, "kg", "M", "1.0");
   mass["ort"] = UBASE("Danish", "ort", 9.765625000000000E-04, "kg", "M", "1.0");
   mass["pund"] = UBASE("Danish", "pund", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["quintin"] = UBASE("Danish", "quintin", 3.906250000000000E-03, "kg", "M", "1.0");
   mass["skippund"] = UBASE("Danish", "skippund", 1.600000000000000E+02, "kg", "M", "1.0");
   mass["skyplast"] = UBASE("Danish", "skyplast", 2.600000000000000E+03, "kg", "M", "1.0");
   mass["unze"] = UBASE("Danish", "unze", 3.125000000000000E-02, "kg", "M", "1.0");
   mass["waag"] = UBASE("Danish", "waag", 1.800000000000000E+01, "kg", "M", "1.0");
   liquid["anker"] = UBASE("Danish", "anker", 3.864608197004220E-02, "m3", "L3", "1.0");
   liquid["cubic-fod"] = UBASE("Danish", "cubic-fod", 3.091686557603380E-02, "m3", "L3", "1.0");
   liquid["fuder"] = UBASE("Danish", "fuder", 9.275059672810140E-01, "m3", "L3", "1.0");
   liquid["kande"] = UBASE("Danish", "kande", 1.932304098502110E-03, "m3", "L3", "1.0");
   liquid["ohm"] = UBASE("Danish", "ohm", 1.545843278801690E-01, "m3", "L3", "1.0");
   liquid["oxhoft"] = UBASE("Danish", "oxhoft", 2.318764918202530E-01, "m3", "L3", "1.0");
   liquid["paegel"] = UBASE("Danish", "paegel", 2.415380123127640E-04, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("Danish", "pipe", 4.637529836405070E-01, "m3", "L3", "1.0");
   liquid["pot"] = UBASE("Danish", "pot", 9.670000000000000E-04, "m3", "L3", "1.0");
   liquid["pott"] = UBASE("Danish", "pott", 9.661520492510560E-04, "m3", "L3", "1.0");
   liquid["potte"] = UBASE("Danish", "potte", 9.661520492510560E-04, "m3", "L3", "1.0");
   liquid["smortonde"] = UBASE("Danish", "smortonde", 1.313966786981440E-01, "m3", "L3", "1.0");
   liquid["stubchen"] = UBASE("Danish", "stubchen", 3.864608197004220E-03, "m3", "L3", "1.0");
   liquid["tonde"] = UBASE("Danish", "tonde", 1.391258950921520E-01, "m3", "L3", "1.0");
   liquid["viertel"] = UBASE("Danish", "viertel", 7.729216394008450E-03, "m3", "L3", "1.0");
   dry["achtel"] = UBASE("Danish", "achtel", 2.173842110814880E-03, "m3", "L3", "1.0");
   dry["cubic-fod"] = UBASE("Danish", "cubic-fod", 3.091686557603380E-02, "m3", "L3", "1.0");
   dry["fjerdingar"] = UBASE("Danish", "fjerdingar", 3.478147377303800E-02, "m3", "L3", "1.0");
   dry["korntonde"] = UBASE("Danish", "korntonde", 1.391258950921520E-01, "m3", "L3", "1.0");
   dry["last"] = UBASE("Danish", "last", 3.060769692027350E+00, "m3", "L3", "1.0");
   dry["ottingkar"] = UBASE("Danish", "ottingkar", 1.739073688651900E-02, "m3", "L3", "1.0");
   dry["pott"] = UBASE("Danish", "pott", 9.661520492510560E-04, "m3", "L3", "1.0");
   dry["skaeppe"] = UBASE("Danish", "skaeppe", 1.739073688651900E-02, "m3", "L3", "1.0");
   dry["skieppe"] = UBASE("Danish", "skieppe", 1.739073688651900E-02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Danish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Danish", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["viertel"] = UBASE("Danish", "viertel", 4.347684221629750E-03, "m3", "L3", "1.0");
   _map["Danish"] = BaseSystem("Danish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit30(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["duim"] = UBASE("Dutch", "duim", 2.358828333333330E-02, "m", "L", "1.0");
   length["duim(metric)"] = UBASE("Dutch", "duim(metric)", 1.000000000000000E-02, "m", "L", "1.0");
   length["duime"] = UBASE("Dutch", "duime", 2.358828333333330E-02, "m", "L", "1.0");
   length["el(metric)"] = UBASE("Dutch", "el(metric)", 1.000000000000000E+00, "m", "L", "1.0");
   length["ell"] = UBASE("Dutch", "ell", 7.076485000000000E-01, "m", "L", "1.0");
   length["ell(metric)"] = UBASE("Dutch", "ell(metric)", 1.000000000000000E+00, "m", "L", "1.0");
   length["elle"] = UBASE("Dutch", "elle", 7.076485000000000E-01, "m", "L", "1.0");
   length["grote"] = UBASE("Dutch", "grote", 9.600000000000000E-02, "m", "L", "1.0");
   length["hand"] = UBASE("Dutch", "hand", 1.000000000000000E-01, "m", "L", "1.0");
   length["lyne"] = UBASE("Dutch", "lyne", 1.965690277777780E-03, "m", "L", "1.0");
   length["kleine"] = UBASE("Dutch", "kleine", 3.000000000000000E-02, "m", "L", "1.0");
   length["line(metric)"] = UBASE("Dutch", "line(metric)", 1.000000000000000E-03, "m", "L", "1.0");
   length["mijl"] = UBASE("Dutch", "mijl", 5.000244301000000E+03, "m", "L", "1.0");
   length["mijl(metric)"] = UBASE("Dutch", "mijl(metric)", 1.000000000000000E+03, "m", "L", "1.0");
   length["myl"] = UBASE("Dutch", "myl", 1.000048860200000E+03, "m", "L", "1.0");
   length["palm(metric)"] = UBASE("Dutch", "palm(metric)", 1.000000000000000E-01, "m", "L", "1.0");
   length["roede"] = UBASE("Dutch", "roede", 3.679772200000000E+00, "m", "L", "1.0");
   length["roede(metric)"] = UBASE("Dutch", "roede(metric)", 1.000000000000000E+01, "m", "L", "1.0");
   length["roeden"] = UBASE("Dutch", "roeden", 3.679772200000000E+00, "m", "L", "1.0");
   length["rood(metric)"] = UBASE("Dutch", "rood(metric)", 1.000000000000000E+01, "m", "L", "1.0");
   length["streep(metric)"] = UBASE("Dutch", "streep(metric)", 1.000000000000000E-03, "m", "L", "1.0");
   length["uren"] = UBASE("Dutch", "uren", 5.000244301000000E+03, "m", "L", "1.0");
   length["voet"] = UBASE("Dutch", "voet", 2.830594000000000E-01, "m", "L", "1.0");
   length["voeten"] = UBASE("Dutch", "voeten", 2.830594000000000E-01, "m", "L", "1.0");
   area["bunder"] = UBASE("Dutch", "bunder", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["hont"] = UBASE("Dutch", "hont", 1.354072344389280E+03, "m2", "L2", "1.0");
   area["morgen"] = UBASE("Dutch", "morgen", 8.244346000000000E+03, "m2", "L2", "1.0");
   area["roede"] = UBASE("Dutch", "roede", 1.354072344389280E+01, "m2", "L2", "1.0");
   area["vierkante-roede(metric)"] = UBASE("Dutch", "vierkante-roede(metric)", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["voet"] = UBASE("Dutch", "voet", 8.012262392836000E-02, "m2", "L2", "1.0");
   mass["drachme"] = UBASE("Dutch", "drachme", 3.845060312500000E-03, "kg", "M", "1.0");
   mass["drachme(apothecary)"] = UBASE("Dutch", "drachme(apothecary)", 3.845060312500000E-03, "kg", "M", "1.0");
   mass["engel"] = UBASE("Dutch", "engel", 1.538024125000000E-03, "kg", "M", "1.0");
   mass["grein"] = UBASE("Dutch", "grein", 6.408433854166670E-05, "kg", "M", "1.0");
   mass["grein(apothecary)"] = UBASE("Dutch", "grein(apothecary)", 6.408433854166670E-05, "kg", "M", "1.0");
   mass["korrel(metric)"] = UBASE("Dutch", "korrel(metric)", 1.000000000000000E-04, "kg", "M", "1.0");
   mass["last"] = UBASE("Dutch", "last", 1.976361280000000E+03, "kg", "M", "1.0");
   mass["lood(metric)"] = UBASE("Dutch", "lood(metric)", 1.000000000000000E-02, "kg", "M", "1.0");
   mass["mark"] = UBASE("Dutch", "mark", 2.460838600000000E-01, "kg", "M", "1.0");
   mass["ons"] = UBASE("Dutch", "ons", 3.076048250000000E-02, "kg", "M", "1.0");
   mass["ons(Apothecary)"] = UBASE("Dutch", "ons(Apothecary)", 3.076048250000000E-02, "kg", "M", "1.0");
   mass["ons(metric)"] = UBASE("Dutch", "ons(metric)", 1.000000000000000E-01, "kg", "M", "1.0");
   mass["pond"] = UBASE("Dutch", "pond", 4.921677200000000E-01, "kg", "M", "1.0");
   mass["pond(Amsterdam)"] = UBASE("Dutch", "pond(Amsterdam)", 4.940903200000000E-01, "kg", "M", "1.0");
   mass["pond(apothecary)"] = UBASE("Dutch", "pond(apothecary)", 3.691257900000000E-01, "kg", "M", "1.0");
   mass["pond(metric)"] = UBASE("Dutch", "pond(metric)", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["scheepslast"] = UBASE("Dutch", "scheepslast", 1.976361280000000E+03, "kg", "M", "1.0");
   mass["scrupel(apothecary)"] = UBASE("Dutch", "scrupel(apothecary)", 1.281686770833330E-03, "kg", "M", "1.0");
   mass["unze"] = UBASE("Dutch", "unze", 3.076048250000000E-02, "kg", "M", "1.0");
   mass["vierling"] = UBASE("Dutch", "vierling", 3.845060312500000E-04, "kg", "M", "1.0");
   mass["wigtje(metric)"] = UBASE("Dutch", "wigtje(metric)", 1.000000000000000E-03, "kg", "M", "1.0");
   liquid["aam"] = UBASE("Dutch", "aam", 1.536000000000000E-01, "m3", "L3", "1.0");
   liquid["anker"] = UBASE("Dutch", "anker", 3.840000000000000E-02, "m3", "L3", "1.0");
   liquid["mingel"] = UBASE("Dutch", "mingel", 1.200000000000000E-03, "m3", "L3", "1.0");
   liquid["mingelen"] = UBASE("Dutch", "mingelen", 1.200000000000000E-03, "m3", "L3", "1.0");
   liquid["mutsje"] = UBASE("Dutch", "mutsje", 1.500000000000000E-04, "m3", "L3", "1.0");
   liquid["oxhoofd"] = UBASE("Dutch", "oxhoofd", 2.304000000000000E-01, "m3", "L3", "1.0");
   liquid["oxhooft"] = UBASE("Dutch", "oxhooft", 2.304000000000000E-01, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("Dutch", "pint", 6.000000000000000E-04, "m3", "L3", "1.0");
   liquid["steekan"] = UBASE("Dutch", "steekan", 1.920000000000000E-02, "m3", "L3", "1.0");
   liquid["stoop"] = UBASE("Dutch", "stoop", 2.400000000000000E-03, "m3", "L3", "1.0");
   liquid["vat"] = UBASE("Dutch", "vat", 9.216000000000000E-01, "m3", "L3", "1.0");
   liquid["zak"] = UBASE("Dutch", "zak", 1.000000000000000E-01, "m3", "L3", "1.0");
   dry["kop"] = UBASE("Dutch", "kop", 8.518750000000000E-04, "m3", "L3", "1.0");
   dry["kop(metric)"] = UBASE("Dutch", "kop(metric)", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["last"] = UBASE("Dutch", "last", 2.944080000000000E+00, "m3", "L3", "1.0");
   dry["maatje(metric)"] = UBASE("Dutch", "maatje(metric)", 1.000000000000000E-04, "m3", "L3", "1.0");
   dry["mud"] = UBASE("Dutch", "mud", 1.090400000000000E-01, "m3", "L3", "1.0");
   dry["mud(metric)"] = UBASE("Dutch", "mud(metric)", 1.000000000000000E-01, "m3", "L3", "1.0");
   dry["schepel"] = UBASE("Dutch", "schepel", 2.726000000000000E-02, "m3", "L3", "1.0");
   dry["teerling-el(metric)"] = UBASE("Dutch", "teerling-el(metric)", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["vierd"] = UBASE("Dutch", "vierd", 6.815000000000000E-03, "m3", "L3", "1.0");
   dry["vingerhoed(metric)"] = UBASE("Dutch", "vingerhoed(metric)", 1.000000000000000E-05, "m3", "L3", "1.0");
   dry["wisse(metric)"] = UBASE("Dutch", "wisse(metric)", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["zak"] = UBASE("Dutch", "zak", 8.178000000000000E-02, "m3", "L3", "1.0");
   _map["Dutch"] = BaseSystem("Dutch", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit31(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["pik"] = UBASE("East-Med", "pik", 5.780000000000000E-01, "m", "L", "1.0");
   _map["East-Med"] = BaseSystem("East-Med", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit32(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["abdat"] = UBASE("Egyptian", "abdat", 9.666666666666670E-02, "m", "L", "1.0");
   length["atour"] = UBASE("Egyptian", "atour", 5.235000000000000E+03, "m", "L", "1.0");
   length["atour(royal)"] = UBASE("Egyptian", "atour(royal)", 1.047000000000000E+04, "m", "L", "1.0");
   length["canne"] = UBASE("Egyptian", "canne", 4.071666666666670E+00, "m", "L", "1.0");
   length["choryos"] = UBASE("Egyptian", "choryos", 8.725000000000000E-02, "m", "L", "1.0");
   length["derah"] = UBASE("Egyptian", "derah", 4.495800000000000E-01, "m", "L", "1.0");
   length["derah(royal)"] = UBASE("Egyptian", "derah(royal)", 5.235000000000000E-01, "m", "L", "1.0");
   length["dichas"] = UBASE("Egyptian", "dichas", 1.745000000000000E-01, "m", "L", "1.0");
   length["digit"] = UBASE("Egyptian", "digit", 1.090625000000000E-02, "m", "L", "1.0");
   length["diraa"] = UBASE("Egyptian", "diraa", 5.800000000000000E-01, "m", "L", "1.0");
   length["double-remen"] = UBASE("Egyptian", "double-remen", 7.403407999023150E-01, "m", "L", "1.0");
   length["farsakh"] = UBASE("Egyptian", "farsakh", 1.740000000000000E+03, "m", "L", "1.0");
   length["finger"] = UBASE("Egyptian", "finger", 2.181250000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Egyptian", "foot", 3.490000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Egyptian", "feet", 3.490000000000000E-01, "m", "L", "1.0");
   length["gasab"] = UBASE("Egyptian", "gasab", 2.320000000000000E+00, "m", "L", "1.0");
   length["kadam"] = UBASE("Egyptian", "kadam", 2.900000000000000E-01, "m", "L", "1.0");
   length["kassabah"] = UBASE("Egyptian", "kassabah", 3.480000000000000E+00, "m", "L", "1.0");
   length["kirat"] = UBASE("Egyptian", "kirat", 2.416666666666670E-02, "m", "L", "1.0");
   length["long-cubit"] = UBASE("Egyptian", "long-cubit", 6.980000000000000E-01, "m", "L", "1.0");
   length["mil-hachmi"] = UBASE("Egyptian", "mil-hachmi", 5.800000000000000E+02, "m", "L", "1.0");
   length["mille"] = UBASE("Egyptian", "mille", 1.745000000000000E+03, "m", "L", "1.0");
   length["orgye"] = UBASE("Egyptian", "orgye", 2.094000000000000E+00, "m", "L", "1.0");
   length["palm(short)"] = UBASE("Egyptian", "palm(short)", 7.485714286000000E-02, "m", "L", "1.0");
   length["parasange"] = UBASE("Egyptian", "parasange", 6.980000000000000E+03, "m", "L", "1.0");
   length["pic"] = UBASE("Egyptian", "pic", 5.800000000000000E-01, "m", "L", "1.0");
   length["pigon"] = UBASE("Egyptian", "pigon", 4.362500000000000E-01, "m", "L", "1.0");
   length["senus"] = UBASE("Egyptian", "senus", 5.235000000000000E+01, "m", "L", "1.0");
   length["shoeme"] = UBASE("Egyptian", "shoeme", 6.282000000000000E+03, "m", "L", "1.0");
   length["spithame"] = UBASE("Egyptian", "spithame", 2.617500000000000E-01, "m", "L", "1.0");
   length["stade"] = UBASE("Egyptian", "stade", 2.094000000000000E+02, "m", "L", "1.0");
   length["thebs"] = UBASE("Egyptian", "thebs", 2.617500000000000E-02, "m", "L", "1.0");
   length["xilon"] = UBASE("Egyptian", "xilon", 1.570500000000000E+00, "m", "L", "1.0");
   length["zereth"] = UBASE("Egyptian", "zereth", 3.490000000000000E-01, "m", "L", "1.0");
   area["aurure"] = UBASE("Egyptian", "aurure", 2.740522500000000E+03, "m2", "L2", "1.0");
   area["feddan-masri"] = UBASE("Egyptian", "feddan-masri", 4.200080000000000E+03, "m2", "L2", "1.0");
   area["kirat-kamel"] = UBASE("Egyptian", "kirat-kamel", 1.750033333333330E+02, "m2", "L2", "1.0");
   area["pekeis"] = UBASE("Egyptian", "pekeis", 2.740522500000000E+01, "m2", "L2", "1.0");
   area["rema"] = UBASE("Egyptian", "rema", 1.370261250000000E+03, "m2", "L2", "1.0");
   area["sahme"] = UBASE("Egyptian", "sahme", 7.291805555555560E+00, "m2", "L2", "1.0");
   area["setta"] = UBASE("Egyptian", "setta", 2.740522500000000E+04, "m2", "L2", "1.0");
   area["square-cubit"] = UBASE("Egyptian", "square-cubit", 2.740522500000000E-01, "m2", "L2", "1.0");
   area["su"] = UBASE("Egyptian", "su", 1.712826562500000E+02, "m2", "L2", "1.0");
   area["ten"] = UBASE("Egyptian", "ten", 2.740522500000000E+02, "m2", "L2", "1.0");
   mass["deben"] = UBASE("Egyptian", "deben", 1.365000000000000E-02, "kg", "M", "1.0");
   mass["dirhem"] = UBASE("Egyptian", "dirhem", 2.808000000000000E-02, "kg", "M", "1.0");
   mass["gerah"] = UBASE("Egyptian", "gerah", 6.825000000000000E-04, "kg", "M", "1.0");
   mass["grain"] = UBASE("Egyptian", "grain", 9.100000000000000E-04, "kg", "M", "1.0");
   mass["helm"] = UBASE("Egyptian", "helm", 2.496000000000000E+02, "kg", "M", "1.0");
   mass["kantar"] = UBASE("Egyptian", "kantar", 4.492800000000000E+01, "kg", "M", "1.0");
   mass["kedet"] = UBASE("Egyptian", "kedet", 1.365000000000000E-01, "kg", "M", "1.0");
   mass["kikkar"] = UBASE("Egyptian", "kikkar", 4.095000000000000E+01, "kg", "M", "1.0");
   mass["kirat"] = UBASE("Egyptian", "kirat", 1.755000000000000E-03, "kg", "M", "1.0");
   mass["maan"] = UBASE("Egyptian", "maan", 8.500000000000000E-04, "kg", "M", "1.0");
   mass["mine"] = UBASE("Egyptian", "mine", 8.190000000000000E-01, "kg", "M", "1.0");
   mass["miskal"] = UBASE("Egyptian", "miskal", 1.123200000000000E-01, "kg", "M", "1.0");
   mass["obol"] = UBASE("Egyptian", "obol", 6.825000000000000E-04, "kg", "M", "1.0");
   mass["oke"] = UBASE("Egyptian", "oke", 1.248000000000000E+00, "kg", "M", "1.0");
   mass["okieh"] = UBASE("Egyptian", "okieh", 3.369600000000000E-01, "kg", "M", "1.0");
   mass["rotoli"] = UBASE("Egyptian", "rotoli", 4.492800000000000E-01, "kg", "M", "1.0");
   mass["sep"] = UBASE("Egyptian", "sep", 1.365000000000000E-03, "kg", "M", "1.0");
   mass["sicles"] = UBASE("Egyptian", "sicles", 1.365000000000000E-02, "kg", "M", "1.0");
   mass["talent"] = UBASE("Egyptian", "talent", 4.095000000000000E+01, "kg", "M", "1.0");
   liquid["ardeb"] = UBASE("Egyptian", "ardeb", 1.980000000000000E-01, "m3", "L3", "1.0");
   liquid["daribah"] = UBASE("Egyptian", "daribah", 1.584000000000000E+00, "m3", "L3", "1.0");
   liquid["keddah"] = UBASE("Egyptian", "keddah", 2.062500000000000E-03, "m3", "L3", "1.0");
   liquid["keila"] = UBASE("Egyptian", "keila", 1.650000000000000E-02, "m3", "L3", "1.0");
   liquid["khanoubah"] = UBASE("Egyptian", "khanoubah", 1.289062500000000E-04, "m3", "L3", "1.0");
   liquid["kirat"] = UBASE("Egyptian", "kirat", 6.445312500000000E-05, "m3", "L3", "1.0");
   liquid["maloua"] = UBASE("Egyptian", "maloua", 4.125000000000000E-03, "m3", "L3", "1.0");
   liquid["nisf-keddah"] = UBASE("Egyptian", "nisf-keddah", 1.031250000000000E-03, "m3", "L3", "1.0");
   liquid["rob"] = UBASE("Egyptian", "rob", 8.250000000000000E-03, "m3", "L3", "1.0");
   liquid["robbah"] = UBASE("Egyptian", "robbah", 5.156250000000000E-04, "m3", "L3", "1.0");
   liquid["toumnah"] = UBASE("Egyptian", "toumnah", 2.578125000000000E-04, "m3", "L3", "1.0");
   dry["apt"] = UBASE("Egyptian", "apt", 8.500000000000000E-03, "m3", "L3", "1.0");
   dry["artabe"] = UBASE("Egyptian", "artabe", 5.100000000000000E-02, "m3", "L3", "1.0");
   dry["hecte"] = UBASE("Egyptian", "hecte", 2.125000000000000E-03, "m3", "L3", "1.0");
   dry["keramion"] = UBASE("Egyptian", "keramion", 3.400000000000000E-02, "m3", "L3", "1.0");
   dry["khar"] = UBASE("Egyptian", "khar", 3.400000000000000E-02, "m3", "L3", "1.0");
   dry["letech"] = UBASE("Egyptian", "letech", 1.434375000000000E-01, "m3", "L3", "1.0");
   dry["man"] = UBASE("Egyptian", "man", 8.500000000000000E-04, "m3", "L3", "1.0");
   dry["meterte-of-heron"] = UBASE("Egyptian", "meterte-of-heron", 4.250000000000000E-02, "m3", "L3", "1.0");
   dry["mine"] = UBASE("Egyptian", "mine", 8.500000000000000E-04, "m3", "L3", "1.0");
   dry["outen"] = UBASE("Egyptian", "outen", 2.125000000000000E-04, "m3", "L3", "1.0");
   _map["Egyptian"] = BaseSystem("Egyptian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit33(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cubi"] = UBASE("Eritrean", "cubi", 3.200000000000000E-01, "m", "L", "1.0");
   length["derah"] = UBASE("Eritrean", "derah", 4.600000000000000E-01, "m", "L", "1.0");
   length["emmet"] = UBASE("Eritrean", "emmet", 4.600000000000000E-01, "m", "L", "1.0");
   area["square-cubi"] = UBASE("Eritrean", "square-cubi", 1.024000000000000E-01, "m2", "L2", "1.0");
   mass["gisla"] = UBASE("Eritrean", "gisla", 1.630720000000000E+02, "kg", "M", "1.0");
   mass["okia"] = UBASE("Eritrean", "okia", 2.800000000000000E-02, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Eritrean", "rottolo", 4.480000000000000E-01, "kg", "M", "1.0");
   liquid["cabaho"] = UBASE("Eritrean", "cabaho", 6.000000000000000E-03, "m3", "L3", "1.0");
   liquid["entelam"] = UBASE("Eritrean", "entelam", 1.920000000000000E-01, "m3", "L3", "1.0");
   liquid["ghebeta"] = UBASE("Eritrean", "ghebeta", 2.400000000000000E-02, "m3", "L3", "1.0");
   liquid["messe"] = UBASE("Eritrean", "messe", 1.500000000000000E-03, "m3", "L3", "1.0");
   liquid["tanica"] = UBASE("Eritrean", "tanica", 1.800000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-cubi"] = UBASE("Eritrean", "cubic-cubi", 3.276800000000000E-02, "m3", "L3", "1.0");
   _map["Eritrean"] = BaseSystem("Eritrean", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit34(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["arshine"] = UBASE("Estonian", "arshine", 3.071120000000000E+01, "m", "L", "1.0");
   length["elle"] = UBASE("Estonian", "elle", 9.871457142857140E+00, "m", "L", "1.0");
   length["faden"] = UBASE("Estonian", "faden", 9.213360000000000E+01, "m", "L", "1.0");
   length["foute"] = UBASE("Estonian", "foute", 1.316194285714290E+01, "m", "L", "1.0");
   area["lofstelle(Livonian)"] = UBASE("Estonian", "lofstelle(Livonian)", 3.710000000000000E+03, "m2", "L2", "1.0");
   area["lofstelle(Reval)"] = UBASE("Estonian", "lofstelle(Reval)", 1.855000000000000E+03, "m2", "L2", "1.0");
   area["tondeland"] = UBASE("Estonian", "tondeland", 5.462700000000000E+03, "m2", "L2", "1.0");
   area["tonnland(Livonian)"] = UBASE("Estonian", "tonnland(Livonian)", 5.194000000000000E+03, "m2", "L2", "1.0");
   area["tonnland(Reval)"] = UBASE("Estonian", "tonnland(Reval)", 5.462700000000000E+03, "m2", "L2", "1.0");
   mass["centner"] = UBASE("Estonian", "centner", 5.520000000000000E+01, "kg", "M", "1.0");
   mass["liespfund"] = UBASE("Estonian", "liespfund", 9.200000000000000E+00, "kg", "M", "1.0");
   mass["loth"] = UBASE("Estonian", "loth", 1.437500000000000E-02, "kg", "M", "1.0");
   mass["pfund"] = UBASE("Estonian", "pfund", 4.600000000000000E-01, "kg", "M", "1.0");
   mass["quent"] = UBASE("Estonian", "quent", 3.593750000000000E-03, "kg", "M", "1.0");
   mass["schiffspfund"] = UBASE("Estonian", "schiffspfund", 1.840000000000000E+02, "kg", "M", "1.0");
   mass["ton"] = UBASE("Estonian", "ton", 1.104000000000000E+02, "kg", "M", "1.0");
   liquid["hulmit"] = UBASE("Estonian", "hulmit", 1.148000000000000E-02, "m3", "L3", "1.0");
   liquid["kulimet"] = UBASE("Estonian", "kulimet", 1.150161280000000E-02, "m3", "L3", "1.0");
   liquid["lof-(Livonian)"] = UBASE("Estonian", "lof-(Livonian)", 6.888000000000000E-02, "m3", "L3", "1.0");
   liquid["lof-(Reval)"] = UBASE("Estonian", "lof-(Reval)", 3.444000000000000E-02, "m3", "L3", "1.0");
   liquid["tonne"] = UBASE("Estonian", "tonne", 1.377600000000000E-01, "m3", "L3", "1.0");
   dry["cubic-elle"] = UBASE("Estonian", "cubic-elle", 9.619307168929790E+02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Estonian", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Estonian", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   _map["Estonian"] = BaseSystem("Estonian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit35(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["gat"] = UBASE("Ethiopian", "gat", 8.000000000000000E-02, "m", "L", "1.0");
   length["kend"] = UBASE("Ethiopian", "kend", 4.900000000000000E-01, "m", "L", "1.0");
   length["sintzer"] = UBASE("Ethiopian", "sintzer", 1.600000000000000E-01, "m", "L", "1.0");
   length["tat"] = UBASE("Ethiopian", "tat", 2.500000000000000E-02, "m", "L", "1.0");
   area["square-kend"] = UBASE("Ethiopian", "square-kend", 2.401000000000000E-01, "m2", "L2", "1.0");
   mass["alada"] = UBASE("Ethiopian", "alada", 1.560000000000000E-02, "kg", "M", "1.0");
   mass["farasula(coffee)"] = UBASE("Ethiopian", "farasula(coffee)", 1.684800000000000E+01, "kg", "M", "1.0");
   mass["farasula(ivory)"] = UBASE("Ethiopian", "farasula(ivory)", 1.347840000000000E+01, "kg", "M", "1.0");
   mass["farasula(rubber)"] = UBASE("Ethiopian", "farasula(rubber)", 1.797120000000000E+01, "kg", "M", "1.0");
   mass["kasm"] = UBASE("Ethiopian", "kasm", 3.900000000000000E-03, "kg", "M", "1.0");
   mass["mutagalla"] = UBASE("Ethiopian", "mutagalla", 7.800000000000000E-03, "kg", "M", "1.0");
   mass["neter"] = UBASE("Ethiopian", "neter", 3.360000000000000E-01, "kg", "M", "1.0");
   mass["wogiet"] = UBASE("Ethiopian", "wogiet", 3.120000000000000E-02, "kg", "M", "1.0");
   liquid["kuba"] = UBASE("Ethiopian", "kuba", 1.016000000000000E-03, "m3", "L3", "1.0");
   dry["madega"] = UBASE("Ethiopian", "madega", 4.400000000000000E-04, "m3", "L3", "1.0");
   _map["Ethiopian"] = BaseSystem("Ethiopian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit36(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["jalka"] = UBASE("Finnish", "jalka", 2.969000000000000E-01, "m", "L", "1.0");
   length["kyynara"] = UBASE("Finnish", "kyynara", 5.938000000000000E-01, "m", "L", "1.0");
   length["linja"] = UBASE("Finnish", "linja", 2.061805555555560E-03, "m", "L", "1.0");
   length["paivamatka"] = UBASE("Finnish", "paivamatka", 2.137680000000000E+04, "m", "L", "1.0");
   length["peninkulma(new)"] = UBASE("Finnish", "peninkulma(new)", 1.068840000000000E+04, "m", "L", "1.0");
   length["peninkulma(old)"] = UBASE("Finnish", "peninkulma(old)", 5.999755200000000E+03, "m", "L", "1.0");
   length["ruotsinvirsta"] = UBASE("Finnish", "ruotsinvirsta", 2.672100000000000E+03, "m", "L", "1.0");
   length["syli"] = UBASE("Finnish", "syli", 1.781400000000000E+00, "m", "L", "1.0");
   length["tuuma"] = UBASE("Finnish", "tuuma", 2.474166666666670E-02, "m", "L", "1.0");
   length["vaaksa"] = UBASE("Finnish", "vaaksa", 1.484500000000000E-01, "m", "L", "1.0");
   length["vakomitta"] = UBASE("Finnish", "vakomitta", 2.137680000000000E+02, "m", "L", "1.0");
   length["virsta"] = UBASE("Finnish", "virsta", 1.068840000000000E+03, "m", "L", "1.0");
   area["kannunala"] = UBASE("Finnish", "kannunala", 8.814961000000000E+01, "m2", "L2", "1.0");
   area["kapanala"] = UBASE("Finnish", "kapanala", 1.542618175000000E+02, "m2", "L2", "1.0");
   area["panninala"] = UBASE("Finnish", "panninala", 2.468189080000000E+03, "m2", "L2", "1.0");
   area["tynnyrinala"] = UBASE("Finnish", "tynnyrinala", 4.936378160000000E+03, "m2", "L2", "1.0");
   mass["kippunta"] = UBASE("Finnish", "kippunta", 1.700318809600000E+02, "kg", "M", "1.0");
   mass["kvintiini"] = UBASE("Finnish", "kvintiini", 3.320935175000000E-03, "kg", "M", "1.0");
   mass["leiviska"] = UBASE("Finnish", "leiviska", 8.501594048000000E+00, "kg", "M", "1.0");
   mass["luoti"] = UBASE("Finnish", "luoti", 1.328374070000000E-02, "kg", "M", "1.0");
   mass["markka"] = UBASE("Finnish", "markka", 2.125398512000000E-01, "kg", "M", "1.0");
   mass["naula"] = UBASE("Finnish", "naula", 4.250797024000000E-01, "kg", "M", "1.0");
   mass["sentneri"] = UBASE("Finnish", "sentneri", 4.250797024000000E+01, "kg", "M", "1.0");
   mass["unssi"] = UBASE("Finnish", "unssi", 2.656748140000000E-02, "kg", "M", "1.0");
   liquid["ankkuri"] = UBASE("Finnish", "ankkuri", 3.925742881350000E-02, "m3", "L3", "1.0");
   liquid["jumpru"] = UBASE("Finnish", "jumpru", 8.178631002812500E-05, "m3", "L3", "1.0");
   liquid["kannor"] = UBASE("Finnish", "kannor", 2.595079365079360E-03, "m3", "L3", "1.0");
   liquid["kannu"] = UBASE("Finnish", "kannu", 2.617161920900000E-03, "m3", "L3", "1.0");
   liquid["kappa"] = UBASE("Finnish", "kappa", 5.234323841800000E-03, "m3", "L3", "1.0");
   liquid["kortteli"] = UBASE("Finnish", "kortteli", 3.271452401125000E-04, "m3", "L3", "1.0");
   liquid["lasti"] = UBASE("Finnish", "lasti", 1.507485266438400E+00, "m3", "L3", "1.0");
   liquid["ottingar"] = UBASE("Finnish", "ottingar", 1.557047619047620E-02, "m3", "L3", "1.0");
   liquid["sextingar"] = UBASE("Finnish", "sextingar", 7.785238095238100E-03, "m3", "L3", "1.0");
   liquid["tunna"] = UBASE("Finnish", "tunna", 1.634900000000000E-01, "m3", "L3", "1.0");
   liquid["tuoppi"] = UBASE("Finnish", "tuoppi", 1.308580960450000E-03, "m3", "L3", "1.0");
   liquid["tynnyri"] = UBASE("Finnish", "tynnyri", 1.256237722032000E-01, "m3", "L3", "1.0");
   dry["jumpru"] = UBASE("Finnish", "jumpru", 8.296250000000000E-05, "m3", "L3", "1.0");
   dry["kannu"] = UBASE("Finnish", "kannu", 2.654800000000000E-03, "m3", "L3", "1.0");
   dry["kappa"] = UBASE("Finnish", "kappa", 5.309600000000000E-03, "m3", "L3", "1.0");
   dry["kortteli"] = UBASE("Finnish", "kortteli", 3.318500000000000E-04, "m3", "L3", "1.0");
   dry["lasti"] = UBASE("Finnish", "lasti", 2.038886400000000E+00, "m3", "L3", "1.0");
   dry["nelikko"] = UBASE("Finnish", "nelikko", 4.247680000000000E-02, "m3", "L3", "1.0");
   dry["panni"] = UBASE("Finnish", "panni", 8.495360000000000E-02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Finnish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Finnish", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["tuoppi"] = UBASE("Finnish", "tuoppi", 1.327400000000000E-03, "m3", "L3", "1.0");
   dry["tynnyri"] = UBASE("Finnish", "tynnyri", 1.699072000000000E-01, "m3", "L3", "1.0");
   _map["Finnish"] = BaseSystem("Finnish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit37(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["foot"] = UBASE("FPS", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["ft"] = UBASE("FPS", "ft", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("FPS", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["inch"] = UBASE("FPS", "inch", 2.540000000000000E-02, "m", "L", "1.0");
   length["in"] = UBASE("FPS", "in", 2.540000000000000E-02, "m", "L", "1.0");
   length["inches"] = UBASE("FPS", "inches", 2.540000000000000E-02, "m", "L", "1.0");
   length["yard"] = UBASE("FPS", "yard", 9.144000000000000E-01, "m", "L", "1.0");
   length["yd"] = UBASE("FPS", "yd", 9.144000000000000E-01, "m", "L", "1.0");
   length["yards"] = UBASE("FPS", "yards", 9.144000000000000E-01, "m", "L", "1.0");
   length["mile"] = UBASE("FPS", "mile", 1.609344000000000E+03, "m", "L", "1.0");
   length["mi"] = UBASE("FPS", "mi", 1.609344000000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("FPS", "miles", 1.609344000000000E+03, "m", "L", "1.0");
   area["square-foot"] = UBASE("FPS", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["ft2"] = UBASE("FPS", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["sq-ft"] = UBASE("FPS", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("FPS", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-inch"] = UBASE("FPS", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["in2"] = UBASE("FPS", "in2", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["sq-in"] = UBASE("FPS", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-inches"] = UBASE("FPS", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-yard"] = UBASE("FPS", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["yd2"] = UBASE("FPS", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["sq-yd"] = UBASE("FPS", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["square-yards"] = UBASE("FPS", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["square-mile"] = UBASE("FPS", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["mi2"] = UBASE("FPS", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["sq-mi"] = UBASE("FPS", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-miles"] = UBASE("FPS", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0");
   mass["geepound"] = UBASE("FPS", "geepound", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["pound"] = UBASE("FPS", "pound", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb"] = UBASE("FPS", "lb", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pounds"] = UBASE("FPS", "pounds", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["ounce"] = UBASE("FPS", "ounce", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["oz"] = UBASE("FPS", "oz", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["ounces"] = UBASE("FPS", "ounces", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["pound-mass"] = UBASE("FPS", "pound-mass", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pound(WMA1963)"] = UBASE("FPS", "pound(WMA1963)", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb(1963)"] = UBASE("FPS", "lb(1963)", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["USMB"] = UBASE("FPS", "USMB", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["slinch"] = UBASE("FPS", "slinch", 1.751268352464760E+02, "kg", "M", "1.0");
   mass["slug"] = UBASE("FPS", "slug", 1.459390293720640E+01, "kg", "M", "1.0");
   liquid["gallon"] = UBASE("FPS", "gallon", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gal"] = UBASE("FPS", "gal", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gallons"] = UBASE("FPS", "gallons", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("FPS", "quart", 9.463529460000000E-04, "m3", "L3", "1.0");
   liquid["qt"] = UBASE("FPS", "qt", 9.463529460000000E-04, "m3", "L3", "1.0");
   liquid["quarts"] = UBASE("FPS", "quarts", 9.463529460000000E-04, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("FPS", "pint", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["pt"] = UBASE("FPS", "pt", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["pints"] = UBASE("FPS", "pints", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["cup"] = UBASE("FPS", "cup", 2.365882365000000E-04, "m3", "L3", "1.0");
   liquid["cups"] = UBASE("FPS", "cups", 2.365882365000000E-04, "m3", "L3", "1.0");
   dry["cubic-foot"] = UBASE("FPS", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["ft3"] = UBASE("FPS", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cu-ft"] = UBASE("FPS", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-feet"] = UBASE("FPS", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-inch"] = UBASE("FPS", "cubic-inch", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["in3"] = UBASE("FPS", "in3", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cu-in"] = UBASE("FPS", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-inches"] = UBASE("FPS", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-yard"] = UBASE("FPS", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["yd3"] = UBASE("FPS", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cu-yd"] = UBASE("FPS", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cubic-yards"] = UBASE("FPS", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cubic-mile"] = UBASE("FPS", "cubic-mile", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["mi3"] = UBASE("FPS", "mi3", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cu-mi"] = UBASE("FPS", "cu-mi", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cubic-miles"] = UBASE("FPS", "cubic-miles", 4.168181825440580E+09, "m3", "L3", "1.0");
   _map["FPS"] = BaseSystem("FPS", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit38(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["agate"] = UBASE("French", "agate", 2.067843509085650E-03, "m", "L", "1.0");
   length["agate(old)"] = UBASE("French", "agate(old)", 1.933567956547620E-03, "m", "L", "1.0");
   length["arpent"] = UBASE("French", "arpent", 7.146467167400000E+01, "m", "L", "1.0");
   length["arpent(metric)"] = UBASE("French", "arpent(metric)", 5.847109500600000E+01, "m", "L", "1.0");
   length["arpent(commun)"] = UBASE("French", "arpent(commun)", 4.472135955000000E+02, "m", "L", "1.0");
   length["arpent(ordinaire)"] = UBASE("French", "arpent(ordinaire)", 6.496788334000000E+01, "m", "L", "1.0");
   length["aune"] = UBASE("French", "aune", 6.496788334000000E-01, "m", "L", "1.0");
   length["bourgeois"] = UBASE("French", "bourgeois", 3.175000000000000E-03, "m", "L", "1.0");
   length["brasse"] = UBASE("French", "brasse", 1.624197083500000E+00, "m", "L", "1.0");
   length["brevier"] = UBASE("French", "brevier", 2.822222222222220E-03, "m", "L", "1.0");
   length["brilliant"] = UBASE("French", "brilliant", 1.234722222222220E-03, "m", "L", "1.0");
   length["canne"] = UBASE("French", "canne", 1.968500000000000E+00, "m", "L", "1.0");
   length["canon"] = UBASE("French", "canon", 1.693333333333330E-02, "m", "L", "1.0");
   length["cicero"] = UBASE("French", "cicero", 4.511658565277780E-03, "m", "L", "1.0");
   length["coudee(de-Paris)"] = UBASE("French", "coudee(de-Paris)", 4.872591250500000E-01, "m", "L", "1.0");
   length["encablure"] = UBASE("French", "encablure", 1.949036500200000E+02, "m", "L", "1.0");
   length["foot"] = UBASE("French", "foot", 3.248394167000000E-01, "m", "L", "1.0");
   length["gaillarde"] = UBASE("French", "gaillarde", 3.007772376860000E-03, "m", "L", "1.0");
   length["lieue(des-Postes)"] = UBASE("French", "lieue(des-Postes)", 4.287880300440000E+03, "m", "L", "1.0");
   length["lieue(Anjou)"] = UBASE("French", "lieue(Anjou)", 4.581000000000000E+03, "m", "L", "1.0");
   length["lieue(Artois)"] = UBASE("French", "lieue(Artois)", 3.964000000000000E+03, "m", "L", "1.0");
   length["lieue(Beauce)"] = UBASE("French", "lieue(Beauce)", 3.268000000000000E+03, "m", "L", "1.0");
   length["lieue(Bourbonnais)"] = UBASE("French", "lieue(Bourbonnais)", 4.826000000000000E+03, "m", "L", "1.0");
   length["lieue(Bourgogne)"] = UBASE("French", "lieue(Bourgogne)", 5.121000000000000E+03, "m", "L", "1.0");
   length["lieue(Bretagne)"] = UBASE("French", "lieue(Bretagne)", 4.581000000000000E+03, "m", "L", "1.0");
   length["lieue(de-20-aue-degre)"] = UBASE("French", "lieue(de-20-aue-degre)", 5.556000000000000E+03, "m", "L", "1.0");
   length["lieue(de-25-aue-degre)"] = UBASE("French", "lieue(de-25-aue-degre)", 4.445000000000000E+03, "m", "L", "1.0");
   length["lieue(deParis)"] = UBASE("French", "lieue(deParis)", 3.898073000400000E+03, "m", "L", "1.0");
   length["lieue(Gascogne)"] = UBASE("French", "lieue(Gascogne)", 5.849000000000000E+03, "m", "L", "1.0");
   length["lieue(Gatinais)"] = UBASE("French", "lieue(Gatinais)", 3.268000000000000E+03, "m", "L", "1.0");
   length["lieue(Maine)"] = UBASE("French", "lieue(Maine)", 3.964000000000000E+03, "m", "L", "1.0");
   length["lieue(marine)"] = UBASE("French", "lieue(marine)", 5.564900000000000E+03, "m", "L", "1.0");
   length["lieue(mean)"] = UBASE("French", "lieue(mean)", 5.008400000000000E+03, "m", "L", "1.0");
   length["lieue(metric)"] = UBASE("French", "lieue(metric)", 4.000000000000000E+03, "m", "L", "1.0");
   length["lieue(nautical)"] = UBASE("French", "lieue(nautical)", 5.847109500600000E+03, "m", "L", "1.0");
   length["lieue(Poitou)"] = UBASE("French", "lieue(Poitou)", 3.964000000000000E+03, "m", "L", "1.0");
   length["lieue(Provence)"] = UBASE("French", "lieue(Provence)", 5.849000000000000E+03, "m", "L", "1.0");
   length["lieue(Sologne-et-Touraine)"] = UBASE("French", "lieue(Sologne-et-Touraine)", 3.933000000000000E+03, "m", "L", "1.0");
   length["lieue(vieille)"] = UBASE("French", "lieue(vieille)", 4.451900000000000E+03, "m", "L", "1.0");
   length["lieue(ancienne)"] = UBASE("French", "lieue(ancienne)", 3.248394167000000E+03, "m", "L", "1.0");
   length["lieue(tarifaire)"] = UBASE("French", "lieue(tarifaire)", 4.677687600480000E+03, "m", "L", "1.0");
   length["ligne"] = UBASE("French", "ligne", 2.255829282638890E-03, "m", "L", "1.0");
   length["ligne(metric)"] = UBASE("French", "ligne(metric)", 2.314814814814810E-03, "m", "L", "1.0");
   length["mignonette"] = UBASE("French", "mignonette", 2.443815056192130E-03, "m", "L", "1.0");
   length["mignonne"] = UBASE("French", "mignonne", 2.631800829745370E-03, "m", "L", "1.0");
   length["mille-marin"] = UBASE("French", "mille-marin", 1.949036500200000E+03, "m", "L", "1.0");
   length["nonpareil"] = UBASE("French", "nonpareil", 2.116666666666670E-03, "m", "L", "1.0");
   length["pan"] = UBASE("French", "pan", 2.460625000000000E-01, "m", "L", "1.0");
   length["pas(de-Paris)"] = UBASE("French", "pas(de-Paris)", 6.240000000000000E-01, "m", "L", "1.0");
   length["pas(geographique)"] = UBASE("French", "pas(geographique)", 1.624197083500000E+00, "m", "L", "1.0");
   length["perche(du-roi)"] = UBASE("French", "perche(du-roi)", 5.847109500600000E+00, "m", "L", "1.0");
   length["perche(Eaux-et-Forets)"] = UBASE("French", "perche(Eaux-et-Forets)", 7.146467167400000E+00, "m", "L", "1.0");
   length["perche(ordinaire)"] = UBASE("French", "perche(ordinaire)", 6.496788334000000E+00, "m", "L", "1.0");
   length["perche-d'arpent"] = UBASE("French", "perche-d'arpent", 7.146467167400000E+00, "m", "L", "1.0");
   length["petit-romain"] = UBASE("French", "petit-romain", 3.383743923967500E-03, "m", "L", "1.0");
   length["petit-texte"] = UBASE("French", "petit-texte", 2.819786603306250E-03, "m", "L", "1.0");
   length["philosophla"] = UBASE("French", "philosophla", 4.135687018182500E-03, "m", "L", "1.0");
   length["pied(commum)"] = UBASE("French", "pied(commum)", 2.236067977500000E-01, "m", "L", "1.0");
   length["pied(d'Ordonance)"] = UBASE("French", "pied(d'Ordonance)", 3.248400000000000E-01, "m", "L", "1.0");
   length["pied(du-roi)"] = UBASE("French", "pied(du-roi)", 3.248394167000000E-01, "m", "L", "1.0");
   length["pied(metric)"] = UBASE("French", "pied(metric)", 3.333333333333330E-01, "m", "L", "1.0");
   length["point"] = UBASE("French", "point", 1.879857735532410E-04, "m", "L", "1.0");
   length["point(Berthold)"] = UBASE("French", "point(Berthold)", 3.759398496240600E-04, "m", "L", "1.0");
   length["point(Didot)"] = UBASE("French", "point(Didot)", 3.759715471075000E-04, "m", "L", "1.0");
   length["point(Fournier)"] = UBASE("French", "point(Fournier)", 3.446405848476080E-04, "m", "L", "1.0");
   length["point(IN)"] = UBASE("French", "point(IN)", 3.987700000000000E-04, "m", "L", "1.0");
   length["point(metric)"] = UBASE("French", "point(metric)", 3.750000000000000E-04, "m", "L", "1.0");
   length["point(Truchet)"] = UBASE("French", "point(Truchet)", 1.880000000000000E-04, "m", "L", "1.0");
   length["pouce"] = UBASE("French", "pouce", 2.706995139166670E-02, "m", "L", "1.0");
   length["pouce(metric)"] = UBASE("French", "pouce(metric)", 2.777777777777780E-02, "m", "L", "1.0");
   length["quinxe-seize(de-Paris)"] = UBASE("French", "quinxe-seize(de-Paris)", 1.827221718937500E+00, "m", "L", "1.0");
   length["ruby(old)"] = UBASE("French", "ruby(old)", 1.814285714285710E-03, "m", "L", "1.0");
   length["toise(de-Perou)"] = UBASE("French", "toise(de-Perou)", 1.949036500200000E+00, "m", "L", "1.0");
   length["toise(d'ordonance)"] = UBASE("French", "toise(d'ordonance)", 1.949040000000000E+00, "m", "L", "1.0");
   length["toise(du-Chatelet)"] = UBASE("French", "toise(du-Chatelet)", 1.949090000000000E+00, "m", "L", "1.0");
   length["toise(metric)"] = UBASE("French", "toise(metric)", 2.000000000000000E+00, "m", "L", "1.0");
   area["are"] = UBASE("French", "are", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["a"] = UBASE("French", "a", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["arpent"] = UBASE("French", "arpent", 3.418868951200680E+03, "m2", "L2", "1.0");
   area["arpent(carre-du-roi)"] = UBASE("French", "arpent(carre-du-roi)", 3.418868951200680E+03, "m2", "L2", "1.0");
   area["arpent(carre-ordinaire)"] = UBASE("French", "arpent(carre-ordinaire)", 4.220825865679850E+03, "m2", "L2", "1.0");
   area["arpent(carre)"] = UBASE("French", "arpent(carre)", 5.107199297472620E+03, "m2", "L2", "1.0");
   area["arpent(de-Paris)"] = UBASE("French", "arpent(de-Paris)", 3.418868951200680E+03, "m2", "L2", "1.0");
   area["arpent(Eaux-et-Forets)"] = UBASE("French", "arpent(Eaux-et-Forets)", 5.107199297472620E+03, "m2", "L2", "1.0");
   area["arpent(ordinaire-metric)"] = UBASE("French", "arpent(ordinaire-metric)", 4.225000000000000E+03, "m2", "L2", "1.0");
   area["becheree"] = UBASE("French", "becheree", 1.367000000000000E+03, "m2", "L2", "1.0");
   area["boisselee(Nantes)"] = UBASE("French", "boisselee(Nantes)", 3.561333333333330E+02, "m2", "L2", "1.0");
   area["boisselee(Versailles)"] = UBASE("French", "boisselee(Versailles)", 6.250000000000000E+02, "m2", "L2", "1.0");
   area["canne-carree"] = UBASE("French", "canne-carree", 3.874992250000000E+00, "m2", "L2", "1.0");
   area["carteree"] = UBASE("French", "carteree", 7.290000000000000E+03, "m2", "L2", "1.0");
   area["carton(Montpellier)"] = UBASE("French", "carton(Montpellier)", 7.200000000000000E+02, "m2", "L2", "1.0");
   area["cartonnee(Haute-Loire)"] = UBASE("French", "cartonnee(Haute-Loire)", 8.333333333333330E+02, "m2", "L2", "1.0");
   area["cartonnet(Agen)"] = UBASE("French", "cartonnet(Agen)", 1.215000000000000E+03, "m2", "L2", "1.0");
   area["corterade(Montpellier)"] = UBASE("French", "corterade(Montpellier)", 2.877000000000000E+03, "m2", "L2", "1.0");
   area["cosse(Provence)"] = UBASE("French", "cosse(Provence)", 3.900000000000000E+01, "m2", "L2", "1.0");
   area["dextres(Montpellier)"] = UBASE("French", "dextres(Montpellier)", 1.920000000000000E+01, "m2", "L2", "1.0");
   area["eminee(Provence)"] = UBASE("French", "eminee(Provence)", 7.750000000000000E+02, "m2", "L2", "1.0");
   area["exots(Agen)"] = UBASE("French", "exots(Agen)", 1.687500000000000E+01, "m2", "L2", "1.0");
   area["hectare"] = UBASE("French", "hectare", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["hommee(Nantes)"] = UBASE("French", "hommee(Nantes)", 4.451666666666670E+02, "m2", "L2", "1.0");
   area["journal"] = UBASE("French", "journal", 4.000000000000000E+03, "m2", "L2", "1.0");
   area["journal(Bretagne)"] = UBASE("French", "journal(Bretagne)", 4.863000000000000E+03, "m2", "L2", "1.0");
   area["journal(Lyonnais)"] = UBASE("French", "journal(Lyonnais)", 4.000000000000000E+03, "m2", "L2", "1.0");
   area["journal(Nantes)"] = UBASE("French", "journal(Nantes)", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["journeau"] = UBASE("French", "journeau", 4.000000000000000E+03, "m2", "L2", "1.0");
   area["journee"] = UBASE("French", "journee", 4.000000000000000E+03, "m2", "L2", "1.0");
   area["latte"] = UBASE("French", "latte", 4.050000000000000E+02, "m2", "L2", "1.0");
   area["metairee"] = UBASE("French", "metairee", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["minee(Versailles)"] = UBASE("French", "minee(Versailles)", 2.500000000000000E+03, "m2", "L2", "1.0");
   area["minotee(Versailles)"] = UBASE("French", "minotee(Versailles)", 1.250000000000000E+03, "m2", "L2", "1.0");
   area["oeuvree"] = UBASE("French", "oeuvree", 6.700000000000000E+02, "m2", "L2", "1.0");
   area["pan-carre"] = UBASE("French", "pan-carre", 6.054675390625000E-02, "m2", "L2", "1.0");
   area["panal"] = UBASE("French", "panal", 6.250000000000000E+02, "m2", "L2", "1.0");
   area["perche(d'arpentcarree)"] = UBASE("French", "perche(d'arpentcarree)", 5.107199297472620E+01, "m2", "L2", "1.0");
   area["perche(deParis)"] = UBASE("French", "perche(deParis)", 3.418868951200680E+01, "m2", "L2", "1.0");
   area["perche(du-roi-carree)"] = UBASE("French", "perche(du-roi-carree)", 3.418868951200680E+01, "m2", "L2", "1.0");
   area["perche(Eaux-et-Forets)"] = UBASE("French", "perche(Eaux-et-Forets)", 5.107199297472620E+01, "m2", "L2", "1.0");
   area["perche(ordinaire)"] = UBASE("French", "perche(ordinaire)", 4.220825865679850E+01, "m2", "L2", "1.0");
   area["perche(Versailles)"] = UBASE("French", "perche(Versailles)", 5.000000000000000E+01, "m2", "L2", "1.0");
   area["pied-carre"] = UBASE("French", "pied-carre", 1.055206466419960E-01, "m2", "L2", "1.0");
   area["poignere"] = UBASE("French", "poignere", 1.333333333333330E+03, "m2", "L2", "1.0");
   area["rege(ble)"] = UBASE("French", "rege(ble)", 6.666666666666670E+01, "m2", "L2", "1.0");
   area["rege(vigne)"] = UBASE("French", "rege(vigne)", 8.000000000000000E+01, "m2", "L2", "1.0");
   area["salmee"] = UBASE("French", "salmee", 6.200000000000000E+03, "m2", "L2", "1.0");
   area["secton"] = UBASE("French", "secton", 2.837000000000000E+03, "m2", "L2", "1.0");
   area["seteree"] = UBASE("French", "seteree", 1.440000000000000E+03, "m2", "L2", "1.0");
   area["square-league(metric)"] = UBASE("French", "square-league(metric)", 1.600000000000000E+07, "m2", "L2", "1.0");
   area["sq-lg(metric)"] = UBASE("French", "sq-lg(metric)", 1.600000000000000E+07, "m2", "L2", "1.0");
   area["toise-carree"] = UBASE("French", "toise-carree", 3.798743279111860E+00, "m2", "L2", "1.0");
   area["vergee"] = UBASE("French", "vergee", 1.276799824368150E+03, "m2", "L2", "1.0");
   area["vergee(du-roi)"] = UBASE("French", "vergee(du-roi)", 8.547172378001690E+02, "m2", "L2", "1.0");
   area["vergee(ordinaire)"] = UBASE("French", "vergee(ordinaire)", 1.055206466419960E+03, "m2", "L2", "1.0");
   mass["decitonne"] = UBASE("French", "decitonne", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["denier(de-Charlemagne)"] = UBASE("French", "denier(de-Charlemagne)", 1.529700000000000E-03, "kg", "M", "1.0");
   mass["denier(de-Paris)"] = UBASE("French", "denier(de-Paris)", 1.274754817708330E-03, "kg", "M", "1.0");
   mass["denier(metric)"] = UBASE("French", "denier(metric)", 1.000000000000000E-03, "kg", "M", "1.0");
   mass["grain(de-Charlemange)"] = UBASE("French", "grain(de-Charlemange)", 6.373750000000000E-05, "kg", "M", "1.0");
   mass["grain(de-Paris)"] = UBASE("French", "grain(de-Paris)", 5.311478407118060E-05, "kg", "M", "1.0");
   mass["grain(metric)"] = UBASE("French", "grain(metric)", 1.000000000000000E-04, "kg", "M", "1.0");
   mass["gros(de-Paris)"] = UBASE("French", "gros(de-Paris)", 3.824264453125000E-03, "kg", "M", "1.0");
   mass["gros(metric)"] = UBASE("French", "gros(metric)", 1.000000000000000E-02, "kg", "M", "1.0");
   mass["livre(de-Charlemagne)"] = UBASE("French", "livre(de-Charlemagne)", 3.671280000000000E-01, "kg", "M", "1.0");
   mass["livre(de-Paris-metric)"] = UBASE("French", "livre(de-Paris-metric)", 4.895058500000000E-01, "kg", "M", "1.0");
   mass["livre(de-Paris)"] = UBASE("French", "livre(de-Paris)", 4.895058500000000E-01, "kg", "M", "1.0");
   mass["livre(metric)"] = UBASE("French", "livre(metric)", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["lot(deParis)"] = UBASE("French", "lot(deParis)", 1.529705781250000E-02, "kg", "M", "1.0");
   mass["marc(de-Paris)"] = UBASE("French", "marc(de-Paris)", 2.447529250000000E-01, "kg", "M", "1.0");
   mass["millier(de-Paris)"] = UBASE("French", "millier(de-Paris)", 4.895058500000000E+02, "kg", "M", "1.0");
   mass["millier(metric)"] = UBASE("French", "millier(metric)", 1.000000000000000E+03, "kg", "M", "1.0");
   mass["obole(de-Charlemagne)"] = UBASE("French", "obole(de-Charlemagne)", 7.648500000000000E-04, "kg", "M", "1.0");
   mass["once(de-Paris)"] = UBASE("French", "once(de-Paris)", 3.059411562500000E-02, "kg", "M", "1.0");
   mass["once(metric)"] = UBASE("French", "once(metric)", 1.000000000000000E-01, "kg", "M", "1.0");
   mass["quarteron(de-Paris)"] = UBASE("French", "quarteron(de-Paris)", 1.223764625000000E-01, "kg", "M", "1.0");
   mass["quintal"] = UBASE("French", "quintal", 4.895058500000000E+01, "kg", "M", "1.0");
   mass["q"] = UBASE("French", "q", 4.895058500000000E+01, "kg", "M", "1.0");
   mass["quintal(metric)"] = UBASE("French", "quintal(metric)", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["q(metric)"] = UBASE("French", "q(metric)", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["sac(charcoal)"] = UBASE("French", "sac(charcoal)", 5.000000000000000E+01, "kg", "M", "1.0");
   mass["sol(de-Charlemagne)"] = UBASE("French", "sol(de-Charlemagne)", 1.835640000000000E-02, "kg", "M", "1.0");
   mass["tonneau-de-mer"] = UBASE("French", "tonneau-de-mer", 9.790117000000000E+02, "kg", "M", "1.0");
   liquid["balthazar"] = UBASE("French", "balthazar", 1.212291200000000E-02, "m3", "L3", "1.0");
   liquid["barral"] = UBASE("French", "barral", 3.678800000000000E-02, "m3", "L3", "1.0");
   liquid["bouteille-champenoise"] = UBASE("French", "bouteille-champenoise", 7.576820000000000E-04, "m3", "L3", "1.0");
   liquid["cade"] = UBASE("French", "cade", 1.904292516950000E-03, "m3", "L3", "1.0");
   liquid["chopine(de-Paris)"] = UBASE("French", "chopine(de-Paris)", 4.760731292375000E-04, "m3", "L3", "1.0");
   liquid["chopine(Provence-wine)"] = UBASE("French", "chopine(Provence-wine)", 2.299250000000000E-04, "m3", "L3", "1.0");
   liquid["demiard(de-Paris)"] = UBASE("French", "demiard(de-Paris)", 2.380365646187500E-04, "m3", "L3", "1.0");
   liquid["demi-posson"] = UBASE("French", "demi-posson", 1.190182823093750E-04, "m3", "L3", "1.0");
   liquid["demi-setier"] = UBASE("French", "demi-setier", 2.380365646187500E-04, "m3", "L3", "1.0");
   liquid["feuillette(de-Paris)"] = UBASE("French", "feuillette(de-Paris)", 1.371090612204000E-01, "m3", "L3", "1.0");
   liquid["liter(old)"] = UBASE("French", "liter(old)", 1.000002800100000E-03, "m3", "L3", "1.0");
   liquid["jeroboam"] = UBASE("French", "jeroboam", 3.030728000000000E-03, "m3", "L3", "1.0");
   liquid["jigger"] = UBASE("French", "jigger", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["magnum"] = UBASE("French", "magnum", 1.515364000000000E-03, "m3", "L3", "1.0");
   liquid["mathusalem"] = UBASE("French", "mathusalem", 6.819138000000000E-03, "m3", "L3", "1.0");
   liquid["methuselah"] = UBASE("French", "methuselah", 6.819138000000000E-03, "m3", "L3", "1.0");
   liquid["muid(de-Paris)"] = UBASE("French", "muid(de-Paris)", 2.742181224408000E-01, "m3", "L3", "1.0");
   liquid["nabuchodonosor"] = UBASE("French", "nabuchodonosor", 1.515364000000000E-02, "m3", "L3", "1.0");
   liquid["nabuchadnezzar"] = UBASE("French", "nabuchadnezzar", 1.515364000000000E-02, "m3", "L3", "1.0");
   liquid["pied-cube"] = UBASE("French", "pied-cube", 3.427726530510000E-02, "m3", "L3", "1.0");
   liquid["pinte(deParis)"] = UBASE("French", "pinte(deParis)", 9.521462584750000E-04, "m3", "L3", "1.0");
   liquid["pinte(wine)"] = UBASE("French", "pinte(wine)", 4.598500000000000E-04, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("French", "pipe", 4.113271836612000E-01, "m3", "L3", "1.0");
   liquid["posson(de-Paris)"] = UBASE("French", "posson(de-Paris)", 1.190182823093750E-04, "m3", "L3", "1.0");
   liquid["pot(de-Paris)"] = UBASE("French", "pot(de-Paris)", 1.904292516950000E-03, "m3", "L3", "1.0");
   liquid["pot(Provence)"] = UBASE("French", "pot(Provence)", 9.197000000000000E-04, "m3", "L3", "1.0");
   liquid["potiche-de-mercure"] = UBASE("French", "potiche-de-mercure", 3.447302012000000E+01, "m3", "L3", "1.0");
   liquid["pouce-cube"] = UBASE("French", "pouce-cube", 1.983638038489580E-05, "m3", "L3", "1.0");
   liquid["quade(de-Paris)"] = UBASE("French", "quade(de-Paris)", 1.904292516950000E-03, "m3", "L3", "1.0");
   liquid["quarteau"] = UBASE("French", "quarteau", 6.855453061020000E-02, "m3", "L3", "1.0");
   liquid["quartaut(de-Paris)"] = UBASE("French", "quartaut(de-Paris)", 6.855453061020000E-02, "m3", "L3", "1.0");
   liquid["rehoboam"] = UBASE("French", "rehoboam", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["reputed-quart"] = UBASE("French", "reputed-quart", 7.576820000000000E-04, "m3", "L3", "1.0");
   liquid["roquille(de-Paris)"] = UBASE("French", "roquille(de-Paris)", 2.975457057734380E-05, "m3", "L3", "1.0");
   liquid["salmanazar"] = UBASE("French", "salmanazar", 9.092184000000000E-03, "m3", "L3", "1.0");
   liquid["salmarazd"] = UBASE("French", "salmarazd", 9.092184000000000E-03, "m3", "L3", "1.0");
   liquid["salomon"] = UBASE("French", "salomon", 1.818436800000000E-02, "m3", "L3", "1.0");
   liquid["solomon"] = UBASE("French", "solomon", 1.818436800000000E-02, "m3", "L3", "1.0");
   liquid["tonneau"] = UBASE("French", "tonneau", 2.742181224408000E-01, "m3", "L3", "1.0");
   liquid["velte(de-Paris)"] = UBASE("French", "velte(de-Paris)", 7.617170067800000E-03, "m3", "L3", "1.0");
   dry["boisseau"] = UBASE("French", "boisseau", 1.250000000000000E-02, "m3", "L3", "1.0");
   dry["boisseau(de-Paris)"] = UBASE("French", "boisseau(de-Paris)", 1.264000000000000E-02, "m3", "L3", "1.0");
   dry["canne-cube"] = UBASE("French", "canne-cube", 7.627922244125000E+00, "m3", "L3", "1.0");
   dry["litron(de-Paris)"] = UBASE("French", "litron(de-Paris)", 7.900000000000000E-04, "m3", "L3", "1.0");
   dry["mine(de-Paris)"] = UBASE("French", "mine(de-Paris)", 7.584000000000000E-02, "m3", "L3", "1.0");
   dry["minot(de-Paris)"] = UBASE("French", "minot(de-Paris)", 3.792000000000000E-02, "m3", "L3", "1.0");
   dry["muid(de-Paris)"] = UBASE("French", "muid(de-Paris)", 1.820160000000000E+00, "m3", "L3", "1.0");
   dry["pan-cube"] = UBASE("French", "pan-cube", 1.489828563305660E-02, "m3", "L3", "1.0");
   dry["picotins"] = UBASE("French", "picotins", 3.125000000000000E-03, "m3", "L3", "1.0");
   dry["piece"] = UBASE("French", "piece", 2.250000000000000E-01, "m3", "L3", "1.0");
   dry["quart(de-Paris}"] = UBASE("French", "quart(de-Paris}", 3.160000000000000E-03, "m3", "L3", "1.0");
   dry["setier(de-Paris)"] = UBASE("French", "setier(de-Paris)", 1.516800000000000E-01, "m3", "L3", "1.0");
   dry["solive(de-Paris)"] = UBASE("French", "solive(de-Paris)", 1.028317959149790E-01, "m3", "L3", "1.0");
   dry["stere"] = UBASE("French", "stere", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["tonneau-de-jauge"] = UBASE("French", "tonneau-de-jauge", 2.831684659200000E+00, "m3", "L3", "1.0");
   dry["tonneau-de-mer"] = UBASE("French", "tonneau-de-mer", 1.415842329600000E-02, "m3", "L3", "1.0");
   dry["voie(de-Paris)"] = UBASE("French", "voie(de-Paris)", 1.919526857079600E+00, "m3", "L3", "1.0");
   _map["French"] = BaseSystem("French", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit39(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["elle"] = UBASE("German", "elle", 6.669461250000000E-01, "m", "L", "1.0");
   length["foot"] = UBASE("German", "foot", 3.138570000000000E-01, "m", "L", "1.0");
   length["fuss"] = UBASE("German", "fuss", 3.138570000000000E-01, "m", "L", "1.0");
   length["inch"] = UBASE("German", "inch", 2.615475000000000E-02, "m", "L", "1.0");
   length["klafter"] = UBASE("German", "klafter", 1.883142000000000E+00, "m", "L", "1.0");
   length["lachter"] = UBASE("German", "lachter", 1.977299100000000E+00, "m", "L", "1.0");
   length["line"] = UBASE("German", "line", 2.179562500000000E-03, "m", "L", "1.0");
   length["linie"] = UBASE("German", "linie", 2.179562500000000E-03, "m", "L", "1.0");
   length["meile"] = UBASE("German", "meile", 7.532568000000000E+03, "m", "L", "1.0");
   length["meile(Baden)"] = UBASE("German", "meile(Baden)", 8.889000000000000E+03, "m", "L", "1.0");
   length["meile(Baltic)"] = UBASE("German", "meile(Baltic)", 7.467500000000000E+03, "m", "L", "1.0");
   length["meile(Bayern)"] = UBASE("German", "meile(Bayern)", 7.420438000000000E+03, "m", "L", "1.0");
   length["mile"] = UBASE("German", "mile", 7.532568000000000E+03, "m", "L", "1.0");
   length["punkt"] = UBASE("German", "punkt", 1.816302083333330E-04, "m", "L", "1.0");
   length["ruthe"] = UBASE("German", "ruthe", 3.766284000000000E+00, "m", "L", "1.0");
   length["wegstunde"] = UBASE("German", "wegstunde", 3.766284000000000E+03, "m", "L", "1.0");
   length["yard"] = UBASE("German", "yard", 3.766284000000000E+00, "m", "L", "1.0");
   area["joch"] = UBASE("German", "joch", 5.760081338300000E+03, "m2", "L2", "1.0");
   area["klafter"] = UBASE("German", "klafter", 1.440020334575000E+02, "m2", "L2", "1.0");
   area["morgen"] = UBASE("German", "morgen", 2.553281130358080E+03, "m2", "L2", "1.0");
   mass["doppelzentner"] = UBASE("German", "doppelzentner", 1.028964200000000E+02, "kg", "M", "1.0");
   mass["gran"] = UBASE("German", "gran", 6.089986979166670E-05, "kg", "M", "1.0");
   mass["hyl"] = UBASE("German", "hyl", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["kommerzlast"] = UBASE("German", "kommerzlast", 3.000000000000000E+03, "kg", "M", "1.0");
   mass["loth"] = UBASE("German", "loth", 1.461596875000000E-02, "kg", "M", "1.0");
   mass["mark"] = UBASE("German", "mark", 2.338555000000000E-01, "kg", "M", "1.0");
   mass["metric-slug"] = UBASE("German", "metric-slug", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["mug"] = UBASE("German", "mug", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["par"] = UBASE("German", "par", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["pfennig"] = UBASE("German", "pfennig", 9.134980468750000E-04, "kg", "M", "1.0");
   mass["pfund"] = UBASE("German", "pfund", 4.677110000000000E-01, "kg", "M", "1.0");
   mass["pound"] = UBASE("German", "pound", 4.677110000000000E-01, "kg", "M", "1.0");
   mass["quentchen"] = UBASE("German", "quentchen", 4.871989583333330E-03, "kg", "M", "1.0");
   mass["quint"] = UBASE("German", "quint", 3.653992187500000E-03, "kg", "M", "1.0");
   mass["quintal"] = UBASE("German", "quintal", 5.144821000000000E+01, "kg", "M", "1.0");
   mass["schiffspfund"] = UBASE("German", "schiffspfund", 1.543446300000000E+02, "kg", "M", "1.0");
   mass["stein"] = UBASE("German", "stein", 1.028964200000000E+01, "kg", "M", "1.0");
   mass["techma"] = UBASE("German", "techma", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["TMS"] = UBASE("German", "TMS", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["unze"] = UBASE("German", "unze", 2.923193750000000E-02, "kg", "M", "1.0");
   mass["zentner"] = UBASE("German", "zentner", 5.144821000000000E+01, "kg", "M", "1.0");
   mass["zollpfund"] = UBASE("German", "zollpfund", 5.144821000000000E-01, "kg", "M", "1.0");
   liquid["ahm"] = UBASE("German", "ahm", 3.435207286225980E-01, "m3", "L3", "1.0");
   liquid["anker"] = UBASE("German", "anker", 3.435207286225980E-02, "m3", "L3", "1.0");
   liquid["eimer"] = UBASE("German", "eimer", 6.870414572451950E-02, "m3", "L3", "1.0");
   liquid["fuder"] = UBASE("German", "fuder", 8.244497486942350E-01, "m3", "L3", "1.0");
   liquid["halbnoseln"] = UBASE("German", "halbnoseln", 5.367511384728090E-04, "m3", "L3", "1.0");
   liquid["kannen"] = UBASE("German", "kannen", 4.294009107782470E-03, "m3", "L3", "1.0");
   liquid["nosel"] = UBASE("German", "nosel", 1.073502276945620E-03, "m3", "L3", "1.0");
   liquid["ohm"] = UBASE("German", "ohm", 1.374082914490390E-01, "m3", "L3", "1.0");
   liquid["oxhoft"] = UBASE("German", "oxhoft", 2.061124371735590E-01, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("German", "quart", 1.145069095408660E-03, "m3", "L3", "1.0");
   liquid["quartiers"] = UBASE("German", "quartiers", 2.147004553891240E-03, "m3", "L3", "1.0");
   liquid["stauf"] = UBASE("German", "stauf", 8.588018215564940E-03, "m3", "L3", "1.0");
   liquid["stubchen"] = UBASE("German", "stubchen", 8.588018215564940E-03, "m3", "L3", "1.0");
   liquid["viertel"] = UBASE("German", "viertel", 1.717603643112990E-02, "m3", "L3", "1.0");
   liquid["viertelnoseln"] = UBASE("German", "viertelnoseln", 2.683755692364040E-04, "m3", "L3", "1.0");
   dry["dreissiger"] = UBASE("German", "dreissiger", 1.158112500000000E-03, "m3", "L3", "1.0");
   dry["massel"] = UBASE("German", "massel", 4.632450000000000E-03, "m3", "L3", "1.0");
   dry["metze"] = UBASE("German", "metze", 3.435890000000000E-03, "m3", "L3", "1.0");
   dry["metzen"] = UBASE("German", "metzen", 3.705960000000000E-02, "m3", "L3", "1.0");
   dry["quart"] = UBASE("German", "quart", 1.145296666666670E-03, "m3", "L3", "1.0");
   dry["scheffel"] = UBASE("German", "scheffel", 2.223576000000000E-01, "m3", "L3", "1.0");
   _map["German"] = BaseSystem("German", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit40(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["amma(nautical)"] = UBASE("Greek", "amma(nautical)", 2.100000000000000E+01, "m", "L", "1.0");
   length["piki(long)"] = UBASE("Greek", "piki(long)", 6.690000000000000E-01, "m", "L", "1.0");
   length["piki(mansonry)"] = UBASE("Greek", "piki(mansonry)", 7.500000000000000E-01, "m", "L", "1.0");
   length["piki(short)"] = UBASE("Greek", "piki(short)", 6.480000000000000E-01, "m", "L", "1.0");
   area["stremma"] = UBASE("Greek", "stremma", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["stremma(royal)"] = UBASE("Greek", "stremma(royal)", 1.270000000000000E+03, "m2", "L2", "1.0");
   mass["dramme"] = UBASE("Greek", "dramme", 3.276800000000000E-03, "kg", "M", "1.0");
   mass["mina"] = UBASE("Greek", "mina", 1.536000000000000E+00, "kg", "M", "1.0");
   mass["oka"] = UBASE("Greek", "oka", 1.280000000000000E+00, "kg", "M", "1.0");
   mass["pound"] = UBASE("Greek", "pound", 5.120000000000000E-01, "kg", "M", "1.0");
   mass["stater"] = UBASE("Greek", "stater", 5.120000000000000E+01, "kg", "M", "1.0");
   mass["talaton"] = UBASE("Greek", "talaton", 1.536000000000000E+02, "kg", "M", "1.0");
   liquid["baril"] = UBASE("Greek", "baril", 7.423600000000000E-02, "m3", "L3", "1.0");
   liquid["oka"] = UBASE("Greek", "oka", 1.336500000000000E-03, "m3", "L3", "1.0");
   dry["sexte"] = UBASE("Greek", "sexte", 5.400000000000000E-04, "m3", "L3", "1.0");
   _map["Greek"] = BaseSystem("Greek", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit41(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cuarta"] = UBASE("Guatemalan", "cuarta", 2.089750000000000E-01, "m", "L", "1.0");
   length["mecate"] = UBASE("Guatemalan", "mecate", 2.006160000000000E+01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Guatemalan", "pulgada", 2.321944444444440E-02, "m", "L", "1.0");
   length["tercia"] = UBASE("Guatemalan", "tercia", 2.786333333333330E-01, "m", "L", "1.0");
   length["vara"] = UBASE("Guatemalan", "vara", 8.359000000000000E-01, "m", "L", "1.0");
   area["caballiera"] = UBASE("Guatemalan", "caballiera", 4.471864384000000E+05, "m2", "L2", "1.0");
   area["manzana"] = UBASE("Guatemalan", "manzana", 6.987288100000000E+03, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Guatemalan", "square-vara", 6.987288100000000E-01, "m2", "L2", "1.0");
   mass["caja"] = UBASE("Guatemalan", "caja", 1.600000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Guatemalan", "carga", 1.610000000000000E+02, "kg", "M", "1.0");
   mass["fanega"] = UBASE("Guatemalan", "fanega", 9.200000000000000E+01, "kg", "M", "1.0");
   liquid["botella"] = UBASE("Guatemalan", "botella", 6.500000000000000E-04, "m3", "L3", "1.0");
   liquid["cajuella"] = UBASE("Guatemalan", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Guatemalan", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Guatemalan", "cubic-vara", 5.840674122790000E-01, "m3", "L3", "1.0");
   _map["Guatemalan"] = BaseSystem("Guatemalan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit42(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["jacktan"] = UBASE("Guinean", "jacktan", 3.657969333333330E+00, "m", "L", "1.0");
   length["jaktan"] = UBASE("Guinean", "jaktan", 3.657969333333330E+00, "m", "L", "1.0");
   length["pic"] = UBASE("Guinean", "pic", 5.780000000000000E-01, "m", "L", "1.0");
   length["pick"] = UBASE("Guinean", "pick", 2.356400000000000E-01, "m", "L", "1.0");
   area["square-pic"] = UBASE("Guinean", "square-pic", 3.340840000000000E-01, "m2", "L2", "1.0");
   mass["aguirage"] = UBASE("Guinean", "aguirage", 4.012500000000000E-03, "kg", "M", "1.0");
   mass["akey"] = UBASE("Guinean", "akey", 1.337500000000000E-03, "kg", "M", "1.0");
   mass["benda"] = UBASE("Guinean", "benda", 6.420000000000000E-02, "kg", "M", "1.0");
   mass["eggaba"] = UBASE("Guinean", "eggaba", 2.140000000000000E-02, "kg", "M", "1.0");
   mass["gammell"] = UBASE("Guinean", "gammell", 1.953991200000000E+02, "kg", "M", "1.0");
   mass["kantar"] = UBASE("Guinean", "kantar", 9.769956000000000E+02, "kg", "M", "1.0");
   mass["mediatabla"] = UBASE("Guinean", "mediatabla", 2.006250000000000E-03, "kg", "M", "1.0");
   mass["offa"] = UBASE("Guinean", "offa", 3.210000000000000E-02, "kg", "M", "1.0");
   mass["piso"] = UBASE("Guinean", "piso", 8.025000000000000E-03, "kg", "M", "1.0");
   mass["quinto"] = UBASE("Guinean", "quinto", 6.018750000000000E-03, "kg", "M", "1.0");
   mass["seron"] = UBASE("Guinean", "seron", 1.203750000000000E-02, "kg", "M", "1.0");
   mass["uzan"] = UBASE("Guinean", "uzan", 8.025000000000000E-03, "kg", "M", "1.0");
   liquid["cubic-pic"] = UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Guinean", "cubic-pic", 1.931005520000000E-01, "m3", "L3", "1.0");
   _map["Guinean"] = BaseSystem("Guinean", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit43(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["aune"] = UBASE("Haitian", "aune", 1.188000000000000E-01, "m", "L", "1.0");
   length["toise"] = UBASE("Haitian", "toise", 1.948800000000000E+00, "m", "L", "1.0");
   area["carreau"] = UBASE("Haitian", "carreau", 1.292300000000000E+03, "m2", "L2", "1.0");
   mass["gwo-mamit"] = UBASE("Haitian", "gwo-mamit", 1.700000000000000E+00, "kg", "M", "1.0");
   liquid["baril"] = UBASE("Haitian", "baril", 1.000000000000000E-01, "m3", "L3", "1.0");
   liquid["corde"] = UBASE("Haitian", "corde", 3.840000000000000E+00, "m3", "L3", "1.0");
   liquid["toise-cube"] = UBASE("Haitian", "toise-cube", 8.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubic-toise"] = UBASE("Haitian", "cubic-toise", 7.401194422272000E+00, "m3", "L3", "1.0");
   _map["Haitian"] = BaseSystem("Haitian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit44(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["amah"] = UBASE("Hebrew", "amah", 5.550000000000000E-01, "m", "L", "1.0");
   length["cubit"] = UBASE("Hebrew", "cubit", 5.550000000000000E-01, "m", "L", "1.0");
   length["cubit(sacred)"] = UBASE("Hebrew", "cubit(sacred)", 6.400000000000000E-01, "m", "L", "1.0");
   length["derekh-yom"] = UBASE("Hebrew", "derekh-yom", 4.440000000000000E+04, "m", "L", "1.0");
   length["ell"] = UBASE("Hebrew", "ell", 5.550000000000000E-01, "m", "L", "1.0");
   length["etzba"] = UBASE("Hebrew", "etzba", 2.312500000000000E-02, "m", "L", "1.0");
   length["finger"] = UBASE("Hebrew", "finger", 2.312500000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Hebrew", "foot", 3.200000000000000E-01, "m", "L", "1.0");
   length["hasit"] = UBASE("Hebrew", "hasit", 1.850000000000000E-01, "m", "L", "1.0");
   length["mil"] = UBASE("Hebrew", "mil", 1.110000000000000E+03, "m", "L", "1.0");
   length["palm"] = UBASE("Hebrew", "palm", 9.250000000000000E-02, "m", "L", "1.0");
   length["parasa"] = UBASE("Hebrew", "parasa", 4.440000000000000E+03, "m", "L", "1.0");
   length["pesiah"] = UBASE("Hebrew", "pesiah", 5.550000000000000E-01, "m", "L", "1.0");
   length["ris"] = UBASE("Hebrew", "ris", 1.480000000000000E+02, "m", "L", "1.0");
   length["tefach"] = UBASE("Hebrew", "tefach", 9.250000000000000E-02, "m", "L", "1.0");
   length["zeret"] = UBASE("Hebrew", "zeret", 2.775000000000000E-01, "m", "L", "1.0");
   length["zereth"] = UBASE("Hebrew", "zereth", 2.775000000000000E-01, "m", "L", "1.0");
   area["adashah"] = UBASE("Hebrew", "adashah", 3.490658503988660E-05, "m2", "L2", "1.0");
   area["amah-al-amah"] = UBASE("Hebrew", "amah-al-amah", 3.080250000000000E-01, "m2", "L2", "1.0");
   area["beit-kor"] = UBASE("Hebrew", "beit-kor", 2.300022675000000E+04, "m2", "L2", "1.0");
   area["beit-rova"] = UBASE("Hebrew", "beit-rova", 3.395975625000000E+01, "m2", "L2", "1.0");
   area["beit-seah"] = UBASE("Hebrew", "beit-seah", 7.022970000000000E+02, "m2", "L2", "1.0");
   area["geris"] = UBASE("Hebrew", "geris", 3.141592653589790E-04, "m2", "L2", "1.0");
   area["searah"] = UBASE("Hebrew", "searah", 8.726646259971650E-06, "m2", "L2", "1.0");
   mass["bekah"] = UBASE("Hebrew", "bekah", 7.083333333333330E-03, "kg", "M", "1.0");
   mass["gerah"] = UBASE("Hebrew", "gerah", 7.083333333333330E-04, "kg", "M", "1.0");
   mass["kikkar"] = UBASE("Hebrew", "kikkar", 5.100480000000000E+01, "kg", "M", "1.0");
   mass["kikkar(sacred)"] = UBASE("Hebrew", "kikkar(sacred)", 5.100000000000000E+01, "kg", "M", "1.0");
   mass["litra"] = UBASE("Hebrew", "litra", 8.500800000000000E-01, "kg", "M", "1.0");
   mass["litra(sacred)"] = UBASE("Hebrew", "litra(sacred)", 8.500000000000000E-01, "kg", "M", "1.0");
   mass["mehah"] = UBASE("Hebrew", "mehah", 5.903333333333330E-04, "kg", "M", "1.0");
   mass["mina"] = UBASE("Hebrew", "mina", 3.542000000000000E-01, "kg", "M", "1.0");
   mass["mina(sacred)"] = UBASE("Hebrew", "mina(sacred)", 8.500000000000000E-01, "kg", "M", "1.0");
   mass["obol"] = UBASE("Hebrew", "obol", 5.903333333333330E-04, "kg", "M", "1.0");
   mass["pondiuscule"] = UBASE("Hebrew", "pondiuscule", 2.951666666666670E-04, "kg", "M", "1.0");
   mass["rabah(sacred)"] = UBASE("Hebrew", "rabah(sacred)", 3.541666666666670E-03, "kg", "M", "1.0");
   mass["shekel"] = UBASE("Hebrew", "shekel", 1.416800000000000E-02, "kg", "M", "1.0");
   mass["shekel(sacred)"] = UBASE("Hebrew", "shekel(sacred)", 1.416666666666670E-02, "kg", "M", "1.0");
   mass["talent"] = UBASE("Hebrew", "talent", 2.125200000000000E+01, "kg", "M", "1.0");
   mass["talent-of-moses(sacred)"] = UBASE("Hebrew", "talent-of-moses(sacred)", 4.250000000000000E+01, "kg", "M", "1.0");
   mass["zuzah"] = UBASE("Hebrew", "zuzah", 3.542000000000000E-03, "kg", "M", "1.0");
   liquid["bath(new)"] = UBASE("Hebrew", "bath(new)", 2.142000000000000E-02, "m3", "L3", "1.0");
   liquid["bath(old)"] = UBASE("Hebrew", "bath(old)", 2.937600000000000E-02, "m3", "L3", "1.0");
   liquid["hin"] = UBASE("Hebrew", "hin", 3.570000000000000E-03, "m3", "L3", "1.0");
   dry["beitza"] = UBASE("Hebrew", "beitza", 1.296319444444440E-03, "m3", "L3", "1.0");
   dry["cab"] = UBASE("Hebrew", "cab", 1.190000000000000E-03, "m3", "L3", "1.0");
   dry["cor"] = UBASE("Hebrew", "cor", 2.142000000000000E-01, "m3", "L3", "1.0");
   dry["ephah(new)"] = UBASE("Hebrew", "ephah(new)", 2.142000000000000E-02, "m3", "L3", "1.0");
   dry["ephah(old)"] = UBASE("Hebrew", "ephah(old)", 2.937600000000000E-02, "m3", "L3", "1.0");
   dry["gomor"] = UBASE("Hebrew", "gomor", 2.142000000000000E-03, "m3", "L3", "1.0");
   dry["homer"] = UBASE("Hebrew", "homer", 1.320000000000000E+02, "m3", "L3", "1.0");
   dry["kab"] = UBASE("Hebrew", "kab", 1.190000000000000E-03, "m3", "L3", "1.0");
   dry["kezayit"] = UBASE("Hebrew", "kezayit", 1.087920966702880E-26, "m3", "L3", "1.0");
   dry["kor"] = UBASE("Hebrew", "kor", 2.142000000000000E-01, "m3", "L3", "1.0");
   dry["lethek"] = UBASE("Hebrew", "lethek", 9.459000000000000E-03, "m3", "L3", "1.0");
   dry["log"] = UBASE("Hebrew", "log", 2.975000000000000E-04, "m3", "L3", "1.0");
   dry["modius"] = UBASE("Hebrew", "modius", 6.426000000000000E-03, "m3", "L3", "1.0");
   dry["omer"] = UBASE("Hebrew", "omer", 9.806650000000000E+03, "m3", "L3", "1.0");
   dry["sath"] = UBASE("Hebrew", "sath", 6.426000000000000E-03, "m3", "L3", "1.0");
   dry["seah"] = UBASE("Hebrew", "seah", 2.787091200000000E-01, "m3", "L3", "1.0");
   _map["Hebrew"] = BaseSystem("Hebrew", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit45(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cuarta"] = UBASE("Honduran", "cuarta", 2.032000000000000E-01, "m", "L", "1.0");
   length["legua"] = UBASE("Honduran", "legua", 4.064000000000000E+03, "m", "L", "1.0");
   length["mecate"] = UBASE("Honduran", "mecate", 1.950720000000000E+01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Honduran", "pulgada", 2.257777777777780E-02, "m", "L", "1.0");
   length["tercia"] = UBASE("Honduran", "tercia", 2.709333333333330E-01, "m", "L", "1.0");
   length["vara"] = UBASE("Honduran", "vara", 8.128000000000000E-01, "m", "L", "1.0");
   area["caballiera"] = UBASE("Honduran", "caballiera", 4.228120576000000E+05, "m2", "L2", "1.0");
   area["labor"] = UBASE("Honduran", "labor", 6.606438400000000E+05, "m2", "L2", "1.0");
   area["legua"] = UBASE("Honduran", "legua", 1.651609600000000E+07, "m2", "L2", "1.0");
   area["manzana"] = UBASE("Honduran", "manzana", 6.606438400000000E+04, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Honduran", "square-vara", 6.606438400000000E-01, "m2", "L2", "1.0");
   mass["caja"] = UBASE("Honduran", "caja", 1.600000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Honduran", "carga", 1.610000000000000E+02, "kg", "M", "1.0");
   mass["fanega"] = UBASE("Honduran", "fanega", 9.200000000000000E+01, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Honduran", "quintal", 4.600000000000000E+01, "kg", "M", "1.0");
   liquid["almude"] = UBASE("Honduran", "almude", 2.031250000000000E-03, "m3", "L3", "1.0");
   liquid["botella"] = UBASE("Honduran", "botella", 6.500000000000000E-04, "m3", "L3", "1.0");
   liquid["cajuella"] = UBASE("Honduran", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Honduran", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0");
   liquid["fanega"] = UBASE("Honduran", "fanega", 2.437500000000000E-02, "m3", "L3", "1.0");
   liquid["octavillos"] = UBASE("Honduran", "octavillos", 1.269531250000000E-04, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Honduran", "cubic-vara", 5.369713131520000E-01, "m3", "L3", "1.0");
   _map["Honduran"] = BaseSystem("Honduran", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit46(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["arasz"] = UBASE("Hungarian", "arasz", 1.975500000000000E-01, "m", "L", "1.0");
   length["arsin"] = UBASE("Hungarian", "arsin", 5.844753388560000E-01, "m", "L", "1.0");
   length["faust"] = UBASE("Hungarian", "faust", 1.053600000000000E-01, "m", "L", "1.0");
   length["huvelyk"] = UBASE("Hungarian", "huvelyk", 2.634000000000000E-02, "m", "L", "1.0");
   length["kettoslepes"] = UBASE("Hungarian", "kettoslepes", 1.896480000000000E+00, "m", "L", "1.0");
   length["lab"] = UBASE("Hungarian", "lab", 3.160800000000000E-01, "m", "L", "1.0");
   length["lepes"] = UBASE("Hungarian", "lepes", 9.482400000000000E-01, "m", "L", "1.0");
   length["marok"] = UBASE("Hungarian", "marok", 1.053600000000000E-01, "m", "L", "1.0");
   length["meile"] = UBASE("Hungarian", "meile", 8.353599300000000E+03, "m", "L", "1.0");
   length["merfold"] = UBASE("Hungarian", "merfold", 8.353599300000000E+03, "m", "L", "1.0");
   length["mertfold"] = UBASE("Hungarian", "mertfold", 8.353599300000000E+03, "m", "L", "1.0");
   length["ol"] = UBASE("Hungarian", "ol", 3.160800000000000E+00, "m", "L", "1.0");
   length["rof"] = UBASE("Hungarian", "rof", 6.321600000000000E-01, "m", "L", "1.0");
   length["rud"] = UBASE("Hungarian", "rud", 6.321600000000000E+00, "m", "L", "1.0");
   length["stab"] = UBASE("Hungarian", "stab", 1.580400000000000E+00, "m", "L", "1.0");
   length["tenyer"] = UBASE("Hungarian", "tenyer", 7.902000000000000E-02, "m", "L", "1.0");
   length["ujj"] = UBASE("Hungarian", "ujj", 1.975500000000000E-02, "m", "L", "1.0");
   area["hold"] = UBASE("Hungarian", "hold", 4.316000067103950E+03, "m2", "L2", "1.0");
   area["joch"] = UBASE("Hungarian", "joch", 4.316000067103950E+03, "m2", "L2", "1.0");
   area["square-meile"] = UBASE("Hungarian", "square-meile", 6.978262126496050E+07, "m2", "L2", "1.0");
   area["square-mertfold"] = UBASE("Hungarian", "square-mertfold", 6.978262126496050E+07, "m2", "L2", "1.0");
   mass["oka"] = UBASE("Hungarian", "oka", 1.329479142678000E+00, "kg", "M", "1.0");
   liquid["ako"] = UBASE("Hungarian", "ako", 6.244500000000000E-02, "m3", "L3", "1.0");
   liquid["eimer"] = UBASE("Hungarian", "eimer", 5.430000000000000E-02, "m3", "L3", "1.0");
   liquid["fass"] = UBASE("Hungarian", "fass", 1.989009000000000E-01, "m3", "L3", "1.0");
   liquid["halbe"] = UBASE("Hungarian", "halbe", 8.484375000000000E-04, "m3", "L3", "1.0");
   liquid["itcze"] = UBASE("Hungarian", "itcze", 8.484375000000000E-04, "m3", "L3", "1.0");
   liquid["metzen"] = UBASE("Hungarian", "metzen", 6.244500000000000E-02, "m3", "L3", "1.0");
   dry["cubic-faust"] = UBASE("Hungarian", "cubic-faust", 1.169572870656000E-03, "m3", "L3", "1.0");
   _map["Hungarian"] = BaseSystem("Hungarian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit47(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["alin"] = UBASE("Icelandic", "alin", 6.277140000000000E-01, "m", "L", "1.0");
   length["faomur"] = UBASE("Icelandic", "faomur", 1.883142000000000E+00, "m", "L", "1.0");
   length["fet"] = UBASE("Icelandic", "fet", 3.138570000000000E-01, "m", "L", "1.0");
   length["lina"] = UBASE("Icelandic", "lina", 2.179562500000000E-03, "m", "L", "1.0");
   length["mila-alandi"] = UBASE("Icelandic", "mila-alandi", 7.532568000000000E+03, "m", "L", "1.0");
   length["pingmannaleio"] = UBASE("Icelandic", "pingmannaleio", 3.766284000000000E+04, "m", "L", "1.0");
   length["pumlungur"] = UBASE("Icelandic", "pumlungur", 2.615475000000000E-02, "m", "L", "1.0");
   area["engjateigur"] = UBASE("Icelandic", "engjateigur", 5.673958067462400E+03, "m2", "L2", "1.0");
   area["feralin"] = UBASE("Icelandic", "feralin", 3.940248657960000E-01, "m2", "L2", "1.0");
   area["ferfaomur"] = UBASE("Icelandic", "ferfaomur", 3.546223792164000E+00, "m2", "L2", "1.0");
   area["ferfet"] = UBASE("Icelandic", "ferfet", 9.850621644900000E-02, "m2", "L2", "1.0");
   area["fermila"] = UBASE("Icelandic", "fermila", 5.673958067462400E+06, "m2", "L2", "1.0");
   area["ferpumlungur"] = UBASE("Icelandic", "ferpumlungur", 6.840709475625000E-04, "m2", "L2", "1.0");
   area["tundagslatta"] = UBASE("Icelandic", "tundagslatta", 3.191601412947600E+03, "m2", "L2", "1.0");
   mass["batt"] = UBASE("Icelandic", "batt", 1.600000000000000E+02, "kg", "M", "1.0");
   mass["fierding"] = UBASE("Icelandic", "fierding", 2.000000000000000E+01, "kg", "M", "1.0");
   mass["liespund"] = UBASE("Icelandic", "liespund", 3.200000000000000E+01, "kg", "M", "1.0");
   mass["mark"] = UBASE("Icelandic", "mark", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["pund"] = UBASE("Icelandic", "pund", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["skippund"] = UBASE("Icelandic", "skippund", 1.600000000000000E+02, "kg", "M", "1.0");
   mass["tunna-smjors"] = UBASE("Icelandic", "tunna-smjors", 1.120000000000000E+02, "kg", "M", "1.0");
   mass["fisk"] = UBASE("Icelandic", "fisk", 4.000000000000000E+00, "kg", "M", "1.0");
   liquid["cubic-fet"] = UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3", "L3", "1.0");
   dry["almen-tunna"] = UBASE("Icelandic", "almen-tunna", 1.159382459101270E-01, "m3", "L3", "1.0");
   dry["anker"] = UBASE("Icelandic", "anker", 3.864608197004220E-02, "m3", "L3", "1.0");
   dry["cubic-fet"] = UBASE("Icelandic", "cubic-fet", 3.091686557603380E-02, "m3", "L3", "1.0");
   dry["kornskeppa"] = UBASE("Icelandic", "kornskeppa", 1.739073688651900E-02, "m3", "L3", "1.0");
   dry["korntunna"] = UBASE("Icelandic", "korntunna", 1.391258950921520E-01, "m3", "L3", "1.0");
   dry["oltunna"] = UBASE("Icelandic", "oltunna", 1.313966786981440E-01, "m3", "L3", "1.0");
   dry["pottar"] = UBASE("Icelandic", "pottar", 9.661520492510560E-04, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Icelandic", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Icelandic", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   _map["Icelandic"] = BaseSystem("Icelandic", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit48(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["barleycorn"] = UBASE("Imperial", "barleycorn", 8.466666666666670E-03, "m", "L", "1.0");
   length["billet"] = UBASE("Imperial", "billet", 1.016000000000000E+00, "m", "L", "1.0");
   length["bolt"] = UBASE("Imperial", "bolt", 3.657600000000000E+01, "m", "L", "1.0");
   length["calibre"] = UBASE("Imperial", "calibre", 2.540000000000000E-04, "m", "L", "1.0");
   length["cable"] = UBASE("Imperial", "cable", 1.828800000000000E+02, "m", "L", "1.0");
   length["centiinch"] = UBASE("Imperial", "centiinch", 2.540000000000000E-04, "m", "L", "1.0");
   length["chain"] = UBASE("Imperial", "chain", 2.011680000000000E+01, "m", "L", "1.0");
   length["ch"] = UBASE("Imperial", "ch", 2.011680000000000E+01, "m", "L", "1.0");
   length["cin"] = UBASE("Imperial", "cin", 2.540000000000000E-04, "m", "L", "1.0");
   length["colombian"] = UBASE("Imperial", "colombian", 5.644444444000000E-03, "m", "L", "1.0");
   length["diamond"] = UBASE("Imperial", "diamond", 1.411111111111110E-03, "m", "L", "1.0");
   length["ell"] = UBASE("Imperial", "ell", 1.143000000000000E+00, "m", "L", "1.0");
   length["english"] = UBASE("Imperial", "english", 4.938888888888890E-03, "m", "L", "1.0");
   length["excelsior"] = UBASE("Imperial", "excelsior", 1.058333333333330E-03, "m", "L", "1.0");
   length["fathom"] = UBASE("Imperial", "fathom", 1.828800000000000E+00, "m", "L", "1.0");
   length["fath"] = UBASE("Imperial", "fath", 1.828800000000000E+00, "m", "L", "1.0");
   length["fathoms"] = UBASE("Imperial", "fathoms", 1.828800000000000E+00, "m", "L", "1.0");
   length["finger"] = UBASE("Imperial", "finger", 1.905000000000000E-02, "m", "L", "1.0");
   length["finger-length"] = UBASE("Imperial", "finger-length", 1.143000000000000E-01, "m", "L", "1.0");
   length["foot"] = UBASE("Imperial", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["ft"] = UBASE("Imperial", "ft", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Imperial", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["furlong"] = UBASE("Imperial", "furlong", 2.011680000000000E+02, "m", "L", "1.0");
   length["fur"] = UBASE("Imperial", "fur", 2.011680000000000E+02, "m", "L", "1.0");
   length["furlongs"] = UBASE("Imperial", "furlongs", 2.011680000000000E+02, "m", "L", "1.0");
   length["great-primer"] = UBASE("Imperial", "great-primer", 6.350000000000000E-03, "m", "L", "1.0");
   length["hand"] = UBASE("Imperial", "hand", 1.016000000000000E-01, "m", "L", "1.0");
   length["hd"] = UBASE("Imperial", "hd", 1.016000000000000E-01, "m", "L", "1.0");
   length["inch"] = UBASE("Imperial", "inch", 2.540000000000000E-02, "m", "L", "1.0");
   length["in"] = UBASE("Imperial", "in", 2.540000000000000E-02, "m", "L", "1.0");
   length["inches"] = UBASE("Imperial", "inches", 2.540000000000000E-02, "m", "L", "1.0");
   length["land"] = UBASE("Imperial", "land", 1.609344000000000E+03, "m", "L", "1.0");
   length["league"] = UBASE("Imperial", "league", 5.556000000000000E+03, "m", "L", "1.0");
   length["leag"] = UBASE("Imperial", "leag", 5.556000000000000E+03, "m", "L", "1.0");
   length["leagues"] = UBASE("Imperial", "leagues", 5.556000000000000E+03, "m", "L", "1.0");
   length["league(statute)"] = UBASE("Imperial", "league(statute)", 4.828032000000000E+03, "m", "L", "1.0");
   length["leag(statute)"] = UBASE("Imperial", "leag(statute)", 4.828032000000000E+03, "m", "L", "1.0");
   length["st-lg"] = UBASE("Imperial", "st-lg", 4.828032000000000E+03, "m", "L", "1.0");
   length["link"] = UBASE("Imperial", "link", 2.011680000000000E-01, "m", "L", "1.0");
   length["long-primer"] = UBASE("Imperial", "long-primer", 3.527777777777780E-03, "m", "L", "1.0");
   length["meridian"] = UBASE("Imperial", "meridian", 1.552222222222220E-02, "m", "L", "1.0");
   length["microinch"] = UBASE("Imperial", "microinch", 2.540000000000000E-08, "m", "L", "1.0");
   length["uin"] = UBASE("Imperial", "uin", 2.540000000000000E-08, "m", "L", "1.0");
   length["mil"] = UBASE("Imperial", "mil", 2.540000000000000E-05, "m", "L", "1.0");
   length["mile(geographical)"] = UBASE("Imperial", "mile(geographical)", 1.855324800000000E+03, "m", "L", "1.0");
   length["mile"] = UBASE("Imperial", "mile", 1.609344000000000E+03, "m", "L", "1.0");
   length["mi"] = UBASE("Imperial", "mi", 1.609344000000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("Imperial", "miles", 1.609344000000000E+03, "m", "L", "1.0");
   length["mile(telegraph)"] = UBASE("Imperial", "mile(telegraph)", 1.855317600000000E+03, "m", "L", "1.0");
   length["mi(tel)"] = UBASE("Imperial", "mi(tel)", 1.855317600000000E+03, "m", "L", "1.0");
   length["nautical-mile"] = UBASE("Imperial", "nautical-mile", 1.853184000000000E+03, "m", "L", "1.0");
   length["nmi"] = UBASE("Imperial", "nmi", 1.853184000000000E+03, "m", "L", "1.0");
   length["pace"] = UBASE("Imperial", "pace", 1.524000000000000E+00, "m", "L", "1.0");
   length["pearl"] = UBASE("Imperial", "pearl", 1.763888888888890E-03, "m", "L", "1.0");
   length["perch"] = UBASE("Imperial", "perch", 5.029200000000000E+00, "m", "L", "1.0");
   length["pole"] = UBASE("Imperial", "pole", 5.029200000000000E+00, "m", "L", "1.0");
   length["rod"] = UBASE("Imperial", "rod", 5.029200000000000E+00, "m", "L", "1.0");
   length["rd"] = UBASE("Imperial", "rd", 5.029200000000000E+00, "m", "L", "1.0");
   length["rods"] = UBASE("Imperial", "rods", 5.029200000000000E+00, "m", "L", "1.0");
   length["small-pica"] = UBASE("Imperial", "small-pica", 3.880555555555560E-03, "m", "L", "1.0");
   length["span"] = UBASE("Imperial", "span", 2.286000000000000E-01, "m", "L", "1.0");
   length["sp"] = UBASE("Imperial", "sp", 2.286000000000000E-01, "m", "L", "1.0");
   length["stick"] = UBASE("Imperial", "stick", 5.080000000000000E-02, "m", "L", "1.0");
   length["tenthmeter"] = UBASE("Imperial", "tenthmeter", 1.000000000000000E-10, "m", "L", "1.0");
   length["A"] = UBASE("Imperial", "A", 1.000000000000000E-10, "m", "L", "1.0");
   length["thou"] = UBASE("Imperial", "thou", 2.540000000000000E-05, "m", "L", "1.0");
   length["twip"] = UBASE("Imperial", "twip", 1.763888888888890E-05, "m", "L", "1.0");
   length["yard"] = UBASE("Imperial", "yard", 9.144000000000000E-01, "m", "L", "1.0");
   length["yd"] = UBASE("Imperial", "yd", 9.144000000000000E-01, "m", "L", "1.0");
   length["yards"] = UBASE("Imperial", "yards", 9.144000000000000E-01, "m", "L", "1.0");
   length["yard(WMA1963)"] = UBASE("Imperial", "yard(WMA1963)", 9.144000000000000E-01, "m", "L", "1.0");
   length["yd(WMA1963)"] = UBASE("Imperial", "yd(WMA1963)", 9.144000000000000E-01, "m", "L", "1.0");
   area["acre"] = UBASE("Imperial", "acre", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["acres"] = UBASE("Imperial", "acres", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["circular-inch"] = UBASE("Imperial", "circular-inch", 5.067074790974980E-04, "m2", "L2", "1.0");
   area["cin"] = UBASE("Imperial", "cin", 5.067074790974980E-04, "m2", "L2", "1.0");
   area["cir-In"] = UBASE("Imperial", "cir-In", 5.067074790974980E-04, "m2", "L2", "1.0");
   area["circular-mil"] = UBASE("Imperial", "circular-mil", 5.067074790980000E-10, "m2", "L2", "1.0");
   area["cmil"] = UBASE("Imperial", "cmil", 5.067074790980000E-10, "m2", "L2", "1.0");
   area["cir-mil"] = UBASE("Imperial", "cir-mil", 5.067074790980000E-10, "m2", "L2", "1.0");
   area["circular-mile(nautical)"] = UBASE("Imperial", "circular-mile(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0");
   area["cmi(nautical)"] = UBASE("Imperial", "cmi(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0");
   area["cir-mi(nautical)"] = UBASE("Imperial", "cir-mi(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0");
   area["circular-mile(statute)"] = UBASE("Imperial", "circular-mile(statute)", 2.034171905079120E+06, "m2", "L2", "1.0");
   area["cmi(statute)"] = UBASE("Imperial", "cmi(statute)", 2.034171905079120E+06, "m2", "L2", "1.0");
   area["cir-mi(statute)"] = UBASE("Imperial", "cir-mi(statute)", 2.034171905079120E+06, "m2", "L2", "1.0");
   area["column-inch"] = UBASE("Imperial", "column-inch", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["perch"] = UBASE("Imperial", "perch", 2.529285264000000E+01, "m2", "L2", "1.0");
   area["quarter-section"] = UBASE("Imperial", "quarter-section", 6.474970275840000E+04, "m2", "L2", "1.0");
   area["roll"] = UBASE("Imperial", "roll", 2.787091200000000E+00, "m2", "L2", "1.0");
   area["rood"] = UBASE("Imperial", "rood", 1.011714105600000E+03, "m2", "L2", "1.0");
   area["sabine"] = UBASE("Imperial", "sabine", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["section-of-land"] = UBASE("Imperial", "section-of-land", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square(Imperial)"] = UBASE("Imperial", "square(Imperial)", 9.290304000000000E+00, "m2", "L2", "1.0");
   area["sq"] = UBASE("Imperial", "sq", 9.290304000000000E+00, "m2", "L2", "1.0");
   area["square-foot"] = UBASE("Imperial", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["ft2"] = UBASE("Imperial", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["sq-ft"] = UBASE("Imperial", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("Imperial", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-league(nautical)"] = UBASE("Imperial", "square-league(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0");
   area["sq-leag(nautical)"] = UBASE("Imperial", "sq-leag(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0");
   area["square-inch"] = UBASE("Imperial", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["in2"] = UBASE("Imperial", "in2", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["sq-in"] = UBASE("Imperial", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-inches"] = UBASE("Imperial", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-league(statute)"] = UBASE("Imperial", "square-league(statute)", 2.330989299302400E+07, "m2", "L2", "1.0");
   area["sq-leag(statute)"] = UBASE("Imperial", "sq-leag(statute)", 2.330989299302400E+07, "m2", "L2", "1.0");
   area["square-miie"] = UBASE("Imperial", "square-miie", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["sq-mi"] = UBASE("Imperial", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["mi2"] = UBASE("Imperial", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-miles"] = UBASE("Imperial", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-mile(geographical)"] = UBASE("Imperial", "square-mile(geographical)", 3.442230113495040E+06, "m2", "L2", "1.0");
   area["sq-mi(geo)"] = UBASE("Imperial", "sq-mi(geo)", 3.442230113495040E+06, "m2", "L2", "1.0");
   area["square-mile(statute)"] = UBASE("Imperial", "square-mile(statute)", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["sq-mi(statute)"] = UBASE("Imperial", "sq-mi(statute)", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-mile(telegraph)"] = UBASE("Imperial", "square-mile(telegraph)", 3.442203396869760E+06, "m2", "L2", "1.0");
   area["sq-mi(tel)"] = UBASE("Imperial", "sq-mi(tel)", 3.442203396869760E+06, "m2", "L2", "1.0");
   area["square-perch"] = UBASE("Imperial", "square-perch", 2.529285264000000E+01, "m2", "L2", "1.0");
   area["square-pole"] = UBASE("Imperial", "square-pole", 2.529285264000000E+01, "m2", "L2", "1.0");
   area["square-rod"] = UBASE("Imperial", "square-rod", 2.529285264000000E+01, "m2", "L2", "1.0");
   area["rd2"] = UBASE("Imperial", "rd2", 2.529285264000000E+01, "m2", "L2", "1.0");
   area["square-rods"] = UBASE("Imperial", "square-rods", 2.529285264000000E+01, "m2", "L2", "1.0");
   area["square-yard"] = UBASE("Imperial", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["yd2"] = UBASE("Imperial", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["sq-yd"] = UBASE("Imperial", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["square-yards"] = UBASE("Imperial", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["square-yard(WMA1963)"] = UBASE("Imperial", "square-yard(WMA1963)", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["yd2(WMA1963)"] = UBASE("Imperial", "yd2(WMA1963)", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["sq-yd(WMA1963)"] = UBASE("Imperial", "sq-yd(WMA1963)", 8.361273600000000E-01, "m2", "L2", "1.0");
   mass["blanc"] = UBASE("Imperial", "blanc", 2.170138888888890E-10, "kg", "M", "1.0");
   mass["cental"] = UBASE("Imperial", "cental", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cH"] = UBASE("Imperial", "cH", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cwt"] = UBASE("Imperial", "cwt", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["kin-tal"] = UBASE("Imperial", "kin-tal", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["centner"] = UBASE("Imperial", "centner", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["dram"] = UBASE("Imperial", "dram", 1.771845195312500E-03, "kg", "M", "1.0");
   mass["dr"] = UBASE("Imperial", "dr", 1.771845195312500E-03, "kg", "M", "1.0");
   mass["drachm"] = UBASE("Imperial", "drachm", 1.771845195312500E-03, "kg", "M", "1.0");
   mass["dram(apothecary)"] = UBASE("Imperial", "dram(apothecary)", 3.887934600000000E-03, "kg", "M", "1.0");
   mass["dr(ap)"] = UBASE("Imperial", "dr(ap)", 3.887934600000000E-03, "kg", "M", "1.0");
   mass["drachm(ap)"] = UBASE("Imperial", "drachm(ap)", 3.887934600000000E-03, "kg", "M", "1.0");
   mass["drachm(troy)"] = UBASE("Imperial", "drachm(troy)", 3.887934600000000E-03, "kg", "M", "1.0");
   mass["dr(troy)"] = UBASE("Imperial", "dr(troy)", 3.887934600000000E-03, "kg", "M", "1.0");
   mass["droit"] = UBASE("Imperial", "droit", 1.041666666666670E-07, "kg", "M", "1.0");
   mass["flask-of-mercury"] = UBASE("Imperial", "flask-of-mercury", 3.447302012000000E+01, "kg", "M", "1.0");
   mass["Hg-flask"] = UBASE("Imperial", "Hg-flask", 3.447302012000000E+01, "kg", "M", "1.0");
   mass["grain"] = UBASE("Imperial", "grain", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["gr"] = UBASE("Imperial", "gr", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["grain(apothecary)"] = UBASE("Imperial", "grain(apothecary)", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["gr(ap)"] = UBASE("Imperial", "gr(ap)", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["grain(troy)"] = UBASE("Imperial", "grain(troy)", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["gr(troy)"] = UBASE("Imperial", "gr(troy)", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["hundredweight"] = UBASE("Imperial", "hundredweight", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["kintal"] = UBASE("Imperial", "kintal", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["long-ton"] = UBASE("Imperial", "long-ton", 1.016046908800000E+03, "kg", "M", "1.0");
   mass["lg-ton"] = UBASE("Imperial", "lg-ton", 1.016046908800000E+03, "kg", "M", "1.0");
   mass["mite"] = UBASE("Imperial", "mite", 2.500000000000000E-06, "kg", "M", "1.0");
   mass["mounce"] = UBASE("Imperial", "mounce", 2.500000000000000E-02, "kg", "M", "1.0");
   mass["ounce"] = UBASE("Imperial", "ounce", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["oz"] = UBASE("Imperial", "oz", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["ounces"] = UBASE("Imperial", "ounces", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["ounce(apothecary)"] = UBASE("Imperial", "ounce(apothecary)", 3.110347680000000E-02, "kg", "M", "1.0");
   mass["oz(ap)"] = UBASE("Imperial", "oz(ap)", 3.110347680000000E-02, "kg", "M", "1.0");
   mass["ounce(metric)"] = UBASE("Imperial", "ounce(metric)", 2.500000000000000E-02, "kg", "M", "1.0");
   mass["oz(metric)"] = UBASE("Imperial", "oz(metric)", 2.500000000000000E-02, "kg", "M", "1.0");
   mass["ounce(troy)"] = UBASE("Imperial", "ounce(troy)", 3.110347680000000E-02, "kg", "M", "1.0");
   mass["oz(troy)"] = UBASE("Imperial", "oz(troy)", 3.110347680000000E-02, "kg", "M", "1.0");
   mass["pennyweight(troy)"] = UBASE("Imperial", "pennyweight(troy)", 1.555173840000000E-03, "kg", "M", "1.0");
   mass["dwt(troy)"] = UBASE("Imperial", "dwt(troy)", 1.555173840000000E-03, "kg", "M", "1.0");
   mass["peridot(jeweller)"] = UBASE("Imperial", "peridot(jeweller)", 5.208333333333330E-09, "kg", "M", "1.0");
   mass["point(jeweller)"] = UBASE("Imperial", "point(jeweller)", 2.000000000000000E-06, "kg", "M", "1.0");
   mass["pound"] = UBASE("Imperial", "pound", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb"] = UBASE("Imperial", "lb", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pounds"] = UBASE("Imperial", "pounds", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pound(apothecary)"] = UBASE("Imperial", "pound(apothecary)", 3.732417216000000E-01, "kg", "M", "1.0");
   mass["lb(ap)"] = UBASE("Imperial", "lb(ap)", 3.732417216000000E-01, "kg", "M", "1.0");
   mass["la(ap)"] = UBASE("Imperial", "la(ap)", 3.732417216000000E-01, "kg", "M", "1.0");
   mass["pound(troy)"] = UBASE("Imperial", "pound(troy)", 3.732417216000000E-01, "kg", "M", "1.0");
   mass["lb(troy)"] = UBASE("Imperial", "lb(troy)", 3.732417216000000E-01, "kg", "M", "1.0");
   mass["pound(WMA1963)"] = UBASE("Imperial", "pound(WMA1963)", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb(WMA1963)"] = UBASE("Imperial", "lb(WMA1963)", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["USMB"] = UBASE("Imperial", "USMB", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pound-mass"] = UBASE("Imperial", "pound-mass", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["quarter"] = UBASE("Imperial", "quarter", 1.270058636000000E+01, "kg", "M", "1.0");
   mass["q"] = UBASE("Imperial", "q", 1.270058636000000E+01, "kg", "M", "1.0");
   mass["qtr"] = UBASE("Imperial", "qtr", 1.270058636000000E+01, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Imperial", "quintal", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["slug"] = UBASE("Imperial", "slug", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["slugs"] = UBASE("Imperial", "slugs", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["stone"] = UBASE("Imperial", "stone", 6.350293180000000E+00, "kg", "M", "1.0");
   mass["st"] = UBASE("Imperial", "st", 6.350293180000000E+00, "kg", "M", "1.0");
   liquid["cup"] = UBASE("Imperial", "cup", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["cups"] = UBASE("Imperial", "cups", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["fluid-ounce"] = UBASE("Imperial", "fluid-ounce", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["fl-oz"] = UBASE("Imperial", "fl-oz", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["fluid-scruple"] = UBASE("Imperial", "fluid-scruple", 1.183878125000000E-06, "m3", "L3", "1.0");
   liquid["fl-s"] = UBASE("Imperial", "fl-s", 1.183878125000000E-06, "m3", "L3", "1.0");
   liquid["fluid-drachm"] = UBASE("Imperial", "fluid-drachm", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["fl-d"] = UBASE("Imperial", "fl-d", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["gallon"] = UBASE("Imperial", "gallon", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gal"] = UBASE("Imperial", "gal", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gallons"] = UBASE("Imperial", "gallons", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gill"] = UBASE("Imperial", "gill", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["gi"] = UBASE("Imperial", "gi", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["minim"] = UBASE("Imperial", "minim", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["m"] = UBASE("Imperial", "m", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["min"] = UBASE("Imperial", "min", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("Imperial", "pint", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["pt"] = UBASE("Imperial", "pt", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["pints"] = UBASE("Imperial", "pints", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("Imperial", "quart", 1.136523000000000E-03, "m3", "L3", "1.0");
   liquid["qt"] = UBASE("Imperial", "qt", 1.136523000000000E-03, "m3", "L3", "1.0");
   liquid["quarts"] = UBASE("Imperial", "quarts", 1.136523000000000E-03, "m3", "L3", "1.0");
   dry["bank-cubic-meter"] = UBASE("Imperial", "bank-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["BCM"] = UBASE("Imperial", "BCM", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["board-foot-measure"] = UBASE("Imperial", "board-foot-measure", 2.359737216000000E-03, "m3", "L3", "1.0");
   dry["fum"] = UBASE("Imperial", "fum", 2.359737216000000E-03, "m3", "L3", "1.0");
   dry["BM"] = UBASE("Imperial", "BM", 2.359737216000000E-03, "m3", "L3", "1.0");
   dry["fbm"] = UBASE("Imperial", "fbm", 2.359737216000000E-03, "m3", "L3", "1.0");
   dry["bushel"] = UBASE("Imperial", "bushel", 3.636873600000000E-02, "m3", "L3", "1.0");
   dry["cubem"] = UBASE("Imperial", "cubem", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cuben"] = UBASE("Imperial", "cuben", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cu-Mi"] = UBASE("Imperial", "cu-Mi", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cubic-foot"] = UBASE("Imperial", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["ft3"] = UBASE("Imperial", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cu-ft"] = UBASE("Imperial", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-feet"] = UBASE("Imperial", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-inch"] = UBASE("Imperial", "cubic-inch", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["in3"] = UBASE("Imperial", "in3", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cu-in"] = UBASE("Imperial", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-inches"] = UBASE("Imperial", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-yard"] = UBASE("Imperial", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["yd3"] = UBASE("Imperial", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cu-yd"] = UBASE("Imperial", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cubic-yards"] = UBASE("Imperial", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["forty-foot-equivalent-unit"] = UBASE("Imperial", "forty-foot-equivalent-unit", 7.249112727552000E+01, "m3", "L3", "1.0");
   dry["FEU"] = UBASE("Imperial", "FEU", 7.249112727552000E+01, "m3", "L3", "1.0");
   dry["FEQ"] = UBASE("Imperial", "FEQ", 7.249112727552000E+01, "m3", "L3", "1.0");
   dry["freight-ton"] = UBASE("Imperial", "freight-ton", 1.132673863680000E+00, "m3", "L3", "1.0");
   dry["peck"] = UBASE("Imperial", "peck", 9.092184000000000E-03, "m3", "L3", "1.0");
   dry["perche(masonry)"] = UBASE("Imperial", "perche(masonry)", 7.008419531520000E-01, "m3", "L3", "1.0");
   dry["quarter"] = UBASE("Imperial", "quarter", 2.909498880000000E-01, "m3", "L3", "1.0");
   dry["standard-cubic-foot"] = UBASE("Imperial", "standard-cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["ft3(STP)"] = UBASE("Imperial", "ft3(STP)", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["tablespoon(metric)"] = UBASE("Imperial", "tablespoon(metric)", 1.500000000000000E-05, "m3", "L3", "1.0");
   dry["tbsp(metric)"] = UBASE("Imperial", "tbsp(metric)", 1.500000000000000E-05, "m3", "L3", "1.0");
   dry["timber"] = UBASE("Imperial", "timber", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["twenty-foot-equivalent-unit"] = UBASE("Imperial", "twenty-foot-equivalent-unit", 3.624556363776000E+01, "m3", "L3", "1.0");
   dry["TEU"] = UBASE("Imperial", "TEU", 3.624556363776000E+01, "m3", "L3", "1.0");
   dry["TEQ"] = UBASE("Imperial", "TEQ", 3.624556363776000E+01, "m3", "L3", "1.0");
   _map["Imperial"] = BaseSystem("Imperial", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit49(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["beesa(Calcutta)"] = UBASE("Indian", "beesa(Calcutta)", 5.337500000000000E+01, "m", "L", "1.0");
   length["angula"] = UBASE("Indian", "angula", 1.904166666666670E-02, "m", "L", "1.0");
   length["anguli(Bombay)"] = UBASE("Indian", "anguli(Bombay)", 4.286250000000000E-02, "m", "L", "1.0");
   length["anguli(Calcutta)"] = UBASE("Indian", "anguli(Calcutta)", 5.718750000000000E-02, "m", "L", "1.0");
   length["beesa(Bombay)"] = UBASE("Indian", "beesa(Bombay)", 4.000500000000000E+01, "m", "L", "1.0");
   length["begah(Bombay)"] = UBASE("Indian", "begah(Bombay)", 8.001000000000000E+02, "m", "L", "1.0");
   length["begah(Calcutta)"] = UBASE("Indian", "begah(Calcutta)", 1.067500000000000E+03, "m", "L", "1.0");
   length["coss(Bombay)"] = UBASE("Indian", "coss(Bombay)", 1.371600000000000E+03, "m", "L", "1.0");
   length["coss(Calcutta)"] = UBASE("Indian", "coss(Calcutta)", 1.830000000000000E+03, "m", "L", "1.0");
   length["covid(Bombay)"] = UBASE("Indian", "covid(Bombay)", 3.429000000000000E-01, "m", "L", "1.0");
   length["covid(Calcutta)"] = UBASE("Indian", "covid(Calcutta)", 4.575000000000000E-01, "m", "L", "1.0");
   length["crosa"] = UBASE("Indian", "crosa", 3.656000000000000E+03, "m", "L", "1.0");
   length["cubit"] = UBASE("Indian", "cubit", 4.570000000000000E-01, "m", "L", "1.0");
   length["danda(Bombay)"] = UBASE("Indian", "danda(Bombay)", 1.371600000000000E+00, "m", "L", "1.0");
   length["danda(Calcutta)"] = UBASE("Indian", "danda(Calcutta)", 1.830000000000000E+00, "m", "L", "1.0");
   length["dhanush"] = UBASE("Indian", "dhanush", 1.828000000000000E+00, "m", "L", "1.0");
   length["finger"] = UBASE("Indian", "finger", 1.904166666666670E-02, "m", "L", "1.0");
   length["gavyuti"] = UBASE("Indian", "gavyuti", 7.312000000000000E+03, "m", "L", "1.0");
   length["gaz(Bombay)"] = UBASE("Indian", "gaz(Bombay)", 6.858000000000000E-01, "m", "L", "1.0");
   length["gaz(Calcutta)"] = UBASE("Indian", "gaz(Calcutta)", 9.150000000000000E-01, "m", "L", "1.0");
   length["girah(Bombay)"] = UBASE("Indian", "girah(Bombay)", 4.286250000000000E-02, "m", "L", "1.0");
   length["girah(Calcutta)"] = UBASE("Indian", "girah(Calcutta)", 5.718750000000000E-02, "m", "L", "1.0");
   length["guz(Bombay)"] = UBASE("Indian", "guz(Bombay)", 6.858000000000000E-01, "m", "L", "1.0");
   length["guz(Calcutta)"] = UBASE("Indian", "guz(Calcutta)", 9.150000000000000E-01, "m", "L", "1.0");
   length["hasta"] = UBASE("Indian", "hasta", 4.570000000000000E-01, "m", "L", "1.0");
   length["hath(Bombay)"] = UBASE("Indian", "hath(Bombay)", 3.429000000000000E-01, "m", "L", "1.0");
   length["hath(Calcutta)"] = UBASE("Indian", "hath(Calcutta)", 4.575000000000000E-01, "m", "L", "1.0");
   length["jaob(Bombay)"] = UBASE("Indian", "jaob(Bombay)", 4.762500000000000E-03, "m", "L", "1.0");
   length["jaob(Calcutta)"] = UBASE("Indian", "jaob(Calcutta)", 6.354166666666670E-03, "m", "L", "1.0");
   length["jow(Bombay)"] = UBASE("Indian", "jow(Bombay)", 4.762500000000000E-03, "m", "L", "1.0");
   length["jow(Calcutta)"] = UBASE("Indian", "jow(Calcutta)", 6.354166666666670E-03, "m", "L", "1.0");
   length["kan(Bombay)"] = UBASE("Indian", "kan(Bombay)", 3.771900000000000E+00, "m", "L", "1.0");
   length["kan(Calcutta)"] = UBASE("Indian", "kan(Calcutta)", 5.032500000000000E+00, "m", "L", "1.0");
   length["karam(Bombay)"] = UBASE("Indian", "karam(Bombay)", 1.257300000000000E+00, "m", "L", "1.0");
   length["karam(Calcutta)"] = UBASE("Indian", "karam(Calcutta)", 1.677500000000000E+00, "m", "L", "1.0");
   length["kathi(Bombay)"] = UBASE("Indian", "kathi(Bombay)", 2.000250000000000E+00, "m", "L", "1.0");
   length["kathi(Calcutta)"] = UBASE("Indian", "kathi(Calcutta)", 2.668750000000000E+00, "m", "L", "1.0");
   length["moot(Bombay)"] = UBASE("Indian", "moot(Bombay)", 5.715000000000000E-02, "m", "L", "1.0");
   length["moot(Calcutta)"] = UBASE("Indian", "moot(Calcutta)", 7.625000000000000E-02, "m", "L", "1.0");
   length["niranga(Bombay)"] = UBASE("Indian", "niranga(Bombay)", 6.858000000000000E+00, "m", "L", "1.0");
   length["niranga(Calcutta)"] = UBASE("Indian", "niranga(Calcutta)", 9.150000000000000E+00, "m", "L", "1.0");
   length["orgyla"] = UBASE("Indian", "orgyla", 1.828000000000000E+00, "m", "L", "1.0");
   length["pally"] = UBASE("Indian", "pally", 5.505000000000000E-03, "m", "L", "1.0");
   length["pand(Bombay)"] = UBASE("Indian", "pand(Bombay)", 4.000500000000000E+01, "m", "L", "1.0");
   length["pand(Calcutta)"] = UBASE("Indian", "pand(Calcutta)", 5.337500000000000E+01, "m", "L", "1.0");
   length["span(Bombay)"] = UBASE("Indian", "span(Bombay)", 1.714500000000000E-01, "m", "L", "1.0");
   length["span(Calcutta)"] = UBASE("Indian", "span(Calcutta)", 2.287500000000000E-01, "m", "L", "1.0");
   length["span(vistati)"] = UBASE("Indian", "span(vistati)", 2.285000000000000E-01, "m", "L", "1.0");
   length["tassoos(Bombay)"] = UBASE("Indian", "tassoos(Bombay)", 2.857500000000000E-02, "m", "L", "1.0");
   length["tassoos(Calcutta)"] = UBASE("Indian", "tassoos(Calcutta)", 3.812500000000000E-02, "m", "L", "1.0");
   length["unglee(Bombay)"] = UBASE("Indian", "unglee(Bombay)", 1.428750000000000E-02, "m", "L", "1.0");
   length["unglee(Calcutta)"] = UBASE("Indian", "unglee(Calcutta)", 1.906250000000000E-02, "m", "L", "1.0");
   length["vistati"] = UBASE("Indian", "vistati", 2.285000000000000E-01, "m", "L", "1.0");
   length["yodjana"] = UBASE("Indian", "yodjana", 1.462400000000000E+04, "m", "L", "1.0");
   area["begah(Bombay)"] = UBASE("Indian", "begah(Bombay)", 7.525146240000000E+02, "m2", "L2", "1.0");
   area["begah(Calcutta)"] = UBASE("Indian", "begah(Calcutta)", 1.339560000000000E+03, "m2", "L2", "1.0");
   area["biggah(Bombay)"] = UBASE("Indian", "biggah(Bombay)", 7.525146240000000E+02, "m2", "L2", "1.0");
   area["biggah(Calcutta)"] = UBASE("Indian", "biggah(Calcutta)", 1.339560000000000E+03, "m2", "L2", "1.0");
   area["bigha(Bangladesh)"] = UBASE("Indian", "bigha(Bangladesh)", 1.337803776000000E+03, "m2", "L2", "1.0");
   area["bigha"] = UBASE("Indian", "bigha", 2.529285264000000E+03, "m2", "L2", "1.0");
   area["cawney"] = UBASE("Indian", "cawney", 5.395808563200000E+03, "m2", "L2", "1.0");
   area["cawnie"] = UBASE("Indian", "cawnie", 5.400000000000000E+02, "m2", "L2", "1.0");
   area["chahar"] = UBASE("Indian", "chahar", 2.962000000000000E-02, "m2", "L2", "1.0");
   area["chattack(Bombay)"] = UBASE("Indian", "chattack(Bombay)", 2.351608200000000E+00, "m2", "L2", "1.0");
   area["chattack(Calcutta)"] = UBASE("Indian", "chattack(Calcutta)", 4.186125000000000E+00, "m2", "L2", "1.0");
   area["cottah(Bombay)"] = UBASE("Indian", "cottah(Bombay)", 3.762573120000000E+01, "m2", "L2", "1.0");
   area["cottah(Calcutta)"] = UBASE("Indian", "cottah(Calcutta)", 6.697800000000000E+01, "m2", "L2", "1.0");
   area["ghamaon(Bombay)"] = UBASE("Indian", "ghamaon(Bombay)", 1.505029248000000E+03, "m2", "L2", "1.0");
   area["ghamaon(Calcutta)"] = UBASE("Indian", "ghamaon(Calcutta)", 2.679120000000000E+03, "m2", "L2", "1.0");
   area["ground"] = UBASE("Indian", "ground", 2.030000000000000E+01, "m2", "L2", "1.0");
   area["kanal(Bombay)"] = UBASE("Indian", "kanal(Bombay)", 1.881286560000000E+02, "m2", "L2", "1.0");
   area["kanal(Calcutta)"] = UBASE("Indian", "kanal(Calcutta)", 3.348900000000000E+02, "m2", "L2", "1.0");
   area["kani"] = UBASE("Indian", "kani", 3.075000000000000E+02, "m2", "L2", "1.0");
   area["marla(Bombay)"] = UBASE("Indian", "marla(Bombay)", 9.406432800000000E+00, "m2", "L2", "1.0");
   area["marla(Calcutta)"] = UBASE("Indian", "marla(Calcutta)", 1.674450000000000E+01, "m2", "L2", "1.0");
   area["square-guz(Bombay)"] = UBASE("Indian", "square-guz(Bombay)", 4.703216400000000E-01, "m2", "L2", "1.0");
   area["square-guz(Calcutta)"] = UBASE("Indian", "square-guz(Calcutta)", 8.372250000000000E-01, "m2", "L2", "1.0");
   area["tenab(Bombay)"] = UBASE("Indian", "tenab(Bombay)", 1.175804100000000E+03, "m2", "L2", "1.0");
   area["tenab(Calcutta)"] = UBASE("Indian", "tenab(Calcutta)", 2.093062500000000E+03, "m2", "L2", "1.0");
   mass["achita"] = UBASE("Indian", "achita", 9.400000000000000E+02, "kg", "M", "1.0");
   mass["adha"] = UBASE("Indian", "adha", 4.665200000000000E-01, "kg", "M", "1.0");
   mass["adhaka"] = UBASE("Indian", "adhaka", 3.300000000000000E+00, "kg", "M", "1.0");
   mass["adher"] = UBASE("Indian", "adher", 4.665200000000000E-01, "kg", "M", "1.0");
   mass["adh-pav"] = UBASE("Indian", "adh-pav", 1.166300000000000E-01, "kg", "M", "1.0");
   mass["baha"] = UBASE("Indian", "baha", 2.640000000000000E+03, "kg", "M", "1.0");
   mass["bale"] = UBASE("Indian", "bale", 1.814369480000000E+02, "kg", "M", "1.0");
   mass["bara"] = UBASE("Indian", "bara", 9.400000000000000E+01, "kg", "M", "1.0");
   mass["bazar"] = UBASE("Indian", "bazar", 3.732160000000000E+01, "kg", "M", "1.0");
   mass["bhari"] = UBASE("Indian", "bhari", 1.166300000000000E-02, "kg", "M", "1.0");
   mass["candy"] = UBASE("Indian", "candy", 7.464320000000000E+02, "kg", "M", "1.0");
   mass["chawal"] = UBASE("Indian", "chawal", 7.593098958333330E-06, "kg", "M", "1.0");
   mass["chhataank"] = UBASE("Indian", "chhataank", 5.831500000000000E-02, "kg", "M", "1.0");
   mass["chittak"] = UBASE("Indian", "chittak", 5.831500000000000E-02, "kg", "M", "1.0");
   mass["cudava"] = UBASE("Indian", "cudava", 4.125000000000000E-01, "kg", "M", "1.0");
   mass["cumbha"] = UBASE("Indian", "cumbha", 2.640000000000000E+02, "kg", "M", "1.0");
   mass["cumbha(short)"] = UBASE("Indian", "cumbha(short)", 2.640000000000000E+01, "kg", "M", "1.0");
   mass["das"] = UBASE("Indian", "das", 9.330400000000000E+00, "kg", "M", "1.0");
   mass["daseri"] = UBASE("Indian", "daseri", 9.330400000000000E+00, "kg", "M", "1.0");
   mass["dhai"] = UBASE("Indian", "dhai", 2.332600000000000E+00, "kg", "M", "1.0");
   mass["dhan"] = UBASE("Indian", "dhan", 3.037239583333330E-05, "kg", "M", "1.0");
   mass["dharana"] = UBASE("Indian", "dharana", 4.700000000000000E-03, "kg", "M", "1.0");
   mass["dhaser"] = UBASE("Indian", "dhaser", 2.332600000000000E+00, "kg", "M", "1.0");
   mass["dhurra"] = UBASE("Indian", "dhurra", 4.665200000000000E+00, "kg", "M", "1.0");
   mass["drona"] = UBASE("Indian", "drona", 1.320000000000000E+01, "kg", "M", "1.0");
   mass["fally"] = UBASE("Indian", "fally", 4.665200000000000E+00, "kg", "M", "1.0");
   mass["hara"] = UBASE("Indian", "hara", 9.400000000000000E+00, "kg", "M", "1.0");
   mass["kancha"] = UBASE("Indian", "kancha", 1.457875000000000E-02, "kg", "M", "1.0");
   mass["kharsha"] = UBASE("Indian", "kharsha", 1.410000000000000E-02, "kg", "M", "1.0");
   mass["kona"] = UBASE("Indian", "kona", 7.050000000000000E-03, "kg", "M", "1.0");
   mass["masha"] = UBASE("Indian", "masha", 9.719166666666670E-04, "kg", "M", "1.0");
   mass["masha(old)"] = UBASE("Indian", "masha(old)", 8.812500000000000E-04, "kg", "M", "1.0");
   mass["maund"] = UBASE("Indian", "maund", 3.732160000000000E+01, "kg", "M", "1.0");
   mass["musti"] = UBASE("Indian", "musti", 5.156250000000000E-02, "kg", "M", "1.0");
   mass["pala(old)"] = UBASE("Indian", "pala(old)", 4.700000000000000E-02, "kg", "M", "1.0");
   mass["pala"] = UBASE("Indian", "pala", 5.156250000000000E-02, "kg", "M", "1.0");
   mass["panch"] = UBASE("Indian", "panch", 4.665200000000000E+00, "kg", "M", "1.0");
   mass["parah"] = UBASE("Indian", "parah", 3.110133333333330E-02, "kg", "M", "1.0");
   mass["paseri"] = UBASE("Indian", "paseri", 4.665200000000000E+00, "kg", "M", "1.0");
   mass["pav"] = UBASE("Indian", "pav", 2.332600000000000E-01, "kg", "M", "1.0");
   mass["pince"] = UBASE("Indian", "pince", 3.110133333333330E-02, "kg", "M", "1.0");
   mass["powa"] = UBASE("Indian", "powa", 2.332600000000000E-01, "kg", "M", "1.0");
   mass["prastha"] = UBASE("Indian", "prastha", 8.250000000000000E-01, "kg", "M", "1.0");
   mass["raik"] = UBASE("Indian", "raik", 1.166300000000000E+00, "kg", "M", "1.0");
   mass["ratica"] = UBASE("Indian", "ratica", 1.468750000000000E-04, "kg", "M", "1.0");
   mass["ratti"] = UBASE("Indian", "ratti", 1.214895833333330E-04, "kg", "M", "1.0");
   mass["retti"] = UBASE("Indian", "retti", 1.468750000000000E-04, "kg", "M", "1.0");
   mass["ruttee"] = UBASE("Indian", "ruttee", 1.214895833333330E-04, "kg", "M", "1.0");
   mass["sava"] = UBASE("Indian", "sava", 1.166300000000000E+00, "kg", "M", "1.0");
   mass["savaser"] = UBASE("Indian", "savaser", 1.166300000000000E+00, "kg", "M", "1.0");
   mass["seer"] = UBASE("Indian", "seer", 9.330400000000000E-01, "kg", "M", "1.0");
   mass["seer(SA)"] = UBASE("Indian", "seer(SA)", 9.331075439455000E-01, "kg", "M", "1.0");
   mass["ser"] = UBASE("Indian", "ser", 9.330400000000000E-01, "kg", "M", "1.0");
   mass["shari"] = UBASE("Indian", "shari", 2.112000000000000E+02, "kg", "M", "1.0");
   mass["sicca"] = UBASE("Indian", "sicca", 1.166300000000000E-02, "kg", "M", "1.0");
   mass["siki"] = UBASE("Indian", "siki", 2.915750000000000E-03, "kg", "M", "1.0");
   mass["tak"] = UBASE("Indian", "tak", 2.915750000000000E-03, "kg", "M", "1.0");
   mass["tank"] = UBASE("Indian", "tank", 1.295888888888890E-02, "kg", "M", "1.0");
   mass["tank-sala"] = UBASE("Indian", "tank-sala", 2.643750000000000E-03, "kg", "M", "1.0");
   mass["tola"] = UBASE("Indian", "tola", 1.175000000000000E-02, "kg", "M", "1.0");
   mass["tolah"] = UBASE("Indian", "tolah", 1.166300000000000E-02, "kg", "M", "1.0");
   mass["tuba"] = UBASE("Indian", "tuba", 4.700000000000000E+00, "kg", "M", "1.0");
   mass["yava"] = UBASE("Indian", "yava", 1.468750000000000E-05, "kg", "M", "1.0");
   liquid["adoulie"] = UBASE("Indian", "adoulie", 6.881250000000000E-03, "m3", "L3", "1.0");
   liquid["candy"] = UBASE("Indian", "candy", 8.808000000000000E-01, "m3", "L3", "1.0");
   liquid["chattack"] = UBASE("Indian", "chattack", 6.881250000000000E-05, "m3", "L3", "1.0");
   liquid["chhataank"] = UBASE("Indian", "chhataank", 1.075195312500000E-04, "m3", "L3", "1.0");
   liquid["garce"] = UBASE("Indian", "garce", 8.808000000000000E+00, "m3", "L3", "1.0");
   liquid["khahoon"] = UBASE("Indian", "khahoon", 1.761600000000000E+00, "m3", "L3", "1.0");
   liquid["khoonke"] = UBASE("Indian", "khoonke", 8.601562500000000E-05, "m3", "L3", "1.0");
   liquid["kunk"] = UBASE("Indian", "kunk", 3.440625000000000E-04, "m3", "L3", "1.0");
   liquid["mapte"] = UBASE("Indian", "mapte", 5.000000000000000E-04, "m3", "L3", "1.0");
   liquid["maund"] = UBASE("Indian", "maund", 6.881250000000000E-02, "m3", "L3", "1.0");
   liquid["pally"] = UBASE("Indian", "pally", 5.505000000000000E-03, "m3", "L3", "1.0");
   liquid["parah"] = UBASE("Indian", "parah", 1.101000000000000E-01, "m3", "L3", "1.0");
   liquid["pav"] = UBASE("Indian", "pav", 4.300781250000000E-04, "m3", "L3", "1.0");
   liquid["raik"] = UBASE("Indian", "raik", 1.376250000000000E-03, "m3", "L3", "1.0");
   liquid["seer"] = UBASE("Indian", "seer", 1.720312500000000E-03, "m3", "L3", "1.0");
   liquid["soally"] = UBASE("Indian", "soally", 1.101000000000000E-01, "m3", "L3", "1.0");
   liquid["tipree"] = UBASE("Indian", "tipree", 8.601562500000000E-04, "m3", "L3", "1.0");
   dry["adhaka"] = UBASE("Indian", "adhaka", 3.300000000000000E-03, "m3", "L3", "1.0");
   dry["baha"] = UBASE("Indian", "baha", 2.640000000000000E+00, "m3", "L3", "1.0");
   dry["chipte"] = UBASE("Indian", "chipte", 1.250000000000000E-04, "m3", "L3", "1.0");
   dry["cudava"] = UBASE("Indian", "cudava", 4.125000000000000E-04, "m3", "L3", "1.0");
   dry["cumbha"] = UBASE("Indian", "cumbha", 2.640000000000000E-01, "m3", "L3", "1.0");
   dry["drona"] = UBASE("Indian", "drona", 1.320000000000000E-02, "m3", "L3", "1.0");
   dry["kolve"] = UBASE("Indian", "kolve", 6.250000000000000E-05, "m3", "L3", "1.0");
   dry["nilve"] = UBASE("Indian", "nilve", 3.125000000000000E-05, "m3", "L3", "1.0");
   dry["pala"] = UBASE("Indian", "pala", 5.156250000000000E-05, "m3", "L3", "1.0");
   dry["prastha"] = UBASE("Indian", "prastha", 8.250000000000000E-04, "m3", "L3", "1.0");
   dry["seer"] = UBASE("Indian", "seer", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["ser"] = UBASE("Indian", "ser", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["shari"] = UBASE("Indian", "shari", 2.112000000000000E-01, "m3", "L3", "1.0");
   dry["shon-cumbha"] = UBASE("Indian", "shon-cumbha", 2.640000000000000E-02, "m3", "L3", "1.0");
   dry["musti"] = UBASE("Indian", "musti", 5.156250000000000E-05, "m3", "L3", "1.0");
   _map["Indian"] = BaseSystem("Indian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit50(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["depa"] = UBASE("Indonesian", "depa", 1.700000000000000E+00, "m", "L", "1.0");
   length["hasta"] = UBASE("Indonesian", "hasta", 4.250000000000000E-01, "m", "L", "1.0");
   length["kilan"] = UBASE("Indonesian", "kilan", 2.125000000000000E-01, "m", "L", "1.0");
   area["bahoe"] = UBASE("Indonesian", "bahoe", 7.096500000000000E+03, "m2", "L2", "1.0");
   mass["amat"] = UBASE("Indonesian", "amat", 1.235226050000000E+02, "kg", "M", "1.0");
   mass["bahar(long)"] = UBASE("Indonesian", "bahar(long)", 2.779258612500000E+02, "kg", "M", "1.0");
   mass["bahar(short)"] = UBASE("Indonesian", "bahar(short)", 1.852839075000000E+02, "kg", "M", "1.0");
   mass["catty"] = UBASE("Indonesian", "catty", 6.176130250000000E-01, "kg", "M", "1.0");
   mass["hoen"] = UBASE("Indonesian", "hoen", 3.860100000000000E-02, "kg", "M", "1.0");
   mass["kabi"] = UBASE("Indonesian", "kabi", 6.176130250000000E-01, "kg", "M", "1.0");
   mass["kojang(Batavia)"] = UBASE("Indonesian", "kojang(Batavia)", 1.667555167500000E+03, "kg", "M", "1.0");
   mass["kojang(Semarang)"] = UBASE("Indonesian", "kojang(Semarang)", 1.729316470000000E+03, "kg", "M", "1.0");
   mass["kojang(Soerabaya)"] = UBASE("Indonesian", "kojang(Soerabaya)", 1.852839075000000E+03, "kg", "M", "1.0");
   mass["kulack"] = UBASE("Indonesian", "kulack", 4.477694431250000E+00, "kg", "M", "1.0");
   mass["picul"] = UBASE("Indonesian", "picul", 6.176130250000000E+01, "kg", "M", "1.0");
   mass["pikol"] = UBASE("Indonesian", "pikol", 6.176130250000000E+01, "kg", "M", "1.0");
   mass["real"] = UBASE("Indonesian", "real", 1.930040703125000E-02, "kg", "M", "1.0");
   mass["soekoe"] = UBASE("Indonesian", "soekoe", 4.825101757812500E-03, "kg", "M", "1.0");
   mass["soekoe(precious-metal)"] = UBASE("Indonesian", "soekoe(precious-metal)", 6.761250000000000E+00, "kg", "M", "1.0");
   mass["tael"] = UBASE("Indonesian", "tael", 3.860081406250000E-02, "kg", "M", "1.0");
   mass["tali"] = UBASE("Indonesian", "tali", 2.412550878906250E-03, "kg", "M", "1.0");
   mass["tali(precious-metal)"] = UBASE("Indonesian", "tali(precious-metal)", 3.380625000000000E+00, "kg", "M", "1.0");
   mass["thail"] = UBASE("Indonesian", "thail", 3.860081406250000E-02, "kg", "M", "1.0");
   mass["thail(opium)"] = UBASE("Indonesian", "thail(opium)", 3.860100000000000E+01, "kg", "M", "1.0");
   mass["thail(precious-metal)"] = UBASE("Indonesian", "thail(precious-metal)", 5.409000000000000E+01, "kg", "M", "1.0");
   mass["timbang"] = UBASE("Indonesian", "timbang", 3.088065125000000E+02, "kg", "M", "1.0");
   mass["tjembang-mata"] = UBASE("Indonesian", "tjembang-mata", 3.860100000000000E-02, "kg", "M", "1.0");
   mass["tji"] = UBASE("Indonesian", "tji", 3.860100000000000E+00, "kg", "M", "1.0");
   mass["wang"] = UBASE("Indonesian", "wang", 8.041836263020830E-04, "kg", "M", "1.0");
   liquid["kan"] = UBASE("Indonesian", "kan", 1.575100000000000E-03, "m3", "L3", "1.0");
   liquid["kit"] = UBASE("Indonesian", "kit", 1.496345000000000E-02, "m3", "L3", "1.0");
   liquid["koelak"] = UBASE("Indonesian", "koelak", 3.740862500000000E-03, "m3", "L3", "1.0");
   liquid["kojang"] = UBASE("Indonesian", "kojang", 1.984153470000000E+00, "m3", "L3", "1.0");
   liquid["mutsje"] = UBASE("Indonesian", "mutsje", 1.514519230769230E-04, "m3", "L3", "1.0");
   liquid["picul"] = UBASE("Indonesian", "picul", 6.613844900000000E-02, "m3", "L3", "1.0");
   liquid["pintje"] = UBASE("Indonesian", "pintje", 7.572596153846150E-05, "m3", "L3", "1.0");
   liquid["takar"] = UBASE("Indonesian", "takar", 2.543786500000000E-02, "m3", "L3", "1.0");
   dry["cubic-depa"] = UBASE("Indonesian", "cubic-depa", 4.913000000000000E+00, "m3", "L3", "1.0");
   _map["Indonesian"] = BaseSystem("Indonesian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit51(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["angstrom"] = UBASE("INT", "angstrom", 1.000000000000000E-10, "m", "L", "1.0");
   length["A"] = UBASE("INT", "A", 1.000000000000000E-10, "m", "L", "1.0");
   length["cable-length"] = UBASE("INT", "cable-length", 1.852000000000000E+02, "m", "L", "1.0");
   length["french"] = UBASE("INT", "french", 3.333333333333330E-04, "m", "L", "1.0");
   length["lap"] = UBASE("INT", "lap", 4.000000000000000E+02, "m", "L", "1.0");
   length["league"] = UBASE("INT", "league", 5.556000000000000E+03, "m", "L", "1.0");
   length["leag"] = UBASE("INT", "leag", 5.556000000000000E+03, "m", "L", "1.0");
   length["leagues"] = UBASE("INT", "leagues", 5.556000000000000E+03, "m", "L", "1.0");
   length["marathon"] = UBASE("INT", "marathon", 4.219498800000000E+04, "m", "L", "1.0");
   length["mile"] = UBASE("INT", "mile", 1.609344000000000E+03, "m", "L", "1.0");
   length["mi"] = UBASE("INT", "mi", 1.609344000000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("INT", "miles", 1.609344000000000E+03, "m", "L", "1.0");
   length["nautical-mile(int)"] = UBASE("INT", "nautical-mile(int)", 1.852000000000000E+03, "m", "L", "1.0");
   length["nmi(int)"] = UBASE("INT", "nmi(int)", 1.852000000000000E+03, "m", "L", "1.0");
   length["mile(telegraph)"] = UBASE("INT", "mile(telegraph)", 1.855317600000000E+03, "m", "L", "1.0");
   length["mi(tel)"] = UBASE("INT", "mi(tel)", 1.855317600000000E+03, "m", "L", "1.0");
   length["nautical-mile"] = UBASE("INT", "nautical-mile", 1.852000000000000E+03, "m", "L", "1.0");
   length["nmi"] = UBASE("INT", "nmi", 1.852000000000000E+03, "m", "L", "1.0");
   length["nautical-miles"] = UBASE("INT", "nautical-miles", 1.852000000000000E+03, "m", "L", "1.0");
   length["pica(ATA)"] = UBASE("INT", "pica(ATA)", 4.217517642175180E-02, "m", "L", "1.0");
   length["pica(computer)"] = UBASE("INT", "pica(computer)", 4.233333333333330E-03, "m", "L", "1.0");
   length["pica(Postscript)"] = UBASE("INT", "pica(Postscript)", 4.233333333333330E-03, "m", "L", "1.0");
   length["pica(TeX)"] = UBASE("INT", "pica(TeX)", 4.217517642175180E-03, "m", "L", "1.0");
   length["point(ATA)"] = UBASE("INT", "point(ATA)", 3.514598035145980E-03, "m", "L", "1.0");
   length["point(computer)"] = UBASE("INT", "point(computer)", 3.527777777777780E-04, "m", "L", "1.0");
   length["pt"] = UBASE("INT", "pt", 3.527777777777780E-04, "m", "L", "1.0");
   length["point(Postscript)"] = UBASE("INT", "point(Postscript)", 3.527777777777780E-04, "m", "L", "1.0");
   length["point(TeX)"] = UBASE("INT", "point(TeX)", 3.514598035145980E-04, "m", "L", "1.0");
   length["quadrant"] = UBASE("INT", "quadrant", 1.000000000000000E+07, "m", "L", "1.0");
   length["siegbahn-unit"] = UBASE("INT", "siegbahn-unit", 1.000207789700000E-13, "m", "L", "1.0");
   length["x-unit"] = UBASE("INT", "x-unit", 1.000207789700000E-13, "m", "L", "1.0");
   length["CuKa1"] = UBASE("INT", "CuKa1", 1.000207789700000E-13, "m", "L", "1.0");
   length["X"] = UBASE("INT", "X", 1.000207789700000E-13, "m", "L", "1.0");
   length["Ux"] = UBASE("INT", "Ux", 1.000207789700000E-13, "m", "L", "1.0");
   area["circular-mile"] = UBASE("INT", "circular-mile", 2.034171905079120E+06, "m2", "L2", "1.0");
   area["cmi"] = UBASE("INT", "cmi", 2.034171905079120E+06, "m2", "L2", "1.0");
   area["cir-mi"] = UBASE("INT", "cir-mi", 2.034171905079120E+06, "m2", "L2", "1.0");
   area["circular-mile(nautical)"] = UBASE("INT", "circular-mile(nautical)", 2.693840302229560E+06, "m2", "L2", "1.0");
   area["cmi(nautical)"] = UBASE("INT", "cmi(nautical)", 2.693840302229560E+06, "m2", "L2", "1.0");
   area["cir-mi(nautical)"] = UBASE("INT", "cir-mi(nautical)", 2.693840302229560E+06, "m2", "L2", "1.0");
   area["square-league(nautical)"] = UBASE("INT", "square-league(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0");
   area["sq-leag(nautical)"] = UBASE("INT", "sq-leag(nautical)", 3.086913600000000E+07, "m2", "L2", "1.0");
   area["square-mile"] = UBASE("INT", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["sq-mi"] = UBASE("INT", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["mi2"] = UBASE("INT", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-miles"] = UBASE("INT", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-mile(nautical)"] = UBASE("INT", "square-mile(nautical)", 3.429904000000000E+06, "m2", "L2", "1.0");
   area["sq-mi(nautical)"] = UBASE("INT", "sq-mi(nautical)", 3.429904000000000E+06, "m2", "L2", "1.0");
   mass["carat(metric)"] = UBASE("INT", "carat(metric)", 2.000000000000000E-04, "kg", "M", "1.0");
   mass["ct"] = UBASE("INT", "ct", 2.000000000000000E-04, "kg", "M", "1.0");
   mass["carat(old)"] = UBASE("INT", "carat(old)", 2.053000000000000E-04, "kg", "M", "1.0");
   mass["ct(old)"] = UBASE("INT", "ct(old)", 2.053000000000000E-04, "kg", "M", "1.0");
   mass["flask-of-mercury"] = UBASE("INT", "flask-of-mercury", 3.447302012000000E+01, "kg", "M", "1.0");
   mass["Hg-flask"] = UBASE("INT", "Hg-flask", 3.447302012000000E+01, "kg", "M", "1.0");
   liquid["blood-unit"] = UBASE("INT", "blood-unit", 4.500000000000000E-04, "m3", "L3", "1.0");
   liquid["liter(1964)"] = UBASE("INT", "liter(1964)", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["L(1964)"] = UBASE("INT", "L(1964)", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["l(1964)"] = UBASE("INT", "l(1964)", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["normal-cubic-meter"] = UBASE("INT", "normal-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   liquid["m3(NTP)"] = UBASE("INT", "m3(NTP)", 1.000000000000000E+00, "m3", "L3", "1.0");
   liquid["Nm3"] = UBASE("INT", "Nm3", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubem"] = UBASE("INT", "cubem", 4.168206834631570E+09, "m3", "L3", "1.0");
   dry["cuMi"] = UBASE("INT", "cuMi", 4.168206834631570E+09, "m3", "L3", "1.0");
   dry["standard-cubic-foot"] = UBASE("INT", "standard-cubic-foot", 2.741985888621430E-02, "m3", "L3", "1.0");
   dry["ft3(STP)"] = UBASE("INT", "ft3(STP)", 2.741985888621430E-02, "m3", "L3", "1.0");
   dry["standard-cubic-meter"] = UBASE("INT", "standard-cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["m3(STP)"] = UBASE("INT", "m3(STP)", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["standard-cubic-meter(old)"] = UBASE("INT", "standard-cubic-meter(old)", 9.161495891329870E-01, "m3", "L3", "1.0");
   dry["m3(STP-old)"] = UBASE("INT", "m3(STP-old)", 9.161495891329870E-01, "m3", "L3", "1.0");
   _map["INT"] = BaseSystem("INT", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit52(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["bas"] = UBASE("Irish", "bas", 8.333333333333330E-02, "m", "L", "1.0");
   length["ceim"] = UBASE("Irish", "ceim", 6.250000000000000E-01, "m", "L", "1.0");
   length["chain"] = UBASE("Irish", "chain", 2.560320000000000E+01, "m", "L", "1.0");
   length["cubit"] = UBASE("Irish", "cubit", 4.572000000000000E-01, "m", "L", "1.0");
   length["deisceim"] = UBASE("Irish", "deisceim", 1.500000000000000E+00, "m", "L", "1.0");
   length["dorn(1/2)"] = UBASE("Irish", "dorn(1/2)", 1.250000000000000E-01, "m", "L", "1.0");
   length["dorn(5/12)"] = UBASE("Irish", "dorn(5/12)", 1.041666666666670E-01, "m", "L", "1.0");
   length["fathom"] = UBASE("Irish", "fathom", 4.267200000000000E+00, "m", "L", "1.0");
   length["fathoms"] = UBASE("Irish", "fathoms", 4.267200000000000E+00, "m", "L", "1.0");
   length["fertach"] = UBASE("Irish", "fertach", 3.000000000000000E+00, "m", "L", "1.0");
   length["foot"] = UBASE("Irish", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Irish", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["forrach"] = UBASE("Irish", "forrach", 3.600000000000000E+01, "m", "L", "1.0");
   length["furlong"] = UBASE("Irish", "furlong", 2.560320000000000E+02, "m", "L", "1.0");
   length["furlongs"] = UBASE("Irish", "furlongs", 2.560320000000000E+02, "m", "L", "1.0");
   length["gran"] = UBASE("Irish", "gran", 6.944444444444440E-03, "m", "L", "1.0");
   length["inch"] = UBASE("Irish", "inch", 2.540000000000000E-02, "m", "L", "1.0");
   length["inches"] = UBASE("Irish", "inches", 2.540000000000000E-02, "m", "L", "1.0");
   length["link"] = UBASE("Irish", "link", 2.560320000000000E+00, "m", "L", "1.0");
   length["mile"] = UBASE("Irish", "mile", 2.048560800000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("Irish", "miles", 2.048560800000000E+03, "m", "L", "1.0");
   length["ordlach"] = UBASE("Irish", "ordlach", 2.083333333333330E-02, "m", "L", "1.0");
   length["pace"] = UBASE("Irish", "pace", 1.524000000000000E+00, "m", "L", "1.0");
   length["palm"] = UBASE("Irish", "palm", 7.620000000000000E-02, "m", "L", "1.0");
   length["perch"] = UBASE("Irish", "perch", 6.400800000000000E+00, "m", "L", "1.0");
   length["span"] = UBASE("Irish", "span", 2.286000000000000E-01, "m", "L", "1.0");
   length["troighid"] = UBASE("Irish", "troighid", 2.500000000000000E-01, "m", "L", "1.0");
   length["yard"] = UBASE("Irish", "yard", 9.144000000000000E-01, "m", "L", "1.0");
   length["yards"] = UBASE("Irish", "yards", 9.144000000000000E-01, "m", "L", "1.0");
   area["achar"] = UBASE("Irish", "achar", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["acre"] = UBASE("Irish", "acre", 6.527187778064520E+03, "m2", "L2", "1.0");
   area["ac"] = UBASE("Irish", "ac", 6.527187778064520E+03, "m2", "L2", "1.0");
   area["acres"] = UBASE("Irish", "acres", 6.527187778064520E+03, "m2", "L2", "1.0");
   area["baile"] = UBASE("Irish", "baile", 5.827473248256000E+06, "m2", "L2", "1.0");
   area["seisrech"] = UBASE("Irish", "seisrech", 4.856227706880000E+05, "m2", "L2", "1.0");
   area["tri-cumaile"] = UBASE("Irish", "tri-cumaile", 9.331200000000000E+04, "m2", "L2", "1.0");
   area["tuath"] = UBASE("Irish", "tuath", 1.748241974476800E+07, "m2", "L2", "1.0");
   mass["gran"] = UBASE("Irish", "gran", 5.000000000000000E-05, "kg", "M", "1.0");
   mass["penginn"] = UBASE("Irish", "penginn", 4.000000000000000E-04, "kg", "M", "1.0");
   mass["pinginn"] = UBASE("Irish", "pinginn", 4.000000000000000E-04, "kg", "M", "1.0");
   mass["screaball"] = UBASE("Irish", "screaball", 1.200000000000000E-03, "kg", "M", "1.0");
   mass["screpall-oir"] = UBASE("Irish", "screpall-oir", 7.087380781250000E-03, "kg", "M", "1.0");
   mass["screpul"] = UBASE("Irish", "screpul", 1.200000000000000E-03, "kg", "M", "1.0");
   mass["screpull"] = UBASE("Irish", "screpull", 1.200000000000000E-03, "kg", "M", "1.0");
   mass["scripul"] = UBASE("Irish", "scripul", 1.200000000000000E-03, "kg", "M", "1.0");
   mass["scripull"] = UBASE("Irish", "scripull", 1.200000000000000E-03, "kg", "M", "1.0");
   mass["uinge"] = UBASE("Irish", "uinge", 2.880000000000000E-02, "kg", "M", "1.0");
   mass["ungae"] = UBASE("Irish", "ungae", 2.880000000000000E-02, "kg", "M", "1.0");
   mass["unge-beg"] = UBASE("Irish", "unge-beg", 1.560000000000000E-02, "kg", "M", "1.0");
   mass["unge-mor"] = UBASE("Irish", "unge-mor", 3.110000000000000E-02, "kg", "M", "1.0");
   liquid["barrel"] = UBASE("Irish", "barrel", 1.123234914816000E-01, "m3", "L3", "1.0");
   liquid["bbl"] = UBASE("Irish", "bbl", 1.123234914816000E-01, "m3", "L3", "1.0");
   liquid["gallon"] = UBASE("Irish", "gallon", 3.565825126400000E-03, "m3", "L3", "1.0");
   liquid["gallons"] = UBASE("Irish", "gallons", 3.565825126400000E-03, "m3", "L3", "1.0");
   liquid["hogshead"] = UBASE("Irish", "hogshead", 4.492939659264000E-01, "m3", "L3", "1.0");
   liquid["hd"] = UBASE("Irish", "hd", 4.492939659264000E-01, "m3", "L3", "1.0");
   liquid["meisrin"] = UBASE("Irish", "meisrin", 6.600000000000000E-01, "m3", "L3", "1.0");
   liquid["og"] = UBASE("Irish", "og", 5.500000000000000E-02, "m3", "L3", "1.0");
   liquid["oilmedach"] = UBASE("Irish", "oilmedach", 9.504000000000000E+01, "m3", "L3", "1.0");
   liquid["olderb"] = UBASE("Irish", "olderb", 7.920000000000000E+00, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("Irish", "pint", 4.457281408000000E-04, "m3", "L3", "1.0");
   liquid["pt"] = UBASE("Irish", "pt", 4.457281408000000E-04, "m3", "L3", "1.0");
   liquid["pints"] = UBASE("Irish", "pints", 4.457281408000000E-04, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("Irish", "pipe", 1.797175863705600E+00, "m3", "L3", "1.0");
   liquid["pottle"] = UBASE("Irish", "pottle", 1.782912563200000E-03, "m3", "L3", "1.0");
   liquid["puncheon"] = UBASE("Irish", "puncheon", 4.492939659264000E-01, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("Irish", "quart", 8.914562816000000E-04, "m3", "L3", "1.0");
   liquid["qt"] = UBASE("Irish", "qt", 8.914562816000000E-04, "m3", "L3", "1.0");
   liquid["quarts"] = UBASE("Irish", "quarts", 8.914562816000000E-04, "m3", "L3", "1.0");
   liquid["rundlet"] = UBASE("Irish", "rundlet", 6.418485227520000E-02, "m3", "L3", "1.0");
   liquid["tierce"] = UBASE("Irish", "tierce", 1.497646553088000E-01, "m3", "L3", "1.0");
   liquid["tun"] = UBASE("Irish", "tun", 8.985879318528000E-01, "m3", "L3", "1.0");
   dry["cubic-foot"] = UBASE("Irish", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-feet"] = UBASE("Irish", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-troighid"] = UBASE("Irish", "cubic-troighid", 1.562500000000000E-02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Irish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Irish", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   _map["Irish"] = BaseSystem("Irish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit53(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["canna"] = UBASE("Italian", "canna", 2.055080000000000E+00, "m", "L", "1.0");
   length["cavezzo"] = UBASE("Italian", "cavezzo", 3.082620000000000E+00, "m", "L", "1.0");
   length["foot"] = UBASE("Italian", "foot", 5.137700000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Italian", "feet", 5.137700000000000E-01, "m", "L", "1.0");
   length["miglio"] = UBASE("Italian", "miglio", 2.226336666666670E+03, "m", "L", "1.0");
   length["miglio(Lombardia)"] = UBASE("Italian", "miglio(Lombardia)", 1.784808000000000E+03, "m", "L", "1.0");
   length["miglio(Napoli)"] = UBASE("Italian", "miglio(Napoli)", 1.855110000000000E+03, "m", "L", "1.0");
   length["miglio(Piemonte)"] = UBASE("Italian", "miglio(Piemonte)", 2.466076800000000E+03, "m", "L", "1.0");
   length["miglio(Roma)"] = UBASE("Italian", "miglio(Roma)", 1.487934000000000E+03, "m", "L", "1.0");
   length["miglio(Toscana)"] = UBASE("Italian", "miglio(Toscana)", 1.635670000000000E+03, "m", "L", "1.0");
   length["miglio(Venezia)"] = UBASE("Italian", "miglio(Venezia)", 1.738675000000000E+03, "m", "L", "1.0");
   length["oncia"] = UBASE("Italian", "oncia", 4.281416666666670E-02, "m", "L", "1.0");
   length["piede-liprando"] = UBASE("Italian", "piede-liprando", 5.137700000000000E-01, "m", "L", "1.0");
   length["punto"] = UBASE("Italian", "punto", 3.567847222222220E-03, "m", "L", "1.0");
   length["trabucco"] = UBASE("Italian", "trabucco", 3.082620000000000E+00, "m", "L", "1.0");
   area["giornata"] = UBASE("Italian", "giornata", 3.800000000000000E+03, "m2", "L2", "1.0");
   area["tavola"] = UBASE("Italian", "tavola", 3.800000000000000E+01, "m2", "L2", "1.0");
   mass["cantaro"] = UBASE("Italian", "cantaro", 4.605000000000000E+01, "kg", "M", "1.0");
   mass["denaro"] = UBASE("Italian", "denaro", 1.065972222222220E-03, "kg", "M", "1.0");
   mass["grano"] = UBASE("Italian", "grano", 4.441550925925930E-05, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Italian", "libbra", 3.070000000000000E-01, "kg", "M", "1.0");
   mass["oneia"] = UBASE("Italian", "oneia", 2.558333333333330E-02, "kg", "M", "1.0");
   mass["ottavo"] = UBASE("Italian", "ottavo", 3.197916666666670E-03, "kg", "M", "1.0");
   mass["rubbo"] = UBASE("Italian", "rubbo", 7.675000000000000E+00, "kg", "M", "1.0");
   liquid["barile-di-olio"] = UBASE("Italian", "barile-di-olio", 3.343000000000000E-02, "m3", "L3", "1.0");
   liquid["barile-di-vino"] = UBASE("Italian", "barile-di-vino", 4.560000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-piedi-liprando"] = UBASE("Italian", "cubic-piedi-liprando", 1.356145303196330E-01, "m3", "L3", "1.0");
   _map["Italian"] = BaseSystem("Italian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit54(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["bu"] = UBASE("Japanese", "bu", 3.030303030303030E-03, "m", "L", "1.0");
   length["cho"] = UBASE("Japanese", "cho", 1.090909090909090E+02, "m", "L", "1.0");
   length["hiro"] = UBASE("Japanese", "hiro", 1.515151515151520E+00, "m", "L", "1.0");
   length["jo"] = UBASE("Japanese", "jo", 3.030303030303030E+00, "m", "L", "1.0");
   length["ken"] = UBASE("Japanese", "ken", 1.818181818181820E+00, "m", "L", "1.0");
   length["mo"] = UBASE("Japanese", "mo", 3.030303030303030E-05, "m", "L", "1.0");
   length["Q"] = UBASE("Japanese", "Q", 2.500000000000000E-04, "m", "L", "1.0");
   length["quarter"] = UBASE("Japanese", "quarter", 2.500000000000000E-04, "m", "L", "1.0");
   length["ri"] = UBASE("Japanese", "ri", 3.927272727272730E+03, "m", "L", "1.0");
   length["rin"] = UBASE("Japanese", "rin", 3.030303030303030E-04, "m", "L", "1.0");
   length["shaku"] = UBASE("Japanese", "shaku", 3.030303030303030E-01, "m", "L", "1.0");
   length["shi"] = UBASE("Japanese", "shi", 3.030303030303030E-06, "m", "L", "1.0");
   length["sun"] = UBASE("Japanese", "sun", 3.030303030303030E-02, "m", "L", "1.0");
   length["yabiki"] = UBASE("Japanese", "yabiki", 7.575757575757580E-01, "m", "L", "1.0");
   area["bu"] = UBASE("Japanese", "bu", 3.305785123966940E+00, "m2", "L2", "1.0");
   area["cho"] = UBASE("Japanese", "cho", 9.917355371900830E+03, "m2", "L2", "1.0");
   area["chobu"] = UBASE("Japanese", "chobu", 9.917355371900830E+03, "m2", "L2", "1.0");
   area["go"] = UBASE("Japanese", "go", 3.305785123966940E-01, "m2", "L2", "1.0");
   area["jo"] = UBASE("Japanese", "jo", 1.652892561983470E+00, "m2", "L2", "1.0");
   area["se"] = UBASE("Japanese", "se", 9.917355371900830E+01, "m2", "L2", "1.0");
   area["shaku"] = UBASE("Japanese", "shaku", 3.305785123966940E-02, "m2", "L2", "1.0");
   area["square-ri"] = UBASE("Japanese", "square-ri", 1.542347107438020E+07, "m2", "L2", "1.0");
   area["tan"] = UBASE("Japanese", "tan", 9.917355371900830E+02, "m2", "L2", "1.0");
   area["tsubo"] = UBASE("Japanese", "tsubo", 3.305785123966940E+00, "m2", "L2", "1.0");
   mass["candareen"] = UBASE("Japanese", "candareen", 3.750000000000000E-04, "kg", "M", "1.0");
   mass["fun"] = UBASE("Japanese", "fun", 3.750000000000000E-04, "kg", "M", "1.0");
   mass["hyakume"] = UBASE("Japanese", "hyakume", 3.750000000000000E-01, "kg", "M", "1.0");
   mass["kan"] = UBASE("Japanese", "kan", 3.750000000000000E+00, "kg", "M", "1.0");
   mass["kanme"] = UBASE("Japanese", "kanme", 3.750000000000000E+00, "kg", "M", "1.0");
   mass["karus-hiri-ichi-da"] = UBASE("Japanese", "karus-hiri-ichi-da", 6.750000000000000E+01, "kg", "M", "1.0");
   mass["kin"] = UBASE("Japanese", "kin", 6.000000000000000E-01, "kg", "M", "1.0");
   mass["kiyak-kin"] = UBASE("Japanese", "kiyak-kin", 6.000000000000000E+01, "kg", "M", "1.0");
   mass["komma-ichi-da"] = UBASE("Japanese", "komma-ichi-da", 1.500000000000000E+02, "kg", "M", "1.0");
   mass["kwan"] = UBASE("Japanese", "kwan", 3.750000000000000E+00, "kg", "M", "1.0");
   mass["maru"] = UBASE("Japanese", "maru", 3.000000000000000E+01, "kg", "M", "1.0");
   mass["mo"] = UBASE("Japanese", "mo", 3.750000000000000E-06, "kg", "M", "1.0");
   mass["momme"] = UBASE("Japanese", "momme", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["monme"] = UBASE("Japanese", "monme", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["nisoku-ichi-nin"] = UBASE("Japanese", "nisoku-ichi-nin", 2.625000000000000E+01, "kg", "M", "1.0");
   mass["niyo"] = UBASE("Japanese", "niyo", 1.500000000000000E-02, "kg", "M", "1.0");
   mass["rin"] = UBASE("Japanese", "rin", 3.750000000000000E-05, "kg", "M", "1.0");
   mass["shi"] = UBASE("Japanese", "shi", 3.750000000000000E-07, "kg", "M", "1.0");
   mass["tael"] = UBASE("Japanese", "tael", 3.751000000000000E-02, "kg", "M", "1.0");
   mass["tan"] = UBASE("Japanese", "tan", 6.000000000000000E+01, "kg", "M", "1.0");
   liquid["go"] = UBASE("Japanese", "go", 1.803906836964690E-04, "m3", "L3", "1.0");
   liquid["koku"] = UBASE("Japanese", "koku", 1.803906836964690E-01, "m3", "L3", "1.0");
   liquid["sai"] = UBASE("Japanese", "sai", 1.803906836964690E-06, "m3", "L3", "1.0");
   liquid["shaku"] = UBASE("Japanese", "shaku", 1.803906836964690E-05, "m3", "L3", "1.0");
   liquid["sho"] = UBASE("Japanese", "sho", 1.803906836964690E-03, "m3", "L3", "1.0");
   liquid["to"] = UBASE("Japanese", "to", 1.803906836964690E-02, "m3", "L3", "1.0");
   dry["cubic-shaku"] = UBASE("Japanese", "cubic-shaku", 2.782647410746580E-02, "m3", "L3", "1.0");
   _map["Japanese"] = BaseSystem("Japanese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit55(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["ho"] = UBASE("Korean", "ho", 3.030303030303030E-05, "m", "L", "1.0");
   length["mo"] = UBASE("Korean", "mo", 3.030303030303030E-05, "m", "L", "1.0");
   length["ri"] = UBASE("Korean", "ri", 3.030303030303030E-04, "m", "L", "1.0");
   length["pun"] = UBASE("Korean", "pun", 3.030303030303030E-03, "m", "L", "1.0");
   length["bun"] = UBASE("Korean", "bun", 3.030303030303030E-03, "m", "L", "1.0");
   length["chi"] = UBASE("Korean", "chi", 3.030303030303030E-02, "m", "L", "1.0");
   length["chon"] = UBASE("Korean", "chon", 3.030303030303030E-02, "m", "L", "1.0");
   length["ja"] = UBASE("Korean", "ja", 3.030303030303030E-01, "m", "L", "1.0");
   length["cheok"] = UBASE("Korean", "cheok", 3.030303030303030E-01, "m", "L", "1.0");
   length["gan"] = UBASE("Korean", "gan", 1.818181818181820E+00, "m", "L", "1.0");
   length["bo"] = UBASE("Korean", "bo", 1.818181818181820E+00, "m", "L", "1.0");
   length["jang"] = UBASE("Korean", "jang", 3.030303030303030E+00, "m", "L", "1.0");
   length["jeong"] = UBASE("Korean", "jeong", 1.090909090909090E+02, "m", "L", "1.0");
   length["li"] = UBASE("Korean", "li", 3.927272727272730E+02, "m", "L", "1.0");
   area["jak"] = UBASE("Korean", "jak", 3.305785123966940E-02, "m2", "L2", "1.0");
   area["hop"] = UBASE("Korean", "hop", 3.305785123966940E-01, "m2", "L2", "1.0");
   area["pyeong"] = UBASE("Korean", "pyeong", 3.305785123966940E+00, "m2", "L2", "1.0");
   area["gan"] = UBASE("Korean", "gan", 3.305785123966940E+00, "m2", "L2", "1.0");
   area["bo"] = UBASE("Korean", "bo", 3.305785123966940E+00, "m2", "L2", "1.0");
   area["myo"] = UBASE("Korean", "myo", 9.917355371900830E+01, "m2", "L2", "1.0");
   area["dan"] = UBASE("Korean", "dan", 9.917355371900830E+02, "m2", "L2", "1.0");
   area["danbo"] = UBASE("Korean", "danbo", 9.917355371900830E+02, "m2", "L2", "1.0");
   area["jeong"] = UBASE("Korean", "jeong", 9.917355371900830E+03, "m2", "L2", "1.0");
   area["jeongbo"] = UBASE("Korean", "jeongbo", 9.917355371900830E+03, "m2", "L2", "1.0");
   area["gyeong"] = UBASE("Korean", "gyeong", 9.917355371900830E+03, "m2", "L2", "1.0");
   area["doejigi"] = UBASE("Korean", "doejigi", 3.305785123966940E+01, "m2", "L2", "1.0");
   area["majigi"] = UBASE("Korean", "majigi", 7.438016528925620E+02, "m2", "L2", "1.0");
   area["durak"] = UBASE("Korean", "durak", 3.305785123966940E+02, "m2", "L2", "1.0");
   area["seomjigi"] = UBASE("Korean", "seomjigi", 3.305785123966940E+03, "m2", "L2", "1.0");
   mass["ho"] = UBASE("Korean", "ho", 3.750000000000000E-06, "kg", "M", "1.0");
   mass["mo"] = UBASE("Korean", "mo", 3.750000000000000E-06, "kg", "M", "1.0");
   mass["ri"] = UBASE("Korean", "ri", 3.750000000000000E-05, "kg", "M", "1.0");
   mass["pun"] = UBASE("Korean", "pun", 3.750000000000000E-04, "kg", "M", "1.0");
   mass["bun"] = UBASE("Korean", "bun", 3.750000000000000E-04, "kg", "M", "1.0");
   mass["don"] = UBASE("Korean", "don", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["nyang"] = UBASE("Korean", "nyang", 3.750000000000000E-02, "kg", "M", "1.0");
   mass["geun"] = UBASE("Korean", "geun", 3.750000000000000E-01, "kg", "M", "1.0");
   mass["geun(meat)"] = UBASE("Korean", "geun(meat)", 6.000000000000000E-01, "kg", "M", "1.0");
   mass["gwan"] = UBASE("Korean", "gwan", 3.750000000000000E+00, "kg", "M", "1.0");
   liquid["jak"] = UBASE("Korean", "jak", 1.803906836964690E-05, "m3", "L3", "1.0");
   liquid["hop"] = UBASE("Korean", "hop", 1.803906836964690E-04, "m3", "L3", "1.0");
   liquid["doe"] = UBASE("Korean", "doe", 1.803906836964690E-03, "m3", "L3", "1.0");
   liquid["seung"] = UBASE("Korean", "seung", 1.803906836964690E-03, "m3", "L3", "1.0");
   liquid["mai"] = UBASE("Korean", "mai", 1.803906836964690E-02, "m3", "L3", "1.0");
   liquid["du"] = UBASE("Korean", "du", 1.803906836964690E-02, "m3", "L3", "1.0");
   liquid["seom"] = UBASE("Korean", "seom", 1.803906836964690E-01, "m3", "L3", "1.0");
   liquid["seok"] = UBASE("Korean", "seok", 1.803906836964690E-01, "m3", "L3", "1.0");
   liquid["jeom"] = UBASE("Korean", "jeom", 1.803906836964690E-01, "m3", "L3", "1.0");
   liquid["sogok"] = UBASE("Korean", "sogok", 2.705860255447030E-01, "m3", "L3", "1.0");
   liquid["pyeongseok"] = UBASE("Korean", "pyeongseok", 2.705860255447030E-01, "m3", "L3", "1.0");
   liquid["daegok"] = UBASE("Korean", "daegok", 3.607813673929380E-01, "m3", "L3", "1.0");
   liquid["jeonseok"] = UBASE("Korean", "jeonseok", 3.607813673929380E-01, "m3", "L3", "1.0");
   dry["cubic-cheok"] = UBASE("Korean", "cubic-cheok", 2.782647410746580E-02, "m3", "L3", "1.0");
   _map["Korean"] = BaseSystem("Korean", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit56(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["elle"] = UBASE("Latvian", "elle", 5.370000000000000E-01, "m", "L", "1.0");
   length["meile"] = UBASE("Latvian", "meile", 7.467600000000000E+03, "m", "L", "1.0");
   length["quartier"] = UBASE("Latvian", "quartier", 1.342500000000000E-01, "m", "L", "1.0");
   length["verste"] = UBASE("Latvian", "verste", 1.066800000000000E+00, "m", "L", "1.0");
   area["kapp"] = UBASE("Latvian", "kapp", 1.486400000000000E+02, "m2", "L2", "1.0");
   area["loofstelle"] = UBASE("Latvian", "loofstelle", 3.716000000000000E+03, "m2", "L2", "1.0");
   area["pourvette"] = UBASE("Latvian", "pourvette", 3.716000000000000E+03, "m2", "L2", "1.0");
   area["tonnstelle"] = UBASE("Latvian", "tonnstelle", 5.202400000000000E+03, "m2", "L2", "1.0");
   mass["centner"] = UBASE("Latvian", "centner", 5.028000000000000E+01, "kg", "M", "1.0");
   mass["liespfund"] = UBASE("Latvian", "liespfund", 8.380000000000000E+00, "kg", "M", "1.0");
   mass["loth"] = UBASE("Latvian", "loth", 1.309375000000000E-02, "kg", "M", "1.0");
   mass["pfund"] = UBASE("Latvian", "pfund", 4.190000000000000E-01, "kg", "M", "1.0");
   mass["quent"] = UBASE("Latvian", "quent", 3.273437500000000E-03, "kg", "M", "1.0");
   mass["schiffspfund"] = UBASE("Latvian", "schiffspfund", 1.676000000000000E+02, "kg", "M", "1.0");
   mass["ton"] = UBASE("Latvian", "ton", 1.005600000000000E+02, "kg", "M", "1.0");
   liquid["anker"] = UBASE("Latvian", "anker", 3.825600000000000E-02, "m3", "L3", "1.0");
   liquid["faden"] = UBASE("Latvian", "faden", 4.077000000000000E+00, "m3", "L3", "1.0");
   liquid["kanne"] = UBASE("Latvian", "kanne", 2.550400000000000E-03, "m3", "L3", "1.0");
   liquid["kulmet"] = UBASE("Latvian", "kulmet", 1.147680000000000E-02, "m3", "L3", "1.0");
   liquid["loof"] = UBASE("Latvian", "loof", 6.886080000000000E-02, "m3", "L3", "1.0");
   liquid["poure"] = UBASE("Latvian", "poure", 6.886080000000000E-02, "m3", "L3", "1.0");
   liquid["stoof"] = UBASE("Latvian", "stoof", 1.275200000000000E-03, "m3", "L3", "1.0");
   liquid["tonne"] = UBASE("Latvian", "tonne", 1.377216000000000E-01, "m3", "L3", "1.0");
   dry["kulmet"] = UBASE("Latvian", "kulmet", 1.091062080000000E-02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Latvian", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Latvian", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   _map["Latvian"] = BaseSystem("Latvian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit57(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["draa"] = UBASE("Libyan", "draa", 4.533333333333330E-01, "m", "L", "1.0");
   length["handaze"] = UBASE("Libyan", "handaze", 6.800000000000000E-01, "m", "L", "1.0");
   length["palmo"] = UBASE("Libyan", "palmo", 2.266666666666670E-01, "m", "L", "1.0");
   length["pic"] = UBASE("Libyan", "pic", 6.800000000000000E-01, "m", "L", "1.0");
   length["pik"] = UBASE("Libyan", "pik", 6.800000000000000E-01, "m", "L", "1.0");
   area["denum"] = UBASE("Libyan", "denum", 7.398400000000000E+02, "m2", "L2", "1.0");
   area["jabia"] = UBASE("Libyan", "jabia", 8.323200000000000E+02, "m2", "L2", "1.0");
   area["square-pic"] = UBASE("Libyan", "square-pic", 4.624000000000000E-01, "m2", "L2", "1.0");
   mass["cantar"] = UBASE("Libyan", "cantar", 5.128000000000000E+01, "kg", "M", "1.0");
   mass["dram"] = UBASE("Libyan", "dram", 3.205000000000000E-03, "kg", "M", "1.0");
   mass["kharouba"] = UBASE("Libyan", "kharouba", 2.003125000000000E-04, "kg", "M", "1.0");
   mass["mattaro"] = UBASE("Libyan", "mattaro", 2.153760000000000E+01, "kg", "M", "1.0");
   mass["metial"] = UBASE("Libyan", "metial", 4.761374187558030E-03, "kg", "M", "1.0");
   mass["oka"] = UBASE("Libyan", "oka", 1.282000000000000E+00, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Libyan", "rottolo", 5.128000000000000E-01, "kg", "M", "1.0");
   mass["termino"] = UBASE("Libyan", "termino", 4.006250000000000E-03, "kg", "M", "1.0");
   mass["uckin"] = UBASE("Libyan", "uckin", 3.205000000000000E-02, "kg", "M", "1.0");
   liquid["barile"] = UBASE("Libyan", "barile", 6.249750000000000E-02, "m3", "L3", "1.0");
   liquid["bozze"] = UBASE("Libyan", "bozze", 2.604062500000000E-03, "m3", "L3", "1.0");
   liquid["giarra"] = UBASE("Libyan", "giarra", 4.401232394366200E-02, "m3", "L3", "1.0");
   liquid["gorraf"] = UBASE("Libyan", "gorraf", 1.249950000000000E-02, "m3", "L3", "1.0");
   dry["kele"] = UBASE("Libyan", "kele", 2.307600000000000E-02, "m3", "L3", "1.0");
   dry["marta"] = UBASE("Libyan", "marta", 1.538400000000000E-02, "m3", "L3", "1.0");
   dry["nufsorba"] = UBASE("Libyan", "nufsorba", 3.846000000000000E-03, "m3", "L3", "1.0");
   dry["orba"] = UBASE("Libyan", "orba", 7.692000000000000E-03, "m3", "L3", "1.0");
   dry["temen"] = UBASE("Libyan", "temen", 3.076800000000000E-02, "m3", "L3", "1.0");
   dry["ueba"] = UBASE("Libyan", "ueba", 1.230720000000000E-01, "m3", "L3", "1.0");
   _map["Libyan"] = BaseSystem("Libyan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit58(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   liquid["malter"] = UBASE("Luxemburg", "malter", 1.910000000000000E-01, "m3", "L3", "1.0");
   _map["Luxemburg"] = BaseSystem("Luxemburg", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit59(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["rahf"] = UBASE("Malagasy", "rahf", 6.479891000000000E-04, "m", "L", "1.0");
   area["square-rahf"] = UBASE("Malagasy", "square-rahf", 1.392598247056000E+00, "m2", "L2", "1.0");
   mass["nanki"] = UBASE("Malagasy", "nanki", 6.479891000000000E-04, "kg", "M", "1.0");
   mass["vari"] = UBASE("Malagasy", "vari", 1.943967300000000E-03, "kg", "M", "1.0");
   mass["sompi"] = UBASE("Malagasy", "sompi", 3.887934600000000E-03, "kg", "M", "1.0");
   liquid["cubic-rahf"] = UBASE("Malagasy", "cubic-rahf", 1.643382909778830E+00, "m3", "L3", "1.0");
   dry["bambou"] = UBASE("Malagasy", "bambou", 2.001579185478780E-03, "m3", "L3", "1.0");
   _map["Malagasy"] = BaseSystem("Malagasy", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit60(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["pulzier"] = UBASE("Maltese", "pulzier", 2.175000000000000E-02, "m", "L", "1.0");
   length["canna"] = UBASE("Maltese", "canna", 2.088000000000000E+00, "m", "L", "1.0");
   length["fitel"] = UBASE("Maltese", "fitel", 1.305000000000000E-01, "m", "L", "1.0");
   length["palmo"] = UBASE("Maltese", "palmo", 2.610000000000000E-01, "m", "L", "1.0");
   length["qasba"] = UBASE("Maltese", "qasba", 2.088000000000000E+00, "m", "L", "1.0");
   length["xiber"] = UBASE("Maltese", "xiber", 2.610000000000000E-01, "m", "L", "1.0");
   area["fitel-kwadru"] = UBASE("Maltese", "fitel-kwadru", 1.703025000000000E-02, "m2", "L2", "1.0");
   area["kejla"] = UBASE("Maltese", "kejla", 1.860157440000000E+01, "m2", "L2", "1.0");
   area["modd"] = UBASE("Maltese", "modd", 1.785751142400000E+04, "m2", "L2", "1.0");
   area["pulzier-kwadru"] = UBASE("Maltese", "pulzier-kwadru", 4.730625000000000E-04, "m2", "L2", "1.0");
   area["qasba-kwadra"] = UBASE("Maltese", "qasba-kwadra", 4.359744000000000E+00, "m2", "L2", "1.0");
   area["siegh"] = UBASE("Maltese", "siegh", 1.860157440000000E+02, "m2", "L2", "1.0");
   area["tomna"] = UBASE("Maltese", "tomna", 1.116094464000000E+03, "m2", "L2", "1.0");
   area["wejba"] = UBASE("Maltese", "wejba", 4.464377856000000E+03, "m2", "L2", "1.0");
   area["xiber-kwadru"] = UBASE("Maltese", "xiber-kwadru", 6.812100000000000E-02, "m2", "L2", "1.0");
   mass["cantaro"] = UBASE("Maltese", "cantaro", 7.937900000000000E+01, "kg", "M", "1.0");
   mass["kwart"] = UBASE("Maltese", "kwart", 1.984475000000000E-01, "kg", "M", "1.0");
   mass["kwart(small)"] = UBASE("Maltese", "kwart(small)", 6.614916666666670E-03, "kg", "M", "1.0");
   mass["libra"] = UBASE("Maltese", "libra", 4.535942857142860E-01, "kg", "M", "1.0");
   mass["ottav"] = UBASE("Maltese", "ottav", 3.307458333333330E-03, "kg", "M", "1.0");
   mass["ounce"] = UBASE("Maltese", "ounce", 2.834964285714290E-02, "kg", "M", "1.0");
   mass["parto"] = UBASE("Maltese", "parto", 1.771852678571430E-03, "kg", "M", "1.0");
   mass["pezata"] = UBASE("Maltese", "pezata", 2.381370000000000E+02, "kg", "M", "1.0");
   mass["qantar"] = UBASE("Maltese", "qantar", 7.937900000000000E+01, "kg", "M", "1.0");
   mass["qsima"] = UBASE("Maltese", "qsima", 9.922375000000000E-01, "kg", "M", "1.0");
   mass["ratal"] = UBASE("Maltese", "ratal", 7.937900000000000E-01, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Maltese", "rottolo", 7.937900000000000E-01, "kg", "M", "1.0");
   mass["uqija"] = UBASE("Maltese", "uqija", 2.645966666666670E-02, "kg", "M", "1.0");
   mass["wizna"] = UBASE("Maltese", "wizna", 3.968950000000000E+00, "kg", "M", "1.0");
   liquid["baril"] = UBASE("Maltese", "baril", 4.316200000000000E+01, "m3", "L3", "1.0");
   liquid["barmil"] = UBASE("Maltese", "barmil", 4.316200000000000E-02, "m3", "L3", "1.0");
   liquid["caffiso"] = UBASE("Maltese", "caffiso", 2.045700000000000E+01, "m3", "L3", "1.0");
   liquid["garra"] = UBASE("Maltese", "garra", 1.079050000000000E-02, "m3", "L3", "1.0");
   liquid["kartocc"] = UBASE("Maltese", "kartocc", 1.278562500000000E-03, "m3", "L3", "1.0");
   liquid["kartocc(alcohol)"] = UBASE("Maltese", "kartocc(alcohol)", 1.135842105263160E-03, "m3", "L3", "1.0");
   liquid["kejla"] = UBASE("Maltese", "kejla", 1.278562500000000E-04, "m3", "L3", "1.0");
   liquid["kwarta"] = UBASE("Maltese", "kwarta", 5.114250000000000E-03, "m3", "L3", "1.0");
   liquid["kwarta(alcohol)"] = UBASE("Maltese", "kwarta(alcohol)", 5.395250000000000E-03, "m3", "L3", "1.0");
   liquid["kwartin"] = UBASE("Maltese", "kwartin", 3.196406250000000E-05, "m3", "L3", "1.0");
   liquid["nof(alcohol)"] = UBASE("Maltese", "nof(alcohol)", 5.679210526315790E-04, "m3", "L3", "1.0");
   liquid["nofs"] = UBASE("Maltese", "nofs", 6.392812500000000E-04, "m3", "L3", "1.0");
   liquid["pinte"] = UBASE("Maltese", "pinte", 1.419802631578950E-04, "m3", "L3", "1.0");
   liquid["qafiz"] = UBASE("Maltese", "qafiz", 2.045700000000000E-02, "m3", "L3", "1.0");
   liquid["salma"] = UBASE("Maltese", "salma", 2.909440000000000E+02, "m3", "L3", "1.0");
   liquid["terz"] = UBASE("Maltese", "terz", 3.196406250000000E-04, "m3", "L3", "1.0");
   liquid["terz(alcohol)"] = UBASE("Maltese", "terz(alcohol)", 2.839605263157890E-04, "m3", "L3", "1.0");
   dry["fitel-kubu"] = UBASE("Maltese", "fitel-kubu", 2.222447625000000E-03, "m3", "L3", "1.0");
   dry["ghabara"] = UBASE("Maltese", "ghabara", 3.030728000000000E-03, "m3", "L3", "1.0");
   dry["kejla"] = UBASE("Maltese", "kejla", 3.030728000000000E-04, "m3", "L3", "1.0");
   dry["lumin"] = UBASE("Maltese", "lumin", 3.030728000000000E-05, "m3", "L3", "1.0");
   dry["modd"] = UBASE("Maltese", "modd", 2.909498880000000E-01, "m3", "L3", "1.0");
   dry["pulzier-kubu"] = UBASE("Maltese", "pulzier-kubu", 1.028910937500000E-05, "m3", "L3", "1.0");
   dry["qasba-kubu"] = UBASE("Maltese", "qasba-kubu", 9.103145472000000E+00, "m3", "L3", "1.0");
   dry["siegh"] = UBASE("Maltese", "siegh", 1.818436800000000E-03, "m3", "L3", "1.0");
   dry["tomna"] = UBASE("Maltese", "tomna", 1.818436800000000E-02, "m3", "L3", "1.0");
   dry["xiber-kubu"] = UBASE("Maltese", "xiber-kubu", 1.777958100000000E-02, "m3", "L3", "1.0");
   _map["Maltese"] = BaseSystem("Maltese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit61(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   liquid["cash"] = UBASE("Mauritius", "cash", 2.271100000000000E-01, "m3", "L3", "1.0");
   liquid["velt"] = UBASE("Mauritius", "velt", 7.570333333333330E-03, "m3", "L3", "1.0");
   _map["Mauritius"] = BaseSystem("Mauritius", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit62(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["legua"] = UBASE("Mexican", "legua", 4.190000000000000E+03, "m", "L", "1.0");
   length["linea"] = UBASE("Mexican", "linea", 1.939814814814810E-03, "m", "L", "1.0");
   length["milla"] = UBASE("Mexican", "milla", 1.396666666666670E+03, "m", "L", "1.0");
   length["pie"] = UBASE("Mexican", "pie", 2.793333333333330E-01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Mexican", "pulgada", 2.327777777777780E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Mexican", "vara", 8.380000000000000E-01, "m", "L", "1.0");
   area["caballiera"] = UBASE("Mexican", "caballiera", 4.279531115520000E+05, "m2", "L2", "1.0");
   area["fanega"] = UBASE("Mexican", "fanega", 3.566275929600000E+04, "m2", "L2", "1.0");
   area["labor"] = UBASE("Mexican", "labor", 6.419296673280000E+05, "m2", "L2", "1.0");
   area["sitio"] = UBASE("Mexican", "sitio", 1.755606314623490E+07, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Mexican", "square-vara", 7.022440000000000E-01, "m2", "L2", "1.0");
   mass["adarme"] = UBASE("Mexican", "adarme", 1.797837265625000E-03, "kg", "M", "1.0");
   mass["arroba"] = UBASE("Mexican", "arroba", 1.150615850000000E+01, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Mexican", "libbra", 4.602463400000000E-01, "kg", "M", "1.0");
   mass["libra"] = UBASE("Mexican", "libra", 4.602463400000000E-01, "kg", "M", "1.0");
   mass["ochava"] = UBASE("Mexican", "ochava", 3.595674531250000E-03, "kg", "M", "1.0");
   mass["onza"] = UBASE("Mexican", "onza", 2.876539625000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Mexican", "quintal", 4.602463400000000E+01, "kg", "M", "1.0");
   mass["tercio"] = UBASE("Mexican", "tercio", 7.363941440000000E+01, "kg", "M", "1.0");
   mass["terco"] = UBASE("Mexican", "terco", 7.363941440000000E+01, "kg", "M", "1.0");
   mass["tomin"] = UBASE("Mexican", "tomin", 5.992790885416670E-04, "kg", "M", "1.0");
   liquid["cuartillo(oil)"] = UBASE("Mexican", "cuartillo(oil)", 5.061620000000000E-04, "m3", "L3", "1.0");
   liquid["cuartillo(wine)"] = UBASE("Mexican", "cuartillo(wine)", 4.562640000000000E-04, "m3", "L3", "1.0");
   liquid["jarra(oil)"] = UBASE("Mexican", "jarra(oil)", 9.110916000000000E-03, "m3", "L3", "1.0");
   liquid["jarra(wine)"] = UBASE("Mexican", "jarra(wine)", 8.212752000000000E-03, "m3", "L3", "1.0");
   dry["almud"] = UBASE("Mexican", "almud", 7.567200000000000E-03, "m3", "L3", "1.0");
   dry["almude"] = UBASE("Mexican", "almude", 7.567200000000000E-03, "m3", "L3", "1.0");
   dry["carga"] = UBASE("Mexican", "carga", 1.816128000000000E-01, "m3", "L3", "1.0");
   dry["cuartillo"] = UBASE("Mexican", "cuartillo", 1.891800000000000E-03, "m3", "L3", "1.0");
   dry["fanega"] = UBASE("Mexican", "fanega", 9.080640000000000E-02, "m3", "L3", "1.0");
   _map["Mexican"] = BaseSystem("Mexican", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit63(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["meter"] = UBASE("MKpS", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   length["m"] = UBASE("MKpS", "m", 1.000000000000000E+00, "m", "L", "1.0");
   area["square-meter"] = UBASE("MKpS", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0");
   mass["unit-of-mass"] = UBASE("MKpS", "unit-of-mass", 9.806650000000000E+00, "kg", "M", "1.0");
   mass["unite-de-masse"] = UBASE("MKpS", "unite-de-masse", 9.806650000000000E+00, "kg", "M", "1.0");
   liquid["cubic-meter"] = UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubic-meter"] = UBASE("MKpS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   _map["MKpS"] = BaseSystem("MKpS", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit64(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["meter"] = UBASE("MKS", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   length["m"] = UBASE("MKS", "m", 1.000000000000000E+00, "m", "L", "1.0");
   area["square-meter"] = UBASE("MKS", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["sq-m"] = UBASE("MKS", "sq-m", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["m2"] = UBASE("MKS", "m2", 1.000000000000000E+00, "m2", "L2", "1.0");
   mass["kilogram"] = UBASE("MKS", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["kg"] = UBASE("MKS", "kg", 1.000000000000000E+00, "kg", "M", "1.0");
   liquid["cubic-meter"] = UBASE("MKS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   liquid["cu-m"] = UBASE("MKS", "cu-m", 1.000000000000000E+00, "m3", "L3", "1.0");
   liquid["m3"] = UBASE("MKS", "m3", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubic-meter"] = UBASE("MKS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cu-m"] = UBASE("MKS", "cu-m", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["m3"] = UBASE("MKS", "m3", 1.000000000000000E+00, "m3", "L3", "1.0");
   _map["MKS"] = BaseSystem("MKS", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit65(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["meter"] = UBASE("MKSA", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   length["m"] = UBASE("MKSA", "m", 1.000000000000000E+00, "m", "L", "1.0");
   area["sabine(metric)"] = UBASE("MKSA", "sabine(metric)", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["square-meter"] = UBASE("MKSA", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0");
   mass["kilogram"] = UBASE("MKSA", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["kg"] = UBASE("MKSA", "kg", 1.000000000000000E+00, "kg", "M", "1.0");
   liquid["cubic-meter"] = UBASE("MKSA", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubic-meter"] = UBASE("MKSA", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   _map["MKSA"] = BaseSystem("MKSA", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit66(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["canna"] = UBASE("Moroccan", "canna", 5.337500000000000E-01, "m", "L", "1.0");
   length["cubit"] = UBASE("Moroccan", "cubit", 5.337500000000000E-01, "m", "L", "1.0");
   length["pic"] = UBASE("Moroccan", "pic", 6.100000000000000E-01, "m", "L", "1.0");
   length["tonni"] = UBASE("Moroccan", "tonni", 7.625000000000000E-02, "m", "L", "1.0");
   area["square-pic"] = UBASE("Moroccan", "square-pic", 3.721000000000000E-01, "m2", "L2", "1.0");
   mass["artal"] = UBASE("Moroccan", "artal", 5.075000000000000E-01, "kg", "M", "1.0");
   mass["gerbe"] = UBASE("Moroccan", "gerbe", 3.045000000000000E+00, "kg", "M", "1.0");
   mass["kantar"] = UBASE("Moroccan", "kantar", 5.075000000000000E+01, "kg", "M", "1.0");
   mass["kula"] = UBASE("Moroccan", "kula", 1.116500000000000E+01, "kg", "M", "1.0");
   mass["rotal"] = UBASE("Moroccan", "rotal", 5.075000000000000E-01, "kg", "M", "1.0");
   liquid["almude"] = UBASE("Moroccan", "almude", 1.400000000000000E-02, "m3", "L3", "1.0");
   liquid["faah"] = UBASE("Moroccan", "faah", 5.600000000000000E-02, "m3", "L3", "1.0");
   liquid["fanega"] = UBASE("Moroccan", "fanega", 5.600000000000000E-02, "m3", "L3", "1.0");
   liquid["mud"] = UBASE("Moroccan", "mud", 1.400000000000000E-02, "m3", "L3", "1.0");
   liquid["mudd"] = UBASE("Moroccan", "mudd", 1.400000000000000E-02, "m3", "L3", "1.0");
   liquid["saah"] = UBASE("Moroccan", "saah", 5.600000000000000E-02, "m3", "L3", "1.0");
   liquid["sahh"] = UBASE("Moroccan", "sahh", 5.600000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Moroccan", "cubic-pic", 2.269810000000000E-01, "m3", "L3", "1.0");
   _map["Moroccan"] = BaseSystem("Moroccan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit67(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["meter"] = UBASE("MTS", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   length["m"] = UBASE("MTS", "m", 1.000000000000000E+00, "m", "L", "1.0");
   area["square-meter"] = UBASE("MTS", "square-meter", 1.000000000000000E+00, "m2", "L2", "1.0");
   mass["decitonne"] = UBASE("MTS", "decitonne", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["dt"] = UBASE("MTS", "dt", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("MTS", "quintal", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["q"] = UBASE("MTS", "q", 1.000000000000000E+02, "kg", "M", "1.0");
   mass["ton(metric)"] = UBASE("MTS", "ton(metric)", 1.000000000000000E+03, "kg", "M", "1.0");
   mass["t"] = UBASE("MTS", "t", 1.000000000000000E+03, "kg", "M", "1.0");
   liquid["cubic-meter"] = UBASE("MTS", "cubic-meter", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["decastere"] = UBASE("MTS", "decastere", 1.000000000000000E+01, "m3", "L3", "1.0");
   dry["dast"] = UBASE("MTS", "dast", 1.000000000000000E+01, "m3", "L3", "1.0");
   dry["decistere"] = UBASE("MTS", "decistere", 1.000000000000000E-01, "m3", "L3", "1.0");
   dry["dst"] = UBASE("MTS", "dst", 1.000000000000000E-01, "m3", "L3", "1.0");
   _map["MTS"] = BaseSystem("MTS", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit68(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["ga-wout"] = UBASE("Myanmar", "ga-wout", 5.120640000000000E+03, "m", "L", "1.0");
   length["hnan"] = UBASE("Myanmar", "hnan", 7.937500000000000E-04, "m", "L", "1.0");
   length["kawtha"] = UBASE("Myanmar", "kawtha", 1.280160000000000E+03, "m", "L", "1.0");
   length["lan"] = UBASE("Myanmar", "lan", 1.828800000000000E+00, "m", "L", "1.0");
   length["let-thit"] = UBASE("Myanmar", "let-thit", 1.905000000000000E-02, "m", "L", "1.0");
   length["maik"] = UBASE("Myanmar", "maik", 1.524000000000000E-01, "m", "L", "1.0");
   length["muyaw"] = UBASE("Myanmar", "muyaw", 4.762500000000000E-03, "m", "L", "1.0");
   length["out-thaba"] = UBASE("Myanmar", "out-thaba", 6.400800000000000E+01, "m", "L", "1.0");
   length["sanchi"] = UBASE("Myanmar", "sanchi", 7.937500000000000E-05, "m", "L", "1.0");
   length["ta"] = UBASE("Myanmar", "ta", 3.200400000000000E+00, "m", "L", "1.0");
   length["taung"] = UBASE("Myanmar", "taung", 4.572000000000000E-01, "m", "L", "1.0");
   length["yuzana"] = UBASE("Myanmar", "yuzana", 2.048256000000000E+04, "m", "L", "1.0");
   area["square-taung"] = UBASE("Myanmar", "square-taung", 2.090318400000000E-01, "m2", "L2", "1.0");
   mass["achein-taya"] = UBASE("Myanmar", "achein-taya", 1.632932000000000E+02, "kg", "M", "1.0");
   mass["aseittha"] = UBASE("Myanmar", "aseittha", 4.082330000000000E-01, "kg", "M", "1.0");
   mass["awettha"] = UBASE("Myanmar", "awettha", 2.041165000000000E-01, "kg", "M", "1.0");
   mass["kyattha"] = UBASE("Myanmar", "kyattha", 1.632932000000000E-02, "kg", "M", "1.0");
   mass["mattha"] = UBASE("Myanmar", "mattha", 4.082330000000000E-03, "kg", "M", "1.0");
   mass["mutha"] = UBASE("Myanmar", "mutha", 2.041165000000000E-03, "kg", "M", "1.0");
   mass["nga-mutha"] = UBASE("Myanmar", "nga-mutha", 8.164660000000000E-03, "kg", "M", "1.0");
   mass["ngase-tha"] = UBASE("Myanmar", "ngase-tha", 8.164660000000000E-01, "kg", "M", "1.0");
   mass["peittha"] = UBASE("Myanmar", "peittha", 1.632932000000000E+00, "kg", "M", "1.0");
   mass["petha"] = UBASE("Myanmar", "petha", 1.020582500000000E-03, "kg", "M", "1.0");
   mass["yway-gyi"] = UBASE("Myanmar", "yway-gyi", 2.721553333333330E-04, "kg", "M", "1.0");
   mass["yway-lay"] = UBASE("Myanmar", "yway-lay", 1.360776666666670E-04, "kg", "M", "1.0");
   liquid["hkwe"] = UBASE("Myanmar", "hkwe", 2.045744000000000E-02, "m3", "L3", "1.0");
   liquid["hkwet"] = UBASE("Myanmar", "hkwet", 1.278590000000000E-03, "m3", "L3", "1.0");
   liquid["la-me"] = UBASE("Myanmar", "la-me", 3.196475000000000E-04, "m3", "L3", "1.0");
   liquid["la-my"] = UBASE("Myanmar", "la-my", 7.991187500000000E-05, "m3", "L3", "1.0");
   liquid["la-myet"] = UBASE("Myanmar", "la-myet", 1.598237500000000E-04, "m3", "L3", "1.0");
   liquid["pyi"] = UBASE("Myanmar", "pyi", 2.557180000000000E-03, "m3", "L3", "1.0");
   liquid["sa-le"] = UBASE("Myanmar", "sa-le", 6.392950000000000E-04, "m3", "L3", "1.0");
   liquid["seit"] = UBASE("Myanmar", "seit", 1.022872000000000E-02, "m3", "L3", "1.0");
   liquid["tin"] = UBASE("Myanmar", "tin", 4.091488000000000E-02, "m3", "L3", "1.0");
   dry["cubic-taung"] = UBASE("Myanmar", "cubic-taung", 9.556935724800000E-02, "m3", "L3", "1.0");
   _map["Myanmar"] = BaseSystem("Myanmar", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit69(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["angul"] = UBASE("Napalese", "angul", 1.905000000000000E-02, "m", "L", "1.0");
   length["dharnugrah"] = UBASE("Napalese", "dharnugrah", 7.620000000000000E-02, "m", "L", "1.0");
   length["dhanurmushti"] = UBASE("Napalese", "dhanurmushti", 1.524000000000000E-01, "m", "L", "1.0");
   length["vitastaa"] = UBASE("Napalese", "vitastaa", 2.286000000000000E-01, "m", "L", "1.0");
   length["haath"] = UBASE("Napalese", "haath", 4.572000000000000E-01, "m", "L", "1.0");
   length["dhanush"] = UBASE("Napalese", "dhanush", 1.828800000000000E+00, "m", "L", "1.0");
   length["dand"] = UBASE("Napalese", "dand", 1.828800000000000E+00, "m", "L", "1.0");
   length["kos"] = UBASE("Napalese", "kos", 3.657600000000000E+03, "m", "L", "1.0");
   length["kosh"] = UBASE("Napalese", "kosh", 3.657600000000000E+03, "m", "L", "1.0");
   length["gourt"] = UBASE("Napalese", "gourt", 3.657600000000000E+03, "m", "L", "1.0");
   length["yojan"] = UBASE("Napalese", "yojan", 1.463040000000000E+04, "m", "L", "1.0");
   area["dam"] = UBASE("Napalese", "dam", 1.987254090000000E+00, "m2", "L2", "1.0");
   area["paisa"] = UBASE("Napalese", "paisa", 7.949016360000000E+00, "m2", "L2", "1.0");
   area["aana"] = UBASE("Napalese", "aana", 3.179606544000000E+01, "m2", "L2", "1.0");
   area["ropani"] = UBASE("Napalese", "ropani", 5.087370470400000E+02, "m2", "L2", "1.0");
   area["dhur"] = UBASE("Napalese", "dhur", 1.693157904000000E+01, "m2", "L2", "1.0");
   area["kattha"] = UBASE("Napalese", "kattha", 3.386315808000000E+02, "m2", "L2", "1.0");
   area["bigha"] = UBASE("Napalese", "bigha", 6.772631616000000E+03, "m2", "L2", "1.0");
   area["khetmuri"] = UBASE("Napalese", "khetmuri", 1.271842617600000E+04, "m2", "L2", "1.0");
   mass["tola"] = UBASE("Napalese", "tola", 1.166000000000000E-02, "kg", "M", "1.0");
   mass["lal"] = UBASE("Napalese", "lal", 1.166000000000000E-04, "kg", "M", "1.0");
   mass["chatak"] = UBASE("Napalese", "chatak", 5.247000000000000E-02, "kg", "M", "1.0");
   mass["pau"] = UBASE("Napalese", "pau", 1.990000000000000E-01, "kg", "M", "1.0");
   mass["dharni"] = UBASE("Napalese", "dharni", 2.388000000000000E+00, "kg", "M", "1.0");
   liquid["pathi"] = UBASE("Napalese", "pathi", 4.545960000000000E-03, "m3", "L3", "1.0");
   liquid["mana"] = UBASE("Napalese", "mana", 5.682450000000000E-04, "m3", "L3", "1.0");
   liquid["mutthi"] = UBASE("Napalese", "mutthi", 5.682450000000000E-05, "m3", "L3", "1.0");
   liquid["muri"] = UBASE("Napalese", "muri", 9.091920000000000E-02, "m3", "L3", "1.0");
   dry["cubic-angul"] = UBASE("Napalese", "cubic-angul", 6.913292625000000E-06, "m3", "L3", "1.0");
   _map["Napalese"] = BaseSystem("Napalese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit70(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["vara"] = UBASE("Nicaraguan", "vara", 8.128000000000000E-01, "m", "L", "1.0");
   area["caballiera"] = UBASE("Nicaraguan", "caballiera", 4.472909466240000E+05, "m2", "L2", "1.0");
   area["manzana"] = UBASE("Nicaraguan", "manzana", 6.988921041000000E+03, "m2", "L2", "1.0");
   mass["caja"] = UBASE("Nicaraguan", "caja", 1.600000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Nicaraguan", "carga", 1.610000000000000E+02, "kg", "M", "1.0");
   mass["fanega"] = UBASE("Nicaraguan", "fanega", 9.200000000000000E+01, "kg", "M", "1.0");
   liquid["botella"] = UBASE("Nicaraguan", "botella", 6.500000000000000E-04, "m3", "L3", "1.0");
   liquid["cajuella"] = UBASE("Nicaraguan", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Nicaraguan", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Nicaraguan", "cubic-vara", 5.369713131520000E-01, "m3", "L3", "1.0");
   _map["Nicaraguan"] = BaseSystem("Nicaraguan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit71(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["alen"] = UBASE("Norwegian", "alen", 6.274000000000000E-01, "m", "L", "1.0");
   length["favn"] = UBASE("Norwegian", "favn", 1.882200000000000E+00, "m", "L", "1.0");
   length["fjerding"] = UBASE("Norwegian", "fjerding", 2.823300000000000E+03, "m", "L", "1.0");
   length["fjerdingsvei"] = UBASE("Norwegian", "fjerdingsvei", 2.823300000000000E+03, "m", "L", "1.0");
   length["fod"] = UBASE("Norwegian", "fod", 3.137000000000000E-01, "m", "L", "1.0");
   length["fot"] = UBASE("Norwegian", "fot", 3.137000000000000E-01, "m", "L", "1.0");
   length["geografisk-mil"] = UBASE("Norwegian", "geografisk-mil", 7.421299386218240E+03, "m", "L", "1.0");
   length["kabellengde"] = UBASE("Norwegian", "kabellengde", 1.882200000000000E+02, "m", "L", "1.0");
   length["kaffekok"] = UBASE("Norwegian", "kaffekok", 1.129320000000000E+04, "m", "L", "1.0");
   length["kvartmil"] = UBASE("Norwegian", "kvartmil", 1.882200000000000E+03, "m", "L", "1.0");
   length["kvater"] = UBASE("Norwegian", "kvater", 1.568500000000000E-01, "m", "L", "1.0");
   length["las"] = UBASE("Norwegian", "las", 2.823300000000000E+01, "m", "L", "1.0");
   length["linje"] = UBASE("Norwegian", "linje", 2.178472222222220E-03, "m", "L", "1.0");
   length["miil"] = UBASE("Norwegian", "miil", 1.129320000000000E+04, "m", "L", "1.0");
   length["mil"] = UBASE("Norwegian", "mil", 1.129320000000000E+04, "m", "L", "1.0");
   length["rast"] = UBASE("Norwegian", "rast", 1.129320000000000E+04, "m", "L", "1.0");
   length["sjomil"] = UBASE("Norwegian", "sjomil", 7.434690000000000E+03, "m", "L", "1.0");
   length["skruppel"] = UBASE("Norwegian", "skruppel", 1.815393518518520E-04, "m", "L", "1.0");
   length["stang"] = UBASE("Norwegian", "stang", 3.137000000000000E+00, "m", "L", "1.0");
   length["steinkast"] = UBASE("Norwegian", "steinkast", 4.705500000000000E+01, "m", "L", "1.0");
   length["tomme"] = UBASE("Norwegian", "tomme", 2.614166666666670E-02, "m", "L", "1.0");
   area["kvadrat-rode"] = UBASE("Norwegian", "kvadrat-rode", 9.840769000000000E+00, "m2", "L2", "1.0");
   area["mal"] = UBASE("Norwegian", "mal", 9.840769000000000E+02, "m2", "L2", "1.0");
   area["mal(new)"] = UBASE("Norwegian", "mal(new)", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["tonneland"] = UBASE("Norwegian", "tonneland", 3.936307600000000E+03, "m2", "L2", "1.0");
   mass["bismerpund"] = UBASE("Norwegian", "bismerpund", 5.977200000000000E+00, "kg", "M", "1.0");
   mass["laup"] = UBASE("Norwegian", "laup", 1.793160000000000E+01, "kg", "M", "1.0");
   mass["mark"] = UBASE("Norwegian", "mark", 2.490500000000000E-01, "kg", "M", "1.0");
   mass["merker"] = UBASE("Norwegian", "merker", 2.490500000000000E-01, "kg", "M", "1.0");
   mass["ort"] = UBASE("Norwegian", "ort", 9.728515625000000E-04, "kg", "M", "1.0");
   mass["pund"] = UBASE("Norwegian", "pund", 4.981000000000000E-01, "kg", "M", "1.0");
   mass["skaalpund"] = UBASE("Norwegian", "skaalpund", 4.981000000000000E-01, "kg", "M", "1.0");
   mass["skalpund"] = UBASE("Norwegian", "skalpund", 4.981000000000000E-01, "kg", "M", "1.0");
   mass["skippund"] = UBASE("Norwegian", "skippund", 1.593920000000000E+02, "kg", "M", "1.0");
   mass["spann"] = UBASE("Norwegian", "spann", 1.793160000000000E+01, "kg", "M", "1.0");
   mass["vag"] = UBASE("Norwegian", "vag", 1.992400000000000E+01, "kg", "M", "1.0");
   mass["vette"] = UBASE("Norwegian", "vette", 7.172640000000000E+00, "kg", "M", "1.0");
   liquid["pot"] = UBASE("Norwegian", "pot", 9.651000000000000E-04, "m3", "L3", "1.0");
   dry["favn"] = UBASE("Norwegian", "favn", 2.222675449416000E+00, "m3", "L3", "1.0");
   dry["korntonde"] = UBASE("Norwegian", "korntonde", 1.389744000000000E-01, "m3", "L3", "1.0");
   dry["pot"] = UBASE("Norwegian", "pot", 9.650000000000000E-04, "m3", "L3", "1.0");
   dry["skjeppe"] = UBASE("Norwegian", "skjeppe", 1.737180000000000E-02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Norwegian", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Norwegian", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["tonne"] = UBASE("Norwegian", "tonne", 1.389172155885000E-01, "m3", "L3", "1.0");
   _map["Norwegian"] = BaseSystem("Norwegian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit72(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["muscat"] = UBASE("Omani", "muscat", 9.939020000000000E-01, "m", "L", "1.0");
   area["square-muscat"] = UBASE("Omani", "square-muscat", 9.878411856040000E-01, "m2", "L2", "1.0");
   mass["maund"] = UBASE("Omani", "maund", 3.968933237500000E+00, "kg", "M", "1.0");
   mass["candy"] = UBASE("Omani", "candy", 2.381359942500000E+02, "kg", "M", "1.0");
   mass["kotschas"] = UBASE("Omani", "kotschas", 1.653722182291670E-01, "kg", "M", "1.0");
   liquid["ferren"] = UBASE("Omani", "ferren", 3.000090255291360E-02, "m3", "L3", "1.0");
   dry["cubic-muscat"] = UBASE("Omani", "cubic-muscat", 9.818173300541870E-01, "m3", "L3", "1.0");
   _map["Omani"] = BaseSystem("Omani", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit73(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["kos"] = UBASE("Pakistani", "kos", 3.621024000000000E+03, "m", "L", "1.0");
   length["farsang"] = UBASE("Pakistani", "farsang", 4.828032000000000E+03, "m", "L", "1.0");
   length["karam"] = UBASE("Pakistani", "karam", 1.676400000000000E+00, "m", "L", "1.0");
   area["kanai"] = UBASE("Pakistani", "kanai", 5.058570528000000E+02, "m2", "L2", "1.0");
   area["marla"] = UBASE("Pakistani", "marla", 2.529285264000000E+01, "m2", "L2", "1.0");
   mass["tola"] = UBASE("Pakistani", "tola", 1.166375000000000E-02, "kg", "M", "1.0");
   mass["ser"] = UBASE("Pakistani", "ser", 9.331000000000000E-01, "kg", "M", "1.0");
   mass["maund"] = UBASE("Pakistani", "maund", 3.732400000000000E+01, "kg", "M", "1.0");
   liquid["cubic-karam"] = UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3", "L3", "1.0");
   dry["cubic-karam"] = UBASE("Pakistani", "cubic-karam", 4.711215351744000E+00, "m3", "L3", "1.0");
   _map["Pakistani"] = BaseSystem("Pakistani", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit74(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cuadra"] = UBASE("Paraguayan", "cuadra", 8.660000000000000E+01, "m", "L", "1.0");
   length["cuerda"] = UBASE("Paraguayan", "cuerda", 2.405555555555560E+01, "m", "L", "1.0");
   length["legua"] = UBASE("Paraguayan", "legua", 4.330000000000000E+03, "m", "L", "1.0");
   length["lieue"] = UBASE("Paraguayan", "lieue", 4.330000000000000E+03, "m", "L", "1.0");
   length["ligne"] = UBASE("Paraguayan", "ligne", 2.004629629629630E-03, "m", "L", "1.0");
   length["linea"] = UBASE("Paraguayan", "linea", 2.004629629629630E-03, "m", "L", "1.0");
   length["piede"] = UBASE("Paraguayan", "piede", 2.886666666666670E-01, "m", "L", "1.0");
   length["pouce"] = UBASE("Paraguayan", "pouce", 2.405555555555560E-02, "m", "L", "1.0");
   length["pulgada"] = UBASE("Paraguayan", "pulgada", 2.405555555555560E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Paraguayan", "vara", 8.660000000000000E-01, "m", "L", "1.0");
   length["vara(old)"] = UBASE("Paraguayan", "vara(old)", 8.385600000000000E-01, "m", "L", "1.0");
   area["lifio"] = UBASE("Paraguayan", "lifio", 7.499560000000000E+01, "m2", "L2", "1.0");
   area["lifio(old)"] = UBASE("Paraguayan", "lifio(old)", 4.883605057152000E+03, "m2", "L2", "1.0");
   mass["arroba"] = UBASE("Paraguayan", "arroba", 1.147500000000000E+01, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Paraguayan", "libbra", 4.590000000000000E-01, "kg", "M", "1.0");
   mass["libbra(old)"] = UBASE("Paraguayan", "libbra(old)", 4.600800000000000E-01, "kg", "M", "1.0");
   mass["once"] = UBASE("Paraguayan", "once", 2.868750000000000E-02, "kg", "M", "1.0");
   mass["onza"] = UBASE("Paraguayan", "onza", 2.868750000000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Paraguayan", "quintal", 4.590000000000000E+01, "kg", "M", "1.0");
   mass["tonnelada"] = UBASE("Paraguayan", "tonnelada", 9.180000000000000E+02, "kg", "M", "1.0");
   liquid["almude"] = UBASE("Paraguayan", "almude", 2.400000000000000E-02, "m3", "L3", "1.0");
   liquid["baril"] = UBASE("Paraguayan", "baril", 9.600000000000000E-02, "m3", "L3", "1.0");
   liquid["cuarta"] = UBASE("Paraguayan", "cuarta", 7.500000000000000E-04, "m3", "L3", "1.0");
   liquid["cuarto"] = UBASE("Paraguayan", "cuarto", 7.500000000000000E-04, "m3", "L3", "1.0");
   liquid["fanega"] = UBASE("Paraguayan", "fanega", 2.880000000000000E-01, "m3", "L3", "1.0");
   liquid["frasco"] = UBASE("Paraguayan", "frasco", 3.000000000000000E-03, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("Paraguayan", "pipe", 5.760000000000000E-01, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Paraguayan", "cubic-vara", 6.494618960000000E-01, "m3", "L3", "1.0");
   _map["Paraguayan"] = BaseSystem("Paraguayan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit75(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["parasang(old)"] = UBASE("Persian", "parasang(old)", 6.400000000000000E+03, "m", "L", "1.0");
   length["parasang"] = UBASE("Persian", "parasang", 5.486400000000000E+03, "m", "L", "1.0");
   length["aiwas"] = UBASE("Persian", "aiwas", 2.000000000000000E-02, "m", "L", "1.0");
   length["angosht"] = UBASE("Persian", "angosht", 2.000000000000000E-02, "m", "L", "1.0");
   length["arish"] = UBASE("Persian", "arish", 9.600000000000000E-01, "m", "L", "1.0");
   length["arsani"] = UBASE("Persian", "arsani", 6.400000000000000E-01, "m", "L", "1.0");
   length["asparsa"] = UBASE("Persian", "asparsa", 1.920000000000000E+02, "m", "L", "1.0");
   length["charak"] = UBASE("Persian", "charak", 2.286000000000000E-01, "m", "L", "1.0");
   length["chebel"] = UBASE("Persian", "chebel", 2.560000000000000E+01, "m", "L", "1.0");
   length["cubit(long)"] = UBASE("Persian", "cubit(long)", 6.400000000000000E-01, "m", "L", "1.0");
   length["daca-trayas"] = UBASE("Persian", "daca-trayas", 3.200000000000000E+00, "m", "L", "1.0");
   length["dva"] = UBASE("Persian", "dva", 1.000000000000000E-01, "m", "L", "1.0");
   length["farsakh"] = UBASE("Persian", "farsakh", 5.486400000000000E+03, "m", "L", "1.0");
   length["farsang"] = UBASE("Persian", "farsang", 6.400000000000000E+03, "m", "L", "1.0");
   length["finger"] = UBASE("Persian", "finger", 2.000000000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Persian", "foot", 3.200000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Persian", "feet", 3.200000000000000E-01, "m", "L", "1.0");
   length["gez"] = UBASE("Persian", "gez", 9.144000000000000E-01, "m", "L", "1.0");
   length["ghalva"] = UBASE("Persian", "ghalva", 2.304000000000000E+02, "m", "L", "1.0");
   length["gireh"] = UBASE("Persian", "gireh", 5.715000000000000E-02, "m", "L", "1.0");
   length["guerze"] = UBASE("Persian", "guerze", 9.144000000000000E-01, "m", "L", "1.0");
   length["kswacsh-dva"] = UBASE("Persian", "kswacsh-dva", 6.000000000000000E-01, "m", "L", "1.0");
   length["mansion"] = UBASE("Persian", "mansion", 2.560000000000000E+04, "m", "L", "1.0");
   length["mille"] = UBASE("Persian", "mille", 1.728000000000000E+03, "m", "L", "1.0");
   length["pace"] = UBASE("Persian", "pace", 1.920000000000000E+00, "m", "L", "1.0");
   length["palm"] = UBASE("Persian", "palm", 8.000000000000000E-02, "m", "L", "1.0");
   length["panka"] = UBASE("Persian", "panka", 1.500000000000000E+00, "m", "L", "1.0");
   length["panka-dva"] = UBASE("Persian", "panka-dva", 5.000000000000000E-01, "m", "L", "1.0");
   length["qasab"] = UBASE("Persian", "qasab", 3.840000000000000E+00, "m", "L", "1.0");
   length["remen"] = UBASE("Persian", "remen", 4.000000000000000E-01, "m", "L", "1.0");
   length["schoeme"] = UBASE("Persian", "schoeme", 6.912000000000000E+03, "m", "L", "1.0");
   length["swacsh-dva"] = UBASE("Persian", "swacsh-dva", 6.000000000000000E-01, "m", "L", "1.0");
   length["trayas"] = UBASE("Persian", "trayas", 3.000000000000000E-01, "m", "L", "1.0");
   length["ulna"] = UBASE("Persian", "ulna", 6.400000000000000E-01, "m", "L", "1.0");
   length["urub"] = UBASE("Persian", "urub", 1.143000000000000E-01, "m", "L", "1.0");
   length["zar"] = UBASE("Persian", "zar", 1.040075829383890E+00, "m", "L", "1.0");
   length["zereth"] = UBASE("Persian", "zereth", 3.200000000000000E-01, "m", "L", "1.0");
   area["gan"] = UBASE("Persian", "gan", 1.474560000000000E+03, "m2", "L2", "1.0");
   area["gar"] = UBASE("Persian", "gar", 1.474560000000000E+01, "m2", "L2", "1.0");
   area["gur"] = UBASE("Persian", "gur", 1.474560000000000E+04, "m2", "L2", "1.0");
   area["ten"] = UBASE("Persian", "ten", 1.474560000000000E+02, "m2", "L2", "1.0");
   mass["abbassi"] = UBASE("Persian", "abbassi", 3.680000000000000E-01, "kg", "M", "1.0");
   mass["batman-shirez"] = UBASE("Persian", "batman-shirez", 5.888000000000000E+00, "kg", "M", "1.0");
   mass["batman-tauris"] = UBASE("Persian", "batman-tauris", 2.944000000000000E+00, "kg", "M", "1.0");
   mass["carat"] = UBASE("Persian", "carat", 1.916666666666670E-04, "kg", "M", "1.0");
   mass["danar"] = UBASE("Persian", "danar", 1.840000000000000E-01, "kg", "M", "1.0");
   mass["dartung"] = UBASE("Persian", "dartung", 1.022222222222220E-03, "kg", "M", "1.0");
   mass["dirhem"] = UBASE("Persian", "dirhem", 9.200000000000000E-03, "kg", "M", "1.0");
   mass["drachm"] = UBASE("Persian", "drachm", 3.260000000000000E-03, "kg", "M", "1.0");
   mass["dung"] = UBASE("Persian", "dung", 7.666666666666670E-04, "kg", "M", "1.0");
   mass["karvar"] = UBASE("Persian", "karvar", 5.888000000000000E+02, "kg", "M", "1.0");
   mass["makhod"] = UBASE("Persian", "makhod", 1.916666666666670E-04, "kg", "M", "1.0");
   mass["mine"] = UBASE("Persian", "mine", 3.260000000000000E-01, "kg", "M", "1.0");
   mass["miskal"] = UBASE("Persian", "miskal", 4.600000000000000E-03, "kg", "M", "1.0");
   mass["pinar"] = UBASE("Persian", "pinar", 1.472000000000000E-01, "kg", "M", "1.0");
   mass["rottel"] = UBASE("Persian", "rottel", 4.600000000000000E-01, "kg", "M", "1.0");
   mass["saddirham"] = UBASE("Persian", "saddirham", 1.472000000000000E+00, "kg", "M", "1.0");
   mass["sir"] = UBASE("Persian", "sir", 1.840000000000000E-02, "kg", "M", "1.0");
   mass["talent"] = UBASE("Persian", "talent", 3.260000000000000E+01, "kg", "M", "1.0");
   mass["tcheirek"] = UBASE("Persian", "tcheirek", 7.360000000000000E-01, "kg", "M", "1.0");
   liquid["artaba"] = UBASE("Persian", "artaba", 6.600000000000000E-02, "m3", "L3", "1.0");
   liquid["capichas"] = UBASE("Persian", "capichas", 2.640000000000000E-03, "m3", "L3", "1.0");
   liquid["chenica"] = UBASE("Persian", "chenica", 1.320000000000000E-03, "m3", "L3", "1.0");
   liquid["colluthun"] = UBASE("Persian", "colluthun", 8.250000000000000E-03, "m3", "L3", "1.0");
   liquid["legana"] = UBASE("Persian", "legana", 3.960000000000000E-02, "m3", "L3", "1.0");
   liquid["sabbitha"] = UBASE("Persian", "sabbitha", 7.260000000000000E-03, "m3", "L3", "1.0");
   liquid["sextario"] = UBASE("Persian", "sextario", 3.300000000000000E-04, "m3", "L3", "1.0");
   dry["amphora"] = UBASE("Persian", "amphora", 3.260000000000000E-02, "m3", "L3", "1.0");
   dry["amphora(long)"] = UBASE("Persian", "amphora(long)", 9.780000000000000E-02, "m3", "L3", "1.0");
   dry["artaba(long)"] = UBASE("Persian", "artaba(long)", 6.520000000000000E-02, "m3", "L3", "1.0");
   dry["artaba(short)"] = UBASE("Persian", "artaba(short)", 4.890000000000000E-02, "m3", "L3", "1.0");
   dry["cados"] = UBASE("Persian", "cados", 1.018750000000000E-03, "m3", "L3", "1.0");
   dry["gariba"] = UBASE("Persian", "gariba", 2.608000000000000E-01, "m3", "L3", "1.0");
   dry["makuk"] = UBASE("Persian", "makuk", 4.075000000000000E-03, "m3", "L3", "1.0");
   dry["woebe(modius)"] = UBASE("Persian", "woebe(modius)", 1.630000000000000E-02, "m3", "L3", "1.0");
   _map["Persian"] = BaseSystem("Persian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit76(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["pie"] = UBASE("Peruvian", "pie", 2.786600000000000E-01, "m", "L", "1.0");
   length["vara"] = UBASE("Peruvian", "vara", 8.359800000000000E-01, "m", "L", "1.0");
   area["fanegada"] = UBASE("Peruvian", "fanegada", 3.144881521800000E+03, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Peruvian", "square-vara", 6.988625604000000E-01, "m2", "L2", "1.0");
   area["topo"] = UBASE("Peruvian", "topo", 2.705995833868800E+03, "m2", "L2", "1.0");
   mass["arroba"] = UBASE("Peruvian", "arroba", 1.150225000000000E+01, "kg", "M", "1.0");
   mass["bale"] = UBASE("Peruvian", "bale", 1.133980925000000E+02, "kg", "M", "1.0");
   mass["fanega"] = UBASE("Peruvian", "fanega", 6.441260000000000E+01, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Peruvian", "libbra", 4.600900000000000E-01, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Peruvian", "quintal", 4.600900000000000E+01, "kg", "M", "1.0");
   liquid["cubic-vara"] = UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Peruvian", "cubic-vara", 5.842351232431920E-01, "m3", "L3", "1.0");
   _map["Peruvian"] = BaseSystem("Peruvian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit77(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["bisig"] = UBASE("Philippine", "bisig", 4.064000000000000E-01, "m", "L", "1.0");
   length["dangkal"] = UBASE("Philippine", "dangkal", 2.032000000000000E-01, "m", "L", "1.0");
   length["dipa"] = UBASE("Philippine", "dipa", 1.727200000000000E+00, "m", "L", "1.0");
   length["piranggot"] = UBASE("Philippine", "piranggot", 1.270000000000000E-02, "m", "L", "1.0");
   length["sandamak"] = UBASE("Philippine", "sandamak", 1.016000000000000E-01, "m", "L", "1.0");
   length["talampakan"] = UBASE("Philippine", "talampakan", 3.048000000000000E-01, "m", "L", "1.0");
   area["balita"] = UBASE("Philippine", "balita", 2.795000000000000E+03, "m2", "L2", "1.0");
   area["loan"] = UBASE("Philippine", "loan", 2.795000000000000E+02, "m2", "L2", "1.0");
   area["quignon"] = UBASE("Philippine", "quignon", 2.795000000000000E+04, "m2", "L2", "1.0");
   mass["caban"] = UBASE("Philippine", "caban", 5.820000000000000E+01, "kg", "M", "1.0");
   mass["catty"] = UBASE("Philippine", "catty", 6.000000000000000E-01, "kg", "M", "1.0");
   mass["chinanta"] = UBASE("Philippine", "chinanta", 6.000000000000000E+00, "kg", "M", "1.0");
   mass["dakot"] = UBASE("Philippine", "dakot", 1.000000000000000E-02, "kg", "M", "1.0");
   mass["gatang"] = UBASE("Philippine", "gatang", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["guhit"] = UBASE("Philippine", "guhit", 1.000000000000000E-01, "kg", "M", "1.0");
   mass["kaban"] = UBASE("Philippine", "kaban", 2.500000000000000E+01, "kg", "M", "1.0");
   mass["kagitna"] = UBASE("Philippine", "kagitna", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["kurot"] = UBASE("Philippine", "kurot", 5.000000000000000E-03, "kg", "M", "1.0");
   mass["lachsa"] = UBASE("Philippine", "lachsa", 2.880000000000000E+01, "kg", "M", "1.0");
   mass["pecul"] = UBASE("Philippine", "pecul", 6.000000000000000E+01, "kg", "M", "1.0");
   mass["punto"] = UBASE("Philippine", "punto", 2.000000000000000E-01, "kg", "M", "1.0");
   liquid["apatan"] = UBASE("Philippine", "apatan", 9.990000000000000E-07, "m3", "L3", "1.0");
   liquid["chupa"] = UBASE("Philippine", "chupa", 3.996000000000000E-06, "m3", "L3", "1.0");
   liquid["ganta"] = UBASE("Philippine", "ganta", 3.996000000000000E-03, "m3", "L3", "1.0");
   liquid["kaban"] = UBASE("Philippine", "kaban", 9.990000000000000E-02, "m3", "L3", "1.0");
   liquid["mangok"] = UBASE("Philippine", "mangok", 4.000000000000000E-04, "m3", "L3", "1.0");
   liquid["salok"] = UBASE("Philippine", "salok", 8.000000000000000E-05, "m3", "L3", "1.0");
   liquid["saro"] = UBASE("Philippine", "saro", 2.500000000000000E-04, "m3", "L3", "1.0");
   dry["cubic-talampakan"] = UBASE("Philippine", "cubic-talampakan", 2.831684659200000E-02, "m3", "L3", "1.0");
   _map["Philippine"] = BaseSystem("Philippine", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit78(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cal(Cracow)"] = UBASE("Polish", "cal(Cracow)", 1.963666666666670E-02, "m", "L", "1.0");
   length["cal(new)"] = UBASE("Polish", "cal(new)", 2.400000000000000E-02, "m", "L", "1.0");
   length["cal(Warsaw)"] = UBASE("Polish", "cal(Warsaw)", 2.481666666666670E-02, "m", "L", "1.0");
   length["linja(Cracow)"] = UBASE("Polish", "linja(Cracow)", 1.636388888888890E-03, "m", "L", "1.0");
   length["linja(new)"] = UBASE("Polish", "linja(new)", 2.000000000000000E-03, "m", "L", "1.0");
   length["linja(Warsaw)"] = UBASE("Polish", "linja(Warsaw)", 2.068055555555560E-03, "m", "L", "1.0");
   length["lockie(Cracow)"] = UBASE("Polish", "lockie(Cracow)", 1.178200000000000E-01, "m", "L", "1.0");
   length["lockie(new)"] = UBASE("Polish", "lockie(new)", 1.440000000000000E-01, "m", "L", "1.0");
   length["lockie(Warsaw)"] = UBASE("Polish", "lockie(Warsaw)", 1.489000000000000E-01, "m", "L", "1.0");
   length["pret(Cracow)"] = UBASE("Polish", "pret(Cracow)", 3.534600000000000E+00, "m", "L", "1.0");
   length["pret(new)"] = UBASE("Polish", "pret(new)", 4.320000000000000E+00, "m", "L", "1.0");
   length["pret(Warsaw)"] = UBASE("Polish", "pret(Warsaw)", 4.467000000000000E+00, "m", "L", "1.0");
   length["sazen(Cracow)"] = UBASE("Polish", "sazen(Cracow)", 1.413840000000000E+00, "m", "L", "1.0");
   length["sazen(new)"] = UBASE("Polish", "sazen(new)", 1.728000000000000E+00, "m", "L", "1.0");
   length["sazen(Warsaw)"] = UBASE("Polish", "sazen(Warsaw)", 1.786800000000000E+00, "m", "L", "1.0");
   length["stopa(Cracow)"] = UBASE("Polish", "stopa(Cracow)", 2.356400000000000E-01, "m", "L", "1.0");
   length["stopa(new)"] = UBASE("Polish", "stopa(new)", 2.880000000000000E-01, "m", "L", "1.0");
   length["stopa(Warsaw)"] = UBASE("Polish", "stopa(Warsaw)", 2.978000000000000E-01, "m", "L", "1.0");
   area["morga(Cracow)"] = UBASE("Polish", "morga(Cracow)", 3.748019148000000E+03, "m2", "L2", "1.0");
   area["morga(new)"] = UBASE("Polish", "morga(new)", 5.598720000000000E+03, "m2", "L2", "1.0");
   area["morga(Warsaw)"] = UBASE("Polish", "morga(Warsaw)", 5.986226700000000E+03, "m2", "L2", "1.0");
   area["square-pret(Cracow)"] = UBASE("Polish", "square-pret(Cracow)", 1.249339716000000E+01, "m2", "L2", "1.0");
   area["square-pret(new)"] = UBASE("Polish", "square-pret(new)", 1.866240000000000E+01, "m2", "L2", "1.0");
   area["square-pret(Warsaw)"] = UBASE("Polish", "square-pret(Warsaw)", 1.995408900000000E+01, "m2", "L2", "1.0");
   area["square-topa(Cracow)"] = UBASE("Polish", "square-topa(Cracow)", 5.552620960000000E-02, "m2", "L2", "1.0");
   area["square-stopa(new)"] = UBASE("Polish", "square-stopa(new)", 8.294400000000000E-02, "m2", "L2", "1.0");
   area["square-stopa(Warsaw)"] = UBASE("Polish", "square-stopa(Warsaw)", 8.868484000000000E-02, "m2", "L2", "1.0");
   area["wloka(Cracow)"] = UBASE("Polish", "wloka(Cracow)", 1.124405744400000E+05, "m2", "L2", "1.0");
   area["wloka(new)"] = UBASE("Polish", "wloka(new)", 1.679616000000000E+05, "m2", "L2", "1.0");
   area["wloka(Warsaw)"] = UBASE("Polish", "wloka(Warsaw)", 1.795868010000000E+05, "m2", "L2", "1.0");
   mass["centnar"] = UBASE("Polish", "centnar", 4.055040000000000E+01, "kg", "M", "1.0");
   mass["drachma"] = UBASE("Polish", "drachma", 3.168000000000000E-03, "kg", "M", "1.0");
   mass["funt"] = UBASE("Polish", "funt", 4.055040000000000E-01, "kg", "M", "1.0");
   mass["gran"] = UBASE("Polish", "gran", 4.400000000000000E-05, "kg", "M", "1.0");
   mass["kamian"] = UBASE("Polish", "kamian", 1.013760000000000E+01, "kg", "M", "1.0");
   mass["lut"] = UBASE("Polish", "lut", 1.267200000000000E-02, "kg", "M", "1.0");
   mass["skrupul"] = UBASE("Polish", "skrupul", 1.056000000000000E-03, "kg", "M", "1.0");
   mass["uncja"] = UBASE("Polish", "uncja", 2.534400000000000E-02, "kg", "M", "1.0");
   liquid["cwierc"] = UBASE("Polish", "cwierc", 3.200000000000000E-02, "m3", "L3", "1.0");
   liquid["garniec"] = UBASE("Polish", "garniec", 4.000000000000000E-03, "m3", "L3", "1.0");
   liquid["korzec"] = UBASE("Polish", "korzec", 1.280000000000000E-01, "m3", "L3", "1.0");
   liquid["kwarta"] = UBASE("Polish", "kwarta", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["kwarterka"] = UBASE("Polish", "kwarterka", 2.500000000000000E-04, "m3", "L3", "1.0");
   dry["cubic-stopa"] = UBASE("Polish", "cubic-stopa", 2.388787200000000E-02, "m3", "L3", "1.0");
   _map["Polish"] = BaseSystem("Polish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit79(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["braca"] = UBASE("Portuguese", "braca", 2.190000000000000E+00, "m", "L", "1.0");
   length["covada"] = UBASE("Portuguese", "covada", 6.570000000000000E-01, "m", "L", "1.0");
   length["covado"] = UBASE("Portuguese", "covado", 6.570000000000000E-01, "m", "L", "1.0");
   length["estadio"] = UBASE("Portuguese", "estadio", 2.584200000000000E+02, "m", "L", "1.0");
   length["foot"] = UBASE("Portuguese", "foot", 3.285000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Portuguese", "feet", 3.285000000000000E-01, "m", "L", "1.0");
   length["legoa"] = UBASE("Portuguese", "legoa", 6.202080000000000E+03, "m", "L", "1.0");
   length["linha"] = UBASE("Portuguese", "linha", 2.281250000000000E-03, "m", "L", "1.0");
   length["milha"] = UBASE("Portuguese", "milha", 2.067360000000000E+03, "m", "L", "1.0");
   length["palmo"] = UBASE("Portuguese", "palmo", 2.190000000000000E-01, "m", "L", "1.0");
   length["passo-geometrico"] = UBASE("Portuguese", "passo-geometrico", 1.642500000000000E+00, "m", "L", "1.0");
   length["pe"] = UBASE("Portuguese", "pe", 3.285000000000000E-01, "m", "L", "1.0");
   length["polegada"] = UBASE("Portuguese", "polegada", 2.737500000000000E-02, "m", "L", "1.0");
   length["pollegada"] = UBASE("Portuguese", "pollegada", 2.737500000000000E-02, "m", "L", "1.0");
   length["ponto"] = UBASE("Portuguese", "ponto", 1.901041666666670E-04, "m", "L", "1.0");
   length["toesa"] = UBASE("Portuguese", "toesa", 1.971000000000000E+00, "m", "L", "1.0");
   length["vara"] = UBASE("Portuguese", "vara", 1.095000000000000E+00, "m", "L", "1.0");
   area["ferrado"] = UBASE("Portuguese", "ferrado", 7.254101250000000E+02, "m2", "L2", "1.0");
   area["geira"] = UBASE("Portuguese", "geira", 5.803281000000000E+03, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Portuguese", "square-vara", 1.199025000000000E+00, "m2", "L2", "1.0");
   mass["arratel"] = UBASE("Portuguese", "arratel", 4.590000000000000E-01, "kg", "M", "1.0");
   mass["arroba"] = UBASE("Portuguese", "arroba", 1.468800000000000E+01, "kg", "M", "1.0");
   mass["escrupolo"] = UBASE("Portuguese", "escrupolo", 1.195312500000000E-03, "kg", "M", "1.0");
   mass["escrupulo"] = UBASE("Portuguese", "escrupulo", 1.195312500000000E-03, "kg", "M", "1.0");
   mass["grao"] = UBASE("Portuguese", "grao", 4.980468750000000E-05, "kg", "M", "1.0");
   mass["libra"] = UBASE("Portuguese", "libra", 4.590000000000000E-01, "kg", "M", "1.0");
   mass["marco"] = UBASE("Portuguese", "marco", 2.295000000000000E-01, "kg", "M", "1.0");
   mass["meio"] = UBASE("Portuguese", "meio", 2.295000000000000E-01, "kg", "M", "1.0");
   mass["oitava"] = UBASE("Portuguese", "oitava", 3.585937500000000E-03, "kg", "M", "1.0");
   mass["onca"] = UBASE("Portuguese", "onca", 2.868750000000000E-02, "kg", "M", "1.0");
   mass["outava"] = UBASE("Portuguese", "outava", 3.585937500000000E-03, "kg", "M", "1.0");
   mass["quarta"] = UBASE("Portuguese", "quarta", 1.147500000000000E-01, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Portuguese", "quintal", 5.875200000000000E+01, "kg", "M", "1.0");
   mass["tonelada"] = UBASE("Portuguese", "tonelada", 7.931520000000000E+02, "kg", "M", "1.0");
   liquid["alqueira"] = UBASE("Portuguese", "alqueira", 2.750000000000000E-03, "m3", "L3", "1.0");
   liquid["bota"] = UBASE("Portuguese", "bota", 4.290000000000000E-01, "m3", "L3", "1.0");
   liquid["canada"] = UBASE("Portuguese", "canada", 1.375000000000000E-03, "m3", "L3", "1.0");
   liquid["meio"] = UBASE("Portuguese", "meio", 6.875000000000000E-04, "m3", "L3", "1.0");
   liquid["pipa"] = UBASE("Portuguese", "pipa", 4.290000000000000E-01, "m3", "L3", "1.0");
   liquid["pote"] = UBASE("Portuguese", "pote", 8.250000000000000E-03, "m3", "L3", "1.0");
   liquid["quartilho"] = UBASE("Portuguese", "quartilho", 3.437500000000000E-04, "m3", "L3", "1.0");
   liquid["quartillo"] = UBASE("Portuguese", "quartillo", 3.437500000000000E-04, "m3", "L3", "1.0");
   liquid["tonel"] = UBASE("Portuguese", "tonel", 8.250000000000000E-01, "m3", "L3", "1.0");
   liquid["tonnelada"] = UBASE("Portuguese", "tonnelada", 8.580000000000000E-01, "m3", "L3", "1.0");
   dry["almude"] = UBASE("Portuguese", "almude", 1.650000000000000E-02, "m3", "L3", "1.0");
   dry["alqueira"] = UBASE("Portuguese", "alqueira", 1.350000000000000E-02, "m3", "L3", "1.0");
   dry["fanga"] = UBASE("Portuguese", "fanga", 5.400000000000000E-02, "m3", "L3", "1.0");
   dry["meio"] = UBASE("Portuguese", "meio", 6.750000000000000E-03, "m3", "L3", "1.0");
   dry["moio"] = UBASE("Portuguese", "moio", 8.100000000000000E-01, "m3", "L3", "1.0");
   dry["outava"] = UBASE("Portuguese", "outava", 1.687500000000000E-03, "m3", "L3", "1.0");
   dry["quarto"] = UBASE("Portuguese", "quarto", 3.375000000000000E-03, "m3", "L3", "1.0");
   _map["Portuguese"] = BaseSystem("Portuguese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit80(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   area["caballeria"] = UBASE("Puerto-Rican", "caballeria", 7.860791250000000E+05, "m2", "L2", "1.0");
   area["cuerda"] = UBASE("Puerto-Rican", "cuerda", 3.930395625000000E+03, "m2", "L2", "1.0");
   _map["Puerto-Rican"] = BaseSystem("Puerto-Rican", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit81(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["actus"] = UBASE("Roman", "actus", 3.532800000000000E+01, "m", "L", "1.0");
   length["cubitum"] = UBASE("Roman", "cubitum", 4.416000000000000E-01, "m", "L", "1.0");
   length["cubitus"] = UBASE("Roman", "cubitus", 4.416000000000000E-01, "m", "L", "1.0");
   length["cubit"] = UBASE("Roman", "cubit", 4.416000000000000E-01, "m", "L", "1.0");
   length["decempeda"] = UBASE("Roman", "decempeda", 2.944000000000000E+00, "m", "L", "1.0");
   length["decempeda-pertica"] = UBASE("Roman", "decempeda-pertica", 2.944000000000000E+00, "m", "L", "1.0");
   length["digitus"] = UBASE("Roman", "digitus", 1.840000000000000E-02, "m", "L", "1.0");
   length["finger"] = UBASE("Roman", "finger", 1.840000000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Roman", "foot", 2.944000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Roman", "feet", 2.944000000000000E-01, "m", "L", "1.0");
   length["gradus"] = UBASE("Roman", "gradus", 7.360000000000000E-01, "m", "L", "1.0");
   length["gradus-pes-sestertius"] = UBASE("Roman", "gradus-pes-sestertius", 7.360000000000000E-01, "m", "L", "1.0");
   length["legua"] = UBASE("Roman", "legua", 2.221500000000000E+03, "m", "L", "1.0");
   length["leuca"] = UBASE("Roman", "leuca", 2.208000000000000E+03, "m", "L", "1.0");
   length["leuga"] = UBASE("Roman", "leuga", 2.208000000000000E+03, "m", "L", "1.0");
   length["mille-passus"] = UBASE("Roman", "mille-passus", 1.472000000000000E+03, "m", "L", "1.0");
   length["mille-passuum"] = UBASE("Roman", "mille-passuum", 1.472000000000000E+03, "m", "L", "1.0");
   length["milliarum"] = UBASE("Roman", "milliarum", 1.472000000000000E+03, "m", "L", "1.0");
   length["palmipes"] = UBASE("Roman", "palmipes", 3.680000000000000E-01, "m", "L", "1.0");
   length["palmus"] = UBASE("Roman", "palmus", 7.360000000000000E-02, "m", "L", "1.0");
   length["palmus-major"] = UBASE("Roman", "palmus-major", 2.208000000000000E-01, "m", "L", "1.0");
   length["passus"] = UBASE("Roman", "passus", 1.472000000000000E+00, "m", "L", "1.0");
   length["pes"] = UBASE("Roman", "pes", 2.944000000000000E-01, "m", "L", "1.0");
   length["pes(1st-legal)"] = UBASE("Roman", "pes(1st-legal)", 2.962000000000000E-01, "m", "L", "1.0");
   length["pes(2nd-legal)"] = UBASE("Roman", "pes(2nd-legal)", 2.967000000000000E-01, "m", "L", "1.0");
   length["pes(Drussian)"] = UBASE("Roman", "pes(Drussian)", 3.196000000000000E-01, "m", "L", "1.0");
   length["pollex"] = UBASE("Roman", "pollex", 2.453333333333330E-02, "m", "L", "1.0");
   length["schoenus"] = UBASE("Roman", "schoenus", 5.924000000000000E+03, "m", "L", "1.0");
   length["stadium"] = UBASE("Roman", "stadium", 1.997500000000000E+02, "m", "L", "1.0");
   length["uncia"] = UBASE("Roman", "uncia", 2.453333333333330E-02, "m", "L", "1.0");
   area["acnua"] = UBASE("Roman", "acnua", 1.263375936000000E+03, "m2", "L2", "1.0");
   area["actus-quadratus"] = UBASE("Roman", "actus-quadratus", 1.263375936000000E+03, "m2", "L2", "1.0");
   area["actus-simplex"] = UBASE("Roman", "actus-simplex", 4.211253120000000E+01, "m2", "L2", "1.0");
   area["bes"] = UBASE("Roman", "bes", 1.684501248000000E+03, "m2", "L2", "1.0");
   area["centuria"] = UBASE("Roman", "centuria", 5.053503744000000E+05, "m2", "L2", "1.0");
   area["centurium"] = UBASE("Roman", "centurium", 5.053503744000000E+05, "m2", "L2", "1.0");
   area["clima"] = UBASE("Roman", "clima", 3.158439840000000E+02, "m2", "L2", "1.0");
   area["decempeda-quadrata"] = UBASE("Roman", "decempeda-quadrata", 8.667136000000000E+00, "m2", "L2", "1.0");
   area["deunx"] = UBASE("Roman", "deunx", 2.316189216000000E+03, "m2", "L2", "1.0");
   area["dextans"] = UBASE("Roman", "dextans", 2.105626560000000E+03, "m2", "L2", "1.0");
   area["dimidium-scruplum"] = UBASE("Roman", "dimidium-scruplum", 4.386722000000000E+00, "m2", "L2", "1.0");
   area["dodrans"] = UBASE("Roman", "dodrans", 1.895063904000000E+03, "m2", "L2", "1.0");
   area["duo-scrupula"] = UBASE("Roman", "duo-scrupula", 1.754688800000000E+01, "m2", "L2", "1.0");
   area["heredium"] = UBASE("Roman", "heredium", 5.053503744000000E+03, "m2", "L2", "1.0");
   area["jugerum"] = UBASE("Roman", "jugerum", 2.526751872000000E+03, "m2", "L2", "1.0");
   area["quadrans"] = UBASE("Roman", "quadrans", 6.316879680000000E+02, "m2", "L2", "1.0");
   area["quadratus-pes(1st-legal)"] = UBASE("Roman", "quadratus-pes(1st-legal)", 8.773444000000000E-02, "m2", "L2", "1.0");
   area["quadratus-pes(2nd-legal)"] = UBASE("Roman", "quadratus-pes(2nd-legal)", 8.803089000000000E-02, "m2", "L2", "1.0");
   area["quadratus-pes(common)"] = UBASE("Roman", "quadratus-pes(common)", 8.667136000000000E-02, "m2", "L2", "1.0");
   area["quadratus-pes(Drussian)"] = UBASE("Roman", "quadratus-pes(Drussian)", 1.021441600000000E-01, "m2", "L2", "1.0");
   area["quincunx"] = UBASE("Roman", "quincunx", 1.052813280000000E+03, "m2", "L2", "1.0");
   area["saltus"] = UBASE("Roman", "saltus", 2.021401497600000E+06, "m2", "L2", "1.0");
   area["scrupulum"] = UBASE("Roman", "scrupulum", 8.773444000000000E+00, "m2", "L2", "1.0");
   area["semis"] = UBASE("Roman", "semis", 1.263375936000000E+03, "m2", "L2", "1.0");
   area["semiuncia"] = UBASE("Roman", "semiuncia", 1.052813280000000E+02, "m2", "L2", "1.0");
   area["septunx"] = UBASE("Roman", "septunx", 1.473938592000000E+03, "m2", "L2", "1.0");
   area["sextans"] = UBASE("Roman", "sextans", 4.211253120000000E+02, "m2", "L2", "1.0");
   area["sextula"] = UBASE("Roman", "sextula", 3.509377600000000E+01, "m2", "L2", "1.0");
   area["short-actus"] = UBASE("Roman", "short-actus", 3.509377600000000E+01, "m2", "L2", "1.0");
   area["sicilius"] = UBASE("Roman", "sicilius", 5.264066400000000E+01, "m2", "L2", "1.0");
   area["triens"] = UBASE("Roman", "triens", 8.422506240000000E+02, "m2", "L2", "1.0");
   area["uncia"] = UBASE("Roman", "uncia", 2.105626560000000E+02, "m2", "L2", "1.0");
   area["versum"] = UBASE("Roman", "versum", 8.773444000000000E+02, "m2", "L2", "1.0");
   mass["bes"] = UBASE("Roman", "bes", 2.180000000000000E-01, "kg", "M", "1.0");
   mass["bessis"] = UBASE("Roman", "bessis", 2.180000000000000E-01, "kg", "M", "1.0");
   mass["centum-podium"] = UBASE("Roman", "centum-podium", 3.270000000000000E+01, "kg", "M", "1.0");
   mass["demidia-sextula"] = UBASE("Roman", "demidia-sextula", 2.270833333333330E-03, "kg", "M", "1.0");
   mass["denarius"] = UBASE("Roman", "denarius", 3.892857142857140E-03, "kg", "M", "1.0");
   mass["denier"] = UBASE("Roman", "denier", 3.406250000000000E-03, "kg", "M", "1.0");
   mass["deunx"] = UBASE("Roman", "deunx", 2.997500000000000E-01, "kg", "M", "1.0");
   mass["dextans"] = UBASE("Roman", "dextans", 2.725000000000000E-01, "kg", "M", "1.0");
   mass["dodrans"] = UBASE("Roman", "dodrans", 2.452500000000000E-01, "kg", "M", "1.0");
   mass["duella"] = UBASE("Roman", "duella", 9.083333333333330E-03, "kg", "M", "1.0");
   mass["libra"] = UBASE("Roman", "libra", 3.270000000000000E-01, "kg", "M", "1.0");
   mass["miliaresium"] = UBASE("Roman", "miliaresium", 5.450000000000000E-03, "kg", "M", "1.0");
   mass["mina"] = UBASE("Roman", "mina", 5.450000000000000E-01, "kg", "M", "1.0");
   mass["obolus"] = UBASE("Roman", "obolus", 5.677083333333330E-04, "kg", "M", "1.0");
   mass["podium"] = UBASE("Roman", "podium", 3.270000000000000E-01, "kg", "M", "1.0");
   mass["quadrans"] = UBASE("Roman", "quadrans", 8.175000000000000E-02, "kg", "M", "1.0");
   mass["quadrans-teruncius"] = UBASE("Roman", "quadrans-teruncius", 8.175000000000000E-02, "kg", "M", "1.0");
   mass["quicunx"] = UBASE("Roman", "quicunx", 1.362500000000000E-01, "kg", "M", "1.0");
   mass["scripulum"] = UBASE("Roman", "scripulum", 1.135416666666670E-03, "kg", "M", "1.0");
   mass["semis"] = UBASE("Roman", "semis", 1.635000000000000E-01, "kg", "M", "1.0");
   mass["semisextula"] = UBASE("Roman", "semisextula", 2.270833333333330E-03, "kg", "M", "1.0");
   mass["semissis"] = UBASE("Roman", "semissis", 1.635000000000000E-01, "kg", "M", "1.0");
   mass["semiuncia"] = UBASE("Roman", "semiuncia", 1.362500000000000E-02, "kg", "M", "1.0");
   mass["septunx"] = UBASE("Roman", "septunx", 1.907500000000000E-01, "kg", "M", "1.0");
   mass["sescuncia"] = UBASE("Roman", "sescuncia", 4.087500000000000E-02, "kg", "M", "1.0");
   mass["sescunx"] = UBASE("Roman", "sescunx", 4.087500000000000E-02, "kg", "M", "1.0");
   mass["sextans"] = UBASE("Roman", "sextans", 5.450000000000000E-02, "kg", "M", "1.0");
   mass["sextula"] = UBASE("Roman", "sextula", 4.541666666666670E-03, "kg", "M", "1.0");
   mass["siciliquus"] = UBASE("Roman", "siciliquus", 6.812500000000000E-03, "kg", "M", "1.0");
   mass["sicilium"] = UBASE("Roman", "sicilium", 6.812500000000000E-03, "kg", "M", "1.0");
   mass["sicilius"] = UBASE("Roman", "sicilius", 6.812500000000000E-03, "kg", "M", "1.0");
   mass["siliqua"] = UBASE("Roman", "siliqua", 1.892361111111110E-04, "kg", "M", "1.0");
   mass["solidus"] = UBASE("Roman", "solidus", 4.541666666666670E-03, "kg", "M", "1.0");
   mass["triens"] = UBASE("Roman", "triens", 1.090000000000000E-01, "kg", "M", "1.0");
   mass["uncia"] = UBASE("Roman", "uncia", 2.725000000000000E-02, "kg", "M", "1.0");
   liquid["acetabulum"] = UBASE("Roman", "acetabulum", 6.866000000000000E-05, "m3", "L3", "1.0");
   liquid["ligula"] = UBASE("Roman", "ligula", 1.144333333333330E-05, "m3", "L3", "1.0");
   liquid["amphora"] = UBASE("Roman", "amphora", 2.636544000000000E-02, "m3", "L3", "1.0");
   liquid["amphora-quadrantal"] = UBASE("Roman", "amphora-quadrantal", 2.636544000000000E-02, "m3", "L3", "1.0");
   liquid["chenica"] = UBASE("Roman", "chenica", 8.239200000000000E-04, "m3", "L3", "1.0");
   liquid["cochlearia"] = UBASE("Roman", "cochlearia", 1.144333333333330E-05, "m3", "L3", "1.0");
   liquid["congius"] = UBASE("Roman", "congius", 3.295680000000000E-03, "m3", "L3", "1.0");
   liquid["cotyla"] = UBASE("Roman", "cotyla", 2.746400000000000E-04, "m3", "L3", "1.0");
   liquid["culeus"] = UBASE("Roman", "culeus", 5.273088000000000E-01, "m3", "L3", "1.0");
   liquid["culleus"] = UBASE("Roman", "culleus", 5.273088000000000E-01, "m3", "L3", "1.0");
   liquid["cyathus"] = UBASE("Roman", "cyathus", 4.577333333333330E-05, "m3", "L3", "1.0");
   liquid["dolium"] = UBASE("Roman", "dolium", 5.273088000000000E-01, "m3", "L3", "1.0");
   liquid["hemina"] = UBASE("Roman", "hemina", 2.746400000000000E-04, "m3", "L3", "1.0");
   liquid["meterte"] = UBASE("Roman", "meterte", 2.636544000000000E-02, "m3", "L3", "1.0");
   liquid["quartarius"] = UBASE("Roman", "quartarius", 1.373200000000000E-04, "m3", "L3", "1.0");
   liquid["quartus"] = UBASE("Roman", "quartus", 1.373200000000000E-04, "m3", "L3", "1.0");
   liquid["semodius"] = UBASE("Roman", "semodius", 4.394240000000000E-03, "m3", "L3", "1.0");
   liquid["sextarius"] = UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3", "L3", "1.0");
   liquid["urna"] = UBASE("Roman", "urna", 1.318272000000000E-02, "m3", "L3", "1.0");
   dry["acetabulum"] = UBASE("Roman", "acetabulum", 6.866000000000000E-05, "m3", "L3", "1.0");
   dry["cotyla"] = UBASE("Roman", "cotyla", 2.746400000000000E-04, "m3", "L3", "1.0");
   dry["cyathus"] = UBASE("Roman", "cyathus", 4.577333333333330E-05, "m3", "L3", "1.0");
   dry["hemina"] = UBASE("Roman", "hemina", 2.746400000000000E-04, "m3", "L3", "1.0");
   dry["ligula"] = UBASE("Roman", "ligula", 1.144333333333330E-05, "m3", "L3", "1.0");
   dry["modius"] = UBASE("Roman", "modius", 8.788480000000000E-03, "m3", "L3", "1.0");
   dry["modius-castrensis"] = UBASE("Roman", "modius-castrensis", 1.318272000000000E-02, "m3", "L3", "1.0");
   dry["muid"] = UBASE("Roman", "muid", 8.788480000000000E-03, "m3", "L3", "1.0");
   dry["quadrantal"] = UBASE("Roman", "quadrantal", 2.636544000000000E-02, "m3", "L3", "1.0");
   dry["quartarius"] = UBASE("Roman", "quartarius", 1.373200000000000E-04, "m3", "L3", "1.0");
   dry["semimodius"] = UBASE("Roman", "semimodius", 4.394240000000000E-03, "m3", "L3", "1.0");
   dry["sextarius"] = UBASE("Roman", "sextarius", 5.492800000000000E-04, "m3", "L3", "1.0");
   _map["Roman"] = BaseSystem("Roman", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit82(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cot(Moldavia)"] = UBASE("Romanian", "cot(Moldavia)", 6.640000000000000E-01, "m", "L", "1.0");
   length["cot(Wallachia)"] = UBASE("Romanian", "cot(Wallachia)", 6.370000000000000E-01, "m", "L", "1.0");
   length["deget"] = UBASE("Romanian", "deget", 2.000000000000000E-02, "m", "L", "1.0");
   length["endere"] = UBASE("Romanian", "endere", 6.620000000000000E-01, "m", "L", "1.0");
   length["finger"] = UBASE("Romanian", "finger", 2.000000000000000E-02, "m", "L", "1.0");
   length["funie"] = UBASE("Romanian", "funie", 7.000000000000000E+01, "m", "L", "1.0");
   length["halibiu"] = UBASE("Romanian", "halibiu", 7.010000000000000E-01, "m", "L", "1.0");
   length["lat-de-palma"] = UBASE("Romanian", "lat-de-palma", 1.250000000000000E-01, "m", "L", "1.0");
   length["leghe"] = UBASE("Romanian", "leghe", 4.444000000000000E+03, "m", "L", "1.0");
   length["palma"] = UBASE("Romanian", "palma", 2.500000000000000E-01, "m", "L", "1.0");
   length["palmac"] = UBASE("Romanian", "palmac", 3.480000000000000E-02, "m", "L", "1.0");
   length["pas-mare"] = UBASE("Romanian", "pas-mare", 1.500000000000000E+00, "m", "L", "1.0");
   length["pas-mic"] = UBASE("Romanian", "pas-mic", 1.000000000000000E+00, "m", "L", "1.0");
   length["picior"] = UBASE("Romanian", "picior", 3.333333333333330E-01, "m", "L", "1.0");
   length["posta"] = UBASE("Romanian", "posta", 1.400000000000000E+04, "m", "L", "1.0");
   length["prajina"] = UBASE("Romanian", "prajina", 6.000000000000000E+00, "m", "L", "1.0");
   length["stanjen"] = UBASE("Romanian", "stanjen", 2.000000000000000E+00, "m", "L", "1.0");
   length["stringene"] = UBASE("Romanian", "stringene", 1.960000000000000E+00, "m", "L", "1.0");
   length["versta"] = UBASE("Romanian", "versta", 1.067000000000000E+03, "m", "L", "1.0");
   area["falce"] = UBASE("Romanian", "falce", 1.430000000000000E+01, "m2", "L2", "1.0");
   area["feredela"] = UBASE("Romanian", "feredela", 1.250000000000000E+00, "m2", "L2", "1.0");
   area["lugar"] = UBASE("Romanian", "lugar", 5.700000000000000E+03, "m2", "L2", "1.0");
   area["pogon"] = UBASE("Romanian", "pogon", 5.000000000000000E+00, "m2", "L2", "1.0");
   area["prajina"] = UBASE("Romanian", "prajina", 1.950000000000000E+02, "m2", "L2", "1.0");
   area["stanjen-patrat"] = UBASE("Romanian", "stanjen-patrat", 3.596650000000000E+00, "m2", "L2", "1.0");
   mass["cantar"] = UBASE("Romanian", "cantar", 5.600000000000000E+01, "kg", "M", "1.0");
   mass["dram"] = UBASE("Romanian", "dram", 3.246753246753250E-03, "kg", "M", "1.0");
   mass["font"] = UBASE("Romanian", "font", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["oke"] = UBASE("Romanian", "oke", 1.272727272727270E+00, "kg", "M", "1.0");
   liquid["banita(Moldavia)"] = UBASE("Romanian", "banita(Moldavia)", 2.150000000000000E-02, "m3", "L3", "1.0");
   liquid["banita(Wallachia)"] = UBASE("Romanian", "banita(Wallachia)", 3.396000000000000E-02, "m3", "L3", "1.0");
   liquid["chiup"] = UBASE("Romanian", "chiup", 3.500000000000000E-02, "m3", "L3", "1.0");
   liquid["feredela-feldera"] = UBASE("Romanian", "feredela-feldera", 2.000000000000000E-02, "m3", "L3", "1.0");
   liquid["giumatate"] = UBASE("Romanian", "giumatate", 1.350000000000000E+00, "m3", "L3", "1.0");
   liquid["litra"] = UBASE("Romanian", "litra", 2.500000000000000E-04, "m3", "L3", "1.0");
   liquid["merta(Moldavia)"] = UBASE("Romanian", "merta(Moldavia)", 1.150000000000000E-01, "m3", "L3", "1.0");
   liquid["merta(Transylvania)"] = UBASE("Romanian", "merta(Transylvania)", 2.250000000000000E-02, "m3", "L3", "1.0");
   liquid["obroc-mare(Moldavia)"] = UBASE("Romanian", "obroc-mare(Moldavia)", 6.600000000000000E-02, "m3", "L3", "1.0");
   liquid["obroc-mare(Wallachia)"] = UBASE("Romanian", "obroc-mare(Wallachia)", 5.500000000000000E-02, "m3", "L3", "1.0");
   liquid["obroc-mic(Moldavia)"] = UBASE("Romanian", "obroc-mic(Moldavia)", 3.300000000000000E-02, "m3", "L3", "1.0");
   liquid["obroc-mic(Wallachia)"] = UBASE("Romanian", "obroc-mic(Wallachia)", 2.750000000000000E-02, "m3", "L3", "1.0");
   liquid["oca(Moldavia)"] = UBASE("Romanian", "oca(Moldavia)", 1.500000000000000E-03, "m3", "L3", "1.0");
   liquid["oca(Wallachia)"] = UBASE("Romanian", "oca(Wallachia)", 1.250000000000000E-03, "m3", "L3", "1.0");
   liquid["oke"] = UBASE("Romanian", "oke", 1.415000000000000E-02, "m3", "L3", "1.0");
   liquid["pinta(Transylvania)"] = UBASE("Romanian", "pinta(Transylvania)", 3.394000000000000E-03, "m3", "L3", "1.0");
   liquid["sau(Moldavia)"] = UBASE("Romanian", "sau(Moldavia)", 3.472222222222220E-06, "m3", "L3", "1.0");
   liquid["tina"] = UBASE("Romanian", "tina", 1.500000000000000E-02, "m3", "L3", "1.0");
   liquid["vadra"] = UBASE("Romanian", "vadra", 1.500000000000000E-02, "m3", "L3", "1.0");
   liquid["viacka"] = UBASE("Romanian", "viacka", 1.415000000000000E-02, "m3", "L3", "1.0");
   dry["dimerla"] = UBASE("Romanian", "dimerla", 2.460000000000000E-02, "m3", "L3", "1.0");
   dry["kilo"] = UBASE("Romanian", "kilo", 3.936000000000000E-01, "m3", "L3", "1.0");
   dry["mirze"] = UBASE("Romanian", "mirze", 1.968000000000000E-01, "m3", "L3", "1.0");
   dry["oke"] = UBASE("Romanian", "oke", 1.537500000000000E-03, "m3", "L3", "1.0");
   _map["Romanian"] = BaseSystem("Romanian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit83(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["arshin"] = UBASE("Russian", "arshin", 7.112000000000000E-01, "m", "L", "1.0");
   length["chetvert"] = UBASE("Russian", "chetvert", 1.778000000000000E-01, "m", "L", "1.0");
   length["duime"] = UBASE("Russian", "duime", 2.540000000000000E-02, "m", "L", "1.0");
   length["dyuym"] = UBASE("Russian", "dyuym", 2.540000000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Russian", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Russian", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["foute"] = UBASE("Russian", "foute", 3.048000000000000E-01, "m", "L", "1.0");
   length["fut"] = UBASE("Russian", "fut", 3.048000000000000E-01, "m", "L", "1.0");
   length["inch"] = UBASE("Russian", "inch", 2.540000000000000E-02, "m", "L", "1.0");
   length["ladon"] = UBASE("Russian", "ladon", 7.500000000000000E-02, "m", "L", "1.0");
   length["line"] = UBASE("Russian", "line", 2.540000000000000E-03, "m", "L", "1.0");
   length["liniya"] = UBASE("Russian", "liniya", 2.540000000000000E-03, "m", "L", "1.0");
   length["lokot"] = UBASE("Russian", "lokot", 4.500000000000000E-01, "m", "L", "1.0");
   length["milya"] = UBASE("Russian", "milya", 7.467600000000000E+03, "m", "L", "1.0");
   length["paletz"] = UBASE("Russian", "paletz", 1.270000000000000E-02, "m", "L", "1.0");
   length["pyad"] = UBASE("Russian", "pyad", 1.778000000000000E-01, "m", "L", "1.0");
   length["saashen"] = UBASE("Russian", "saashen", 2.133600000000000E+00, "m", "L", "1.0");
   length["sazhen"] = UBASE("Russian", "sazhen", 2.133600000000000E+00, "m", "L", "1.0");
   length["shag"] = UBASE("Russian", "shag", 7.101840000000000E-01, "m", "L", "1.0");
   length["sotka"] = UBASE("Russian", "sotka", 2.133600000000000E-02, "m", "L", "1.0");
   length["tchevert"] = UBASE("Russian", "tchevert", 1.778000000000000E-01, "m", "L", "1.0");
   length["totchka"] = UBASE("Russian", "totchka", 2.540000000000000E-04, "m", "L", "1.0");
   length["vershok"] = UBASE("Russian", "vershok", 4.445000000000000E-02, "m", "L", "1.0");
   length["verst"] = UBASE("Russian", "verst", 1.066800000000000E+03, "m", "L", "1.0");
   length["versta"] = UBASE("Russian", "versta", 1.066800000000000E+03, "m", "L", "1.0");
   length["vyorst"] = UBASE("Russian", "vyorst", 1.066800000000000E+03, "m", "L", "1.0");
   area["dessatine"] = UBASE("Russian", "dessatine", 1.092539750400000E+04, "m2", "L2", "1.0");
   area["desyatina"] = UBASE("Russian", "desyatina", 1.092539750400000E+04, "m2", "L2", "1.0");
   mass["berkovets"] = UBASE("Russian", "berkovets", 1.638068716982680E+02, "kg", "M", "1.0");
   mass["doli"] = UBASE("Russian", "doli", 4.443545781745540E-05, "kg", "M", "1.0");
   mass["doli(apothecary)"] = UBASE("Russian", "doli(apothecary)", 4.443494030000000E-05, "kg", "M", "1.0");
   mass["dolya"] = UBASE("Russian", "dolya", 4.443545781745540E-05, "kg", "M", "1.0");
   mass["drachme(apothecary)"] = UBASE("Russian", "drachme(apothecary)", 3.732534985200000E-03, "kg", "M", "1.0");
   mass["drakhma(apothecary)"] = UBASE("Russian", "drakhma(apothecary)", 3.732534985200000E-03, "kg", "M", "1.0");
   mass["funt"] = UBASE("Russian", "funt", 4.095171792456690E-01, "kg", "M", "1.0");
   mass["funt(apothecary)"] = UBASE("Russian", "funt(apothecary)", 3.583233585792000E-01, "kg", "M", "1.0");
   mass["grain(apothecary)"] = UBASE("Russian", "grain(apothecary)", 6.220891642000000E-05, "kg", "M", "1.0");
   mass["gran(apothecary)"] = UBASE("Russian", "gran(apothecary)", 6.220891642000000E-05, "kg", "M", "1.0");
   mass["lana"] = UBASE("Russian", "lana", 3.412643160380580E-02, "kg", "M", "1.0");
   mass["lot"] = UBASE("Russian", "lot", 1.279741185142720E-02, "kg", "M", "1.0");
   mass["loth"] = UBASE("Russian", "loth", 1.279741185142720E-02, "kg", "M", "1.0");
   mass["once"] = UBASE("Russian", "once", 2.559482370285430E-02, "kg", "M", "1.0");
   mass["once(apothecary)"] = UBASE("Russian", "once(apothecary)", 2.986027988160000E-02, "kg", "M", "1.0");
   mass["packen"] = UBASE("Russian", "packen", 4.914206150948030E+02, "kg", "M", "1.0");
   mass["pood"] = UBASE("Russian", "pood", 1.638068716982680E+01, "kg", "M", "1.0");
   mass["pound"] = UBASE("Russian", "pound", 4.095171792456690E-01, "kg", "M", "1.0");
   mass["pound(apothecary)"] = UBASE("Russian", "pound(apothecary)", 3.583233585792000E-01, "kg", "M", "1.0");
   mass["scrupul(apothecary)"] = UBASE("Russian", "scrupul(apothecary)", 1.244178328400000E-03, "kg", "M", "1.0");
   mass["scrupule(apothecary)"] = UBASE("Russian", "scrupule(apothecary)", 1.244178328400000E-03, "kg", "M", "1.0");
   mass["solotnik"] = UBASE("Russian", "solotnik", 4.265803950475720E-03, "kg", "M", "1.0");
   mass["untsiya(apothecary)"] = UBASE("Russian", "untsiya(apothecary)", 2.986027988160000E-02, "kg", "M", "1.0");
   mass["zolotnik"] = UBASE("Russian", "zolotnik", 4.265803950475720E-03, "kg", "M", "1.0");
   liquid["anker"] = UBASE("Russian", "anker", 3.689823000000000E-02, "m3", "L3", "1.0");
   liquid["bochka"] = UBASE("Russian", "bochka", 4.919764000000000E-01, "m3", "L3", "1.0");
   liquid["botdlka"] = UBASE("Russian", "botdlka", 4.919764000000000E-01, "m3", "L3", "1.0");
   liquid["bottle(vodka)"] = UBASE("Russian", "bottle(vodka)", 6.149705000000000E-04, "m3", "L3", "1.0");
   liquid["bottle(wine)"] = UBASE("Russian", "bottle(wine)", 7.687131250000000E-04, "m3", "L3", "1.0");
   liquid["butylka(vodka)"] = UBASE("Russian", "butylka(vodka)", 6.149705000000000E-04, "m3", "L3", "1.0");
   liquid["butylka(wine)"] = UBASE("Russian", "butylka(wine)", 7.687131250000000E-04, "m3", "L3", "1.0");
   liquid["charka"] = UBASE("Russian", "charka", 1.229941000000000E-04, "m3", "L3", "1.0");
   liquid["chetvert"] = UBASE("Russian", "chetvert", 1.537426250000000E-03, "m3", "L3", "1.0");
   liquid["chkalik"] = UBASE("Russian", "chkalik", 6.149705000000000E-05, "m3", "L3", "1.0");
   liquid["fass"] = UBASE("Russian", "fass", 4.919764000000000E-01, "m3", "L3", "1.0");
   liquid["kosushka"] = UBASE("Russian", "kosushka", 6.149705000000000E-05, "m3", "L3", "1.0");
   liquid["krouchka"] = UBASE("Russian", "krouchka", 1.229941000000000E-03, "m3", "L3", "1.0");
   liquid["kruzhka"] = UBASE("Russian", "kruzhka", 1.229941000000000E-03, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("Russian", "pipe", 4.427787600000000E-01, "m3", "L3", "1.0");
   liquid["shkalik"] = UBASE("Russian", "shkalik", 6.149705000000000E-05, "m3", "L3", "1.0");
   liquid["shtoff"] = UBASE("Russian", "shtoff", 1.537426250000000E-03, "m3", "L3", "1.0");
   liquid["stekar"] = UBASE("Russian", "stekar", 1.844911500000000E-02, "m3", "L3", "1.0");
   liquid["tcharka"] = UBASE("Russian", "tcharka", 1.229941000000000E-04, "m3", "L3", "1.0");
   liquid["vedro"] = UBASE("Russian", "vedro", 1.229941000000000E-02, "m3", "L3", "1.0");
   dry["chast"] = UBASE("Russian", "chast", 1.093280888888890E-04, "m3", "L3", "1.0");
   dry["chetverik"] = UBASE("Russian", "chetverik", 2.623874133333330E-02, "m3", "L3", "1.0");
   dry["chetvert"] = UBASE("Russian", "chetvert", 2.099099306666670E-01, "m3", "L3", "1.0");
   dry["garnets"] = UBASE("Russian", "garnets", 3.279842666666670E-03, "m3", "L3", "1.0");
   dry["garnetz"] = UBASE("Russian", "garnetz", 3.279842666666670E-03, "m3", "L3", "1.0");
   dry["krushky"] = UBASE("Russian", "krushky", 1.311937066666670E-03, "m3", "L3", "1.0");
   dry["kruzhka"] = UBASE("Russian", "kruzhka", 1.311937066666670E-03, "m3", "L3", "1.0");
   dry["lof"] = UBASE("Russian", "lof", 6.472222862222220E-02, "m3", "L3", "1.0");
   dry["osmina"] = UBASE("Russian", "osmina", 1.049549653333330E-01, "m3", "L3", "1.0");
   dry["osmini"] = UBASE("Russian", "osmini", 1.049549653333330E-01, "m3", "L3", "1.0");
   dry["payok"] = UBASE("Russian", "payok", 5.247748266666670E-02, "m3", "L3", "1.0");
   dry["polougametz"] = UBASE("Russian", "polougametz", 1.639921333333330E-03, "m3", "L3", "1.0");
   dry["tcbetvert"] = UBASE("Russian", "tcbetvert", 2.099099306666670E-01, "m3", "L3", "1.0");
   dry["tchast"] = UBASE("Russian", "tchast", 1.093280888888890E-04, "m3", "L3", "1.0");
   dry["tcheverik"] = UBASE("Russian", "tcheverik", 2.623874133333330E-02, "m3", "L3", "1.0");
   dry["vedro"] = UBASE("Russian", "vedro", 1.311937066666670E-02, "m3", "L3", "1.0");
   _map["Russian"] = BaseSystem("Russian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit84(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["vara"] = UBASE("Salvadoran", "vara", 8.128000000000000E-01, "m", "L", "1.0");
   area["square-vara"] = UBASE("Salvadoran", "square-vara", 6.606438400000000E-01, "m2", "L2", "1.0");
   mass["caja"] = UBASE("Salvadoran", "caja", 1.600000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Salvadoran", "carga", 1.610000000000000E+02, "kg", "M", "1.0");
   mass["fanega"] = UBASE("Salvadoran", "fanega", 9.200000000000000E+01, "kg", "M", "1.0");
   liquid["botella"] = UBASE("Salvadoran", "botella", 6.500000000000000E-04, "m3", "L3", "1.0");
   liquid["cajuella"] = UBASE("Salvadoran", "cajuella", 1.625000000000000E-02, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Salvadoran", "cuartillo", 5.078125000000000E-04, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Salvadoran", "cubic-vara", 5.369713131520000E-01, "m3", "L3", "1.0");
   _map["Salvadoran"] = BaseSystem("Salvadoran", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit85(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["baryd"] = UBASE("Saudi-Arabian", "baryd", 1.932000000000000E+04, "m", "L", "1.0");
   length["busa"] = UBASE("Saudi-Arabian", "busa", 2.540000000000000E-02, "m", "L", "1.0");
   length["cassaba"] = UBASE("Saudi-Arabian", "cassaba", 3.840000000000000E+01, "m", "L", "1.0");
   length["covid"] = UBASE("Saudi-Arabian", "covid", 4.820000000000000E-01, "m", "L", "1.0");
   length["farsakh"] = UBASE("Saudi-Arabian", "farsakh", 4.830000000000000E+03, "m", "L", "1.0");
   length["guz"] = UBASE("Saudi-Arabian", "guz", 6.350000000000000E+00, "m", "L", "1.0");
   length["marhala"] = UBASE("Saudi-Arabian", "marhala", 3.864000000000000E+04, "m", "L", "1.0");
   area["square-covid"] = UBASE("Saudi-Arabian", "square-covid", 2.323240000000000E-01, "m2", "L2", "1.0");
   mass["bahar"] = UBASE("Saudi-Arabian", "bahar", 2.025000000000000E+02, "kg", "M", "1.0");
   mass["bokard"] = UBASE("Saudi-Arabian", "bokard", 2.025000000000000E+02, "kg", "M", "1.0");
   mass["buhar"] = UBASE("Saudi-Arabian", "buhar", 6.750000000000000E+01, "kg", "M", "1.0");
   mass["coffilas"] = UBASE("Saudi-Arabian", "coffilas", 3.375000000000000E-03, "kg", "M", "1.0");
   mass["farcella"] = UBASE("Saudi-Arabian", "farcella", 1.350000000000000E+01, "kg", "M", "1.0");
   mass["farzil"] = UBASE("Saudi-Arabian", "farzil", 1.350000000000000E+01, "kg", "M", "1.0");
   mass["kantar"] = UBASE("Saudi-Arabian", "kantar", 6.750000000000000E+01, "kg", "M", "1.0");
   mass["maund"] = UBASE("Saudi-Arabian", "maund", 1.350000000000000E+00, "kg", "M", "1.0");
   mass["ratl"] = UBASE("Saudi-Arabian", "ratl", 4.500000000000000E-01, "kg", "M", "1.0");
   mass["tukeas"] = UBASE("Saudi-Arabian", "tukeas", 3.375000000000000E-02, "kg", "M", "1.0");
   mass["vakias"] = UBASE("Saudi-Arabian", "vakias", 3.375000000000000E-02, "kg", "M", "1.0");
   liquid["ardabb"] = UBASE("Saudi-Arabian", "ardabb", 1.580800000000000E+00, "m3", "L3", "1.0");
   liquid["ardebb"] = UBASE("Saudi-Arabian", "ardebb", 1.580800000000000E+00, "m3", "L3", "1.0");
   liquid["cuddy"] = UBASE("Saudi-Arabian", "cuddy", 3.800000000000000E-03, "m3", "L3", "1.0");
   liquid["nusfiah"] = UBASE("Saudi-Arabian", "nusfiah", 9.500000000000000E-04, "m3", "L3", "1.0");
   liquid["vakia"] = UBASE("Saudi-Arabian", "vakia", 5.937500000000000E-05, "m3", "L3", "1.0");
   liquid["zudda"] = UBASE("Saudi-Arabian", "zudda", 7.600000000000000E-03, "m3", "L3", "1.0");
   dry["kella"] = UBASE("Saudi-Arabian", "kella", 3.541666666666670E-02, "m3", "L3", "1.0");
   dry["mecdema"] = UBASE("Saudi-Arabian", "mecdema", 8.145833333333330E-03, "m3", "L3", "1.0");
   dry["teman"] = UBASE("Saudi-Arabian", "teman", 8.500000000000000E-02, "m3", "L3", "1.0");
   _map["Saudi-Arabian"] = BaseSystem("Saudi-Arabian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit86(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["angstrom-star"] = UBASE("Scientific", "angstrom-star", 1.000014819200000E-10, "m", "L", "1.0");
   length["WKT1"] = UBASE("Scientific", "WKT1", 1.000014819200000E-10, "m", "L", "1.0");
   length["A*"] = UBASE("Scientific", "A*", 1.000014819200000E-10, "m", "L", "1.0");
   length["arc-minute"] = UBASE("Scientific", "arc-minute", 2.908882086657220E-04, "m", "L", "1.0");
   length["arcmin"] = UBASE("Scientific", "arcmin", 2.908882086657220E-04, "m", "L", "1.0");
   length["arcminute"] = UBASE("Scientific", "arcminute", 2.908882086657220E-04, "m", "L", "1.0");
   length["arc-second"] = UBASE("Scientific", "arc-second", 4.848136811095360E-06, "m", "L", "1.0");
   length["arcsec"] = UBASE("Scientific", "arcsec", 4.848136811095360E-06, "m", "L", "1.0");
   length["arcsecond"] = UBASE("Scientific", "arcsecond", 4.848136811095360E-06, "m", "L", "1.0");
   length["baromil"] = UBASE("Scientific", "baromil", 7.500616827041700E-04, "m", "L", "1.0");
   length["bicron"] = UBASE("Scientific", "bicron", 1.000000000000000E-12, "m", "L", "1.0");
   length["electron-classical-radius"] = UBASE("Scientific", "electron-classical-radius", 2.817940326204930E-15, "m", "L", "1.0");
   length["re"] = UBASE("Scientific", "re", 2.817940326204930E-15, "m", "L", "1.0");
   length["fermi"] = UBASE("Scientific", "fermi", 1.000000000000000E-15, "m", "L", "1.0");
   length["F"] = UBASE("Scientific", "F", 1.000000000000000E-15, "m", "L", "1.0");
   length["f"] = UBASE("Scientific", "f", 1.000000000000000E-15, "m", "L", "1.0");
   length["mickey"] = UBASE("Scientific", "mickey", 1.060000000000000E-04, "m", "L", "1.0");
   length["micromicron"] = UBASE("Scientific", "micromicron", 1.000000000000000E-12, "m", "L", "1.0");
   length["uu"] = UBASE("Scientific", "uu", 1.000000000000000E-12, "m", "L", "1.0");
   length["micron"] = UBASE("Scientific", "micron", 1.000000000000000E-06, "m", "L", "1.0");
   length["u"] = UBASE("Scientific", "u", 1.000000000000000E-06, "m", "L", "1.0");
   length["millimicron"] = UBASE("Scientific", "millimicron", 1.000000000000000E-09, "m", "L", "1.0");
   length["mm"] = UBASE("Scientific", "mm", 1.000000000000000E-09, "m", "L", "1.0");
   length["nm"] = UBASE("Scientific", "nm", 1.000000000000000E-09, "m", "L", "1.0");
   length["mu"] = UBASE("Scientific", "mu", 1.000000000000000E-09, "m", "L", "1.0");
   length["milline"] = UBASE("Scientific", "milline", 2.116666666666670E-03, "m", "L", "1.0");
   length["minion"] = UBASE("Scientific", "minion", 2.469444444444440E-03, "m", "L", "1.0");
   length["minute-of-arc"] = UBASE("Scientific", "minute-of-arc", 2.908882086657220E-04, "m", "L", "1.0");
   length["myriameter"] = UBASE("Scientific", "myriameter", 1.000000000000000E+04, "m", "L", "1.0");
   length["nanon"] = UBASE("Scientific", "nanon", 1.000000000000000E-09, "m", "L", "1.0");
   length["paragon"] = UBASE("Scientific", "paragon", 7.055555555555560E-03, "m", "L", "1.0");
   length["pica(small)"] = UBASE("Scientific", "pica(small)", 3.880555555555560E-03, "m", "L", "1.0");
   length["rowland"] = UBASE("Scientific", "rowland", 1.000000000000000E-10, "m", "L", "1.0");
   length["second-of-arc"] = UBASE("Scientific", "second-of-arc", 4.848136811095360E-06, "m", "L", "1.0");
   length["siegbahn-unit"] = UBASE("Scientific", "siegbahn-unit", 1.000207789700000E-13, "m", "L", "1.0");
   length["sigma"] = UBASE("Scientific", "sigma", 1.000000000000000E-12, "m", "L", "1.0");
   length["s"] = UBASE("Scientific", "s", 1.000000000000000E-12, "m", "L", "1.0");
   length["X-unit"] = UBASE("Scientific", "X-unit", 1.000207789700000E-13, "m", "L", "1.0");
   length["UX"] = UBASE("Scientific", "UX", 1.000207789700000E-13, "m", "L", "1.0");
   length["XU"] = UBASE("Scientific", "XU", 1.000207789700000E-13, "m", "L", "1.0");
   area["barn"] = UBASE("Scientific", "barn", 1.000000000000000E-28, "m2", "L2", "1.0");
   area["b"] = UBASE("Scientific", "b", 1.000000000000000E-28, "m2", "L2", "1.0");
   area["darce"] = UBASE("Scientific", "darce", 1.000000000000000E-12, "m2", "L2", "1.0");
   area["millidarcy"] = UBASE("Scientific", "millidarcy", 9.869232667160000E-16, "m2", "L2", "1.0");
   area["perm"] = UBASE("Scientific", "perm", 1.000000000000000E-04, "m2", "L2", "1.0");
   area["square-angstrom"] = UBASE("Scientific", "square-angstrom", 1.000000000000000E-20, "m2", "L2", "1.0");
   area["A2"] = UBASE("Scientific", "A2", 1.000000000000000E-20, "m2", "L2", "1.0");
   area["square-fermi"] = UBASE("Scientific", "square-fermi", 1.000000000000000E-30, "m2", "L2", "1.0");
   area["F2"] = UBASE("Scientific", "F2", 1.000000000000000E-30, "m2", "L2", "1.0");
   mass["atomic-unit-of-mass(carbon)"] = UBASE("Scientific", "atomic-unit-of-mass(carbon)", 1.660538728010000E-27, "kg", "M", "1.0");
   mass["Da(12C)"] = UBASE("Scientific", "Da(12C)", 1.660538728010000E-27, "kg", "M", "1.0");
   mass["atomic-unit-of-mass(hydrogen)"] = UBASE("Scientific", "atomic-unit-of-mass(hydrogen)", 1.673532249686000E-27, "kg", "M", "1.0");
   mass["Da(1H)"] = UBASE("Scientific", "Da(1H)", 1.673532249686000E-27, "kg", "M", "1.0");
   mass["atomic-unit-of-mass(oxygen)"] = UBASE("Scientific", "atomic-unit-of-mass(oxygen)", 1.660010948830000E-27, "kg", "M", "1.0");
   mass["Da(16O)"] = UBASE("Scientific", "Da(16O)", 1.660010948830000E-27, "kg", "M", "1.0");
   mass["crith(atm)"] = UBASE("Scientific", "crith(atm)", 8.993845205690000E-05, "kg", "M", "1.0");
   mass["crith(bar)"] = UBASE("Scientific", "crith(bar)", 8.876235090740000E-05, "kg", "M", "1.0");
   mass["dalton"] = UBASE("Scientific", "dalton", 1.660539066600000E-27, "kg", "M", "1.0");
   mass["u"] = UBASE("Scientific", "u", 1.660539066600000E-27, "kg", "M", "1.0");
   mass["uma"] = UBASE("Scientific", "uma", 1.660539066600000E-27, "kg", "M", "1.0");
   mass["Da"] = UBASE("Scientific", "Da", 1.660539066600000E-27, "kg", "M", "1.0");
   mass["gamma"] = UBASE("Scientific", "gamma", 1.000000000000000E-09, "kg", "M", "1.0");
   mass["g"] = UBASE("Scientific", "g", 1.000000000000000E-09, "kg", "M", "1.0");
   mass["microgamma"] = UBASE("Scientific", "microgamma", 1.000000000000000E-15, "kg", "M", "1.0");
   mass["ggg"] = UBASE("Scientific", "ggg", 1.000000000000000E-15, "kg", "M", "1.0");
   mass["milligarnma"] = UBASE("Scientific", "milligarnma", 1.000000000000000E-12, "kg", "M", "1.0");
   mass["gg"] = UBASE("Scientific", "gg", 1.000000000000000E-12, "kg", "M", "1.0");
   mass["myriagram"] = UBASE("Scientific", "myriagram", 1.000000000000000E+01, "kg", "M", "1.0");
   mass["thousand-mass-unit(12C)"] = UBASE("Scientific", "thousand-mass-unit(12C)", 1.492418085601550E-10, "kg", "M", "1.0");
   mass["TMU(12C)"] = UBASE("Scientific", "TMU(12C)", 1.492418085601550E-10, "kg", "M", "1.0");
   mass["thousand-mass-unit(16O)"] = UBASE("Scientific", "thousand-mass-unit(16O)", 1.491943740992750E-10, "kg", "M", "1.0");
   mass["TMU(16O)"] = UBASE("Scientific", "TMU(16O)", 1.491943740992750E-10, "kg", "M", "1.0");
   mass["thousand-mass-unit(1H)"] = UBASE("Scientific", "thousand-mass-unit(1H)", 1.504096304726540E-10, "kg", "M", "1.0");
   mass["TMU(1H)"] = UBASE("Scientific", "TMU(1H)", 1.504096304726540E-10, "kg", "M", "1.0");
   liquid["centiliter"] = UBASE("Scientific", "centiliter", 1.000000000000000E-05, "m3", "L3", "1.0");
   liquid["cl"] = UBASE("Scientific", "cl", 1.000000000000000E-05, "m3", "L3", "1.0");
   liquid["cL"] = UBASE("Scientific", "cL", 1.000000000000000E-05, "m3", "L3", "1.0");
   liquid["cubic-centimeter(Mohr)"] = UBASE("Scientific", "cubic-centimeter(Mohr)", 1.002380000000000E-06, "m3", "L3", "1.0");
   liquid["cc"] = UBASE("Scientific", "cc", 1.002380000000000E-06, "m3", "L3", "1.0");
   liquid["centicube"] = UBASE("Scientific", "centicube", 1.002380000000000E-06, "m3", "L3", "1.0");
   liquid["deciliter"] = UBASE("Scientific", "deciliter", 1.000000000000000E-04, "m3", "L3", "1.0");
   liquid["dl"] = UBASE("Scientific", "dl", 1.000000000000000E-04, "m3", "L3", "1.0");
   liquid["dL"] = UBASE("Scientific", "dL", 1.000000000000000E-04, "m3", "L3", "1.0");
   liquid["kanne"] = UBASE("Scientific", "kanne", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["lambda"] = UBASE("Scientific", "lambda", 1.000000000000000E-09, "m3", "L3", "1.0");
   liquid["l"] = UBASE("Scientific", "l", 1.000000000000000E-09, "m3", "L3", "1.0");
   liquid["microliter"] = UBASE("Scientific", "microliter", 1.000000000000000E-09, "m3", "L3", "1.0");
   liquid["ul"] = UBASE("Scientific", "ul", 1.000000000000000E-09, "m3", "L3", "1.0");
   liquid["milliliter"] = UBASE("Scientific", "milliliter", 1.000000000000000E-06, "m3", "L3", "1.0");
   liquid["ml"] = UBASE("Scientific", "ml", 1.000000000000000E-06, "m3", "L3", "1.0");
   liquid["mL"] = UBASE("Scientific", "mL", 1.000000000000000E-06, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Scientific", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Scientific", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   _map["Scientific"] = BaseSystem("Scientific", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit87(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["chain"] = UBASE("Scottish", "chain", 2.267701025980800E+01, "m", "L", "1.0");
   length["ch"] = UBASE("Scottish", "ch", 2.267701025980800E+01, "m", "L", "1.0");
   length["ell"] = UBASE("Scottish", "ell", 9.448754274920000E-01, "m", "L", "1.0");
   length["fall"] = UBASE("Scottish", "fall", 5.669252564952000E+00, "m", "L", "1.0");
   length["faw"] = UBASE("Scottish", "faw", 5.669252564952000E+00, "m", "L", "1.0");
   length["fit"] = UBASE("Scottish", "fit", 3.064460845920000E-01, "m", "L", "1.0");
   length["ft"] = UBASE("Scottish", "ft", 3.064460845920000E-01, "m", "L", "1.0");
   length["foot"] = UBASE("Scottish", "foot", 3.064500000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Scottish", "feet", 3.064500000000000E-01, "m", "L", "1.0");
   length["foot(traditional)"] = UBASE("Scottish", "foot(traditional)", 3.064460845920000E-01, "m", "L", "1.0");
   length["ft(trad)"] = UBASE("Scottish", "ft(trad)", 3.064460845920000E-01, "m", "L", "1.0");
   length["furlong"] = UBASE("Scottish", "furlong", 2.267701025980800E+02, "m", "L", "1.0");
   length["fur"] = UBASE("Scottish", "fur", 2.267701025980800E+02, "m", "L", "1.0");
   length["inch"] = UBASE("Scottish", "inch", 2.553717371600000E-02, "m", "L", "1.0");
   length["inches"] = UBASE("Scottish", "inches", 2.553717371600000E-02, "m", "L", "1.0");
   length["mile"] = UBASE("Scottish", "mile", 1.813864800000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("Scottish", "miles", 1.813864800000000E+03, "m", "L", "1.0");
   length["yaird"] = UBASE("Scottish", "yaird", 9.193382537760000E-01, "m", "L", "1.0");
   length["yard"] = UBASE("Scottish", "yard", 9.193382537760000E-01, "m", "L", "1.0");
   length["yards"] = UBASE("Scottish", "yards", 9.193382537760000E-01, "m", "L", "1.0");
   area["acre"] = UBASE("Scottish", "acre", 4.935190759024390E+03, "m2", "L2", "1.0");
   area["ac"] = UBASE("Scottish", "ac", 4.935190759024390E+03, "m2", "L2", "1.0");
   area["acre(traditional)"] = UBASE("Scottish", "acre(traditional)", 5.142467943234370E+03, "m2", "L2", "1.0");
   area["ac(trad)"] = UBASE("Scottish", "ac(trad)", 5.142467943234370E+03, "m2", "L2", "1.0");
   area["ceathramh"] = UBASE("Scottish", "ceathramh", 1.234192306376250E+06, "m2", "L2", "1.0");
   area["cota-ban"] = UBASE("Scottish", "cota-ban", 1.285616985808590E+03, "m2", "L2", "1.0");
   area["dabhach"] = UBASE("Scottish", "dabhach", 3.291179483670000E+06, "m2", "L2", "1.0");
   area["dauch"] = UBASE("Scottish", "dauch", 3.291179483670000E+06, "m2", "L2", "1.0");
   area["davoch"] = UBASE("Scottish", "davoch", 3.291179483670000E+06, "m2", "L2", "1.0");
   area["groatland"] = UBASE("Scottish", "groatland", 1.285616985808590E+03, "m2", "L2", "1.0");
   area["marg-fhearann"] = UBASE("Scottish", "marg-fhearann", 4.936769225505000E+06, "m2", "L2", "1.0");
   area["markland"] = UBASE("Scottish", "markland", 4.936769225505000E+06, "m2", "L2", "1.0");
   area["merkland"] = UBASE("Scottish", "merkland", 4.936769225505000E+06, "m2", "L2", "1.0");
   area["nook(1824)"] = UBASE("Scottish", "nook(1824)", 1.028493588646870E+05, "m2", "L2", "1.0");
   area["nook"] = UBASE("Scottish", "nook", 8.093712844800000E+04, "m2", "L2", "1.0");
   area["ounceland"] = UBASE("Scottish", "ounceland", 8.227948709175000E+05, "m2", "L2", "1.0");
   area["oxgang"] = UBASE("Scottish", "oxgang", 1.028493588646870E+05, "m2", "L2", "1.0");
   area["peighinn"] = UBASE("Scottish", "peighinn", 4.113974354587500E+04, "m2", "L2", "1.0");
   area["pennyland"] = UBASE("Scottish", "pennyland", 4.113974354587500E+04, "m2", "L2", "1.0");
   area["plougate"] = UBASE("Scottish", "plougate", 8.227948709175000E+05, "m2", "L2", "1.0");
   area["ploughgate"] = UBASE("Scottish", "ploughgate", 8.227948709175000E+05, "m2", "L2", "1.0");
   area["quarterland"] = UBASE("Scottish", "quarterland", 1.234192306376250E+06, "m2", "L2", "1.0");
   area["rod"] = UBASE("Scottish", "rod", 1.285616985808590E+03, "m2", "L2", "1.0");
   area["rood"] = UBASE("Scottish", "rood", 1.285616985808590E+03, "m2", "L2", "1.0");
   area["ruid"] = UBASE("Scottish", "ruid", 1.285616985808590E+03, "m2", "L2", "1.0");
   area["square-ell"] = UBASE("Scottish", "square-ell", 8.927895734781900E-01, "m2", "L2", "1.0");
   area["square-fall"] = UBASE("Scottish", "square-fall", 3.214042464521480E+01, "m2", "L2", "1.0");
   area["square-faw"] = UBASE("Scottish", "square-faw", 3.214042464521480E+01, "m2", "L2", "1.0");
   area["square-foot"] = UBASE("Scottish", "square-foot", 9.390920276176720E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("Scottish", "square-feet", 9.390920276176720E-02, "m2", "L2", "1.0");
   area["square-inch"] = UBASE("Scottish", "square-inch", 6.521472414011610E-04, "m2", "L2", "1.0");
   area["square-inches"] = UBASE("Scottish", "square-inches", 6.521472414011610E-04, "m2", "L2", "1.0");
   area["tri-unga"] = UBASE("Scottish", "tri-unga", 8.227948709175000E+05, "m2", "L2", "1.0");
   area["unceland"] = UBASE("Scottish", "unceland", 8.227948709175000E+05, "m2", "L2", "1.0");
   mass["boll(barley)"] = UBASE("Scottish", "boll(barley)", 1.974033994240000E+02, "kg", "M", "1.0");
   mass["boll(bean)"] = UBASE("Scottish", "boll(bean)", 1.727279744960000E+02, "kg", "M", "1.0");
   mass["boll(flour)"] = UBASE("Scottish", "boll(flour)", 8.636398724800000E+01, "kg", "M", "1.0");
   mass["boll(oat)"] = UBASE("Scottish", "boll(oat)", 1.628578045248000E+02, "kg", "M", "1.0");
   mass["boll(oatmeal)"] = UBASE("Scottish", "boll(oatmeal)", 8.636398724800000E+01, "kg", "M", "1.0");
   mass["boll(pea)"] = UBASE("Scottish", "boll(pea)", 1.727279744960000E+02, "kg", "M", "1.0");
   mass["drap"] = UBASE("Scottish", "drap", 1.927767572500000E-03, "kg", "M", "1.0");
   mass["drop"] = UBASE("Scottish", "drop", 1.927767572500000E-03, "kg", "M", "1.0");
   mass["dp"] = UBASE("Scottish", "dp", 1.927767572500000E-03, "kg", "M", "1.0");
   mass["grain"] = UBASE("Scottish", "grain", 6.510416666666670E-05, "kg", "M", "1.0");
   mass["ounce"] = UBASE("Scottish", "ounce", 3.084428116000000E-02, "kg", "M", "1.0");
   mass["oz"] = UBASE("Scottish", "oz", 3.084428116000000E-02, "kg", "M", "1.0");
   mass["pound"] = UBASE("Scottish", "pound", 6.168856232000000E-01, "kg", "M", "1.0");
   mass["lb"] = UBASE("Scottish", "lb", 6.168856232000000E-01, "kg", "M", "1.0");
   mass["pund"] = UBASE("Scottish", "pund", 6.168856232000000E-01, "kg", "M", "1.0");
   mass["stan"] = UBASE("Scottish", "stan", 9.870169971200000E+00, "kg", "M", "1.0");
   mass["stone"] = UBASE("Scottish", "stone", 9.870169971200000E+00, "kg", "M", "1.0");
   mass["st"] = UBASE("Scottish", "st", 9.870169971200000E+00, "kg", "M", "1.0");
   mass["unce"] = UBASE("Scottish", "unce", 3.084428116000000E-02, "kg", "M", "1.0");
   liquid["barrel"] = UBASE("Scottish", "barrel", 1.084472298147840E-01, "m3", "L3", "1.0");
   liquid["bbl"] = UBASE("Scottish", "bbl", 1.084472298147840E-01, "m3", "L3", "1.0");
   liquid["chopine"] = UBASE("Scottish", "chopine", 8.472439829280000E-04, "m3", "L3", "1.0");
   liquid["gallon"] = UBASE("Scottish", "gallon", 1.355590372684800E-02, "m3", "L3", "1.0");
   liquid["gill"] = UBASE("Scottish", "gill", 1.059054978660000E-04, "m3", "L3", "1.0");
   liquid["jug"] = UBASE("Scottish", "jug", 1.694918130000000E-03, "m3", "L3", "1.0");
   liquid["jug(old)"] = UBASE("Scottish", "jug(old)", 1.694487965856000E-03, "m3", "L3", "1.0");
   liquid["mutchkin"] = UBASE("Scottish", "mutchkin", 4.261961250000000E-03, "m3", "L3", "1.0");
   liquid["mutchkin(1824)"] = UBASE("Scottish", "mutchkin(1824)", 4.236219914640000E-04, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("Scottish", "pint", 1.694487965856000E-03, "m3", "L3", "1.0");
   liquid["pt"] = UBASE("Scottish", "pt", 1.694487965856000E-03, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("Scottish", "quart", 3.388975931712000E-03, "m3", "L3", "1.0");
   liquid["qt"] = UBASE("Scottish", "qt", 3.388975931712000E-03, "m3", "L3", "1.0");
   dry["bole(barley)"] = UBASE("Scottish", "bole(barley)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["boll(barley)"] = UBASE("Scottish", "boll(barley)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["bole(bean)"] = UBASE("Scottish", "bole(bean)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["boll(bean)"] = UBASE("Scottish", "boll(bean)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bole(malt)"] = UBASE("Scottish", "bole(malt)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["boll(malt)"] = UBASE("Scottish", "boll(malt)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["bole(oat)"] = UBASE("Scottish", "bole(oat)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["boll(oat)"] = UBASE("Scottish", "boll(oat)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["bole(pea)"] = UBASE("Scottish", "bole(pea)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["boll(pea)"] = UBASE("Scottish", "boll(pea)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bole(rice)"] = UBASE("Scottish", "bole(rice)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["boll(rice)"] = UBASE("Scottish", "boll(rice)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bole(salt)"] = UBASE("Scottish", "bole(salt)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["boll(salt)"] = UBASE("Scottish", "boll(salt)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bole(wheat)"] = UBASE("Scottish", "bole(wheat)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["boll(wheat)"] = UBASE("Scottish", "boll(wheat)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bowe(pea)"] = UBASE("Scottish", "bowe(pea)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bowe(barley)"] = UBASE("Scottish", "bowe(barley)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["bowe(bean)"] = UBASE("Scottish", "bowe(bean)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bowe(malt)"] = UBASE("Scottish", "bowe(malt)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["bowe(oat)"] = UBASE("Scottish", "bowe(oat)", 2.101162455731200E-01, "m3", "L3", "1.0");
   dry["bowe(rice)"] = UBASE("Scottish", "bowe(rice)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bowe(salt)"] = UBASE("Scottish", "bowe(salt)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["bowe(wheat)"] = UBASE("Scottish", "bowe(wheat)", 1.440310182599680E-01, "m3", "L3", "1.0");
   dry["chalder(rice)"] = UBASE("Scottish", "chalder(rice)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chalder(barley)"] = UBASE("Scottish", "chalder(barley)", 3.361859929169920E+00, "m3", "L3", "1.0");
   dry["chalder(bean)"] = UBASE("Scottish", "chalder(bean)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chalder(malt)"] = UBASE("Scottish", "chalder(malt)", 3.361859929169920E+00, "m3", "L3", "1.0");
   dry["chalder(oats)"] = UBASE("Scottish", "chalder(oats)", 3.361859929169920E+00, "m3", "L3", "1.0");
   dry["chalder(pea)"] = UBASE("Scottish", "chalder(pea)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chalder(salt)"] = UBASE("Scottish", "chalder(salt)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chalder(wheat)"] = UBASE("Scottish", "chalder(wheat)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chauder(barley)"] = UBASE("Scottish", "chauder(barley)", 3.361859929169920E+00, "m3", "L3", "1.0");
   dry["chauder(bean)"] = UBASE("Scottish", "chauder(bean)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chauder(malt)"] = UBASE("Scottish", "chauder(malt)", 3.361859929169920E+00, "m3", "L3", "1.0");
   dry["chauder(oats)"] = UBASE("Scottish", "chauder(oats)", 3.361859929169920E+00, "m3", "L3", "1.0");
   dry["chauder(pea)"] = UBASE("Scottish", "chauder(pea)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chauder(rice)"] = UBASE("Scottish", "chauder(rice)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chauder(salt)"] = UBASE("Scottish", "chauder(salt)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["chauder(wheat)"] = UBASE("Scottish", "chauder(wheat)", 2.304496292159490E+00, "m3", "L3", "1.0");
   dry["firlot(bean)"] = UBASE("Scottish", "firlot(bean)", 3.600775456499200E-02, "m3", "L3", "1.0");
   dry["firlot(malt)"] = UBASE("Scottish", "firlot(malt)", 5.252906139328000E-02, "m3", "L3", "1.0");
   dry["firlot(barley)"] = UBASE("Scottish", "firlot(barley)", 5.252906139328000E-02, "m3", "L3", "1.0");
   dry["firlot(oats)"] = UBASE("Scottish", "firlot(oats)", 5.252906139328000E-02, "m3", "L3", "1.0");
   dry["firlot(pea)"] = UBASE("Scottish", "firlot(pea)", 3.600775456499200E-02, "m3", "L3", "1.0");
   dry["firlot(rice)"] = UBASE("Scottish", "firlot(rice)", 3.600775456499200E-02, "m3", "L3", "1.0");
   dry["firlot(salt)"] = UBASE("Scottish", "firlot(salt)", 3.600775456499200E-02, "m3", "L3", "1.0");
   dry["firlot(wheat)"] = UBASE("Scottish", "firlot(wheat)", 3.600775456499200E-02, "m3", "L3", "1.0");
   dry["forpet(barley)"] = UBASE("Scottish", "forpet(barley)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["forpet(bean)"] = UBASE("Scottish", "forpet(bean)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["forpet(malt)"] = UBASE("Scottish", "forpet(malt)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["forpet(oat)"] = UBASE("Scottish", "forpet(oat)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["forpet(pea)"] = UBASE("Scottish", "forpet(pea)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["forpet(rice)"] = UBASE("Scottish", "forpet(rice)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["forpet(salt)"] = UBASE("Scottish", "forpet(salt)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["forpet(wheat)"] = UBASE("Scottish", "forpet(wheat)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippie(barley)"] = UBASE("Scottish", "lippie(barley)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["lippy(barley)"] = UBASE("Scottish", "lippy(barley)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["lippie(bean)"] = UBASE("Scottish", "lippie(bean)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippy(bean)"] = UBASE("Scottish", "lippy(bean)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippie(malt)"] = UBASE("Scottish", "lippie(malt)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["lippy(malt)"] = UBASE("Scottish", "lippy(malt)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["lippie(oats)"] = UBASE("Scottish", "lippie(oats)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["lippy(oats)"] = UBASE("Scottish", "lippy(oats)", 3.283066337080000E-03, "m3", "L3", "1.0");
   dry["lippie(pea)"] = UBASE("Scottish", "lippie(pea)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippy(pea)"] = UBASE("Scottish", "lippy(pea)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippie(rice)"] = UBASE("Scottish", "lippie(rice)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippy(rice)"] = UBASE("Scottish", "lippy(rice)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippie(salt)"] = UBASE("Scottish", "lippie(salt)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippy(salt)"] = UBASE("Scottish", "lippy(salt)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippie(wheat)"] = UBASE("Scottish", "lippie(wheat)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["lippy(wheat)"] = UBASE("Scottish", "lippy(wheat)", 2.250484660312000E-03, "m3", "L3", "1.0");
   dry["peck(bean)"] = UBASE("Scottish", "peck(bean)", 9.001938641248000E-03, "m3", "L3", "1.0");
   dry["peck(barley)"] = UBASE("Scottish", "peck(barley)", 1.313226534832000E-02, "m3", "L3", "1.0");
   dry["peck(malt)"] = UBASE("Scottish", "peck(malt)", 1.313226534832000E-02, "m3", "L3", "1.0");
   dry["peck(oats)"] = UBASE("Scottish", "peck(oats)", 1.313226534832000E-02, "m3", "L3", "1.0");
   dry["peck(pea)"] = UBASE("Scottish", "peck(pea)", 9.001938641248000E-03, "m3", "L3", "1.0");
   dry["peck(rice)"] = UBASE("Scottish", "peck(rice)", 9.001938641248000E-03, "m3", "L3", "1.0");
   dry["peck(salt)"] = UBASE("Scottish", "peck(salt)", 9.001938641248000E-03, "m3", "L3", "1.0");
   dry["peck(wheat)"] = UBASE("Scottish", "peck(wheat)", 9.001938641248000E-03, "m3", "L3", "1.0");
   _map["Scottish"] = BaseSystem("Scottish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit88(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["meter"] = UBASE("SI", "meter", 1.000000000000000E+00, "m", "L", "1.0");
   length["m"] = UBASE("SI", "m", 1.000000000000000E+00, "m", "L", "1.0");
   length["meters"] = UBASE("SI", "meters", 1.000000000000000E+00, "m", "L", "1.0");
   length["yottameter"] = UBASE("SI", "yottameter", 1.000000000000000E+24, "m", "L", "1.0");
   length["Ym"] = UBASE("SI", "Ym", 1.000000000000000E+24, "m", "L", "1.0");
   length["zettameter"] = UBASE("SI", "zettameter", 1.000000000000000E+21, "m", "L", "1.0");
   length["Zm"] = UBASE("SI", "Zm", 1.000000000000000E+21, "m", "L", "1.0");
   length["exameter"] = UBASE("SI", "exameter", 1.000000000000000E+18, "m", "L", "1.0");
   length["Em"] = UBASE("SI", "Em", 1.000000000000000E+18, "m", "L", "1.0");
   length["petameter"] = UBASE("SI", "petameter", 1.000000000000000E+15, "m", "L", "1.0");
   length["Pm"] = UBASE("SI", "Pm", 1.000000000000000E+15, "m", "L", "1.0");
   length["terameter"] = UBASE("SI", "terameter", 1.000000000000000E+12, "m", "L", "1.0");
   length["Tm"] = UBASE("SI", "Tm", 1.000000000000000E+12, "m", "L", "1.0");
   length["gigameter"] = UBASE("SI", "gigameter", 1.000000000000000E+09, "m", "L", "1.0");
   length["Gm"] = UBASE("SI", "Gm", 1.000000000000000E+09, "m", "L", "1.0");
   length["megameter"] = UBASE("SI", "megameter", 1.000000000000000E+06, "m", "L", "1.0");
   length["Mm"] = UBASE("SI", "Mm", 1.000000000000000E+06, "m", "L", "1.0");
   length["kilometer"] = UBASE("SI", "kilometer", 1.000000000000000E+03, "m", "L", "1.0");
   length["km"] = UBASE("SI", "km", 1.000000000000000E+03, "m", "L", "1.0");
   length["hectometer"] = UBASE("SI", "hectometer", 1.000000000000000E+02, "m", "L", "1.0");
   length["hm"] = UBASE("SI", "hm", 1.000000000000000E+02, "m", "L", "1.0");
   length["decameter"] = UBASE("SI", "decameter", 1.000000000000000E+01, "m", "L", "1.0");
   length["dam"] = UBASE("SI", "dam", 1.000000000000000E+01, "m", "L", "1.0");
   length["decimeter"] = UBASE("SI", "decimeter", 1.000000000000000E-01, "m", "L", "1.0");
   length["dm"] = UBASE("SI", "dm", 1.000000000000000E-01, "m", "L", "1.0");
   length["centimeter"] = UBASE("SI", "centimeter", 1.000000000000000E-02, "m", "L", "1.0");
   length["cm"] = UBASE("SI", "cm", 1.000000000000000E-02, "m", "L", "1.0");
   length["millimeter"] = UBASE("SI", "millimeter", 1.000000000000000E-03, "m", "L", "1.0");
   length["mm"] = UBASE("SI", "mm", 1.000000000000000E-03, "m", "L", "1.0");
   length["micrometer"] = UBASE("SI", "micrometer", 1.000000000000000E-06, "m", "L", "1.0");
   length["um"] = UBASE("SI", "um", 1.000000000000000E-06, "m", "L", "1.0");
   length["nanometer"] = UBASE("SI", "nanometer", 1.000000000000000E-09, "m", "L", "1.0");
   length["nm"] = UBASE("SI", "nm", 1.000000000000000E-09, "m", "L", "1.0");
   length["picometer"] = UBASE("SI", "picometer", 1.000000000000000E-12, "m", "L", "1.0");
   length["pm"] = UBASE("SI", "pm", 1.000000000000000E-12, "m", "L", "1.0");
   length["femtometer"] = UBASE("SI", "femtometer", 1.000000000000000E-15, "m", "L", "1.0");
   length["fm"] = UBASE("SI", "fm", 1.000000000000000E-15, "m", "L", "1.0");
   length["attometer"] = UBASE("SI", "attometer", 1.000000000000000E-18, "m", "L", "1.0");
   length["am"] = UBASE("SI", "am", 1.000000000000000E-18, "m", "L", "1.0");
   length["zeptometer"] = UBASE("SI", "zeptometer", 1.000000000000000E-21, "m", "L", "1.0");
   length["zm"] = UBASE("SI", "zm", 1.000000000000000E-21, "m", "L", "1.0");
   length["yoctometer"] = UBASE("SI", "yoctometer", 1.000000000000000E-24, "m", "L", "1.0");
   length["ym"] = UBASE("SI", "ym", 1.000000000000000E-24, "m", "L", "1.0");
   area["meter-squared"] = UBASE("SI", "meter-squared", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["m2"] = UBASE("SI", "m2", 1.000000000000000E+00, "m2", "L2", "1.0");
   area["square-yottameter"] = UBASE("SI", "square-yottameter", 1.000000000000000E+48, "m2", "L2", "1.0");
   area["sq-Ym"] = UBASE("SI", "sq-Ym", 1.000000000000000E+48, "m2", "L2", "1.0");
   area["Ym2"] = UBASE("SI", "Ym2", 1.000000000000000E+48, "m2", "L2", "1.0");
   area["square-zettameter"] = UBASE("SI", "square-zettameter", 1.000000000000000E+42, "m2", "L2", "1.0");
   area["sq-Zm"] = UBASE("SI", "sq-Zm", 1.000000000000000E+42, "m2", "L2", "1.0");
   area["Zm2"] = UBASE("SI", "Zm2", 1.000000000000000E+42, "m2", "L2", "1.0");
   area["square-exameter"] = UBASE("SI", "square-exameter", 1.000000000000000E+36, "m2", "L2", "1.0");
   area["sq-Em"] = UBASE("SI", "sq-Em", 1.000000000000000E+36, "m2", "L2", "1.0");
   area["Em2"] = UBASE("SI", "Em2", 1.000000000000000E+36, "m2", "L2", "1.0");
   area["square-petameter"] = UBASE("SI", "square-petameter", 1.000000000000000E+30, "m2", "L2", "1.0");
   area["sq-Pm"] = UBASE("SI", "sq-Pm", 1.000000000000000E+30, "m2", "L2", "1.0");
   area["Pm2"] = UBASE("SI", "Pm2", 1.000000000000000E+30, "m2", "L2", "1.0");
   area["square-terameter"] = UBASE("SI", "square-terameter", 1.000000000000000E+24, "m2", "L2", "1.0");
   area["sq-Tm"] = UBASE("SI", "sq-Tm", 1.000000000000000E+24, "m2", "L2", "1.0");
   area["Tm2"] = UBASE("SI", "Tm2", 1.000000000000000E+24, "m2", "L2", "1.0");
   area["square-gigameter"] = UBASE("SI", "square-gigameter", 1.000000000000000E+18, "m2", "L2", "1.0");
   area["sq-Gm"] = UBASE("SI", "sq-Gm", 1.000000000000000E+18, "m2", "L2", "1.0");
   area["Gm2"] = UBASE("SI", "Gm2", 1.000000000000000E+18, "m2", "L2", "1.0");
   area["square-megameter"] = UBASE("SI", "square-megameter", 1.000000000000000E+12, "m2", "L2", "1.0");
   area["sq-Mm"] = UBASE("SI", "sq-Mm", 1.000000000000000E+12, "m2", "L2", "1.0");
   area["Mm2"] = UBASE("SI", "Mm2", 1.000000000000000E+12, "m2", "L2", "1.0");
   area["square-kilometer"] = UBASE("SI", "square-kilometer", 1.000000000000000E+06, "m2", "L2", "1.0");
   area["sq-km"] = UBASE("SI", "sq-km", 1.000000000000000E+06, "m2", "L2", "1.0");
   area["km2"] = UBASE("SI", "km2", 1.000000000000000E+06, "m2", "L2", "1.0");
   area["square-hectometer"] = UBASE("SI", "square-hectometer", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["sq-hm"] = UBASE("SI", "sq-hm", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["hm2"] = UBASE("SI", "hm2", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["square-decameter"] = UBASE("SI", "square-decameter", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["sq-dam"] = UBASE("SI", "sq-dam", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["dam2"] = UBASE("SI", "dam2", 1.000000000000000E+02, "m2", "L2", "1.0");
   area["square-decimeter"] = UBASE("SI", "square-decimeter", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["sq-dm"] = UBASE("SI", "sq-dm", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["dm2"] = UBASE("SI", "dm2", 1.000000000000000E-02, "m2", "L2", "1.0");
   area["square-centimeter"] = UBASE("SI", "square-centimeter", 1.000000000000000E-04, "m2", "L2", "1.0");
   area["sq-cm"] = UBASE("SI", "sq-cm", 1.000000000000000E-04, "m2", "L2", "1.0");
   area["cm2"] = UBASE("SI", "cm2", 1.000000000000000E-04, "m2", "L2", "1.0");
   area["square-millimeter"] = UBASE("SI", "square-millimeter", 1.000000000000000E-06, "m2", "L2", "1.0");
   area["sq-mm"] = UBASE("SI", "sq-mm", 1.000000000000000E-06, "m2", "L2", "1.0");
   area["mm2"] = UBASE("SI", "mm2", 1.000000000000000E-06, "m2", "L2", "1.0");
   area["square-micrometer"] = UBASE("SI", "square-micrometer", 1.000000000000000E-12, "m2", "L2", "1.0");
   area["sq-um"] = UBASE("SI", "sq-um", 1.000000000000000E-12, "m2", "L2", "1.0");
   area["um2"] = UBASE("SI", "um2", 1.000000000000000E-12, "m2", "L2", "1.0");
   area["square-nanometer"] = UBASE("SI", "square-nanometer", 1.000000000000000E-18, "m2", "L2", "1.0");
   area["sq-nm"] = UBASE("SI", "sq-nm", 1.000000000000000E-18, "m2", "L2", "1.0");
   area["nm2"] = UBASE("SI", "nm2", 1.000000000000000E-18, "m2", "L2", "1.0");
   area["square-picometer"] = UBASE("SI", "square-picometer", 1.000000000000000E-24, "m2", "L2", "1.0");
   area["sq-pm"] = UBASE("SI", "sq-pm", 1.000000000000000E-24, "m2", "L2", "1.0");
   area["pm2"] = UBASE("SI", "pm2", 1.000000000000000E-24, "m2", "L2", "1.0");
   area["square-femtometer"] = UBASE("SI", "square-femtometer", 1.000000000000000E-30, "m2", "L2", "1.0");
   area["sq-fm"] = UBASE("SI", "sq-fm", 1.000000000000000E-30, "m2", "L2", "1.0");
   area["fm2"] = UBASE("SI", "fm2", 1.000000000000000E-30, "m2", "L2", "1.0");
   area["square-attometer"] = UBASE("SI", "square-attometer", 1.000000000000000E-36, "m2", "L2", "1.0");
   area["sq-am"] = UBASE("SI", "sq-am", 1.000000000000000E-36, "m2", "L2", "1.0");
   area["am2"] = UBASE("SI", "am2", 1.000000000000000E-36, "m2", "L2", "1.0");
   area["square-zeptometer"] = UBASE("SI", "square-zeptometer", 1.000000000000000E-42, "m2", "L2", "1.0");
   area["sq-zm"] = UBASE("SI", "sq-zm", 1.000000000000000E-42, "m2", "L2", "1.0");
   area["zm2"] = UBASE("SI", "zm2", 1.000000000000000E-42, "m2", "L2", "1.0");
   area["square-yoctometer"] = UBASE("SI", "square-yoctometer", 1.000000000000000E-48, "m2", "L2", "1.0");
   area["sq-ym"] = UBASE("SI", "sq-ym", 1.000000000000000E-48, "m2", "L2", "1.0");
   area["ym2"] = UBASE("SI", "ym2", 1.000000000000000E-48, "m2", "L2", "1.0");
   mass["gram"] = UBASE("SI", "gram", 1.000000000000000E-03, "kg", "M", "1.0");
   mass["g"] = UBASE("SI", "g", 1.000000000000000E-03, "kg", "M", "1.0");
   mass["grams"] = UBASE("SI", "grams", 1.000000000000000E-03, "kg", "M", "1.0");
   mass["yottagram"] = UBASE("SI", "yottagram", 1.000000000000000E+21, "kg", "M", "1.0");
   mass["Yg"] = UBASE("SI", "Yg", 1.000000000000000E+21, "kg", "M", "1.0");
   mass["zettagram"] = UBASE("SI", "zettagram", 1.000000000000000E+18, "kg", "M", "1.0");
   mass["Zg"] = UBASE("SI", "Zg", 1.000000000000000E+18, "kg", "M", "1.0");
   mass["exagram"] = UBASE("SI", "exagram", 1.000000000000000E+15, "kg", "M", "1.0");
   mass["Eg"] = UBASE("SI", "Eg", 1.000000000000000E+15, "kg", "M", "1.0");
   mass["petagram"] = UBASE("SI", "petagram", 1.000000000000000E+12, "kg", "M", "1.0");
   mass["Pg"] = UBASE("SI", "Pg", 1.000000000000000E+12, "kg", "M", "1.0");
   mass["teragram"] = UBASE("SI", "teragram", 1.000000000000000E+09, "kg", "M", "1.0");
   mass["Tg"] = UBASE("SI", "Tg", 1.000000000000000E+09, "kg", "M", "1.0");
   mass["gigagram"] = UBASE("SI", "gigagram", 1.000000000000000E+06, "kg", "M", "1.0");
   mass["Gg"] = UBASE("SI", "Gg", 1.000000000000000E+06, "kg", "M", "1.0");
   mass["megagram"] = UBASE("SI", "megagram", 1.000000000000000E+03, "kg", "M", "1.0");
   mass["Mg"] = UBASE("SI", "Mg", 1.000000000000000E+03, "kg", "M", "1.0");
   mass["kilogram"] = UBASE("SI", "kilogram", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["kg"] = UBASE("SI", "kg", 1.000000000000000E+00, "kg", "M", "1.0");
   mass["hectogram"] = UBASE("SI", "hectogram", 1.000000000000000E-01, "kg", "M", "1.0");
   mass["hg"] = UBASE("SI", "hg", 1.000000000000000E-01, "kg", "M", "1.0");
   mass["decagram"] = UBASE("SI", "decagram", 1.000000000000000E-02, "kg", "M", "1.0");
   mass["dag"] = UBASE("SI", "dag", 1.000000000000000E-02, "kg", "M", "1.0");
   mass["decigram"] = UBASE("SI", "decigram", 1.000000000000000E-04, "kg", "M", "1.0");
   mass["dg"] = UBASE("SI", "dg", 1.000000000000000E-04, "kg", "M", "1.0");
   mass["centigram"] = UBASE("SI", "centigram", 1.000000000000000E-05, "kg", "M", "1.0");
   mass["cg"] = UBASE("SI", "cg", 1.000000000000000E-05, "kg", "M", "1.0");
   mass["milligram"] = UBASE("SI", "milligram", 1.000000000000000E-06, "kg", "M", "1.0");
   mass["mg"] = UBASE("SI", "mg", 1.000000000000000E-06, "kg", "M", "1.0");
   mass["microgram"] = UBASE("SI", "microgram", 1.000000000000000E-09, "kg", "M", "1.0");
   mass["ug"] = UBASE("SI", "ug", 1.000000000000000E-09, "kg", "M", "1.0");
   mass["nanogram"] = UBASE("SI", "nanogram", 1.000000000000000E-12, "kg", "M", "1.0");
   mass["ng"] = UBASE("SI", "ng", 1.000000000000000E-12, "kg", "M", "1.0");
   mass["picogram"] = UBASE("SI", "picogram", 1.000000000000000E-15, "kg", "M", "1.0");
   mass["pg"] = UBASE("SI", "pg", 1.000000000000000E-15, "kg", "M", "1.0");
   mass["femtogram"] = UBASE("SI", "femtogram", 1.000000000000000E-18, "kg", "M", "1.0");
   mass["fg"] = UBASE("SI", "fg", 1.000000000000000E-18, "kg", "M", "1.0");
   mass["attogram"] = UBASE("SI", "attogram", 1.000000000000000E-21, "kg", "M", "1.0");
   mass["ag"] = UBASE("SI", "ag", 1.000000000000000E-21, "kg", "M", "1.0");
   mass["zeptogram"] = UBASE("SI", "zeptogram", 1.000000000000000E-24, "kg", "M", "1.0");
   mass["zg"] = UBASE("SI", "zg", 1.000000000000000E-24, "kg", "M", "1.0");
   mass["yoctogram"] = UBASE("SI", "yoctogram", 1.000000000000000E-27, "kg", "M", "1.0");
   mass["yg"] = UBASE("SI", "yg", 1.000000000000000E-27, "kg", "M", "1.0");
   liquid["liter"] = UBASE("SI", "liter", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["l"] = UBASE("SI", "l", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["liters"] = UBASE("SI", "liters", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["meter-cubed"] = UBASE("SI", "meter-cubed", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["m3"] = UBASE("SI", "m3", 1.000000000000000E+00, "m3", "L3", "1.0");
   dry["cubic-yottameter"] = UBASE("SI", "cubic-yottameter", 1.000000000000000E+72, "m3", "L3", "1.0");
   dry["cu-Ym"] = UBASE("SI", "cu-Ym", 1.000000000000000E+72, "m3", "L3", "1.0");
   dry["Ym3"] = UBASE("SI", "Ym3", 1.000000000000000E+72, "m3", "L3", "1.0");
   dry["cubic-zettameter"] = UBASE("SI", "cubic-zettameter", 1.000000000000000E+63, "m3", "L3", "1.0");
   dry["cu-Zm"] = UBASE("SI", "cu-Zm", 1.000000000000000E+63, "m3", "L3", "1.0");
   dry["Zm3"] = UBASE("SI", "Zm3", 1.000000000000000E+63, "m3", "L3", "1.0");
   dry["cubic-exameter"] = UBASE("SI", "cubic-exameter", 1.000000000000000E+54, "m3", "L3", "1.0");
   dry["cu-Em"] = UBASE("SI", "cu-Em", 1.000000000000000E+54, "m3", "L3", "1.0");
   dry["Em3"] = UBASE("SI", "Em3", 1.000000000000000E+54, "m3", "L3", "1.0");
   dry["cubic-petameter"] = UBASE("SI", "cubic-petameter", 1.000000000000000E+45, "m3", "L3", "1.0");
   dry["cu-Pm"] = UBASE("SI", "cu-Pm", 1.000000000000000E+45, "m3", "L3", "1.0");
   dry["Pm3"] = UBASE("SI", "Pm3", 1.000000000000000E+45, "m3", "L3", "1.0");
   dry["cubic-terameter"] = UBASE("SI", "cubic-terameter", 1.000000000000000E+36, "m3", "L3", "1.0");
   dry["cu-Tm"] = UBASE("SI", "cu-Tm", 1.000000000000000E+36, "m3", "L3", "1.0");
   dry["Tm3"] = UBASE("SI", "Tm3", 1.000000000000000E+36, "m3", "L3", "1.0");
   dry["cubic-gigameter"] = UBASE("SI", "cubic-gigameter", 1.000000000000000E+27, "m3", "L3", "1.0");
   dry["cu-Gm"] = UBASE("SI", "cu-Gm", 1.000000000000000E+27, "m3", "L3", "1.0");
   dry["Gm3"] = UBASE("SI", "Gm3", 1.000000000000000E+27, "m3", "L3", "1.0");
   dry["cubic-megameter"] = UBASE("SI", "cubic-megameter", 1.000000000000000E+18, "m3", "L3", "1.0");
   dry["cu-Mm"] = UBASE("SI", "cu-Mm", 1.000000000000000E+18, "m3", "L3", "1.0");
   dry["Mm3"] = UBASE("SI", "Mm3", 1.000000000000000E+18, "m3", "L3", "1.0");
   dry["cubic-kilometer"] = UBASE("SI", "cubic-kilometer", 1.000000000000000E+09, "m3", "L3", "1.0");
   dry["cu-km"] = UBASE("SI", "cu-km", 1.000000000000000E+09, "m3", "L3", "1.0");
   dry["km3"] = UBASE("SI", "km3", 1.000000000000000E+09, "m3", "L3", "1.0");
   dry["cubic-hectometer"] = UBASE("SI", "cubic-hectometer", 1.000000000000000E+06, "m3", "L3", "1.0");
   dry["cu-hm"] = UBASE("SI", "cu-hm", 1.000000000000000E+06, "m3", "L3", "1.0");
   dry["hm3"] = UBASE("SI", "hm3", 1.000000000000000E+06, "m3", "L3", "1.0");
   dry["cubic-decameter"] = UBASE("SI", "cubic-decameter", 1.000000000000000E+03, "m3", "L3", "1.0");
   dry["cu-dam"] = UBASE("SI", "cu-dam", 1.000000000000000E+03, "m3", "L3", "1.0");
   dry["dam3"] = UBASE("SI", "dam3", 1.000000000000000E+03, "m3", "L3", "1.0");
   dry["cubic-decimeter"] = UBASE("SI", "cubic-decimeter", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["cu-dm"] = UBASE("SI", "cu-dm", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["dm3"] = UBASE("SI", "dm3", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-centimeter"] = UBASE("SI", "cubic-centimeter", 1.000000000000000E-06, "m3", "L3", "1.0");
   dry["cu-cm"] = UBASE("SI", "cu-cm", 1.000000000000000E-06, "m3", "L3", "1.0");
   dry["cm3"] = UBASE("SI", "cm3", 1.000000000000000E-06, "m3", "L3", "1.0");
   dry["cubic-millimeter"] = UBASE("SI", "cubic-millimeter", 1.000000000000000E-09, "m3", "L3", "1.0");
   dry["cu-mm"] = UBASE("SI", "cu-mm", 1.000000000000000E-09, "m3", "L3", "1.0");
   dry["mm3"] = UBASE("SI", "mm3", 1.000000000000000E-09, "m3", "L3", "1.0");
   dry["cubic-micrometer"] = UBASE("SI", "cubic-micrometer", 1.000000000000000E-18, "m3", "L3", "1.0");
   dry["cu-um"] = UBASE("SI", "cu-um", 1.000000000000000E-18, "m3", "L3", "1.0");
   dry["um3"] = UBASE("SI", "um3", 1.000000000000000E-18, "m3", "L3", "1.0");
   dry["cubic-nanometer"] = UBASE("SI", "cubic-nanometer", 1.000000000000000E-27, "m3", "L3", "1.0");
   dry["cu-nm"] = UBASE("SI", "cu-nm", 1.000000000000000E-27, "m3", "L3", "1.0");
   dry["nm3"] = UBASE("SI", "nm3", 1.000000000000000E-27, "m3", "L3", "1.0");
   dry["cubic-picometer"] = UBASE("SI", "cubic-picometer", 1.000000000000000E-36, "m3", "L3", "1.0");
   dry["cu-pm"] = UBASE("SI", "cu-pm", 1.000000000000000E-36, "m3", "L3", "1.0");
   dry["pm3"] = UBASE("SI", "pm3", 1.000000000000000E-36, "m3", "L3", "1.0");
   dry["cubic-femtometer"] = UBASE("SI", "cubic-femtometer", 1.000000000000000E-45, "m3", "L3", "1.0");
   dry["cu-fm"] = UBASE("SI", "cu-fm", 1.000000000000000E-45, "m3", "L3", "1.0");
   dry["fm3"] = UBASE("SI", "fm3", 1.000000000000000E-45, "m3", "L3", "1.0");
   dry["cubic-attometer"] = UBASE("SI", "cubic-attometer", 1.000000000000000E-54, "m3", "L3", "1.0");
   dry["cu-am"] = UBASE("SI", "cu-am", 1.000000000000000E-54, "m3", "L3", "1.0");
   dry["am3"] = UBASE("SI", "am3", 1.000000000000000E-54, "m3", "L3", "1.0");
   dry["cubic-zeptometer"] = UBASE("SI", "cubic-zeptometer", 1.000000000000000E-63, "m3", "L3", "1.0");
   dry["cu-zm"] = UBASE("SI", "cu-zm", 1.000000000000000E-63, "m3", "L3", "1.0");
   dry["zm3"] = UBASE("SI", "zm3", 1.000000000000000E-63, "m3", "L3", "1.0");
   dry["cubic-yoctometer"] = UBASE("SI", "cubic-yoctometer", 1.000000000000000E-72, "m3", "L3", "1.0");
   dry["cu-ym"] = UBASE("SI", "cu-ym", 1.000000000000000E-72, "m3", "L3", "1.0");
   dry["ym3"] = UBASE("SI", "ym3", 1.000000000000000E-72, "m3", "L3", "1.0");
   _map["SI"] = BaseSystem("SI", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit89(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cubit"] = UBASE("Singaporean", "cubit", 4.572000000000000E-01, "m", "L", "1.0");
   area["square-cubit"] = UBASE("Singaporean", "square-cubit", 2.090318400000000E-01, "m2", "L2", "1.0");
   mass["mace"] = UBASE("Singaporean", "mace", 3.369543320000000E-03, "kg", "M", "1.0");
   mass["buncai"] = UBASE("Singaporean", "buncai", 5.326470402000000E-02, "kg", "M", "1.0");
   liquid["cubic-cubit"] = UBASE("Singaporean", "cubic-cubit", 9.556935724800000E-02, "m3", "L3", "1.0");
   dry["cubic-cubit"] = UBASE("Singaporean", "cubic-cubit", 9.556935724800000E-02, "m3", "L3", "1.0");
   _map["Singaporean"] = BaseSystem("Singaporean", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit90(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cubito"] = UBASE("Somalian", "cubito", 5.600000000000000E-01, "m", "L", "1.0");
   length["top"] = UBASE("Somalian", "top", 3.920000000000000E+00, "m", "L", "1.0");
   area["darat"] = UBASE("Somalian", "darat", 8.000000000000000E+03, "m2", "L2", "1.0");
   mass["frasla"] = UBASE("Somalian", "frasla", 1.612800000000000E+01, "kg", "M", "1.0");
   mass["gisla"] = UBASE("Somalian", "gisla", 1.612800000000000E+02, "kg", "M", "1.0");
   mass["okia"] = UBASE("Somalian", "okia", 2.800000000000000E-02, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Somalian", "rottolo", 4.480000000000000E-01, "kg", "M", "1.0");
   liquid["caba"] = UBASE("Somalian", "caba", 4.530000000000000E-04, "m3", "L3", "1.0");
   liquid["chela"] = UBASE("Somalian", "chela", 1.359000000000000E-03, "m3", "L3", "1.0");
   liquid["gisla"] = UBASE("Somalian", "gisla", 1.630800000000000E-01, "m3", "L3", "1.0");
   liquid["tabla"] = UBASE("Somalian", "tabla", 2.038500000000000E-02, "m3", "L3", "1.0");
   dry["cubic-top"] = UBASE("Somalian", "cubic-top", 6.023628800000000E+01, "m3", "L3", "1.0");
   _map["Somalian"] = BaseSystem("Somalian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit91(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cape-rood"] = UBASE("South-African", "cape-rood", 3.778296000000000E+00, "m", "L", "1.0");
   length["elle"] = UBASE("South-African", "elle", 7.063740000000000E-01, "m", "L", "1.0");
   length["rijnlandse-duim"] = UBASE("South-African", "rijnlandse-duim", 2.616200000000000E-02, "m", "L", "1.0");
   length["rijnlandse-roede"] = UBASE("South-African", "rijnlandse-roede", 3.767328000000000E+00, "m", "L", "1.0");
   length["rijnlandse-voet"] = UBASE("South-African", "rijnlandse-voet", 3.139440000000000E-01, "m", "L", "1.0");
   area["morgen"] = UBASE("South-African", "morgen", 8.565320000000000E+03, "m2", "L2", "1.0");
   mass["bundle"] = UBASE("South-African", "bundle", 3.175000000000000E-01, "kg", "M", "1.0");
   mass["cape-hundredweight"] = UBASE("South-African", "cape-hundredweight", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cape-ton"] = UBASE("South-African", "cape-ton", 9.071847400000000E+02, "kg", "M", "1.0");
   mass["loot"] = UBASE("South-African", "loot", 1.544032250000000E-02, "kg", "M", "1.0");
   mass["ons"] = UBASE("South-African", "ons", 3.088064500000000E-02, "kg", "M", "1.0");
   mass["pond"] = UBASE("South-African", "pond", 4.940903200000000E-01, "kg", "M", "1.0");
   liquid["ahm"] = UBASE("South-African", "ahm", 1.289130000000000E-01, "m3", "L3", "1.0");
   liquid["anker"] = UBASE("South-African", "anker", 3.222825000000000E-02, "m3", "L3", "1.0");
   liquid["aum"] = UBASE("South-African", "aum", 1.289130000000000E-01, "m3", "L3", "1.0");
   liquid["barrel"] = UBASE("South-African", "barrel", 1.636593120000000E-01, "m3", "L3", "1.0");
   liquid["butt"] = UBASE("South-African", "butt", 4.909779360000000E-01, "m3", "L3", "1.0");
   liquid["dumpie"] = UBASE("South-African", "dumpie", 3.400000000000000E-04, "m3", "L3", "1.0");
   liquid["firkin"] = UBASE("South-African", "firkin", 4.091482800000000E-02, "m3", "L3", "1.0");
   liquid["flask"] = UBASE("South-African", "flask", 2.295545454545450E-03, "m3", "L3", "1.0");
   liquid["half-anker"] = UBASE("South-African", "half-anker", 1.611412500000000E-02, "m3", "L3", "1.0");
   liquid["half-aum"] = UBASE("South-African", "half-aum", 6.445650000000000E-02, "m3", "L3", "1.0");
   liquid["half-legger"] = UBASE("South-African", "half-legger", 2.578260000000000E-01, "m3", "L3", "1.0");
   liquid["half-pipe"] = UBASE("South-African", "half-pipe", 2.126400000000000E-01, "m3", "L3", "1.0");
   liquid["hogshead"] = UBASE("South-African", "hogshead", 2.454889680000000E-01, "m3", "L3", "1.0");
   liquid["kanne"] = UBASE("South-African", "kanne", 1.329000000000000E-03, "m3", "L3", "1.0");
   liquid["kilderkin"] = UBASE("South-African", "kilderkin", 8.182965600000000E-02, "m3", "L3", "1.0");
   liquid["legger"] = UBASE("South-African", "legger", 5.156520000000000E-01, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("South-African", "pipe", 4.252800000000000E-01, "m3", "L3", "1.0");
   dry["bali"] = UBASE("South-African", "bali", 4.600000000000000E-02, "m3", "L3", "1.0");
   dry["gantang"] = UBASE("South-African", "gantang", 9.200000000000000E-03, "m3", "L3", "1.0");
   dry["load"] = UBASE("South-African", "load", 1.091000000000000E+00, "m3", "L3", "1.0");
   dry["muid"] = UBASE("South-African", "muid", 1.091000000000000E-01, "m3", "L3", "1.0");
   dry["schepel"] = UBASE("South-African", "schepel", 2.727500000000000E-02, "m3", "L3", "1.0");
   _map["South-African"] = BaseSystem("South-African", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit92(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["codos"] = UBASE("Spanish", "codos", 4.179525000000000E-01, "m", "L", "1.0");
   length["coto"] = UBASE("Spanish", "coto", 1.044881250000000E-01, "m", "L", "1.0");
   length["cubit"] = UBASE("Spanish", "cubit", 4.179525000000000E-01, "m", "L", "1.0");
   length["diedo"] = UBASE("Spanish", "diedo", 1.741468750000000E-02, "m", "L", "1.0");
   length["estadal"] = UBASE("Spanish", "estadal", 3.343620000000000E+00, "m", "L", "1.0");
   length["estado"] = UBASE("Spanish", "estado", 1.671810000000000E+00, "m", "L", "1.0");
   length["finger"] = UBASE("Spanish", "finger", 2.000000000000000E-02, "m", "L", "1.0");
   length["foot"] = UBASE("Spanish", "foot", 2.786350000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Spanish", "feet", 2.786350000000000E-01, "m", "L", "1.0");
   length["legua"] = UBASE("Spanish", "legua", 4.179525000000000E+03, "m", "L", "1.0");
   length["linea"] = UBASE("Spanish", "linea", 1.736111111111110E-03, "m", "L", "1.0");
   length["milla"] = UBASE("Spanish", "milla", 1.393175000000000E+03, "m", "L", "1.0");
   length["palma"] = UBASE("Spanish", "palma", 2.089762500000000E-01, "m", "L", "1.0");
   length["palmo"] = UBASE("Spanish", "palmo", 2.089762500000000E-01, "m", "L", "1.0");
   length["paso"] = UBASE("Spanish", "paso", 1.393175000000000E+00, "m", "L", "1.0");
   length["passo"] = UBASE("Spanish", "passo", 1.393175000000000E+00, "m", "L", "1.0");
   length["pie"] = UBASE("Spanish", "pie", 2.786350000000000E-01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Spanish", "pulgada", 2.321958333333330E-02, "m", "L", "1.0");
   length["punto"] = UBASE("Spanish", "punto", 1.209353298611110E-04, "m", "L", "1.0");
   length["sesma"] = UBASE("Spanish", "sesma", 1.393175000000000E-01, "m", "L", "1.0");
   length["toesas"] = UBASE("Spanish", "toesas", 1.671810000000000E+00, "m", "L", "1.0");
   length["vara"] = UBASE("Spanish", "vara", 8.359050000000000E-01, "m", "L", "1.0");
   area["aranzada"] = UBASE("Spanish", "aranzada", 4.471917881760000E+03, "m2", "L2", "1.0");
   area["calemin"] = UBASE("Spanish", "calemin", 5.366301458112000E+02, "m2", "L2", "1.0");
   area["cuartilla"] = UBASE("Spanish", "cuartilla", 1.746842922562500E+01, "m2", "L2", "1.0");
   area["fanegada"] = UBASE("Spanish", "fanegada", 6.439561749734400E+03, "m2", "L2", "1.0");
   area["labor"] = UBASE("Spanish", "labor", 6.987371690250000E+05, "m2", "L2", "1.0");
   area["labour"] = UBASE("Spanish", "labour", 6.987371690250000E+05, "m2", "L2", "1.0");
   area["league"] = UBASE("Spanish", "league", 1.746842922562500E+07, "m2", "L2", "1.0");
   area["square-vara"] = UBASE("Spanish", "square-vara", 6.987371690250000E-01, "m2", "L2", "1.0");
   area["yugada"] = UBASE("Spanish", "yugada", 3.219780874867200E+05, "m2", "L2", "1.0");
   mass["adarme"] = UBASE("Spanish", "adarme", 1.797238281250000E-03, "kg", "M", "1.0");
   mass["arienzo"] = UBASE("Spanish", "arienzo", 1.996931423611110E-04, "kg", "M", "1.0");
   mass["arroba"] = UBASE("Spanish", "arroba", 1.150232500000000E+01, "kg", "M", "1.0");
   mass["barril"] = UBASE("Spanish", "barril", 2.300465000000000E+01, "kg", "M", "1.0");
   mass["dinero"] = UBASE("Spanish", "dinero", 1.198158854166670E-03, "kg", "M", "1.0");
   mass["escrupulo"] = UBASE("Spanish", "escrupulo", 7.188953125000000E-03, "kg", "M", "1.0");
   mass["grano"] = UBASE("Spanish", "grano", 4.992328559027780E-05, "kg", "M", "1.0");
   mass["libra"] = UBASE("Spanish", "libra", 4.600930000000000E-01, "kg", "M", "1.0");
   mass["marco"] = UBASE("Spanish", "marco", 2.300465000000000E-01, "kg", "M", "1.0");
   mass["ochava"] = UBASE("Spanish", "ochava", 3.594476562500000E-03, "kg", "M", "1.0");
   mass["onza"] = UBASE("Spanish", "onza", 2.875581250000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Spanish", "quintal", 4.600930000000000E+01, "kg", "M", "1.0");
   mass["quintalmacho"] = UBASE("Spanish", "quintalmacho", 6.901395000000000E+01, "kg", "M", "1.0");
   mass["tomin"] = UBASE("Spanish", "tomin", 5.990794270833330E-04, "kg", "M", "1.0");
   mass["tondada"] = UBASE("Spanish", "tondada", 9.201860000000000E+02, "kg", "M", "1.0");
   liquid["arroba"] = UBASE("Spanish", "arroba", 1.256300000000000E-02, "m3", "L3", "1.0");
   liquid["arroba(water)"] = UBASE("Spanish", "arroba(water)", 1.564316200000000E-02, "m3", "L3", "1.0");
   liquid["arroba(wine)"] = UBASE("Spanish", "arroba(wine)", 1.613300000000000E-02, "m3", "L3", "1.0");
   liquid["azumbre"] = UBASE("Spanish", "azumbre", 1.955395250000000E-03, "m3", "L3", "1.0");
   liquid["bota"] = UBASE("Spanish", "bota", 4.692948600000000E-01, "m3", "L3", "1.0");
   liquid["cantara"] = UBASE("Spanish", "cantara", 1.564316200000000E-02, "m3", "L3", "1.0");
   liquid["copas"] = UBASE("Spanish", "copas", 1.222122031250000E-04, "m3", "L3", "1.0");
   liquid["cuartilla"] = UBASE("Spanish", "cuartilla", 3.910790500000000E-03, "m3", "L3", "1.0");
   liquid["cuartillo"] = UBASE("Spanish", "cuartillo", 4.888488125000000E-04, "m3", "L3", "1.0");
   liquid["moio"] = UBASE("Spanish", "moio", 2.502905920000000E-01, "m3", "L3", "1.0");
   liquid["panilla"] = UBASE("Spanish", "panilla", 1.564316200000000E-04, "m3", "L3", "1.0");
   liquid["pipa"] = UBASE("Spanish", "pipa", 4.223653740000000E-01, "m3", "L3", "1.0");
   dry["almud"] = UBASE("Spanish", "almud", 4.625083333333330E-03, "m3", "L3", "1.0");
   dry["almude"] = UBASE("Spanish", "almude", 4.625083333333330E-03, "m3", "L3", "1.0");
   dry["cahiz"] = UBASE("Spanish", "cahiz", 6.660120000000000E-01, "m3", "L3", "1.0");
   dry["calemin"] = UBASE("Spanish", "calemin", 4.625083333333330E-03, "m3", "L3", "1.0");
   dry["celemin"] = UBASE("Spanish", "celemin", 4.625083333333330E-03, "m3", "L3", "1.0");
   dry["cuartilla"] = UBASE("Spanish", "cuartilla", 1.387525000000000E-02, "m3", "L3", "1.0");
   dry["cuartillo"] = UBASE("Spanish", "cuartillo", 1.156270833333330E-03, "m3", "L3", "1.0");
   dry["fanega"] = UBASE("Spanish", "fanega", 5.550100000000000E-02, "m3", "L3", "1.0");
   dry["fanegada"] = UBASE("Spanish", "fanegada", 6.439561749734400E+03, "m3", "L3", "1.0");
   dry["medio"] = UBASE("Spanish", "medio", 2.312541666666670E-03, "m3", "L3", "1.0");
   dry["ochavillo"] = UBASE("Spanish", "ochavillo", 7.226692708333330E-05, "m3", "L3", "1.0");
   dry["racion"] = UBASE("Spanish", "racion", 2.890677083333330E-04, "m3", "L3", "1.0");
   _map["Spanish"] = BaseSystem("Spanish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit93(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["aangula"] = UBASE("Sri-Lankan", "aangula", 1.904999992680960E+01, "m", "L", "1.0");
   length["anu"] = UBASE("Sri-Lankan", "anu", 1.190401200000000E-06, "m", "L", "1.0");
   length["dhannamaasa"] = UBASE("Sri-Lankan", "dhannamaasa", 2.721428560972800E+00, "m", "L", "1.0");
   length["likkha"] = UBASE("Sri-Lankan", "likkha", 5.553935838720000E-02, "m", "L", "1.0");
   length["paramaanuwa"] = UBASE("Sri-Lankan", "paramaanuwa", 3.306670000000000E-08, "m", "L", "1.0");
   length["ratharenu"] = UBASE("Sri-Lankan", "ratharenu", 1.542759955200000E-03, "m", "L", "1.0");
   length["thajjaari"] = UBASE("Sri-Lankan", "thajjaari", 4.285444320000000E-05, "m", "L", "1.0");
   length["ukha"] = UBASE("Sri-Lankan", "ukha", 3.887755087104000E-01, "m", "L", "1.0");
   area["amuna"] = UBASE("Sri-Lankan", "amuna", 8.093712000000000E+03, "m2", "L2", "1.0");
   area["kareesa"] = UBASE("Sri-Lankan", "kareesa", 1.287636000000000E+02, "m2", "L2", "1.0");
   area["kiriya"] = UBASE("Sri-Lankan", "kiriya", 3.237484800000000E+04, "m2", "L2", "1.0");
   area["kuruni"] = UBASE("Sri-Lankan", "kuruni", 2.207376000000000E+03, "m2", "L2", "1.0");
   area["laaha"] = UBASE("Sri-Lankan", "laaha", 4.598700000000000E+00, "m2", "L2", "1.0");
   area["paela"] = UBASE("Sri-Lankan", "paela", 1.839480000000000E+02, "m2", "L2", "1.0");
   mass["aka"] = UBASE("Sri-Lankan", "aka", 6.000000000000000E-04, "kg", "M", "1.0");
   mass["dharana"] = UBASE("Sri-Lankan", "dharana", 4.800000000000000E-03, "kg", "M", "1.0");
   mass["gunja"] = UBASE("Sri-Lankan", "gunja", 1.200000000000000E-04, "kg", "M", "1.0");
   mass["maasaka"] = UBASE("Sri-Lankan", "maasaka", 2.400000000000000E-04, "kg", "M", "1.0");
   mass["pala"] = UBASE("Sri-Lankan", "pala", 4.800000000000000E-02, "kg", "M", "1.0");
   mass["swarna"] = UBASE("Sri-Lankan", "swarna", 2.400000000000000E-02, "kg", "M", "1.0");
   mass["veeha"] = UBASE("Sri-Lankan", "veeha", 3.000000000000000E-05, "kg", "M", "1.0");
   liquid["parrah"] = UBASE("Sri-Lankan", "parrah", 2.555152954200000E-02, "m3", "L3", "1.0");
   liquid["seer"] = UBASE("Sri-Lankan", "seer", 1.135623535200000E-03, "m3", "L3", "1.0");
   dry["ammonam"] = UBASE("Sri-Lankan", "ammonam", 2.034000000000000E-01, "m3", "L3", "1.0");
   dry["chundoo"] = UBASE("Sri-Lankan", "chundoo", 2.354166666666670E-04, "m3", "L3", "1.0");
   dry["parrah"] = UBASE("Sri-Lankan", "parrah", 2.542500000000000E-02, "m3", "L3", "1.0");
   dry["seer"] = UBASE("Sri-Lankan", "seer", 7.062500000000000E-04, "m3", "L3", "1.0");
   _map["Sri-Lankan"] = BaseSystem("Sri-Lankan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit94(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["se"] = UBASE("Sumerian", "se", 2.881111111111110E-03, "m", "L", "1.0");
   length["su-si"] = UBASE("Sumerian", "su-si", 1.728666666666670E-02, "m", "L", "1.0");
   length["su-du-a"] = UBASE("Sumerian", "su-du-a", 3.457333333333330E-01, "m", "L", "1.0");
   length["kus"] = UBASE("Sumerian", "kus", 5.186000000000000E-01, "m", "L", "1.0");
   length["grir"] = UBASE("Sumerian", "grir", 1.037200000000000E+00, "m", "L", "1.0");
   length["gi"] = UBASE("Sumerian", "gi", 3.111600000000000E+00, "m", "L", "1.0");
   length["nindan"] = UBASE("Sumerian", "nindan", 6.223200000000000E+00, "m", "L", "1.0");
   length["ese"] = UBASE("Sumerian", "ese", 6.223200000000000E+01, "m", "L", "1.0");
   length["us"] = UBASE("Sumerian", "us", 3.733920000000000E+02, "m", "L", "1.0");
   length["da-na"] = UBASE("Sumerian", "da-na", 1.120176000000000E+04, "m", "L", "1.0");
   area["gin"] = UBASE("Sumerian", "gin", 2.689459600000000E-01, "m2", "L2", "1.0");
   area["sar"] = UBASE("Sumerian", "sar", 3.872821824000000E+01, "m2", "L2", "1.0");
   area["uzalak"] = UBASE("Sumerian", "uzalak", 9.682054560000000E+02, "m2", "L2", "1.0");
   area["upu"] = UBASE("Sumerian", "upu", 1.936410912000000E+03, "m2", "L2", "1.0");
   area["iku"] = UBASE("Sumerian", "iku", 3.872821824000000E+03, "m2", "L2", "1.0");
   area["bur"] = UBASE("Sumerian", "bur", 6.971079283200000E+04, "m2", "L2", "1.0");
   mass["se"] = UBASE("Sumerian", "se", 4.666666666666670E-04, "kg", "M", "1.0");
   mass["gin"] = UBASE("Sumerian", "gin", 8.400000000000000E-03, "kg", "M", "1.0");
   mass["mana"] = UBASE("Sumerian", "mana", 5.040000000000000E-01, "kg", "M", "1.0");
   mass["gun"] = UBASE("Sumerian", "gun", 1.814400000000000E+03, "kg", "M", "1.0");
   liquid["gin"] = UBASE("Sumerian", "gin", 1.666666666666670E-05, "m3", "L3", "1.0");
   liquid["sila"] = UBASE("Sumerian", "sila", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["ban"] = UBASE("Sumerian", "ban", 1.000000000000000E-02, "m3", "L3", "1.0");
   liquid["barig"] = UBASE("Sumerian", "barig", 6.000000000000000E-02, "m3", "L3", "1.0");
   liquid["gur"] = UBASE("Sumerian", "gur", 3.000000000000000E-01, "m3", "L3", "1.0");
   dry["cubic-kus"] = UBASE("Sumerian", "cubic-kus", 1.394753748560000E-01, "m3", "L3", "1.0");
   _map["Sumerian"] = BaseSystem("Sumerian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit95(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["aln"] = UBASE("Swedish", "aln", 5.938000000000000E-01, "m", "L", "1.0");
   length["alnar"] = UBASE("Swedish", "alnar", 5.344200000000000E+00, "m", "L", "1.0");
   length["alen"] = UBASE("Swedish", "alen", 5.938000000000000E-01, "m", "L", "1.0");
   length["ell"] = UBASE("Swedish", "ell", 5.344200000000000E+00, "m", "L", "1.0");
   length["fanen"] = UBASE("Swedish", "fanen", 1.781400000000000E+00, "m", "L", "1.0");
   length["famn"] = UBASE("Swedish", "famn", 1.781400000000000E+00, "m", "L", "1.0");
   length["fingerbredd"] = UBASE("Swedish", "fingerbredd", 1.855625000000000E-02, "m", "L", "1.0");
   length["fjardingsvag"] = UBASE("Swedish", "fjardingsvag", 2.672100000000000E+03, "m", "L", "1.0");
   length["foot"] = UBASE("Swedish", "foot", 2.969000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("Swedish", "feet", 2.969000000000000E-01, "m", "L", "1.0");
   length["fot"] = UBASE("Swedish", "fot", 2.969000000000000E-01, "m", "L", "1.0");
   length["kvarter"] = UBASE("Swedish", "kvarter", 1.484500000000000E-01, "m", "L", "1.0");
   length["kyndemil"] = UBASE("Swedish", "kyndemil", 1.599994100000000E+04, "m", "L", "1.0");
   length["linje"] = UBASE("Swedish", "linje", 2.061805555555560E-03, "m", "L", "1.0");
   length["mil"] = UBASE("Swedish", "mil", 5.344200000000000E+03, "m", "L", "1.0");
   length["nymil"] = UBASE("Swedish", "nymil", 1.000000000000000E+04, "m", "L", "1.0");
   length["ref"] = UBASE("Swedish", "ref", 4.750400000000000E+01, "m", "L", "1.0");
   length["rev"] = UBASE("Swedish", "rev", 4.750400000000000E+01, "m", "L", "1.0");
   length["skogsmil"] = UBASE("Swedish", "skogsmil", 4.999796000000000E+03, "m", "L", "1.0");
   length["stang"] = UBASE("Swedish", "stang", 4.750400000000000E+00, "m", "L", "1.0");
   length["steg"] = UBASE("Swedish", "steg", 8.907000000000000E-01, "m", "L", "1.0");
   length["stenkast"] = UBASE("Swedish", "stenkast", 4.750400000000000E+00, "m", "L", "1.0");
   length["tum"] = UBASE("Swedish", "tum", 2.474166666666670E-02, "m", "L", "1.0");
   length["tvarhand"] = UBASE("Swedish", "tvarhand", 9.896666666666670E-02, "m", "L", "1.0");
   area["fjardingsland"] = UBASE("Swedish", "fjardingsland", 2.468189080000000E+03, "m2", "L2", "1.0");
   area["hektar"] = UBASE("Swedish", "hektar", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["kannaland"] = UBASE("Swedish", "kannaland", 8.814961000000000E+01, "m2", "L2", "1.0");
   area["kappland"] = UBASE("Swedish", "kappland", 1.542618175000000E+02, "m2", "L2", "1.0");
   area["kvadratmil"] = UBASE("Swedish", "kvadratmil", 2.856047364000000E+07, "m2", "L2", "1.0");
   area["kvadrattum"] = UBASE("Swedish", "kvadrattum", 6.121500694444440E-04, "m2", "L2", "1.0");
   area["kvardratfot"] = UBASE("Swedish", "kvardratfot", 8.814961000000000E-02, "m2", "L2", "1.0");
   area["pundland"] = UBASE("Swedish", "pundland", 1.974551264000000E+04, "m2", "L2", "1.0");
   area["spannland"] = UBASE("Swedish", "spannland", 9.872756320000000E+03, "m2", "L2", "1.0");
   area["square-foot"] = UBASE("Swedish", "square-foot", 8.814961000000000E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("Swedish", "square-feet", 8.814961000000000E-02, "m2", "L2", "1.0");
   area["square-ref"] = UBASE("Swedish", "square-ref", 8.814961000000000E+02, "m2", "L2", "1.0");
   area["tunland"] = UBASE("Swedish", "tunland", 4.936378160000000E+03, "m2", "L2", "1.0");
   area["tunnland"] = UBASE("Swedish", "tunnland", 4.936378160000000E+03, "m2", "L2", "1.0");
   mass["ass"] = UBASE("Swedish", "ass", 4.804246184448460E-05, "kg", "M", "1.0");
   mass["bismerpund"] = UBASE("Swedish", "bismerpund", 5.100956428800000E+00, "kg", "M", "1.0");
   mass["centner"] = UBASE("Swedish", "centner", 4.250797024000000E+01, "kg", "M", "1.0");
   mass["korn"] = UBASE("Swedish", "korn", 4.250797024000000E-04, "kg", "M", "1.0");
   mass["liespund"] = UBASE("Swedish", "liespund", 8.501594048000000E+00, "kg", "M", "1.0");
   mass["lispund"] = UBASE("Swedish", "lispund", 8.501594048000000E+00, "kg", "M", "1.0");
   mass["lod"] = UBASE("Swedish", "lod", 1.328374070000000E-02, "kg", "M", "1.0");
   mass["mark"] = UBASE("Swedish", "mark", 2.125398512000000E-01, "kg", "M", "1.0");
   mass["nylast"] = UBASE("Swedish", "nylast", 5.100956428800000E+03, "kg", "M", "1.0");
   mass["ort"] = UBASE("Swedish", "ort", 4.250797024000000E-03, "kg", "M", "1.0");
   mass["pound"] = UBASE("Swedish", "pound", 4.250797024444000E-01, "kg", "M", "1.0");
   mass["quintin"] = UBASE("Swedish", "quintin", 3.320935175000000E-03, "kg", "M", "1.0");
   mass["skalpund"] = UBASE("Swedish", "skalpund", 4.250797024000000E-01, "kg", "M", "1.0");
   mass["skeppsund"] = UBASE("Swedish", "skeppsund", 1.700318809600000E+02, "kg", "M", "1.0");
   mass["sten"] = UBASE("Swedish", "sten", 1.360255047680000E+01, "kg", "M", "1.0");
   mass["uns"] = UBASE("Swedish", "uns", 2.656748140000000E-02, "kg", "M", "1.0");
   mass["waag"] = UBASE("Swedish", "waag", 7.013815089600000E+01, "kg", "M", "1.0");
   liquid["am"] = UBASE("Swedish", "am", 1.570297152540000E-01, "m3", "L3", "1.0");
   liquid["ankare"] = UBASE("Swedish", "ankare", 3.925742881350000E-02, "m3", "L3", "1.0");
   liquid["anker"] = UBASE("Swedish", "anker", 3.925742881350000E-02, "m3", "L3", "1.0");
   liquid["fat"] = UBASE("Swedish", "fat", 1.570297152540000E-01, "m3", "L3", "1.0");
   liquid["fjarding"] = UBASE("Swedish", "fjarding", 3.140594305080000E-02, "m3", "L3", "1.0");
   liquid["fuder"] = UBASE("Swedish", "fuder", 9.421782915240000E-01, "m3", "L3", "1.0");
   liquid["jungfrur"] = UBASE("Swedish", "jungfrur", 8.178631002812500E-05, "m3", "L3", "1.0");
   liquid["kvarter"] = UBASE("Swedish", "kvarter", 4.361936534833330E-04, "m3", "L3", "1.0");
   liquid["ohm"] = UBASE("Swedish", "ohm", 1.570297152540000E-01, "m3", "L3", "1.0");
   liquid["oxhoft"] = UBASE("Swedish", "oxhoft", 2.355445728810000E-01, "m3", "L3", "1.0");
   liquid["pipe"] = UBASE("Swedish", "pipe", 4.710891457620000E-01, "m3", "L3", "1.0");
   liquid["pot"] = UBASE("Swedish", "pot", 9.693192299629630E-04, "m3", "L3", "1.0");
   liquid["quarter"] = UBASE("Swedish", "quarter", 4.361936534833330E-04, "m3", "L3", "1.0");
   liquid["stop"] = UBASE("Swedish", "stop", 1.308580960450000E-03, "m3", "L3", "1.0");
   liquid["storfamn"] = UBASE("Swedish", "storfamn", 3.768713166096000E+00, "m3", "L3", "1.0");
   liquid["tunna"] = UBASE("Swedish", "tunna", 1.256237722032000E-01, "m3", "L3", "1.0");
   dry["eimer"] = UBASE("Swedish", "eimer", 7.851485762700000E-02, "m3", "L3", "1.0");
   dry["fjerdingar"] = UBASE("Swedish", "fjerdingar", 1.832013344630000E-02, "m3", "L3", "1.0");
   dry["halvspanna"] = UBASE("Swedish", "halvspanna", 3.664026689260000E-02, "m3", "L3", "1.0");
   dry["junkfra"] = UBASE("Swedish", "junkfra", 8.178631002812500E-05, "m3", "L3", "1.0");
   dry["kanna"] = UBASE("Swedish", "kanna", 2.617161920900000E-03, "m3", "L3", "1.0");
   dry["kappar"] = UBASE("Swedish", "kappar", 4.580033361575000E-03, "m3", "L3", "1.0");
   dry["kollast"] = UBASE("Swedish", "kollast", 1.978574412200400E+00, "m3", "L3", "1.0");
   dry["koltunna"] = UBASE("Swedish", "koltunna", 1.648812010167000E-01, "m3", "L3", "1.0");
   dry["kubikfamn"] = UBASE("Swedish", "kubikfamn", 5.653069749144000E+00, "m3", "L3", "1.0");
   dry["ort"] = UBASE("Swedish", "ort", 8.178631002812500E-05, "m3", "L3", "1.0");
   dry["quarter"] = UBASE("Swedish", "quarter", 4.361936534833330E-04, "m3", "L3", "1.0");
   dry["spanna"] = UBASE("Swedish", "spanna", 7.328053378520000E-02, "m3", "L3", "1.0");
   dry["standard"] = UBASE("Swedish", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("Swedish", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["stop"] = UBASE("Swedish", "stop", 1.308580960450000E-03, "m3", "L3", "1.0");
   dry["tunna"] = UBASE("Swedish", "tunna", 1.465610675704000E-01, "m3", "L3", "1.0");
   _map["Swedish"] = BaseSystem("Swedish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit96(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["aune"] = UBASE("Swiss", "aune", 6.000000000000000E-01, "m", "L", "1.0");
   length["brache"] = UBASE("Swiss", "brache", 6.000000000000000E-01, "m", "L", "1.0");
   length["douzieme"] = UBASE("Swiss", "douzieme", 1.880000000000000E-04, "m", "L", "1.0");
   length["elle"] = UBASE("Swiss", "elle", 6.000000000000000E-01, "m", "L", "1.0");
   length["fathom"] = UBASE("Swiss", "fathom", 1.800000000000000E+00, "m", "L", "1.0");
   length["fuss"] = UBASE("Swiss", "fuss", 3.000000000000000E-01, "m", "L", "1.0");
   length["klafter"] = UBASE("Swiss", "klafter", 1.800000000000000E+00, "m", "L", "1.0");
   length["lieue"] = UBASE("Swiss", "lieue", 4.800000000000000E+03, "m", "L", "1.0");
   length["ligne"] = UBASE("Swiss", "ligne", 2.083333333333330E-03, "m", "L", "1.0");
   length["linie"] = UBASE("Swiss", "linie", 2.083333333333330E-03, "m", "L", "1.0");
   length["perche"] = UBASE("Swiss", "perche", 4.800000000000000E+00, "m", "L", "1.0");
   length["pied"] = UBASE("Swiss", "pied", 3.000000000000000E-01, "m", "L", "1.0");
   length["pouce"] = UBASE("Swiss", "pouce", 2.500000000000000E-02, "m", "L", "1.0");
   length["ruthe"] = UBASE("Swiss", "ruthe", 1.800000000000000E+00, "m", "L", "1.0");
   length["stunde"] = UBASE("Swiss", "stunde", 4.800000000000000E+03, "m", "L", "1.0");
   length["toise"] = UBASE("Swiss", "toise", 1.800000000000000E+00, "m", "L", "1.0");
   length["zoll"] = UBASE("Swiss", "zoll", 2.500000000000000E-02, "m", "L", "1.0");
   area["arpent"] = UBASE("Swiss", "arpent", 3.600000000000000E+01, "m2", "L2", "1.0");
   mass["drachme(apothecary)"] = UBASE("Swiss", "drachme(apothecary)", 3.906250000000000E-03, "kg", "M", "1.0");
   mass["grain(apothecary)"] = UBASE("Swiss", "grain(apothecary)", 6.510416666666670E-05, "kg", "M", "1.0");
   mass["livre"] = UBASE("Swiss", "livre", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["livre(apothecary)"] = UBASE("Swiss", "livre(apothecary)", 3.750000000000000E-01, "kg", "M", "1.0");
   mass["livre(ordinary-apothecary)"] = UBASE("Swiss", "livre(ordinary-apothecary)", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["loth"] = UBASE("Swiss", "loth", 1.562500000000000E-02, "kg", "M", "1.0");
   mass["once"] = UBASE("Swiss", "once", 3.125000000000000E-02, "kg", "M", "1.0");
   mass["once(apothecary)"] = UBASE("Swiss", "once(apothecary)", 3.125000000000000E-02, "kg", "M", "1.0");
   mass["pound"] = UBASE("Swiss", "pound", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Swiss", "quintal", 5.000000000000000E+01, "kg", "M", "1.0");
   mass["scruple(apothecary)"] = UBASE("Swiss", "scruple(apothecary)", 1.302083333333330E-03, "kg", "M", "1.0");
   mass["zollpfund"] = UBASE("Swiss", "zollpfund", 5.000000000000000E-01, "kg", "M", "1.0");
   liquid["immi"] = UBASE("Swiss", "immi", 1.500000000000000E-03, "m3", "L3", "1.0");
   liquid["muid"] = UBASE("Swiss", "muid", 1.500000000000000E-01, "m3", "L3", "1.0");
   liquid["pot"] = UBASE("Swiss", "pot", 1.500000000000000E-03, "m3", "L3", "1.0");
   liquid["setier"] = UBASE("Swiss", "setier", 3.750000000000000E-02, "m3", "L3", "1.0");
   dry["double-quarteron"] = UBASE("Swiss", "double-quarteron", 3.000000000000000E-02, "m3", "L3", "1.0");
   dry["emine"] = UBASE("Swiss", "emine", 1.500000000000000E-03, "m3", "L3", "1.0");
   dry["quarteron"] = UBASE("Swiss", "quarteron", 1.500000000000000E-02, "m3", "L3", "1.0");
   dry["sac"] = UBASE("Swiss", "sac", 1.500000000000000E-01, "m3", "L3", "1.0");
   _map["Swiss"] = BaseSystem("Swiss", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit97(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["pic"] = UBASE("Syrian", "pic", 5.820000000000000E-01, "m", "L", "1.0");
   area["square-pic"] = UBASE("Syrian", "square-pic", 3.387240000000000E-01, "m2", "L2", "1.0");
   mass["cantar"] = UBASE("Syrian", "cantar", 1.785000000000000E+02, "kg", "M", "1.0");
   mass["cola"] = UBASE("Syrian", "cola", 6.247500000000000E+01, "kg", "M", "1.0");
   mass["drachme"] = UBASE("Syrian", "drachme", 4.462500000000000E-03, "kg", "M", "1.0");
   mass["metecali"] = UBASE("Syrian", "metecali", 4.462500000000000E-03, "kg", "M", "1.0");
   mass["mitcal"] = UBASE("Syrian", "mitcal", 4.462500000000000E-03, "kg", "M", "1.0");
   mass["once"] = UBASE("Syrian", "once", 2.975000000000000E-02, "kg", "M", "1.0");
   mass["pesi"] = UBASE("Syrian", "pesi", 2.975000000000000E-03, "kg", "M", "1.0");
   mass["rottolo"] = UBASE("Syrian", "rottolo", 1.785000000000000E+00, "kg", "M", "1.0");
   mass["zurbo"] = UBASE("Syrian", "zurbo", 4.908750000000000E+01, "kg", "M", "1.0");
   liquid["garava"] = UBASE("Syrian", "garava", 1.440000000000000E+00, "m3", "L3", "1.0");
   liquid["makuk"] = UBASE("Syrian", "makuk", 8.000000000000000E-01, "m3", "L3", "1.0");
   liquid["rotl"] = UBASE("Syrian", "rotl", 3.200000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Syrian", "cubic-pic", 1.971373680000000E-01, "m3", "L3", "1.0");
   _map["Syrian"] = BaseSystem("Syrian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit98(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["hun"] = UBASE("Taiwanese", "hun", 3.030303030303030E-03, "m", "L", "1.0");
   length["chhun"] = UBASE("Taiwanese", "chhun", 3.030303030303030E-02, "m", "L", "1.0");
   length["chhioh"] = UBASE("Taiwanese", "chhioh", 3.030303030303030E-01, "m", "L", "1.0");
   length["tng"] = UBASE("Taiwanese", "tng", 3.030303030303030E+00, "m", "L", "1.0");
   area["pe"] = UBASE("Taiwanese", "pe", 3.305785123966940E+00, "m2", "L2", "1.0");
   area["bo"] = UBASE("Taiwanese", "bo", 9.917355371900830E+01, "m2", "L2", "1.0");
   area["hun"] = UBASE("Taiwanese", "hun", 9.699173553719010E+02, "m2", "L2", "1.0");
   area["kah"] = UBASE("Taiwanese", "kah", 9.699173553719010E+03, "m2", "L2", "1.0");
   area["le"] = UBASE("Taiwanese", "le", 4.849586776859500E+04, "m2", "L2", "1.0");
   mass["li"] = UBASE("Taiwanese", "li", 3.750000000000000E-05, "kg", "M", "1.0");
   mass["hun"] = UBASE("Taiwanese", "hun", 3.750000000000000E-04, "kg", "M", "1.0");
   mass["chi"] = UBASE("Taiwanese", "chi", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["nu"] = UBASE("Taiwanese", "nu", 3.750000000000000E-02, "kg", "M", "1.0");
   mass["kin"] = UBASE("Taiwanese", "kin", 6.000000000000000E-01, "kg", "M", "1.0");
   mass["kun"] = UBASE("Taiwanese", "kun", 6.000000000000000E-01, "kg", "M", "1.0");
   mass["ta"] = UBASE("Taiwanese", "ta", 6.000000000000000E+01, "kg", "M", "1.0");
   liquid["ilter"] = UBASE("Taiwanese", "ilter", 1.000000000000000E-03, "m3", "L3", "1.0");
   dry["cubic-chhioh"] = UBASE("Taiwanese", "cubic-chhioh", 2.782647410746580E-02, "m3", "L3", "1.0");
   _map["Taiwanese"] = BaseSystem("Taiwanese", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit99(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["koan"] = UBASE("Tamil", "koan", 1.158953125000000E-11, "m", "L", "1.0");
   length["nunnanu"] = UBASE("Tamil", "nunnanu", 1.158953125000000E-10, "m", "L", "1.0");
   length["anu"] = UBASE("Tamil", "anu", 1.158953125000000E-09, "m", "L", "1.0");
   length["kadirtugal"] = UBASE("Tamil", "kadirtugal", 9.271625000000000E-09, "m", "L", "1.0");
   length["tusumbu"] = UBASE("Tamil", "tusumbu", 7.417300000000000E-08, "m", "L", "1.0");
   length["mayirnuni"] = UBASE("Tamil", "mayirnuni", 5.933840000000000E-07, "m", "L", "1.0");
   length["nunnmanal"] = UBASE("Tamil", "nunnmanal", 4.747072000000000E-06, "m", "L", "1.0");
   length["siru-kadugu"] = UBASE("Tamil", "siru-kadugu", 3.797657600000000E-05, "m", "L", "1.0");
   length["yel"] = UBASE("Tamil", "yel", 3.038126080000000E-04, "m", "L", "1.0");
   length["nel"] = UBASE("Tamil", "nel", 2.430500864000000E-03, "m", "L", "1.0");
   length["viral"] = UBASE("Tamil", "viral", 1.944400691200000E-02, "m", "L", "1.0");
   length["san"] = UBASE("Tamil", "san", 2.333280829440000E-01, "m", "L", "1.0");
   length["immi"] = UBASE("Tamil", "immi", 2.333280829440000E-01, "m", "L", "1.0");
   length["mulam"] = UBASE("Tamil", "mulam", 4.666561658880000E-01, "m", "L", "1.0");
   length["yaar"] = UBASE("Tamil", "yaar", 9.333123317760000E-01, "m", "L", "1.0");
   length["pagam"] = UBASE("Tamil", "pagam", 1.866624663552000E+00, "m", "L", "1.0");
   length["kadam"] = UBASE("Tamil", "kadam", 1.166640414720000E+03, "m", "L", "1.0");
   area["cent"] = UBASE("Tamil", "cent", 4.046856422400000E+01, "m2", "L2", "1.0");
   area["marakkal-vitaippatu"] = UBASE("Tamil", "marakkal-vitaippatu", 3.237485137920000E+02, "m2", "L2", "1.0");
   area["kuruni"] = UBASE("Tamil", "kuruni", 3.237485137920000E+02, "m2", "L2", "1.0");
   area["patakku"] = UBASE("Tamil", "patakku", 6.474970275840000E+02, "m2", "L2", "1.0");
   area["mukkuruni"] = UBASE("Tamil", "mukkuruni", 9.712455413760000E+02, "m2", "L2", "1.0");
   area["kajam"] = UBASE("Tamil", "kajam", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["visam"] = UBASE("Tamil", "visam", 3.344509440000000E+00, "m2", "L2", "1.0");
   area["kuli"] = UBASE("Tamil", "kuli", 1.335596179009900E+01, "m2", "L2", "1.0");
   area["ma"] = UBASE("Tamil", "ma", 1.335596179009900E+03, "m2", "L2", "1.0");
   area["kani"] = UBASE("Tamil", "kani", 5.342384716039610E+03, "m2", "L2", "1.0");
   area["veli"] = UBASE("Tamil", "veli", 2.671192358019800E+04, "m2", "L2", "1.0");
   area["thakku"] = UBASE("Tamil", "thakku", 7.023469824000000E-01, "m2", "L2", "1.0");
   area["parappu"] = UBASE("Tamil", "parappu", 2.529285264000000E+02, "m2", "L2", "1.0");
   area["lacham"] = UBASE("Tamil", "lacham", 2.529285264000000E+02, "m2", "L2", "1.0");
   area["kulies"] = UBASE("Tamil", "kulies", 1.405158480000000E+01, "m2", "L2", "1.0");
   mass["palam"] = UBASE("Tamil", "palam", 4.800000000000000E-02, "kg", "M", "1.0");
   mass["kaqhsu"] = UBASE("Tamil", "kaqhsu", 1.200000000000000E-02, "kg", "M", "1.0");
   mass["kalancu"] = UBASE("Tamil", "kalancu", 3.000000000000000E-03, "kg", "M", "1.0");
   mass["panaveadai"] = UBASE("Tamil", "panaveadai", 6.000000000000000E-04, "kg", "M", "1.0");
   mass["vardgadedai"] = UBASE("Tamil", "vardgadedai", 4.800000000000000E-03, "kg", "M", "1.0");
   mass["mancddi"] = UBASE("Tamil", "mancddi", 6.000000000000000E-04, "kg", "M", "1.0");
   mass["kunrimani"] = UBASE("Tamil", "kunrimani", 3.000000000000000E-04, "kg", "M", "1.0");
   mass["nel-edai"] = UBASE("Tamil", "nel-edai", 7.500000000000000E-05, "kg", "M", "1.0");
   mass["veesai"] = UBASE("Tamil", "veesai", 1.920000000000000E+00, "kg", "M", "1.0");
   mass["ka"] = UBASE("Tamil", "ka", 4.800000000000000E+01, "kg", "M", "1.0");
   mass["tulam"] = UBASE("Tamil", "tulam", 1.152000000000000E+01, "kg", "M", "1.0");
   mass["manangu"] = UBASE("Tamil", "manangu", 1.536000000000000E+01, "kg", "M", "1.0");
   mass["param"] = UBASE("Tamil", "param", 3.072000000000000E+02, "kg", "M", "1.0");
   liquid["padi"] = UBASE("Tamil", "padi", 1.344000000000000E-03, "m3", "L3", "1.0");
   liquid["ulakku"] = UBASE("Tamil", "ulakku", 6.720000000000000E-04, "m3", "L3", "1.0");
   liquid["marakkal"] = UBASE("Tamil", "marakkal", 5.376000000000000E-03, "m3", "L3", "1.0");
   liquid["padakku"] = UBASE("Tamil", "padakku", 1.075200000000000E-02, "m3", "L3", "1.0");
   liquid["toni"] = UBASE("Tamil", "toni", 2.150400000000000E-02, "m3", "L3", "1.0");
   liquid["kottai"] = UBASE("Tamil", "kottai", 1.128960000000000E-01, "m3", "L3", "1.0");
   liquid["uri"] = UBASE("Tamil", "uri", 1.344000000000000E-03, "m3", "L3", "1.0");
   liquid["alakku"] = UBASE("Tamil", "alakku", 3.360000000000000E-04, "m3", "L3", "1.0");
   liquid["mahani"] = UBASE("Tamil", "mahani", 1.680000000000000E-04, "m3", "L3", "1.0");
   liquid["sevidu"] = UBASE("Tamil", "sevidu", 6.720000000000000E-05, "m3", "L3", "1.0");
   dry["lacham(paddy)"] = UBASE("Tamil", "lacham(paddy)", 1.686190176000000E+02, "m3", "L3", "1.0");
   dry["padi"] = UBASE("Tamil", "padi", 1.344000000000000E-03, "m3", "L3", "1.0");
   dry["uri"] = UBASE("Tamil", "uri", 6.720000000000000E-04, "m3", "L3", "1.0");
   dry["ulakku"] = UBASE("Tamil", "ulakku", 3.360000000000000E-04, "m3", "L3", "1.0");
   dry["alakku"] = UBASE("Tamil", "alakku", 1.680000000000000E-04, "m3", "L3", "1.0");
   dry["sevidu"] = UBASE("Tamil", "sevidu", 3.360000000000000E-05, "m3", "L3", "1.0");
   dry["nel"] = UBASE("Tamil", "nel", 9.333333333333330E-08, "m3", "L3", "1.0");
   dry["marakkal"] = UBASE("Tamil", "marakkal", 1.075200000000000E-02, "m3", "L3", "1.0");
   dry["kuruni"] = UBASE("Tamil", "kuruni", 1.075200000000000E-02, "m3", "L3", "1.0");
   dry["padakku"] = UBASE("Tamil", "padakku", 2.150400000000000E-02, "m3", "L3", "1.0");
   dry["toni"] = UBASE("Tamil", "toni", 4.300800000000000E-02, "m3", "L3", "1.0");
   dry["kalam"] = UBASE("Tamil", "kalam", 1.290240000000000E-01, "m3", "L3", "1.0");
   dry["parai"] = UBASE("Tamil", "parai", 5.376000000000000E-02, "m3", "L3", "1.0");
   dry["karisai"] = UBASE("Tamil", "karisai", 4.300800000000000E+00, "m3", "L3", "1.0");
   dry["pothi"] = UBASE("Tamil", "pothi", 1.290240000000000E-01, "m3", "L3", "1.0");
   dry["modai"] = UBASE("Tamil", "modai", 1.290240000000000E-01, "m3", "L3", "1.0");
   dry["kottai"] = UBASE("Tamil", "kottai", 2.257920000000000E-01, "m3", "L3", "1.0");
   _map["Tamil"] = BaseSystem("Tamil", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit100(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["ohra"] = UBASE("Tanzanian", "ohra", 5.709920000000000E-01, "m", "L", "1.0");
   area["square-ohra"] = UBASE("Tanzanian", "square-ohra", 3.260318640640000E-01, "m2", "L2", "1.0");
   mass["mane"] = UBASE("Tanzanian", "mane", 9.104052458270000E-01, "kg", "M", "1.0");
   mass["bazla"] = UBASE("Tanzanian", "bazla", 1.552465245562000E+01, "kg", "M", "1.0");
   mass["franzella"] = UBASE("Tanzanian", "franzella", 1.600373671681400E+01, "kg", "M", "1.0");
   liquid["cubic-ohra"] = UBASE("Tanzanian", "cubic-ohra", 1.861615861256320E-01, "m3", "L3", "1.0");
   dry["djzela"] = UBASE("Tanzanian", "djzela", 2.574214075690580E-01, "m3", "L3", "1.0");
   _map["Tanzanian"] = BaseSystem("Tanzanian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit101(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["duym"] = UBASE("Tatar", "duym", 2.540000000000000E-02, "m", "L", "1.0");
   length["qans"] = UBASE("Tatar", "qans", 4.445000000000000E-02, "m", "L", "1.0");
   length["fut"] = UBASE("Tatar", "fut", 3.048000000000000E-01, "m", "L", "1.0");
   length["cirek"] = UBASE("Tatar", "cirek", 1.778000000000000E-01, "m", "L", "1.0");
   length["soyam"] = UBASE("Tatar", "soyam", 1.778000000000000E-01, "m", "L", "1.0");
   length["arsin"] = UBASE("Tatar", "arsin", 7.112000000000000E-01, "m", "L", "1.0");
   length["sajin"] = UBASE("Tatar", "sajin", 2.133600000000000E+00, "m", "L", "1.0");
   length["caqrim"] = UBASE("Tatar", "caqrim", 1.066800000000000E+03, "m", "L", "1.0");
   length["farsax"] = UBASE("Tatar", "farsax", 6.934200000000000E+03, "m", "L", "1.0");
   length["parasang"] = UBASE("Tatar", "parasang", 6.934200000000000E+03, "m", "L", "1.0");
   length["mil"] = UBASE("Tatar", "mil", 7.467600000000000E+03, "m", "L", "1.0");
   length["atni-tuqtawsiz-yuriyu"] = UBASE("Tatar", "atni-tuqtawsiz-yuriyu", 1.920240000000000E+04, "m", "L", "1.0");
   length["cayawlenen-konlek-yuli"] = UBASE("Tatar", "cayawlenen-konlek-yuli", 3.627120000000000E+04, "m", "L", "1.0");
   length["antnin-konlek-yuli"] = UBASE("Tatar", "antnin-konlek-yuli", 4.480560000000000E+04, "m", "L", "1.0");
   length["cayawlenen-ayliq-yuli"] = UBASE("Tatar", "cayawlenen-ayliq-yuli", 1.120140000000000E+06, "m", "L", "1.0");
   area["quadrat-sajin"] = UBASE("Tatar", "quadrat-sajin", 4.552248960000000E+00, "m2", "L2", "1.0");
   area["carib"] = UBASE("Tatar", "carib", 1.820899584000000E+03, "m2", "L2", "1.0");
   area["distina"] = UBASE("Tatar", "distina", 1.092539750400000E+04, "m2", "L2", "1.0");
   area["cirek"] = UBASE("Tatar", "cirek", 5.462698752000000E+03, "m2", "L2", "1.0");
   area["quadrat-carqrim"] = UBASE("Tatar", "quadrat-carqrim", 1.138062240000000E+06, "m2", "L2", "1.0");
   mass["oles"] = UBASE("Tatar", "oles", 4.443359375000000E-05, "kg", "M", "1.0");
   mass["misqal"] = UBASE("Tatar", "misqal", 4.265625000000000E-03, "kg", "M", "1.0");
   mass["lot"] = UBASE("Tatar", "lot", 1.279687500000000E-02, "kg", "M", "1.0");
   mass["qadaq"] = UBASE("Tatar", "qadaq", 4.095000000000000E-01, "kg", "M", "1.0");
   mass["pot"] = UBASE("Tatar", "pot", 1.638000000000000E+01, "kg", "M", "1.0");
   mass["qantar"] = UBASE("Tatar", "qantar", 4.095000000000000E+01, "kg", "M", "1.0");
   mass["bevrkovets"] = UBASE("Tatar", "bevrkovets", 1.638000000000000E+02, "kg", "M", "1.0");
   liquid["garnets"] = UBASE("Tatar", "garnets", 3.279733333333330E-03, "m3", "L3", "1.0");
   liquid["cirektan"] = UBASE("Tatar", "cirektan", 2.623786666666670E-02, "m3", "L3", "1.0");
   liquid["cirek"] = UBASE("Tatar", "cirek", 2.099029333333330E-01, "m3", "L3", "1.0");
   liquid["cilak"] = UBASE("Tatar", "cilak", 1.229900000000000E+01, "m3", "L3", "1.0");
   liquid["podawqa"] = UBASE("Tatar", "podawqa", 1.600000000000000E-02, "m3", "L3", "1.0");
   liquid["pociq"] = UBASE("Tatar", "pociq", 3.200000000000000E+01, "m3", "L3", "1.0");
   liquid["batman"] = UBASE("Tatar", "batman", 6.400000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-qadaq"] = UBASE("Tatar", "cubic-qadaq", 6.866915737500000E-02, "m3", "L3", "1.0");
   _map["Tatar"] = BaseSystem("Tatar", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit102(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["anukabiet"] = UBASE("Thai", "anukabiet", 2.604166666666670E-03, "m", "L", "1.0");
   length["kabiet"] = UBASE("Thai", "kabiet", 5.208333333333330E-03, "m", "L", "1.0");
   length["ken"] = UBASE("Thai", "ken", 1.000000000000000E+00, "m", "L", "1.0");
   length["keup"] = UBASE("Thai", "keup", 2.500000000000000E-01, "m", "L", "1.0");
   length["khuep"] = UBASE("Thai", "khuep", 2.500000000000000E-01, "m", "L", "1.0");
   length["krabiat"] = UBASE("Thai", "krabiat", 5.208333333333330E-03, "m", "L", "1.0");
   length["nio"] = UBASE("Thai", "nio", 2.083333333333330E-02, "m", "L", "1.0");
   length["niou"] = UBASE("Thai", "niou", 2.083333333333330E-02, "m", "L", "1.0");
   length["roeneng"] = UBASE("Thai", "roeneng", 4.000000000000000E+03, "m", "L", "1.0");
   length["sawk"] = UBASE("Thai", "sawk", 5.000000000000000E-01, "m", "L", "1.0");
   length["sen"] = UBASE("Thai", "sen", 4.000000000000000E+01, "m", "L", "1.0");
   length["sok"] = UBASE("Thai", "sok", 5.000000000000000E-01, "m", "L", "1.0");
   length["wa"] = UBASE("Thai", "wa", 2.000000000000000E+00, "m", "L", "1.0");
   length["wah"] = UBASE("Thai", "wah", 2.000000000000000E+00, "m", "L", "1.0");
   length["yot"] = UBASE("Thai", "yot", 1.600000000000000E+04, "m", "L", "1.0");
   length["yote"] = UBASE("Thai", "yote", 1.600000000000000E+04, "m", "L", "1.0");
   area["ngan"] = UBASE("Thai", "ngan", 4.000000000000000E+02, "m2", "L2", "1.0");
   area["rai"] = UBASE("Thai", "rai", 1.600000000000000E+03, "m2", "L2", "1.0");
   area["square-wah(Thai)"] = UBASE("Thai", "square-wah(Thai)", 4.000000000000000E+00, "m2", "L2", "1.0");
   area["tarang-wa"] = UBASE("Thai", "tarang-wa", 4.000000000000000E+00, "m2", "L2", "1.0");
   mass["baht"] = UBASE("Thai", "baht", 1.500000000000000E-02, "kg", "M", "1.0");
   mass["bara"] = UBASE("Thai", "bara", 4.800000000000000E+02, "kg", "M", "1.0");
   mass["chang"] = UBASE("Thai", "chang", 1.200000000000000E+00, "kg", "M", "1.0");
   mass["doon"] = UBASE("Thai", "doon", 2.400000000000000E+01, "kg", "M", "1.0");
   mass["fuang"] = UBASE("Thai", "fuang", 1.875000000000000E-03, "kg", "M", "1.0");
   mass["grani"] = UBASE("Thai", "grani", 9.375000000000000E-04, "kg", "M", "1.0");
   mass["hap"] = UBASE("Thai", "hap", 6.000000000000000E+01, "kg", "M", "1.0");
   mass["klam"] = UBASE("Thai", "klam", 2.343750000000000E-04, "kg", "M", "1.0");
   mass["klom"] = UBASE("Thai", "klom", 1.171875000000000E-04, "kg", "M", "1.0");
   mass["pai"] = UBASE("Thai", "pai", 4.687500000000000E-04, "kg", "M", "1.0");
   mass["salueng"] = UBASE("Thai", "salueng", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["salung"] = UBASE("Thai", "salung", 3.750000000000000E-03, "kg", "M", "1.0");
   mass["sompay"] = UBASE("Thai", "sompay", 9.375000000000000E-04, "kg", "M", "1.0");
   mass["tamlueng"] = UBASE("Thai", "tamlueng", 6.000000000000000E-02, "kg", "M", "1.0");
   mass["tamlung"] = UBASE("Thai", "tamlung", 6.000000000000000E-02, "kg", "M", "1.0");
   mass["tchang"] = UBASE("Thai", "tchang", 1.200000000000000E+00, "kg", "M", "1.0");
   liquid["ban"] = UBASE("Thai", "ban", 1.600000000000000E+00, "m3", "L3", "1.0");
   liquid["chai-meu"] = UBASE("Thai", "chai-meu", 3.125000000000000E-05, "m3", "L3", "1.0");
   liquid["changawn"] = UBASE("Thai", "changawn", 5.000000000000000E-04, "m3", "L3", "1.0");
   liquid["cohi"] = UBASE("Thai", "cohi", 3.200000000000000E+01, "m3", "L3", "1.0");
   liquid["fai-mue"] = UBASE("Thai", "fai-mue", 1.250000000000000E-04, "m3", "L3", "1.0");
   liquid["kam-meu"] = UBASE("Thai", "kam-meu", 1.250000000000000E-04, "m3", "L3", "1.0");
   liquid["kam-mue"] = UBASE("Thai", "kam-mue", 1.250000000000000E-04, "m3", "L3", "1.0");
   liquid["kanahm"] = UBASE("Thai", "kanahm", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["koyan"] = UBASE("Thai", "koyan", 3.200000000000000E+00, "m3", "L3", "1.0");
   liquid["kwian"] = UBASE("Thai", "kwian", 3.200000000000000E+00, "m3", "L3", "1.0");
   liquid["kwien"] = UBASE("Thai", "kwien", 3.200000000000000E+00, "m3", "L3", "1.0");
   liquid["laang"] = UBASE("Thai", "laang", 5.000000000000000E-04, "m3", "L3", "1.0");
   liquid["niou"] = UBASE("Thai", "niou", 1.000000000000000E-05, "m3", "L3", "1.0");
   liquid["sat"] = UBASE("Thai", "sat", 2.000000000000000E-02, "m3", "L3", "1.0");
   liquid["seste"] = UBASE("Thai", "seste", 8.000000000000000E-01, "m3", "L3", "1.0");
   liquid["tamlaum"] = UBASE("Thai", "tamlaum", 4.000000000000000E-01, "m3", "L3", "1.0");
   liquid["tanan"] = UBASE("Thai", "tanan", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["tang"] = UBASE("Thai", "tang", 4.000000000000000E-02, "m3", "L3", "1.0");
   liquid["thanan"] = UBASE("Thai", "thanan", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["thang"] = UBASE("Thai", "thang", 2.000000000000000E-02, "m3", "L3", "1.0");
   liquid["yip-mue"] = UBASE("Thai", "yip-mue", 7.812500000000000E-06, "m3", "L3", "1.0");
   dry["cubic-wah"] = UBASE("Thai", "cubic-wah", 8.000000000000000E+00, "m3", "L3", "1.0");
   _map["Thai"] = BaseSystem("Thai", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit103(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["pic(Arabic)"] = UBASE("Tunisian", "pic(Arabic)", 4.880000000000000E-01, "m", "L", "1.0");
   length["pic(Endezian)"] = UBASE("Tunisian", "pic(Endezian)", 6.730000000000000E-01, "m", "L", "1.0");
   length["pic"] = UBASE("Tunisian", "pic", 5.625000000000000E-01, "m", "L", "1.0");
   area["square-pic"] = UBASE("Tunisian", "square-pic", 3.164062500000000E-01, "m2", "L2", "1.0");
   mass["cantaro"] = UBASE("Tunisian", "cantaro", 3.149500000000000E+00, "kg", "M", "1.0");
   mass["cantaro(attari)"] = UBASE("Tunisian", "cantaro(attari)", 5.039200000000000E+01, "kg", "M", "1.0");
   mass["cantaro(khaddari)"] = UBASE("Tunisian", "cantaro(khaddari)", 6.299000000000000E+01, "kg", "M", "1.0");
   mass["cantaro(sucki)"] = UBASE("Tunisian", "cantaro(sucki)", 5.669100000000000E+01, "kg", "M", "1.0");
   mass["rottolo(attari)"] = UBASE("Tunisian", "rottolo(attari)", 5.039200000000000E-01, "kg", "M", "1.0");
   mass["rottolo(khaddari)"] = UBASE("Tunisian", "rottolo(khaddari)", 6.299000000000000E-01, "kg", "M", "1.0");
   mass["rottolo(sucki)"] = UBASE("Tunisian", "rottolo(sucki)", 5.669100000000000E-01, "kg", "M", "1.0");
   mass["uckir"] = UBASE("Tunisian", "uckir", 3.149500000000000E-02, "kg", "M", "1.0");
   liquid["cafisso"] = UBASE("Tunisian", "cafisso", 4.960000000000000E-01, "m3", "L3", "1.0");
   liquid["metter"] = UBASE("Tunisian", "metter", 1.000000000000000E-02, "m3", "L3", "1.0");
   liquid["millerole"] = UBASE("Tunisian", "millerole", 6.400000000000000E-02, "m3", "L3", "1.0");
   liquid["mitre"] = UBASE("Tunisian", "mitre", 1.000000000000000E-02, "m3", "L3", "1.0");
   liquid["saah"] = UBASE("Tunisian", "saah", 3.844961240310080E-03, "m3", "L3", "1.0");
   liquid["whiba"] = UBASE("Tunisian", "whiba", 3.100000000000000E-02, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Tunisian", "cubic-pic", 1.779785156250000E-01, "m3", "L3", "1.0");
   _map["Tunisian"] = BaseSystem("Tunisian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit104(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["arsin"] = UBASE("Turkish", "arsin", 7.553972464870000E-01, "m", "L", "1.0");
   length["ayak"] = UBASE("Turkish", "ayak", 3.776986232435000E-01, "m", "L", "1.0");
   length["berid"] = UBASE("Turkish", "berid", 2.266191739461000E+02, "m", "L", "1.0");
   length["buyuk-donum"] = UBASE("Turkish", "buyuk-donum", 2.720169375000670E+03, "m", "L", "1.0");
   length["endazem"] = UBASE("Turkish", "endazem", 6.294977054058330E-01, "m", "L", "1.0");
   length["eski-mil"] = UBASE("Turkish", "eski-mil", 1.888493116217500E+03, "m", "L", "1.0");
   length["fersah"] = UBASE("Turkish", "fersah", 5.665479348652500E+03, "m", "L", "1.0");
   length["hat"] = UBASE("Turkish", "hat", 2.622907105857640E-03, "m", "L", "1.0");
   length["hatt"] = UBASE("Turkish", "hatt", 2.622907105857640E-03, "m", "L", "1.0");
   length["kadem"] = UBASE("Turkish", "kadem", 3.776986232435000E-01, "m", "L", "1.0");
   length["kerrab"] = UBASE("Turkish", "kerrab", 4.721232790543750E-02, "m", "L", "1.0");
   length["kirab"] = UBASE("Turkish", "kirab", 4.721232790543750E-02, "m", "L", "1.0");
   length["kulac"] = UBASE("Turkish", "kulac", 1.828800000000000E+00, "m", "L", "1.0");
   length["menzil"] = UBASE("Turkish", "menzil", 2.266191739461000E+02, "m", "L", "1.0");
   length["merhale"] = UBASE("Turkish", "merhale", 4.532383478922000E+04, "m", "L", "1.0");
   length["nockat"] = UBASE("Turkish", "nockat", 2.185755921548030E-04, "m", "L", "1.0");
   length["nokta"] = UBASE("Turkish", "nokta", 2.185755921548030E-04, "m", "L", "1.0");
   length["nul"] = UBASE("Turkish", "nul", 1.007196328649330E+03, "m", "L", "1.0");
   length["parmack"] = UBASE("Turkish", "parmack", 3.147488527029170E-02, "m", "L", "1.0");
   length["pic"] = UBASE("Turkish", "pic", 7.553972464870000E-01, "m", "L", "1.0");
   length["rubu"] = UBASE("Turkish", "rubu", 9.442465581087500E-02, "m", "L", "1.0");
   length["urumb"] = UBASE("Turkish", "urumb", 9.442465581087500E-02, "m", "L", "1.0");
   length["urup"] = UBASE("Turkish", "urup", 9.442465581087500E-02, "m", "L", "1.0");
   length["zirai"] = UBASE("Turkish", "zirai", 7.553972464870000E-01, "m", "L", "1.0");
   area["djeril"] = UBASE("Turkish", "djeril", 1.000000000000000E+04, "m2", "L2", "1.0");
   area["donum"] = UBASE("Turkish", "donum", 9.130000000002260E+02, "m2", "L2", "1.0");
   area["donum(metric)"] = UBASE("Turkish", "donum(metric)", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["dunum"] = UBASE("Turkish", "dunum", 9.130000000002260E+02, "m2", "L2", "1.0");
   area["dunum(metric)"] = UBASE("Turkish", "dunum(metric)", 1.000000000000000E+03, "m2", "L2", "1.0");
   area["eski-donum"] = UBASE("Turkish", "eski-donum", 9.130000000002260E+02, "m2", "L2", "1.0");
   area["square-pic"] = UBASE("Turkish", "square-pic", 5.706250000001410E-01, "m2", "L2", "1.0");
   mass["batman"] = UBASE("Turkish", "batman", 7.698000000000000E+00, "kg", "M", "1.0");
   mass["ceki"] = UBASE("Turkish", "ceki", 2.258080000000000E+02, "kg", "M", "1.0");
   mass["cequi"] = UBASE("Turkish", "cequi", 3.207500000000000E-01, "kg", "M", "1.0");
   mass["denke"] = UBASE("Turkish", "denke", 8.018750000000000E-04, "kg", "M", "1.0");
   mass["dirham"] = UBASE("Turkish", "dirham", 3.207500000000000E-03, "kg", "M", "1.0");
   mass["dirhem"] = UBASE("Turkish", "dirhem", 3.207500000000000E-03, "kg", "M", "1.0");
   mass["drachm"] = UBASE("Turkish", "drachm", 3.207500000000000E-03, "kg", "M", "1.0");
   mass["kantar"] = UBASE("Turkish", "kantar", 5.645200000000000E+01, "kg", "M", "1.0");
   mass["karat"] = UBASE("Turkish", "karat", 2.004687500000000E-04, "kg", "M", "1.0");
   mass["kirat"] = UBASE("Turkish", "kirat", 2.004687500000000E-04, "kg", "M", "1.0");
   mass["miskal"] = UBASE("Turkish", "miskal", 4.811250000000000E-03, "kg", "M", "1.0");
   mass["oka"] = UBASE("Turkish", "oka", 1.283000000000000E+00, "kg", "M", "1.0");
   mass["okka"] = UBASE("Turkish", "okka", 1.283000000000000E+00, "kg", "M", "1.0");
   mass["rottel"] = UBASE("Turkish", "rottel", 5.645200000000000E-01, "kg", "M", "1.0");
   mass["tcheki"] = UBASE("Turkish", "tcheki", 2.258080000000000E+02, "kg", "M", "1.0");
   mass["yusdrum"] = UBASE("Turkish", "yusdrum", 3.207500000000000E-01, "kg", "M", "1.0");
   liquid["chinik"] = UBASE("Turkish", "chinik", 2.500000000000000E-02, "m3", "L3", "1.0");
   liquid["cubic-zira"] = UBASE("Turkish", "cubic-zira", 1.000000000000000E+00, "m3", "L3", "1.0");
   liquid["fortin"] = UBASE("Turkish", "fortin", 4.000000000000000E-01, "m3", "L3", "1.0");
   liquid["kile"] = UBASE("Turkish", "kile", 1.000000000000000E-01, "m3", "L3", "1.0");
   liquid["sinik"] = UBASE("Turkish", "sinik", 9.250000000000000E-04, "m3", "L3", "1.0");
   dry["cubic-pic"] = UBASE("Turkish", "cubic-pic", 4.310485537767510E-01, "m3", "L3", "1.0");
   _map["Turkish"] = BaseSystem("Turkish", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit105(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["altschin"] = UBASE("Turkmenian", "altschin", 7.112000000000000E-01, "m", "L", "1.0");
   length["hasch"] = UBASE("Turkmenian", "hasch", 7.112000000000000E-01, "m", "L", "1.0");
   area["square-hasch"] = UBASE("Turkmenian", "square-hasch", 5.058054400000000E-01, "m2", "L2", "1.0");
   mass["batman"] = UBASE("Turkmenian", "batman", 1.280000000000000E+02, "kg", "M", "1.0");
   mass["mimtscha"] = UBASE("Turkmenian", "mimtscha", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["sir"] = UBASE("Turkmenian", "sir", 1.600000000000000E+01, "kg", "M", "1.0");
   mass["tscharik"] = UBASE("Turkmenian", "tscharik", 2.000000000000000E+00, "kg", "M", "1.0");
   liquid["cubic-hasch"] = UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3", "L3", "1.0");
   dry["cubic-hasch"] = UBASE("Turkmenian", "cubic-hasch", 3.597288289280000E-01, "m3", "L3", "1.0");
   _map["Turkmenian"] = BaseSystem("Turkmenian", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit106(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["barleycorn"] = UBASE("UK", "barleycorn", 8.466666666666670E-03, "m", "L", "1.0");
   length["bundle"] = UBASE("UK", "bundle", 1.536192000000000E+04, "m", "L", "1.0");
   length["bdl"] = UBASE("UK", "bdl", 1.536192000000000E+04, "m", "L", "1.0");
   length["bundle(wool)"] = UBASE("UK", "bundle(wool)", 1.024128000000000E+04, "m", "L", "1.0");
   length["bdl(wool)"] = UBASE("UK", "bdl(wool)", 1.024128000000000E+04, "m", "L", "1.0");
   length["button"] = UBASE("UK", "button", 2.116666666666670E-03, "m", "L", "1.0");
   length["cable-length(nautical)"] = UBASE("UK", "cable-length(nautical)", 1.853184000000000E+02, "m", "L", "1.0");
   length["chain(Gunter)"] = UBASE("UK", "chain(Gunter)", 2.011680000000000E+01, "m", "L", "1.0");
   length["ch(Gunter)"] = UBASE("UK", "ch(Gunter)", 2.011680000000000E+01, "m", "L", "1.0");
   length["chain(nautical)"] = UBASE("UK", "chain(nautical)", 4.572000000000000E+00, "m", "L", "1.0");
   length["ch(nautical)"] = UBASE("UK", "ch(nautical)", 4.572000000000000E+00, "m", "L", "1.0");
   length["chain(surveyor)"] = UBASE("UK", "chain(surveyor)", 2.011680000000000E+01, "m", "L", "1.0");
   length["ch(surveyor)"] = UBASE("UK", "ch(surveyor)", 2.011680000000000E+01, "m", "L", "1.0");
   length["cubit"] = UBASE("UK", "cubit", 4.572000000000000E-01, "m", "L", "1.0");
   length["cu"] = UBASE("UK", "cu", 4.572000000000000E-01, "m", "L", "1.0");
   length["cut(cotton)"] = UBASE("UK", "cut(cotton)", 6.583680000000000E+01, "m", "L", "1.0");
   length["cut(linen)"] = UBASE("UK", "cut(linen)", 2.743200000000000E+02, "m", "L", "1.0");
   length["cut(wool)"] = UBASE("UK", "cut(wool)", 4.267200000000000E+01, "m", "L", "1.0");
   length["digit"] = UBASE("UK", "digit", 1.905000000000000E-02, "m", "L", "1.0");
   length["ell"] = UBASE("UK", "ell", 9.398000000000000E-01, "m", "L", "1.0");
   length["emerald"] = UBASE("UK", "emerald", 2.293055555555560E-03, "m", "L", "1.0");
   length["fall"] = UBASE("UK", "fall", 6.858000000000000E+00, "m", "L", "1.0");
   length["foot"] = UBASE("UK", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["ft"] = UBASE("UK", "ft", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("UK", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["foot(old)"] = UBASE("UK", "foot(old)", 3.047997347632710E-01, "m", "L", "1.0");
   length["ft(old)"] = UBASE("UK", "ft(old)", 3.047997347632710E-01, "m", "L", "1.0");
   length["furlong"] = UBASE("UK", "furlong", 2.011680000000000E+02, "m", "L", "1.0");
   length["fur"] = UBASE("UK", "fur", 2.011680000000000E+02, "m", "L", "1.0");
   length["furlongs"] = UBASE("UK", "furlongs", 2.011680000000000E+02, "m", "L", "1.0");
   length["goad"] = UBASE("UK", "goad", 1.371600000000000E+00, "m", "L", "1.0");
   length["hank(cotton)"] = UBASE("UK", "hank(cotton)", 7.680960000000000E+02, "m", "L", "1.0");
   length["hank(wool)"] = UBASE("UK", "hank(wool)", 5.120640000000000E+02, "m", "L", "1.0");
   length["heer(linen)"] = UBASE("UK", "heer(linen)", 5.486400000000000E+02, "m", "L", "1.0");
   length["inch(old)"] = UBASE("UK", "inch(old)", 2.539998000000000E-02, "m", "L", "1.0");
   length["in(old)"] = UBASE("UK", "in(old)", 2.539998000000000E-02, "m", "L", "1.0");
   length["iron"] = UBASE("UK", "iron", 5.291666666666670E-04, "m", "L", "1.0");
   length["lap"] = UBASE("UK", "lap", 4.023360000000000E+02, "m", "L", "1.0");
   length["lea"] = UBASE("UK", "lea", 1.097280000000000E+02, "m", "L", "1.0");
   length["lea(cotton)"] = UBASE("UK", "lea(cotton)", 1.097280000000000E+02, "m", "L", "1.0");
   length["lea(linen)"] = UBASE("UK", "lea(linen)", 2.743200000000000E+02, "m", "L", "1.0");
   length["lea(wool)"] = UBASE("UK", "lea(wool)", 7.315200000000000E+01, "m", "L", "1.0");
   length["league"] = UBASE("UK", "league", 5.559552000000000E+03, "m", "L", "1.0");
   length["leag"] = UBASE("UK", "leag", 5.559552000000000E+03, "m", "L", "1.0");
   length["line"] = UBASE("UK", "line", 2.116666666666670E-03, "m", "L", "1.0");
   length["link(Gunter)"] = UBASE("UK", "link(Gunter)", 2.011680000000000E-01, "m", "L", "1.0");
   length["link(surveyor)"] = UBASE("UK", "link(surveyor)", 2.011680000000000E-01, "m", "L", "1.0");
   length["mile"] = UBASE("UK", "mile", 1.609344000000000E+03, "m", "L", "1.0");
   length["mi"] = UBASE("UK", "mi", 1.609344000000000E+03, "m", "L", "1.0");
   length["mile(statute)"] = UBASE("UK", "mile(statute)", 1.609344000000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("UK", "miles", 1.609344000000000E+03, "m", "L", "1.0");
   length["mile(London)"] = UBASE("UK", "mile(London)", 1.524000000000000E+03, "m", "L", "1.0");
   length["mile(nautical)"] = UBASE("UK", "mile(nautical)", 1.853184000000000E+03, "m", "L", "1.0");
   length["mi(nautical)"] = UBASE("UK", "mi(nautical)", 1.853184000000000E+03, "m", "L", "1.0");
   length["mile(old-nautical)"] = UBASE("UK", "mile(old-nautical)", 1.854981710400000E+03, "m", "L", "1.0");
   length["mon"] = UBASE("UK", "mon", 2.540000000000000E-05, "m", "L", "1.0");
   length["nail"] = UBASE("UK", "nail", 5.715000000000000E-02, "m", "L", "1.0");
   length["nautical-mile"] = UBASE("UK", "nautical-mile", 1.853184000000000E+03, "m", "L", "1.0");
   length["nmi"] = UBASE("UK", "nmi", 1.853184000000000E+03, "m", "L", "1.0");
   length["nautical-miles"] = UBASE("UK", "nautical-miles", 1.853184000000000E+03, "m", "L", "1.0");
   length["ounce(shoes)"] = UBASE("UK", "ounce(shoes)", 3.968750000000000E-04, "m", "L", "1.0");
   length["pace"] = UBASE("UK", "pace", 7.620000000000000E-01, "m", "L", "1.0");
   length["palm"] = UBASE("UK", "palm", 7.620000000000000E-02, "m", "L", "1.0");
   length["plm"] = UBASE("UK", "plm", 7.620000000000000E-02, "m", "L", "1.0");
   length["point(Australian)"] = UBASE("UK", "point(Australian)", 2.540000000000000E-04, "m", "L", "1.0");
   length["point"] = UBASE("UK", "point", 1.763888888888890E-04, "m", "L", "1.0");
   length["pt"] = UBASE("UK", "pt", 1.763888888888890E-04, "m", "L", "1.0");
   length["point(meteorological)"] = UBASE("UK", "point(meteorological)", 2.540000000000000E-02, "m", "L", "1.0");
   length["quarter-yard"] = UBASE("UK", "quarter-yard", 2.286000000000000E-01, "m", "L", "1.0");
   length["rope"] = UBASE("UK", "rope", 6.096000000000000E+00, "m", "L", "1.0");
   length["ruby(modern)"] = UBASE("UK", "ruby(modern)", 1.940277777777780E-03, "m", "L", "1.0");
   length["shackles"] = UBASE("UK", "shackles", 2.743200000000000E+01, "m", "L", "1.0");
   length["shaftment(old)"] = UBASE("UK", "shaftment(old)", 1.524000000000000E-01, "m", "L", "1.0");
   length["shaftment"] = UBASE("UK", "shaftment", 1.500000000000000E-01, "m", "L", "1.0");
   length["skein"] = UBASE("UK", "skein", 1.097280000000000E+02, "m", "L", "1.0");
   length["spindle(cotton)"] = UBASE("UK", "spindle(cotton)", 1.382572800000000E+04, "m", "L", "1.0");
   length["spindle(jute)"] = UBASE("UK", "spindle(jute)", 1.316736000000000E+04, "m", "L", "1.0");
   length["step"] = UBASE("UK", "step", 7.620000000000000E-01, "m", "L", "1.0");
   length["travel-hour(boat)"] = UBASE("UK", "travel-hour(boat)", 6.500000000000000E+03, "m", "L", "1.0");
   length["travel-hour(horse)"] = UBASE("UK", "travel-hour(horse)", 5.000000000000000E+03, "m", "L", "1.0");
   length["travel-hour(man)"] = UBASE("UK", "travel-hour(man)", 4.828000000000000E+03, "m", "L", "1.0");
   length["wrap"] = UBASE("UK", "wrap", 7.315200000000000E+01, "m", "L", "1.0");
   length["yard(old)"] = UBASE("UK", "yard(old)", 9.143992042898120E-01, "m", "L", "1.0");
   length["yd(old)"] = UBASE("UK", "yd(old)", 9.143992042898120E-01, "m", "L", "1.0");
   length["yard"] = UBASE("UK", "yard", 9.144000000000000E-01, "m", "L", "1.0");
   length["yd"] = UBASE("UK", "yd", 9.144000000000000E-01, "m", "L", "1.0");
   length["yards"] = UBASE("UK", "yards", 9.144000000000000E-01, "m", "L", "1.0");
   area["acre"] = UBASE("UK", "acre", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["ac"] = UBASE("UK", "ac", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["acres"] = UBASE("UK", "acres", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["acre(cunningham)"] = UBASE("UK", "acre(cunningham)", 5.188277464615390E+03, "m2", "L2", "1.0");
   area["ac(cunhm)"] = UBASE("UK", "ac(cunhm)", 5.188277464615390E+03, "m2", "L2", "1.0");
   area["acre(cunhm)"] = UBASE("UK", "acre(cunhm)", 5.188277464615390E+03, "m2", "L2", "1.0");
   area["acre(plantation)"] = UBASE("UK", "acre(plantation)", 5.188277464615390E+03, "m2", "L2", "1.0");
   area["ac(plant)"] = UBASE("UK", "ac(plant)", 5.188277464615390E+03, "m2", "L2", "1.0");
   area["acre(plant)"] = UBASE("UK", "acre(plant)", 5.188277464615390E+03, "m2", "L2", "1.0");
   area["bolt(cotton)"] = UBASE("UK", "bolt(cotton)", 9.754819200000000E+01, "m2", "L2", "1.0");
   area["bolt(wool)"] = UBASE("UK", "bolt(wool)", 1.393545600000000E+02, "m2", "L2", "1.0");
   area["bovate"] = UBASE("UK", "bovate", 6.070284633600000E+04, "m2", "L2", "1.0");
   area["fall"] = UBASE("UK", "fall", 4.703216400000000E+01, "m2", "L2", "1.0");
   area["gallon-per-foot"] = UBASE("UK", "gallon-per-foot", 1.491500000000000E-02, "m2", "L2", "1.0");
   area["gal/ft"] = UBASE("UK", "gal/ft", 1.491500000000000E-02, "m2", "L2", "1.0");
   area["gallon-per-mile"] = UBASE("UK", "gallon-per-mile", 2.824810606060610E-06, "m2", "L2", "1.0");
   area["gal/mi"] = UBASE("UK", "gal/mi", 2.824810606060610E-06, "m2", "L2", "1.0");
   area["hide"] = UBASE("UK", "hide", 4.856227706880000E+03, "m2", "L2", "1.0");
   area["hundred"] = UBASE("UK", "hundred", 4.856227706880000E+05, "m2", "L2", "1.0");
   area["open-window-unit"] = UBASE("UK", "open-window-unit", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["owu"] = UBASE("UK", "owu", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["rood"] = UBASE("UK", "rood", 1.011714105600000E+03, "m2", "L2", "1.0");
   area["shed"] = UBASE("UK", "shed", 1.000000000000000E-52, "m2", "L2", "1.0");
   area["skein"] = UBASE("UK", "skein", 1.204023398400000E+04, "m2", "L2", "1.0");
   area["skein(cotton)"] = UBASE("UK", "skein(cotton)", 2.787091200000000E+00, "m2", "L2", "1.0");
   area["square-chain(Gunter)"] = UBASE("UK", "square-chain(Gunter)", 4.046856422400000E+02, "m2", "L2", "1.0");
   area["sq-ch(Gunter)"] = UBASE("UK", "sq-ch(Gunter)", 4.046856422400000E+02, "m2", "L2", "1.0");
   area["square-chain(surveyor)"] = UBASE("UK", "square-chain(surveyor)", 4.046856422400000E+02, "m2", "L2", "1.0");
   area["sq-ch(surveyor)"] = UBASE("UK", "sq-ch(surveyor)", 4.046856422400000E+02, "m2", "L2", "1.0");
   area["square-foot"] = UBASE("UK", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["ft2"] = UBASE("UK", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["sq-ft"] = UBASE("UK", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("UK", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-inch"] = UBASE("UK", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["in2"] = UBASE("UK", "in2", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["sq-in"] = UBASE("UK", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-inches"] = UBASE("UK", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-league(nautical)"] = UBASE("UK", "square-league(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0");
   area["sq-leag(nautical)"] = UBASE("UK", "sq-leag(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0");
   area["square-mile(nautical)"] = UBASE("UK", "square-mile(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0");
   area["sq-mi(nautical)"] = UBASE("UK", "sq-mi(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0");
   area["square-mile"] = UBASE("UK", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["sq-mi"] = UBASE("UK", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["mi2"] = UBASE("UK", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-miles"] = UBASE("UK", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-yard(old)"] = UBASE("UK", "square-yard(old)", 8.361259048058420E-01, "m2", "L2", "1.0");
   area["yd2(old)"] = UBASE("UK", "yd2(old)", 8.361259048058420E-01, "m2", "L2", "1.0");
   area["sq-yd(old)"] = UBASE("UK", "sq-yd(old)", 8.361259048058420E-01, "m2", "L2", "1.0");
   area["square-yard"] = UBASE("UK", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["yd2"] = UBASE("UK", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["sq-yd"] = UBASE("UK", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["square-yards"] = UBASE("UK", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["vergees(Guernsey)"] = UBASE("UK", "vergees(Guernsey)", 1.541659589485710E+03, "m2", "L2", "1.0");
   area["vergees(Jersey)"] = UBASE("UK", "vergees(Jersey)", 1.798602854400000E+03, "m2", "L2", "1.0");
   area["virgate"] = UBASE("UK", "virgate", 1.214056926720000E+05, "m2", "L2", "1.0");
   mass["bag(cement)"] = UBASE("UK", "bag(cement)", 4.263768278000000E+01, "kg", "M", "1.0");
   mass["bale"] = UBASE("UK", "bale", 3.401942775000000E+02, "kg", "M", "1.0");
   mass["bl"] = UBASE("UK", "bl", 3.401942775000000E+02, "kg", "M", "1.0");
   mass["barrel(butter)"] = UBASE("UK", "barrel(butter)", 1.016046908800000E+02, "kg", "M", "1.0");
   mass["barrel(cement)"] = UBASE("UK", "barrel(cement)", 1.705507311200000E+02, "kg", "M", "1.0");
   mass["barrel(salt)"] = UBASE("UK", "barrel(salt)", 1.270058636000000E+02, "kg", "M", "1.0");
   mass["block"] = UBASE("UK", "block", 2.267961850000000E+00, "kg", "M", "1.0");
   mass["box"] = UBASE("UK", "box", 4.082331330000000E+01, "kg", "M", "1.0");
   mass["brick"] = UBASE("UK", "brick", 3.175146590000000E+00, "kg", "M", "1.0");
   mass["carat(old)"] = UBASE("UK", "carat(old)", 2.049589523300000E-04, "kg", "M", "1.0");
   mass["ct"] = UBASE("UK", "ct", 2.049589523300000E-04, "kg", "M", "1.0");
   mass["chalder(coal)"] = UBASE("UK", "chalder(coal)", 2.692524308320000E+03, "kg", "M", "1.0");
   mass["chd"] = UBASE("UK", "chd", 2.692524308320000E+03, "kg", "M", "1.0");
   mass["clove(butter)"] = UBASE("UK", "clove(butter)", 3.628738960000000E+00, "kg", "M", "1.0");
   mass["clove(customary-stone)"] = UBASE("UK", "clove(customary-stone)", 3.628738960000000E+00, "kg", "M", "1.0");
   mass["clove(wool)"] = UBASE("UK", "clove(wool)", 3.628738960000000E+00, "kg", "M", "1.0");
   mass["coal-skip"] = UBASE("UK", "coal-skip", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["drop"] = UBASE("UK", "drop", 1.943967300000000E-03, "kg", "M", "1.0");
   mass["dutch-cask(butter)"] = UBASE("UK", "dutch-cask(butter)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["firkin(butter)"] = UBASE("UK", "firkin(butter)", 2.540117272000000E+01, "kg", "M", "1.0");
   mass["fother"] = UBASE("UK", "fother", 9.906457360800000E+02, "kg", "M", "1.0");
   mass["fothers"] = UBASE("UK", "fothers", 9.525439770000000E+02, "kg", "M", "1.0");
   mass["fotmal"] = UBASE("UK", "fotmal", 3.175146590000000E+01, "kg", "M", "1.0");
   mass["frail"] = UBASE("UK", "frail", 2.267961850000000E+01, "kg", "M", "1.0");
   mass["geepound"] = UBASE("UK", "geepound", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["grain(jeweller)"] = UBASE("UK", "grain(jeweller)", 5.000000000000000E-05, "kg", "M", "1.0");
   mass["gr(jeweller)"] = UBASE("UK", "gr(jeweller)", 5.000000000000000E-05, "kg", "M", "1.0");
   mass["grain"] = UBASE("UK", "grain", 6.479891000000000E-05, "kg", "M", "1.0");
   mass["hundredweight(long)"] = UBASE("UK", "hundredweight(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cH(long)"] = UBASE("UK", "cH(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cwt(long)"] = UBASE("UK", "cwt(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["lg(long)"] = UBASE("UK", "lg(long)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["hundredweight(gross)"] = UBASE("UK", "hundredweight(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cH(gross)"] = UBASE("UK", "cH(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cwt(gross)"] = UBASE("UK", "cwt(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["lg(gross)"] = UBASE("UK", "lg(gross)", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["keel"] = UBASE("UK", "keel", 2.143858977568000E+04, "kg", "M", "1.0");
   mass["keel(coal)"] = UBASE("UK", "keel(coal)", 2.154019446656000E+04, "kg", "M", "1.0");
   mass["load"] = UBASE("UK", "load", 1.143052772400000E+02, "kg", "M", "1.0");
   mass["load(straw)"] = UBASE("UK", "load(straw)", 5.878557115200000E+02, "kg", "M", "1.0");
   mass["load(wool)"] = UBASE("UK", "load(wool)", 1.371663326880000E+03, "kg", "M", "1.0");
   mass["mancus"] = UBASE("UK", "mancus", 6.220695360000000E-02, "kg", "M", "1.0");
   mass["mast"] = UBASE("UK", "mast", 9.331043040000000E-01, "kg", "M", "1.0");
   mass["mite"] = UBASE("UK", "mite", 3.239945500000000E-06, "kg", "M", "1.0");
   mass["ounce"] = UBASE("UK", "ounce", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["oz"] = UBASE("UK", "oz", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["ounce(mercantile)"] = UBASE("UK", "ounce(mercantile)", 2.915950950000000E-02, "kg", "M", "1.0");
   mass["oz(mercantile)"] = UBASE("UK", "oz(mercantile)", 2.915950950000000E-02, "kg", "M", "1.0");
   mass["ounce(tower)"] = UBASE("UK", "ounce(tower)", 2.915950950000000E-02, "kg", "M", "1.0");
   mass["oz(tower)"] = UBASE("UK", "oz(tower)", 2.915950950000000E-02, "kg", "M", "1.0");
   mass["pennyweight(mercantile)"] = UBASE("UK", "pennyweight(mercantile)", 1.417476156250000E-03, "kg", "M", "1.0");
   mass["dwt(mercantile)"] = UBASE("UK", "dwt(mercantile)", 1.417476156250000E-03, "kg", "M", "1.0");
   mass["pennyweight(tower)"] = UBASE("UK", "pennyweight(tower)", 1.457975475000000E-03, "kg", "M", "1.0");
   mass["dwt(tower)"] = UBASE("UK", "dwt(tower)", 1.457975475000000E-03, "kg", "M", "1.0");
   mass["pound"] = UBASE("UK", "pound", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb"] = UBASE("UK", "lb", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pounds"] = UBASE("UK", "pounds", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pound(mercantile)"] = UBASE("UK", "pound(mercantile)", 4.373926425000000E-01, "kg", "M", "1.0");
   mass["lb(mercantile)"] = UBASE("UK", "lb(mercantile)", 4.373926425000000E-01, "kg", "M", "1.0");
   mass["pound(merchant)"] = UBASE("UK", "pound(merchant)", 4.665521520000000E-01, "kg", "M", "1.0");
   mass["lb(merchant)"] = UBASE("UK", "lb(merchant)", 4.665521520000000E-01, "kg", "M", "1.0");
   mass["pound(new-hay)"] = UBASE("UK", "pound(new-hay)", 2.721554220000000E-01, "kg", "M", "1.0");
   mass["lb(new-hay)"] = UBASE("UK", "lb(new-hay)", 2.721554220000000E-01, "kg", "M", "1.0");
   mass["pound(old-hay)"] = UBASE("UK", "pound(old-hay)", 2.915950950000000E-01, "kg", "M", "1.0");
   mass["lb(old-hay)"] = UBASE("UK", "lb(old-hay)", 2.915950950000000E-01, "kg", "M", "1.0");
   mass["pound(old-merchant)"] = UBASE("UK", "pound(old-merchant)", 4.976556288000000E-01, "kg", "M", "1.0");
   mass["pound(standard)"] = UBASE("UK", "pound(standard)", 4.535923380000000E-01, "kg", "M", "1.0");
   mass["lb(IS)"] = UBASE("UK", "lb(IS)", 4.535923380000000E-01, "kg", "M", "1.0");
   mass["pound(straw)"] = UBASE("UK", "pound(straw)", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb(straw)"] = UBASE("UK", "lb(straw)", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pound(tower)"] = UBASE("UK", "pound(tower)", 3.499141140000000E-01, "kg", "M", "1.0");
   mass["lb(tower)"] = UBASE("UK", "lb(tower)", 3.499141140000000E-01, "kg", "M", "1.0");
   mass["quarter"] = UBASE("UK", "quarter", 1.270058636000000E+01, "kg", "M", "1.0");
   mass["quartern"] = UBASE("UK", "quartern", 1.814369480000000E+00, "kg", "M", "1.0");
   mass["room"] = UBASE("UK", "room", 7.112328361600000E+03, "kg", "M", "1.0");
   mass["sack(coal)"] = UBASE("UK", "sack(coal)", 1.120000000000000E+02, "kg", "M", "1.0");
   mass["sack(large-coal)"] = UBASE("UK", "sack(large-coal)", 1.016046908800000E+02, "kg", "M", "1.0");
   mass["sack(wool)"] = UBASE("UK", "sack(wool)", 1.651076226800000E+02, "kg", "M", "1.0");
   mass["sarpler(wool)"] = UBASE("UK", "sarpler(wool)", 9.071847400000000E+02, "kg", "M", "1.0");
   mass["score"] = UBASE("UK", "score", 9.071847400000000E+00, "kg", "M", "1.0");
   mass["scruple(apothecary)"] = UBASE("UK", "scruple(apothecary)", 1.295978200000000E-03, "kg", "M", "1.0");
   mass["s(ap)"] = UBASE("UK", "s(ap)", 1.295978200000000E-03, "kg", "M", "1.0");
   mass["scr(ap)"] = UBASE("UK", "scr(ap)", 1.295978200000000E-03, "kg", "M", "1.0");
   mass["ship-load"] = UBASE("UK", "ship-load", 4.308038893312000E+05, "kg", "M", "1.0");
   mass["slug"] = UBASE("UK", "slug", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["stone"] = UBASE("UK", "stone", 6.350293180000000E+00, "kg", "M", "1.0");
   mass["st"] = UBASE("UK", "st", 6.350293180000000E+00, "kg", "M", "1.0");
   mass["stone(lead)"] = UBASE("UK", "stone(lead)", 5.669904625000000E+00, "kg", "M", "1.0");
   mass["stone(wool)"] = UBASE("UK", "stone(wool)", 5.669904625000000E+00, "kg", "M", "1.0");
   mass["st(wool)"] = UBASE("UK", "st(wool)", 5.669904625000000E+00, "kg", "M", "1.0");
   mass["tod"] = UBASE("UK", "tod", 1.270058636000000E+01, "kg", "M", "1.0");
   mass["ton(assay)"] = UBASE("UK", "ton(assay)", 3.061224489795920E-05, "kg", "M", "1.0");
   mass["AT"] = UBASE("UK", "AT", 3.061224489795920E-05, "kg", "M", "1.0");
   mass["ton(long)"] = UBASE("UK", "ton(long)", 1.016046908800000E+03, "kg", "M", "1.0");
   mass["lg-ton"] = UBASE("UK", "lg-ton", 1.016046908800000E+03, "kg", "M", "1.0");
   mass["ton(shipping)"] = UBASE("UK", "ton(shipping)", 1.169698140599040E+03, "kg", "M", "1.0");
   mass["truss"] = UBASE("UK", "truss", 1.632932532000000E+01, "kg", "M", "1.0");
   mass["tub"] = UBASE("UK", "tub", 3.810175908000000E+01, "kg", "M", "1.0");
   mass["tub(butter)"] = UBASE("UK", "tub(butter)", 3.810175908000000E+01, "kg", "M", "1.0");
   mass["wey"] = UBASE("UK", "wey", 1.143052772400000E+02, "kg", "M", "1.0");
   mass["wey(lead)"] = UBASE("UK", "wey(lead)", 7.937866475000000E+01, "kg", "M", "1.0");
   mass["whey(Essex)"] = UBASE("UK", "whey(Essex)", 1.070477993200000E+02, "kg", "M", "1.0");
   mass["whey(Suffolk)"] = UBASE("UK", "whey(Suffolk)", 1.614788837200000E+02, "kg", "M", "1.0");
   liquid["acre-foot"] = UBASE("UK", "acre-foot", 1.233481837547520E+03, "m3", "L3", "1.0");
   liquid["ac-ft"] = UBASE("UK", "ac-ft", 1.233481837547520E+03, "m3", "L3", "1.0");
   liquid["acre-ft"] = UBASE("UK", "acre-ft", 1.233481837547520E+03, "m3", "L3", "1.0");
   liquid["acre-inch"] = UBASE("UK", "acre-inch", 1.027901531289600E+02, "m3", "L3", "1.0");
   liquid["ac-in"] = UBASE("UK", "ac-in", 1.027901531289600E+02, "m3", "L3", "1.0");
   liquid["acre-in"] = UBASE("UK", "acre-in", 1.027901531289600E+02, "m3", "L3", "1.0");
   liquid["anker"] = UBASE("UK", "anker", 4.546092000000000E-02, "m3", "L3", "1.0");
   liquid["balthazar"] = UBASE("UK", "balthazar", 1.212291200000000E-02, "m3", "L3", "1.0");
   liquid["barrel"] = UBASE("UK", "barrel", 1.663614737280000E-01, "m3", "L3", "1.0");
   liquid["bbl"] = UBASE("UK", "bbl", 1.663614737280000E-01, "m3", "L3", "1.0");
   liquid["barrel(beer)"] = UBASE("UK", "barrel(beer)", 1.636593120000000E-01, "m3", "L3", "1.0");
   liquid["bbl(beer)"] = UBASE("UK", "bbl(beer)", 1.636593120000000E-01, "m3", "L3", "1.0");
   liquid["barrel(wine)"] = UBASE("UK", "barrel(wine)", 1.432018980000000E-01, "m3", "L3", "1.0");
   liquid["bbl(wine)"] = UBASE("UK", "bbl(wine)", 1.432018980000000E-01, "m3", "L3", "1.0");
   liquid["beer-butt"] = UBASE("UK", "beer-butt", 4.990844211840000E-01, "m3", "L3", "1.0");
   liquid["bt(beer)"] = UBASE("UK", "bt(beer)", 4.990844211840000E-01, "m3", "L3", "1.0");
   liquid["breakfast-cup"] = UBASE("UK", "breakfast-cup", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["bucket"] = UBASE("UK", "bucket", 1.818436800000000E-02, "m3", "L3", "1.0");
   liquid["bk"] = UBASE("UK", "bk", 1.818436800000000E-02, "m3", "L3", "1.0");
   liquid["bushel"] = UBASE("UK", "bushel", 3.636873600000000E-02, "m3", "L3", "1.0");
   liquid["bu"] = UBASE("UK", "bu", 3.636873600000000E-02, "m3", "L3", "1.0");
   liquid["butt"] = UBASE("UK", "butt", 4.909779360000000E-01, "m3", "L3", "1.0");
   liquid["bt"] = UBASE("UK", "bt", 4.909779360000000E-01, "m3", "L3", "1.0");
   liquid["chopine"] = UBASE("UK", "chopine", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["coomb"] = UBASE("UK", "coomb", 1.454749440000000E-01, "m3", "L3", "1.0");
   liquid["cran"] = UBASE("UK", "cran", 1.704784500000000E-01, "m3", "L3", "1.0");
   liquid["mease"] = UBASE("UK", "mease", 1.704784500000000E-01, "m3", "L3", "1.0");
   liquid["cup"] = UBASE("UK", "cup", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["cups"] = UBASE("UK", "cups", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["demiard"] = UBASE("UK", "demiard", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["drachm"] = UBASE("UK", "drachm", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["fl-dr"] = UBASE("UK", "fl-dr", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["dram"] = UBASE("UK", "dram", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["drop"] = UBASE("UK", "drop", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["min"] = UBASE("UK", "min", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["firkin"] = UBASE("UK", "firkin", 4.091482800000000E-02, "m3", "L3", "1.0");
   liquid["fir"] = UBASE("UK", "fir", 4.091482800000000E-02, "m3", "L3", "1.0");
   liquid["firkin(beer)"] = UBASE("UK", "firkin(beer)", 4.159036843200000E-02, "m3", "L3", "1.0");
   liquid["flagon"] = UBASE("UK", "flagon", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["fluid-dram"] = UBASE("UK", "fluid-dram", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["fluid-ounce"] = UBASE("UK", "fluid-ounce", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["fl-oz"] = UBASE("UK", "fl-oz", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["gallon"] = UBASE("UK", "gallon", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gal"] = UBASE("UK", "gal", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gallons"] = UBASE("UK", "gallons", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["gallon(beer)"] = UBASE("UK", "gallon(beer)", 4.621152048000000E-03, "m3", "L3", "1.0");
   liquid["gill"] = UBASE("UK", "gill", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["gi"] = UBASE("UK", "gi", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["hogshead"] = UBASE("UK", "hogshead", 2.864037960000000E-01, "m3", "L3", "1.0");
   liquid["hdd"] = UBASE("UK", "hdd", 2.864037960000000E-01, "m3", "L3", "1.0");
   liquid["hogshead(beer)"] = UBASE("UK", "hogshead(beer)", 2.495422105920000E-01, "m3", "L3", "1.0");
   liquid["hdd(beer)"] = UBASE("UK", "hdd(beer)", 2.495422105920000E-01, "m3", "L3", "1.0");
   liquid["jeroboam"] = UBASE("UK", "jeroboam", 3.030728000000000E-03, "m3", "L3", "1.0");
   liquid["jigger"] = UBASE("UK", "jigger", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["kilderkin"] = UBASE("UK", "kilderkin", 8.182965600000000E-02, "m3", "L3", "1.0");
   liquid["last"] = UBASE("UK", "last", 2.909498880000000E+00, "m3", "L3", "1.0");
   liquid["magnum"] = UBASE("UK", "magnum", 1.515364000000000E-03, "m3", "L3", "1.0");
   liquid["mathusalem"] = UBASE("UK", "mathusalem", 6.819138000000000E-03, "m3", "L3", "1.0");
   liquid["methuselah"] = UBASE("UK", "methuselah", 6.819138000000000E-03, "m3", "L3", "1.0");
   liquid["minim"] = UBASE("UK", "minim", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["M"] = UBASE("UK", "M", 5.919390625000000E-08, "m3", "L3", "1.0");
   liquid["nabuchodonosor"] = UBASE("UK", "nabuchodonosor", 1.515364000000000E-02, "m3", "L3", "1.0");
   liquid["nabuchadnezzar"] = UBASE("UK", "nabuchadnezzar", 1.515364000000000E-02, "m3", "L3", "1.0");
   liquid["noggin"] = UBASE("UK", "noggin", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["nogg"] = UBASE("UK", "nogg", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["ounce"] = UBASE("UK", "ounce", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["ounces"] = UBASE("UK", "ounces", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["oz"] = UBASE("UK", "oz", 2.841307500000000E-05, "m3", "L3", "1.0");
   liquid["pin"] = UBASE("UK", "pin", 2.045741400000000E-02, "m3", "L3", "1.0");
   liquid["pin(beer)"] = UBASE("UK", "pin(beer)", 2.079518421600000E-02, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("UK", "pint", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["pt"] = UBASE("UK", "pt", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["pints"] = UBASE("UK", "pints", 5.682615000000000E-04, "m3", "L3", "1.0");
   liquid["pottle"] = UBASE("UK", "pottle", 2.273046000000000E-03, "m3", "L3", "1.0");
   liquid["puncheon"] = UBASE("UK", "puncheon", 3.182264400000000E-01, "m3", "L3", "1.0");
   liquid["puncheon(beer)"] = UBASE("UK", "puncheon(beer)", 3.327229474560000E-01, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("UK", "quart", 1.136523000000000E-03, "m3", "L3", "1.0");
   liquid["qt"] = UBASE("UK", "qt", 1.136523000000000E-03, "m3", "L3", "1.0");
   liquid["quarts"] = UBASE("UK", "quarts", 1.136523000000000E-03, "m3", "L3", "1.0");
   liquid["quarter"] = UBASE("UK", "quarter", 2.909498880000000E-01, "m3", "L3", "1.0");
   liquid["quatern"] = UBASE("UK", "quatern", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["rehoboam"] = UBASE("UK", "rehoboam", 4.546092000000000E-03, "m3", "L3", "1.0");
   liquid["reputed-quart"] = UBASE("UK", "reputed-quart", 6.309019640000000E-04, "m3", "L3", "1.0");
   liquid["roquille"] = UBASE("UK", "roquille", 1.420653750000000E-04, "m3", "L3", "1.0");
   liquid["sack"] = UBASE("UK", "sack", 1.091062080000000E-01, "m3", "L3", "1.0");
   liquid["sk"] = UBASE("UK", "sk", 1.091062080000000E-01, "m3", "L3", "1.0");
   liquid["salmarazd"] = UBASE("UK", "salmarazd", 9.092184000000000E-03, "m3", "L3", "1.0");
   liquid["salmanazar"] = UBASE("UK", "salmanazar", 9.092184000000000E-03, "m3", "L3", "1.0");
   liquid["salomon"] = UBASE("UK", "salomon", 1.818436800000000E-02, "m3", "L3", "1.0");
   liquid["scruple"] = UBASE("UK", "scruple", 1.183878125000000E-06, "m3", "L3", "1.0");
   liquid["seam"] = UBASE("UK", "seam", 2.909498880000000E-01, "m3", "L3", "1.0");
   liquid["solomon"] = UBASE("UK", "solomon", 1.818436800000000E-02, "m3", "L3", "1.0");
   liquid["strike"] = UBASE("UK", "strike", 7.273747200000000E-02, "m3", "L3", "1.0");
   liquid["tablespoon"] = UBASE("UK", "tablespoon", 2.000000000000000E-05, "m3", "L3", "1.0");
   liquid["teacupful"] = UBASE("UK", "teacupful", 1.478676478125000E-04, "m3", "L3", "1.0");
   liquid["tcf"] = UBASE("UK", "tcf", 1.478676478125000E-04, "m3", "L3", "1.0");
   liquid["teaspoonful"] = UBASE("UK", "teaspoonful", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["tspf"] = UBASE("UK", "tspf", 3.551634375000000E-06, "m3", "L3", "1.0");
   liquid["ton(water)"] = UBASE("UK", "ton(water)", 1.018324608000000E+00, "m3", "L3", "1.0");
   liquid["tumblerful"] = UBASE("UK", "tumblerful", 2.841307500000000E-04, "m3", "L3", "1.0");
   liquid["tun(beer)"] = UBASE("UK", "tun(beer)", 9.981688423680000E-01, "m3", "L3", "1.0");
   liquid["wey"] = UBASE("UK", "wey", 1.454749440000000E+00, "m3", "L3", "1.0");
   liquid["gallon(wine)"] = UBASE("UK", "gallon(wine)", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["glassful(wine)"] = UBASE("UK", "glassful(wine)", 7.103268750000000E-05, "m3", "L3", "1.0");
   dry["amber"] = UBASE("UK", "amber", 1.454749440000000E-01, "m3", "L3", "1.0");
   dry["peck"] = UBASE("UK", "peck", 9.092184000000000E-03, "m3", "L3", "1.0");
   dry["pk"] = UBASE("UK", "pk", 9.092184000000000E-03, "m3", "L3", "1.0");
   dry["bag"] = UBASE("UK", "bag", 1.091062080000000E-01, "m3", "L3", "1.0");
   dry["barrel(bulk)"] = UBASE("UK", "barrel(bulk)", 1.415842329600000E-01, "m3", "L3", "1.0");
   dry["bole(corn)"] = UBASE("UK", "bole(corn)", 1.454749440000000E-01, "m3", "L3", "1.0");
   dry["boll(corn)"] = UBASE("UK", "boll(corn)", 1.454749440000000E-01, "m3", "L3", "1.0");
   dry["bowe(corn)"] = UBASE("UK", "bowe(corn)", 1.454749440000000E-01, "m3", "L3", "1.0");
   dry["chaldron"] = UBASE("UK", "chaldron", 1.309274496000000E+00, "m3", "L3", "1.0");
   dry["chal"] = UBASE("UK", "chal", 1.309274496000000E+00, "m3", "L3", "1.0");
   dry["cord(wood)"] = UBASE("UK", "cord(wood)", 3.624556363776000E+00, "m3", "L3", "1.0");
   dry["cd(wood)"] = UBASE("UK", "cd(wood)", 3.624556363776000E+00, "m3", "L3", "1.0");
   dry["cord-foot"] = UBASE("UK", "cord-foot", 4.530695454720000E-01, "m3", "L3", "1.0");
   dry["cord-ft"] = UBASE("UK", "cord-ft", 4.530695454720000E-01, "m3", "L3", "1.0");
   dry["cubic-mile"] = UBASE("UK", "cubic-mile", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cubic-miles"] = UBASE("UK", "cubic-miles", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cubic-inch"] = UBASE("UK", "cubic-inch", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["in3"] = UBASE("UK", "in3", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cu-in"] = UBASE("UK", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-inches"] = UBASE("UK", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-foot"] = UBASE("UK", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["ft3"] = UBASE("UK", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cu-ft"] = UBASE("UK", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-feet"] = UBASE("UK", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-yard"] = UBASE("UK", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["yd3"] = UBASE("UK", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cu-yd"] = UBASE("UK", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cubic-yards"] = UBASE("UK", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["deal"] = UBASE("UK", "deal", 2.477724076800000E-01, "m3", "L3", "1.0");
   dry["firlot(corn)"] = UBASE("UK", "firlot(corn)", 3.636873600000000E-02, "m3", "L3", "1.0");
   dry["mease"] = UBASE("UK", "mease", 1.704784500000000E-01, "m3", "L3", "1.0");
   dry["cran"] = UBASE("UK", "cran", 1.704784500000000E-01, "m3", "L3", "1.0");
   dry["ocean-ton"] = UBASE("UK", "ocean-ton", 1.132673863680000E+00, "m3", "L3", "1.0");
   dry["quartern"] = UBASE("UK", "quartern", 1.420653750000000E-04, "m3", "L3", "1.0");
   dry["register-ton"] = UBASE("UK", "register-ton", 2.831684659200000E+00, "m3", "L3", "1.0");
   dry["riga-last"] = UBASE("UK", "riga-last", 2.265347727360000E+00, "m3", "L3", "1.0");
   dry["rod"] = UBASE("UK", "rod", 2.831684659200000E+01, "m3", "L3", "1.0");
   dry["stack"] = UBASE("UK", "stack", 3.058219431936000E+00, "m3", "L3", "1.0");
   dry["stk"] = UBASE("UK", "stk", 3.058219431936000E+00, "m3", "L3", "1.0");
   dry["standard"] = UBASE("UK", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["std"] = UBASE("UK", "std", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["strike(feet)"] = UBASE("UK", "strike(feet)", 7.079211648000000E-02, "m3", "L3", "1.0");
   dry["ton"] = UBASE("UK", "ton", 2.831684659200000E+00, "m3", "L3", "1.0");
   dry["ton(freight)"] = UBASE("UK", "ton(freight)", 1.132673863680000E+00, "m3", "L3", "1.0");
   dry["ton(measurement)"] = UBASE("UK", "ton(measurement)", 1.132673863680000E+00, "m3", "L3", "1.0");
   dry["ton(timber)"] = UBASE("UK", "ton(timber)", 1.132673863680000E+00, "m3", "L3", "1.0");
   _map["UK"] = BaseSystem("UK", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit107(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["barony"] = UBASE("US", "barony", 1.618742568960000E+07, "m", "L", "1.0");
   length["billion-cubic-microns-per-square-inch"] = UBASE("US", "billion-cubic-microns-per-square-inch", 1.550003100006200E-06, "m", "L", "1.0");
   length["bcm"] = UBASE("US", "bcm", 1.550003100006200E-06, "m", "L", "1.0");
   length["bcmsi"] = UBASE("US", "bcmsi", 1.550003100006200E-06, "m", "L", "1.0");
   length["block(Eastern)"] = UBASE("US", "block(Eastern)", 8.046720000000000E+01, "m", "L", "1.0");
   length["block(Midwestern)"] = UBASE("US", "block(Midwestern)", 1.005840000000000E+02, "m", "L", "1.0");
   length["block(Western)"] = UBASE("US", "block(Western)", 1.609344000000000E+02, "m", "L", "1.0");
   length["button"] = UBASE("US", "button", 6.350000000000000E-04, "m", "L", "1.0");
   length["cable-length(nautical)"] = UBASE("US", "cable-length(nautical)", 2.194560000000000E+02, "m", "L", "1.0");
   length["cannon-shot"] = UBASE("US", "cannon-shot", 5.559552000000000E+03, "m", "L", "1.0");
   length["chain(engineer)"] = UBASE("US", "chain(engineer)", 3.048000000000000E+01, "m", "L", "1.0");
   length["ch(engineer)"] = UBASE("US", "ch(engineer)", 3.048000000000000E+01, "m", "L", "1.0");
   length["chain(Ramsden)"] = UBASE("US", "chain(Ramsden)", 3.048000000000000E+01, "m", "L", "1.0");
   length["ch(Ramsden)"] = UBASE("US", "ch(Ramsden)", 3.048000000000000E+01, "m", "L", "1.0");
   length["cup"] = UBASE("US", "cup", 2.365882000000000E-01, "m", "L", "1.0");
   length["cups"] = UBASE("US", "cups", 2.365882000000000E-01, "m", "L", "1.0");
   length["cup(metric)"] = UBASE("US", "cup(metric)", 2.000000000000000E-01, "m", "L", "1.0");
   length["diamond"] = UBASE("US", "diamond", 4.876800000000000E-01, "m", "L", "1.0");
   length["double-pace"] = UBASE("US", "double-pace", 9.144000000000000E-01, "m", "L", "1.0");
   length["foot"] = UBASE("US", "foot", 3.048000000000000E-01, "m", "L", "1.0");
   length["ft"] = UBASE("US", "ft", 3.048000000000000E-01, "m", "L", "1.0");
   length["feet"] = UBASE("US", "feet", 3.048000000000000E-01, "m", "L", "1.0");
   length["foot(survey)"] = UBASE("US", "foot(survey)", 3.048006096012190E-01, "m", "L", "1.0");
   length["ft(survey)"] = UBASE("US", "ft(survey)", 3.048006096012190E-01, "m", "L", "1.0");
   length["football-field"] = UBASE("US", "football-field", 1.097280000000000E+02, "m", "L", "1.0");
   length["furlong"] = UBASE("US", "furlong", 2.011680000000000E+02, "m", "L", "1.0");
   length["fur"] = UBASE("US", "fur", 2.011680000000000E+02, "m", "L", "1.0");
   length["furlongs"] = UBASE("US", "furlongs", 2.011680000000000E+02, "m", "L", "1.0");
   length["hide"] = UBASE("US", "hide", 4.046856422400000E+05, "m", "L", "1.0");
   length["inch(survey)"] = UBASE("US", "inch(survey)", 2.540005080010160E-02, "m", "L", "1.0");
   length["in(survey)"] = UBASE("US", "in(survey)", 2.540005080010160E-02, "m", "L", "1.0");
   length["inch"] = UBASE("US", "inch", 2.540000000000000E-02, "m", "L", "1.0");
   length["in"] = UBASE("US", "in", 2.540000000000000E-02, "m", "L", "1.0");
   length["inches"] = UBASE("US", "inches", 2.540000000000000E-02, "m", "L", "1.0");
   length["league"] = UBASE("US", "league", 5.559552000000000E+03, "m", "L", "1.0");
   length["leag"] = UBASE("US", "leag", 5.559552000000000E+03, "m", "L", "1.0");
   length["leagues"] = UBASE("US", "leagues", 5.559552000000000E+03, "m", "L", "1.0");
   length["line"] = UBASE("US", "line", 6.350000000000000E-04, "m", "L", "1.0");
   length["link(engineer)"] = UBASE("US", "link(engineer)", 3.048000000000000E-01, "m", "L", "1.0");
   length["link(Ramsden)"] = UBASE("US", "link(Ramsden)", 3.048000000000000E-01, "m", "L", "1.0");
   length["lot"] = UBASE("US", "lot", 3.237485137920000E+05, "m", "L", "1.0");
   length["mark-twain"] = UBASE("US", "mark-twain", 3.657600000000000E+00, "m", "L", "1.0");
   length["mile"] = UBASE("US", "mile", 1.609344000000000E+03, "m", "L", "1.0");
   length["mi"] = UBASE("US", "mi", 1.609344000000000E+03, "m", "L", "1.0");
   length["miles"] = UBASE("US", "miles", 1.609344000000000E+03, "m", "L", "1.0");
   length["mile(nautical)"] = UBASE("US", "mile(nautical)", 1.853184000000000E+03, "m", "L", "1.0");
   length["mi(nautical)"] = UBASE("US", "mi(nautical)", 1.853184000000000E+03, "m", "L", "1.0");
   length["mile(survey)"] = UBASE("US", "mile(survey)", 1.609347218694440E+03, "m", "L", "1.0");
   length["mi(survey)"] = UBASE("US", "mi(survey)", 1.609347218694440E+03, "m", "L", "1.0");
   length["nautical-mile"] = UBASE("US", "nautical-mile", 1.853184000000000E+03, "m", "L", "1.0");
   length["nmi"] = UBASE("US", "nmi", 1.853184000000000E+03, "m", "L", "1.0");
   length["nautical-miles"] = UBASE("US", "nautical-miles", 1.853184000000000E+03, "m", "L", "1.0");
   length["pace"] = UBASE("US", "pace", 7.620000000000000E-01, "m", "L", "1.0");
   length["pica"] = UBASE("US", "pica", 4.217517642175180E-03, "m", "L", "1.0");
   length["pin-length"] = UBASE("US", "pin-length", 1.587500000000000E-03, "m", "L", "1.0");
   length["point(printer)"] = UBASE("US", "point(printer)", 3.514598035145980E-04, "m", "L", "1.0");
   length["point(silversmith)"] = UBASE("US", "point(silversmith)", 6.350000000000000E-06, "m", "L", "1.0");
   length["pt"] = UBASE("US", "pt", 6.350000000000000E-06, "m", "L", "1.0");
   length["quadrant"] = UBASE("US", "quadrant", 1.000000000000000E-11, "m", "L", "1.0");
   length["rod"] = UBASE("US", "rod", 5.029200000000000E+00, "m", "L", "1.0");
   length["rd"] = UBASE("US", "rd", 5.029200000000000E+00, "m", "L", "1.0");
   length["rods"] = UBASE("US", "rods", 5.029200000000000E+00, "m", "L", "1.0");
   length["standard-gauge"] = UBASE("US", "standard-gauge", 1.435100000000000E+00, "m", "L", "1.0");
   length["vara"] = UBASE("US", "vara", 8.466666666666670E-01, "m", "L", "1.0");
   length["yard(survey)"] = UBASE("US", "yard(survey)", 9.144018288036580E-01, "m", "L", "1.0");
   length["yd(survey)"] = UBASE("US", "yd(survey)", 9.144018288036580E-01, "m", "L", "1.0");
   length["yard"] = UBASE("US", "yard", 9.144000000000000E-01, "m", "L", "1.0");
   length["yd"] = UBASE("US", "yd", 9.144000000000000E-01, "m", "L", "1.0");
   length["yards"] = UBASE("US", "yards", 9.144000000000000E-01, "m", "L", "1.0");
   area["acre(survey)"] = UBASE("US", "acre(survey)", 4.046872609874250E+03, "m2", "L2", "1.0");
   area["ac(survey)"] = UBASE("US", "ac(survey)", 4.046872609874250E+03, "m2", "L2", "1.0");
   area["acre"] = UBASE("US", "acre", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["ac"] = UBASE("US", "ac", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["acres"] = UBASE("US", "acres", 4.046856422400000E+03, "m2", "L2", "1.0");
   area["barrel-per-foot"] = UBASE("US", "barrel-per-foot", 3.912088950000000E-01, "m2", "L2", "1.0");
   area["bbl/ft"] = UBASE("US", "bbl/ft", 3.912088950000000E-01, "m2", "L2", "1.0");
   area["barrel-per-foot(oil)"] = UBASE("US", "barrel-per-foot(oil)", 5.216118600000000E-01, "m2", "L2", "1.0");
   area["bbl/ft(oil)"] = UBASE("US", "bbl/ft(oil)", 5.216118600000000E-01, "m2", "L2", "1.0");
   area["barrel-per-inch"] = UBASE("US", "barrel-per-inch", 4.694506740000000E+00, "m2", "L2", "1.0");
   area["bbl/in"] = UBASE("US", "bbl/in", 4.694506740000000E+00, "m2", "L2", "1.0");
   area["barrel-per-inch(oil)"] = UBASE("US", "barrel-per-inch(oil)", 6.259342320000000E+00, "m2", "L2", "1.0");
   area["brl/in(oil)"] = UBASE("US", "brl/in(oil)", 6.259342320000000E+00, "m2", "L2", "1.0");
   area["circular-mile(survey)"] = UBASE("US", "circular-mile(survey)", 2.034180041791150E+06, "m2", "L2", "1.0");
   area["cmi(survey)"] = UBASE("US", "cmi(survey)", 2.034180041791150E+06, "m2", "L2", "1.0");
   area["cir-mi(survey)"] = UBASE("US", "cir-mi(survey)", 2.034180041791150E+06, "m2", "L2", "1.0");
   area["circular-millimeter"] = UBASE("US", "circular-millimeter", 7.853981633974480E-07, "m2", "L2", "1.0");
   area["cmm"] = UBASE("US", "cmm", 7.853981633974480E-07, "m2", "L2", "1.0");
   area["cir-mm"] = UBASE("US", "cir-mm", 7.853981633974480E-07, "m2", "L2", "1.0");
   area["flag"] = UBASE("US", "flag", 4.645152000000000E-01, "m2", "L2", "1.0");
   area["gallon-per-foot"] = UBASE("US", "gallon-per-foot", 1.241933000000000E-02, "m2", "L2", "1.0");
   area["gal/ft"] = UBASE("US", "gal/ft", 1.241933000000000E-02, "m2", "L2", "1.0");
   area["gallon-per-mile"] = UBASE("US", "gallon-per-mile", 2.352145833333330E-06, "m2", "L2", "1.0");
   area["gal/mi"] = UBASE("US", "gal/mi", 2.352145833333330E-06, "m2", "L2", "1.0");
   area["homestead"] = UBASE("US", "homestead", 6.474970275840000E+05, "m2", "L2", "1.0");
   area["labor"] = UBASE("US", "labor", 7.168444444444440E+05, "m2", "L2", "1.0");
   area["legua"] = UBASE("US", "legua", 1.796399565903360E+07, "m2", "L2", "1.0");
   area["rood"] = UBASE("US", "rood", 3.372380352000000E+02, "m2", "L2", "1.0");
   area["square-chain(engineer)"] = UBASE("US", "square-chain(engineer)", 9.290304000000000E+02, "m2", "L2", "1.0");
   area["sq-ch(engineer)"] = UBASE("US", "sq-ch(engineer)", 9.290304000000000E+02, "m2", "L2", "1.0");
   area["square-chain(Ramsden)"] = UBASE("US", "square-chain(Ramsden)", 9.290287831176020E+02, "m2", "L2", "1.0");
   area["sq-ch(Ramsden)"] = UBASE("US", "sq-ch(Ramsden)", 9.290287831176020E+02, "m2", "L2", "1.0");
   area["square-inch"] = UBASE("US", "square-inch", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["in2"] = UBASE("US", "in2", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["sq-in"] = UBASE("US", "sq-in", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-inches"] = UBASE("US", "square-inches", 6.451600000000000E-04, "m2", "L2", "1.0");
   area["square-foot(survey)"] = UBASE("US", "square-foot(survey)", 9.290341161327480E-02, "m2", "L2", "1.0");
   area["ft2(survey)"] = UBASE("US", "ft2(survey)", 9.290341161327480E-02, "m2", "L2", "1.0");
   area["square-foot"] = UBASE("US", "square-foot", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["ft2"] = UBASE("US", "ft2", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["sq-ft"] = UBASE("US", "sq-ft", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-feet"] = UBASE("US", "square-feet", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-league(nautical)"] = UBASE("US", "square-league(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0");
   area["sq-leag(nautical)"] = UBASE("US", "sq-leag(nautical)", 3.090861844070400E+07, "m2", "L2", "1.0");
   area["square-link(Ramsden)"] = UBASE("US", "square-link(Ramsden)", 9.290304000000000E-02, "m2", "L2", "1.0");
   area["square-mile(nautical)"] = UBASE("US", "square-mile(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0");
   area["sq-mi(nautical)"] = UBASE("US", "sq-mi(nautical)", 3.434290937856000E+06, "m2", "L2", "1.0");
   area["square-mile(survey)"] = UBASE("US", "square-mile(survey)", 2.589998470319520E+06, "m2", "L2", "1.0");
   area["sq-mi(survey)"] = UBASE("US", "sq-mi(survey)", 2.589998470319520E+06, "m2", "L2", "1.0");
   area["square-mile"] = UBASE("US", "square-mile", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["sq-mi"] = UBASE("US", "sq-mi", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["mi2"] = UBASE("US", "mi2", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["square-miles"] = UBASE("US", "square-miles", 2.589988110336000E+06, "m2", "L2", "1.0");
   area["circular-mile(nautical)"] = UBASE("US", "circular-mile(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0");
   area["cmi(nautical)"] = UBASE("US", "cmi(nautical)", 2.697285795164600E+06, "m2", "L2", "1.0");
   area["square-yard"] = UBASE("US", "square-yard", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["yd2"] = UBASE("US", "yd2", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["sq-yd"] = UBASE("US", "sq-yd", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["square-yards"] = UBASE("US", "square-yards", 8.361273600000000E-01, "m2", "L2", "1.0");
   area["township"] = UBASE("US", "township", 9.323957197209600E+07, "m2", "L2", "1.0");
   area["vara"] = UBASE("US", "vara", 7.168601466640000E+02, "m2", "L2", "1.0");
   mass["bale"] = UBASE("US", "bale", 2.267961850000000E+02, "kg", "M", "1.0");
   mass["bl"] = UBASE("US", "bl", 2.267961850000000E+02, "kg", "M", "1.0");
   mass["drachm(apothecary)"] = UBASE("US", "drachm(apothecary)", 3.887934600000000E-03, "kg", "M", "1.0");
   mass["eleventh-gramm"] = UBASE("US", "eleventh-gramm", 1.000000000000000E-14, "kg", "M", "1.0");
   mass["flask-of-mercury"] = UBASE("US", "flask-of-mercury", 3.401942775000000E+01, "kg", "M", "1.0");
   mass["Hg-flask"] = UBASE("US", "Hg-flask", 3.401942775000000E+01, "kg", "M", "1.0");
   mass["geepound"] = UBASE("US", "geepound", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["hundredweight"] = UBASE("US", "hundredweight", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["cwt"] = UBASE("US", "cwt", 5.080234544000000E+01, "kg", "M", "1.0");
   mass["hundredweight(short)"] = UBASE("US", "hundredweight(short)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["sh(short)"] = UBASE("US", "sh(short)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cwt(short)"] = UBASE("US", "cwt(short)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["hundredweight(net)"] = UBASE("US", "hundredweight(net)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["sh(net)"] = UBASE("US", "sh(net)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["cwt(net)"] = UBASE("US", "cwt(net)", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["keg"] = UBASE("US", "keg", 4.535923700000000E+01, "kg", "M", "1.0");
   mass["kilopound"] = UBASE("US", "kilopound", 4.535923700000000E+02, "kg", "M", "1.0");
   mass["kip"] = UBASE("US", "kip", 4.535923700000000E+02, "kg", "M", "1.0");
   mass["mancus"] = UBASE("US", "mancus", 5.669904625000000E-02, "kg", "M", "1.0");
   mass["ounce"] = UBASE("US", "ounce", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["oz"] = UBASE("US", "oz", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["ounces"] = UBASE("US", "ounces", 2.834952312500000E-02, "kg", "M", "1.0");
   mass["pound"] = UBASE("US", "pound", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["lb"] = UBASE("US", "lb", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["pounds"] = UBASE("US", "pounds", 4.535923700000000E-01, "kg", "M", "1.0");
   mass["quarter(long)"] = UBASE("US", "quarter(long)", 2.540117272000000E+02, "kg", "M", "1.0");
   mass["quarter(short)"] = UBASE("US", "quarter(short)", 2.267961850000000E+02, "kg", "M", "1.0");
   mass["scruple(apothecary)"] = UBASE("US", "scruple(apothecary)", 1.295978200000000E-03, "kg", "M", "1.0");
   mass["s(ap)"] = UBASE("US", "s(ap)", 1.295978200000000E-03, "kg", "M", "1.0");
   mass["scr(ap)"] = UBASE("US", "scr(ap)", 1.295978200000000E-03, "kg", "M", "1.0");
   mass["short-ton"] = UBASE("US", "short-ton", 9.071847400000000E+02, "kg", "M", "1.0");
   mass["sh-ton"] = UBASE("US", "sh-ton", 9.071847400000000E+02, "kg", "M", "1.0");
   mass["slinch"] = UBASE("US", "slinch", 1.751268352464760E+02, "kg", "M", "1.0");
   mass["slug"] = UBASE("US", "slug", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["slugs"] = UBASE("US", "slugs", 1.459390293720640E+01, "kg", "M", "1.0");
   mass["stick(butter)"] = UBASE("US", "stick(butter)", 1.133980925000000E-01, "kg", "M", "1.0");
   mass["stk(butter)"] = UBASE("US", "stk(butter)", 1.133980925000000E-01, "kg", "M", "1.0");
   mass["ton(assay)"] = UBASE("US", "ton(assay)", 3.428571428571430E-05, "kg", "M", "1.0");
   mass["AT"] = UBASE("US", "AT", 3.428571428571430E-05, "kg", "M", "1.0");
   mass["ton(shipping)"] = UBASE("US", "ton(shipping)", 1.219040245785600E+03, "kg", "M", "1.0");
   mass["ton(short)"] = UBASE("US", "ton(short)", 9.071847400000000E+02, "kg", "M", "1.0");
   liquid["acre-foot(survey)"] = UBASE("US", "acre-foot(survey)", 1.233489238464030E+03, "m3", "L3", "1.0");
   liquid["ac-ft(survey)"] = UBASE("US", "ac-ft(survey)", 1.233489238464030E+03, "m3", "L3", "1.0");
   liquid["anker"] = UBASE("US", "anker", 3.785411784000000E-02, "m3", "L3", "1.0");
   liquid["barge"] = UBASE("US", "barge", 3.974682373200000E+03, "m3", "L3", "1.0");
   liquid["barrel"] = UBASE("US", "barrel", 2.273046000000000E-01, "m3", "L3", "1.0");
   liquid["bbl"] = UBASE("US", "bbl", 2.273046000000000E-01, "m3", "L3", "1.0");
   liquid["barrel(alcohol)"] = UBASE("US", "barrel(alcohol)", 1.892705892000000E-01, "m3", "L3", "1.0");
   liquid["bbl(alcohol)"] = UBASE("US", "bbl(alcohol)", 1.892705892000000E-01, "m3", "L3", "1.0");
   liquid["barrel(liquid)"] = UBASE("US", "barrel(liquid)", 1.192404711960000E-01, "m3", "L3", "1.0");
   liquid["bbl(liquid)"] = UBASE("US", "bbl(liquid)", 1.192404711960000E-01, "m3", "L3", "1.0");
   liquid["barrel(oil)"] = UBASE("US", "barrel(oil)", 1.589872949280000E-01, "m3", "L3", "1.0");
   liquid["bbl(oil)"] = UBASE("US", "bbl(oil)", 1.589872949280000E-01, "m3", "L3", "1.0");
   liquid["bottle(new)"] = UBASE("US", "bottle(new)", 7.500000000000000E-04, "m3", "L3", "1.0");
   liquid["bottle(old)"] = UBASE("US", "bottle(old)", 7.570823568000000E-04, "m3", "L3", "1.0");
   liquid["chopine"] = UBASE("US", "chopine", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["coffee-measure"] = UBASE("US", "coffee-measure", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["coffee-spoon"] = UBASE("US", "coffee-spoon", 2.464460796875000E-06, "m3", "L3", "1.0");
   liquid["cup"] = UBASE("US", "cup", 2.365882365000000E-04, "m3", "L3", "1.0");
   liquid["cups"] = UBASE("US", "cups", 2.365882365000000E-04, "m3", "L3", "1.0");
   liquid["dash"] = UBASE("US", "dash", 2.957352956250000E-06, "m3", "L3", "1.0");
   liquid["dessert-spoon"] = UBASE("US", "dessert-spoon", 9.857843187500000E-06, "m3", "L3", "1.0");
   liquid["dsp"] = UBASE("US", "dsp", 9.857843187500000E-06, "m3", "L3", "1.0");
   liquid["dessert-spoonful"] = UBASE("US", "dessert-spoonful", 9.857843187500000E-06, "m3", "L3", "1.0");
   liquid["dspf"] = UBASE("US", "dspf", 9.857843187500000E-06, "m3", "L3", "1.0");
   liquid["drachm"] = UBASE("US", "drachm", 3.696691195312500E-06, "m3", "L3", "1.0");
   liquid["fl-dr"] = UBASE("US", "fl-dr", 3.696691195312500E-06, "m3", "L3", "1.0");
   liquid["dram"] = UBASE("US", "dram", 3.696691195312500E-06, "m3", "L3", "1.0");
   liquid["drink"] = UBASE("US", "drink", 1.478676478125000E-05, "m3", "L3", "1.0");
   liquid["drop"] = UBASE("US", "drop", 4.928921593750000E-07, "m3", "L3", "1.0");
   liquid["drop(apothecary)"] = UBASE("US", "drop(apothecary)", 6.161151992187500E-08, "m3", "L3", "1.0");
   liquid["drp(ap)"] = UBASE("US", "drp(ap)", 6.161151992187500E-08, "m3", "L3", "1.0");
   liquid["gtt(ap)"] = UBASE("US", "gtt(ap)", 6.161151992187500E-08, "m3", "L3", "1.0");
   liquid["drop(metric)"] = UBASE("US", "drop(metric)", 5.000000000000000E-08, "m3", "L3", "1.0");
   liquid["fifth"] = UBASE("US", "fifth", 7.570823568000000E-04, "m3", "L3", "1.0");
   liquid["firkin"] = UBASE("US", "firkin", 3.406870605600000E-02, "m3", "L3", "1.0");
   liquid["fir"] = UBASE("US", "fir", 3.406870605600000E-02, "m3", "L3", "1.0");
   liquid["fluid-dram"] = UBASE("US", "fluid-dram", 3.696691195312500E-06, "m3", "L3", "1.0");
   liquid["fluid-ounce"] = UBASE("US", "fluid-ounce", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["fl-oz"] = UBASE("US", "fl-oz", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["gallon"] = UBASE("US", "gallon", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gal"] = UBASE("US", "gal", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gallons"] = UBASE("US", "gallons", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gallon(wine)"] = UBASE("US", "gallon(wine)", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gal(wine)"] = UBASE("US", "gal(wine)", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gallon-per-flush"] = UBASE("US", "gallon-per-flush", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gpf"] = UBASE("US", "gpf", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["GPF"] = UBASE("US", "GPF", 3.785411784000000E-03, "m3", "L3", "1.0");
   liquid["gill"] = UBASE("US", "gill", 1.182941182500000E-04, "m3", "L3", "1.0");
   liquid["gi"] = UBASE("US", "gi", 1.182941182500000E-04, "m3", "L3", "1.0");
   liquid["glass"] = UBASE("US", "glass", 1.182941182500000E-04, "m3", "L3", "1.0");
   liquid["hogshead"] = UBASE("US", "hogshead", 2.384809423920000E-01, "m3", "L3", "1.0");
   liquid["hhd"] = UBASE("US", "hhd", 2.384809423920000E-01, "m3", "L3", "1.0");
   liquid["hgs"] = UBASE("US", "hgs", 2.384809423920000E-01, "m3", "L3", "1.0");
   liquid["jigger"] = UBASE("US", "jigger", 4.436029434375000E-05, "m3", "L3", "1.0");
   liquid["keg"] = UBASE("US", "keg", 4.542494140800000E-02, "m3", "L3", "1.0");
   liquid["liter-per-flush"] = UBASE("US", "liter-per-flush", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["lpf"] = UBASE("US", "lpf", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["LPF"] = UBASE("US", "LPF", 1.000000000000000E-03, "m3", "L3", "1.0");
   liquid["milliard"] = UBASE("US", "milliard", 1.000000000000000E+09, "m3", "L3", "1.0");
   liquid["minim"] = UBASE("US", "minim", 6.161151992187500E-08, "m3", "L3", "1.0");
   liquid["min"] = UBASE("US", "min", 6.161151992187500E-08, "m3", "L3", "1.0");
   liquid["M"] = UBASE("US", "M", 6.161151992187500E-08, "m3", "L3", "1.0");
   liquid["ounce"] = UBASE("US", "ounce", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["oz"] = UBASE("US", "oz", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["ounces"] = UBASE("US", "ounces", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["pinch"] = UBASE("US", "pinch", 6.161151992187500E-07, "m3", "L3", "1.0");
   liquid["pint"] = UBASE("US", "pint", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["pt"] = UBASE("US", "pt", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["pints"] = UBASE("US", "pints", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["pipe(wine)"] = UBASE("US", "pipe(wine)", 4.769618847840000E-01, "m3", "L3", "1.0");
   liquid["pony"] = UBASE("US", "pony", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["puncheon(wine)"] = UBASE("US", "puncheon(wine)", 3.179745898560000E-01, "m3", "L3", "1.0");
   liquid["quart"] = UBASE("US", "quart", 9.463529460000000E-04, "m3", "L3", "1.0");
   liquid["qt"] = UBASE("US", "qt", 9.463529460000000E-04, "m3", "L3", "1.0");
   liquid["quarts"] = UBASE("US", "quarts", 9.463529460000000E-04, "m3", "L3", "1.0");
   liquid["roquille"] = UBASE("US", "roquille", 1.182941182500000E-04, "m3", "L3", "1.0");
   liquid["saltspoon"] = UBASE("US", "saltspoon", 1.232230398437500E-06, "m3", "L3", "1.0");
   liquid["ssp"] = UBASE("US", "ssp", 1.232230398437500E-06, "m3", "L3", "1.0");
   liquid["schooner"] = UBASE("US", "schooner", 3.992426490937500E-04, "m3", "L3", "1.0");
   liquid["shot"] = UBASE("US", "shot", 2.957352956250000E-05, "m3", "L3", "1.0");
   liquid["snit"] = UBASE("US", "snit", 8.872058868750000E-05, "m3", "L3", "1.0");
   liquid["split"] = UBASE("US", "split", 1.892705892000000E-04, "m3", "L3", "1.0");
   liquid["tablespoon"] = UBASE("US", "tablespoon", 1.478676478125000E-05, "m3", "L3", "1.0");
   liquid["teacupful"] = UBASE("US", "teacupful", 1.478676478125000E-04, "m3", "L3", "1.0");
   liquid["teaspoon"] = UBASE("US", "teaspoon", 4.928921593750000E-06, "m3", "L3", "1.0");
   liquid["teaspoon(metric)"] = UBASE("US", "teaspoon(metric)", 5.000000000000000E-06, "m3", "L3", "1.0");
   liquid["tenth"] = UBASE("US", "tenth", 3.785411784000000E-04, "m3", "L3", "1.0");
   liquid["tertian"] = UBASE("US", "tertian", 3.179745898560000E-01, "m3", "L3", "1.0");
   liquid["tierce"] = UBASE("US", "tierce", 1.589872949280000E-01, "m3", "L3", "1.0");
   liquid["ton(seawater)"] = UBASE("US", "ton(seawater)", 9.910896307200000E-01, "m3", "L3", "1.0");
   liquid["tun"] = UBASE("US", "tun", 9.539237695680000E-01, "m3", "L3", "1.0");
   liquid["tun(wine)"] = UBASE("US", "tun(wine)", 9.539237695680000E-01, "m3", "L3", "1.0");
   liquid["turn"] = UBASE("US", "turn", 9.539237695680000E-01, "m3", "L3", "1.0");
   liquid["tu"] = UBASE("US", "tu", 9.539237695680000E-01, "m3", "L3", "1.0");
   liquid["glassful(water)"] = UBASE("US", "glassful(water)", 4.731764730000000E-04, "m3", "L3", "1.0");
   liquid["glassful(wine)"] = UBASE("US", "glassful(wine)", 7.393382390625000E-05, "m3", "L3", "1.0");
   dry["barrel(bulk)"] = UBASE("US", "barrel(bulk)", 1.415842329600000E-01, "m3", "L3", "1.0");
   dry["barrel(cranberry)"] = UBASE("US", "barrel(cranberry)", 9.547103486400000E-02, "m3", "L3", "1.0");
   dry["bbl(cranb)"] = UBASE("US", "bbl(cranb)", 9.547103486400000E-02, "m3", "L3", "1.0");
   dry["barrel(dry)"] = UBASE("US", "barrel(dry)", 1.156281989850750E-01, "m3", "L3", "1.0");
   dry["bbl(dry)"] = UBASE("US", "bbl(dry)", 1.156281989850750E-01, "m3", "L3", "1.0");
   dry["bushel"] = UBASE("US", "bushel", 3.523907016688000E-02, "m3", "L3", "1.0");
   dry["bu"] = UBASE("US", "bu", 3.523907016688000E-02, "m3", "L3", "1.0");
   dry["bushel(Winchester)"] = UBASE("US", "bushel(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0");
   dry["bu(Winchester)"] = UBASE("US", "bu(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0");
   dry["chaldron"] = UBASE("US", "chaldron", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["chopine"] = UBASE("US", "chopine", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["cord"] = UBASE("US", "cord", 3.624556363776000E+00, "m3", "L3", "1.0");
   dry["cd"] = UBASE("US", "cd", 3.624556363776000E+00, "m3", "L3", "1.0");
   dry["cubic-in"] = UBASE("US", "cubic-in", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["in3"] = UBASE("US", "in3", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cu-in"] = UBASE("US", "cu-in", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-inches"] = UBASE("US", "cubic-inches", 1.638706400000000E-05, "m3", "L3", "1.0");
   dry["cubic-foot"] = UBASE("US", "cubic-foot", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["ft3"] = UBASE("US", "ft3", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cu-ft"] = UBASE("US", "cu-ft", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-feet"] = UBASE("US", "cubic-feet", 2.831684659200000E-02, "m3", "L3", "1.0");
   dry["cubic-yard"] = UBASE("US", "cubic-yard", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["yd3"] = UBASE("US", "yd3", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cu-yd"] = UBASE("US", "cu-yd", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cubic-yards"] = UBASE("US", "cubic-yards", 7.645548579840000E-01, "m3", "L3", "1.0");
   dry["cubic-mile"] = UBASE("US", "cubic-mile", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["mi3"] = UBASE("US", "mi3", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cu-mi"] = UBASE("US", "cu-mi", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["cubic-miles"] = UBASE("US", "cubic-miles", 4.168181825440580E+09, "m3", "L3", "1.0");
   dry["deal"] = UBASE("US", "deal", 3.893566406400000E-02, "m3", "L3", "1.0");
   dry["dry-barrel"] = UBASE("US", "dry-barrel", 1.156281989850750E-01, "m3", "L3", "1.0");
   dry["dry-bbl"] = UBASE("US", "dry-bbl", 1.156281989850750E-01, "m3", "L3", "1.0");
   dry["dry-bushel(Winchester)"] = UBASE("US", "dry-bushel(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0");
   dry["dry-bu(Winchester)"] = UBASE("US", "dry-bu(Winchester)", 3.523907016688000E-02, "m3", "L3", "1.0");
   dry["dry-peck"] = UBASE("US", "dry-peck", 8.809767541720000E-03, "m3", "L3", "1.0");
   dry["pk(dry)"] = UBASE("US", "pk(dry)", 8.809767541720000E-03, "m3", "L3", "1.0");
   dry["dry-pint"] = UBASE("US", "dry-pint", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["pt(dry)"] = UBASE("US", "pt(dry)", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["dry-quart"] = UBASE("US", "dry-quart", 1.101220942715000E-03, "m3", "L3", "1.0");
   dry["qt(dry)"] = UBASE("US", "qt(dry)", 1.101220942715000E-03, "m3", "L3", "1.0");
   dry["face-chord"] = UBASE("US", "face-chord", 1.812278181888000E+00, "m3", "L3", "1.0");
   dry["faggot"] = UBASE("US", "faggot", 2.704059664735010E-02, "m3", "L3", "1.0");
   dry["fgt"] = UBASE("US", "fgt", 2.704059664735010E-02, "m3", "L3", "1.0");
   dry["fatt"] = UBASE("US", "fatt", 3.171516315019200E-01, "m3", "L3", "1.0");
   dry["firkin"] = UBASE("US", "firkin", 3.964395393774000E-02, "m3", "L3", "1.0");
   dry["gallon"] = UBASE("US", "gallon", 4.404883770860000E-03, "m3", "L3", "1.0");
   dry["gal"] = UBASE("US", "gal", 4.404883770860000E-03, "m3", "L3", "1.0");
   dry["gallons"] = UBASE("US", "gallons", 4.404883770860000E-03, "m3", "L3", "1.0");
   dry["house-cord"] = UBASE("US", "house-cord", 1.208185454592000E+00, "m3", "L3", "1.0");
   dry["load(squared)"] = UBASE("US", "load(squared)", 1.189307556864000E+00, "m3", "L3", "1.0");
   dry["load(unhewn)"] = UBASE("US", "load(unhewn)", 7.551159091200000E-01, "m3", "L3", "1.0");
   dry["marine-ton"] = UBASE("US", "marine-ton", 1.132673863680000E+00, "m3", "L3", "1.0");
   dry["peck"] = UBASE("US", "peck", 8.809767541720000E-03, "m3", "L3", "1.0");
   dry["pk"] = UBASE("US", "pk", 8.809767541720000E-03, "m3", "L3", "1.0");
   dry["pint"] = UBASE("US", "pint", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["pt"] = UBASE("US", "pt", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["pints"] = UBASE("US", "pints", 5.506104713575000E-04, "m3", "L3", "1.0");
   dry["quart"] = UBASE("US", "quart", 1.101220942715000E-03, "m3", "L3", "1.0");
   dry["qt"] = UBASE("US", "qt", 1.101220942715000E-03, "m3", "L3", "1.0");
   dry["quarts"] = UBASE("US", "quarts", 1.101220942715000E-03, "m3", "L3", "1.0");
   dry["rick"] = UBASE("US", "rick", 1.208185454592000E+00, "m3", "L3", "1.0");
   dry["split-deal"] = UBASE("US", "split-deal", 3.624556363776000E+00, "m3", "L3", "1.0");
   dry["standard"] = UBASE("US", "standard", 4.672279687680000E+00, "m3", "L3", "1.0");
   dry["ton(displacement)"] = UBASE("US", "ton(displacement)", 9.910896307200000E-01, "m3", "L3", "1.0");
   dry["whole-deal"] = UBASE("US", "whole-deal", 1.622319336000000E-02, "m3", "L3", "1.0");
   dry["winchester-bushel"] = UBASE("US", "winchester-bushel", 3.523907016688000E-02, "m3", "L3", "1.0");
   _map["US"] = BaseSystem("US", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit108(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["cuarta"] = UBASE("Venezuelan", "cuarta", 2.000000000000000E-01, "m", "L", "1.0");
   length["legua"] = UBASE("Venezuelan", "legua", 5.024000000000000E+03, "m", "L", "1.0");
   length["meile"] = UBASE("Venezuelan", "meile", 5.024000000000000E+03, "m", "L", "1.0");
   length["pie"] = UBASE("Venezuelan", "pie", 2.666666666666670E-01, "m", "L", "1.0");
   length["pulgada"] = UBASE("Venezuelan", "pulgada", 2.222222222222220E-02, "m", "L", "1.0");
   length["vara"] = UBASE("Venezuelan", "vara", 8.000000000000000E-01, "m", "L", "1.0");
   area["square-vara"] = UBASE("Venezuelan", "square-vara", 6.400000000000000E-01, "m2", "L2", "1.0");
   mass["arroba"] = UBASE("Venezuelan", "arroba", 1.250000000000000E+01, "kg", "M", "1.0");
   mass["bag"] = UBASE("Venezuelan", "bag", 6.250000000000000E+01, "kg", "M", "1.0");
   mass["carga"] = UBASE("Venezuelan", "carga", 1.250000000000000E+02, "kg", "M", "1.0");
   mass["libbra"] = UBASE("Venezuelan", "libbra", 5.000000000000000E-01, "kg", "M", "1.0");
   mass["onza"] = UBASE("Venezuelan", "onza", 3.125000000000000E-02, "kg", "M", "1.0");
   mass["quintal"] = UBASE("Venezuelan", "quintal", 5.000000000000000E+01, "kg", "M", "1.0");
   mass["saco"] = UBASE("Venezuelan", "saco", 6.250000000000000E+01, "kg", "M", "1.0");
   mass["tonelada"] = UBASE("Venezuelan", "tonelada", 1.000000000000000E+03, "kg", "M", "1.0");
   liquid["arroba"] = UBASE("Venezuelan", "arroba", 1.613700000000000E-02, "m3", "L3", "1.0");
   dry["cubic-vara"] = UBASE("Venezuelan", "cubic-vara", 5.120000000000000E-01, "m3", "L3", "1.0");
   _map["Venezuelan"] = BaseSystem("Venezuelan", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit109(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["byr-iau"] = UBASE("Welsh", "byr-iau", 1.219200000000000E+00, "m", "L", "1.0");
   length["cam"] = UBASE("Welsh", "cam", 2.743200000000000E+00, "m", "L", "1.0");
   length["cessel-yeu"] = UBASE("Welsh", "cessel-yeu", 3.657600000000000E+00, "m", "L", "1.0");
   length["eyl-yeu"] = UBASE("Welsh", "eyl-yeu", 2.438400000000000E+00, "m", "L", "1.0");
   length["gesseylyeu"] = UBASE("Welsh", "gesseylyeu", 3.657600000000000E+00, "m", "L", "1.0");
   length["gronyn-heyd"] = UBASE("Welsh", "gronyn-heyd", 8.466666666666670E-03, "m", "L", "1.0");
   length["gwialen"] = UBASE("Welsh", "gwialen", 4.876800000000000E+00, "m", "L", "1.0");
   length["gwyalen"] = UBASE("Welsh", "gwyalen", 4.876800000000000E+00, "m", "L", "1.0");
   length["hir-iau"] = UBASE("Welsh", "hir-iau", 4.876800000000000E+00, "m", "L", "1.0");
   length["hyryeu"] = UBASE("Welsh", "hyryeu", 4.876800000000000E+00, "m", "L", "1.0");
   length["leap"] = UBASE("Welsh", "leap", 2.057400000000000E+00, "m", "L", "1.0");
   length["milltir"] = UBASE("Welsh", "milltir", 8.229600000000000E+03, "m", "L", "1.0");
   length["modfedd"] = UBASE("Welsh", "modfedd", 7.620000000000000E-02, "m", "L", "1.0");
   length["moduet"] = UBASE("Welsh", "moduet", 7.620000000000000E-02, "m", "L", "1.0");
   length["mylltyr"] = UBASE("Welsh", "mylltyr", 8.229600000000000E+03, "m", "L", "1.0");
   length["naid"] = UBASE("Welsh", "naid", 8.229600000000000E+00, "m", "L", "1.0");
   length["neyt"] = UBASE("Welsh", "neyt", 8.229600000000000E+00, "m", "L", "1.0");
   length["palf"] = UBASE("Welsh", "palf", 3.048000000000000E-01, "m", "L", "1.0");
   length["palyw"] = UBASE("Welsh", "palyw", 3.048000000000000E-01, "m", "L", "1.0");
   length["ridge"] = UBASE("Welsh", "ridge", 6.172200000000000E+00, "m", "L", "1.0");
   length["tir"] = UBASE("Welsh", "tir", 8.229600000000000E+03, "m", "L", "1.0");
   length["troedfedd"] = UBASE("Welsh", "troedfedd", 9.144000000000000E-01, "m", "L", "1.0");
   length["troetued"] = UBASE("Welsh", "troetued", 9.144000000000000E-01, "m", "L", "1.0");
   length["tyr"] = UBASE("Welsh", "tyr", 8.229600000000000E+03, "m", "L", "1.0");
   length["uerr-teu"] = UBASE("Welsh", "uerr-teu", 1.219200000000000E+00, "m", "L", "1.0");
   length["uerryeu"] = UBASE("Welsh", "uerryeu", 1.219200000000000E+00, "m", "L", "1.0");
   length["veieu"] = UBASE("Welsh", "veieu", 2.438400000000000E+00, "m", "L", "1.0");
   area["cwmwd(Venedotian)"] = UBASE("Welsh", "cwmwd(Venedotian)", 3.653096177664000E+07, "m2", "L2", "1.0");
   area["ero(Venedotian)"] = UBASE("Welsh", "ero(Venedotian)", 5.707962777600000E+03, "m2", "L2", "1.0");
   area["erw(Dimetian)"] = UBASE("Welsh", "erw(Dimetian)", 8.561944166400000E+02, "m2", "L2", "1.0");
   area["erw(Venedotian)"] = UBASE("Welsh", "erw(Venedotian)", 1.426990694400000E+03, "m2", "L2", "1.0");
   area["free-town(Dimetian)"] = UBASE("Welsh", "free-town(Dimetian)", 8.904421933056000E+04, "m2", "L2", "1.0");
   area["gafael(Venedotian)"] = UBASE("Welsh", "gafael(Venedotian)", 3.653096177664000E+05, "m2", "L2", "1.0");
   area["gauael(Venedotian)"] = UBASE("Welsh", "gauael(Venedotian)", 3.653096177664000E+05, "m2", "L2", "1.0");
   area["kymut(Venedotian)"] = UBASE("Welsh", "kymut(Venedotian)", 3.653096177664000E+07, "m2", "L2", "1.0");
   area["lowland-manor"] = UBASE("Welsh", "lowland-manor", 8.013979739750400E+05, "m2", "L2", "1.0");
   area["maenaor-vro"] = UBASE("Welsh", "maenaor-vro", 8.013979739750400E+05, "m2", "L2", "1.0");
   area["maenaor-vrthtir"] = UBASE("Welsh", "maenaor-vrthtir", 1.068530631966720E+06, "m2", "L2", "1.0");
   area["maenaor-vwrthdir"] = UBASE("Welsh", "maenaor-vwrthdir", 1.068530631966720E+06, "m2", "L2", "1.0");
   area["maenor(Venedotian)"] = UBASE("Welsh", "maenor(Venedotian)", 1.826548088832000E+07, "m2", "L2", "1.0");
   area["maynaul(Venedotian)"] = UBASE("Welsh", "maynaul(Venedotian)", 1.826548088832000E+07, "m2", "L2", "1.0");
   area["randyr(Venedotian)"] = UBASE("Welsh", "randyr(Venedotian)", 9.132740444160000E+04, "m2", "L2", "1.0");
   area["rhandir(Venedotian)"] = UBASE("Welsh", "rhandir(Venedotian)", 9.132740444160000E+04, "m2", "L2", "1.0");
   area["serf-town"] = UBASE("Welsh", "serf-town", 6.678316449792000E+04, "m2", "L2", "1.0");
   area["shareland"] = UBASE("Welsh", "shareland", 2.226105483264000E+04, "m2", "L2", "1.0");
   area["stang"] = UBASE("Welsh", "stang", 2.709052646400000E+03, "m2", "L2", "1.0");
   area["taeogtref"] = UBASE("Welsh", "taeogtref", 8.013979739750400E+05, "m2", "L2", "1.0");
   area["tref"] = UBASE("Welsh", "tref", 1.461238471065600E+06, "m2", "L2", "1.0");
   area["tref-rhydd"] = UBASE("Welsh", "tref-rhydd", 1.068530631966720E+06, "m2", "L2", "1.0");
   area["tref-ryd"] = UBASE("Welsh", "tref-ryd", 1.068530631966720E+06, "m2", "L2", "1.0");
   area["trew"] = UBASE("Welsh", "trew", 1.461238471065600E+06, "m2", "L2", "1.0");
   area["tyddyn"] = UBASE("Welsh", "tyddyn", 2.283185111040000E+04, "m2", "L2", "1.0");
   area["tydyn"] = UBASE("Welsh", "tydyn", 2.283185111040000E+04, "m2", "L2", "1.0");
   area["upland-manor"] = UBASE("Welsh", "upland-manor", 1.068530631966720E+06, "m2", "L2", "1.0");
   mass["pwys"] = UBASE("Welsh", "pwys", 4.535923380000000E-01, "kg", "M", "1.0");
   liquid["hewstawr"] = UBASE("Welsh", "hewstawr", 7.047814033376000E-02, "m3", "L3", "1.0");
   dry["cubic-palf"] = UBASE("Welsh", "cubic-palf", 2.831684659200000E-02, "m3", "L3", "1.0");
   _map["Welsh"] = BaseSystem("Welsh", length, area, mass, liquid, dry, "1.0");

}




void GLOBAL_UNITS::unit110(void)
{
   std::map<std::string, UBASE> length;
   std::map<std::string, UBASE> area;
   std::map<std::string, UBASE> mass;
   std::map<std::string, UBASE> liquid;
   std::map<std::string, UBASE> dry;

   length["archine"] = UBASE("Yugoslavian", "archine", 7.110000000000000E-01, "m", "L", "1.0");
   length["kvat"] = UBASE("Yugoslavian", "kvat", 1.896000000000000E+00, "m", "L", "1.0");
   length["linia"] = UBASE("Yugoslavian", "linia", 2.179310344827590E-03, "m", "L", "1.0");
   length["palaz"] = UBASE("Yugoslavian", "palaz", 3.632183908045980E-02, "m", "L", "1.0");
   length["stopa"] = UBASE("Yugoslavian", "stopa", 3.160000000000000E-01, "m", "L", "1.0");
   area["danoranja"] = UBASE("Yugoslavian", "danoranja", 3.591820320000000E+03, "m2", "L2", "1.0");
   area["donum"] = UBASE("Yugoslavian", "donum", 6.989920000000000E+02, "m2", "L2", "1.0");
   area["dunum"] = UBASE("Yugoslavian", "dunum", 6.989920000000000E+02, "m2", "L2", "1.0");
   area["lanatz"] = UBASE("Yugoslavian", "lanatz", 5.751705600000000E+03, "m2", "L2", "1.0");
   area["motyka"] = UBASE("Yugoslavian", "motyka", 7.988480000000000E+02, "m2", "L2", "1.0");
   area["raliza"] = UBASE("Yugoslavian", "raliza", 2.496400000000000E+03, "m2", "L2", "1.0");
   area["square-kvat"] = UBASE("Yugoslavian", "square-kvat", 3.594816000000000E+00, "m2", "L2", "1.0");
   area["square-stopa"] = UBASE("Yugoslavian", "square-stopa", 9.985600000000000E-02, "m2", "L2", "1.0");
   mass["akov"] = UBASE("Yugoslavian", "akov", 5.120000000000000E+01, "kg", "M", "1.0");
   mass["drachm"] = UBASE("Yugoslavian", "drachm", 3.200000000000000E-03, "kg", "M", "1.0");
   mass["dramm"] = UBASE("Yugoslavian", "dramm", 3.200000000000000E-03, "kg", "M", "1.0");
   mass["litra"] = UBASE("Yugoslavian", "litra", 3.200000000000000E-01, "kg", "M", "1.0");
   mass["oka"] = UBASE("Yugoslavian", "oka", 1.280000000000000E+00, "kg", "M", "1.0");
   mass["tovar"] = UBASE("Yugoslavian", "tovar", 1.280000000000000E+02, "kg", "M", "1.0");
   liquid["satlijk"] = UBASE("Yugoslavian", "satlijk", 3.200000000000000E-01, "m3", "L3", "1.0");
   dry["cubic-stopa"] = UBASE("Yugoslavian", "cubic-stopa", 3.155449600000000E-02, "m3", "L3", "1.0");
   _map["Yugoslavian"] = BaseSystem("Yugoslavian", length, area, mass, liquid, dry, "1.0");

}




GLOBAL_UNITS::GLOBAL_UNITS(void) : CanonicalSystem("GLOBAL_UNITS")
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

// EOF
