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
// File Flow.java
//
// Units for Flow
//
// Class for Flow units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class Flow extends SingleSystem
{
   private static Flow singleton_ = new Flow();

   public static Flow Instance()
   {
      return singleton_;
   }

   private Flow()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("US[barrel-oil-per-stream-day]",   new UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0"));
      unit.put("US[BOPSD]",   new UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0"));
      unit.put("US[bopsd]",   new UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0"));
      unit.put("CAN[barrel-oil-per-calendar-day]",   new UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("CAN[BOPCD]",   new UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("CAN[bopcd]",   new UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cubic-foot-per-hour]",   new UBASE("Imperial", "cubic-foot-per-hour", 7.865790720000000E-06, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[ft3/hr]",   new UBASE("Imperial", "cubic-foot-per-hour", 7.865790720000000E-06, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cubic-foot-per-minute]",   new UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cfm]",   new UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[ft3/min]",   new UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("FPS[cubic-foot-per-second]",   new UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0"));
      unit.put("FPS[cfs]",   new UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0"));
      unit.put("FPS[ft3/sec]",   new UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cubic-foot-per-second]",   new UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cfs]",   new UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[ft3/sec]",   new UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0"));
      unit.put("SI[cubic-meter-per-hour]",   new UBASE("SI", "cubic-meter-per-hour", 2.777777777777780E-04, "m3/s", "L3/T", "1.0"));
      unit.put("SI[m3/hr]",   new UBASE("SI", "cubic-meter-per-hour", 2.777777777777780E-04, "m3/s", "L3/T", "1.0"));
      unit.put("SI[cubic-meter-per-minute]",   new UBASE("SI", "cubic-meter-per-minute", 1.666666666666670E-02, "m3/s", "L3/T", "1.0"));
      unit.put("SI[m3/min]",   new UBASE("SI", "cubic-meter-per-minute", 1.666666666666670E-02, "m3/s", "L3/T", "1.0"));
      unit.put("SI[cubic-meter-per-second]",   new UBASE("SI", "cubic-meter-per-second", 1.000000000000000E+00, "m3/s", "L3/T", "1.0"));
      unit.put("SI[m3/sec]",   new UBASE("SI", "cubic-meter-per-second", 1.000000000000000E+00, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cumec]",   new UBASE("Imperial", "cumec", 1.000000000000000E+00, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[musec]",   new UBASE("Imperial", "cumec", 1.000000000000000E+00, "m3/s", "L3/T", "1.0"));
      unit.put("US[gallon-per-day-per-capita]",   new UBASE("US", "gallon-per-day-per-capita", 4.381263638888890E-08, "m3/s", "L3/T", "1.0"));
      unit.put("US[gpdpc]",   new UBASE("US", "gallon-per-day-per-capita", 4.381263638888890E-08, "m3/s", "L3/T", "1.0"));
      unit.put("UK[gallon-per-hour]",   new UBASE("UK", "gallon-per-hour", 1.262803333333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("UK[gph]",   new UBASE("UK", "gallon-per-hour", 1.262803333333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("US[gallon-per-hour]",   new UBASE("US", "gallon-per-hour", 1.051503273333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("US[gph]",   new UBASE("US", "gallon-per-hour", 1.051503273333330E-06, "m3/s", "L3/T", "1.0"));
      unit.put("UK[gallon-per-minute]",   new UBASE("UK", "gallon-per-minute", 7.576820000000000E-05, "m3/s", "L3/T", "1.0"));
      unit.put("UK[gpm]",   new UBASE("UK", "gallon-per-minute", 7.576820000000000E-05, "m3/s", "L3/T", "1.0"));
      unit.put("US[gallon-per-minute]",   new UBASE("US", "gallon-per-minute", 6.309019640000000E-05, "m3/s", "L3/T", "1.0"));
      unit.put("US[gpm]",   new UBASE("US", "gallon-per-minute", 6.309019640000000E-05, "m3/s", "L3/T", "1.0"));
      unit.put("UK[gallon-per-second]",   new UBASE("UK", "gallon-per-second", 4.546092000000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("UK[gps]",   new UBASE("UK", "gallon-per-second", 4.546092000000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("US[gallon-per-second]",   new UBASE("US", "gallon-per-second", 3.785411784000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("US[gps]",   new UBASE("US", "gallon-per-second", 3.785411784000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[liter-per-hour]",   new UBASE("Scientific", "liter-per-hour", 2.777777777777780E-07, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[l/hr]",   new UBASE("Scientific", "liter-per-hour", 2.777777777777780E-07, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[liter-per-minute]",   new UBASE("Scientific", "liter-per-minute", 1.666666666666670E-05, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[l/min]",   new UBASE("Scientific", "liter-per-minute", 1.666666666666670E-05, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[liter-per-second]",   new UBASE("Scientific", "liter-per-second", 1.000000000000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[l/sec]",   new UBASE("Scientific", "liter-per-second", 1.000000000000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("UK[lusec]",   new UBASE("UK", "lusec", 1.000000000000000E-03, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch]",   new UBASE("Imperial", "miners-inch", 7.451801734736840E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(CO)]",   new UBASE("Imperial", "miners-inch(CO)", 7.451801734740000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(NoCA)]",   new UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(NV)]",   new UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(AZ)]",   new UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(OR)]",   new UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(MT)]",   new UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(SoCA)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(ID)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(KS)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(NK)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(SD)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(ND)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(NM)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[miners-inch(WA)]",   new UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[musec(pump)]",   new UBASE("Imperial", "musec(pump)", 1.000000000000000E+00, "m3/s", "L3/T", "1.0"));
      unit.put("Imperial[cumec(pump)]",   new UBASE("Imperial", "musec(pump)", 1.000000000000000E+00, "m3/s", "L3/T", "1.0"));
      unit.put("French[pouce-fontainier(1st-definition)]",   new UBASE("French", "pouce-fontainier(1st-definition)", 3.201591794112180E-04, "m3/s", "L3/T", "1.0"));
      unit.put("French[pf1]",   new UBASE("French", "pouce-fontainier(1st-definition)", 3.201591794112180E-04, "m3/s", "L3/T", "1.0"));
      unit.put("French[pouce-fontainier(standardized)]",   new UBASE("French", "pouce-fontainier(standardized)", 2.221674603101390E-04, "m3/s", "L3/T", "1.0"));
      unit.put("French[pfs]",   new UBASE("French", "pouce-fontainier(standardized)", 2.221674603101390E-04, "m3/s", "L3/T", "1.0"));
      unit.put("Scientific[sverdup]",   new UBASE("Scientific", "sverdup", 1.000000000000000E-06, "m3/s", "L3/T", "1.0"));
      unit.put("US[water-inch]",   new UBASE("US", "water-inch", 1.104078437000000E-04, "m3/s", "L3/T", "1.0"));
      _map.put("flow",   new BaseSystem("flow", unit, "1.0"));

      unit.clear();


   }

}
// EOF
