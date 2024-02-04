#################################################################################
#2345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
#################################################################################
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#################################################################################
#
# File Angle.py
#
# Units for Angle
#
# Class for Angle units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Angle(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Angle.__instance == None:
            Angle.__instance = Angle()
        return Angle.__instance

    def __new__(self):
       if Angle.__instance == None:
           Angle.__instance = super(Angle, self).__new__(self)

       return  Angle.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"French[angle-droit]": UBASE.UBASE("French", "angle-droit", 1.570796326794900E+00, "rad", "a", "1.0")})
        unit.update({"French[D]": UBASE.UBASE("French", "angle-droit", 1.570796326794900E+00, "rad", "a", "1.0")})
        unit.update({"Angle[centrad]": UBASE.UBASE("Angle", "centrad", 1.000000000000000E-02, "rad", "a", "1.0")})
        unit.update({"INT[circumference]": UBASE.UBASE("INT", "circumference", 6.283185307179590E+00, "rad", "a", "1.0")})
        unit.update({"INT[degree]": UBASE.UBASE("INT", "degree", 1.745329251994330E-02, "rad", "a", "1.0")})
        unit.update({"Angle[degree]": UBASE.UBASE("Angle", "degree", 1.745329251994330E-02, "rad", "a", "1.0")})
        unit.update({"Angle[dekan]": UBASE.UBASE("Angle", "dekan", 1.745329251994330E-01, "rad", "a", "1.0")})
        unit.update({"French[dimigrade]": UBASE.UBASE("French", "dimigrade", 1.570796326794900E-06, "rad", "a", "1.0")})
        unit.update({"French[dmgr]": UBASE.UBASE("French", "dimigrade", 1.570796326794900E-06, "rad", "a", "1.0")})
        unit.update({"INT[gon]": UBASE.UBASE("INT", "gon", 1.570796326794900E-02, "rad", "a", "1.0")})
        unit.update({"French[gon]": UBASE.UBASE("French", "gon", 1.570796326794900E-02, "rad", "a", "1.0")})
        unit.update({"French[g]": UBASE.UBASE("French", "gon", 1.570796326794900E-02, "rad", "a", "1.0")})
        unit.update({"French[grade]": UBASE.UBASE("French", "grade", 1.570796326794900E-02, "rad", "a", "1.0")})
        unit.update({"French[gr]": UBASE.UBASE("French", "grade", 1.570796326794900E-02, "rad", "a", "1.0")})
        unit.update({"Angle[hour-of-angle]": UBASE.UBASE("Angle", "hour-of-angle", 2.617993877991490E-01, "rad", "a", "1.0")})
        unit.update({"Angle[hoa]": UBASE.UBASE("Angle", "hour-of-angle", 2.617993877991490E-01, "rad", "a", "1.0")})
        unit.update({"Angle[house]": UBASE.UBASE("Angle", "house", 5.235987755982990E-01, "rad", "a", "1.0")})
        unit.update({"@[mas]": UBASE.UBASE("@", "mas", 4.848136811095360E-09, "rad", "a", "1.0")})
        unit.update({"Angle[mil]": UBASE.UBASE("Angle", "mil", 1.022653858590430E-03, "rad", "a", "1.0")})
        unit.update({"INT[milangle]": UBASE.UBASE("INT", "milangle", 9.817477042468100E-04, "rad", "a", "1.0")})
        unit.update({"INT[millieme]": UBASE.UBASE("INT", "millieme", 9.817477042468100E-04, "rad", "a", "1.0")})
        unit.update({"Russian[millieme]": UBASE.UBASE("Russian", "millieme", 9.973310011396170E-04, "rad", "a", "1.0")})
        unit.update({"US[millieme]": UBASE.UBASE("US", "millieme", 1.570796326794900E-03, "rad", "a", "1.0")})
        unit.update({"French[millieme]": UBASE.UBASE("French", "millieme", 9.817477042468100E-04, "rad", "a", "1.0")})
        unit.update({"French[ma]": UBASE.UBASE("French", "millieme", 9.817477042468100E-04, "rad", "a", "1.0")})
        unit.update({"French[millieme(artillery)]": UBASE.UBASE("French", "millieme(artillery)", 9.999996666668670E-04, "rad", "a", "1.0")})
        unit.update({"French[millieme(Rimailho)]": UBASE.UBASE("French", "millieme(Rimailho)", 1.047197551196600E-03, "rad", "a", "1.0")})
        unit.update({"French[mr]": UBASE.UBASE("French", "millieme(Rimailho)", 1.047197551196600E-03, "rad", "a", "1.0")})
        unit.update({"French[millieme-vrai]": UBASE.UBASE("French", "millieme-vrai", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"French[mv]": UBASE.UBASE("French", "millieme-vrai", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"Angle[milliradian]": UBASE.UBASE("Angle", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"Angle[millirad]": UBASE.UBASE("Angle", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"@[milliarc-second]": UBASE.UBASE("@", "milliarc-second", 4.848136811095360E-09, "rad", "a", "1.0")})
        unit.update({"@[milliarcsec]": UBASE.UBASE("@", "milliarc-second", 4.848136811095360E-09, "rad", "a", "1.0")})
        unit.update({"@[millisecond-of-arc]": UBASE.UBASE("@", "millisecond-of-arc", 4.848136811095360E-09, "rad", "a", "1.0")})
        unit.update({"Angle[minute]": UBASE.UBASE("Angle", "minute", 2.908882086657220E-04, "rad", "a", "1.0")})
        unit.update({"Angle[min]": UBASE.UBASE("Angle", "minute", 2.908882086657220E-04, "rad", "a", "1.0")})
        unit.update({"INT[minute-of-angle]": UBASE.UBASE("INT", "minute-of-angle", 2.908882086657220E-04, "rad", "a", "1.0")})
        unit.update({"French[minute-of-angle]": UBASE.UBASE("French", "minute-of-angle", 1.570796326794900E-04, "rad", "a", "1.0")})
        unit.update({"French[c]": UBASE.UBASE("French", "minute-of-angle", 1.570796326794900E-04, "rad", "a", "1.0")})
        unit.update({"Imperial[o'clock]": UBASE.UBASE("Imperial", "o'clock", 5.235987755982990E-01, "rad", "a", "1.0")})
        unit.update({"Angle[octant]": UBASE.UBASE("Angle", "octant", 7.853981630000000E-01, "rad", "a", "1.0")})
        unit.update({"INT[percent]": UBASE.UBASE("INT", "percent", 9.999666686665240E-03, "rad", "a", "1.0")})
        unit.update({"Angle[plane-angle]": UBASE.UBASE("Angle", "plane-angle", 3.141592653589790E+00, "rad", "a", "1.0")})
        unit.update({"INT[point]": UBASE.UBASE("INT", "point", 1.963495408493620E-01, "rad", "a", "1.0")})
        unit.update({"Angle[quadrant]": UBASE.UBASE("Angle", "quadrant", 1.570796326794900E+00, "rad", "a", "1.0")})
        unit.update({"INT[quintant]": UBASE.UBASE("INT", "quintant", 1.256637061435920E+00, "rad", "a", "1.0")})
        unit.update({"SI[radian]": UBASE.UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0")})
        unit.update({"SI[rad]": UBASE.UBASE("SI", "radian", 1.000000000000000E+00, "rad", "a", "1.0")})
        unit.update({"Angle[radian]": UBASE.UBASE("Angle", "radian", 1.000000000000000E+00, "rad", "a", "1.0")})
        unit.update({"Angle[rad]": UBASE.UBASE("Angle", "radian", 1.000000000000000E+00, "rad", "a", "1.0")})
        unit.update({"Imperial[revolution]": UBASE.UBASE("Imperial", "revolution", 6.283185307179590E+00, "rad", "a", "1.0")})
        unit.update({"Imperial[rev]": UBASE.UBASE("Imperial", "revolution", 6.283185307179590E+00, "rad", "a", "1.0")})
        unit.update({"Angle[right-angle]": UBASE.UBASE("Angle", "right-angle", 1.570796326794900E+00, "rad", "a", "1.0")})
        unit.update({"Angle[round]": UBASE.UBASE("Angle", "round", 6.283185307179590E+00, "rad", "a", "1.0")})
        unit.update({"Angle[second]": UBASE.UBASE("Angle", "second", 4.848136811095360E-06, "rad", "a", "1.0")})
        unit.update({"Angle[sec]": UBASE.UBASE("Angle", "second", 4.848136811095360E-06, "rad", "a", "1.0")})
        unit.update({"@[second-longitude]": UBASE.UBASE("@", "second-longitude", 7.272205216643040E-05, "rad", "a", "1.0")})
        unit.update({"@[sec-lon]": UBASE.UBASE("@", "second-longitude", 7.272205216643040E-05, "rad", "a", "1.0")})
        unit.update({"INT[second-of-angle]": UBASE.UBASE("INT", "second-of-angle", 4.848136811095360E-06, "rad", "a", "1.0")})
        unit.update({"French[second-of-angle]": UBASE.UBASE("French", "second-of-angle", 1.570796326794900E-04, "rad", "a", "1.0")})
        unit.update({"French[C]": UBASE.UBASE("French", "second-of-angle", 1.570796326794900E-04, "rad", "a", "1.0")})
        unit.update({"INT[sextant]": UBASE.UBASE("INT", "sextant", 1.047197551196600E+00, "rad", "a", "1.0")})
        unit.update({"Angle[sign]": UBASE.UBASE("Angle", "sign", 5.235987755982990E-01, "rad", "a", "1.0")})
        unit.update({"INT[thousand]": UBASE.UBASE("INT", "thousand", 9.817477042468100E-04, "rad", "a", "1.0")})
        unit.update({"Russian[thousand]": UBASE.UBASE("Russian", "thousand", 9.973310011396170E-04, "rad", "a", "1.0")})
        unit.update({"US[thousand]": UBASE.UBASE("US", "thousand", 1.570796326794900E-03, "rad", "a", "1.0")})
        unit.update({"French[thousand]": UBASE.UBASE("French", "thousand", 9.999996666668670E-04, "rad", "a", "1.0")})
        unit.update({"Imperial[turn]": UBASE.UBASE("Imperial", "turn", 6.283185307179590E+00, "rad", "a", "1.0")})
        unit.update({"Imperial[tr]": UBASE.UBASE("Imperial", "turn", 6.283185307179590E+00, "rad", "a", "1.0")})
        unit.update({"SI[yottaradian]": UBASE.UBASE("SI", "yottaradian", 1.000000000000000E+24, "rad", "a", "1.0")})
        unit.update({"SI[Yrad]": UBASE.UBASE("SI", "yottaradian", 1.000000000000000E+24, "rad", "a", "1.0")})
        unit.update({"SI[zettaradian]": UBASE.UBASE("SI", "zettaradian", 1.000000000000000E+21, "rad", "a", "1.0")})
        unit.update({"SI[Zrad]": UBASE.UBASE("SI", "zettaradian", 1.000000000000000E+21, "rad", "a", "1.0")})
        unit.update({"SI[exaradian]": UBASE.UBASE("SI", "exaradian", 1.000000000000000E+18, "rad", "a", "1.0")})
        unit.update({"SI[Erad]": UBASE.UBASE("SI", "exaradian", 1.000000000000000E+18, "rad", "a", "1.0")})
        unit.update({"SI[petaradian]": UBASE.UBASE("SI", "petaradian", 1.000000000000000E+15, "rad", "a", "1.0")})
        unit.update({"SI[Prad]": UBASE.UBASE("SI", "petaradian", 1.000000000000000E+15, "rad", "a", "1.0")})
        unit.update({"SI[teraradian]": UBASE.UBASE("SI", "teraradian", 1.000000000000000E+12, "rad", "a", "1.0")})
        unit.update({"SI[Trad]": UBASE.UBASE("SI", "teraradian", 1.000000000000000E+12, "rad", "a", "1.0")})
        unit.update({"SI[gigaradian]": UBASE.UBASE("SI", "gigaradian", 1.000000000000000E+09, "rad", "a", "1.0")})
        unit.update({"SI[Grad]": UBASE.UBASE("SI", "gigaradian", 1.000000000000000E+09, "rad", "a", "1.0")})
        unit.update({"SI[megaradian]": UBASE.UBASE("SI", "megaradian", 1.000000000000000E+06, "rad", "a", "1.0")})
        unit.update({"SI[Mrad]": UBASE.UBASE("SI", "megaradian", 1.000000000000000E+06, "rad", "a", "1.0")})
        unit.update({"SI[kiloradian]": UBASE.UBASE("SI", "kiloradian", 1.000000000000000E+03, "rad", "a", "1.0")})
        unit.update({"SI[krad]": UBASE.UBASE("SI", "kiloradian", 1.000000000000000E+03, "rad", "a", "1.0")})
        unit.update({"SI[hectoradian]": UBASE.UBASE("SI", "hectoradian", 1.000000000000000E+02, "rad", "a", "1.0")})
        unit.update({"SI[hrad]": UBASE.UBASE("SI", "hectoradian", 1.000000000000000E+02, "rad", "a", "1.0")})
        unit.update({"SI[decaradian]": UBASE.UBASE("SI", "decaradian", 1.000000000000000E+01, "rad", "a", "1.0")})
        unit.update({"SI[darad]": UBASE.UBASE("SI", "decaradian", 1.000000000000000E+01, "rad", "a", "1.0")})
        unit.update({"SI[deciradian]": UBASE.UBASE("SI", "deciradian", 1.000000000000000E-01, "rad", "a", "1.0")})
        unit.update({"SI[drad]": UBASE.UBASE("SI", "deciradian", 1.000000000000000E-01, "rad", "a", "1.0")})
        unit.update({"SI[centiradian]": UBASE.UBASE("SI", "centiradian", 1.000000000000000E-02, "rad", "a", "1.0")})
        unit.update({"SI[crad]": UBASE.UBASE("SI", "centiradian", 1.000000000000000E-02, "rad", "a", "1.0")})
        unit.update({"SI[milliradian]": UBASE.UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"SI[mrad]": UBASE.UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"SI[millirad]": UBASE.UBASE("SI", "milliradian", 1.000000000000000E-03, "rad", "a", "1.0")})
        unit.update({"SI[microradian]": UBASE.UBASE("SI", "microradian", 1.000000000000000E-06, "rad", "a", "1.0")})
        unit.update({"SI[urad]": UBASE.UBASE("SI", "microradian", 1.000000000000000E-06, "rad", "a", "1.0")})
        unit.update({"SI[nanoradian]": UBASE.UBASE("SI", "nanoradian", 1.000000000000000E-09, "rad", "a", "1.0")})
        unit.update({"SI[nrad]": UBASE.UBASE("SI", "nanoradian", 1.000000000000000E-09, "rad", "a", "1.0")})
        unit.update({"SI[picoradian]": UBASE.UBASE("SI", "picoradian", 1.000000000000000E-12, "rad", "a", "1.0")})
        unit.update({"SI[prad]": UBASE.UBASE("SI", "picoradian", 1.000000000000000E-12, "rad", "a", "1.0")})
        unit.update({"SI[femtoradian]": UBASE.UBASE("SI", "femtoradian", 1.000000000000000E-15, "rad", "a", "1.0")})
        unit.update({"SI[frad]": UBASE.UBASE("SI", "femtoradian", 1.000000000000000E-15, "rad", "a", "1.0")})
        unit.update({"SI[attoradian]": UBASE.UBASE("SI", "attoradian", 1.000000000000000E-18, "rad", "a", "1.0")})
        unit.update({"SI[arad]": UBASE.UBASE("SI", "attoradian", 1.000000000000000E-18, "rad", "a", "1.0")})
        unit.update({"SI[zeptoradian]": UBASE.UBASE("SI", "zeptoradian", 1.000000000000000E-21, "rad", "a", "1.0")})
        unit.update({"SI[zrad]": UBASE.UBASE("SI", "zeptoradian", 1.000000000000000E-21, "rad", "a", "1.0")})
        unit.update({"SI[yoctoradian]": UBASE.UBASE("SI", "yoctoradian", 1.000000000000000E-24, "rad", "a", "1.0")})
        unit.update({"SI[yrad]": UBASE.UBASE("SI", "yoctoradian", 1.000000000000000E-24, "rad", "a", "1.0")})
        self._map.update({"angle": BaseSystem.BaseSystem("angle", unit, "1.0")})

        unit.clear()


        unit.update({"@[octant]": UBASE.UBASE("@", "octant", 1.570796326794900E+00, "sr", "W", "1.0")})
        unit.update({"@[sphere]": UBASE.UBASE("@", "sphere", 1.256637061435920E+01, "sr", "W", "1.0")})
        unit.update({"@[spherical-right-angle]": UBASE.UBASE("@", "spherical-right-angle", 3.141592653589790E+00, "sr", "W", "1.0")})
        unit.update({"@[sra]": UBASE.UBASE("@", "spherical-right-angle", 3.141592653589790E+00, "sr", "W", "1.0")})
        unit.update({"@[square-degree]": UBASE.UBASE("@", "square-degree", 3.046174197867090E-04, "sr", "W", "1.0")})
        unit.update({"@[(o)2]": UBASE.UBASE("@", "square-degree", 3.046174197867090E-04, "sr", "W", "1.0")})
        unit.update({"@[square-minute]": UBASE.UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0")})
        unit.update({"@[(')2]": UBASE.UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0")})
        unit.update({"@[min2]": UBASE.UBASE("@", "square-minute", 8.461594994075240E-06, "sr", "W", "1.0")})
        unit.update({"@[square-second]": UBASE.UBASE("@", "square-second", 2.350443053900000E-12, "sr", "W", "1.0")})
        unit.update({"@[sec2]": UBASE.UBASE("@", "square-second", 2.350443053900000E-12, "sr", "W", "1.0")})
        unit.update({"French[square-gon]": UBASE.UBASE("French", "square-gon", 2.467401100272340E-04, "sr", "W", "1.0")})
        unit.update({"French[(g)2]": UBASE.UBASE("French", "square-gon", 2.467401100272340E-04, "sr", "W", "1.0")})
        unit.update({"French[square-grade]": UBASE.UBASE("French", "square-grade", 2.467401100272340E-04, "sr", "W", "1.0")})
        unit.update({"French[(gr)2]": UBASE.UBASE("French", "square-grade", 2.467401100272340E-04, "sr", "W", "1.0")})
        unit.update({"Imperial[spat]": UBASE.UBASE("Imperial", "spat", 1.256637061435920E+01, "sr", "W", "1.0")})
        unit.update({"Imperial[sp]": UBASE.UBASE("Imperial", "spat", 1.256637061435920E+01, "sr", "W", "1.0")})
        unit.update({"SI[stedian]": UBASE.UBASE("SI", "stedian", 1.000000000000000E+00, "sr", "W", "1.0")})
        unit.update({"SI[sd]": UBASE.UBASE("SI", "stedian", 1.000000000000000E+00, "sr", "W", "1.0")})
        unit.update({"SI[steradian]": UBASE.UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0")})
        unit.update({"SI[sr]": UBASE.UBASE("SI", "steradian", 1.000000000000000E+00, "sr", "W", "1.0")})
        unit.update({"SI[yottasteradian]": UBASE.UBASE("SI", "yottasteradian", 1.000000000000000E+24, "sr", "W", "1.0")})
        unit.update({"SI[Ysr]": UBASE.UBASE("SI", "yottasteradian", 1.000000000000000E+24, "sr", "W", "1.0")})
        unit.update({"SI[zettasteradian]": UBASE.UBASE("SI", "zettasteradian", 1.000000000000000E+21, "sr", "W", "1.0")})
        unit.update({"SI[Zsr]": UBASE.UBASE("SI", "zettasteradian", 1.000000000000000E+21, "sr", "W", "1.0")})
        unit.update({"SI[exasteradian]": UBASE.UBASE("SI", "exasteradian", 1.000000000000000E+18, "sr", "W", "1.0")})
        unit.update({"SI[Esr]": UBASE.UBASE("SI", "exasteradian", 1.000000000000000E+18, "sr", "W", "1.0")})
        unit.update({"SI[petasteradian]": UBASE.UBASE("SI", "petasteradian", 1.000000000000000E+15, "sr", "W", "1.0")})
        unit.update({"SI[Psr]": UBASE.UBASE("SI", "petasteradian", 1.000000000000000E+15, "sr", "W", "1.0")})
        unit.update({"SI[terasteradian]": UBASE.UBASE("SI", "terasteradian", 1.000000000000000E+12, "sr", "W", "1.0")})
        unit.update({"SI[Tsr]": UBASE.UBASE("SI", "terasteradian", 1.000000000000000E+12, "sr", "W", "1.0")})
        unit.update({"SI[gigasteradian]": UBASE.UBASE("SI", "gigasteradian", 1.000000000000000E+09, "sr", "W", "1.0")})
        unit.update({"SI[Gsr]": UBASE.UBASE("SI", "gigasteradian", 1.000000000000000E+09, "sr", "W", "1.0")})
        unit.update({"SI[megasteradian]": UBASE.UBASE("SI", "megasteradian", 1.000000000000000E+06, "sr", "W", "1.0")})
        unit.update({"SI[Msr]": UBASE.UBASE("SI", "megasteradian", 1.000000000000000E+06, "sr", "W", "1.0")})
        unit.update({"SI[kilosteradian]": UBASE.UBASE("SI", "kilosteradian", 1.000000000000000E+03, "sr", "W", "1.0")})
        unit.update({"SI[ksr]": UBASE.UBASE("SI", "kilosteradian", 1.000000000000000E+03, "sr", "W", "1.0")})
        unit.update({"SI[hectosteradian]": UBASE.UBASE("SI", "hectosteradian", 1.000000000000000E+02, "sr", "W", "1.0")})
        unit.update({"SI[hsr]": UBASE.UBASE("SI", "hectosteradian", 1.000000000000000E+02, "sr", "W", "1.0")})
        unit.update({"SI[decasteradian]": UBASE.UBASE("SI", "decasteradian", 1.000000000000000E+01, "sr", "W", "1.0")})
        unit.update({"SI[dasr]": UBASE.UBASE("SI", "decasteradian", 1.000000000000000E+01, "sr", "W", "1.0")})
        unit.update({"SI[decisteradian]": UBASE.UBASE("SI", "decisteradian", 1.000000000000000E-01, "sr", "W", "1.0")})
        unit.update({"SI[dsr]": UBASE.UBASE("SI", "decisteradian", 1.000000000000000E-01, "sr", "W", "1.0")})
        unit.update({"SI[centisteradian]": UBASE.UBASE("SI", "centisteradian", 1.000000000000000E-02, "sr", "W", "1.0")})
        unit.update({"SI[csr]": UBASE.UBASE("SI", "centisteradian", 1.000000000000000E-02, "sr", "W", "1.0")})
        unit.update({"SI[millisteradian]": UBASE.UBASE("SI", "millisteradian", 1.000000000000000E-03, "sr", "W", "1.0")})
        unit.update({"SI[msr]": UBASE.UBASE("SI", "millisteradian", 1.000000000000000E-03, "sr", "W", "1.0")})
        unit.update({"SI[microsteradian]": UBASE.UBASE("SI", "microsteradian", 1.000000000000000E-06, "sr", "W", "1.0")})
        unit.update({"SI[usr]": UBASE.UBASE("SI", "microsteradian", 1.000000000000000E-06, "sr", "W", "1.0")})
        unit.update({"SI[nanosteradian]": UBASE.UBASE("SI", "nanosteradian", 1.000000000000000E-09, "sr", "W", "1.0")})
        unit.update({"SI[nsr]": UBASE.UBASE("SI", "nanosteradian", 1.000000000000000E-09, "sr", "W", "1.0")})
        unit.update({"SI[picosteradian]": UBASE.UBASE("SI", "picosteradian", 1.000000000000000E-12, "sr", "W", "1.0")})
        unit.update({"SI[psr]": UBASE.UBASE("SI", "picosteradian", 1.000000000000000E-12, "sr", "W", "1.0")})
        unit.update({"SI[femtosteradian]": UBASE.UBASE("SI", "femtosteradian", 1.000000000000000E-15, "sr", "W", "1.0")})
        unit.update({"SI[fsr]": UBASE.UBASE("SI", "femtosteradian", 1.000000000000000E-15, "sr", "W", "1.0")})
        unit.update({"SI[attosteradian]": UBASE.UBASE("SI", "attosteradian", 1.000000000000000E-18, "sr", "W", "1.0")})
        unit.update({"SI[asr]": UBASE.UBASE("SI", "attosteradian", 1.000000000000000E-18, "sr", "W", "1.0")})
        unit.update({"SI[zeptosteradian]": UBASE.UBASE("SI", "zeptosteradian", 1.000000000000000E-21, "sr", "W", "1.0")})
        unit.update({"SI[zsr]": UBASE.UBASE("SI", "zeptosteradian", 1.000000000000000E-21, "sr", "W", "1.0")})
        unit.update({"SI[yoctosteradian]": UBASE.UBASE("SI", "yoctosteradian", 1.000000000000000E-24, "sr", "W", "1.0")})
        unit.update({"SI[ysr]": UBASE.UBASE("SI", "yoctosteradian", 1.000000000000000E-24, "sr", "W", "1.0")})
        self._map.update({"solidAngle": BaseSystem.BaseSystem("solidAngle", unit, "1.0")})

        unit.clear()


        unit.update({"Scientific[degree-per-year]": UBASE.UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[o/yr]": UBASE.UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[deg/yr]": UBASE.UBASE("Scientific", "degree-per-year", 5.534402752391960E-10, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[degree-per-month]": UBASE.UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[o/mon]": UBASE.UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[deg/mon]": UBASE.UBASE("Scientific", "degree-per-month", 6.733523348743560E-09, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[degree-per-day]": UBASE.UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[o/d]": UBASE.UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[deg/day]": UBASE.UBASE("Scientific", "degree-per-day", 2.020057004623070E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[degree-per-hour]": UBASE.UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[o/hr]": UBASE.UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[deg/hr]": UBASE.UBASE("Scientific", "degree-per-hour", 4.848136811095360E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[degree-per-minute]": UBASE.UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[o/min]": UBASE.UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[deg/min]": UBASE.UBASE("Scientific", "degree-per-minute", 2.908882086657220E-04, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[degree-per-second]": UBASE.UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[o/s]": UBASE.UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[deg/sec]": UBASE.UBASE("Scientific", "degree-per-second", 1.745329251994330E-02, "rad/s", "a/T", "1.0")})
        unit.update({"SI[radian-per-year]": UBASE.UBASE("SI", "radian-per-year", 3.170979198376460E-08, "rad/s", "a/T", "1.0")})
        unit.update({"SI[rad/yr]": UBASE.UBASE("SI", "radian-per-year", 3.170979198376460E-08, "rad/s", "a/T", "1.0")})
        unit.update({"SI[radian-per-month]": UBASE.UBASE("SI", "radian-per-month", 3.858024691358020E-07, "rad/s", "a/T", "1.0")})
        unit.update({"SI[rad/mon]": UBASE.UBASE("SI", "radian-per-month", 3.858024691358020E-07, "rad/s", "a/T", "1.0")})
        unit.update({"SI[radian-per-day]": UBASE.UBASE("SI", "radian-per-day", 1.157407407407410E-05, "rad/s", "a/T", "1.0")})
        unit.update({"SI[rad/day]": UBASE.UBASE("SI", "radian-per-day", 1.157407407407410E-05, "rad/s", "a/T", "1.0")})
        unit.update({"SI[radian-per-hour]": UBASE.UBASE("SI", "radian-per-hour", 2.777777777777780E-04, "rad/s", "a/T", "1.0")})
        unit.update({"SI[rad/hr]": UBASE.UBASE("SI", "radian-per-hour", 2.777777777777780E-04, "rad/s", "a/T", "1.0")})
        unit.update({"SI[radian-per-minute]": UBASE.UBASE("SI", "radian-per-minute", 1.666666666666670E-02, "rad/s", "a/T", "1.0")})
        unit.update({"SI[rad/min]": UBASE.UBASE("SI", "radian-per-minute", 1.666666666666670E-02, "rad/s", "a/T", "1.0")})
        unit.update({"SI[radian-per-second]": UBASE.UBASE("SI", "radian-per-second", 1.000000000000000E+00, "rad/s", "a/T", "1.0")})
        unit.update({"SI[rad/sec]": UBASE.UBASE("SI", "radian-per-second", 1.000000000000000E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Scientific[strob]": UBASE.UBASE("Scientific", "strob", 1.000000000000000E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[revolutions-per-year]": UBASE.UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rpy]": UBASE.UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rev/yr]": UBASE.UBASE("Imperial", "revolutions-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[revolutions-per-month]": UBASE.UBASE("Imperial", "revolutions-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rev/mon]": UBASE.UBASE("Imperial", "revolutions-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[revolutions-per-day]": UBASE.UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rpd]": UBASE.UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rev/day]": UBASE.UBASE("Imperial", "revolutions-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[revolutions-per-hour]": UBASE.UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rph]": UBASE.UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rev/hr]": UBASE.UBASE("Imperial", "revolutions-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[revolutions-per-minute]": UBASE.UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rpm]": UBASE.UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rev/min]": UBASE.UBASE("Imperial", "revolutions-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[revolutions-per-second]": UBASE.UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rps]": UBASE.UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[rev/sec]": UBASE.UBASE("Imperial", "revolutions-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[turn-per-second]": UBASE.UBASE("Imperial", "turn-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[tr/sec]": UBASE.UBASE("Imperial", "turn-per-second", 6.283185307179590E+00, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[turn-per-minute]": UBASE.UBASE("Imperial", "turn-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[tr/min]": UBASE.UBASE("Imperial", "turn-per-minute", 1.047197551196600E-01, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[turn-per-hour]": UBASE.UBASE("Imperial", "turn-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[tr/hr]": UBASE.UBASE("Imperial", "turn-per-hour", 1.745329251994330E-03, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[turn-per-day]": UBASE.UBASE("Imperial", "turn-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[tr/day]": UBASE.UBASE("Imperial", "turn-per-day", 7.272205216643040E-05, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[turn-per-month]": UBASE.UBASE("Imperial", "turn-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[tr/mon]": UBASE.UBASE("Imperial", "turn-per-month", 2.424068405547680E-06, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[turn-per-year]": UBASE.UBASE("Imperial", "turn-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0")})
        unit.update({"Imperial[tr/yr]": UBASE.UBASE("Imperial", "turn-per-year", 1.992384990861110E-07, "rad/s", "a/T", "1.0")})
        unit.update({"INT[grade-per-second]": UBASE.UBASE("INT", "grade-per-second", 1.570796326794900E-02, "rad/s", "a/T", "1.0")})
        unit.update({"INT[gon/sec]": UBASE.UBASE("INT", "grade-per-second", 1.570796326794900E-02, "rad/s", "a/T", "1.0")})
        unit.update({"INT[grade-per-minute]": UBASE.UBASE("INT", "grade-per-minute", 2.617993877991490E-04, "rad/s", "a/T", "1.0")})
        unit.update({"INT[gon/min]": UBASE.UBASE("INT", "grade-per-minute", 2.617993877991490E-04, "rad/s", "a/T", "1.0")})
        unit.update({"INT[grade-per-hour]": UBASE.UBASE("INT", "grade-per-hour", 4.363323129985820E-06, "rad/s", "a/T", "1.0")})
        unit.update({"INT[gon/hr]": UBASE.UBASE("INT", "grade-per-hour", 4.363323129985820E-06, "rad/s", "a/T", "1.0")})
        unit.update({"INT[grade-per-day]": UBASE.UBASE("INT", "grade-per-day", 1.818051304160760E-07, "rad/s", "a/T", "1.0")})
        unit.update({"INT[gon/day]": UBASE.UBASE("INT", "grade-per-day", 1.818051304160760E-07, "rad/s", "a/T", "1.0")})
        unit.update({"INT[grade-per-month]": UBASE.UBASE("INT", "grade-per-month", 6.060171013869200E-09, "rad/s", "a/T", "1.0")})
        unit.update({"INT[gon/mon]": UBASE.UBASE("INT", "grade-per-month", 6.060171013869200E-09, "rad/s", "a/T", "1.0")})
        unit.update({"INT[grade-per-year]": UBASE.UBASE("INT", "grade-per-year", 4.980962477152770E-10, "rad/s", "a/T", "1.0")})
        unit.update({"INT[gon/yr]": UBASE.UBASE("INT", "grade-per-year", 4.980962477152770E-10, "rad/s", "a/T", "1.0")})
        self._map.update({"angularVelocity": BaseSystem.BaseSystem("angularVelocity", unit, "1.0")})

        unit.clear()


        unit.update({"SI[radian-per-square-second]": UBASE.UBASE("SI", "radian-per-square-second", 1.000000000000000E+00, "rad/s2", "a/T2", "1.0")})
        unit.update({"SI[rad/sec2]": UBASE.UBASE("SI", "radian-per-square-second", 1.000000000000000E+00, "rad/s2", "a/T2", "1.0")})
        unit.update({"Scientific[degree-per-square-second]": UBASE.UBASE("Scientific", "degree-per-square-second", 1.745329251994330E-02, "rad/s2", "a/T2", "1.0")})
        unit.update({"Scientific[deg/sec2]": UBASE.UBASE("Scientific", "degree-per-square-second", 1.745329251994330E-02, "rad/s2", "a/T2", "1.0")})
        self._map.update({"angularAcceleration": BaseSystem.BaseSystem("angularAcceleration", unit, "1.0")})

        unit.clear()


 #EOF
