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
// File Flow.cpp
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

#include"Flow.hpp"

Flow& Flow::Instance(void)
{
    static Flow singleton;
    return singleton;
}

Flow::Flow(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["US[barrel-oil-per-stream-day]"] = UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0");
   unit["US[BOPSD]"] = UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0");
   unit["US[bopsd]"] = UBASE("US", "barrel-oil-per-stream-day", 1.589872949280000E-01, "m3/s", "L3/T", "1.0");
   unit["CAN[barrel-oil-per-calendar-day]"] = UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0");
   unit["CAN[BOPCD]"] = UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0");
   unit["CAN[bopcd]"] = UBASE("CAN", "barrel-oil-per-calendar-day", 1.840130728333330E-06, "m3/s", "L3/T", "1.0");
   unit["Imperial[cubic-foot-per-hour]"] = UBASE("Imperial", "cubic-foot-per-hour", 7.865790720000000E-06, "m3/s", "L3/T", "1.0");
   unit["Imperial[ft3/hr]"] = UBASE("Imperial", "cubic-foot-per-hour", 7.865790720000000E-06, "m3/s", "L3/T", "1.0");
   unit["Imperial[cubic-foot-per-minute]"] = UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[cfm]"] = UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[ft3/min]"] = UBASE("Imperial", "cubic-foot-per-minute", 4.719474432000000E-04, "m3/s", "L3/T", "1.0");
   unit["FPS[cubic-foot-per-second]"] = UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0");
   unit["FPS[cfs]"] = UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0");
   unit["FPS[ft3/sec]"] = UBASE("FPS", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0");
   unit["Imperial[cubic-foot-per-second]"] = UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0");
   unit["Imperial[cfs]"] = UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0");
   unit["Imperial[ft3/sec]"] = UBASE("Imperial", "cubic-foot-per-second", 2.831684659200000E-02, "m3/s", "L3/T", "1.0");
   unit["SI[cubic-meter-per-hour]"] = UBASE("SI", "cubic-meter-per-hour", 2.777777777777780E-04, "m3/s", "L3/T", "1.0");
   unit["SI[m3/hr]"] = UBASE("SI", "cubic-meter-per-hour", 2.777777777777780E-04, "m3/s", "L3/T", "1.0");
   unit["SI[cubic-meter-per-minute]"] = UBASE("SI", "cubic-meter-per-minute", 1.666666666666670E-02, "m3/s", "L3/T", "1.0");
   unit["SI[m3/min]"] = UBASE("SI", "cubic-meter-per-minute", 1.666666666666670E-02, "m3/s", "L3/T", "1.0");
   unit["SI[cubic-meter-per-second]"] = UBASE("SI", "cubic-meter-per-second", 1.000000000000000E+00, "m3/s", "L3/T", "1.0");
   unit["SI[m3/sec]"] = UBASE("SI", "cubic-meter-per-second", 1.000000000000000E+00, "m3/s", "L3/T", "1.0");
   unit["Imperial[cumec]"] = UBASE("Imperial", "cumec", 1.000000000000000E+00, "m3/s", "L3/T", "1.0");
   unit["Imperial[musec]"] = UBASE("Imperial", "cumec", 1.000000000000000E+00, "m3/s", "L3/T", "1.0");
   unit["US[gallon-per-day-per-capita]"] = UBASE("US", "gallon-per-day-per-capita", 4.381263638888890E-08, "m3/s", "L3/T", "1.0");
   unit["US[gpdpc]"] = UBASE("US", "gallon-per-day-per-capita", 4.381263638888890E-08, "m3/s", "L3/T", "1.0");
   unit["UK[gallon-per-hour]"] = UBASE("UK", "gallon-per-hour", 1.262803333333330E-06, "m3/s", "L3/T", "1.0");
   unit["UK[gph]"] = UBASE("UK", "gallon-per-hour", 1.262803333333330E-06, "m3/s", "L3/T", "1.0");
   unit["US[gallon-per-hour]"] = UBASE("US", "gallon-per-hour", 1.051503273333330E-06, "m3/s", "L3/T", "1.0");
   unit["US[gph]"] = UBASE("US", "gallon-per-hour", 1.051503273333330E-06, "m3/s", "L3/T", "1.0");
   unit["UK[gallon-per-minute]"] = UBASE("UK", "gallon-per-minute", 7.576820000000000E-05, "m3/s", "L3/T", "1.0");
   unit["UK[gpm]"] = UBASE("UK", "gallon-per-minute", 7.576820000000000E-05, "m3/s", "L3/T", "1.0");
   unit["US[gallon-per-minute]"] = UBASE("US", "gallon-per-minute", 6.309019640000000E-05, "m3/s", "L3/T", "1.0");
   unit["US[gpm]"] = UBASE("US", "gallon-per-minute", 6.309019640000000E-05, "m3/s", "L3/T", "1.0");
   unit["UK[gallon-per-second]"] = UBASE("UK", "gallon-per-second", 4.546092000000000E-03, "m3/s", "L3/T", "1.0");
   unit["UK[gps]"] = UBASE("UK", "gallon-per-second", 4.546092000000000E-03, "m3/s", "L3/T", "1.0");
   unit["US[gallon-per-second]"] = UBASE("US", "gallon-per-second", 3.785411784000000E-03, "m3/s", "L3/T", "1.0");
   unit["US[gps]"] = UBASE("US", "gallon-per-second", 3.785411784000000E-03, "m3/s", "L3/T", "1.0");
   unit["Scientific[liter-per-hour]"] = UBASE("Scientific", "liter-per-hour", 2.777777777777780E-07, "m3/s", "L3/T", "1.0");
   unit["Scientific[l/hr]"] = UBASE("Scientific", "liter-per-hour", 2.777777777777780E-07, "m3/s", "L3/T", "1.0");
   unit["Scientific[liter-per-minute]"] = UBASE("Scientific", "liter-per-minute", 1.666666666666670E-05, "m3/s", "L3/T", "1.0");
   unit["Scientific[l/min]"] = UBASE("Scientific", "liter-per-minute", 1.666666666666670E-05, "m3/s", "L3/T", "1.0");
   unit["Scientific[liter-per-second]"] = UBASE("Scientific", "liter-per-second", 1.000000000000000E-03, "m3/s", "L3/T", "1.0");
   unit["Scientific[l/sec]"] = UBASE("Scientific", "liter-per-second", 1.000000000000000E-03, "m3/s", "L3/T", "1.0");
   unit["UK[lusec]"] = UBASE("UK", "lusec", 1.000000000000000E-03, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch]"] = UBASE("Imperial", "miners-inch", 7.451801734736840E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(CO)]"] = UBASE("Imperial", "miners-inch(CO)", 7.451801734740000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(NoCA)]"] = UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(NV)]"] = UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(AZ)]"] = UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(OR)]"] = UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(MT)]"] = UBASE("Imperial", "miners-inch(NoCA)", 7.079211648000000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(SoCA)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(ID)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(KS)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(NK)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(SD)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(ND)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(NM)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[miners-inch(WA)]"] = UBASE("Imperial", "miners-inch(SoCA)", 5.663369318400000E-04, "m3/s", "L3/T", "1.0");
   unit["Imperial[musec(pump)]"] = UBASE("Imperial", "musec(pump)", 1.000000000000000E+00, "m3/s", "L3/T", "1.0");
   unit["Imperial[cumec(pump)]"] = UBASE("Imperial", "musec(pump)", 1.000000000000000E+00, "m3/s", "L3/T", "1.0");
   unit["French[pouce-fontainier(1st-definition)]"] = UBASE("French", "pouce-fontainier(1st-definition)", 3.201591794112180E-04, "m3/s", "L3/T", "1.0");
   unit["French[pf1]"] = UBASE("French", "pouce-fontainier(1st-definition)", 3.201591794112180E-04, "m3/s", "L3/T", "1.0");
   unit["French[pouce-fontainier(standardized)]"] = UBASE("French", "pouce-fontainier(standardized)", 2.221674603101390E-04, "m3/s", "L3/T", "1.0");
   unit["French[pfs]"] = UBASE("French", "pouce-fontainier(standardized)", 2.221674603101390E-04, "m3/s", "L3/T", "1.0");
   unit["Scientific[sverdup]"] = UBASE("Scientific", "sverdup", 1.000000000000000E-06, "m3/s", "L3/T", "1.0");
   unit["US[water-inch]"] = UBASE("US", "water-inch", 1.104078437000000E-04, "m3/s", "L3/T", "1.0");
   _map["flow"] = BaseSystem("flow", unit, "1.0");

   unit.clear();


}

// EOF
