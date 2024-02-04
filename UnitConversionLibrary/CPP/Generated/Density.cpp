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
// File Density.cpp
//
// Units for Density
//
// Class for Density units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Density.hpp"

Density& Density::Instance(void)
{
    static Density singleton;
    return singleton;
}

Density::Density(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["CAN[drex]"] = UBASE("CAN", "drex", 1.000000000000000E-07, "kg/m", "M/L", "1.0");
   unit["French[denier]"] = UBASE("French", "denier", 1.111111111111110E-07, "kg/m", "M/L", "1.0");
   unit["French[den]"] = UBASE("French", "denier", 1.111111111111110E-07, "kg/m", "M/L", "1.0");
   unit["Imperial[pound-per-inch]"] = UBASE("Imperial", "pound-per-inch", 1.785796732283460E+01, "kg/m", "M/L", "1.0");
   unit["Imperial[lb/in]"] = UBASE("Imperial", "pound-per-inch", 1.785796732283460E+01, "kg/m", "M/L", "1.0");
   unit["Imperial[pound-per-foot]"] = UBASE("Imperial", "pound-per-foot", 1.488163943569550E+00, "kg/m", "M/L", "1.0");
   unit["Imperial[lb/ft]"] = UBASE("Imperial", "pound-per-foot", 1.488163943569550E+00, "kg/m", "M/L", "1.0");
   unit["Imperial[pound-per-yard]"] = UBASE("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", "M/L", "1.0");
   unit["Imperial[lb/yd]"] = UBASE("Imperial", "pound-per-yard", 4.960546478565180E-01, "kg/m", "M/L", "1.0");
   unit["SI[kilogram-per-meter]"] = UBASE("SI", "kilogram-per-meter", 1.000000000000000E+00, "kg/m", "M/L", "1.0");
   unit["SI[kg/m]"] = UBASE("SI", "kilogram-per-meter", 1.000000000000000E+00, "kg/m", "M/L", "1.0");
   unit["SI[kilogram-per-centimeter]"] = UBASE("SI", "kilogram-per-centimeter", 1.000000000000000E+02, "kg/m", "M/L", "1.0");
   unit["SI[kg/cm]"] = UBASE("SI", "kilogram-per-centimeter", 1.000000000000000E+02, "kg/m", "M/L", "1.0");
   unit["SI[kilogram-per-decimeter]"] = UBASE("SI", "kilogram-per-decimeter", 1.000000000000000E+01, "kg/m", "M/L", "1.0");
   unit["SI[kg/dm]"] = UBASE("SI", "kilogram-per-decimeter", 1.000000000000000E+01, "kg/m", "M/L", "1.0");
   unit["Scientific[gram-per-meter]"] = UBASE("Scientific", "gram-per-meter", 1.000000000000000E-03, "kg/m", "M/L", "1.0");
   unit["Scientific[g/m]"] = UBASE("Scientific", "gram-per-meter", 1.000000000000000E-03, "kg/m", "M/L", "1.0");
   unit["Scientific[gram-per-decimeter]"] = UBASE("Scientific", "gram-per-decimeter", 1.000000000000000E-04, "kg/m", "M/L", "1.0");
   unit["Scientific[g/dm]"] = UBASE("Scientific", "gram-per-decimeter", 1.000000000000000E-04, "kg/m", "M/L", "1.0");
   unit["Scientific[gram-per-centimeter]"] = UBASE("Scientific", "gram-per-centimeter", 1.000000000000000E-05, "kg/m", "M/L", "1.0");
   unit["Scientific[g/cm]"] = UBASE("Scientific", "gram-per-centimeter", 1.000000000000000E-05, "kg/m", "M/L", "1.0");
   unit["Scientific[gram-per-millimeter]"] = UBASE("Scientific", "gram-per-millimeter", 1.000000000000000E-06, "kg/m", "M/L", "1.0");
   unit["Scientific[g/mm]"] = UBASE("Scientific", "gram-per-millimeter", 1.000000000000000E-06, "kg/m", "M/L", "1.0");
   unit["UK[manches-ter]"] = UBASE("UK", "manches-ter", 1.937713468189520E-06, "kg/m", "M/L", "1.0");
   unit["SI[tex]"] = UBASE("SI", "tex", 1.000000000000000E-06, "kg/m", "M/L", "1.0");
   unit["UK[poumar]"] = UBASE("UK", "poumar", 4.960546478565180E-07, "kg/m", "M/L", "1.0");
   unit["UK[yarn-number]"] = UBASE("UK", "yarn-number", 1.937713468189520E-06, "kg/m", "M/L", "1.0");
   unit["US[drex]"] = UBASE("US", "drex", 1.000000000000000E-07, "kg/m", "M/L", "1.0");
   unit["Imperial[grain-per-100-yards]"] = UBASE("Imperial", "grain-per-100-yards", 7.086494969378830E-07, "kg/m", "M/L", "1.0");
   unit["Imperial[gr/100-yd]"] = UBASE("Imperial", "grain-per-100-yards", 7.086494969378830E-07, "kg/m", "M/L", "1.0");
   unit["Imperial[grain-per-120-yards]"] = UBASE("Imperial", "grain-per-120-yards", 5.905412474482360E-07, "kg/m", "M/L", "1.0");
   unit["Imperial[gr/120-yd]"] = UBASE("Imperial", "grain-per-120-yards", 5.905412474482360E-07, "kg/m", "M/L", "1.0");
   unit["UK[ton-per-1000-yards]"] = UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0");
   unit["UK[t/1000-yd]"] = UBASE("UK", "ton-per-1000-yards", 1.111162411198600E+00, "kg/m", "M/L", "1.0");
   unit["UK[ton-per-mile]"] = UBASE("UK", "ton-per-mile", 6.313422790901140E-01, "kg/m", "M/L", "1.0");
   unit["UK[t/mi]"] = UBASE("UK", "ton-per-mile", 6.313422790901140E-01, "kg/m", "M/L", "1.0");
   unit["UK[ton-per-yard]"] = UBASE("UK", "ton-per-yard", 1.111162411198600E+03, "kg/m", "M/L", "1.0");
   unit["UK[t/yd]"] = UBASE("UK", "ton-per-yard", 1.111162411198600E+03, "kg/m", "M/L", "1.0");
   unit["UK[ton-per-foot]"] = UBASE("UK", "ton-per-foot", 3.333487233595800E+03, "kg/m", "M/L", "1.0");
   unit["UK[t/ft]"] = UBASE("UK", "ton-per-foot", 3.333487233595800E+03, "kg/m", "M/L", "1.0");
   unit["UK[ton-per-meter]"] = UBASE("UK", "ton-per-meter", 1.000000000000000E+03, "kg/m", "M/L", "1.0");
   unit["UK[t/m]"] = UBASE("UK", "ton-per-meter", 1.000000000000000E+03, "kg/m", "M/L", "1.0");
   unit["SI[ton-per-kilometer]"] = UBASE("SI", "ton-per-kilometer", 1.000000000000000E+00, "kg/m", "M/L", "1.0");
   unit["SI[t/km]"] = UBASE("SI", "ton-per-kilometer", 1.000000000000000E+00, "kg/m", "M/L", "1.0");
   _map["linearDensity"] = BaseSystem("linearDensity", unit, "1.0");

   unit.clear();


   unit["Imperial[base-box]"] = UBASE("Imperial", "base-box", 2.241931057522830E-02, "kg/m2", "M/L2", "1.0");
   unit["Imperial[basis-box]"] = UBASE("Imperial", "basis-box", 2.241931057522830E-02, "kg/m2", "M/L2", "1.0");
   unit["Scientific[gram-per-square-millmeter]"] = UBASE("Scientific", "gram-per-square-millmeter", 1.000000000000000E+03, "kg/m2", "M/L2", "1.0");
   unit["Scientific[kg/mm2]"] = UBASE("Scientific", "gram-per-square-millmeter", 1.000000000000000E+03, "kg/m2", "M/L2", "1.0");
   unit["Scientific[gram-per-square-centimeter]"] = UBASE("Scientific", "gram-per-square-centimeter", 1.000000000000000E+01, "kg/m2", "M/L2", "1.0");
   unit["Scientific[kg/cm2]"] = UBASE("Scientific", "gram-per-square-centimeter", 1.000000000000000E+01, "kg/m2", "M/L2", "1.0");
   unit["Scientific[gram-per-square-meter]"] = UBASE("Scientific", "gram-per-square-meter", 1.000000000000000E-03, "kg/m2", "M/L2", "1.0");
   unit["Scientific[g-m2]"] = UBASE("Scientific", "gram-per-square-meter", 1.000000000000000E-03, "kg/m2", "M/L2", "1.0");
   unit["Imperial[inch-of-rainfall]"] = UBASE("Imperial", "inch-of-rainfall", 2.539592330000000E+01, "kg/m2", "M/L2", "1.0");
   unit["Scientific[kilogram-per-hectare]"] = UBASE("Scientific", "kilogram-per-hectare", 1.000000000000000E-04, "kg/m2", "M/L2", "1.0");
   unit["Scientific[kg/ha]"] = UBASE("Scientific", "kilogram-per-hectare", 1.000000000000000E-04, "kg/m2", "M/L2", "1.0");
   unit["SI[kilogram-per-square-kilometer]"] = UBASE("SI", "kilogram-per-square-kilometer", 1.000000000000000E-06, "kg/m2", "M/L2", "1.0");
   unit["SI[kg/km2]"] = UBASE("SI", "kilogram-per-square-kilometer", 1.000000000000000E-06, "kg/m2", "M/L2", "1.0");
   unit["SI[kilogram-per-square-meter]"] = UBASE("SI", "kilogram-per-square-meter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0");
   unit["SI[kg/m2]"] = UBASE("SI", "kilogram-per-square-meter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0");
   unit["SI[kilogram-per-square-centimeter]"] = UBASE("SI", "kilogram-per-square-centimeter", 1.000000000000000E+04, "kg/m2", "M/L2", "1.0");
   unit["SI[kg/cm2]"] = UBASE("SI", "kilogram-per-square-centimeter", 1.000000000000000E+04, "kg/m2", "M/L2", "1.0");
   unit["Scientific[milligram-per-square-centimeter]"] = UBASE("Scientific", "milligram-per-square-centimeter", 1.000000000000000E-02, "kg/m2", "M/L2", "1.0");
   unit["Scientific[mg/cm2]"] = UBASE("Scientific", "milligram-per-square-centimeter", 1.000000000000000E-02, "kg/m2", "M/L2", "1.0");
   unit["Scientific[milligram-per-square-millimeter]"] = UBASE("Scientific", "milligram-per-square-millimeter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0");
   unit["Scientific[mg/mm2]"] = UBASE("Scientific", "milligram-per-square-millimeter", 1.000000000000000E+00, "kg/m2", "M/L2", "1.0");
   unit["UK[ounce-per-square-foot]"] = UBASE("UK", "ounce-per-square-foot", 3.051517057461200E-01, "kg/m2", "M/L2", "1.0");
   unit["UK[oz/ft2]"] = UBASE("UK", "ounce-per-square-foot", 3.051517057461200E-01, "kg/m2", "M/L2", "1.0");
   unit["UK[ounce-per-square-inch]"] = UBASE("UK", "ounce-per-square-inch", 4.394184562744120E+01, "kg/m2", "M/L2", "1.0");
   unit["UK[oz/in2]"] = UBASE("UK", "ounce-per-square-inch", 4.394184562744120E+01, "kg/m2", "M/L2", "1.0");
   unit["UK[ounce-per-square-yard]"] = UBASE("UK", "ounce-per-square-yard", 3.390574508290220E-02, "kg/m2", "M/L2", "1.0");
   unit["UK[oz/yd2]"] = UBASE("UK", "ounce-per-square-yard", 3.390574508290220E-02, "kg/m2", "M/L2", "1.0");
   unit["Imperial[pound-per-acre]"] = UBASE("Imperial", "pound-per-acre", 1.120851156194460E-04, "kg/m2", "M/L2", "1.0");
   unit["Imperial[lb/ac]"] = UBASE("Imperial", "pound-per-acre", 1.120851156194460E-04, "kg/m2", "M/L2", "1.0");
   unit["Imperial[pound-per-square-mile]"] = UBASE("Imperial", "pound-per-square-mile", 1.751329931553840E-07, "kg/m2", "M/L2", "1.0");
   unit["Imperial[lb/mi2]"] = UBASE("Imperial", "pound-per-square-mile", 1.751329931553840E-07, "kg/m2", "M/L2", "1.0");
   unit["Imperial[pound-per-square-foot]"] = UBASE("Imperial", "pound-per-square-foot", 4.882427636383050E+00, "kg/m2", "M/L2", "1.0");
   unit["Imperial[lb/ft2]"] = UBASE("Imperial", "pound-per-square-foot", 4.882427636383050E+00, "kg/m2", "M/L2", "1.0");
   unit["Imperial[pound-per-square-inch]"] = UBASE("Imperial", "pound-per-square-inch", 7.030695796391590E+02, "kg/m2", "M/L2", "1.0");
   unit["Imperial[lb/in2]"] = UBASE("Imperial", "pound-per-square-inch", 7.030695796391590E+02, "kg/m2", "M/L2", "1.0");
   unit["Imperial[pound-per-square-yard]"] = UBASE("Imperial", "pound-per-square-yard", 5.424919595981170E-01, "kg/m2", "M/L2", "1.0");
   unit["Imperial[lb/yd2]"] = UBASE("Imperial", "pound-per-square-yard", 5.424919595981170E-01, "kg/m2", "M/L2", "1.0");
   unit["UK[ton-per-square-mile]"] = UBASE("UK", "ton-per-square-mile", 3.922979046680600E-04, "kg/m2", "M/L2", "1.0");
   unit["UK[ton/mi2]"] = UBASE("UK", "ton-per-square-mile", 3.922979046680600E-04, "kg/m2", "M/L2", "1.0");
   unit["UK[ton-per-square-yard]"] = UBASE("UK", "ton-per-square-yard", 1.215181989499780E+03, "kg/m2", "M/L2", "1.0");
   unit["UK[ton/yd2]"] = UBASE("UK", "ton-per-square-yard", 1.215181989499780E+03, "kg/m2", "M/L2", "1.0");
   unit["UK[ton-per-square-foot]"] = UBASE("UK", "ton-per-square-foot", 1.093663790549800E+04, "kg/m2", "M/L2", "1.0");
   unit["UK[ton/ft2]"] = UBASE("UK", "ton-per-square-foot", 1.093663790549800E+04, "kg/m2", "M/L2", "1.0");
   unit["UK[ton-per-square-inch]"] = UBASE("UK", "ton-per-square-inch", 1.574875858391720E+06, "kg/m2", "M/L2", "1.0");
   unit["UK[ton/in2]"] = UBASE("UK", "ton-per-square-inch", 1.574875858391720E+06, "kg/m2", "M/L2", "1.0");
   _map["surfaceDensity"] = BaseSystem("surfaceDensity", unit, "1.0");

   unit.clear();


   unit["Scientific[clarke-degree]"] = UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0");
   unit["Scientific[oTHB]"] = UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0");
   unit["Scientific[oe]"] = UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0");
   unit["Scientific[oClarke]"] = UBASE("Scientific", "clarke-degree", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0");
   unit["French[degree-hydrotimetrique-francais]"] = UBASE("French", "degree-hydrotimetrique-francais", 1.000000000000000E-02, "kg/m3", "M/L3", "1.0");
   unit["French[oDHF]"] = UBASE("French", "degree-hydrotimetrique-francais", 1.000000000000000E-02, "kg/m3", "M/L3", "1.0");
   unit["Scientific[gammil]"] = UBASE("Scientific", "gammil", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0");
   unit["Imperial[grain-percubic-foot]"] = UBASE("Imperial", "grain-percubic-foot", 2.288351910565730E-03, "kg/m3", "M/L3", "1.0");
   unit["Imperial[gr/ft3]"] = UBASE("Imperial", "grain-percubic-foot", 2.288351910565730E-03, "kg/m3", "M/L3", "1.0");
   unit["Imperial[grain-per-cubic-inch]"] = UBASE("Imperial", "grain-per-cubic-inch", 3.954272101457590E+00, "kg/m3", "M/L3", "1.0");
   unit["Imperial[gr/in3]"] = UBASE("Imperial", "grain-per-cubic-inch", 3.954272101457590E+00, "kg/m3", "M/L3", "1.0");
   unit["US[grain-per-gallon]"] = UBASE("US", "grain-per-gallon", 1.711806104527090E-02, "kg/m3", "M/L3", "1.0");
   unit["US[gr/gal]"] = UBASE("US", "grain-per-gallon", 1.711806104527090E-02, "kg/m3", "M/L3", "1.0");
   unit["UK[grain-per-gallon]"] = UBASE("UK", "grain-per-gallon", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0");
   unit["UK[gr/gal]"] = UBASE("UK", "grain-per-gallon", 1.425376125252190E-02, "kg/m3", "M/L3", "1.0");
   unit["Scientific[gram-per-cubic-millimeter]"] = UBASE("Scientific", "gram-per-cubic-millimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0");
   unit["Scientific[g/mm3]"] = UBASE("Scientific", "gram-per-cubic-millimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0");
   unit["Scientific[gram-per-cubic-centimeter]"] = UBASE("Scientific", "gram-per-cubic-centimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0");
   unit["Scientific[g.cm-3]"] = UBASE("Scientific", "gram-per-cubic-centimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0");
   unit["Scientific[gram-per-cubic-decimeter]"] = UBASE("Scientific", "gram-per-cubic-decimeter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0");
   unit["Scientific[g/dm3]"] = UBASE("Scientific", "gram-per-cubic-decimeter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0");
   unit["Scientific[gram-per-cubic-meter]"] = UBASE("Scientific", "gram-per-cubic-meter", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0");
   unit["Scientific[g/m3]"] = UBASE("Scientific", "gram-per-cubic-meter", 1.000000000000000E-03, "kg/m3", "M/L3", "1.0");
   unit["French[hydrotimeter-degree]"] = UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0");
   unit["French[oTHF]"] = UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0");
   unit["French[of]"] = UBASE("French", "hydrotimeter-degree", 1.000000000000000E-04, "kg/m3", "M/L3", "1.0");
   unit["Scientific[kilogram-per-cubic-centimeter]"] = UBASE("Scientific", "kilogram-per-cubic-centimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0");
   unit["Scientific[kg/cm3]"] = UBASE("Scientific", "kilogram-per-cubic-centimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0");
   unit["Scientific[kilogram-per-cubic-decimeter]"] = UBASE("Scientific", "kilogram-per-cubic-decimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0");
   unit["Scientific[kg/dm3]"] = UBASE("Scientific", "kilogram-per-cubic-decimeter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0");
   unit["SI[kilogram-per-cubic-meter]"] = UBASE("SI", "kilogram-per-cubic-meter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0");
   unit["SI[kg/m3]"] = UBASE("SI", "kilogram-per-cubic-meter", 1.000000000000000E+00, "kg/m3", "M/L3", "1.0");
   unit["US[ounce-per-gallon]"] = UBASE("US", "ounce-per-gallon", 7.489151707306040E+00, "kg/m3", "M/L3", "1.0");
   unit["US[oz/gal]"] = UBASE("US", "ounce-per-gallon", 7.489151707306040E+00, "kg/m3", "M/L3", "1.0");
   unit["UK[ounce-per-gallon]"] = UBASE("UK", "ounce-per-gallon", 6.236020547978350E+00, "kg/m3", "M/L3", "1.0");
   unit["UK[oz/gal]"] = UBASE("UK", "ounce-per-gallon", 6.236020547978350E+00, "kg/m3", "M/L3", "1.0");
   unit["Imperial[pound-per-cubic-yard]"] = UBASE("Imperial", "pound-per-cubic-yard", 5.932764212577830E-01, "kg/m3", "M/L3", "1.0");
   unit["Imperial[lb/yd3]"] = UBASE("Imperial", "pound-per-cubic-yard", 5.932764212577830E-01, "kg/m3", "M/L3", "1.0");
   unit["FPS[pound-per-cubic-foot]"] = UBASE("FPS", "pound-per-cubic-foot", 1.601846337396010E+01, "kg/m3", "M/L3", "1.0");
   unit["FPS[lb/ft3]"] = UBASE("FPS", "pound-per-cubic-foot", 1.601846337396010E+01, "kg/m3", "M/L3", "1.0");
   unit["Imperial[pound-per-cubic-inch]"] = UBASE("Imperial", "pound-per-cubic-inch", 2.767990471020310E+04, "kg/m3", "M/L3", "1.0");
   unit["Imperial[lb/in3]"] = UBASE("Imperial", "pound-per-cubic-inch", 2.767990471020310E+04, "kg/m3", "M/L3", "1.0");
   unit["US[pound-per-gallon]"] = UBASE("US", "pound-per-gallon", 1.198264273168970E+02, "kg/m3", "M/L3", "1.0");
   unit["US[lb/gal]"] = UBASE("US", "pound-per-gallon", 1.198264273168970E+02, "kg/m3", "M/L3", "1.0");
   unit["UK[pound-per-gallon]"] = UBASE("UK", "pound-per-gallon", 9.977632876765360E+01, "kg/m3", "M/L3", "1.0");
   unit["UK[lb/gal]"] = UBASE("UK", "pound-per-gallon", 9.977632876765360E+01, "kg/m3", "M/L3", "1.0");
   unit["Scientific[ton-per-cubic-meter]"] = UBASE("Scientific", "ton-per-cubic-meter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0");
   unit["Scientific[t/m3]"] = UBASE("Scientific", "ton-per-cubic-meter", 1.000000000000000E+03, "kg/m3", "M/L3", "1.0");
   unit["Scientific[ton-per-cubic-decimeter]"] = UBASE("Scientific", "ton-per-cubic-decimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0");
   unit["Scientific[t/dm3]"] = UBASE("Scientific", "ton-per-cubic-decimeter", 1.000000000000000E+06, "kg/m3", "M/L3", "1.0");
   unit["Scientific[ton-per-cubic-centimeter]"] = UBASE("Scientific", "ton-per-cubic-centimeter", 1.000000000000000E+09, "kg/m3", "M/L3", "1.0");
   unit["Scientific[t/cm3]"] = UBASE("Scientific", "ton-per-cubic-centimeter", 1.000000000000000E+09, "kg/m3", "M/L3", "1.0");
   unit["UK[ton-per-cubic-yard]"] = UBASE("UK", "ton-per-cubic-yard", 1.328939183617430E+03, "kg/m3", "M/L3", "1.0");
   unit["UK[ton/yd3]"] = UBASE("UK", "ton-per-cubic-yard", 1.328939183617430E+03, "kg/m3", "M/L3", "1.0");
   unit["UK[ton-per-cubic-foot]"] = UBASE("UK", "ton-per-cubic-foot", 3.588135795767070E+04, "kg/m3", "M/L3", "1.0");
   unit["UK[ton/ft3]"] = UBASE("UK", "ton-per-cubic-foot", 3.588135795767070E+04, "kg/m3", "M/L3", "1.0");
   unit["UK[ton-per-cubic-inch]"] = UBASE("UK", "ton-per-cubic-inch", 6.200298655085500E+07, "kg/m3", "M/L3", "1.0");
   unit["UK[ton/in3]"] = UBASE("UK", "ton-per-cubic-inch", 6.200298655085500E+07, "kg/m3", "M/L3", "1.0");
   _map["density"] = BaseSystem("density", unit, "1.0");

   unit.clear();


}

// EOF
