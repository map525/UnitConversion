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
// File Energy.cpp
//
// Units for Energy
//
// Class for Energy units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Energy.hpp"

Energy& Energy::Instance(void)
{
    static Energy singleton;
    return singleton;
}

Energy::Energy(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["a.u.[au-of-energy]"] = UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["a.u.[Eh]"] = UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["a.u.[aue]"] = UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[barrel-oil-equivalent]"] = UBASE("US", "barrel-oil-equivalent", 6.119790000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[bboe]"] = UBASE("US", "bboe", 6.119790000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[BeV]"] = UBASE("US", "BeV", 1.602176634000000E-10, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[board-of-trade-unit]"] = UBASE("Imperial", "board-of-trade-unit", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(15.56oC)]"] = UBASE("UK", "british-thermal-unit(15.56oC)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(15.56oC)]"] = UBASE("UK", "british-thermal-unit(15.56oC)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(39oF)]"] = UBASE("UK", "british-thermal-unit(39oF)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(39oF)]"] = UBASE("UK", "british-thermal-unit(39oF)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(4oC)]"] = UBASE("UK", "british-thermal-unit(4oC)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(4oC)]"] = UBASE("UK", "british-thermal-unit(4oC)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[british=thermal-unit(59oF)]"] = UBASE("US", "british=thermal-unit(59oF)", 1.054804000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[Btu(59oF)]"] = UBASE("US", "british=thermal-unit(59oF)", 1.054804000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit-(60oF)]"] = UBASE("UK", "british-thermal-unit-(60oF)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(60oF)]"] = UBASE("UK", "british-thermal-unit-(60oF)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(Gas)]"] = UBASE("UK", "british-thermal-unit(Gas)", 1.054760000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(Gas)]"] = UBASE("UK", "british-thermal-unit(Gas)", 1.054760000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(GIA)]"] = UBASE("UK", "british-thermal-unit(GIA)", 1.054615000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(GIA)]"] = UBASE("UK", "british-thermal-unit(GIA)", 1.054615000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(ISO)]"] = UBASE("UK", "british-thermal-unit(ISO)", 1.055060000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(ISO)]"] = UBASE("UK", "british-thermal-unit(ISO)", 1.055060000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(IT)]"] = UBASE("UK", "british-thermal-unit(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(IT)]"] = UBASE("UK", "british-thermal-unit(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[british-thermal-unit(mean)]"] = UBASE("FPS", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[Btu(mean)]"] = UBASE("FPS", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(mean)]"] = UBASE("UK", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(mean)]"] = UBASE("UK", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[british-thermal-unit(therm)]"] = UBASE("UK", "british-thermal-unit(therm)", 1.054350264488890E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[Btu(threm)]"] = UBASE("UK", "british-thermal-unit(therm)", 1.054350264488890E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[calorie]"] = UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[Cal]"] = UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kcal]"] = UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[calorie(15oC)]"] = UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[cal(15oC)]"] = UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[calorie(20oC)]"] = UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[cal(20oC)]"] = UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[calorie(4oC)]"] = UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[cal(4oC)]"] = UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[calorie(IT)]"] = UBASE("INT", "calorie(IT)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[cal(IT)]"] = UBASE("INT", "calorie(IT)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[calorie(mean)]"] = UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[cal(mean)]"] = UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[calorie(therm)]"] = UBASE("US", "calorie(therm)", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[cal(therm)]"] = UBASE("US", "calorie(therm)", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[celsius-heat-unit]"] = UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[Chu]"] = UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[chu]"] = UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[CHU]"] = UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[centigrade-heat-unit]"] = UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[cthu]"] = UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[Cthu]"] = UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[centigrade-heat-unit(15oC)]"] = UBASE("Imperial", "centigrade-heat-unit(15oC)", 1.899100000000000E+30, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[chu(15oC)]"] = UBASE("Imperial", "centigrade-heat-unit(15oC)", 1.899100000000000E+30, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[duty]"] = UBASE("FPS", "duty", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[duty]"] = UBASE("UK", "duty", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["cgs[dyne-centimeter]"] = UBASE("cgs", "dyne-centimeter", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["cgs[dyn-cm]"] = UBASE("cgs", "dyne-centimeter", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[electronvolt]"] = UBASE("Scientific", "electronvolt", 1.602176634000000E-19, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[eV]"] = UBASE("Scientific", "electronvolt", 1.602176634000000E-19, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["cgs[erg]"] = UBASE("cgs", "erg", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[foot-pound-force]"] = UBASE("FPS", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[ft-lbf]"] = UBASE("FPS", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[foot-poundal]"] = UBASE("FPS", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["FPS[ft-pdl]"] = UBASE("FPS", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[foot-poundal]"] = UBASE("UK", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[ft-pdl]"] = UBASE("UK", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[foot-pound-force]"] = UBASE("UK", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[ft-lbf]"] = UBASE("UK", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[frigorie]"] = UBASE("Scientific", "frigorie", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[fg]"] = UBASE("Scientific", "frigorie", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["a.u.[hartree]"] = UBASE("a.u.", "hartree", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[joule]"] = UBASE("INT", "joule", 1.000165000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[J]"] = UBASE("INT", "joule", 1.000165000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[joule]"] = UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[J]"] = UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["UK[kelvin]"] = UBASE("UK", "kelvin", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kilocalorie(15oC)]"] = UBASE("Scientific", "kilocalorie(15oC)", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kcal(15oC)]"] = UBASE("Scientific", "kilocalorie(15oC)", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kilocalorie(20oC)]"] = UBASE("Scientific", "kilocalorie(20oC)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kcal(20oC)]"] = UBASE("Scientific", "kilocalorie(20oC)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kilocalorie(4oC)]"] = UBASE("Scientific", "kilocalorie(4oC)", 4.204500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kcal(4oC)]"] = UBASE("Scientific", "kilocalorie(4oC)", 4.204500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[kilocalorie(IT)]"] = UBASE("INT", "kilocalorie(IT)", 4.186800000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[kcal(IT)]"] = UBASE("INT", "kilocalorie(IT)", 4.186800000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kilocalorie(mean)]"] = UBASE("Scientific", "kilocalorie(mean)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kcal(mean)]"] = UBASE("Scientific", "kilocalorie(mean)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[kilocalorie(therm)]"] = UBASE("US", "kilocalorie(therm)", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[kcal(therm)]"] = UBASE("US", "kilocalorie(therm)", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kilogram-calorie]"] = UBASE("Scientific", "kilogram-calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kgCal]"] = UBASE("Scientific", "kilogram-calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["MKpS[kilogram-force-meter]"] = UBASE("MKpS", "kilogram-force-meter", 9.806650000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["MKpS[kgfm]"] = UBASE("MKpS", "kilogram-force-meter", 9.806650000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kiloton-equivalent(TNT)]"] = UBASE("Scientific", "kiloton-equivalent(TNT)", 4.184000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kt(TNT)]"] = UBASE("Scientific", "kiloton-equivalent(TNT)", 4.184000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kilowatt-hour]"] = UBASE("Scientific", "kilowatt-hour", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[kWhr]"] = UBASE("Scientific", "kilowatt-hour", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[liter-atmosphere]"] = UBASE("Scientific", "liter-atmosphere", 1.013250000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[latm]"] = UBASE("Scientific", "liter-atmosphere", 1.013250000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[megatonne-equivalent(TNT)]"] = UBASE("Scientific", "megatonne-equivalent(TNT)", 4.184000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[Mt(TNT)]"] = UBASE("Scientific", "megatonne-equivalent(TNT)", 4.184000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[micri-erg]"] = UBASE("Scientific", "micri-erg", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[newton-meter]"] = UBASE("SI", "newton-meter", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[N-m]"] = UBASE("SI", "newton-meter", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[pound-centigrade-unit]"] = UBASE("Imperial", "pound-centigrade-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[pcu]"] = UBASE("Imperial", "pound-centigrade-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[prout]"] = UBASE("Scientific", "prout", 2.963890010000000E-14, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[Q-unit]"] = UBASE("US", "Q-unit", 1.055055852620000E+21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[quad]"] = UBASE("US", "quad", 1.055055852620000E+18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[quadrillion(Btu)]"] = UBASE("US", "quadrillion(Btu)", 1.055055852620000E+18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[rydberg]"] = UBASE("Scientific", "rydberg", 2.179872361086220E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[Ry]"] = UBASE("Scientific", "rydberg", 2.179872361086220E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Imperial[therm]"] = UBASE("Imperial", "therm", 1.055055852620000E+08, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["US[therm]"] = UBASE("US", "therm", 1.054804000000000E+08, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[thermie(15oC)]"] = UBASE("Scientific", "thermie(15oC)", 4.185500000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["Scientific[th(15oC)]"] = UBASE("Scientific", "thermie(15oC)", 4.185500000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[tonne-coal-equivalent]"] = UBASE("INT", "tonne-coal-equivalent", 2.928800000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[tce]"] = UBASE("INT", "tonne-coal-equivalent", 2.928800000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[tonne-oil-equivalent]"] = UBASE("INT", "tonne-oil-equivalent", 4.184000000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["INT[toe]"] = UBASE("INT", "tonne-oil-equivalent", 4.184000000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[yottajoule]"] = UBASE("SI", "yottajoule", 1.000000000000000E+24, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[YJ]"] = UBASE("SI", "yottajoule", 1.000000000000000E+24, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[zettajoule]"] = UBASE("SI", "zettajoule", 1.000000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[ZJ]"] = UBASE("SI", "zettajoule", 1.000000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[exacjoule]"] = UBASE("SI", "exacjoule", 1.000000000000000E+18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[EJ]"] = UBASE("SI", "exacjoule", 1.000000000000000E+18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[petajoule]"] = UBASE("SI", "petajoule", 1.000000000000000E+15, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[PJ]"] = UBASE("SI", "petajoule", 1.000000000000000E+15, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[terajoule]"] = UBASE("SI", "terajoule", 1.000000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[TJ]"] = UBASE("SI", "terajoule", 1.000000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[gigajoule]"] = UBASE("SI", "gigajoule", 1.000000000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[GJ]"] = UBASE("SI", "gigajoule", 1.000000000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[megajoule]"] = UBASE("SI", "megajoule", 1.000000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[MJ]"] = UBASE("SI", "megajoule", 1.000000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[kilojoule]"] = UBASE("SI", "kilojoule", 1.000000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[kJ]"] = UBASE("SI", "kilojoule", 1.000000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[hectojoule]"] = UBASE("SI", "hectojoule", 1.000000000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[hJ]"] = UBASE("SI", "hectojoule", 1.000000000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[decajoule]"] = UBASE("SI", "decajoule", 1.000000000000000E+01, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[daJ]"] = UBASE("SI", "decajoule", 1.000000000000000E+01, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[decijoule]"] = UBASE("SI", "decijoule", 1.000000000000000E-01, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[dJ]"] = UBASE("SI", "decijoule", 1.000000000000000E-01, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[centijoule]"] = UBASE("SI", "centijoule", 1.000000000000000E-02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[cJ]"] = UBASE("SI", "centijoule", 1.000000000000000E-02, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[millijoule]"] = UBASE("SI", "millijoule", 1.000000000000000E-03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[mJ]"] = UBASE("SI", "millijoule", 1.000000000000000E-03, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[microjoule]"] = UBASE("SI", "microjoule", 1.000000000000000E-06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[uJ]"] = UBASE("SI", "microjoule", 1.000000000000000E-06, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[nanojoule]"] = UBASE("SI", "nanojoule", 1.000000000000000E-09, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[nJ]"] = UBASE("SI", "nanojoule", 1.000000000000000E-09, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[picojoule]"] = UBASE("SI", "picojoule", 1.000000000000000E-12, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[pJ]"] = UBASE("SI", "picojoule", 1.000000000000000E-12, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[femtojoule]"] = UBASE("SI", "femtojoule", 1.000000000000000E-15, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[fJ]"] = UBASE("SI", "femtojoule", 1.000000000000000E-15, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[attojoule]"] = UBASE("SI", "attojoule", 1.000000000000000E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[aJ]"] = UBASE("SI", "attojoule", 1.000000000000000E-18, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[zeptojoule]"] = UBASE("SI", "zeptojoule", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[zv]"] = UBASE("SI", "zeptojoule", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[yoctojoule]"] = UBASE("SI", "yoctojoule", 1.000000000000000E-24, "kg.m2/s2", "M.L2/T2", "1.0");
   unit["SI[yJ]"] = UBASE("SI", "yoctojoule", 1.000000000000000E-24, "kg.m2/s2", "M.L2/T2", "1.0");
   _map["energy"] = BaseSystem("energy", unit, "1.0");

   unit.clear();


   unit["Imperial[britishthermalunit(IT)-per-hour-per-square-foot]"] = UBASE("Imperial", "britishthermalunit(IT)-per-hour-per-square-foot", 3.154590745063050E+00, "kg/s3", "M/T3", "1.0");
   unit["Imperial[Btu(IT)/hr-ft]"] = UBASE("Imperial", "britishthermalunit(IT)-per-hour-per-square-foot", 3.154590745063050E+00, "kg/s3", "M/T3", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-hour-per-square-foot]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-hour-per-square-foot", 3.152481054109060E+00, "kg/s3", "M/T3", "1.0");
   unit["Imperial[Btu(therm)/hr-ft2]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-hour-per-square-foot", 3.152481054109060E+00, "kg/s3", "M/T3", "1.0");
   unit["Scientific[finsen-unit]"] = UBASE("Scientific", "finsen-unit", 1.000000000000000E-05, "kg/s3", "M/T3", "1.0");
   unit["Scientific[FU]"] = UBASE("Scientific", "finsen-unit", 1.000000000000000E-05, "kg/s3", "M/T3", "1.0");
   unit["US[gurley-unit]"] = UBASE("US", "gurley-unit", 1.529734122878070E-06, "kg/s3", "M/T3", "1.0");
   unit["Scientific[heat-flux-unit]"] = UBASE("Scientific", "heat-flux-unit", 4.185500000000000E-02, "kg/s3", "M/T3", "1.0");
   unit["Scientific[HFU]"] = UBASE("Scientific", "heat-flux-unit", 4.185500000000000E-02, "kg/s3", "M/T3", "1.0");
   unit["Scientific[langley]"] = UBASE("Scientific", "langley", 6.975833333333330E+02, "kg/s3", "M/T3", "1.0");
   unit["Scientific[met]"] = UBASE("Scientific", "met", 5.815000000000000E+01, "kg/s3", "M/T3", "1.0");
   unit["Scientific[pyron]"] = UBASE("Scientific", "pyron", 6.975833333333330E+02, "kg/s3", "M/T3", "1.0");
   unit["SI[watt-per-square-meter]"] = UBASE("SI", "watt-per-square-meter", 1.000000000000000E+00, "kg/s3", "M/T3", "1.0");
   unit["SI[W/m2]"] = UBASE("SI", "watt-per-square-meter", 1.000000000000000E+00, "kg/s3", "M/T3", "1.0");
   _map["heatFlux"] = BaseSystem("heatFlux", unit, "1.0");

   unit.clear();


   unit["SI[thermal-ampere]"] = UBASE("SI", "thermal-ampere", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0");
   unit["SI[watt-per-per-kelvin]"] = UBASE("SI", "watt-per-per-kelvin", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0");
   unit["SI[W/K]"] = UBASE("SI", "watt-per-per-kelvin", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0");
   _map["thermalConductance"] = BaseSystem("thermalConductance", unit, "1.0");

   unit.clear();


   unit["Imperial[british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0");
   unit["Imperial[Btu(IT)/hr-ft2-oF]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree", 5.674465897396300E+00, "kg/s3.K", "M/T3.Q", "1.0");
   unit["Imperial[Btu(therm)/hr-ft2-oF]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree", 5.674465897396300E+00, "kg/s3.K", "M/T3.Q", "1.0");
   unit["Imperial[USI]"] = UBASE("Imperial", "USI", 1.000000000000000E+00, "kg/s3.K", "M/T3.Q", "1.0");
   unit["UK[U-factor]"] = UBASE("UK", "U-factor", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0");
   _map["heatTransfer"] = BaseSystem("heatTransfer", unit, "1.0");

   unit.clear();


   unit["Imperial[british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.442278888642830E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(IT)-in/hr-ft2-oF]"] = UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.442278888642830E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.192203999114170E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(IT)-in/sec-ft2-oF]"] = UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.192203999114170E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree", 1.730734666371390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(IT)/hr-ft-oF]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree", 1.730734666371390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree", 2.076881599645670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(IT)/hr-in-oF]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree", 2.076881599645670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.441314337938660E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(therm)-in/hr-ft2-oF]"] = UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.441314337938660E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.188731616579180E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(therm)-in/sec-ft2-oF]"] = UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.188731616579180E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree", 1.729577205526390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(term)/ft-hr-oF]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree", 1.729577205526390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree", 2.075492646631670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Imperial[Btu(term)/in-hr-oF]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree", 2.075492646631670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Scientific[calorie(IT)-per-centimeter-per-second-per-degree-celsius]"] = UBASE("Scientific", "calorie(IT)-per-centimeter-per-second-per-degree-celsius", 4.186800000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Scientific[cal(IT)/cm-sec-oC]"] = UBASE("Scientific", "calorie(IT)-per-centimeter-per-second-per-degree-celsius", 4.186800000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Scientific[calorie(therm)-per-centimeter-per-second-per-degree-celsius]"] = UBASE("Scientific", "calorie(therm)-per-centimeter-per-second-per-degree-celsius", 4.184000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["Scientific[cal(therm)/cm-sec-oC]"] = UBASE("Scientific", "calorie(therm)-per-centimeter-per-second-per-degree-celsius", 4.184000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["cgs[fourier]"] = UBASE("cgs", "fourier", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[joule-per-second-per-centimeter-per-kelvin]"] = UBASE("SI", "joule-per-second-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[J/s-cm-K]"] = UBASE("SI", "joule-per-second-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[joule-per-second-per-meter-per-kelvin]"] = UBASE("SI", "joule-per-second-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[J/s-m-K]"] = UBASE("SI", "joule-per-second-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["cgs[watt-per-centimeter-per-celsius-degree]"] = UBASE("cgs", "watt-per-centimeter-per-celsius-degree", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["cgs[W/cm-oC]"] = UBASE("cgs", "watt-per-centimeter-per-celsius-degree", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[watt-per-centimeter-per-kelvin]"] = UBASE("SI", "watt-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[W/cm-K]"] = UBASE("SI", "watt-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[watt-per-meter-per-kelvin]"] = UBASE("SI", "watt-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   unit["SI[W/m-K]"] = UBASE("SI", "watt-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0");
   _map["thermalConductivity"] = BaseSystem("thermalConductivity", unit, "1.0");

   unit.clear();


   unit["cgs[dyne-per-centimeter]"] = UBASE("cgs", "dyne-per-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0");
   unit["cgs[dyn/cm]"] = UBASE("cgs", "dyne-per-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0");
   unit["cgs[erg-per-square-centimeter]"] = UBASE("cgs", "erg-per-square-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0");
   unit["cgs[erg/cm2]"] = UBASE("cgs", "erg-per-square-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0");
   unit["Imperial[langley]"] = UBASE("Imperial", "langley", 4.185500000000000E+04, "kg/s2", "M/T2", "1.0");
   unit["INT[langley]"] = UBASE("INT", "langley", 4.185500000000000E+04, "kg/s2", "M/T2", "1.0");
   unit["Scientific[flux-unit]"] = UBASE("Scientific", "flux-unit", 1.000000000000000E-26, "kg/s2", "M/T2", "1.0");
   unit["Scientific[fu]"] = UBASE("Scientific", "flux-unit", 1.000000000000000E-26, "kg/s2", "M/T2", "1.0");
   unit["SI[joule-per-square-meter]"] = UBASE("SI", "joule-per-square-meter", 1.000000000000000E+00, "kg/s2", "M/T2", "1.0");
   unit["SI[J/m2]"] = UBASE("SI", "joule-per-square-meter", 1.000000000000000E+00, "kg/s2", "M/T2", "1.0");
   _map["radiantEnergy"] = BaseSystem("radiantEnergy", unit, "1.0");

   unit.clear();


   unit["Imperial[british-thermal-unit(IT)-per-fahrenheit-degree]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-fahrenheit-degree", 1.899100534716000E+03, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["Imperial[Btu(IT)/oF]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-fahrenheit-degree", 1.899100534716000E+03, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["Scientific[carnot]"] = UBASE("Scientific", "carnot", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["Scientific[clausius(rank)]"] = UBASE("Scientific", "clausius(rank)", 4.186800000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["Scientific[Cl]"] = UBASE("Scientific", "clausius(rank)", 4.186800000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["SI[coulomb(thermal)]"] = UBASE("SI", "coulomb(thermal)", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["SI[C/K]"] = UBASE("SI", "coulomb(thermal)", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["SI[joule-per-kelvin]"] = UBASE("SI", "joule-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   unit["SI[J/K]"] = UBASE("SI", "joule-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0");
   _map["entropy"] = BaseSystem("entropy", unit, "1.0");

   unit.clear();


   unit["Scientific[entropy-unit]"] = UBASE("Scientific", "entropy-unit", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0");
   unit["Scientific[eu]"] = UBASE("Scientific", "entropy-unit", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0");
   unit["Scientific[unit-of-entropy]"] = UBASE("Scientific", "unit-of-entropy", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0");
   unit["Scientific[ue]"] = UBASE("Scientific", "unit-of-entropy", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0");
   unit["SI[joule-per-mole-per-kelvin]"] = UBASE("SI", "joule-per-mole-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0");
   unit["SI[J/mol-K]"] = UBASE("SI", "joule-per-mole-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0");
   _map["molarEntropy"] = BaseSystem("molarEntropy", unit, "1.0");

   unit.clear();


   unit["Imperial[R-value]"] = UBASE("Imperial", "R-value", 1.761101836823060E-01, "s3.K/kg", "T3.Q/M", "1.0");
   unit["UK[clo]"] = UBASE("UK", "clo", 1.548202126388720E-01, "s3.K/kg", "T3.Q/M", "1.0");
   unit["UK[tog]"] = UBASE("UK", "tog", 1.000000000000000E-01, "s3.K/kg", "T3.Q/M", "1.0");
   _map["heatInsulation"] = BaseSystem("heatInsulation", unit, "1.0");

   unit.clear();


   unit["cgs[brewster]"] = UBASE("cgs", "brewster", 1.000000000000000E-12, "m.s2/kg", "L.T2/M", "1.0");
   unit["cgs[B]"] = UBASE("cgs", "brewster", 1.000000000000000E-12, "m.s2/kg", "L.T2/M", "1.0");
   unit["US[energy-factor(clothes-washers)]"] = UBASE("US", "energy-factor(clothes-washers)", 7.865790720000000E-09, "m.s2/kg", "L.T2/M", "1.0");
   unit["US[EF]"] = UBASE("US", "energy-factor(clothes-washers)", 7.865790720000000E-09, "m.s2/kg", "L.T2/M", "1.0");
   unit["US[gallon-per-hour-horsepower]"] = UBASE("US", "gallon-per-hour-horsepower", 1.410089116821480E-09, "m.s2/kg", "L.T2/M", "1.0");
   unit["US[gal/hr-HP]"] = UBASE("US", "gallon-per-hour-horsepower", 1.410089116821480E-09, "m.s2/kg", "L.T2/M", "1.0");
   _map["energyConsumption"] = BaseSystem("energyConsumption", unit, "1.0");

   unit.clear();


   unit["Scientific[mayer]"] = UBASE("Scientific", "mayer", 1.000000000000000E-03, "m2/s2.K", "L2/T2.Q", "1.0");
   unit["UK[british-thermal-unit(IT)-per-pound-fahrenheit-degree]"] = UBASE("UK", "british-thermal-unit(IT)-per-pound-fahrenheit-degree", 4.186800000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0");
   unit["UK[Btu(IT)/lb-oF]"] = UBASE("UK", "british-thermal-unit(IT)-per-pound-fahrenheit-degree", 4.186800000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0");
   unit["UK[british-thermal-unit(therm)-per-pound-fahrenheit-degree]"] = UBASE("UK", "british-thermal-unit(therm)-per-pound-fahrenheit-degree", 4.184000000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0");
   unit["UK[Btu(threm)/lb-oF]"] = UBASE("UK", "british-thermal-unit(therm)-per-pound-fahrenheit-degree", 4.184000000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0");
   _map["specificHeatCapacity"] = BaseSystem("specificHeatCapacity", unit, "1.0");

   unit.clear();


   unit["Scientific[calorie(therm)-per-gram]"] = UBASE("Scientific", "calorie(therm)-per-gram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(therm)/g]"] = UBASE("Scientific", "calorie(therm)-per-gram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(therm)-per-kilogram]"] = UBASE("Scientific", "calorie(therm)-per-kilogram", 4.184000000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(therm)/kg]"] = UBASE("Scientific", "calorie(therm)-per-kilogram", 4.184000000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(IT)-per-gram]"] = UBASE("Scientific", "calorie(IT)-per-gram", 4.186800000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(IT)/g]"] = UBASE("Scientific", "calorie(IT)-per-gram", 4.186800000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(IT)-per-kilogram]"] = UBASE("Scientific", "calorie(IT)-per-kilogram", 4.186800000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(IT)/kg]"] = UBASE("Scientific", "calorie(IT)-per-kilogram", 4.186800000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(mean)-per-gram]"] = UBASE("Scientific", "calorie(mean)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(mean)/g]"] = UBASE("Scientific", "calorie(mean)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(mean)-per-kilogram]"] = UBASE("Scientific", "calorie(mean)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(mean)/kg]"] = UBASE("Scientific", "calorie(mean)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie-per-kilogram]"] = UBASE("Scientific", "calorie-per-kilogram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal/kg]"] = UBASE("Scientific", "calorie-per-kilogram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(15oC)-per-kilogram]"] = UBASE("Scientific", "calorie(15oC)-per-kilogram", 4.185500000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(15oC)/kg]"] = UBASE("Scientific", "calorie(15oC)-per-kilogram", 4.185500000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(20oC)-per-kilogram]"] = UBASE("Scientific", "calorie(20oC)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(20oC)/kg]"] = UBASE("Scientific", "calorie(20oC)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(4oC)-per-kilogram]"] = UBASE("Scientific", "calorie(4oC)-per-kilogram", 4.204500000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(4oC)/kg]"] = UBASE("Scientific", "calorie(4oC)-per-kilogram", 4.204500000000000E+00, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie-per-gram]"] = UBASE("Scientific", "calorie-per-gram", 4.184000000000000E+06, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal/g]"] = UBASE("Scientific", "calorie-per-gram", 4.184000000000000E+06, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(15oC)-per-gram]"] = UBASE("Scientific", "calorie(15oC)-per-gram", 4.185500000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(15oC)/g]"] = UBASE("Scientific", "calorie(15oC)-per-gram", 4.185500000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(20oC)-per-gram]"] = UBASE("Scientific", "calorie(20oC)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(20oC)/g]"] = UBASE("Scientific", "calorie(20oC)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[calorie(4oC)-per-gram]"] = UBASE("Scientific", "calorie(4oC)-per-gram", 4.204500000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   unit["Scientific[cal(4oC)/g]"] = UBASE("Scientific", "calorie(4oC)-per-gram", 4.204500000000000E+03, "m/s3.K", "L/T3.Q", "1.0");
   _map["specificHeat"] = BaseSystem("specificHeat", unit, "1.0");

   unit.clear();


}

// EOF
