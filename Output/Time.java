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
// File Time.java
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

package Generated;

import java.util.*;
import UnitConversion.*;

public class Time extends SingleSystem
{
   private static Time singleton_ = new Time();

   public static Time Instance()
   {
      return singleton_;
   }

   private Time()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("a.u.[au-of-time]",   new UBASE("a.u.", "au-of-time", 2.418884326576740E-17, "s", "T", "1.0"));
      unit.put("a.u.[aut]",   new UBASE("a.u.", "au-of-time", 2.418884326576740E-17, "s", "T", "1.0"));
      unit.put("Imperial[bell]",   new UBASE("Imperial", "bell", 1.800000000000000E+03, "s", "T", "1.0"));
      unit.put("INT[biennium]",   new UBASE("INT", "biennium", 6.307200000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[blink]",   new UBASE("Scientific", "blink", 8.640000000000000E-01, "s", "T", "1.0"));
      unit.put("Scientific[ce]",   new UBASE("Scientific", "ce", 8.640000000000000E+02, "s", "T", "1.0"));
      unit.put("Time[century]",   new UBASE("Time", "century", 3.153600000000000E+09, "s", "T", "1.0"));
      unit.put("Scientific[chronon]",   new UBASE("Scientific", "chronon", 1.000000000000000E-23, "s", "T", "1.0"));
      unit.put("Scientific[cron]",   new UBASE("Scientific", "cron", 3.155760000000000E+13, "s", "T", "1.0"));
      unit.put("Scientific[megayear]",   new UBASE("Scientific", "cron", 3.155760000000000E+13, "s", "T", "1.0"));
      unit.put("Time[day]",   new UBASE("Time", "day", 8.640000000000000E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(anomalistic)]",   new UBASE("Scientific", "day(anomalistic)", 8.640227953456540E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(anom)]",   new UBASE("Scientific", "day(anomalistic)", 8.640227953456540E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(Bessel)]",   new UBASE("Scientific", "day(Bessel)", 8.640075452000000E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(Gaussian)]",   new UBASE("Scientific", "day(Gaussian)", 8.640163179498970E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(sidereal)]",   new UBASE("Scientific", "day(sidereal)", 8.616409050000000E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(solar-mean)]",   new UBASE("Scientific", "day(solar-mean)", 8.640000000000000E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(stellar)]",   new UBASE("Scientific", "day(stellar)", 8.616409890000000E+04, "s", "T", "1.0"));
      unit.put("Scientific[day(tropical)]",   new UBASE("Scientific", "day(tropical)", 8.639815195071870E+04, "s", "T", "1.0"));
      unit.put("Time[decade]",   new UBASE("Time", "decade", 3.153600000000000E+08, "s", "T", "1.0"));
      unit.put("Time[eon]",   new UBASE("Time", "eon", 3.155760000000000E+16, "s", "T", "1.0"));
      unit.put("Time[gigan]",   new UBASE("Time", "eon", 3.155760000000000E+16, "s", "T", "1.0"));
      unit.put("UK[fortnight]",   new UBASE("UK", "fortnight", 1.209600000000000E+06, "s", "T", "1.0"));
      unit.put("INT[generation(anthropologist)]",   new UBASE("INT", "generation(anthropologist)", 7.889400000000000E+08, "s", "T", "1.0"));
      unit.put("INT[gen(anthro)]",   new UBASE("INT", "generation(anthropologist)", 7.889400000000000E+08, "s", "T", "1.0"));
      unit.put("INT[generation(genealogist)]",   new UBASE("INT", "generation(genealogist)", 1.041400800000000E+09, "s", "T", "1.0"));
      unit.put("INT[gen(gene)]",   new UBASE("INT", "generation(genealogist)", 1.041400800000000E+09, "s", "T", "1.0"));
      unit.put("Imperial[glass]",   new UBASE("Imperial", "glass", 1.800000000000000E+03, "s", "T", "1.0"));
      unit.put("Time[hour]",   new UBASE("Time", "hour", 3.600000000000000E+03, "s", "T", "1.0"));
      unit.put("Time[hr]",   new UBASE("Time", "hour", 3.600000000000000E+03, "s", "T", "1.0"));
      unit.put("@[hour(sidereal)]",   new UBASE("@", "hour(sidereal)", 3.590170437500000E+03, "s", "T", "1.0"));
      unit.put("Scientific[jiffy]",   new UBASE("Scientific", "jiffy", 1.000000000000000E-02, "s", "T", "1.0"));
      unit.put("Scientific[jordan's-elementary-time]",   new UBASE("Scientific", "jordan's-elementary-time", 9.399637152312880E-24, "s", "T", "1.0"));
      unit.put("Roman[lustrum]",   new UBASE("Roman", "lustrum", 1.577880000000000E+08, "s", "T", "1.0"));
      unit.put("INT[millenium]",   new UBASE("INT", "millenium", 3.155760000000000E+10, "s", "T", "1.0"));
      unit.put("INT[M]",   new UBASE("INT", "millenium", 3.155760000000000E+10, "s", "T", "1.0"));
      unit.put("Scientific[minim]",   new UBASE("Scientific", "minim", 3.333333333333330E+00, "s", "T", "1.0"));
      unit.put("Time[minute]",   new UBASE("Time", "minute", 6.000000000000000E+01, "s", "T", "1.0"));
      unit.put("Time[min]",   new UBASE("Time", "minute", 6.000000000000000E+01, "s", "T", "1.0"));
      unit.put("Time[month]",   new UBASE("Time", "month", 2.592000000000000E+06, "s", "T", "1.0"));
      unit.put("Time[mon]",   new UBASE("Time", "month", 2.592000000000000E+06, "s", "T", "1.0"));
      unit.put("Scientific[month(lunar)]",   new UBASE("Scientific", "month(lunar)", 2.419200000000000E+06, "s", "T", "1.0"));
      unit.put("Scientific[month(solar-mean)]",   new UBASE("Scientific", "month(solar-mean)", 2.628000000000000E+06, "s", "T", "1.0"));
      unit.put("INT[olympiad]",   new UBASE("INT", "olympiad", 1.262304000000000E+08, "s", "T", "1.0"));
      unit.put("Imperial[perm-inch(0oC)]",   new UBASE("Imperial", "perm-inch(0oC)", 1.453224902507710E-12, "s", "T", "1.0"));
      unit.put("Imperial[perm-inch(23oC)]",   new UBASE("Imperial", "perm-inch(23oC)", 1.459384445480730E-12, "s", "T", "1.0"));
      unit.put("INT[quadrennium]",   new UBASE("INT", "quadrennium", 1.262304000000000E+08, "s", "T", "1.0"));
      unit.put("INT[quarter]",   new UBASE("INT", "quarter", 7.889400000000000E+06, "s", "T", "1.0"));
      unit.put("@[saros]",   new UBASE("@", "saros", 5.689705800000000E+08, "s", "T", "1.0"));
      unit.put("SI[second]",   new UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0"));
      unit.put("SI[sec]",   new UBASE("SI", "second", 1.000000000000000E+00, "s", "T", "1.0"));
      unit.put("FPS[second]",   new UBASE("FPS", "second", 1.000000000000000E+00, "s", "T", "1.0"));
      unit.put("FPS[sec]",   new UBASE("FPS", "second", 1.000000000000000E+00, "s", "T", "1.0"));
      unit.put("Time[second]",   new UBASE("Time", "second", 1.000000000000000E+00, "s", "T", "1.0"));
      unit.put("Time[sec]",   new UBASE("Time", "second", 1.000000000000000E+00, "s", "T", "1.0"));
      unit.put("@[second(sidereal)]",   new UBASE("@", "second(sidereal)", 9.972695659722220E-01, "s", "T", "1.0"));
      unit.put("INT[semester]",   new UBASE("INT", "semester", 1.576800000000000E+07, "s", "T", "1.0"));
      unit.put("INT[sem]",   new UBASE("INT", "semester", 1.576800000000000E+07, "s", "T", "1.0"));
      unit.put("Imperial[sennight]",   new UBASE("Imperial", "sennight", 6.048000000000000E+05, "s", "T", "1.0"));
      unit.put("US[shake]",   new UBASE("US", "shake", 1.000000000000000E-08, "s", "T", "1.0"));
      unit.put("Scientific[sigma]",   new UBASE("Scientific", "sigma", 1.000000000000000E-06, "s", "T", "1.0"));
      unit.put("Scientific[svedberg]",   new UBASE("Scientific", "svedberg", 1.000000000000000E-13, "s", "T", "1.0"));
      unit.put("Scientific[tempon]",   new UBASE("Scientific", "tempon", 9.399637152312880E-24, "s", "T", "1.0"));
      unit.put("INT[triennium]",   new UBASE("INT", "triennium", 9.467280000000000E+07, "s", "T", "1.0"));
      unit.put("INT[trimester]",   new UBASE("INT", "trimester", 7.889400000000000E+06, "s", "T", "1.0"));
      unit.put("Imperial[watch]",   new UBASE("Imperial", "watch", 1.440000000000000E+04, "s", "T", "1.0"));
      unit.put("Imperial[watch(dog)]",   new UBASE("Imperial", "watch(dog)", 2.160000000000000E+04, "s", "T", "1.0"));
      unit.put("Time[week]",   new UBASE("Time", "week", 6.048000000000000E+05, "s", "T", "1.0"));
      unit.put("Time[wk]",   new UBASE("Time", "week", 6.048000000000000E+05, "s", "T", "1.0"));
      unit.put("Scientific[wink]",   new UBASE("Scientific", "wink", 3.333333333333330E-10, "s", "T", "1.0"));
      unit.put("Arabic[year(Islamic)]",   new UBASE("Arabic", "year(Islamic)", 3.058560000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[year(anomalistic)]",   new UBASE("Scientific", "year(anomalistic)", 3.155843260000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[a(anom)]",   new UBASE("Scientific", "year(anomalistic)", 3.155843260000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[year(Bessel)]",   new UBASE("Scientific", "year(Bessel)", 3.155787559010000E+07, "s", "T", "1.0"));
      unit.put("Scientific[yr(Bessel)]",   new UBASE("Scientific", "year(Bessel)", 3.155787559010000E+07, "s", "T", "1.0"));
      unit.put("Time[year(calendar)]",   new UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("Time[yr(cal)]",   new UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("Time[civil-year]",   new UBASE("Time", "year(calendar)", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("Time[year]",   new UBASE("Time", "year", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("Time[yr]",   new UBASE("Time", "year", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[year(common)]",   new UBASE("Scientific", "year(common)", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[yr]",   new UBASE("Scientific", "year(common)", 3.153600000000000E+07, "s", "T", "1.0"));
      unit.put("@[year(eclipse)]",   new UBASE("@", "year(eclipse)", 2.994797500000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[year(Gaussian)]",   new UBASE("Scientific", "year(Gaussian)", 3.155819600000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[yr(Gaussian)]",   new UBASE("Scientific", "year(Gaussian)", 3.155819600000000E+07, "s", "T", "1.0"));
      unit.put("Time[year(Gregorian)]",   new UBASE("Time", "year(Gregorian)", 3.155760000000000E+07, "s", "T", "1.0"));
      unit.put("Time[yr(Gregorian)]",   new UBASE("Time", "year(Gregorian)", 3.155760000000000E+07, "s", "T", "1.0"));
      unit.put("Time[year(Julian)]",   new UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0"));
      unit.put("Time[yr(Julian)]",   new UBASE("Time", "year(Julian)", 3.155760000000000E+07, "s", "T", "1.0"));
      unit.put("Time[year(leap)]",   new UBASE("Time", "year(leap)", 1.119528000000000E+10, "s", "T", "1.0"));
      unit.put("Time[yr(leap)]",   new UBASE("Time", "year(leap)", 1.119528000000000E+10, "s", "T", "1.0"));
      unit.put("Scientific[year(sidereal)]",   new UBASE("Scientific", "year(sidereal)", 3.155815000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[yr(sidereal)]",   new UBASE("Scientific", "year(sidereal)", 3.155815000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[year(solar-mean)]",   new UBASE("Scientific", "year(solar-mean)", 3.155760000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[yr(solar-mean)]",   new UBASE("Scientific", "year(solar-mean)", 3.155760000000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[year(tropical)]",   new UBASE("Scientific", "year(tropical)", 3.155692500000000E+07, "s", "T", "1.0"));
      unit.put("Scientific[yr(tropical)]",   new UBASE("Scientific", "year(tropical)", 3.155692500000000E+07, "s", "T", "1.0"));
      unit.put("SI[yottasecond]",   new UBASE("SI", "yottasecond", 1.000000000000000E+24, "s", "T", "1.0"));
      unit.put("SI[Ys]",   new UBASE("SI", "yottasecond", 1.000000000000000E+24, "s", "T", "1.0"));
      unit.put("SI[zettasecond]",   new UBASE("SI", "zettasecond", 1.000000000000000E+21, "s", "T", "1.0"));
      unit.put("SI[Zs]",   new UBASE("SI", "zettasecond", 1.000000000000000E+21, "s", "T", "1.0"));
      unit.put("SI[exasecond]",   new UBASE("SI", "exasecond", 1.000000000000000E+18, "s", "T", "1.0"));
      unit.put("SI[Es]",   new UBASE("SI", "exasecond", 1.000000000000000E+18, "s", "T", "1.0"));
      unit.put("SI[petasecond]",   new UBASE("SI", "petasecond", 1.000000000000000E+15, "s", "T", "1.0"));
      unit.put("SI[Ps]",   new UBASE("SI", "petasecond", 1.000000000000000E+15, "s", "T", "1.0"));
      unit.put("SI[terasecond]",   new UBASE("SI", "terasecond", 1.000000000000000E+12, "s", "T", "1.0"));
      unit.put("SI[Ts]",   new UBASE("SI", "terasecond", 1.000000000000000E+12, "s", "T", "1.0"));
      unit.put("SI[gigasecond]",   new UBASE("SI", "gigasecond", 1.000000000000000E+09, "s", "T", "1.0"));
      unit.put("SI[Gs]",   new UBASE("SI", "gigasecond", 1.000000000000000E+09, "s", "T", "1.0"));
      unit.put("SI[megasecond]",   new UBASE("SI", "megasecond", 1.000000000000000E+06, "s", "T", "1.0"));
      unit.put("SI[Ms]",   new UBASE("SI", "megasecond", 1.000000000000000E+06, "s", "T", "1.0"));
      unit.put("SI[kilosecond]",   new UBASE("SI", "kilosecond", 1.000000000000000E+03, "s", "T", "1.0"));
      unit.put("SI[ks]",   new UBASE("SI", "kilosecond", 1.000000000000000E+03, "s", "T", "1.0"));
      unit.put("SI[hectosecond]",   new UBASE("SI", "hectosecond", 1.000000000000000E+02, "s", "T", "1.0"));
      unit.put("SI[hs]",   new UBASE("SI", "hectosecond", 1.000000000000000E+02, "s", "T", "1.0"));
      unit.put("SI[decasecond]",   new UBASE("SI", "decasecond", 1.000000000000000E+01, "s", "T", "1.0"));
      unit.put("SI[das]",   new UBASE("SI", "decasecond", 1.000000000000000E+01, "s", "T", "1.0"));
      unit.put("SI[decisecond]",   new UBASE("SI", "decisecond", 1.000000000000000E-01, "s", "T", "1.0"));
      unit.put("SI[ds]",   new UBASE("SI", "decisecond", 1.000000000000000E-01, "s", "T", "1.0"));
      unit.put("SI[centisecond]",   new UBASE("SI", "centisecond", 1.000000000000000E-02, "s", "T", "1.0"));
      unit.put("SI[cs]",   new UBASE("SI", "centisecond", 1.000000000000000E-02, "s", "T", "1.0"));
      unit.put("SI[millisecond]",   new UBASE("SI", "millisecond", 1.000000000000000E-03, "s", "T", "1.0"));
      unit.put("SI[ms]",   new UBASE("SI", "millisecond", 1.000000000000000E-03, "s", "T", "1.0"));
      unit.put("SI[microsecond]",   new UBASE("SI", "microsecond", 1.000000000000000E-06, "s", "T", "1.0"));
      unit.put("SI[us]",   new UBASE("SI", "microsecond", 1.000000000000000E-06, "s", "T", "1.0"));
      unit.put("SI[nanosecond]",   new UBASE("SI", "nanosecond", 1.000000000000000E-09, "s", "T", "1.0"));
      unit.put("SI[ns]",   new UBASE("SI", "nanosecond", 1.000000000000000E-09, "s", "T", "1.0"));
      unit.put("SI[picosecond]",   new UBASE("SI", "picosecond", 1.000000000000000E-12, "s", "T", "1.0"));
      unit.put("SI[ps]",   new UBASE("SI", "picosecond", 1.000000000000000E-12, "s", "T", "1.0"));
      unit.put("SI[femtosecond]",   new UBASE("SI", "femtosecond", 1.000000000000000E-15, "s", "T", "1.0"));
      unit.put("SI[fs]",   new UBASE("SI", "femtosecond", 1.000000000000000E-15, "s", "T", "1.0"));
      unit.put("SI[attosecond]",   new UBASE("SI", "attosecond", 1.000000000000000E-18, "s", "T", "1.0"));
      unit.put("SI[as]",   new UBASE("SI", "attosecond", 1.000000000000000E-18, "s", "T", "1.0"));
      unit.put("SI[zeptosecond]",   new UBASE("SI", "zeptosecond", 1.000000000000000E-21, "s", "T", "1.0"));
      unit.put("SI[zs]",   new UBASE("SI", "zeptosecond", 1.000000000000000E-21, "s", "T", "1.0"));
      unit.put("SI[yoctosecond]",   new UBASE("SI", "yoctosecond", 1.000000000000000E-24, "s", "T", "1.0"));
      unit.put("SI[ys]",   new UBASE("SI", "yoctosecond", 1.000000000000000E-24, "s", "T", "1.0"));
      _map.put("time",   new BaseSystem("time", unit, "1.0"));

      unit.clear();


   }

}
// EOF
