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
// File Power.cpp
//
// Units for Power
//
// Class for Power units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Power.hpp"

Power& Power::Instance(void)
{
    static Power singleton;
    return singleton;
}

Power::Power(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["cgs[abwatt]"] = UBASE("cgs", "abwatt", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["cgs[aW]"] = UBASE("cgs", "abwatt", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["cgs[emu-of-power]"] = UBASE("cgs", "emu-of-power", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["cgs[emuW]"] = UBASE("cgs", "emu-of-power", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["cgs[erg-per-second]"] = UBASE("cgs", "erg-per-second", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["cgs[erg/sec]"] = UBASE("cgs", "erg-per-second", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[foot-pound-force-per-hour]"] = UBASE("FPS", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[ft-lbf/hr]"] = UBASE("FPS", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[foot-pound-force-per-minute]"] = UBASE("FPS", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[ft-lbf/min]"] = UBASE("FPS", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[foot-pound-force-per-second]"] = UBASE("FPS", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[ft-lbf/sec]"] = UBASE("FPS", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[foot-poundal-per-second]"] = UBASE("FPS", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[ft-pdl/sec]"] = UBASE("FPS", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["French[poncelet]"] = UBASE("French", "poncelet", 9.806650000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[atmosphere-cubic-foot-per-hour]"] = UBASE("Imperial", "atmosphere-cubic-foot-per-hour", 7.970012447040000E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[atm-ft3/hr]"] = UBASE("Imperial", "atmosphere-cubic-foot-per-hour", 7.970012447040000E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[atmosphere-cubic-foot-per-minute]"] = UBASE("Imperial", "atmosphere-cubic-foot-per-minute", 4.782007468224000E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[atm-ft3/min]"] = UBASE("Imperial", "atmosphere-cubic-foot-per-minute", 4.782007468224000E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[british-thermal-unit(mean)-per-hour]"] = UBASE("FPS", "british-thermal-unit(mean)-per-hour", 2.932972222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[Btu(mean)/hr]"] = UBASE("FPS", "british-thermal-unit(mean)-per-hour", 2.932972222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[british-thermal-unit(mean)-per-minute]"] = UBASE("FPS", "british-thermal-unit(mean)-per-minute", 1.759783333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[Btu(mean)/min]"] = UBASE("FPS", "british-thermal-unit(mean)-per-minute", 1.759783333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[british-thermal-unit(mean)-per-second]"] = UBASE("FPS", "british-thermal-unit(mean)-per-second", 1.055870000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["FPS[Btu(mean)/sec]"] = UBASE("FPS", "british-thermal-unit(mean)-per-second", 1.055870000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(ISO)-per-hour]"] = UBASE("UK", "british-thermal-unit(ISO)-per-hour", 2.930722222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(ISO)/hr]"] = UBASE("UK", "british-thermal-unit(ISO)-per-hour", 2.930722222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(ISO)-per-minute]"] = UBASE("UK", "british-thermal-unit(ISO)-per-minute", 1.758433333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(ISO)/min]"] = UBASE("UK", "british-thermal-unit(ISO)-per-minute", 1.758433333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(ISO)-per-second]"] = UBASE("UK", "british-thermal-unit(ISO)-per-second", 1.055060000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(ISO)/sec]"] = UBASE("UK", "british-thermal-unit(ISO)-per-second", 1.055060000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(39oF)-per-hour]"] = UBASE("UK", "british-thermal-unit(39oF)-per-hour", 2.943527777777780E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(39oF)/hr]"] = UBASE("UK", "british-thermal-unit(39oF)-per-hour", 2.943527777777780E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(39oF)-per-minute]"] = UBASE("UK", "british-thermal-unit(39oF)-per-minute", 1.766116666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(39oF)/min]"] = UBASE("UK", "british-thermal-unit(39oF)-per-minute", 1.766116666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(39oF)-per-second]"] = UBASE("UK", "british-thermal-unit(39oF)-per-second", 1.059670000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(39oF)/sec]"] = UBASE("UK", "british-thermal-unit(39oF)-per-second", 1.059670000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(60oF)-per-hour]"] = UBASE("UK", "british-thermal-unit(60oF)-per-hour", 2.929661111111110E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(60oF)/hr]"] = UBASE("UK", "british-thermal-unit(60oF)-per-hour", 2.929661111111110E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(60oF)-per-minute]"] = UBASE("UK", "british-thermal-unit(60oF)-per-minute", 1.757796666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(60oF)/min]"] = UBASE("UK", "british-thermal-unit(60oF)-per-minute", 1.757796666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[british-thermal-unit(60oF)-per-second]"] = UBASE("UK", "british-thermal-unit(60oF)-per-second", 1.054678000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[Btu(60oF)/sec]"] = UBASE("UK", "british-thermal-unit(60oF)-per-second", 1.054678000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[british-thermal-unit(IT)-per-hour]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-hour", 2.930710701722220E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[Btu(IT)/hr]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-hour", 2.930710701722220E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[british-thermal-unit(IT)-per-minute]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-minute", 1.758426421033330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[Btu(IT)/min]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-minute", 1.758426421033330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[british-thermal-unit(IT)-per-second]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-second", 1.055055852620000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[Btu(IT)/sec]"] = UBASE("Imperial", "british-thermal-unit(IT)-per-second", 1.055055852620000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-hour]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-hour", 2.928750734691360E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[Btu(threm)/hr]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-hour", 2.928750734691360E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-minute]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-minute", 1.757250440814810E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[Btu(therm)/min]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-minute", 1.757250440814810E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[british-thermal-unit(therm)-per-second]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-second", 1.054350264488890E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[Btu(therm)/sec]"] = UBASE("Imperial", "british-thermal-unit(therm)-per-second", 1.054350264488890E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[foot-pound-force-per-hour]"] = UBASE("Imperial", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[ft-lbf/hr]"] = UBASE("Imperial", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[foot-pound-force-per-minute]"] = UBASE("Imperial", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[ft-lbf/min]"] = UBASE("Imperial", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[foot-pound-force-per-second]"] = UBASE("Imperial", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[ft-lbf/sec]"] = UBASE("Imperial", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[horsepower]"] = UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[BHP]"] = UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Imperial[hp]"] = UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atmosphere-cubic-meter-per-hour]"] = UBASE("INT", "atmosphere-cubic-meter-per-hour", 2.814583333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-m3/hr]"] = UBASE("INT", "atmosphere-cubic-meter-per-hour", 2.814583333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atmosphere-cubic-meter-per-min]"] = UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-m3/min]"] = UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[acmm]"] = UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atmosphere-cubic-meter-per-second]"] = UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-m3/sec]"] = UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[acms]"] = UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atmosphere-liter-per-hour]"] = UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-dm3/hr]"] = UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-lph]"] = UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atmosphere-liter-per-minute]"] = UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-dm3/min]"] = UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-lpm]"] = UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atmosphere-liter-per-second]"] = UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-dm3/sec]"] = UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[atm-lps]"] = UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[cheval-vapeur]"] = UBASE("INT", "cheval-vapeur", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[cv]"] = UBASE("INT", "cheval-vapeur", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cheval-vapeur(old)]"] = UBASE("Scientific", "cheval-vapeur(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cv(old)]"] = UBASE("Scientific", "cheval-vapeur(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[volt-ampere-reactive]"] = UBASE("INT", "volt-ampere-reactive", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["INT[var]"] = UBASE("INT", "volt-ampere-reactive", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["MKpS[kilogram-force-meter-per-second]"] = UBASE("MKpS", "kilogram-force-meter-per-second", 9.806650000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["MKpS[kgfm/sec]"] = UBASE("MKpS", "kilogram-force-meter-per-second", 9.806650000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(IT)-per-hour]"] = UBASE("Scientific", "calorie(IT)-per-hour", 1.163000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(IT)/hr]"] = UBASE("Scientific", "calorie(IT)-per-hour", 1.163000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(IT)-per-minute]"] = UBASE("Scientific", "calorie(IT)-per-minute", 6.978000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(IT)/min]"] = UBASE("Scientific", "calorie(IT)-per-minute", 6.978000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(IT)-per-second]"] = UBASE("Scientific", "calorie(IT)-per-second", 4.186800000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(IT)/sec]"] = UBASE("Scientific", "calorie(IT)-per-second", 4.186800000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(therm)-per-hour]"] = UBASE("Scientific", "calorie(therm)-per-hour", 1.162222222222220E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(therm)/hr]"] = UBASE("Scientific", "calorie(therm)-per-hour", 1.162222222222220E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(therm)-per-minute]"] = UBASE("Scientific", "calorie(therm)-per-minute", 6.973333333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(threm)/min]"] = UBASE("Scientific", "calorie(therm)-per-minute", 6.973333333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(therm)-per-secomd]"] = UBASE("Scientific", "calorie(therm)-per-secomd", 4.184000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(therm)/sec]"] = UBASE("Scientific", "calorie(therm)-per-secomd", 4.184000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(15oC)-per-hour]"] = UBASE("Scientific", "calorie(15oC)-per-hour", 1.162638888888890E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(15oC)/hr]"] = UBASE("Scientific", "calorie(15oC)-per-hour", 1.162638888888890E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(15oC)-per-minute]"] = UBASE("Scientific", "calorie(15oC)-per-minute", 6.975833333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(15oC)/min]"] = UBASE("Scientific", "calorie(15oC)-per-minute", 6.975833333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(15oC)-per-second]"] = UBASE("Scientific", "calorie(15oC)-per-second", 4.185500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(15oC)/sec]"] = UBASE("Scientific", "calorie(15oC)-per-second", 4.185500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(4oC)-per-hour]"] = UBASE("Scientific", "calorie(4oC)-per-hour", 1.167916666666670E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(4oC)/hr]"] = UBASE("Scientific", "calorie(4oC)-per-hour", 1.167916666666670E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(4oC)-per-minute]"] = UBASE("Scientific", "calorie(4oC)-per-minute", 7.007500000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(4oC)/min]"] = UBASE("Scientific", "calorie(4oC)-per-minute", 7.007500000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(4oC)-per-second]"] = UBASE("Scientific", "calorie(4oC)-per-second", 4.204500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(4oC)/sec]"] = UBASE("Scientific", "calorie(4oC)-per-second", 4.204500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(mean)-per-hour]"] = UBASE("Scientific", "calorie(mean)-per-hour", 1.163894444444440E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(mean)/hr]"] = UBASE("Scientific", "calorie(mean)-per-hour", 1.163894444444440E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(mean)-per-minute]"] = UBASE("Scientific", "calorie(mean)-per-minute", 6.983366666666670E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(mean)/min]"] = UBASE("Scientific", "calorie(mean)-per-minute", 6.983366666666670E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[calorie(mean)-per-second]"] = UBASE("Scientific", "calorie(mean)-per-second", 4.190020000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[cal(mean)/sec]"] = UBASE("Scientific", "calorie(mean)-per-second", 4.190020000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[clusec]"] = UBASE("Scientific", "clusec", 1.333223684210530E-06, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[horsepower]"] = UBASE("Scientific", "horsepower", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[HP]"] = UBASE("Scientific", "horsepower", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[horsepower(old)]"] = UBASE("Scientific", "horsepower(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[HP(old)]"] = UBASE("Scientific", "horsepower(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[prony]"] = UBASE("Scientific", "prony", 9.806650000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[volt-ampere]"] = UBASE("Scientific", "volt-ampere", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["Scientific[VA]"] = UBASE("Scientific", "volt-ampere", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[watt]"] = UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[W]"] = UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[donkey]"] = UBASE("UK", "donkey", 2.485666238607570E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[foot-poundal-per-second]"] = UBASE("UK", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[ft-pdl/sec]"] = UBASE("UK", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[ton]"] = UBASE("UK", "ton", 3.938875183114670E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["UK[CTR]"] = UBASE("UK", "ton", 3.938875183114670E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[air-watt]"] = UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[AW]"] = UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[aw]"] = UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[horsepower]"] = UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[HP]"] = UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[hp]"] = UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[horsepower(boiler)]"] = UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[HP(bolier)]"] = UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[hp(boiler)]"] = UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[horsepower(electric)]"] = UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[HP(electric)]"] = UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[hp(electric)]"] = UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[horsepower(metric)]"] = UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[HP(metric)]"] = UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[hp(metric)]"] = UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[horsepower(water)]"] = UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[HP(water)]"] = UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[hp(water)]"] = UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[manpower]"] = UBASE("US", "manpower", 7.456998715822700E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[ton]"] = UBASE("US", "ton", 3.516852842066670E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[CTR]"] = UBASE("US", "ton", 3.516852842066670E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[watt]"] = UBASE("US", "watt", 1.000165000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[W]"] = UBASE("US", "watt", 1.000165000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[watt(mean)]"] = UBASE("US", "watt(mean)", 1.000190000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["US[W(mean)]"] = UBASE("US", "watt(mean)", 1.000190000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[yottawatt]"] = UBASE("SI", "yottawatt", 1.000000000000000E+24, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[YW]"] = UBASE("SI", "yottawatt", 1.000000000000000E+24, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[zettawatt]"] = UBASE("SI", "zettawatt", 1.000000000000000E+21, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[ZW]"] = UBASE("SI", "zettawatt", 1.000000000000000E+21, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[exacwatt]"] = UBASE("SI", "exacwatt", 1.000000000000000E+18, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[EW]"] = UBASE("SI", "exacwatt", 1.000000000000000E+18, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[petawatt]"] = UBASE("SI", "petawatt", 1.000000000000000E+15, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[PW]"] = UBASE("SI", "petawatt", 1.000000000000000E+15, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[terawatt]"] = UBASE("SI", "terawatt", 1.000000000000000E+12, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[TW]"] = UBASE("SI", "terawatt", 1.000000000000000E+12, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[gigawatt]"] = UBASE("SI", "gigawatt", 1.000000000000000E+09, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[GW]"] = UBASE("SI", "gigawatt", 1.000000000000000E+09, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[megawatt]"] = UBASE("SI", "megawatt", 1.000000000000000E+06, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[MW]"] = UBASE("SI", "megawatt", 1.000000000000000E+06, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[kilowatt]"] = UBASE("SI", "kilowatt", 1.000000000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[kW]"] = UBASE("SI", "kilowatt", 1.000000000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[hectowatt]"] = UBASE("SI", "hectowatt", 1.000000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[hW]"] = UBASE("SI", "hectowatt", 1.000000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[decawatt]"] = UBASE("SI", "decawatt", 1.000000000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[daW]"] = UBASE("SI", "decawatt", 1.000000000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[deciwatt]"] = UBASE("SI", "deciwatt", 1.000000000000000E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[dW]"] = UBASE("SI", "deciwatt", 1.000000000000000E-01, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[centiwatt]"] = UBASE("SI", "centiwatt", 1.000000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[cW]"] = UBASE("SI", "centiwatt", 1.000000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[milliwatt]"] = UBASE("SI", "milliwatt", 1.000000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[mW]"] = UBASE("SI", "milliwatt", 1.000000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[microwatt]"] = UBASE("SI", "microwatt", 1.000000000000000E-06, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[uW]"] = UBASE("SI", "microwatt", 1.000000000000000E-06, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[nanowatt]"] = UBASE("SI", "nanowatt", 1.000000000000000E-09, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[nW]"] = UBASE("SI", "nanowatt", 1.000000000000000E-09, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[picowatt]"] = UBASE("SI", "picowatt", 1.000000000000000E-12, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[pW]"] = UBASE("SI", "picowatt", 1.000000000000000E-12, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[femtowatt]"] = UBASE("SI", "femtowatt", 1.000000000000000E-15, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[fW]"] = UBASE("SI", "femtowatt", 1.000000000000000E-15, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[attowatt]"] = UBASE("SI", "attowatt", 1.000000000000000E-18, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[aW]"] = UBASE("SI", "attowatt", 1.000000000000000E-18, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[zeptowatt]"] = UBASE("SI", "zeptowatt", 1.000000000000000E-21, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[zW]"] = UBASE("SI", "zeptowatt", 1.000000000000000E-21, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[yoctowatt]"] = UBASE("SI", "yoctowatt", 1.000000000000000E-24, "kg.m2/s3", "M.L2/T3", "1.0");
   unit["SI[yW]"] = UBASE("SI", "yoctowatt", 1.000000000000000E-24, "kg.m2/s3", "M.L2/T3", "1.0");
   _map["power"] = BaseSystem("power", unit, "1.0");

   unit.clear();


}

// EOF
