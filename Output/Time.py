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
# File Time.py
#
# Units for Time
#
# Class for Time units.
#
# Auto Generated: DO NOT Modify.
#
# Version: "1.0"
#
#################################################################################

from UnitConversion import UBASE
from UnitConversion import SingleSystem
from UnitConversion import BaseSystem

class Time(SingleSystem.SingleSystem):

    __instance = None

    @staticmethod 
    def Instance():
        """ Static access method. """
        if Time.__instance == None:
            Time.__instance = Time()
        return Time.__instance

    def __new__(self):
       if Time.__instance == None:
           Time.__instance = super(Time, self).__new__(self)

       return  Time.__instance
    def __init__(self):
        super().__init__()
        unit = dict()

        unit.update({"a.u.[au-of-time]": UBASE.UBASE("a.u.", "au-of-time", 2.418884326576740E-17, "s", "T", "1.0")})
        unit.update({"a.u.[aut]": UBASE.UBASE("a.u.", "au-of-time", 2.418884326576740E-17, "s", "T", "1.0")})
        unit.update({"Imperial[bell]": UBASE.UBASE("Imperial", "bell", 1.800000000000000E+03, "s", "T", "1.0")})
        unit.update({"INT[biennium]": UBASE.UBASE("INT", "biennium", 6.307200000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[blink]": UBASE.UBASE("Scientific", "blink", 8.640000000000000E-01, "s", "T", "1.0")})
        unit.update({"Scientific[ce]": UBASE.UBASE("Scientific", "ce", 8.640000000000000E+02, "s", "T", "1.0")})
        unit.update({"Time[century]": UBASE.UBASE("Time", "century", 3.153600000000000E+09, "s", "T", "1.0")})
        unit.update({"Scientific[chronon]": UBASE.UBASE("Scientific", "chronon", 1.000000000000000E-23, "s", "T", "1.0")})
        unit.update({"Scientific[cron]": UBASE.UBASE("Scientific", "cron", 3.155760000000000E+13, "s", "T", "1.0")})
        unit.update({"Scientific[megayear]": UBASE.UBASE("Scientific", "cron", 3.155760000000000E+13, "s", "T", "1.0")})
        unit.update({"Time[day]": UBASE.UBASE("Time", "day", 8.640000000000000E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(anomalistic)]": UBASE.UBASE("Scientific", "day(anomalistic)", 8.640227953456540E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(anom)]": UBASE.UBASE("Scientific", "day(anomalistic)", 8.640227953456540E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(Bessel)]": UBASE.UBASE("Scientific", "day(Bessel)", 8.640075452000000E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(Gaussian)]": UBASE.UBASE("Scientific", "day(Gaussian)", 8.640163179498970E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(sidereal)]": UBASE.UBASE("Scientific", "day(sidereal)", 8.616409050000000E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(solar-mean)]": UBASE.UBASE("Scientific", "day(solar-mean)", 8.640000000000000E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(stellar)]": UBASE.UBASE("Scientific", "day(stellar)", 8.616409890000000E+04, "s", "T", "1.0")})
        unit.update({"Scientific[day(tropical)]": UBASE.UBASE("Scientific", "day(tropical)", 8.639815195071870E+04, "s", "T", "1.0")})
        unit.update({"Time[decade]": UBASE.UBASE("Time", "decade", 3.153600000000000E+08, "s", "T", "1.0")})
        unit.update({"Time[eon]": UBASE.UBASE("Time", "eon", 3.155760000000000E+16, "s", "T", "1.0")})
        unit.update({"Time[gigan]": UBASE.UBASE("Time", "eon", 3.155760000000000E+16, "s", "T", "1.0")})
        unit.update({"UK[fortnight]": UBASE.UBASE("UK", "fortnight", 1.209600000000000E+06, "s", "T", "1.0")})
        unit.update({"INT[generation(anthropologist)]": UBASE.UBASE("INT", "generation(anthropologist)", 7.889400000000000E+08, "s", "T", "1.0")})
        unit.update({"INT[gen(anthro)]": UBASE.UBASE("INT", "generation(anthropologist)", 7.889400000000000E+08, "s", "T", "1.0")})
        unit.update({"INT[generation(genealogist)]": UBASE.UBASE("INT", "generation(genealogist)", 1.041400800000000E+09, "s", "T", "1.0")})
        unit.update({"INT[gen(gene)]": UBASE.UBASE("INT", "generation(genealogist)", 1.041400800000000E+09, "s", "T", "1.0")})
        unit.update({"Imperial[glass]": UBASE.UBASE("Imperial", "glass", 1.800000000000000E+03, "s", "T", "1.0")})
        unit.update({"Time[hour]": UBASE.UBASE("Time", "hour", 3.600000000000000E+03, "s", "T", "1.0")})
        unit.update({"Time[hr]": UBASE.UBASE("Time", "hour", 3.600000000000000E+03, "s", "T", "1.0")})
        unit.update({"@[hour(sidereal)]": UBASE.UBASE("@", "hour(sidereal)", 3.590170437500000E+03, "s", "T", "1.0")})
        unit.update({"Scientific[jiffy]": UBASE.UBASE("Scientific", "jiffy", 1.000000000000000E-02, "s", "T", "1.0")})
        unit.update({"Scientific[jordan's-elementary-time]": UBASE.UBASE("Scientific", "jordan's-elementary-time", 9.399637152312880E-24, "s", "T", "1.0")})
        unit.update({"Roman[lustrum]": UBASE.UBASE("Roman", "lustrum", 1.577880000000000E+08, "s", "T", "1.0")})
        unit.update({"INT[millenium]": UBASE.UBASE("INT", "millenium", 3.155760000000000E+10, "s", "T", "1.0")})
        unit.update({"INT[M]": UBASE.UBASE("INT", "millenium", 3.155760000000000E+10, "s", "T", "1.0")})
        unit.update({"Scientific[minim]": UBASE.UBASE("Scientific", "minim", 3.333333333333330E+00, "s", "T", "1.0")})
        unit.update({"Time[minute]": UBASE.UBASE("Time", "minute", 6.000000000000000E+01, "s", "T", "1.0")})
        unit.update({"Time[min]": UBASE.UBASE("Time", "minute", 6.000000000000000E+01, "s", "T", "1.0")})
        unit.update({"Time[month]": UBASE.UBASE("Time", "month", 2.592000000000000E+06, "s", "T", "1.0")})
        unit.update({"Time[mon]": UBASE.UBASE("Time", "month", 2.592000000000000E+06, "s", "T", "1.0")})
        unit.update({"Scientific[month(lunar)]": UBASE.UBASE("Scientific", "month(lunar)", 2.419200000000000E+06, "s", "T", "1.0")})
        unit.update({"Scientific[month(solar-mean)]": UBASE.UBASE("Scientific", "month(solar-mean)", 2.628000000000000E+06, "s", "T", "1.0")})
        unit.update({"INT[olympiad]": UBASE.UBASE("INT", "olympiad", 1.262304000000000E+08, "s", "T", "1.0")})
        unit.update({"Imperial[perm-inch(0oC)]": UBASE.UBASE("Imperial", "perm-inch(0oC)", 1.453224902507710E-12, "s", "T", "1.0")})
        unit.update({"Imperial[perm-inch(23oC)]": UBASE.UBASE("Imperial", "perm-inch(23oC)", 1.459384445480730E-12, "s", "T", "1.0")})
        unit.update({"INT[quadrennium]": UBASE.UBASE("INT", "quadrennium", 1.262304000000000E+08, "s", "T", "1.0")})
        unit.update({"INT[quarter]": UBASE.UBASE("INT", "quarter", 7.889400000000000E+06, "s", "T", "1.0")})
        unit.update({"@[saros]": UBASE.UBASE("@", "saros", 5.689705800000000E+08, "s", "T", "1.0")})
        unit.update({"SI[second]": UBASE.UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        unit.update({"SI[sec]": UBASE.UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        unit.update({"FPS[second]": UBASE.UBASE("FPS", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        unit.update({"FPS[sec]": UBASE.UBASE("FPS", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        unit.update({"Time[second]": UBASE.UBASE("Time", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        unit.update({"Time[sec]": UBASE.UBASE("Time", "second", 1.000000000000000E+00, "s", "T", "1.0")})
        unit.update({"@[second(sidereal)]": UBASE.UBASE("@", "second(sidereal)", 9.972695659722220E-01, "s", "T", "1.0")})
        unit.update({"INT[semester]": UBASE.UBASE("INT", "semester", 1.576800000000000E+07, "s", "T", "1.0")})
        unit.update({"INT[sem]": UBASE.UBASE("INT", "semester", 1.576800000000000E+07, "s", "T", "1.0")})
        unit.update({"Imperial[sennight]": UBASE.UBASE("Imperial", "sennight", 6.048000000000000E+05, "s", "T", "1.0")})
        unit.update({"US[shake]": UBASE.UBASE("US", "shake", 1.000000000000000E-08, "s", "T", "1.0")})
        unit.update({"Scientific[sigma]": UBASE.UBASE("Scientific", "sigma", 1.000000000000000E-06, "s", "T", "1.0")})
        unit.update({"Scientific[svedberg]": UBASE.UBASE("Scientific", "svedberg", 1.000000000000000E-13, "s", "T", "1.0")})
        unit.update({"Scientific[tempon]": UBASE.UBASE("Scientific", "tempon", 9.399637152312880E-24, "s", "T", "1.0")})
        unit.update({"INT[triennium]": UBASE.UBASE("INT", "triennium", 9.467280000000000E+07, "s", "T", "1.0")})
        unit.update({"INT[trimester]": UBASE.UBASE("INT", "trimester", 7.889400000000000E+06, "s", "T", "1.0")})
        unit.update({"Imperial[watch]": UBASE.UBASE("Imperial", "watch", 1.440000000000000E+04, "s", "T", "1.0")})
        unit.update({"Imperial[watch(dog)]": UBASE.UBASE("Imperial", "watch(dog)", 2.160000000000000E+04, "s", "T", "1.0")})
        unit.update({"Time[week]": UBASE.UBASE("Time", "week", 6.048000000000000E+05, "s", "T", "1.0")})
        unit.update({"Time[wk]": UBASE.UBASE("Time", "week", 6.048000000000000E+05, "s", "T", "1.0")})
        unit.update({"Scientific[wink]": UBASE.UBASE("Scientific", "wink", 3.333333333333330E-10, "s", "T", "1.0")})
        unit.update({"Arabic[year(Islamic)]": UBASE.UBASE("Arabic", "year(Islamic)", 3.058560000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[year(anomalistic)]": UBASE.UBASE("Scientific", "year(anomalistic)", 3.155843260000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[a(anom)]": UBASE.UBASE("Scientific", "year(anomalistic)", 3.155843260000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[year(Bessel)]": UBASE.UBASE("Scientific", "year(Bessel)", 3.155787559010000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[yr(Bessel)]": UBASE.UBASE("Scientific", "year(Bessel)", 3.155787559010000E+07, "s", "T", "1.0")})
        unit.update({"Time[year(calendar)]": UBASE.UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[yr(cal)]": UBASE.UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[civil-year]": UBASE.UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[year]": UBASE.UBASE("Time", "year", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[yr]": UBASE.UBASE("Time", "year", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[year(common)]": UBASE.UBASE("Scientific", "year(common)", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[yr]": UBASE.UBASE("Scientific", "year(common)", 3.153600000000000E+07, "s", "T", "1.0")})
        unit.update({"@[year(eclipse)]": UBASE.UBASE("@", "year(eclipse)", 2.994797500000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[year(Gaussian)]": UBASE.UBASE("Scientific", "year(Gaussian)", 3.155819600000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[yr(Gaussian)]": UBASE.UBASE("Scientific", "year(Gaussian)", 3.155819600000000E+07, "s", "T", "1.0")})
        unit.update({"Time[year(Gregorian)]": UBASE.UBASE("Time", "year(Gregorian)", 3.155760000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[yr(Gregorian)]": UBASE.UBASE("Time", "year(Gregorian)", 3.155760000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[year(Julian)]": UBASE.UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[yr(Julian)]": UBASE.UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0")})
        unit.update({"Time[year(leap)]": UBASE.UBASE("Time", "year(leap)", 1.119528000000000E+10, "s", "T", "1.0")})
        unit.update({"Time[yr(leap)]": UBASE.UBASE("Time", "year(leap)", 1.119528000000000E+10, "s", "T", "1.0")})
        unit.update({"Scientific[year(sidereal)]": UBASE.UBASE("Scientific", "year(sidereal)", 3.155815000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[yr(sidereal)]": UBASE.UBASE("Scientific", "year(sidereal)", 3.155815000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[year(solar-mean)]": UBASE.UBASE("Scientific", "year(solar-mean)", 3.155760000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[yr(solar-mean)]": UBASE.UBASE("Scientific", "year(solar-mean)", 3.155760000000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[year(tropical)]": UBASE.UBASE("Scientific", "year(tropical)", 3.155692500000000E+07, "s", "T", "1.0")})
        unit.update({"Scientific[yr(tropical)]": UBASE.UBASE("Scientific", "year(tropical)", 3.155692500000000E+07, "s", "T", "1.0")})
        unit.update({"SI[yottasecond]": UBASE.UBASE("SI", "yottasecond", 1.000000000000000E+24, "s", "T", "1.0")})
        unit.update({"SI[Ys]": UBASE.UBASE("SI", "yottasecond", 1.000000000000000E+24, "s", "T", "1.0")})
        unit.update({"SI[zettasecond]": UBASE.UBASE("SI", "zettasecond", 1.000000000000000E+21, "s", "T", "1.0")})
        unit.update({"SI[Zs]": UBASE.UBASE("SI", "zettasecond", 1.000000000000000E+21, "s", "T", "1.0")})
        unit.update({"SI[exasecond]": UBASE.UBASE("SI", "exasecond", 1.000000000000000E+18, "s", "T", "1.0")})
        unit.update({"SI[Es]": UBASE.UBASE("SI", "exasecond", 1.000000000000000E+18, "s", "T", "1.0")})
        unit.update({"SI[petasecond]": UBASE.UBASE("SI", "petasecond", 1.000000000000000E+15, "s", "T", "1.0")})
        unit.update({"SI[Ps]": UBASE.UBASE("SI", "petasecond", 1.000000000000000E+15, "s", "T", "1.0")})
        unit.update({"SI[terasecond]": UBASE.UBASE("SI", "terasecond", 1.000000000000000E+12, "s", "T", "1.0")})
        unit.update({"SI[Ts]": UBASE.UBASE("SI", "terasecond", 1.000000000000000E+12, "s", "T", "1.0")})
        unit.update({"SI[gigasecond]": UBASE.UBASE("SI", "gigasecond", 1.000000000000000E+09, "s", "T", "1.0")})
        unit.update({"SI[Gs]": UBASE.UBASE("SI", "gigasecond", 1.000000000000000E+09, "s", "T", "1.0")})
        unit.update({"SI[megasecond]": UBASE.UBASE("SI", "megasecond", 1.000000000000000E+06, "s", "T", "1.0")})
        unit.update({"SI[Ms]": UBASE.UBASE("SI", "megasecond", 1.000000000000000E+06, "s", "T", "1.0")})
        unit.update({"SI[kilosecond]": UBASE.UBASE("SI", "kilosecond", 1.000000000000000E+03, "s", "T", "1.0")})
        unit.update({"SI[ks]": UBASE.UBASE("SI", "kilosecond", 1.000000000000000E+03, "s", "T", "1.0")})
        unit.update({"SI[hectosecond]": UBASE.UBASE("SI", "hectosecond", 1.000000000000000E+02, "s", "T", "1.0")})
        unit.update({"SI[hs]": UBASE.UBASE("SI", "hectosecond", 1.000000000000000E+02, "s", "T", "1.0")})
        unit.update({"SI[decasecond]": UBASE.UBASE("SI", "decasecond", 1.000000000000000E+01, "s", "T", "1.0")})
        unit.update({"SI[das]": UBASE.UBASE("SI", "decasecond", 1.000000000000000E+01, "s", "T", "1.0")})
        unit.update({"SI[decisecond]": UBASE.UBASE("SI", "decisecond", 1.000000000000000E-01, "s", "T", "1.0")})
        unit.update({"SI[ds]": UBASE.UBASE("SI", "decisecond", 1.000000000000000E-01, "s", "T", "1.0")})
        unit.update({"SI[centisecond]": UBASE.UBASE("SI", "centisecond", 1.000000000000000E-02, "s", "T", "1.0")})
        unit.update({"SI[cs]": UBASE.UBASE("SI", "centisecond", 1.000000000000000E-02, "s", "T", "1.0")})
        unit.update({"SI[millisecond]": UBASE.UBASE("SI", "millisecond", 1.000000000000000E-03, "s", "T", "1.0")})
        unit.update({"SI[ms]": UBASE.UBASE("SI", "millisecond", 1.000000000000000E-03, "s", "T", "1.0")})
        unit.update({"SI[microsecond]": UBASE.UBASE("SI", "microsecond", 1.000000000000000E-06, "s", "T", "1.0")})
        unit.update({"SI[us]": UBASE.UBASE("SI", "microsecond", 1.000000000000000E-06, "s", "T", "1.0")})
        unit.update({"SI[nanosecond]": UBASE.UBASE("SI", "nanosecond", 1.000000000000000E-09, "s", "T", "1.0")})
        unit.update({"SI[ns]": UBASE.UBASE("SI", "nanosecond", 1.000000000000000E-09, "s", "T", "1.0")})
        unit.update({"SI[picosecond]": UBASE.UBASE("SI", "picosecond", 1.000000000000000E-12, "s", "T", "1.0")})
        unit.update({"SI[ps]": UBASE.UBASE("SI", "picosecond", 1.000000000000000E-12, "s", "T", "1.0")})
        unit.update({"SI[femtosecond]": UBASE.UBASE("SI", "femtosecond", 1.000000000000000E-15, "s", "T", "1.0")})
        unit.update({"SI[fs]": UBASE.UBASE("SI", "femtosecond", 1.000000000000000E-15, "s", "T", "1.0")})
        unit.update({"SI[attosecond]": UBASE.UBASE("SI", "attosecond", 1.000000000000000E-18, "s", "T", "1.0")})
        unit.update({"SI[as]": UBASE.UBASE("SI", "attosecond", 1.000000000000000E-18, "s", "T", "1.0")})
        unit.update({"SI[zeptosecond]": UBASE.UBASE("SI", "zeptosecond", 1.000000000000000E-21, "s", "T", "1.0")})
        unit.update({"SI[zs]": UBASE.UBASE("SI", "zeptosecond", 1.000000000000000E-21, "s", "T", "1.0")})
        unit.update({"SI[yoctosecond]": UBASE.UBASE("SI", "yoctosecond", 1.000000000000000E-24, "s", "T", "1.0")})
        unit.update({"SI[ys]": UBASE.UBASE("SI", "yoctosecond", 1.000000000000000E-24, "s", "T", "1.0")})
        self._map.update({"time": BaseSystem.BaseSystem("time", unit, "1.0")})

        unit.clear()


 #EOF
