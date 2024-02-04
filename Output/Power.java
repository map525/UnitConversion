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
// File Power.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Power extends SingleSystem
{
   private static Power singleton_ = new Power();

   public static Power Instance()
   {
      return singleton_;
   }

   private Power()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("cgs[abwatt]",   new UBASE("cgs", "abwatt", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("cgs[aW]",   new UBASE("cgs", "abwatt", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("cgs[emu-of-power]",   new UBASE("cgs", "emu-of-power", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("cgs[emuW]",   new UBASE("cgs", "emu-of-power", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("cgs[erg-per-second]",   new UBASE("cgs", "erg-per-second", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("cgs[erg/sec]",   new UBASE("cgs", "erg-per-second", 1.000000000000000E-07, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[foot-pound-force-per-hour]",   new UBASE("FPS", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[ft-lbf/hr]",   new UBASE("FPS", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[foot-pound-force-per-minute]",   new UBASE("FPS", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[ft-lbf/min]",   new UBASE("FPS", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[foot-pound-force-per-second]",   new UBASE("FPS", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[ft-lbf/sec]",   new UBASE("FPS", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[foot-poundal-per-second]",   new UBASE("FPS", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[ft-pdl/sec]",   new UBASE("FPS", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("French[poncelet]",   new UBASE("French", "poncelet", 9.806650000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[atmosphere-cubic-foot-per-hour]",   new UBASE("Imperial", "atmosphere-cubic-foot-per-hour", 7.970012447040000E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[atm-ft3/hr]",   new UBASE("Imperial", "atmosphere-cubic-foot-per-hour", 7.970012447040000E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[atmosphere-cubic-foot-per-minute]",   new UBASE("Imperial", "atmosphere-cubic-foot-per-minute", 4.782007468224000E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[atm-ft3/min]",   new UBASE("Imperial", "atmosphere-cubic-foot-per-minute", 4.782007468224000E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[british-thermal-unit(mean)-per-hour]",   new UBASE("FPS", "british-thermal-unit(mean)-per-hour", 2.932972222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[Btu(mean)/hr]",   new UBASE("FPS", "british-thermal-unit(mean)-per-hour", 2.932972222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[british-thermal-unit(mean)-per-minute]",   new UBASE("FPS", "british-thermal-unit(mean)-per-minute", 1.759783333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[Btu(mean)/min]",   new UBASE("FPS", "british-thermal-unit(mean)-per-minute", 1.759783333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[british-thermal-unit(mean)-per-second]",   new UBASE("FPS", "british-thermal-unit(mean)-per-second", 1.055870000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("FPS[Btu(mean)/sec]",   new UBASE("FPS", "british-thermal-unit(mean)-per-second", 1.055870000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(ISO)-per-hour]",   new UBASE("UK", "british-thermal-unit(ISO)-per-hour", 2.930722222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(ISO)/hr]",   new UBASE("UK", "british-thermal-unit(ISO)-per-hour", 2.930722222222220E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(ISO)-per-minute]",   new UBASE("UK", "british-thermal-unit(ISO)-per-minute", 1.758433333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(ISO)/min]",   new UBASE("UK", "british-thermal-unit(ISO)-per-minute", 1.758433333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(ISO)-per-second]",   new UBASE("UK", "british-thermal-unit(ISO)-per-second", 1.055060000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(ISO)/sec]",   new UBASE("UK", "british-thermal-unit(ISO)-per-second", 1.055060000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(39oF)-per-hour]",   new UBASE("UK", "british-thermal-unit(39oF)-per-hour", 2.943527777777780E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(39oF)/hr]",   new UBASE("UK", "british-thermal-unit(39oF)-per-hour", 2.943527777777780E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(39oF)-per-minute]",   new UBASE("UK", "british-thermal-unit(39oF)-per-minute", 1.766116666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(39oF)/min]",   new UBASE("UK", "british-thermal-unit(39oF)-per-minute", 1.766116666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(39oF)-per-second]",   new UBASE("UK", "british-thermal-unit(39oF)-per-second", 1.059670000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(39oF)/sec]",   new UBASE("UK", "british-thermal-unit(39oF)-per-second", 1.059670000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(60oF)-per-hour]",   new UBASE("UK", "british-thermal-unit(60oF)-per-hour", 2.929661111111110E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(60oF)/hr]",   new UBASE("UK", "british-thermal-unit(60oF)-per-hour", 2.929661111111110E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(60oF)-per-minute]",   new UBASE("UK", "british-thermal-unit(60oF)-per-minute", 1.757796666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(60oF)/min]",   new UBASE("UK", "british-thermal-unit(60oF)-per-minute", 1.757796666666670E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[british-thermal-unit(60oF)-per-second]",   new UBASE("UK", "british-thermal-unit(60oF)-per-second", 1.054678000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[Btu(60oF)/sec]",   new UBASE("UK", "british-thermal-unit(60oF)-per-second", 1.054678000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[british-thermal-unit(IT)-per-hour]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-hour", 2.930710701722220E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[Btu(IT)/hr]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-hour", 2.930710701722220E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[british-thermal-unit(IT)-per-minute]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-minute", 1.758426421033330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[Btu(IT)/min]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-minute", 1.758426421033330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[british-thermal-unit(IT)-per-second]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-second", 1.055055852620000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[Btu(IT)/sec]",   new UBASE("Imperial", "british-thermal-unit(IT)-per-second", 1.055055852620000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[british-thermal-unit(therm)-per-hour]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-hour", 2.928750734691360E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[Btu(threm)/hr]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-hour", 2.928750734691360E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[british-thermal-unit(therm)-per-minute]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-minute", 1.757250440814810E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[Btu(therm)/min]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-minute", 1.757250440814810E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[british-thermal-unit(therm)-per-second]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-second", 1.054350264488890E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[Btu(therm)/sec]",   new UBASE("Imperial", "british-thermal-unit(therm)-per-second", 1.054350264488890E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[foot-pound-force-per-hour]",   new UBASE("Imperial", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[ft-lbf/hr]",   new UBASE("Imperial", "foot-pound-force-per-hour", 3.766160967587220E-04, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[foot-pound-force-per-minute]",   new UBASE("Imperial", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[ft-lbf/min]",   new UBASE("Imperial", "foot-pound-force-per-minute", 2.259696580552330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[foot-pound-force-per-second]",   new UBASE("Imperial", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[ft-lbf/sec]",   new UBASE("Imperial", "foot-pound-force-per-second", 1.355817948331400E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[horsepower]",   new UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[BHP]",   new UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Imperial[hp]",   new UBASE("Imperial", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atmosphere-cubic-meter-per-hour]",   new UBASE("INT", "atmosphere-cubic-meter-per-hour", 2.814583333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-m3/hr]",   new UBASE("INT", "atmosphere-cubic-meter-per-hour", 2.814583333333330E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atmosphere-cubic-meter-per-min]",   new UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-m3/min]",   new UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[acmm]",   new UBASE("INT", "atmosphere-cubic-meter-per-min", 1.688750000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atmosphere-cubic-meter-per-second]",   new UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-m3/sec]",   new UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[acms]",   new UBASE("INT", "atmosphere-cubic-meter-per-second", 1.013250000000000E+05, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atmosphere-liter-per-hour]",   new UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-dm3/hr]",   new UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-lph]",   new UBASE("INT", "atmosphere-liter-per-hour", 2.814583333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atmosphere-liter-per-minute]",   new UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-dm3/min]",   new UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-lpm]",   new UBASE("INT", "atmosphere-liter-per-minute", 1.688750000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atmosphere-liter-per-second]",   new UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-dm3/sec]",   new UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[atm-lps]",   new UBASE("INT", "atmosphere-liter-per-second", 1.013250000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[cheval-vapeur]",   new UBASE("INT", "cheval-vapeur", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[cv]",   new UBASE("INT", "cheval-vapeur", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cheval-vapeur(old)]",   new UBASE("Scientific", "cheval-vapeur(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cv(old)]",   new UBASE("Scientific", "cheval-vapeur(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[volt-ampere-reactive]",   new UBASE("INT", "volt-ampere-reactive", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("INT[var]",   new UBASE("INT", "volt-ampere-reactive", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("MKpS[kilogram-force-meter-per-second]",   new UBASE("MKpS", "kilogram-force-meter-per-second", 9.806650000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("MKpS[kgfm/sec]",   new UBASE("MKpS", "kilogram-force-meter-per-second", 9.806650000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(IT)-per-hour]",   new UBASE("Scientific", "calorie(IT)-per-hour", 1.163000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(IT)/hr]",   new UBASE("Scientific", "calorie(IT)-per-hour", 1.163000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(IT)-per-minute]",   new UBASE("Scientific", "calorie(IT)-per-minute", 6.978000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(IT)/min]",   new UBASE("Scientific", "calorie(IT)-per-minute", 6.978000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(IT)-per-second]",   new UBASE("Scientific", "calorie(IT)-per-second", 4.186800000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(IT)/sec]",   new UBASE("Scientific", "calorie(IT)-per-second", 4.186800000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(therm)-per-hour]",   new UBASE("Scientific", "calorie(therm)-per-hour", 1.162222222222220E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(therm)/hr]",   new UBASE("Scientific", "calorie(therm)-per-hour", 1.162222222222220E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(therm)-per-minute]",   new UBASE("Scientific", "calorie(therm)-per-minute", 6.973333333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(threm)/min]",   new UBASE("Scientific", "calorie(therm)-per-minute", 6.973333333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(therm)-per-secomd]",   new UBASE("Scientific", "calorie(therm)-per-secomd", 4.184000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(therm)/sec]",   new UBASE("Scientific", "calorie(therm)-per-secomd", 4.184000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(15oC)-per-hour]",   new UBASE("Scientific", "calorie(15oC)-per-hour", 1.162638888888890E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(15oC)/hr]",   new UBASE("Scientific", "calorie(15oC)-per-hour", 1.162638888888890E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(15oC)-per-minute]",   new UBASE("Scientific", "calorie(15oC)-per-minute", 6.975833333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(15oC)/min]",   new UBASE("Scientific", "calorie(15oC)-per-minute", 6.975833333333330E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(15oC)-per-second]",   new UBASE("Scientific", "calorie(15oC)-per-second", 4.185500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(15oC)/sec]",   new UBASE("Scientific", "calorie(15oC)-per-second", 4.185500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(4oC)-per-hour]",   new UBASE("Scientific", "calorie(4oC)-per-hour", 1.167916666666670E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(4oC)/hr]",   new UBASE("Scientific", "calorie(4oC)-per-hour", 1.167916666666670E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(4oC)-per-minute]",   new UBASE("Scientific", "calorie(4oC)-per-minute", 7.007500000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(4oC)/min]",   new UBASE("Scientific", "calorie(4oC)-per-minute", 7.007500000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(4oC)-per-second]",   new UBASE("Scientific", "calorie(4oC)-per-second", 4.204500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(4oC)/sec]",   new UBASE("Scientific", "calorie(4oC)-per-second", 4.204500000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(mean)-per-hour]",   new UBASE("Scientific", "calorie(mean)-per-hour", 1.163894444444440E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(mean)/hr]",   new UBASE("Scientific", "calorie(mean)-per-hour", 1.163894444444440E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(mean)-per-minute]",   new UBASE("Scientific", "calorie(mean)-per-minute", 6.983366666666670E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(mean)/min]",   new UBASE("Scientific", "calorie(mean)-per-minute", 6.983366666666670E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[calorie(mean)-per-second]",   new UBASE("Scientific", "calorie(mean)-per-second", 4.190020000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[cal(mean)/sec]",   new UBASE("Scientific", "calorie(mean)-per-second", 4.190020000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[clusec]",   new UBASE("Scientific", "clusec", 1.333223684210530E-06, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[horsepower]",   new UBASE("Scientific", "horsepower", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[HP]",   new UBASE("Scientific", "horsepower", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[horsepower(old)]",   new UBASE("Scientific", "horsepower(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[HP(old)]",   new UBASE("Scientific", "horsepower(old)", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[prony]",   new UBASE("Scientific", "prony", 9.806650000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[volt-ampere]",   new UBASE("Scientific", "volt-ampere", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("Scientific[VA]",   new UBASE("Scientific", "volt-ampere", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[watt]",   new UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[W]",   new UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[donkey]",   new UBASE("UK", "donkey", 2.485666238607570E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[foot-poundal-per-second]",   new UBASE("UK", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[ft-pdl/sec]",   new UBASE("UK", "foot-poundal-per-second", 4.214011009380480E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[ton]",   new UBASE("UK", "ton", 3.938875183114670E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("UK[CTR]",   new UBASE("UK", "ton", 3.938875183114670E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[air-watt]",   new UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[AW]",   new UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[aw]",   new UBASE("US", "air-watt", 9.990730537681540E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[horsepower]",   new UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[HP]",   new UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[hp]",   new UBASE("US", "horsepower", 7.456998715822700E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[horsepower(boiler)]",   new UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[HP(bolier)]",   new UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[hp(boiler)]",   new UBASE("US", "horsepower(boiler)", 9.810554074015140E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[horsepower(electric)]",   new UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[HP(electric)]",   new UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[hp(electric)]",   new UBASE("US", "horsepower(electric)", 7.460000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[horsepower(metric)]",   new UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[HP(metric)]",   new UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[hp(metric)]",   new UBASE("US", "horsepower(metric)", 7.354987500000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[horsepower(water)]",   new UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[HP(water)]",   new UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[hp(water)]",   new UBASE("US", "horsepower(water)", 7.460437929359820E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[manpower]",   new UBASE("US", "manpower", 7.456998715822700E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[ton]",   new UBASE("US", "ton", 3.516852842066670E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[CTR]",   new UBASE("US", "ton", 3.516852842066670E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[watt]",   new UBASE("US", "watt", 1.000165000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[W]",   new UBASE("US", "watt", 1.000165000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[watt(mean)]",   new UBASE("US", "watt(mean)", 1.000190000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("US[W(mean)]",   new UBASE("US", "watt(mean)", 1.000190000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[yottawatt]",   new UBASE("SI", "yottawatt", 1.000000000000000E+24, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[YW]",   new UBASE("SI", "yottawatt", 1.000000000000000E+24, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[zettawatt]",   new UBASE("SI", "zettawatt", 1.000000000000000E+21, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[ZW]",   new UBASE("SI", "zettawatt", 1.000000000000000E+21, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[exacwatt]",   new UBASE("SI", "exacwatt", 1.000000000000000E+18, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[EW]",   new UBASE("SI", "exacwatt", 1.000000000000000E+18, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[petawatt]",   new UBASE("SI", "petawatt", 1.000000000000000E+15, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[PW]",   new UBASE("SI", "petawatt", 1.000000000000000E+15, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[terawatt]",   new UBASE("SI", "terawatt", 1.000000000000000E+12, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[TW]",   new UBASE("SI", "terawatt", 1.000000000000000E+12, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[gigawatt]",   new UBASE("SI", "gigawatt", 1.000000000000000E+09, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[GW]",   new UBASE("SI", "gigawatt", 1.000000000000000E+09, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[megawatt]",   new UBASE("SI", "megawatt", 1.000000000000000E+06, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[MW]",   new UBASE("SI", "megawatt", 1.000000000000000E+06, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[kilowatt]",   new UBASE("SI", "kilowatt", 1.000000000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[kW]",   new UBASE("SI", "kilowatt", 1.000000000000000E+03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[hectowatt]",   new UBASE("SI", "hectowatt", 1.000000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[hW]",   new UBASE("SI", "hectowatt", 1.000000000000000E+02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[decawatt]",   new UBASE("SI", "decawatt", 1.000000000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[daW]",   new UBASE("SI", "decawatt", 1.000000000000000E+01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[deciwatt]",   new UBASE("SI", "deciwatt", 1.000000000000000E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[dW]",   new UBASE("SI", "deciwatt", 1.000000000000000E-01, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[centiwatt]",   new UBASE("SI", "centiwatt", 1.000000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[cW]",   new UBASE("SI", "centiwatt", 1.000000000000000E-02, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[milliwatt]",   new UBASE("SI", "milliwatt", 1.000000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[mW]",   new UBASE("SI", "milliwatt", 1.000000000000000E-03, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[microwatt]",   new UBASE("SI", "microwatt", 1.000000000000000E-06, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[uW]",   new UBASE("SI", "microwatt", 1.000000000000000E-06, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[nanowatt]",   new UBASE("SI", "nanowatt", 1.000000000000000E-09, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[nW]",   new UBASE("SI", "nanowatt", 1.000000000000000E-09, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[picowatt]",   new UBASE("SI", "picowatt", 1.000000000000000E-12, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[pW]",   new UBASE("SI", "picowatt", 1.000000000000000E-12, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[femtowatt]",   new UBASE("SI", "femtowatt", 1.000000000000000E-15, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[fW]",   new UBASE("SI", "femtowatt", 1.000000000000000E-15, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[attowatt]",   new UBASE("SI", "attowatt", 1.000000000000000E-18, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[aW]",   new UBASE("SI", "attowatt", 1.000000000000000E-18, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[zeptowatt]",   new UBASE("SI", "zeptowatt", 1.000000000000000E-21, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[zW]",   new UBASE("SI", "zeptowatt", 1.000000000000000E-21, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[yoctowatt]",   new UBASE("SI", "yoctowatt", 1.000000000000000E-24, "kg.m2/s3", "M.L2/T3", "1.0"));
      unit.put("SI[yW]",   new UBASE("SI", "yoctowatt", 1.000000000000000E-24, "kg.m2/s3", "M.L2/T3", "1.0"));
      _map.put("power",   new BaseSystem("power", unit, "1.0"));

      unit.clear();


   }

}
// EOF
