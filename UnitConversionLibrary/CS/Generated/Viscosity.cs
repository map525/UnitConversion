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
// File Viscosity.cs
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

using System.Collections.Generic;

namespace UnitConversion
{
   public class Viscosity : SingleSystem
   {
       private static Viscosity singleton_ = new Viscosity();

       public static Viscosity Instance()
       {
           return singleton_;
       }

       private Viscosity() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("cgs[centistokes]",   new UBASE("cgs", "centistokes", 1.000000000000000E-06, "m2/s", "L2/T", "1.0"));
          unit.Add("cgs[cSt]",   new UBASE("cgs", "centistokes", 1.000000000000000E-06, "m2/s", "L2/T", "1.0"));
          unit.Add("cgs[lentor]",   new UBASE("cgs", "lentor", 1.000000000000000E-08, "m2/s", "L2/T", "1.0"));
          unit.Add("cgs[millistokes]",   new UBASE("cgs", "millistokes", 1.000000000000000E-07, "m2/s", "L2/T", "1.0"));
          unit.Add("cgs[mSt]",   new UBASE("cgs", "millistokes", 1.000000000000000E-07, "m2/s", "L2/T", "1.0"));
          unit.Add("cgs[stokes]",   new UBASE("cgs", "stokes", 1.000000000000000E-08, "m2/s", "L2/T", "1.0"));
          unit.Add("cgs[St]",   new UBASE("cgs", "stokes", 1.000000000000000E-08, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-foot-per-hour]",   new UBASE("Imperial", "square-foot-per-hour", 2.580640000000000E-05, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[ft2/hr]",   new UBASE("Imperial", "square-foot-per-hour", 2.580640000000000E-05, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-foot-per-second]",   new UBASE("Imperial", "square-foot-per-second", 9.290304000000000E-02, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[ft2/sec]",   new UBASE("Imperial", "square-foot-per-second", 9.290304000000000E-02, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-inch-per-hour]",   new UBASE("Imperial", "square-inch-per-hour", 1.792111111111110E-07, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[in2/hr]",   new UBASE("Imperial", "square-inch-per-hour", 1.792111111111110E-07, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-inch-per-second]",   new UBASE("Imperial", "square-inch-per-second", 6.451600000000000E-04, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[in2/sec]",   new UBASE("Imperial", "square-inch-per-second", 6.451600000000000E-04, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-meter-per-hour]",   new UBASE("Imperial", "square-meter-per-hour", 2.777777777777780E-04, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[m2/hr]",   new UBASE("Imperial", "square-meter-per-hour", 2.777777777777780E-04, "m2/s", "L2/T", "1.0"));
          unit.Add("SI[square-meter-per-second]",   new UBASE("SI", "square-meter-per-second", 1.000000000000000E+00, "m2/s", "L2/T", "1.0"));
          unit.Add("SI[m2/sec]",   new UBASE("SI", "square-meter-per-second", 1.000000000000000E+00, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-centimeter-per-hour]",   new UBASE("Imperial", "square-centimeter-per-hour", 2.777777777777780E-08, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[cm2/hr]",   new UBASE("Imperial", "square-centimeter-per-hour", 2.777777777777780E-08, "m2/s", "L2/T", "1.0"));
          unit.Add("SI[square-centimeter-per-second]",   new UBASE("SI", "square-centimeter-per-second", 1.000000000000000E-04, "m2/s", "L2/T", "1.0"));
          unit.Add("SI[cm2/sec]",   new UBASE("SI", "square-centimeter-per-second", 1.000000000000000E-04, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-millimeter-per-hour]",   new UBASE("Imperial", "square-millimeter-per-hour", 2.777777777777780E-10, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[mm2/hr]",   new UBASE("Imperial", "square-millimeter-per-hour", 2.777777777777780E-10, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[square-millimeter-per-second]",   new UBASE("Imperial", "square-millimeter-per-second", 1.000000000000000E-06, "m2/s", "L2/T", "1.0"));
          unit.Add("Imperial[mm2/sec]",   new UBASE("Imperial", "square-millimeter-per-second", 1.000000000000000E-06, "m2/s", "L2/T", "1.0"));
          _map.Add("kinematicViscosity",   new BaseSystem("kinematicViscosity", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[barye-second]",   new UBASE("cgs", "barye-second", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[barye-sec]",   new UBASE("cgs", "barye-second", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[centipoise]",   new UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[cP]",   new UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[cPo]",   new UBASE("cgs", "centipoise", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[dyne-second-per-square-centimeter]",   new UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[dyn-sec/cm2]",   new UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[]",   new UBASE("cgs", "dyne-second-per-square-centimeter", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[kilopound-hour-per-square-meter]",   new UBASE("Imperial", "kilopound-hour-per-square-meter", 3.530394000000000E+04, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[kip-hr/m2]",   new UBASE("Imperial", "kilopound-hour-per-square-meter", 3.530394000000000E+04, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[kilopound-second-per-square-meter]",   new UBASE("Imperial", "kilopound-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[kip-sec/m2]",   new UBASE("Imperial", "kilopound-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[millipoise]",   new UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[mP]",   new UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[mPo]",   new UBASE("cgs", "millipoise", 1.000000000000000E-04, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[millipascal-second]",   new UBASE("SI", "millipascal-second", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[mPa-sec]",   new UBASE("SI", "millipascal-second", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MTS[pieze-second]",   new UBASE("MTS", "pieze-second", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MTS[pz-sec]",   new UBASE("MTS", "pieze-second", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[poise]",   new UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[P]",   new UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("cgs[Po]",   new UBASE("cgs", "poise", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[pound-force-hour-per-square-foot]",   new UBASE("Imperial", "pound-force-hour-per-square-foot", 1.723689323292090E+05, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[lbf-hr/ft2]",   new UBASE("Imperial", "pound-force-hour-per-square-foot", 1.723689323292090E+05, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[pound-force-second-per-square-foot]",   new UBASE("Imperial", "pound-force-second-per-square-foot", 4.788025898033580E+01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[lbf-sec/ft2]",   new UBASE("Imperial", "pound-force-second-per-square-foot", 4.788025898033580E+01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("FPS[reynolds]",   new UBASE("FPS", "reynolds", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("FPS[reyns]",   new UBASE("FPS", "reyns", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MTS[sthene-second-per-square-meter]",   new UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MTS[sthene-sec/m2]",   new UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MTS[sn-sec/m2]",   new UBASE("MTS", "sthene-second-per-square-meter", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MKpS[kilogram-force-second-per-square-meter]",   new UBASE("MKpS", "kilogram-force-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("MKpS[kgf-sec/m2]",   new UBASE("MKpS", "kilogram-force-second-per-square-meter", 9.806650000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[newton-second-per-square-meter]",   new UBASE("SI", "newton-second-per-square-meter", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[N-sec/m2]",   new UBASE("SI", "newton-second-per-square-meter", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[pascal-second]",   new UBASE("SI", "pascal-second", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[Pa-sec]",   new UBASE("SI", "pascal-second", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[poiseuille]",   new UBASE("SI", "poiseuille", 1.000000000000000E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[poundal-second-per-square-foot]",   new UBASE("Imperial", "poundal-second-per-square-foot", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("Imperial[pdl-sec/ft2]",   new UBASE("Imperial", "poundal-second-per-square-foot", 1.488163943569550E+00, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[yottapoiseuille]",   new UBASE("SI", "yottapoiseuille", 1.000000000000000E+24, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[YPo]",   new UBASE("SI", "yottapoiseuille", 1.000000000000000E+24, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[zettapoiseuille]",   new UBASE("SI", "zettapoiseuille", 1.000000000000000E+21, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[ZPo]",   new UBASE("SI", "zettapoiseuille", 1.000000000000000E+21, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[exacpoiseuille]",   new UBASE("SI", "exacpoiseuille", 1.000000000000000E+18, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[EPo]",   new UBASE("SI", "exacpoiseuille", 1.000000000000000E+18, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[petapoiseuille]",   new UBASE("SI", "petapoiseuille", 1.000000000000000E+15, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[PPo]",   new UBASE("SI", "petapoiseuille", 1.000000000000000E+15, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[terapoiseuille]",   new UBASE("SI", "terapoiseuille", 1.000000000000000E+12, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[TPo]",   new UBASE("SI", "terapoiseuille", 1.000000000000000E+12, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[gigapoiseuille]",   new UBASE("SI", "gigapoiseuille", 1.000000000000000E+09, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[GPo]",   new UBASE("SI", "gigapoiseuille", 1.000000000000000E+09, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[megapoiseuille]",   new UBASE("SI", "megapoiseuille", 1.000000000000000E+06, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[MPo]",   new UBASE("SI", "megapoiseuille", 1.000000000000000E+06, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[kilocpoiseuille]",   new UBASE("SI", "kilocpoiseuille", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[kPo]",   new UBASE("SI", "kilocpoiseuille", 1.000000000000000E+03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[hectopoiseuille]",   new UBASE("SI", "hectopoiseuille", 1.000000000000000E+02, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[hPo]",   new UBASE("SI", "hectopoiseuille", 1.000000000000000E+02, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[decapoiseuille]",   new UBASE("SI", "decapoiseuille", 1.000000000000000E+01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[daPo]",   new UBASE("SI", "decapoiseuille", 1.000000000000000E+01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[decipoiseuille]",   new UBASE("SI", "decipoiseuille", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[dPo]",   new UBASE("SI", "decipoiseuille", 1.000000000000000E-01, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[centipoiseuille]",   new UBASE("SI", "centipoiseuille", 1.000000000000000E-02, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[cPo]",   new UBASE("SI", "centipoiseuille", 1.000000000000000E-02, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[millipoiseuille]",   new UBASE("SI", "millipoiseuille", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[mPo]",   new UBASE("SI", "millipoiseuille", 1.000000000000000E-03, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[micropoiseuille]",   new UBASE("SI", "micropoiseuille", 1.000000000000000E-06, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[uPo]",   new UBASE("SI", "micropoiseuille", 1.000000000000000E-06, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[nanopoiseuille]",   new UBASE("SI", "nanopoiseuille", 1.000000000000000E-09, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[nPo]",   new UBASE("SI", "nanopoiseuille", 1.000000000000000E-09, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[picopoiseuille]",   new UBASE("SI", "picopoiseuille", 1.000000000000000E-12, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[pPo]",   new UBASE("SI", "picopoiseuille", 1.000000000000000E-12, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[femtopoiseuille]",   new UBASE("SI", "femtopoiseuille", 1.000000000000000E-15, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[fPo]",   new UBASE("SI", "femtopoiseuille", 1.000000000000000E-15, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[attopoiseuille]",   new UBASE("SI", "attopoiseuille", 1.000000000000000E-18, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[aPo]",   new UBASE("SI", "attopoiseuille", 1.000000000000000E-18, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[zeptopoiseuille]",   new UBASE("SI", "zeptopoiseuille", 1.000000000000000E-21, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[zPo]",   new UBASE("SI", "zeptopoiseuille", 1.000000000000000E-21, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[yoctopoiseuille]",   new UBASE("SI", "yoctopoiseuille", 1.000000000000000E-24, "kg/m.s", "M/L.T", "1.0"));
          unit.Add("SI[yPo]",   new UBASE("SI", "yoctopoiseuille", 1.000000000000000E-24, "kg/m.s", "M/L.T", "1.0"));
          _map.Add("dynamicViscosity",   new BaseSystem("dynamicViscosity", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
