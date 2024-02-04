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
// File Angle.cs
//
// Units for Angle
//
// Class for Angle units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class Angle : SingleSystem
   {
       private static Angle singleton_ = new Angle();

       public static Angle Instance()
       {
           return singleton_;
       }

       private Angle() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("French[angle-droit]",   new UBASE("French", "angle-droit", 1.570796326794900E+00, "rad", "a", "1.0"));
          unit.Add("French[D]",   new UBASE("French", "angle-droit", 1.570796326794900E+00, "rad", "a", "1.0"));
          unit.Add("Angle[centrad]",   new UBASE("Angle", "centrad", 1.000000000000000E-02, "rad", "a", "1.0"));
          unit.Add("INT[circumference]",   new UBASE("INT", "circumference", 6.283185307179590E+00, "rad", "a", "1.0"));
          unit.Add("INT[degree]",   new UBASE("INT", "degree", 1.745329251994330E-02, "rad", "a", "1.0"));
          unit.Add("Angle[degree]",   new UBASE("Angle", "degree", 1.745329251994330E-02, "rad", "a", "1.0"));
          unit.Add("Angle[dekan]",   new UBASE("Angle", "dekan", 1.745329251994330E-01, "rad", "a", "1.0"));
          unit.Add("French[dimigrade]",   new UBASE("French", "dimigrade", 1.570796326794900E-06, "rad", "a", "1.0"));
          unit.Add("French[dmgr]",   new UBASE("French", "dimigrade", 1.570796326794900E-06, "rad", "a", "1.0"));
          unit.Add("INT[gon]",   new UBASE("INT", "gon", 1.570796326794900E-02, "rad", "a", "1.0"));
          unit.Add("French[gon]",   new UBASE("French", "gon", 1.570796326794900E-02, "rad", "a", "1.0"));
          unit.Add("French[g]",   new UBASE("French", "gon", 1.570796326794900E-02, "rad", "a", "1.0"));
          unit.Add("French[grade]",   new UBASE("French", "grade", 1.570796326794900E-02, "rad", "a", "1.0"));
          unit.Add("French[gr]",   new UBASE("French", "grade", 1.570796326794900E-02, "rad", "a", "1.0"));
          unit.Add("Angle[hour-of-angle]",   new UBASE("Angle", "hour-of-angle", 2.617993877991490E-01, "rad", "a", "1.0"));
          unit.Add("Angle[hoa]",   new UBASE("Angle", "hour-of-angle", 2.617993877991490E-01, "rad", "a", "1.0"));
          unit.Add("Angle[house]",   new UBASE("Angle", "house", 5.235987755982990E-01, "rad", "a", "1.0"));
          unit.Add("@[mas]",   new UBASE("@", "mas", 4.848136811095360E-09, "rad", "a", "1.0"));
          unit.Add("Angle[mil]",   new UBASE("Angle", "mil", 1.022653858590430E-03, "rad", "a", "1.0"));
          unit.Add("INT[milangle]",   new UBASE("INT", "milangle", 9.817477042468100E-04, "rad", "a", "1.0"));
          unit.Add("INT[millieme]",   new UBASE("INT", "millieme", 9.817477042468100E-04, "rad", "a", "1.0"));
          unit.Add("Russian[millieme]",   new UBASE("Russian", "millieme", 9.973310011396170E-04, "rad", "a", "1.0"));
          unit.Add("US[millieme]",   new UBASE("US", "millieme", 1.570796326794900E-03, "rad", "a", "1.0"));
          unit.Add("French[millieme]",   new UBASE("French", "millieme", 9.817477042468100E-04, "rad", "a", "1.0"));
          unit.Add("French[ma]",   new UBASE("French", "millieme", 9.817477042468100E-04, "rad", "a", "1.0"));
          unit.Add("French[millieme(artillery)]",   new UBASE("French", "millieme(artillery)", 9.999996666668670E-04, "rad", "a", "1.0"));
          unit.Add("French[millieme(Rimailho)]",   new UBASE("French", "millieme(Rimailho)", 1.047197551196600E-03, "rad", "a", "1.0"));
          unit.Add("French[mr]",   new UBASE("French", "millieme(Rimailho)", 1.047197551196600E-03, "rad", "a", "1.0"));
          unit.Add("French[millieme-vrai]",   new UBASE("French", "millieme-vrai", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("French[mv]",   new UBASE("French", "millieme-vrai", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("Angle[milliradian]",   new UBASE("Angle", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("Angle[millirad]",   new UBASE("Angle", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("@[milliarc-second]",   new UBASE("@", "milliarc-second", 4.848136811095360E-09, "rad", "a", "1.0"));
          unit.Add("@[milliarcsec]",   new UBASE("@", "milliarc-second", 4.848136811095360E-09, "rad", "a", "1.0"));
          unit.Add("@[millisecond-of-arc]",   new UBASE("@", "millisecond-of-arc", 4.848136811095360E-09, "rad", "a", "1.0"));
          unit.Add("Angle[minute]",   new UBASE("Angle", "minute", 2.908882086657220E-04, "rad", "a", "1.0"));
          unit.Add("Angle[min]",   new UBASE("Angle", "minute", 2.908882086657220E-04, "rad", "a", "1.0"));
          unit.Add("INT[minute-of-angle]",   new UBASE("INT", "minute-of-angle", 2.908882086657220E-04, "rad", "a", "1.0"));
          unit.Add("French[minute-of-angle]",   new UBASE("French", "minute-of-angle", 1.570796326794900E-04, "rad", "a", "1.0"));
          unit.Add("French[c]",   new UBASE("French", "minute-of-angle", 1.570796326794900E-04, "rad", "a", "1.0"));
          unit.Add("Imperial[o'clock]",   new UBASE("Imperial", "o'clock", 5.235987755982990E-01, "rad", "a", "1.0"));
          unit.Add("Angle[octant]",   new UBASE("Angle", "octant", 7.853981630000000E-01, "rad", "a", "1.0"));
          unit.Add("INT[percent]",   new UBASE("INT", "percent", 9.999666686665240E-03, "rad", "a", "1.0"));
          unit.Add("Angle[plane-angle]",   new UBASE("Angle", "plane-angle", 3.141592653589790E+00, "rad", "a", "1.0"));
          unit.Add("INT[point]",   new UBASE("INT", "point", 1.963495408493620E-01, "rad", "a", "1.0"));
          unit.Add("Angle[quadrant]",   new UBASE("Angle", "quadrant", 1.570796326794900E+00, "rad", "a", "1.0"));
          unit.Add("INT[quintant]",   new UBASE("INT", "quintant", 1.256637061435920E+00, "rad", "a", "1.0"));
          unit.Add("SI[radian]",   new UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0"));
          unit.Add("SI[rad]",   new UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0"));
          unit.Add("Angle[radian]",   new UBASE("Angle", "radian", 1.000000000000000E+00, "rad", "a", "1.0"));
          unit.Add("Angle[rad]",   new UBASE("Angle", "radian", 1.000000000000000E+00, "rad", "a", "1.0"));
          unit.Add("Imperial[revolution]",   new UBASE("Imperial", "revolution", 6.283185307179590E+00, "rad", "a", "1.0"));
          unit.Add("Imperial[rev]",   new UBASE("Imperial", "revolution", 6.283185307179590E+00, "rad", "a", "1.0"));
          unit.Add("Angle[right-angle]",   new UBASE("Angle", "right-angle", 1.570796326794900E+00, "rad", "a", "1.0"));
          unit.Add("Angle[round]",   new UBASE("Angle", "round", 6.283185307179590E+00, "rad", "a", "1.0"));
          unit.Add("Angle[second]",   new UBASE("Angle", "second", 4.848136811095360E-06, "rad", "a", "1.0"));
          unit.Add("Angle[sec]",   new UBASE("Angle", "second", 4.848136811095360E-06, "rad", "a", "1.0"));
          unit.Add("@[second-longitude]",   new UBASE("@", "second-longitude", 7.272205216643040E-05, "rad", "a", "1.0"));
          unit.Add("@[sec-lon]",   new UBASE("@", "second-longitude", 7.272205216643040E-05, "rad", "a", "1.0"));
          unit.Add("INT[second-of-angle]",   new UBASE("INT", "second-of-angle", 4.848136811095360E-06, "rad", "a", "1.0"));
          unit.Add("French[second-of-angle]",   new UBASE("French", "second-of-angle", 1.570796326794900E-04, "rad", "a", "1.0"));
          unit.Add("French[C]",   new UBASE("French", "second-of-angle", 1.570796326794900E-04, "rad", "a", "1.0"));
          unit.Add("INT[sextant]",   new UBASE("INT", "sextant", 1.047197551196600E+00, "rad", "a", "1.0"));
          unit.Add("Angle[sign]",   new UBASE("Angle", "sign", 5.235987755982990E-01, "rad", "a", "1.0"));
          unit.Add("INT[thousand]",   new UBASE("INT", "thousand", 9.817477042468100E-04, "rad", "a", "1.0"));
          unit.Add("Russian[thousand]",   new UBASE("Russian", "thousand", 9.973310011396170E-04, "rad", "a", "1.0"));
          unit.Add("US[thousand]",   new UBASE("US", "thousand", 1.570796326794900E-03, "rad", "a", "1.0"));
          unit.Add("French[thousand]",   new UBASE("French", "thousand", 9.999996666668670E-04, "rad", "a", "1.0"));
          unit.Add("Imperial[turn]",   new UBASE("Imperial", "turn", 6.283185307179590E+00, "rad", "a", "1.0"));
          unit.Add("Imperial[tr]",   new UBASE("Imperial", "turn", 6.283185307179590E+00, "rad", "a", "1.0"));
          unit.Add("SI[yottaradian]",   new UBASE("SI", "yottaradian", 1.000000000000000E+24, "rad", "a", "1.0"));
          unit.Add("SI[Yrad]",   new UBASE("SI", "yottaradian", 1.000000000000000E+24, "rad", "a", "1.0"));
          unit.Add("SI[zettaradian]",   new UBASE("SI", "zettaradian", 1.000000000000000E+21, "rad", "a", "1.0"));
          unit.Add("SI[Zrad]",   new UBASE("SI", "zettaradian", 1.000000000000000E+21, "rad", "a", "1.0"));
          unit.Add("SI[exaradian]",   new UBASE("SI", "exaradian", 1.000000000000000E+18, "rad", "a", "1.0"));
          unit.Add("SI[Erad]",   new UBASE("SI", "exaradian", 1.000000000000000E+18, "rad", "a", "1.0"));
          unit.Add("SI[petaradian]",   new UBASE("SI", "petaradian", 1.000000000000000E+15, "rad", "a", "1.0"));
          unit.Add("SI[Prad]",   new UBASE("SI", "petaradian", 1.000000000000000E+15, "rad", "a", "1.0"));
          unit.Add("SI[teraradian]",   new UBASE("SI", "teraradian", 1.000000000000000E+12, "rad", "a", "1.0"));
          unit.Add("SI[Trad]",   new UBASE("SI", "teraradian", 1.000000000000000E+12, "rad", "a", "1.0"));
          unit.Add("SI[gigaradian]",   new UBASE("SI", "gigaradian", 1.000000000000000E+09, "rad", "a", "1.0"));
          unit.Add("SI[Grad]",   new UBASE("SI", "gigaradian", 1.000000000000000E+09, "rad", "a", "1.0"));
          unit.Add("SI[megaradian]",   new UBASE("SI", "megaradian", 1.000000000000000E+06, "rad", "a", "1.0"));
          unit.Add("SI[Mrad]",   new UBASE("SI", "megaradian", 1.000000000000000E+06, "rad", "a", "1.0"));
          unit.Add("SI[kiloradian]",   new UBASE("SI", "kiloradian", 1.000000000000000E+03, "rad", "a", "1.0"));
          unit.Add("SI[krad]",   new UBASE("SI", "kiloradian", 1.000000000000000E+03, "rad", "a", "1.0"));
          unit.Add("SI[hectoradian]",   new UBASE("SI", "hectoradian", 1.000000000000000E+02, "rad", "a", "1.0"));
          unit.Add("SI[hrad]",   new UBASE("SI", "hectoradian", 1.000000000000000E+02, "rad", "a", "1.0"));
          unit.Add("SI[decaradian]",   new UBASE("SI", "decaradian", 1.000000000000000E+01, "rad", "a", "1.0"));
          unit.Add("SI[darad]",   new UBASE("SI", "decaradian", 1.000000000000000E+01, "rad", "a", "1.0"));
          unit.Add("SI[deciradian]",   new UBASE("SI", "deciradian", 1.000000000000000E-01, "rad", "a", "1.0"));
          unit.Add("SI[drad]",   new UBASE("SI", "deciradian", 1.000000000000000E-01, "rad", "a", "1.0"));
          unit.Add("SI[centiradian]",   new UBASE("SI", "centiradian", 1.000000000000000E-02, "rad", "a", "1.0"));
          unit.Add("SI[crad]",   new UBASE("SI", "centiradian", 1.000000000000000E-02, "rad", "a", "1.0"));
          unit.Add("SI[milliradian]",   new UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("SI[mrad]",   new UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("SI[millirad]",   new UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0"));
          unit.Add("SI[microradian]",   new UBASE("SI", "microradian", 1.000000000000000E-06, "rad", "a", "1.0"));
          unit.Add("SI[urad]",   new UBASE("SI", "microradian", 1.000000000000000E-06, "rad", "a", "1.0"));
          unit.Add("SI[nanoradian]",   new UBASE("SI", "nanoradian", 1.000000000000000E-09, "rad", "a", "1.0"));
          unit.Add("SI[nrad]",   new UBASE("SI", "nanoradian", 1.000000000000000E-09, "rad", "a", "1.0"));
          unit.Add("SI[picoradian]",   new UBASE("SI", "picoradian", 1.000000000000000E-12, "rad", "a", "1.0"));
          unit.Add("SI[prad]",   new UBASE("SI", "picoradian", 1.000000000000000E-12, "rad", "a", "1.0"));
          unit.Add("SI[femtoradian]",   new UBASE("SI", "femtoradian", 1.000000000000000E-15, "rad", "a", "1.0"));
          unit.Add("SI[frad]",   new UBASE("SI", "femtoradian", 1.000000000000000E-15, "rad", "a", "1.0"));
          unit.Add("SI[attoradian]",   new UBASE("SI", "attoradian", 1.000000000000000E-18, "rad", "a", "1.0"));
          unit.Add("SI[arad]",   new UBASE("SI", "attoradian", 1.000000000000000E-18, "rad", "a", "1.0"));
          unit.Add("SI[zeptoradian]",   new UBASE("SI", "zeptoradian", 1.000000000000000E-21, "rad", "a", "1.0"));
          unit.Add("SI[zrad]",   new UBASE("SI", "zeptoradian", 1.000000000000000E-21, "rad", "a", "1.0"));
          unit.Add("SI[yoctoradian]",   new UBASE("SI", "yoctoradian", 1.000000000000000E-24, "rad", "a", "1.0"));
          unit.Add("SI[yrad]",   new UBASE("SI", "yoctoradian", 1.000000000000000E-24, "rad", "a", "1.0"));
          _map.Add("angle",   new BaseSystem("angle", unit, "1.0"));

          unit.Clear();


          unit.Add("@[octant]",   new UBASE("@", "octant", 1.570796326794900E+00, "sr", "W", "1.0"));
          unit.Add("@[sphere]",   new UBASE("@", "sphere", 1.256637061435920E+01, "sr", "W", "1.0"));
          unit.Add("@[spherical-right-angle]",   new UBASE("@", "spherical-right-angle", 3.141592653589790E+00, "sr", "W", "1.0"));
          unit.Add("@[sra]",   new UBASE("@", "spherical-right-angle", 3.141592653589790E+00, "sr", "W", "1.0"));
          unit.Add("@[square-degree]",   new UBASE("@", "square-degree", 3.046174197867090E-04, "sr", "W", "1.0"));
          unit.Add("@[(o)2]",   new UBASE("@", "square-degree", 3.046174197867090E-04, "sr", "W", "1.0"));
          unit.Add("@[square-minute]",   new UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0"));
          unit.Add("@[(')2]",   new UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0"));
          unit.Add("@[min2]",   new UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0"));
          unit.Add("@[square-second]",   new UBASE("@", "square-second", 2.350443053900000E-12, "sr", "W", "1.0"));
          unit.Add("@[sec2]",   new UBASE("@", "square-second", 2.350443053900000E-12, "sr", "W", "1.0"));
          unit.Add("French[square-gon]",   new UBASE("French", "square-gon", 2.467401100272340E-04, "sr", "W", "1.0"));
          unit.Add("French[(g)2]",   new UBASE("French", "square-gon", 2.467401100272340E-04, "sr", "W", "1.0"));
          unit.Add("French[square-grade]",   new UBASE("French", "square-grade", 2.467401100272340E-04, "sr", "W", "1.0"));
          unit.Add("French[(gr)2]",   new UBASE("French", "square-grade", 2.467401100272340E-04, "sr", "W", "1.0"));
          unit.Add("Imperial[spat]",   new UBASE("Imperial", "spat", 1.256637061435920E+01, "sr", "W", "1.0"));
          unit.Add("Imperial[sp]",   new UBASE("Imperial", "spat", 1.256637061435920E+01, "sr", "W", "1.0"));
          unit.Add("SI[stedian]",   new UBASE("SI", "stedian", 1.000000000000000E+00, "sr", "W", "1.0"));
          unit.Add("SI[sd]",   new UBASE("SI", "stedian", 1.000000000000000E+00, "sr", "W", "1.0"));
          unit.Add("SI[steradian]",   new UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0"));
          unit.Add("SI[sr]",   new UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0"));
          unit.Add("SI[yottasteradian]",   new UBASE("SI", "yottasteradian", 1.000000000000000E+24, "sr", "W", "1.0"));
          unit.Add("SI[Ysr]",   new UBASE("SI", "yottasteradian", 1.000000000000000E+24, "sr", "W", "1.0"));
          unit.Add("SI[zettasteradian]",   new UBASE("SI", "zettasteradian", 1.000000000000000E+21, "sr", "W", "1.0"));
          unit.Add("SI[Zsr]",   new UBASE("SI", "zettasteradian", 1.000000000000000E+21, "sr", "W", "1.0"));
          unit.Add("SI[exasteradian]",   new UBASE("SI", "exasteradian", 1.000000000000000E+18, "sr", "W", "1.0"));
          unit.Add("SI[Esr]",   new UBASE("SI", "exasteradian", 1.000000000000000E+18, "sr", "W", "1.0"));
          unit.Add("SI[petasteradian]",   new UBASE("SI", "petasteradian", 1.000000000000000E+15, "sr", "W", "1.0"));
          unit.Add("SI[Psr]",   new UBASE("SI", "petasteradian", 1.000000000000000E+15, "sr", "W", "1.0"));
          unit.Add("SI[terasteradian]",   new UBASE("SI", "terasteradian", 1.000000000000000E+12, "sr", "W", "1.0"));
          unit.Add("SI[Tsr]",   new UBASE("SI", "terasteradian", 1.000000000000000E+12, "sr", "W", "1.0"));
          unit.Add("SI[gigasteradian]",   new UBASE("SI", "gigasteradian", 1.000000000000000E+09, "sr", "W", "1.0"));
          unit.Add("SI[Gsr]",   new UBASE("SI", "gigasteradian", 1.000000000000000E+09, "sr", "W", "1.0"));
          unit.Add("SI[megasteradian]",   new UBASE("SI", "megasteradian", 1.000000000000000E+06, "sr", "W", "1.0"));
          unit.Add("SI[Msr]",   new UBASE("SI", "megasteradian", 1.000000000000000E+06, "sr", "W", "1.0"));
          unit.Add("SI[kilosteradian]",   new UBASE("SI", "kilosteradian", 1.000000000000000E+03, "sr", "W", "1.0"));
          unit.Add("SI[ksr]",   new UBASE("SI", "kilosteradian", 1.000000000000000E+03, "sr", "W", "1.0"));
          unit.Add("SI[hectosteradian]",   new UBASE("SI", "hectosteradian", 1.000000000000000E+02, "sr", "W", "1.0"));
          unit.Add("SI[hsr]",   new UBASE("SI", "hectosteradian", 1.000000000000000E+02, "sr", "W", "1.0"));
          unit.Add("SI[decasteradian]",   new UBASE("SI", "decasteradian", 1.000000000000000E+01, "sr", "W", "1.0"));
          unit.Add("SI[dasr]",   new UBASE("SI", "decasteradian", 1.000000000000000E+01, "sr", "W", "1.0"));
          unit.Add("SI[decisteradian]",   new UBASE("SI", "decisteradian", 1.000000000000000E-01, "sr", "W", "1.0"));
          unit.Add("SI[dsr]",   new UBASE("SI", "decisteradian", 1.000000000000000E-01, "sr", "W", "1.0"));
          unit.Add("SI[centisteradian]",   new UBASE("SI", "centisteradian", 1.000000000000000E-02, "sr", "W", "1.0"));
          unit.Add("SI[csr]",   new UBASE("SI", "centisteradian", 1.000000000000000E-02, "sr", "W", "1.0"));
          unit.Add("SI[millisteradian]",   new UBASE("SI", "millisteradian", 1.000000000000000E-03, "sr", "W", "1.0"));
          unit.Add("SI[msr]",   new UBASE("SI", "millisteradian", 1.000000000000000E-03, "sr", "W", "1.0"));
          unit.Add("SI[microsteradian]",   new UBASE("SI", "microsteradian", 1.000000000000000E-06, "sr", "W", "1.0"));
          unit.Add("SI[usr]",   new UBASE("SI", "microsteradian", 1.000000000000000E-06, "sr", "W", "1.0"));
          unit.Add("SI[nanosteradian]",   new UBASE("SI", "nanosteradian", 1.000000000000000E-09, "sr", "W", "1.0"));
          unit.Add("SI[nsr]",   new UBASE("SI", "nanosteradian", 1.000000000000000E-09, "sr", "W", "1.0"));
          unit.Add("SI[picosteradian]",   new UBASE("SI", "picosteradian", 1.000000000000000E-12, "sr", "W", "1.0"));
          unit.Add("SI[psr]",   new UBASE("SI", "picosteradian", 1.000000000000000E-12, "sr", "W", "1.0"));
          unit.Add("SI[femtosteradian]",   new UBASE("SI", "femtosteradian", 1.000000000000000E-15, "sr", "W", "1.0"));
          unit.Add("SI[fsr]",   new UBASE("SI", "femtosteradian", 1.000000000000000E-15, "sr", "W", "1.0"));
          unit.Add("SI[attosteradian]",   new UBASE("SI", "attosteradian", 1.000000000000000E-18, "sr", "W", "1.0"));
          unit.Add("SI[asr]",   new UBASE("SI", "attosteradian", 1.000000000000000E-18, "sr", "W", "1.0"));
          unit.Add("SI[zeptosteradian]",   new UBASE("SI", "zeptosteradian", 1.000000000000000E-21, "sr", "W", "1.0"));
          unit.Add("SI[zsr]",   new UBASE("SI", "zeptosteradian", 1.000000000000000E-21, "sr", "W", "1.0"));
          unit.Add("SI[yoctosteradian]",   new UBASE("SI", "yoctosteradian", 1.000000000000000E-24, "sr", "W", "1.0"));
          unit.Add("SI[ysr]",   new UBASE("SI", "yoctosteradian", 1.000000000000000E-24, "sr", "W", "1.0"));
          _map.Add("solidAngle",   new BaseSystem("solidAngle", unit, "1.0"));

          unit.Clear();


          unit.Add("Scientific[degree-per-year]",   new UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[o/yr]",   new UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[deg/yr]",   new UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[degree-per-month]",   new UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[o/mon]",   new UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[deg/mon]",   new UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[degree-per-day]",   new UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[o/d]",   new UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[deg/day]",   new UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[degree-per-hour]",   new UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[o/hr]",   new UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[deg/hr]",   new UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[degree-per-minute]",   new UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[o/min]",   new UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[deg/min]",   new UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[degree-per-second]",   new UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[o/s]",   new UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[deg/sec]",   new UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0"));
          unit.Add("SI[radian-per-year]",   new UBASE("SI", "radian-per-year", 3.170979198376460E-08, "rad/s", "a/T", "1.0"));
          unit.Add("SI[rad/yr]",   new UBASE("SI", "radian-per-year", 3.170979198376460E-08, "rad/s", "a/T", "1.0"));
          unit.Add("SI[radian-per-month]",   new UBASE("SI", "radian-per-month", 3.858024691358020E-07, "rad/s", "a/T", "1.0"));
          unit.Add("SI[rad/mon]",   new UBASE("SI", "radian-per-month", 3.858024691358020E-07, "rad/s", "a/T", "1.0"));
          unit.Add("SI[radian-per-day]",   new UBASE("SI", "radian-per-day", 1.157407407407410E-05, "rad/s", "a/T", "1.0"));
          unit.Add("SI[rad/day]",   new UBASE("SI", "radian-per-day", 1.157407407407410E-05, "rad/s", "a/T", "1.0"));
          unit.Add("SI[radian-per-hour]",   new UBASE("SI", "radian-per-hour", 2.777777777777780E-04, "rad/s", "a/T", "1.0"));
          unit.Add("SI[rad/hr]",   new UBASE("SI", "radian-per-hour", 2.777777777777780E-04, "rad/s", "a/T", "1.0"));
          unit.Add("SI[radian-per-minute]",   new UBASE("SI", "radian-per-minute", 1.666666666666670E-02, "rad/s", "a/T", "1.0"));
          unit.Add("SI[rad/min]",   new UBASE("SI", "radian-per-minute", 1.666666666666670E-02, "rad/s", "a/T", "1.0"));
          unit.Add("SI[radian-per-second]",   new UBASE("SI", "radian-per-second", 1.000000000000000E+00, "rad/s", "a/T", "1.0"));
          unit.Add("SI[rad/sec]",   new UBASE("SI", "radian-per-second", 1.000000000000000E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Scientific[strob]",   new UBASE("Scientific", "strob", 1.000000000000000E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[revolutions-per-year]",   new UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rpy]",   new UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rev/yr]",   new UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[revolutions-per-month]",   new UBASE("Imperial", "revolutions-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rev/mon]",   new UBASE("Imperial", "revolutions-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[revolutions-per-day]",   new UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rpd]",   new UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rev/day]",   new UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[revolutions-per-hour]",   new UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rph]",   new UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rev/hr]",   new UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[revolutions-per-minute]",   new UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rpm]",   new UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rev/min]",   new UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[revolutions-per-second]",   new UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rps]",   new UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[rev/sec]",   new UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[turn-per-second]",   new UBASE("Imperial", "turn-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[tr/sec]",   new UBASE("Imperial", "turn-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[turn-per-minute]",   new UBASE("Imperial", "turn-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[tr/min]",   new UBASE("Imperial", "turn-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[turn-per-hour]",   new UBASE("Imperial", "turn-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[tr/hr]",   new UBASE("Imperial", "turn-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[turn-per-day]",   new UBASE("Imperial", "turn-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[tr/day]",   new UBASE("Imperial", "turn-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[turn-per-month]",   new UBASE("Imperial", "turn-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[tr/mon]",   new UBASE("Imperial", "turn-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[turn-per-year]",   new UBASE("Imperial", "turn-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0"));
          unit.Add("Imperial[tr/yr]",   new UBASE("Imperial", "turn-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0"));
          unit.Add("INT[grade-per-second]",   new UBASE("INT", "grade-per-second", 1.570796326794900E-02, "rad/s", "a/T", "1.0"));
          unit.Add("INT[gon/sec]",   new UBASE("INT", "grade-per-second", 1.570796326794900E-02, "rad/s", "a/T", "1.0"));
          unit.Add("INT[grade-per-minute]",   new UBASE("INT", "grade-per-minute", 2.617993877991490E-04, "rad/s", "a/T", "1.0"));
          unit.Add("INT[gon/min]",   new UBASE("INT", "grade-per-minute", 2.617993877991490E-04, "rad/s", "a/T", "1.0"));
          unit.Add("INT[grade-per-hour]",   new UBASE("INT", "grade-per-hour", 4.363323129985820E-06, "rad/s", "a/T", "1.0"));
          unit.Add("INT[gon/hr]",   new UBASE("INT", "grade-per-hour", 4.363323129985820E-06, "rad/s", "a/T", "1.0"));
          unit.Add("INT[grade-per-day]",   new UBASE("INT", "grade-per-day", 1.818051304160760E-07, "rad/s", "a/T", "1.0"));
          unit.Add("INT[gon/day]",   new UBASE("INT", "grade-per-day", 1.818051304160760E-07, "rad/s", "a/T", "1.0"));
          unit.Add("INT[grade-per-month]",   new UBASE("INT", "grade-per-month", 6.060171013869200E-09, "rad/s", "a/T", "1.0"));
          unit.Add("INT[gon/mon]",   new UBASE("INT", "grade-per-month", 6.060171013869200E-09, "rad/s", "a/T", "1.0"));
          unit.Add("INT[grade-per-year]",   new UBASE("INT", "grade-per-year", 4.980962477152770E-10, "rad/s", "a/T", "1.0"));
          unit.Add("INT[gon/yr]",   new UBASE("INT", "grade-per-year", 4.980962477152770E-10, "rad/s", "a/T", "1.0"));
          _map.Add("angularVelocity",   new BaseSystem("angularVelocity", unit, "1.0"));

          unit.Clear();


          unit.Add("SI[radian-per-square-second]",   new UBASE("SI", "radian-per-square-second", 1.000000000000000E+00, "rad/s2", "a/T2", "1.0"));
          unit.Add("SI[rad/sec2]",   new UBASE("SI", "radian-per-square-second", 1.000000000000000E+00, "rad/s2", "a/T2", "1.0"));
          unit.Add("Scientific[degree-per-square-second]",   new UBASE("Scientific", "degree-per-square-second", 1.745329251994330E-02, "rad/s2", "a/T2", "1.0"));
          unit.Add("Scientific[deg/sec2]",   new UBASE("Scientific", "degree-per-square-second", 1.745329251994330E-02, "rad/s2", "a/T2", "1.0"));
          _map.Add("angularAcceleration",   new BaseSystem("angularAcceleration", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
