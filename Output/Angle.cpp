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
// File Angle.cpp
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

#include"Angle.hpp"

Angle& Angle::Instance(void)
{
    static Angle singleton;
    return singleton;
}

Angle::Angle(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["French[angle-droit]"] = UBASE("French", "angle-droit", 1.570796326794900E+00, "rad", "a", "1.0");
   unit["French[D]"] = UBASE("French", "angle-droit", 1.570796326794900E+00, "rad", "a", "1.0");
   unit["Angle[centrad]"] = UBASE("Angle", "centrad", 1.000000000000000E-02, "rad", "a", "1.0");
   unit["INT[circumference]"] = UBASE("INT", "circumference", 6.283185307179590E+00, "rad", "a", "1.0");
   unit["INT[degree]"] = UBASE("INT", "degree", 1.745329251994330E-02, "rad", "a", "1.0");
   unit["Angle[degree]"] = UBASE("Angle", "degree", 1.745329251994330E-02, "rad", "a", "1.0");
   unit["Angle[dekan]"] = UBASE("Angle", "dekan", 1.745329251994330E-01, "rad", "a", "1.0");
   unit["French[dimigrade]"] = UBASE("French", "dimigrade", 1.570796326794900E-06, "rad", "a", "1.0");
   unit["French[dmgr]"] = UBASE("French", "dimigrade", 1.570796326794900E-06, "rad", "a", "1.0");
   unit["INT[gon]"] = UBASE("INT", "gon", 1.570796326794900E-02, "rad", "a", "1.0");
   unit["French[gon]"] = UBASE("French", "gon", 1.570796326794900E-02, "rad", "a", "1.0");
   unit["French[g]"] = UBASE("French", "gon", 1.570796326794900E-02, "rad", "a", "1.0");
   unit["French[grade]"] = UBASE("French", "grade", 1.570796326794900E-02, "rad", "a", "1.0");
   unit["French[gr]"] = UBASE("French", "grade", 1.570796326794900E-02, "rad", "a", "1.0");
   unit["Angle[hour-of-angle]"] = UBASE("Angle", "hour-of-angle", 2.617993877991490E-01, "rad", "a", "1.0");
   unit["Angle[hoa]"] = UBASE("Angle", "hour-of-angle", 2.617993877991490E-01, "rad", "a", "1.0");
   unit["Angle[house]"] = UBASE("Angle", "house", 5.235987755982990E-01, "rad", "a", "1.0");
   unit["@[mas]"] = UBASE("@", "mas", 4.848136811095360E-09, "rad", "a", "1.0");
   unit["Angle[mil]"] = UBASE("Angle", "mil", 1.022653858590430E-03, "rad", "a", "1.0");
   unit["INT[milangle]"] = UBASE("INT", "milangle", 9.817477042468100E-04, "rad", "a", "1.0");
   unit["INT[millieme]"] = UBASE("INT", "millieme", 9.817477042468100E-04, "rad", "a", "1.0");
   unit["Russian[millieme]"] = UBASE("Russian", "millieme", 9.973310011396170E-04, "rad", "a", "1.0");
   unit["US[millieme]"] = UBASE("US", "millieme", 1.570796326794900E-03, "rad", "a", "1.0");
   unit["French[millieme]"] = UBASE("French", "millieme", 9.817477042468100E-04, "rad", "a", "1.0");
   unit["French[ma]"] = UBASE("French", "millieme", 9.817477042468100E-04, "rad", "a", "1.0");
   unit["French[millieme(artillery)]"] = UBASE("French", "millieme(artillery)", 9.999996666668670E-04, "rad", "a", "1.0");
   unit["French[millieme(Rimailho)]"] = UBASE("French", "millieme(Rimailho)", 1.047197551196600E-03, "rad", "a", "1.0");
   unit["French[mr]"] = UBASE("French", "millieme(Rimailho)", 1.047197551196600E-03, "rad", "a", "1.0");
   unit["French[millieme-vrai]"] = UBASE("French", "millieme-vrai", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["French[mv]"] = UBASE("French", "millieme-vrai", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["Angle[milliradian]"] = UBASE("Angle", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["Angle[millirad]"] = UBASE("Angle", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["@[milliarc-second]"] = UBASE("@", "milliarc-second", 4.848136811095360E-09, "rad", "a", "1.0");
   unit["@[milliarcsec]"] = UBASE("@", "milliarc-second", 4.848136811095360E-09, "rad", "a", "1.0");
   unit["@[millisecond-of-arc]"] = UBASE("@", "millisecond-of-arc", 4.848136811095360E-09, "rad", "a", "1.0");
   unit["Angle[minute]"] = UBASE("Angle", "minute", 2.908882086657220E-04, "rad", "a", "1.0");
   unit["Angle[min]"] = UBASE("Angle", "minute", 2.908882086657220E-04, "rad", "a", "1.0");
   unit["INT[minute-of-angle]"] = UBASE("INT", "minute-of-angle", 2.908882086657220E-04, "rad", "a", "1.0");
   unit["French[minute-of-angle]"] = UBASE("French", "minute-of-angle", 1.570796326794900E-04, "rad", "a", "1.0");
   unit["French[c]"] = UBASE("French", "minute-of-angle", 1.570796326794900E-04, "rad", "a", "1.0");
   unit["Imperial[o'clock]"] = UBASE("Imperial", "o'clock", 5.235987755982990E-01, "rad", "a", "1.0");
   unit["Angle[octant]"] = UBASE("Angle", "octant", 7.853981630000000E-01, "rad", "a", "1.0");
   unit["INT[percent]"] = UBASE("INT", "percent", 9.999666686665240E-03, "rad", "a", "1.0");
   unit["Angle[plane-angle]"] = UBASE("Angle", "plane-angle", 3.141592653589790E+00, "rad", "a", "1.0");
   unit["INT[point]"] = UBASE("INT", "point", 1.963495408493620E-01, "rad", "a", "1.0");
   unit["Angle[quadrant]"] = UBASE("Angle", "quadrant", 1.570796326794900E+00, "rad", "a", "1.0");
   unit["INT[quintant]"] = UBASE("INT", "quintant", 1.256637061435920E+00, "rad", "a", "1.0");
   unit["SI[radian]"] = UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0");
   unit["SI[rad]"] = UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0");
   unit["Angle[radian]"] = UBASE("Angle", "radian", 1.000000000000000E+00, "rad", "a", "1.0");
   unit["Angle[rad]"] = UBASE("Angle", "radian", 1.000000000000000E+00, "rad", "a", "1.0");
   unit["Imperial[revolution]"] = UBASE("Imperial", "revolution", 6.283185307179590E+00, "rad", "a", "1.0");
   unit["Imperial[rev]"] = UBASE("Imperial", "revolution", 6.283185307179590E+00, "rad", "a", "1.0");
   unit["Angle[right-angle]"] = UBASE("Angle", "right-angle", 1.570796326794900E+00, "rad", "a", "1.0");
   unit["Angle[round]"] = UBASE("Angle", "round", 6.283185307179590E+00, "rad", "a", "1.0");
   unit["Angle[second]"] = UBASE("Angle", "second", 4.848136811095360E-06, "rad", "a", "1.0");
   unit["Angle[sec]"] = UBASE("Angle", "second", 4.848136811095360E-06, "rad", "a", "1.0");
   unit["@[second-longitude]"] = UBASE("@", "second-longitude", 7.272205216643040E-05, "rad", "a", "1.0");
   unit["@[sec-lon]"] = UBASE("@", "second-longitude", 7.272205216643040E-05, "rad", "a", "1.0");
   unit["INT[second-of-angle]"] = UBASE("INT", "second-of-angle", 4.848136811095360E-06, "rad", "a", "1.0");
   unit["French[second-of-angle]"] = UBASE("French", "second-of-angle", 1.570796326794900E-04, "rad", "a", "1.0");
   unit["French[C]"] = UBASE("French", "second-of-angle", 1.570796326794900E-04, "rad", "a", "1.0");
   unit["INT[sextant]"] = UBASE("INT", "sextant", 1.047197551196600E+00, "rad", "a", "1.0");
   unit["Angle[sign]"] = UBASE("Angle", "sign", 5.235987755982990E-01, "rad", "a", "1.0");
   unit["INT[thousand]"] = UBASE("INT", "thousand", 9.817477042468100E-04, "rad", "a", "1.0");
   unit["Russian[thousand]"] = UBASE("Russian", "thousand", 9.973310011396170E-04, "rad", "a", "1.0");
   unit["US[thousand]"] = UBASE("US", "thousand", 1.570796326794900E-03, "rad", "a", "1.0");
   unit["French[thousand]"] = UBASE("French", "thousand", 9.999996666668670E-04, "rad", "a", "1.0");
   unit["Imperial[turn]"] = UBASE("Imperial", "turn", 6.283185307179590E+00, "rad", "a", "1.0");
   unit["Imperial[tr]"] = UBASE("Imperial", "turn", 6.283185307179590E+00, "rad", "a", "1.0");
   unit["SI[yottaradian]"] = UBASE("SI", "yottaradian", 1.000000000000000E+24, "rad", "a", "1.0");
   unit["SI[Yrad]"] = UBASE("SI", "yottaradian", 1.000000000000000E+24, "rad", "a", "1.0");
   unit["SI[zettaradian]"] = UBASE("SI", "zettaradian", 1.000000000000000E+21, "rad", "a", "1.0");
   unit["SI[Zrad]"] = UBASE("SI", "zettaradian", 1.000000000000000E+21, "rad", "a", "1.0");
   unit["SI[exaradian]"] = UBASE("SI", "exaradian", 1.000000000000000E+18, "rad", "a", "1.0");
   unit["SI[Erad]"] = UBASE("SI", "exaradian", 1.000000000000000E+18, "rad", "a", "1.0");
   unit["SI[petaradian]"] = UBASE("SI", "petaradian", 1.000000000000000E+15, "rad", "a", "1.0");
   unit["SI[Prad]"] = UBASE("SI", "petaradian", 1.000000000000000E+15, "rad", "a", "1.0");
   unit["SI[teraradian]"] = UBASE("SI", "teraradian", 1.000000000000000E+12, "rad", "a", "1.0");
   unit["SI[Trad]"] = UBASE("SI", "teraradian", 1.000000000000000E+12, "rad", "a", "1.0");
   unit["SI[gigaradian]"] = UBASE("SI", "gigaradian", 1.000000000000000E+09, "rad", "a", "1.0");
   unit["SI[Grad]"] = UBASE("SI", "gigaradian", 1.000000000000000E+09, "rad", "a", "1.0");
   unit["SI[megaradian]"] = UBASE("SI", "megaradian", 1.000000000000000E+06, "rad", "a", "1.0");
   unit["SI[Mrad]"] = UBASE("SI", "megaradian", 1.000000000000000E+06, "rad", "a", "1.0");
   unit["SI[kiloradian]"] = UBASE("SI", "kiloradian", 1.000000000000000E+03, "rad", "a", "1.0");
   unit["SI[krad]"] = UBASE("SI", "kiloradian", 1.000000000000000E+03, "rad", "a", "1.0");
   unit["SI[hectoradian]"] = UBASE("SI", "hectoradian", 1.000000000000000E+02, "rad", "a", "1.0");
   unit["SI[hrad]"] = UBASE("SI", "hectoradian", 1.000000000000000E+02, "rad", "a", "1.0");
   unit["SI[decaradian]"] = UBASE("SI", "decaradian", 1.000000000000000E+01, "rad", "a", "1.0");
   unit["SI[darad]"] = UBASE("SI", "decaradian", 1.000000000000000E+01, "rad", "a", "1.0");
   unit["SI[deciradian]"] = UBASE("SI", "deciradian", 1.000000000000000E-01, "rad", "a", "1.0");
   unit["SI[drad]"] = UBASE("SI", "deciradian", 1.000000000000000E-01, "rad", "a", "1.0");
   unit["SI[centiradian]"] = UBASE("SI", "centiradian", 1.000000000000000E-02, "rad", "a", "1.0");
   unit["SI[crad]"] = UBASE("SI", "centiradian", 1.000000000000000E-02, "rad", "a", "1.0");
   unit["SI[milliradian]"] = UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["SI[mrad]"] = UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["SI[millirad]"] = UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0");
   unit["SI[microradian]"] = UBASE("SI", "microradian", 1.000000000000000E-06, "rad", "a", "1.0");
   unit["SI[urad]"] = UBASE("SI", "microradian", 1.000000000000000E-06, "rad", "a", "1.0");
   unit["SI[nanoradian]"] = UBASE("SI", "nanoradian", 1.000000000000000E-09, "rad", "a", "1.0");
   unit["SI[nrad]"] = UBASE("SI", "nanoradian", 1.000000000000000E-09, "rad", "a", "1.0");
   unit["SI[picoradian]"] = UBASE("SI", "picoradian", 1.000000000000000E-12, "rad", "a", "1.0");
   unit["SI[prad]"] = UBASE("SI", "picoradian", 1.000000000000000E-12, "rad", "a", "1.0");
   unit["SI[femtoradian]"] = UBASE("SI", "femtoradian", 1.000000000000000E-15, "rad", "a", "1.0");
   unit["SI[frad]"] = UBASE("SI", "femtoradian", 1.000000000000000E-15, "rad", "a", "1.0");
   unit["SI[attoradian]"] = UBASE("SI", "attoradian", 1.000000000000000E-18, "rad", "a", "1.0");
   unit["SI[arad]"] = UBASE("SI", "attoradian", 1.000000000000000E-18, "rad", "a", "1.0");
   unit["SI[zeptoradian]"] = UBASE("SI", "zeptoradian", 1.000000000000000E-21, "rad", "a", "1.0");
   unit["SI[zrad]"] = UBASE("SI", "zeptoradian", 1.000000000000000E-21, "rad", "a", "1.0");
   unit["SI[yoctoradian]"] = UBASE("SI", "yoctoradian", 1.000000000000000E-24, "rad", "a", "1.0");
   unit["SI[yrad]"] = UBASE("SI", "yoctoradian", 1.000000000000000E-24, "rad", "a", "1.0");
   _map["angle"] = BaseSystem("angle", unit, "1.0");

   unit.clear();


   unit["@[octant]"] = UBASE("@", "octant", 1.570796326794900E+00, "sr", "W", "1.0");
   unit["@[sphere]"] = UBASE("@", "sphere", 1.256637061435920E+01, "sr", "W", "1.0");
   unit["@[spherical-right-angle]"] = UBASE("@", "spherical-right-angle", 3.141592653589790E+00, "sr", "W", "1.0");
   unit["@[sra]"] = UBASE("@", "spherical-right-angle", 3.141592653589790E+00, "sr", "W", "1.0");
   unit["@[square-degree]"] = UBASE("@", "square-degree", 3.046174197867090E-04, "sr", "W", "1.0");
   unit["@[(o)2]"] = UBASE("@", "square-degree", 3.046174197867090E-04, "sr", "W", "1.0");
   unit["@[square-minute]"] = UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0");
   unit["@[(')2]"] = UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0");
   unit["@[min2]"] = UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0");
   unit["@[square-second]"] = UBASE("@", "square-second", 2.350443053900000E-12, "sr", "W", "1.0");
   unit["@[sec2]"] = UBASE("@", "square-second", 2.350443053900000E-12, "sr", "W", "1.0");
   unit["French[square-gon]"] = UBASE("French", "square-gon", 2.467401100272340E-04, "sr", "W", "1.0");
   unit["French[(g)2]"] = UBASE("French", "square-gon", 2.467401100272340E-04, "sr", "W", "1.0");
   unit["French[square-grade]"] = UBASE("French", "square-grade", 2.467401100272340E-04, "sr", "W", "1.0");
   unit["French[(gr)2]"] = UBASE("French", "square-grade", 2.467401100272340E-04, "sr", "W", "1.0");
   unit["Imperial[spat]"] = UBASE("Imperial", "spat", 1.256637061435920E+01, "sr", "W", "1.0");
   unit["Imperial[sp]"] = UBASE("Imperial", "spat", 1.256637061435920E+01, "sr", "W", "1.0");
   unit["SI[stedian]"] = UBASE("SI", "stedian", 1.000000000000000E+00, "sr", "W", "1.0");
   unit["SI[sd]"] = UBASE("SI", "stedian", 1.000000000000000E+00, "sr", "W", "1.0");
   unit["SI[steradian]"] = UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0");
   unit["SI[sr]"] = UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0");
   unit["SI[yottasteradian]"] = UBASE("SI", "yottasteradian", 1.000000000000000E+24, "sr", "W", "1.0");
   unit["SI[Ysr]"] = UBASE("SI", "yottasteradian", 1.000000000000000E+24, "sr", "W", "1.0");
   unit["SI[zettasteradian]"] = UBASE("SI", "zettasteradian", 1.000000000000000E+21, "sr", "W", "1.0");
   unit["SI[Zsr]"] = UBASE("SI", "zettasteradian", 1.000000000000000E+21, "sr", "W", "1.0");
   unit["SI[exasteradian]"] = UBASE("SI", "exasteradian", 1.000000000000000E+18, "sr", "W", "1.0");
   unit["SI[Esr]"] = UBASE("SI", "exasteradian", 1.000000000000000E+18, "sr", "W", "1.0");
   unit["SI[petasteradian]"] = UBASE("SI", "petasteradian", 1.000000000000000E+15, "sr", "W", "1.0");
   unit["SI[Psr]"] = UBASE("SI", "petasteradian", 1.000000000000000E+15, "sr", "W", "1.0");
   unit["SI[terasteradian]"] = UBASE("SI", "terasteradian", 1.000000000000000E+12, "sr", "W", "1.0");
   unit["SI[Tsr]"] = UBASE("SI", "terasteradian", 1.000000000000000E+12, "sr", "W", "1.0");
   unit["SI[gigasteradian]"] = UBASE("SI", "gigasteradian", 1.000000000000000E+09, "sr", "W", "1.0");
   unit["SI[Gsr]"] = UBASE("SI", "gigasteradian", 1.000000000000000E+09, "sr", "W", "1.0");
   unit["SI[megasteradian]"] = UBASE("SI", "megasteradian", 1.000000000000000E+06, "sr", "W", "1.0");
   unit["SI[Msr]"] = UBASE("SI", "megasteradian", 1.000000000000000E+06, "sr", "W", "1.0");
   unit["SI[kilosteradian]"] = UBASE("SI", "kilosteradian", 1.000000000000000E+03, "sr", "W", "1.0");
   unit["SI[ksr]"] = UBASE("SI", "kilosteradian", 1.000000000000000E+03, "sr", "W", "1.0");
   unit["SI[hectosteradian]"] = UBASE("SI", "hectosteradian", 1.000000000000000E+02, "sr", "W", "1.0");
   unit["SI[hsr]"] = UBASE("SI", "hectosteradian", 1.000000000000000E+02, "sr", "W", "1.0");
   unit["SI[decasteradian]"] = UBASE("SI", "decasteradian", 1.000000000000000E+01, "sr", "W", "1.0");
   unit["SI[dasr]"] = UBASE("SI", "decasteradian", 1.000000000000000E+01, "sr", "W", "1.0");
   unit["SI[decisteradian]"] = UBASE("SI", "decisteradian", 1.000000000000000E-01, "sr", "W", "1.0");
   unit["SI[dsr]"] = UBASE("SI", "decisteradian", 1.000000000000000E-01, "sr", "W", "1.0");
   unit["SI[centisteradian]"] = UBASE("SI", "centisteradian", 1.000000000000000E-02, "sr", "W", "1.0");
   unit["SI[csr]"] = UBASE("SI", "centisteradian", 1.000000000000000E-02, "sr", "W", "1.0");
   unit["SI[millisteradian]"] = UBASE("SI", "millisteradian", 1.000000000000000E-03, "sr", "W", "1.0");
   unit["SI[msr]"] = UBASE("SI", "millisteradian", 1.000000000000000E-03, "sr", "W", "1.0");
   unit["SI[microsteradian]"] = UBASE("SI", "microsteradian", 1.000000000000000E-06, "sr", "W", "1.0");
   unit["SI[usr]"] = UBASE("SI", "microsteradian", 1.000000000000000E-06, "sr", "W", "1.0");
   unit["SI[nanosteradian]"] = UBASE("SI", "nanosteradian", 1.000000000000000E-09, "sr", "W", "1.0");
   unit["SI[nsr]"] = UBASE("SI", "nanosteradian", 1.000000000000000E-09, "sr", "W", "1.0");
   unit["SI[picosteradian]"] = UBASE("SI", "picosteradian", 1.000000000000000E-12, "sr", "W", "1.0");
   unit["SI[psr]"] = UBASE("SI", "picosteradian", 1.000000000000000E-12, "sr", "W", "1.0");
   unit["SI[femtosteradian]"] = UBASE("SI", "femtosteradian", 1.000000000000000E-15, "sr", "W", "1.0");
   unit["SI[fsr]"] = UBASE("SI", "femtosteradian", 1.000000000000000E-15, "sr", "W", "1.0");
   unit["SI[attosteradian]"] = UBASE("SI", "attosteradian", 1.000000000000000E-18, "sr", "W", "1.0");
   unit["SI[asr]"] = UBASE("SI", "attosteradian", 1.000000000000000E-18, "sr", "W", "1.0");
   unit["SI[zeptosteradian]"] = UBASE("SI", "zeptosteradian", 1.000000000000000E-21, "sr", "W", "1.0");
   unit["SI[zsr]"] = UBASE("SI", "zeptosteradian", 1.000000000000000E-21, "sr", "W", "1.0");
   unit["SI[yoctosteradian]"] = UBASE("SI", "yoctosteradian", 1.000000000000000E-24, "sr", "W", "1.0");
   unit["SI[ysr]"] = UBASE("SI", "yoctosteradian", 1.000000000000000E-24, "sr", "W", "1.0");
   _map["solidAngle"] = BaseSystem("solidAngle", unit, "1.0");

   unit.clear();


   unit["Scientific[degree-per-year]"] = UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0");
   unit["Scientific[o/yr]"] = UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0");
   unit["Scientific[deg/yr]"] = UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0");
   unit["Scientific[degree-per-month]"] = UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0");
   unit["Scientific[o/mon]"] = UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0");
   unit["Scientific[deg/mon]"] = UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0");
   unit["Scientific[degree-per-day]"] = UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0");
   unit["Scientific[o/d]"] = UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0");
   unit["Scientific[deg/day]"] = UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0");
   unit["Scientific[degree-per-hour]"] = UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0");
   unit["Scientific[o/hr]"] = UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0");
   unit["Scientific[deg/hr]"] = UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0");
   unit["Scientific[degree-per-minute]"] = UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0");
   unit["Scientific[o/min]"] = UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0");
   unit["Scientific[deg/min]"] = UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0");
   unit["Scientific[degree-per-second]"] = UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0");
   unit["Scientific[o/s]"] = UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0");
   unit["Scientific[deg/sec]"] = UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0");
   unit["SI[radian-per-year]"] = UBASE("SI", "radian-per-year", 3.170979198376460E-08, "rad/s", "a/T", "1.0");
   unit["SI[rad/yr]"] = UBASE("SI", "radian-per-year", 3.170979198376460E-08, "rad/s", "a/T", "1.0");
   unit["SI[radian-per-month]"] = UBASE("SI", "radian-per-month", 3.858024691358020E-07, "rad/s", "a/T", "1.0");
   unit["SI[rad/mon]"] = UBASE("SI", "radian-per-month", 3.858024691358020E-07, "rad/s", "a/T", "1.0");
   unit["SI[radian-per-day]"] = UBASE("SI", "radian-per-day", 1.157407407407410E-05, "rad/s", "a/T", "1.0");
   unit["SI[rad/day]"] = UBASE("SI", "radian-per-day", 1.157407407407410E-05, "rad/s", "a/T", "1.0");
   unit["SI[radian-per-hour]"] = UBASE("SI", "radian-per-hour", 2.777777777777780E-04, "rad/s", "a/T", "1.0");
   unit["SI[rad/hr]"] = UBASE("SI", "radian-per-hour", 2.777777777777780E-04, "rad/s", "a/T", "1.0");
   unit["SI[radian-per-minute]"] = UBASE("SI", "radian-per-minute", 1.666666666666670E-02, "rad/s", "a/T", "1.0");
   unit["SI[rad/min]"] = UBASE("SI", "radian-per-minute", 1.666666666666670E-02, "rad/s", "a/T", "1.0");
   unit["SI[radian-per-second]"] = UBASE("SI", "radian-per-second", 1.000000000000000E+00, "rad/s", "a/T", "1.0");
   unit["SI[rad/sec]"] = UBASE("SI", "radian-per-second", 1.000000000000000E+00, "rad/s", "a/T", "1.0");
   unit["Scientific[strob]"] = UBASE("Scientific", "strob", 1.000000000000000E+00, "rad/s", "a/T", "1.0");
   unit["Imperial[revolutions-per-year]"] = UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0");
   unit["Imperial[rpy]"] = UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0");
   unit["Imperial[rev/yr]"] = UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0");
   unit["Imperial[revolutions-per-month]"] = UBASE("Imperial", "revolutions-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0");
   unit["Imperial[rev/mon]"] = UBASE("Imperial", "revolutions-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0");
   unit["Imperial[revolutions-per-day]"] = UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0");
   unit["Imperial[rpd]"] = UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0");
   unit["Imperial[rev/day]"] = UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0");
   unit["Imperial[revolutions-per-hour]"] = UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0");
   unit["Imperial[rph]"] = UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0");
   unit["Imperial[rev/hr]"] = UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0");
   unit["Imperial[revolutions-per-minute]"] = UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0");
   unit["Imperial[rpm]"] = UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0");
   unit["Imperial[rev/min]"] = UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0");
   unit["Imperial[revolutions-per-second]"] = UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0");
   unit["Imperial[rps]"] = UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0");
   unit["Imperial[rev/sec]"] = UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0");
   unit["Imperial[turn-per-second]"] = UBASE("Imperial", "turn-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0");
   unit["Imperial[tr/sec]"] = UBASE("Imperial", "turn-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0");
   unit["Imperial[turn-per-minute]"] = UBASE("Imperial", "turn-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0");
   unit["Imperial[tr/min]"] = UBASE("Imperial", "turn-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0");
   unit["Imperial[turn-per-hour]"] = UBASE("Imperial", "turn-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0");
   unit["Imperial[tr/hr]"] = UBASE("Imperial", "turn-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0");
   unit["Imperial[turn-per-day]"] = UBASE("Imperial", "turn-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0");
   unit["Imperial[tr/day]"] = UBASE("Imperial", "turn-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0");
   unit["Imperial[turn-per-month]"] = UBASE("Imperial", "turn-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0");
   unit["Imperial[tr/mon]"] = UBASE("Imperial", "turn-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0");
   unit["Imperial[turn-per-year]"] = UBASE("Imperial", "turn-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0");
   unit["Imperial[tr/yr]"] = UBASE("Imperial", "turn-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0");
   unit["INT[grade-per-second]"] = UBASE("INT", "grade-per-second", 1.570796326794900E-02, "rad/s", "a/T", "1.0");
   unit["INT[gon/sec]"] = UBASE("INT", "grade-per-second", 1.570796326794900E-02, "rad/s", "a/T", "1.0");
   unit["INT[grade-per-minute]"] = UBASE("INT", "grade-per-minute", 2.617993877991490E-04, "rad/s", "a/T", "1.0");
   unit["INT[gon/min]"] = UBASE("INT", "grade-per-minute", 2.617993877991490E-04, "rad/s", "a/T", "1.0");
   unit["INT[grade-per-hour]"] = UBASE("INT", "grade-per-hour", 4.363323129985820E-06, "rad/s", "a/T", "1.0");
   unit["INT[gon/hr]"] = UBASE("INT", "grade-per-hour", 4.363323129985820E-06, "rad/s", "a/T", "1.0");
   unit["INT[grade-per-day]"] = UBASE("INT", "grade-per-day", 1.818051304160760E-07, "rad/s", "a/T", "1.0");
   unit["INT[gon/day]"] = UBASE("INT", "grade-per-day", 1.818051304160760E-07, "rad/s", "a/T", "1.0");
   unit["INT[grade-per-month]"] = UBASE("INT", "grade-per-month", 6.060171013869200E-09, "rad/s", "a/T", "1.0");
   unit["INT[gon/mon]"] = UBASE("INT", "grade-per-month", 6.060171013869200E-09, "rad/s", "a/T", "1.0");
   unit["INT[grade-per-year]"] = UBASE("INT", "grade-per-year", 4.980962477152770E-10, "rad/s", "a/T", "1.0");
   unit["INT[gon/yr]"] = UBASE("INT", "grade-per-year", 4.980962477152770E-10, "rad/s", "a/T", "1.0");
   _map["angularVelocity"] = BaseSystem("angularVelocity", unit, "1.0");

   unit.clear();


   unit["SI[radian-per-square-second]"] = UBASE("SI", "radian-per-square-second", 1.000000000000000E+00, "rad/s2", "a/T2", "1.0");
   unit["SI[rad/sec2]"] = UBASE("SI", "radian-per-square-second", 1.000000000000000E+00, "rad/s2", "a/T2", "1.0");
   unit["Scientific[degree-per-square-second]"] = UBASE("Scientific", "degree-per-square-second", 1.745329251994330E-02, "rad/s2", "a/T2", "1.0");
   unit["Scientific[deg/sec2]"] = UBASE("Scientific", "degree-per-square-second", 1.745329251994330E-02, "rad/s2", "a/T2", "1.0");
   _map["angularAcceleration"] = BaseSystem("angularAcceleration", unit, "1.0");

   unit.clear();


}

// EOF
