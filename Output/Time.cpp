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
// File Time.cpp
//
// Units for Time
//
// Class for Time units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Time.hpp"

Time& Time::Instance(void)
{
    static Time singleton;
    return singleton;
}

Time::Time(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["a.u.[au-of-time]"] = UBASE("a.u.", "au-of-time", 2.418884326576740E-17, "s", "T", "1.0");
   unit["a.u.[aut]"] = UBASE("a.u.", "au-of-time", 2.418884326576740E-17, "s", "T", "1.0");
   unit["Imperial[bell]"] = UBASE("Imperial", "bell", 1.800000000000000E+03, "s", "T", "1.0");
   unit["INT[biennium]"] = UBASE("INT", "biennium", 6.307200000000000E+07, "s", "T", "1.0");
   unit["Scientific[blink]"] = UBASE("Scientific", "blink", 8.640000000000000E-01, "s", "T", "1.0");
   unit["Scientific[ce]"] = UBASE("Scientific", "ce", 8.640000000000000E+02, "s", "T", "1.0");
   unit["Time[century]"] = UBASE("Time", "century", 3.153600000000000E+09, "s", "T", "1.0");
   unit["Scientific[chronon]"] = UBASE("Scientific", "chronon", 1.000000000000000E-23, "s", "T", "1.0");
   unit["Scientific[cron]"] = UBASE("Scientific", "cron", 3.155760000000000E+13, "s", "T", "1.0");
   unit["Scientific[megayear]"] = UBASE("Scientific", "cron", 3.155760000000000E+13, "s", "T", "1.0");
   unit["Time[day]"] = UBASE("Time", "day", 8.640000000000000E+04, "s", "T", "1.0");
   unit["Scientific[day(anomalistic)]"] = UBASE("Scientific", "day(anomalistic)", 8.640227953456540E+04, "s", "T", "1.0");
   unit["Scientific[day(anom)]"] = UBASE("Scientific", "day(anomalistic)", 8.640227953456540E+04, "s", "T", "1.0");
   unit["Scientific[day(Bessel)]"] = UBASE("Scientific", "day(Bessel)", 8.640075452000000E+04, "s", "T", "1.0");
   unit["Scientific[day(Gaussian)]"] = UBASE("Scientific", "day(Gaussian)", 8.640163179498970E+04, "s", "T", "1.0");
   unit["Scientific[day(sidereal)]"] = UBASE("Scientific", "day(sidereal)", 8.616409050000000E+04, "s", "T", "1.0");
   unit["Scientific[day(solar-mean)]"] = UBASE("Scientific", "day(solar-mean)", 8.640000000000000E+04, "s", "T", "1.0");
   unit["Scientific[day(stellar)]"] = UBASE("Scientific", "day(stellar)", 8.616409890000000E+04, "s", "T", "1.0");
   unit["Scientific[day(tropical)]"] = UBASE("Scientific", "day(tropical)", 8.639815195071870E+04, "s", "T", "1.0");
   unit["Time[decade]"] = UBASE("Time", "decade", 3.153600000000000E+08, "s", "T", "1.0");
   unit["Time[eon]"] = UBASE("Time", "eon", 3.155760000000000E+16, "s", "T", "1.0");
   unit["Time[gigan]"] = UBASE("Time", "eon", 3.155760000000000E+16, "s", "T", "1.0");
   unit["UK[fortnight]"] = UBASE("UK", "fortnight", 1.209600000000000E+06, "s", "T", "1.0");
   unit["INT[generation(anthropologist)]"] = UBASE("INT", "generation(anthropologist)", 7.889400000000000E+08, "s", "T", "1.0");
   unit["INT[gen(anthro)]"] = UBASE("INT", "generation(anthropologist)", 7.889400000000000E+08, "s", "T", "1.0");
   unit["INT[generation(genealogist)]"] = UBASE("INT", "generation(genealogist)", 1.041400800000000E+09, "s", "T", "1.0");
   unit["INT[gen(gene)]"] = UBASE("INT", "generation(genealogist)", 1.041400800000000E+09, "s", "T", "1.0");
   unit["Imperial[glass]"] = UBASE("Imperial", "glass", 1.800000000000000E+03, "s", "T", "1.0");
   unit["Time[hour]"] = UBASE("Time", "hour", 3.600000000000000E+03, "s", "T", "1.0");
   unit["Time[hr]"] = UBASE("Time", "hour", 3.600000000000000E+03, "s", "T", "1.0");
   unit["@[hour(sidereal)]"] = UBASE("@", "hour(sidereal)", 3.590170437500000E+03, "s", "T", "1.0");
   unit["Scientific[jiffy]"] = UBASE("Scientific", "jiffy", 1.000000000000000E-02, "s", "T", "1.0");
   unit["Scientific[jordan's-elementary-time]"] = UBASE("Scientific", "jordan's-elementary-time", 9.399637152312880E-24, "s", "T", "1.0");
   unit["Roman[lustrum]"] = UBASE("Roman", "lustrum", 1.577880000000000E+08, "s", "T", "1.0");
   unit["INT[millenium]"] = UBASE("INT", "millenium", 3.155760000000000E+10, "s", "T", "1.0");
   unit["INT[M]"] = UBASE("INT", "millenium", 3.155760000000000E+10, "s", "T", "1.0");
   unit["Scientific[minim]"] = UBASE("Scientific", "minim", 3.333333333333330E+00, "s", "T", "1.0");
   unit["Time[minute]"] = UBASE("Time", "minute", 6.000000000000000E+01, "s", "T", "1.0");
   unit["Time[min]"] = UBASE("Time", "minute", 6.000000000000000E+01, "s", "T", "1.0");
   unit["Time[month]"] = UBASE("Time", "month", 2.592000000000000E+06, "s", "T", "1.0");
   unit["Time[mon]"] = UBASE("Time", "month", 2.592000000000000E+06, "s", "T", "1.0");
   unit["Scientific[month(lunar)]"] = UBASE("Scientific", "month(lunar)", 2.419200000000000E+06, "s", "T", "1.0");
   unit["Scientific[month(solar-mean)]"] = UBASE("Scientific", "month(solar-mean)", 2.628000000000000E+06, "s", "T", "1.0");
   unit["INT[olympiad]"] = UBASE("INT", "olympiad", 1.262304000000000E+08, "s", "T", "1.0");
   unit["Imperial[perm-inch(0oC)]"] = UBASE("Imperial", "perm-inch(0oC)", 1.453224902507710E-12, "s", "T", "1.0");
   unit["Imperial[perm-inch(23oC)]"] = UBASE("Imperial", "perm-inch(23oC)", 1.459384445480730E-12, "s", "T", "1.0");
   unit["INT[quadrennium]"] = UBASE("INT", "quadrennium", 1.262304000000000E+08, "s", "T", "1.0");
   unit["INT[quarter]"] = UBASE("INT", "quarter", 7.889400000000000E+06, "s", "T", "1.0");
   unit["@[saros]"] = UBASE("@", "saros", 5.689705800000000E+08, "s", "T", "1.0");
   unit["SI[second]"] = UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0");
   unit["SI[sec]"] = UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0");
   unit["FPS[second]"] = UBASE("FPS", "second", 1.000000000000000E+00, "s", "T", "1.0");
   unit["FPS[sec]"] = UBASE("FPS", "second", 1.000000000000000E+00, "s", "T", "1.0");
   unit["Time[second]"] = UBASE("Time", "second", 1.000000000000000E+00, "s", "T", "1.0");
   unit["Time[sec]"] = UBASE("Time", "second", 1.000000000000000E+00, "s", "T", "1.0");
   unit["@[second(sidereal)]"] = UBASE("@", "second(sidereal)", 9.972695659722220E-01, "s", "T", "1.0");
   unit["INT[semester]"] = UBASE("INT", "semester", 1.576800000000000E+07, "s", "T", "1.0");
   unit["INT[sem]"] = UBASE("INT", "semester", 1.576800000000000E+07, "s", "T", "1.0");
   unit["Imperial[sennight]"] = UBASE("Imperial", "sennight", 6.048000000000000E+05, "s", "T", "1.0");
   unit["US[shake]"] = UBASE("US", "shake", 1.000000000000000E-08, "s", "T", "1.0");
   unit["Scientific[sigma]"] = UBASE("Scientific", "sigma", 1.000000000000000E-06, "s", "T", "1.0");
   unit["Scientific[svedberg]"] = UBASE("Scientific", "svedberg", 1.000000000000000E-13, "s", "T", "1.0");
   unit["Scientific[tempon]"] = UBASE("Scientific", "tempon", 9.399637152312880E-24, "s", "T", "1.0");
   unit["INT[triennium]"] = UBASE("INT", "triennium", 9.467280000000000E+07, "s", "T", "1.0");
   unit["INT[trimester]"] = UBASE("INT", "trimester", 7.889400000000000E+06, "s", "T", "1.0");
   unit["Imperial[watch]"] = UBASE("Imperial", "watch", 1.440000000000000E+04, "s", "T", "1.0");
   unit["Imperial[watch(dog)]"] = UBASE("Imperial", "watch(dog)", 2.160000000000000E+04, "s", "T", "1.0");
   unit["Time[week]"] = UBASE("Time", "week", 6.048000000000000E+05, "s", "T", "1.0");
   unit["Time[wk]"] = UBASE("Time", "week", 6.048000000000000E+05, "s", "T", "1.0");
   unit["Scientific[wink]"] = UBASE("Scientific", "wink", 3.333333333333330E-10, "s", "T", "1.0");
   unit["Arabic[year(Islamic)]"] = UBASE("Arabic", "year(Islamic)", 3.058560000000000E+07, "s", "T", "1.0");
   unit["Scientific[year(anomalistic)]"] = UBASE("Scientific", "year(anomalistic)", 3.155843260000000E+07, "s", "T", "1.0");
   unit["Scientific[a(anom)]"] = UBASE("Scientific", "year(anomalistic)", 3.155843260000000E+07, "s", "T", "1.0");
   unit["Scientific[year(Bessel)]"] = UBASE("Scientific", "year(Bessel)", 3.155787559010000E+07, "s", "T", "1.0");
   unit["Scientific[yr(Bessel)]"] = UBASE("Scientific", "year(Bessel)", 3.155787559010000E+07, "s", "T", "1.0");
   unit["Time[year(calendar)]"] = UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0");
   unit["Time[yr(cal)]"] = UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0");
   unit["Time[civil-year]"] = UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0");
   unit["Time[year]"] = UBASE("Time", "year", 3.153600000000000E+07, "s", "T", "1.0");
   unit["Time[yr]"] = UBASE("Time", "year", 3.153600000000000E+07, "s", "T", "1.0");
   unit["Scientific[year(common)]"] = UBASE("Scientific", "year(common)", 3.153600000000000E+07, "s", "T", "1.0");
   unit["Scientific[yr]"] = UBASE("Scientific", "year(common)", 3.153600000000000E+07, "s", "T", "1.0");
   unit["@[year(eclipse)]"] = UBASE("@", "year(eclipse)", 2.994797500000000E+07, "s", "T", "1.0");
   unit["Scientific[year(Gaussian)]"] = UBASE("Scientific", "year(Gaussian)", 3.155819600000000E+07, "s", "T", "1.0");
   unit["Scientific[yr(Gaussian)]"] = UBASE("Scientific", "year(Gaussian)", 3.155819600000000E+07, "s", "T", "1.0");
   unit["Time[year(Gregorian)]"] = UBASE("Time", "year(Gregorian)", 3.155760000000000E+07, "s", "T", "1.0");
   unit["Time[yr(Gregorian)]"] = UBASE("Time", "year(Gregorian)", 3.155760000000000E+07, "s", "T", "1.0");
   unit["Time[year(Julian)]"] = UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0");
   unit["Time[yr(Julian)]"] = UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0");
   unit["Time[year(leap)]"] = UBASE("Time", "year(leap)", 1.119528000000000E+10, "s", "T", "1.0");
   unit["Time[yr(leap)]"] = UBASE("Time", "year(leap)", 1.119528000000000E+10, "s", "T", "1.0");
   unit["Scientific[year(sidereal)]"] = UBASE("Scientific", "year(sidereal)", 3.155815000000000E+07, "s", "T", "1.0");
   unit["Scientific[yr(sidereal)]"] = UBASE("Scientific", "year(sidereal)", 3.155815000000000E+07, "s", "T", "1.0");
   unit["Scientific[year(solar-mean)]"] = UBASE("Scientific", "year(solar-mean)", 3.155760000000000E+07, "s", "T", "1.0");
   unit["Scientific[yr(solar-mean)]"] = UBASE("Scientific", "year(solar-mean)", 3.155760000000000E+07, "s", "T", "1.0");
   unit["Scientific[year(tropical)]"] = UBASE("Scientific", "year(tropical)", 3.155692500000000E+07, "s", "T", "1.0");
   unit["Scientific[yr(tropical)]"] = UBASE("Scientific", "year(tropical)", 3.155692500000000E+07, "s", "T", "1.0");
   unit["SI[yottasecond]"] = UBASE("SI", "yottasecond", 1.000000000000000E+24, "s", "T", "1.0");
   unit["SI[Ys]"] = UBASE("SI", "yottasecond", 1.000000000000000E+24, "s", "T", "1.0");
   unit["SI[zettasecond]"] = UBASE("SI", "zettasecond", 1.000000000000000E+21, "s", "T", "1.0");
   unit["SI[Zs]"] = UBASE("SI", "zettasecond", 1.000000000000000E+21, "s", "T", "1.0");
   unit["SI[exasecond]"] = UBASE("SI", "exasecond", 1.000000000000000E+18, "s", "T", "1.0");
   unit["SI[Es]"] = UBASE("SI", "exasecond", 1.000000000000000E+18, "s", "T", "1.0");
   unit["SI[petasecond]"] = UBASE("SI", "petasecond", 1.000000000000000E+15, "s", "T", "1.0");
   unit["SI[Ps]"] = UBASE("SI", "petasecond", 1.000000000000000E+15, "s", "T", "1.0");
   unit["SI[terasecond]"] = UBASE("SI", "terasecond", 1.000000000000000E+12, "s", "T", "1.0");
   unit["SI[Ts]"] = UBASE("SI", "terasecond", 1.000000000000000E+12, "s", "T", "1.0");
   unit["SI[gigasecond]"] = UBASE("SI", "gigasecond", 1.000000000000000E+09, "s", "T", "1.0");
   unit["SI[Gs]"] = UBASE("SI", "gigasecond", 1.000000000000000E+09, "s", "T", "1.0");
   unit["SI[megasecond]"] = UBASE("SI", "megasecond", 1.000000000000000E+06, "s", "T", "1.0");
   unit["SI[Ms]"] = UBASE("SI", "megasecond", 1.000000000000000E+06, "s", "T", "1.0");
   unit["SI[kilosecond]"] = UBASE("SI", "kilosecond", 1.000000000000000E+03, "s", "T", "1.0");
   unit["SI[ks]"] = UBASE("SI", "kilosecond", 1.000000000000000E+03, "s", "T", "1.0");
   unit["SI[hectosecond]"] = UBASE("SI", "hectosecond", 1.000000000000000E+02, "s", "T", "1.0");
   unit["SI[hs]"] = UBASE("SI", "hectosecond", 1.000000000000000E+02, "s", "T", "1.0");
   unit["SI[decasecond]"] = UBASE("SI", "decasecond", 1.000000000000000E+01, "s", "T", "1.0");
   unit["SI[das]"] = UBASE("SI", "decasecond", 1.000000000000000E+01, "s", "T", "1.0");
   unit["SI[decisecond]"] = UBASE("SI", "decisecond", 1.000000000000000E-01, "s", "T", "1.0");
   unit["SI[ds]"] = UBASE("SI", "decisecond", 1.000000000000000E-01, "s", "T", "1.0");
   unit["SI[centisecond]"] = UBASE("SI", "centisecond", 1.000000000000000E-02, "s", "T", "1.0");
   unit["SI[cs]"] = UBASE("SI", "centisecond", 1.000000000000000E-02, "s", "T", "1.0");
   unit["SI[millisecond]"] = UBASE("SI", "millisecond", 1.000000000000000E-03, "s", "T", "1.0");
   unit["SI[ms]"] = UBASE("SI", "millisecond", 1.000000000000000E-03, "s", "T", "1.0");
   unit["SI[microsecond]"] = UBASE("SI", "microsecond", 1.000000000000000E-06, "s", "T", "1.0");
   unit["SI[us]"] = UBASE("SI", "microsecond", 1.000000000000000E-06, "s", "T", "1.0");
   unit["SI[nanosecond]"] = UBASE("SI", "nanosecond", 1.000000000000000E-09, "s", "T", "1.0");
   unit["SI[ns]"] = UBASE("SI", "nanosecond", 1.000000000000000E-09, "s", "T", "1.0");
   unit["SI[picosecond]"] = UBASE("SI", "picosecond", 1.000000000000000E-12, "s", "T", "1.0");
   unit["SI[ps]"] = UBASE("SI", "picosecond", 1.000000000000000E-12, "s", "T", "1.0");
   unit["SI[femtosecond]"] = UBASE("SI", "femtosecond", 1.000000000000000E-15, "s", "T", "1.0");
   unit["SI[fs]"] = UBASE("SI", "femtosecond", 1.000000000000000E-15, "s", "T", "1.0");
   unit["SI[attosecond]"] = UBASE("SI", "attosecond", 1.000000000000000E-18, "s", "T", "1.0");
   unit["SI[as]"] = UBASE("SI", "attosecond", 1.000000000000000E-18, "s", "T", "1.0");
   unit["SI[zeptosecond]"] = UBASE("SI", "zeptosecond", 1.000000000000000E-21, "s", "T", "1.0");
   unit["SI[zs]"] = UBASE("SI", "zeptosecond", 1.000000000000000E-21, "s", "T", "1.0");
   unit["SI[yoctosecond]"] = UBASE("SI", "yoctosecond", 1.000000000000000E-24, "s", "T", "1.0");
   unit["SI[ys]"] = UBASE("SI", "yoctosecond", 1.000000000000000E-24, "s", "T", "1.0");
   _map["time"] = BaseSystem("time", unit, "1.0");

   unit.clear();


}

// EOF
