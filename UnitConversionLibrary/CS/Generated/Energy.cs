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
// File Energy.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class Energy : SingleSystem
   {
       private static Energy singleton_ = new Energy();

       public static Energy Instance()
       {
           return singleton_;
       }

       private Energy() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("a.u.[au-of-energy]",   new UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("a.u.[Eh]",   new UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("a.u.[aue]",   new UBASE("a.u.", "au-of-energy", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[barrel-oil-equivalent]",   new UBASE("US", "barrel-oil-equivalent", 6.119790000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[bboe]",   new UBASE("US", "bboe", 6.119790000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[BeV]",   new UBASE("US", "BeV", 1.602176634000000E-10, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[board-of-trade-unit]",   new UBASE("Imperial", "board-of-trade-unit", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(15.56oC)]",   new UBASE("UK", "british-thermal-unit(15.56oC)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(15.56oC)]",   new UBASE("UK", "british-thermal-unit(15.56oC)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(39oF)]",   new UBASE("UK", "british-thermal-unit(39oF)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(39oF)]",   new UBASE("UK", "british-thermal-unit(39oF)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(4oC)]",   new UBASE("UK", "british-thermal-unit(4oC)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(4oC)]",   new UBASE("UK", "british-thermal-unit(4oC)", 1.059670000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[british=thermal-unit(59oF)]",   new UBASE("US", "british=thermal-unit(59oF)", 1.054804000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[Btu(59oF)]",   new UBASE("US", "british=thermal-unit(59oF)", 1.054804000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit-(60oF)]",   new UBASE("UK", "british-thermal-unit-(60oF)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(60oF)]",   new UBASE("UK", "british-thermal-unit-(60oF)", 1.054678000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(Gas)]",   new UBASE("UK", "british-thermal-unit(Gas)", 1.054760000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(Gas)]",   new UBASE("UK", "british-thermal-unit(Gas)", 1.054760000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(GIA)]",   new UBASE("UK", "british-thermal-unit(GIA)", 1.054615000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(GIA)]",   new UBASE("UK", "british-thermal-unit(GIA)", 1.054615000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(ISO)]",   new UBASE("UK", "british-thermal-unit(ISO)", 1.055060000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(ISO)]",   new UBASE("UK", "british-thermal-unit(ISO)", 1.055060000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(IT)]",   new UBASE("UK", "british-thermal-unit(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(IT)]",   new UBASE("UK", "british-thermal-unit(IT)", 1.055055852620000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[british-thermal-unit(mean)]",   new UBASE("FPS", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[Btu(mean)]",   new UBASE("FPS", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(mean)]",   new UBASE("UK", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(mean)]",   new UBASE("UK", "british-thermal-unit(mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[british-thermal-unit(therm)]",   new UBASE("UK", "british-thermal-unit(therm)", 1.054350264488890E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[Btu(threm)]",   new UBASE("UK", "british-thermal-unit(therm)", 1.054350264488890E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[calorie]",   new UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[Cal]",   new UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kcal]",   new UBASE("Scientific", "calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[calorie(15oC)]",   new UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[cal(15oC)]",   new UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[calorie(20oC)]",   new UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[cal(20oC)]",   new UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[calorie(4oC)]",   new UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[cal(4oC)]",   new UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[calorie(IT)]",   new UBASE("INT", "calorie(IT)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[cal(IT)]",   new UBASE("INT", "calorie(IT)", 4.186800000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[calorie(mean)]",   new UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[cal(mean)]",   new UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[calorie(therm)]",   new UBASE("US", "calorie(therm)", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[cal(therm)]",   new UBASE("US", "calorie(therm)", 4.184000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[celsius-heat-unit]",   new UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[Chu]",   new UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[chu]",   new UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[CHU]",   new UBASE("Imperial", "celsius-heat-unit", 1.899100534716000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[centigrade-heat-unit]",   new UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[cthu]",   new UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[Cthu]",   new UBASE("Imperial", "centigrade-heat-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[centigrade-heat-unit(15oC)]",   new UBASE("Imperial", "centigrade-heat-unit(15oC)", 1.899100000000000E+30, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[chu(15oC)]",   new UBASE("Imperial", "centigrade-heat-unit(15oC)", 1.899100000000000E+30, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[duty]",   new UBASE("FPS", "duty", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[duty]",   new UBASE("UK", "duty", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("cgs[dyne-centimeter]",   new UBASE("cgs", "dyne-centimeter", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("cgs[dyn-cm]",   new UBASE("cgs", "dyne-centimeter", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[electronvolt]",   new UBASE("Scientific", "electronvolt", 1.602176634000000E-19, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[eV]",   new UBASE("Scientific", "electronvolt", 1.602176634000000E-19, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("cgs[erg]",   new UBASE("cgs", "erg", 1.000000000000000E-07, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[foot-pound-force]",   new UBASE("FPS", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[ft-lbf]",   new UBASE("FPS", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[foot-poundal]",   new UBASE("FPS", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("FPS[ft-pdl]",   new UBASE("FPS", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[foot-poundal]",   new UBASE("UK", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[ft-pdl]",   new UBASE("UK", "foot-poundal", 4.214011009380480E-02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[foot-pound-force]",   new UBASE("UK", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[ft-lbf]",   new UBASE("UK", "foot-pound-force", 1.355817948331400E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[frigorie]",   new UBASE("Scientific", "frigorie", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[fg]",   new UBASE("Scientific", "frigorie", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("a.u.[hartree]",   new UBASE("a.u.", "hartree", 4.359744722197860E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[joule]",   new UBASE("INT", "joule", 1.000165000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[J]",   new UBASE("INT", "joule", 1.000165000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[joule]",   new UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[J]",   new UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("UK[kelvin]",   new UBASE("UK", "kelvin", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kilocalorie(15oC)]",   new UBASE("Scientific", "kilocalorie(15oC)", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kcal(15oC)]",   new UBASE("Scientific", "kilocalorie(15oC)", 4.185500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kilocalorie(20oC)]",   new UBASE("Scientific", "kilocalorie(20oC)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kcal(20oC)]",   new UBASE("Scientific", "kilocalorie(20oC)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kilocalorie(4oC)]",   new UBASE("Scientific", "kilocalorie(4oC)", 4.204500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kcal(4oC)]",   new UBASE("Scientific", "kilocalorie(4oC)", 4.204500000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[kilocalorie(IT)]",   new UBASE("INT", "kilocalorie(IT)", 4.186800000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[kcal(IT)]",   new UBASE("INT", "kilocalorie(IT)", 4.186800000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kilocalorie(mean)]",   new UBASE("Scientific", "kilocalorie(mean)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kcal(mean)]",   new UBASE("Scientific", "kilocalorie(mean)", 4.190020000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[kilocalorie(therm)]",   new UBASE("US", "kilocalorie(therm)", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[kcal(therm)]",   new UBASE("US", "kilocalorie(therm)", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kilogram-calorie]",   new UBASE("Scientific", "kilogram-calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kgCal]",   new UBASE("Scientific", "kilogram-calorie", 4.184000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("MKpS[kilogram-force-meter]",   new UBASE("MKpS", "kilogram-force-meter", 9.806650000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("MKpS[kgfm]",   new UBASE("MKpS", "kilogram-force-meter", 9.806650000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kiloton-equivalent(TNT)]",   new UBASE("Scientific", "kiloton-equivalent(TNT)", 4.184000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kt(TNT)]",   new UBASE("Scientific", "kiloton-equivalent(TNT)", 4.184000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kilowatt-hour]",   new UBASE("Scientific", "kilowatt-hour", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[kWhr]",   new UBASE("Scientific", "kilowatt-hour", 3.600000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[liter-atmosphere]",   new UBASE("Scientific", "liter-atmosphere", 1.013250000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[latm]",   new UBASE("Scientific", "liter-atmosphere", 1.013250000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[megatonne-equivalent(TNT)]",   new UBASE("Scientific", "megatonne-equivalent(TNT)", 4.184000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[Mt(TNT)]",   new UBASE("Scientific", "megatonne-equivalent(TNT)", 4.184000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[micri-erg]",   new UBASE("Scientific", "micri-erg", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[newton-meter]",   new UBASE("SI", "newton-meter", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[N-m]",   new UBASE("SI", "newton-meter", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[pound-centigrade-unit]",   new UBASE("Imperial", "pound-centigrade-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[pcu]",   new UBASE("Imperial", "pound-centigrade-unit", 1.899108000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[prout]",   new UBASE("Scientific", "prout", 2.963890010000000E-14, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[Q-unit]",   new UBASE("US", "Q-unit", 1.055055852620000E+21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[quad]",   new UBASE("US", "quad", 1.055055852620000E+18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[quadrillion(Btu)]",   new UBASE("US", "quadrillion(Btu)", 1.055055852620000E+18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[rydberg]",   new UBASE("Scientific", "rydberg", 2.179872361086220E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[Ry]",   new UBASE("Scientific", "rydberg", 2.179872361086220E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Imperial[therm]",   new UBASE("Imperial", "therm", 1.055055852620000E+08, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("US[therm]",   new UBASE("US", "therm", 1.054804000000000E+08, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[thermie(15oC)]",   new UBASE("Scientific", "thermie(15oC)", 4.185500000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("Scientific[th(15oC)]",   new UBASE("Scientific", "thermie(15oC)", 4.185500000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[tonne-coal-equivalent]",   new UBASE("INT", "tonne-coal-equivalent", 2.928800000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[tce]",   new UBASE("INT", "tonne-coal-equivalent", 2.928800000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[tonne-oil-equivalent]",   new UBASE("INT", "tonne-oil-equivalent", 4.184000000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("INT[toe]",   new UBASE("INT", "tonne-oil-equivalent", 4.184000000000000E+10, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[yottajoule]",   new UBASE("SI", "yottajoule", 1.000000000000000E+24, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[YJ]",   new UBASE("SI", "yottajoule", 1.000000000000000E+24, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[zettajoule]",   new UBASE("SI", "zettajoule", 1.000000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[ZJ]",   new UBASE("SI", "zettajoule", 1.000000000000000E+21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[exacjoule]",   new UBASE("SI", "exacjoule", 1.000000000000000E+18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[EJ]",   new UBASE("SI", "exacjoule", 1.000000000000000E+18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[petajoule]",   new UBASE("SI", "petajoule", 1.000000000000000E+15, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[PJ]",   new UBASE("SI", "petajoule", 1.000000000000000E+15, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[terajoule]",   new UBASE("SI", "terajoule", 1.000000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[TJ]",   new UBASE("SI", "terajoule", 1.000000000000000E+12, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[gigajoule]",   new UBASE("SI", "gigajoule", 1.000000000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[GJ]",   new UBASE("SI", "gigajoule", 1.000000000000000E+09, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[megajoule]",   new UBASE("SI", "megajoule", 1.000000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[MJ]",   new UBASE("SI", "megajoule", 1.000000000000000E+06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[kilojoule]",   new UBASE("SI", "kilojoule", 1.000000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[kJ]",   new UBASE("SI", "kilojoule", 1.000000000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[hectojoule]",   new UBASE("SI", "hectojoule", 1.000000000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[hJ]",   new UBASE("SI", "hectojoule", 1.000000000000000E+02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[decajoule]",   new UBASE("SI", "decajoule", 1.000000000000000E+01, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[daJ]",   new UBASE("SI", "decajoule", 1.000000000000000E+01, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[decijoule]",   new UBASE("SI", "decijoule", 1.000000000000000E-01, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[dJ]",   new UBASE("SI", "decijoule", 1.000000000000000E-01, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[centijoule]",   new UBASE("SI", "centijoule", 1.000000000000000E-02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[cJ]",   new UBASE("SI", "centijoule", 1.000000000000000E-02, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[millijoule]",   new UBASE("SI", "millijoule", 1.000000000000000E-03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[mJ]",   new UBASE("SI", "millijoule", 1.000000000000000E-03, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[microjoule]",   new UBASE("SI", "microjoule", 1.000000000000000E-06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[uJ]",   new UBASE("SI", "microjoule", 1.000000000000000E-06, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[nanojoule]",   new UBASE("SI", "nanojoule", 1.000000000000000E-09, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[nJ]",   new UBASE("SI", "nanojoule", 1.000000000000000E-09, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[picojoule]",   new UBASE("SI", "picojoule", 1.000000000000000E-12, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[pJ]",   new UBASE("SI", "picojoule", 1.000000000000000E-12, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[femtojoule]",   new UBASE("SI", "femtojoule", 1.000000000000000E-15, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[fJ]",   new UBASE("SI", "femtojoule", 1.000000000000000E-15, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[attojoule]",   new UBASE("SI", "attojoule", 1.000000000000000E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[aJ]",   new UBASE("SI", "attojoule", 1.000000000000000E-18, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[zeptojoule]",   new UBASE("SI", "zeptojoule", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[zv]",   new UBASE("SI", "zeptojoule", 1.000000000000000E-21, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[yoctojoule]",   new UBASE("SI", "yoctojoule", 1.000000000000000E-24, "kg.m2/s2", "M.L2/T2", "1.0"));
          unit.Add("SI[yJ]",   new UBASE("SI", "yoctojoule", 1.000000000000000E-24, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("energy",   new BaseSystem("energy", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[britishthermalunit(IT)-per-hour-per-square-foot]",   new UBASE("Imperial", "britishthermalunit(IT)-per-hour-per-square-foot", 3.154590745063050E+00, "kg/s3", "M/T3", "1.0"));
          unit.Add("Imperial[Btu(IT)/hr-ft]",   new UBASE("Imperial", "britishthermalunit(IT)-per-hour-per-square-foot", 3.154590745063050E+00, "kg/s3", "M/T3", "1.0"));
          unit.Add("Imperial[british-thermal-unit(therm)-per-hour-per-square-foot]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-hour-per-square-foot", 3.152481054109060E+00, "kg/s3", "M/T3", "1.0"));
          unit.Add("Imperial[Btu(therm)/hr-ft2]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-hour-per-square-foot", 3.152481054109060E+00, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[finsen-unit]",   new UBASE("Scientific", "finsen-unit", 1.000000000000000E-05, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[FU]",   new UBASE("Scientific", "finsen-unit", 1.000000000000000E-05, "kg/s3", "M/T3", "1.0"));
          unit.Add("US[gurley-unit]",   new UBASE("US", "gurley-unit", 1.529734122878070E-06, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[heat-flux-unit]",   new UBASE("Scientific", "heat-flux-unit", 4.185500000000000E-02, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[HFU]",   new UBASE("Scientific", "heat-flux-unit", 4.185500000000000E-02, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[langley]",   new UBASE("Scientific", "langley", 6.975833333333330E+02, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[met]",   new UBASE("Scientific", "met", 5.815000000000000E+01, "kg/s3", "M/T3", "1.0"));
          unit.Add("Scientific[pyron]",   new UBASE("Scientific", "pyron", 6.975833333333330E+02, "kg/s3", "M/T3", "1.0"));
          unit.Add("SI[watt-per-square-meter]",   new UBASE("SI", "watt-per-square-meter", 1.000000000000000E+00, "kg/s3", "M/T3", "1.0"));
          unit.Add("SI[W/m2]",   new UBASE("SI", "watt-per-square-meter", 1.000000000000000E+00, "kg/s3", "M/T3", "1.0"));
          _map.Add("heatFlux",   new BaseSystem("heatFlux", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[thermal-ampere]",   new UBASE("SI", "thermal-ampere", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0"));
          unit.Add("SI[watt-per-per-kelvin]",   new UBASE("SI", "watt-per-per-kelvin", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0"));
          unit.Add("SI[W/K]",   new UBASE("SI", "watt-per-per-kelvin", 1.000000000000000E+00, "kg.m2/s3.K", "M.L2/T3.Q", "1.0"));
          _map.Add("thermalConductance",   new BaseSystem("thermalConductance", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(IT)/hr-ft2-oF]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-square-foot-per-hour-per-fahrenheit-degree", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree", 5.674465897396300E+00, "kg/s3.K", "M/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(therm)/hr-ft2-oF]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-square-foot-per-hour-per-fahrenheit-degree", 5.674465897396300E+00, "kg/s3.K", "M/T3.Q", "1.0"));
          unit.Add("Imperial[USI]",   new UBASE("Imperial", "USI", 1.000000000000000E+00, "kg/s3.K", "M/T3.Q", "1.0"));
          unit.Add("UK[U-factor]",   new UBASE("UK", "U-factor", 5.678263341113490E+00, "kg/s3.K", "M/T3.Q", "1.0"));
          _map.Add("heatTransfer",   new BaseSystem("heatTransfer", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.442278888642830E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(IT)-in/hr-ft2-oF]",   new UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.442278888642830E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.192203999114170E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(IT)-in/sec-ft2-oF]",   new UBASE("Imperial", "british-thermal-unit(IT)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.192203999114170E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree", 1.730734666371390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(IT)/hr-ft-oF]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-foot-per-hour-fahrenheit-degree", 1.730734666371390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree", 2.076881599645670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(IT)/hr-in-oF]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-in-per-hour-fahrenheit-degree", 2.076881599645670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.441314337938660E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(therm)-in/hr-ft2-oF]",   new UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-hour-per-fahrenheit-degree", 1.441314337938660E-01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.188731616579180E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(therm)-in/sec-ft2-oF]",   new UBASE("Imperial", "british-thermal-unit(therm)-inch-per-square-foot-per-second-per-fahrenheit-degree", 5.188731616579180E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree", 1.729577205526390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(term)/ft-hr-oF]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-foot-per-hour-per-fahrenheit-degree", 1.729577205526390E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree", 2.075492646631670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Imperial[Btu(term)/in-hr-oF]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-inch-per-hour-per-fahrenheit-degree", 2.075492646631670E+01, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(IT)-per-centimeter-per-second-per-degree-celsius]",   new UBASE("Scientific", "calorie(IT)-per-centimeter-per-second-per-degree-celsius", 4.186800000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(IT)/cm-sec-oC]",   new UBASE("Scientific", "calorie(IT)-per-centimeter-per-second-per-degree-celsius", 4.186800000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(therm)-per-centimeter-per-second-per-degree-celsius]",   new UBASE("Scientific", "calorie(therm)-per-centimeter-per-second-per-degree-celsius", 4.184000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(therm)/cm-sec-oC]",   new UBASE("Scientific", "calorie(therm)-per-centimeter-per-second-per-degree-celsius", 4.184000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("cgs[fourier]",   new UBASE("cgs", "fourier", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[joule-per-second-per-centimeter-per-kelvin]",   new UBASE("SI", "joule-per-second-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[J/s-cm-K]",   new UBASE("SI", "joule-per-second-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[joule-per-second-per-meter-per-kelvin]",   new UBASE("SI", "joule-per-second-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[J/s-m-K]",   new UBASE("SI", "joule-per-second-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("cgs[watt-per-centimeter-per-celsius-degree]",   new UBASE("cgs", "watt-per-centimeter-per-celsius-degree", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("cgs[W/cm-oC]",   new UBASE("cgs", "watt-per-centimeter-per-celsius-degree", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[watt-per-centimeter-per-kelvin]",   new UBASE("SI", "watt-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[W/cm-K]",   new UBASE("SI", "watt-per-centimeter-per-kelvin", 1.000000000000000E+02, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[watt-per-meter-per-kelvin]",   new UBASE("SI", "watt-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          unit.Add("SI[W/m-K]",   new UBASE("SI", "watt-per-meter-per-kelvin", 1.000000000000000E+00, "kg.m/s3.K", "M.L/T3.Q", "1.0"));
          _map.Add("thermalConductivity",   new BaseSystem("thermalConductivity", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[dyne-per-centimeter]",   new UBASE("cgs", "dyne-per-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0"));
          unit.Add("cgs[dyn/cm]",   new UBASE("cgs", "dyne-per-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0"));
          unit.Add("cgs[erg-per-square-centimeter]",   new UBASE("cgs", "erg-per-square-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0"));
          unit.Add("cgs[erg/cm2]",   new UBASE("cgs", "erg-per-square-centimeter", 1.000000000000000E-03, "kg/s2", "M/T2", "1.0"));
          unit.Add("Imperial[langley]",   new UBASE("Imperial", "langley", 4.185500000000000E+04, "kg/s2", "M/T2", "1.0"));
          unit.Add("INT[langley]",   new UBASE("INT", "langley", 4.185500000000000E+04, "kg/s2", "M/T2", "1.0"));
          unit.Add("Scientific[flux-unit]",   new UBASE("Scientific", "flux-unit", 1.000000000000000E-26, "kg/s2", "M/T2", "1.0"));
          unit.Add("Scientific[fu]",   new UBASE("Scientific", "flux-unit", 1.000000000000000E-26, "kg/s2", "M/T2", "1.0"));
          unit.Add("SI[joule-per-square-meter]",   new UBASE("SI", "joule-per-square-meter", 1.000000000000000E+00, "kg/s2", "M/T2", "1.0"));
          unit.Add("SI[J/m2]",   new UBASE("SI", "joule-per-square-meter", 1.000000000000000E+00, "kg/s2", "M/T2", "1.0"));
          _map.Add("radiantEnergy",   new BaseSystem("radiantEnergy", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[british-thermal-unit(IT)-per-fahrenheit-degree]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-fahrenheit-degree", 1.899100534716000E+03, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("Imperial[Btu(IT)/oF]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-fahrenheit-degree", 1.899100534716000E+03, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("Scientific[carnot]",   new UBASE("Scientific", "carnot", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("Scientific[clausius(rank)]",   new UBASE("Scientific", "clausius(rank)", 4.186800000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("Scientific[Cl]",   new UBASE("Scientific", "clausius(rank)", 4.186800000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("SI[coulomb(thermal)]",   new UBASE("SI", "coulomb(thermal)", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("SI[C/K]",   new UBASE("SI", "coulomb(thermal)", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("SI[joule-per-kelvin]",   new UBASE("SI", "joule-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          unit.Add("SI[J/K]",   new UBASE("SI", "joule-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K", "M.L2/T2.Q", "1.0"));
          _map.Add("entropy",   new BaseSystem("entropy", unit, "1.0"));

          unit.Clear();


          unit.Add("Scientific[entropy-unit]",   new UBASE("Scientific", "entropy-unit", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0"));
          unit.Add("Scientific[eu]",   new UBASE("Scientific", "entropy-unit", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0"));
          unit.Add("Scientific[unit-of-entropy]",   new UBASE("Scientific", "unit-of-entropy", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0"));
          unit.Add("Scientific[ue]",   new UBASE("Scientific", "unit-of-entropy", 4.184000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0"));
          unit.Add("SI[joule-per-mole-per-kelvin]",   new UBASE("SI", "joule-per-mole-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0"));
          unit.Add("SI[J/mol-K]",   new UBASE("SI", "joule-per-mole-per-kelvin", 1.000000000000000E+00, "kg.m2/s2.K.mol", "M.L2/T2.Q.N", "1.0"));
          _map.Add("molarEntropy",   new BaseSystem("molarEntropy", unit, "1.0"));

          unit.Clear();


          unit.Add("Imperial[R-value]",   new UBASE("Imperial", "R-value", 1.761101836823060E-01, "s3.K/kg", "T3.Q/M", "1.0"));
          unit.Add("UK[clo]",   new UBASE("UK", "clo", 1.548202126388720E-01, "s3.K/kg", "T3.Q/M", "1.0"));
          unit.Add("UK[tog]",   new UBASE("UK", "tog", 1.000000000000000E-01, "s3.K/kg", "T3.Q/M", "1.0"));
          _map.Add("heatInsulation",   new BaseSystem("heatInsulation", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[brewster]",   new UBASE("cgs", "brewster", 1.000000000000000E-12, "m.s2/kg", "L.T2/M", "1.0"));
          unit.Add("cgs[B]",   new UBASE("cgs", "brewster", 1.000000000000000E-12, "m.s2/kg", "L.T2/M", "1.0"));
          unit.Add("US[energy-factor(clothes-washers)]",   new UBASE("US", "energy-factor(clothes-washers)", 7.865790720000000E-09, "m.s2/kg", "L.T2/M", "1.0"));
          unit.Add("US[EF]",   new UBASE("US", "energy-factor(clothes-washers)", 7.865790720000000E-09, "m.s2/kg", "L.T2/M", "1.0"));
          unit.Add("US[gallon-per-hour-horsepower]",   new UBASE("US", "gallon-per-hour-horsepower", 1.410089116821480E-09, "m.s2/kg", "L.T2/M", "1.0"));
          unit.Add("US[gal/hr-HP]",   new UBASE("US", "gallon-per-hour-horsepower", 1.410089116821480E-09, "m.s2/kg", "L.T2/M", "1.0"));
          _map.Add("energyConsumption",   new BaseSystem("energyConsumption", unit, "1.0"));

          unit.Clear();


          unit.Add("Scientific[mayer]",   new UBASE("Scientific", "mayer", 1.000000000000000E-03, "m2/s2.K", "L2/T2.Q", "1.0"));
          unit.Add("UK[british-thermal-unit(IT)-per-pound-fahrenheit-degree]",   new UBASE("UK", "british-thermal-unit(IT)-per-pound-fahrenheit-degree", 4.186800000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0"));
          unit.Add("UK[Btu(IT)/lb-oF]",   new UBASE("UK", "british-thermal-unit(IT)-per-pound-fahrenheit-degree", 4.186800000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0"));
          unit.Add("UK[british-thermal-unit(therm)-per-pound-fahrenheit-degree]",   new UBASE("UK", "british-thermal-unit(therm)-per-pound-fahrenheit-degree", 4.184000000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0"));
          unit.Add("UK[Btu(threm)/lb-oF]",   new UBASE("UK", "british-thermal-unit(therm)-per-pound-fahrenheit-degree", 4.184000000000000E+03, "m2/s2.K", "L2/T2.Q", "1.0"));
          _map.Add("specificHeatCapacity",   new BaseSystem("specificHeatCapacity", unit, "1.0"));

          unit.Clear();


          unit.Add("Scientific[calorie(therm)-per-gram]",   new UBASE("Scientific", "calorie(therm)-per-gram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(therm)/g]",   new UBASE("Scientific", "calorie(therm)-per-gram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(therm)-per-kilogram]",   new UBASE("Scientific", "calorie(therm)-per-kilogram", 4.184000000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(therm)/kg]",   new UBASE("Scientific", "calorie(therm)-per-kilogram", 4.184000000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(IT)-per-gram]",   new UBASE("Scientific", "calorie(IT)-per-gram", 4.186800000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(IT)/g]",   new UBASE("Scientific", "calorie(IT)-per-gram", 4.186800000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(IT)-per-kilogram]",   new UBASE("Scientific", "calorie(IT)-per-kilogram", 4.186800000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(IT)/kg]",   new UBASE("Scientific", "calorie(IT)-per-kilogram", 4.186800000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(mean)-per-gram]",   new UBASE("Scientific", "calorie(mean)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(mean)/g]",   new UBASE("Scientific", "calorie(mean)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(mean)-per-kilogram]",   new UBASE("Scientific", "calorie(mean)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(mean)/kg]",   new UBASE("Scientific", "calorie(mean)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie-per-kilogram]",   new UBASE("Scientific", "calorie-per-kilogram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal/kg]",   new UBASE("Scientific", "calorie-per-kilogram", 4.184000000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(15oC)-per-kilogram]",   new UBASE("Scientific", "calorie(15oC)-per-kilogram", 4.185500000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(15oC)/kg]",   new UBASE("Scientific", "calorie(15oC)-per-kilogram", 4.185500000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(20oC)-per-kilogram]",   new UBASE("Scientific", "calorie(20oC)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(20oC)/kg]",   new UBASE("Scientific", "calorie(20oC)-per-kilogram", 4.190020000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(4oC)-per-kilogram]",   new UBASE("Scientific", "calorie(4oC)-per-kilogram", 4.204500000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(4oC)/kg]",   new UBASE("Scientific", "calorie(4oC)-per-kilogram", 4.204500000000000E+00, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie-per-gram]",   new UBASE("Scientific", "calorie-per-gram", 4.184000000000000E+06, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal/g]",   new UBASE("Scientific", "calorie-per-gram", 4.184000000000000E+06, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(15oC)-per-gram]",   new UBASE("Scientific", "calorie(15oC)-per-gram", 4.185500000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(15oC)/g]",   new UBASE("Scientific", "calorie(15oC)-per-gram", 4.185500000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(20oC)-per-gram]",   new UBASE("Scientific", "calorie(20oC)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(20oC)/g]",   new UBASE("Scientific", "calorie(20oC)-per-gram", 4.190020000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[calorie(4oC)-per-gram]",   new UBASE("Scientific", "calorie(4oC)-per-gram", 4.204500000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          unit.Add("Scientific[cal(4oC)/g]",   new UBASE("Scientific", "calorie(4oC)-per-gram", 4.204500000000000E+03, "m/s3.K", "L/T3.Q", "1.0"));
          _map.Add("specificHeat",   new BaseSystem("specificHeat", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
