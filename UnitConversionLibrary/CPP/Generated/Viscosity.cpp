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
// File Viscosity.cpp
//
// Units for Viscosity
//
// Class for Viscosity units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Viscosity.hpp"

Viscosity& Viscosity::Instance(void)
{
    static Viscosity singleton;
    return singleton;
}

Viscosity::Viscosity(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["cgs[centistokes]"] = UBASE("cgs", "centistokes", 1.000000000000000E-06, "m2/s", "L2/T", "1.0");
   unit["cgs[cSt]"] = UBASE("cgs", "centistokes", 1.000000000000000E-06, "m2/s", "L2/T", "1.0");
   unit["cgs[lentor]"] = UBASE("cgs", "lentor", 1.000000000000000E-08, "m2/s", "L2/T", "1.0");
   unit["cgs[millistokes]"] = UBASE("cgs", "millistokes", 1.000000000000000E-07, "m2/s", "L2/T", "1.0");
   unit["cgs[mSt]"] = UBASE("cgs", "millistokes", 1.000000000000000E-07, "m2/s", "L2/T", "1.0");
   unit["cgs[stokes]"] = UBASE("cgs", "stokes", 1.000000000000000E-08, "m2/s", "L2/T", "1.0");
   unit["cgs[St]"] = UBASE("cgs", "stokes", 1.000000000000000E-08, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-foot-per-hour]"] = UBASE("Imperial", "square-foot-per-hour", 2.580640000000000E-05, "m2/s", "L2/T", "1.0");
   unit["Imperial[ft2/hr]"] = UBASE("Imperial", "square-foot-per-hour", 2.580640000000000E-05, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-foot-per-second]"] = UBASE("Imperial", "square-foot-per-second", 9.290304000000000E-02, "m2/s", "L2/T", "1.0");
   unit["Imperial[ft2/sec]"] = UBASE("Imperial", "square-foot-per-second", 9.290304000000000E-02, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-inch-per-hour]"] = UBASE("Imperial", "square-inch-per-hour", 1.792111111111110E-07, "m2/s", "L2/T", "1.0");
   unit["Imperial[in2/hr]"] = UBASE("Imperial", "square-inch-per-hour", 1.792111111111110E-07, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-inch-per-second]"] = UBASE("Imperial", "square-inch-per-second", 6.451600000000000E-04, "m2/s", "L2/T", "1.0");
   unit["Imperial[in2/sec]"] = UBASE("Imperial", "square-inch-per-second", 6.451600000000000E-04, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-meter-per-hour]"] = UBASE("Imperial", "square-meter-per-hour", 2.777777777777780E-04, "m2/s", "L2/T", "1.0");
   unit["Imperial[m2/hr]"] = UBASE("Imperial", "square-meter-per-hour", 2.777777777777780E-04, "m2/s", "L2/T", "1.0");
   unit["SI[square-meter-per-second]"] = UBASE("SI", "square-meter-per-second", 1.000000000000000E+00, "m2/s", "L2/T", "1.0");
   unit["SI[m2/sec]"] = UBASE("SI", "square-meter-per-second", 1.000000000000000E+00, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-centimeter-per-hour]"] = UBASE("Imperial", "square-centimeter-per-hour", 2.777777777777780E-08, "m2/s", "L2/T", "1.0");
   unit["Imperial[cm2/hr]"] = UBASE("Imperial", "square-centimeter-per-hour", 2.777777777777780E-08, "m2/s", "L2/T", "1.0");
   unit["SI[square-centimeter-per-second]"] = UBASE("SI", "square-centimeter-per-second", 1.000000000000000E-04, "m2/s", "L2/T", "1.0");
   unit["SI[cm2/sec]"] = UBASE("SI", "square-centimeter-per-second", 1.000000000000000E-04, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-millimeter-per-hour]"] = UBASE("Imperial", "square-millimeter-per-hour", 2.777777777777780E-10, "m2/s", "L2/T", "1.0");
   unit["Imperial[mm2/hr]"] = UBASE("Imperial", "square-millimeter-per-hour", 2.777777777777780E-10, "m2/s", "L2/T", "1.0");
   unit["Imperial[square-millimeter-per-second]"] = UBASE("Imperial", "square-millimeter-per-second", 1.000000000000000E-06, "m2/s", "L2/T", "1.0");
   unit["Imperial[mm2/sec]"] = UBASE("Imperial", "square-millimeter-per-second", 1.000000000000000E-06, "m2/s", "L2/T", "1.0");
   _map["kinematicViscosity"] = BaseSystem("kinematicViscosity", unit, "1.0");

   unit.clear();


   unit["cgs[barye-second]"] = UBASE("cgs", "barye-second", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[barye-sec]"] = UBASE("cgs", "barye-second", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[centipoise]"] = UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[cP]"] = UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[cPo]"] = UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[dyne-second-per-square-centimeter]"] = UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[dyn-sec/cm2]"] = UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[]"] = UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[kilopound-hour-per-square-meter]"] = UBASE("Imperial", "kilopound-hour-per-square-meter", 3.530394000000000E+04, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[kip-hr/m2]"] = UBASE("Imperial", "kilopound-hour-per-square-meter", 3.530394000000000E+04, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[kilopound-second-per-square-meter]"] = UBASE("Imperial", "kilopound-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[kip-sec/m2]"] = UBASE("Imperial", "kilopound-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[millipoise]"] = UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[mP]"] = UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[mPo]"] = UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0");
   unit["SI[millipascal-second]"] = UBASE("SI", "millipascal-second", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["SI[mPa-sec]"] = UBASE("SI", "millipascal-second", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["MTS[pieze-second]"] = UBASE("MTS", "pieze-second", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["MTS[pz-sec]"] = UBASE("MTS", "pieze-second", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[poise]"] = UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[P]"] = UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["cgs[Po]"] = UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[pound-force-hour-per-square-foot]"] = UBASE("Imperial", "pound-force-hour-per-square-foot", 1.723689323292090E+05, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[lbf-hr/ft2]"] = UBASE("Imperial", "pound-force-hour-per-square-foot", 1.723689323292090E+05, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[pound-force-second-per-square-foot]"] = UBASE("Imperial", "pound-force-second-per-square-foot", 4.788025898033580E+01, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[lbf-sec/ft2]"] = UBASE("Imperial", "pound-force-second-per-square-foot", 4.788025898033580E+01, "kg/m.s", "M/L.T", "1.0");
   unit["FPS[reynolds]"] = UBASE("FPS", "reynolds", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0");
   unit["FPS[reyns]"] = UBASE("FPS", "reyns", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0");
   unit["MTS[sthene-second-per-square-meter]"] = UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["MTS[sthene-sec/m2]"] = UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["MTS[sn-sec/m2]"] = UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["MKpS[kilogram-force-second-per-square-meter]"] = UBASE("MKpS", "kilogram-force-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["MKpS[kgf-sec/m2]"] = UBASE("MKpS", "kilogram-force-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["SI[newton-second-per-square-meter]"] = UBASE("SI", "newton-second-per-square-meter", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["SI[N-sec/m2]"] = UBASE("SI", "newton-second-per-square-meter", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["SI[pascal-second]"] = UBASE("SI", "pascal-second", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["SI[Pa-sec]"] = UBASE("SI", "pascal-second", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["SI[poiseuille]"] = UBASE("SI", "poiseuille", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[poundal-second-per-square-foot]"] = UBASE("Imperial", "poundal-second-per-square-foot", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0");
   unit["Imperial[pdl-sec/ft2]"] = UBASE("Imperial", "poundal-second-per-square-foot", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0");
   unit["SI[yottapoiseuille]"] = UBASE("SI", "yottapoiseuille", 1.000000000000000E+24, "kg/m.s", "M/L.T", "1.0");
   unit["SI[YPo]"] = UBASE("SI", "yottapoiseuille", 1.000000000000000E+24, "kg/m.s", "M/L.T", "1.0");
   unit["SI[zettapoiseuille]"] = UBASE("SI", "zettapoiseuille", 1.000000000000000E+21, "kg/m.s", "M/L.T", "1.0");
   unit["SI[ZPo]"] = UBASE("SI", "zettapoiseuille", 1.000000000000000E+21, "kg/m.s", "M/L.T", "1.0");
   unit["SI[exacpoiseuille]"] = UBASE("SI", "exacpoiseuille", 1.000000000000000E+18, "kg/m.s", "M/L.T", "1.0");
   unit["SI[EPo]"] = UBASE("SI", "exacpoiseuille", 1.000000000000000E+18, "kg/m.s", "M/L.T", "1.0");
   unit["SI[petapoiseuille]"] = UBASE("SI", "petapoiseuille", 1.000000000000000E+15, "kg/m.s", "M/L.T", "1.0");
   unit["SI[PPo]"] = UBASE("SI", "petapoiseuille", 1.000000000000000E+15, "kg/m.s", "M/L.T", "1.0");
   unit["SI[terapoiseuille]"] = UBASE("SI", "terapoiseuille", 1.000000000000000E+12, "kg/m.s", "M/L.T", "1.0");
   unit["SI[TPo]"] = UBASE("SI", "terapoiseuille", 1.000000000000000E+12, "kg/m.s", "M/L.T", "1.0");
   unit["SI[gigapoiseuille]"] = UBASE("SI", "gigapoiseuille", 1.000000000000000E+09, "kg/m.s", "M/L.T", "1.0");
   unit["SI[GPo]"] = UBASE("SI", "gigapoiseuille", 1.000000000000000E+09, "kg/m.s", "M/L.T", "1.0");
   unit["SI[megapoiseuille]"] = UBASE("SI", "megapoiseuille", 1.000000000000000E+06, "kg/m.s", "M/L.T", "1.0");
   unit["SI[MPo]"] = UBASE("SI", "megapoiseuille", 1.000000000000000E+06, "kg/m.s", "M/L.T", "1.0");
   unit["SI[kilocpoiseuille]"] = UBASE("SI", "kilocpoiseuille", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["SI[kPo]"] = UBASE("SI", "kilocpoiseuille", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0");
   unit["SI[hectopoiseuille]"] = UBASE("SI", "hectopoiseuille", 1.000000000000000E+02, "kg/m.s", "M/L.T", "1.0");
   unit["SI[hPo]"] = UBASE("SI", "hectopoiseuille", 1.000000000000000E+02, "kg/m.s", "M/L.T", "1.0");
   unit["SI[decapoiseuille]"] = UBASE("SI", "decapoiseuille", 1.000000000000000E+01, "kg/m.s", "M/L.T", "1.0");
   unit["SI[daPo]"] = UBASE("SI", "decapoiseuille", 1.000000000000000E+01, "kg/m.s", "M/L.T", "1.0");
   unit["SI[decipoiseuille]"] = UBASE("SI", "decipoiseuille", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["SI[dPo]"] = UBASE("SI", "decipoiseuille", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0");
   unit["SI[centipoiseuille]"] = UBASE("SI", "centipoiseuille", 1.000000000000000E-02, "kg/m.s", "M/L.T", "1.0");
   unit["SI[cPo]"] = UBASE("SI", "centipoiseuille", 1.000000000000000E-02, "kg/m.s", "M/L.T", "1.0");
   unit["SI[millipoiseuille]"] = UBASE("SI", "millipoiseuille", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["SI[mPo]"] = UBASE("SI", "millipoiseuille", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0");
   unit["SI[micropoiseuille]"] = UBASE("SI", "micropoiseuille", 1.000000000000000E-06, "kg/m.s", "M/L.T", "1.0");
   unit["SI[uPo]"] = UBASE("SI", "micropoiseuille", 1.000000000000000E-06, "kg/m.s", "M/L.T", "1.0");
   unit["SI[nanopoiseuille]"] = UBASE("SI", "nanopoiseuille", 1.000000000000000E-09, "kg/m.s", "M/L.T", "1.0");
   unit["SI[nPo]"] = UBASE("SI", "nanopoiseuille", 1.000000000000000E-09, "kg/m.s", "M/L.T", "1.0");
   unit["SI[picopoiseuille]"] = UBASE("SI", "picopoiseuille", 1.000000000000000E-12, "kg/m.s", "M/L.T", "1.0");
   unit["SI[pPo]"] = UBASE("SI", "picopoiseuille", 1.000000000000000E-12, "kg/m.s", "M/L.T", "1.0");
   unit["SI[femtopoiseuille]"] = UBASE("SI", "femtopoiseuille", 1.000000000000000E-15, "kg/m.s", "M/L.T", "1.0");
   unit["SI[fPo]"] = UBASE("SI", "femtopoiseuille", 1.000000000000000E-15, "kg/m.s", "M/L.T", "1.0");
   unit["SI[attopoiseuille]"] = UBASE("SI", "attopoiseuille", 1.000000000000000E-18, "kg/m.s", "M/L.T", "1.0");
   unit["SI[aPo]"] = UBASE("SI", "attopoiseuille", 1.000000000000000E-18, "kg/m.s", "M/L.T", "1.0");
   unit["SI[zeptopoiseuille]"] = UBASE("SI", "zeptopoiseuille", 1.000000000000000E-21, "kg/m.s", "M/L.T", "1.0");
   unit["SI[zPo]"] = UBASE("SI", "zeptopoiseuille", 1.000000000000000E-21, "kg/m.s", "M/L.T", "1.0");
   unit["SI[yoctopoiseuille]"] = UBASE("SI", "yoctopoiseuille", 1.000000000000000E-24, "kg/m.s", "M/L.T", "1.0");
   unit["SI[yPo]"] = UBASE("SI", "yoctopoiseuille", 1.000000000000000E-24, "kg/m.s", "M/L.T", "1.0");
   _map["dynamicViscosity"] = BaseSystem("dynamicViscosity", unit, "1.0");

   unit.clear();


}

// EOF
