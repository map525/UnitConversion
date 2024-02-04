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
// File VelAccJrk.cs
//
// Units for VelAccJrk
//
// Class for VelAccJrk units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class VelAccJrk : SingleSystem
   {
       private static VelAccJrk singleton_ = new VelAccJrk();

       public static VelAccJrk Instance()
       {
           return singleton_;
       }

       private VelAccJrk() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("SI[attometer-per-year]",   new UBASE("SI", "attometer-per-year", 3.170979198376460E-26, "m/s", "L/T", "1.0"));
          unit.Add("SI[am/yr]",   new UBASE("SI", "attometer-per-year", 3.170979198376460E-26, "m/s", "L/T", "1.0"));
          unit.Add("SI[attometer-per-month]",   new UBASE("SI", "attometer-per-month", 3.858024691358030E-25, "m/s", "L/T", "1.0"));
          unit.Add("SI[am/mon]",   new UBASE("SI", "attometer-per-month", 3.858024691358030E-25, "m/s", "L/T", "1.0"));
          unit.Add("SI[attometer-per-day]",   new UBASE("SI", "attometer-per-day", 1.157407407407410E-23, "m/s", "L/T", "1.0"));
          unit.Add("SI[am/day]",   new UBASE("SI", "attometer-per-day", 1.157407407407410E-23, "m/s", "L/T", "1.0"));
          unit.Add("SI[attometer-per-hour]",   new UBASE("SI", "attometer-per-hour", 2.777777777777780E-22, "m/s", "L/T", "1.0"));
          unit.Add("SI[am/hr]",   new UBASE("SI", "attometer-per-hour", 2.777777777777780E-22, "m/s", "L/T", "1.0"));
          unit.Add("SI[attometer-per-minute]",   new UBASE("SI", "attometer-per-minute", 1.666666666666670E-20, "m/s", "L/T", "1.0"));
          unit.Add("SI[am/min]",   new UBASE("SI", "attometer-per-minute", 1.666666666666670E-20, "m/s", "L/T", "1.0"));
          unit.Add("SI[attometer-per-second]",   new UBASE("SI", "attometer-per-second", 1.000000000000000E-18, "m/s", "L/T", "1.0"));
          unit.Add("SI[am/sec]",   new UBASE("SI", "attometer-per-second", 1.000000000000000E-18, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[benz]",   new UBASE("Scientific", "benz", 1.000000000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[Bz]",   new UBASE("Scientific", "benz", 1.000000000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[m/sec]",   new UBASE("Scientific", "benz", 1.000000000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("INT[bubnoff-unit]",   new UBASE("INT", "bubnoff-unit", 3.168808781402890E-14, "m/s", "L/T", "1.0"));
          unit.Add("INT[B]",   new UBASE("INT", "bubnoff-unit", 3.168808781402890E-14, "m/s", "L/T", "1.0"));
          unit.Add("INT[BU]",   new UBASE("INT", "bubnoff-unit", 3.168808781402890E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[centimeter-per-year]",   new UBASE("SI", "centimeter-per-year", 3.170979198376460E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[cm/yr]",   new UBASE("SI", "centimeter-per-year", 3.170979198376460E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[centimeter-per-month]",   new UBASE("SI", "centimeter-per-month", 3.858024691358020E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[cm/mon]",   new UBASE("SI", "centimeter-per-month", 3.858024691358020E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[centimeter-per-day]",   new UBASE("SI", "centimeter-per-day", 1.157407407407410E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[cm/day]",   new UBASE("SI", "centimeter-per-day", 1.157407407407410E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[centimeter-per-hour]",   new UBASE("SI", "centimeter-per-hour", 2.777777777777780E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[cm/hr]",   new UBASE("SI", "centimeter-per-hour", 2.777777777777780E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[centimeter-per-minute]",   new UBASE("SI", "centimeter-per-minute", 1.666666666666670E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[cm/min]",   new UBASE("SI", "centimeter-per-minute", 1.666666666666670E-04, "m/s", "L/T", "1.0"));
          unit.Add("cgs[centimeter-per-second]",   new UBASE("cgs", "centimeter-per-second", 1.000000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("cgs[cm/sec]",   new UBASE("cgs", "centimeter-per-second", 1.000000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[chain-per-year]",   new UBASE("Imperial", "chain-per-year", 6.378995433789950E-07, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ch/yr]",   new UBASE("Imperial", "chain-per-year", 6.378995433789950E-07, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[chain-per-month]",   new UBASE("Imperial", "chain-per-month", 7.761111111111110E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ch/mon]",   new UBASE("Imperial", "chain-per-month", 7.761111111111110E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[chain-per-day]",   new UBASE("Imperial", "chain-per-day", 2.328333333333330E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ch/day]",   new UBASE("Imperial", "chain-per-day", 2.328333333333330E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[chain-per-hour]",   new UBASE("Imperial", "chain-per-hour", 5.588000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ch/hr]",   new UBASE("Imperial", "chain-per-hour", 5.588000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[chain-per-minute]",   new UBASE("Imperial", "chain-per-minute", 3.352800000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ch/min]",   new UBASE("Imperial", "chain-per-minute", 3.352800000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[chain-per-second]",   new UBASE("Imperial", "chain-per-second", 2.011680000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ch/sec]",   new UBASE("Imperial", "chain-per-second", 2.011680000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("UK[cusec]",   new UBASE("UK", "cusec", 2.831684659200000E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[decameter-per-year]",   new UBASE("SI", "decameter-per-year", 3.170979198376460E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[dam/yr]",   new UBASE("SI", "decameter-per-year", 3.170979198376460E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[decameter-per-month]",   new UBASE("SI", "decameter-per-month", 3.858024691358020E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[dam/mon]",   new UBASE("SI", "decameter-per-month", 3.858024691358020E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[decameter-per-day]",   new UBASE("SI", "decameter-per-day", 1.157407407407410E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[dam/day]",   new UBASE("SI", "decameter-per-day", 1.157407407407410E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[decameter-per-hour]",   new UBASE("SI", "decameter-per-hour", 2.777777777777780E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[dam/hr]",   new UBASE("SI", "decameter-per-hour", 2.777777777777780E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[decameter-per-minute]",   new UBASE("SI", "decameter-per-minute", 1.666666666666670E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[dam/min]",   new UBASE("SI", "decameter-per-minute", 1.666666666666670E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[decameter-per-second]",   new UBASE("SI", "decameter-per-second", 1.000000000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("SI[dam/sec]",   new UBASE("SI", "decameter-per-second", 1.000000000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("SI[decimeter-per-year]",   new UBASE("SI", "decimeter-per-year", 3.170979198376460E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[dm/yr]",   new UBASE("SI", "decimeter-per-year", 3.170979198376460E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[decimeter-per-month]",   new UBASE("SI", "decimeter-per-month", 3.858024691358020E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[dm/mon]",   new UBASE("SI", "decimeter-per-month", 3.858024691358020E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[decimeter-per-day]",   new UBASE("SI", "decimeter-per-day", 1.157407407407410E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[dm/day]",   new UBASE("SI", "decimeter-per-day", 1.157407407407410E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[decimeter-per-hour]",   new UBASE("SI", "decimeter-per-hour", 2.777777777777780E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[dm/hr]",   new UBASE("SI", "decimeter-per-hour", 2.777777777777780E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[decimeter0per-minute]",   new UBASE("SI", "decimeter0per-minute", 1.666666666666670E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[dm/min]",   new UBASE("SI", "decimeter0per-minute", 1.666666666666670E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[decimeter-per-second]",   new UBASE("SI", "decimeter-per-second", 1.000000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[dm/sec]",   new UBASE("SI", "decimeter-per-second", 1.000000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[femtometer-per-year]",   new UBASE("SI", "femtometer-per-year", 3.170979198376460E-23, "m/s", "L/T", "1.0"));
          unit.Add("SI[fm/yr]",   new UBASE("SI", "femtometer-per-year", 3.170979198376460E-23, "m/s", "L/T", "1.0"));
          unit.Add("SI[femtometer-per-month]",   new UBASE("SI", "femtometer-per-month", 3.858024691358030E-22, "m/s", "L/T", "1.0"));
          unit.Add("SI[fm/mon]",   new UBASE("SI", "femtometer-per-month", 3.858024691358030E-22, "m/s", "L/T", "1.0"));
          unit.Add("SI[femtometer-per-day]",   new UBASE("SI", "femtometer-per-day", 1.157407407407410E-20, "m/s", "L/T", "1.0"));
          unit.Add("SI[fm/day]",   new UBASE("SI", "femtometer-per-day", 1.157407407407410E-20, "m/s", "L/T", "1.0"));
          unit.Add("SI[femtometer-per-hour]",   new UBASE("SI", "femtometer-per-hour", 2.777777777777780E-19, "m/s", "L/T", "1.0"));
          unit.Add("SI[fm/hr]",   new UBASE("SI", "femtometer-per-hour", 2.777777777777780E-19, "m/s", "L/T", "1.0"));
          unit.Add("SI[femtometer-per-minute]",   new UBASE("SI", "femtometer-per-minute", 2.777777777777780E-19, "m/s", "L/T", "1.0"));
          unit.Add("SI[fm/min]",   new UBASE("SI", "femtometer-per-minute", 2.777777777777780E-19, "m/s", "L/T", "1.0"));
          unit.Add("SI[femtometer-per-second]",   new UBASE("SI", "femtometer-per-second", 1.000000000000000E-15, "m/s", "L/T", "1.0"));
          unit.Add("SI[fm/sec]",   new UBASE("SI", "femtometer-per-second", 1.000000000000000E-15, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[foot-per-year]",   new UBASE("Imperial", "foot-per-year", 9.665144596651450E-09, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ft/yr]",   new UBASE("Imperial", "foot-per-year", 9.665144596651450E-09, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fpy]",   new UBASE("Imperial", "foot-per-year", 9.665144596651450E-09, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[foot-per-month]",   new UBASE("Imperial", "foot-per-month", 1.175925925925930E-07, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ft/mon]",   new UBASE("Imperial", "foot-per-month", 1.175925925925930E-07, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[foot-per-day]",   new UBASE("Imperial", "foot-per-day", 3.527777777777780E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ft/day]",   new UBASE("Imperial", "foot-per-day", 3.527777777777780E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fpd]",   new UBASE("Imperial", "foot-per-day", 3.527777777777780E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[foot-per-hour]",   new UBASE("Imperial", "foot-per-hour", 8.466666666666670E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ft/hr]",   new UBASE("Imperial", "foot-per-hour", 8.466666666666670E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fph]",   new UBASE("Imperial", "foot-per-hour", 8.466666666666670E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[foot-per-minute]",   new UBASE("Imperial", "foot-per-minute", 5.080000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ft/min]",   new UBASE("Imperial", "foot-per-minute", 5.080000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fpm]",   new UBASE("Imperial", "foot-per-minute", 5.080000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[foot-per-second]",   new UBASE("Imperial", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ft/sec]",   new UBASE("Imperial", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fps]",   new UBASE("Imperial", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("FPS[foot-per-second]",   new UBASE("FPS", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("FPS[ft/sec]",   new UBASE("FPS", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("FPS[fps]",   new UBASE("FPS", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[furlong-per-year]",   new UBASE("Imperial", "furlong-per-year", 6.378995433789950E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fur/yy]",   new UBASE("Imperial", "furlong-per-year", 6.378995433789950E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[furlong-per-month]",   new UBASE("Imperial", "furlong-per-month", 7.761111111111110E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fur/mon]",   new UBASE("Imperial", "furlong-per-month", 7.761111111111110E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[furlong-per-day]",   new UBASE("Imperial", "furlong-per-day", 2.328333333333330E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fur/day]",   new UBASE("Imperial", "furlong-per-day", 2.328333333333330E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[furlong-per-hour]",   new UBASE("Imperial", "furlong-per-hour", 5.588000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fur/hr]",   new UBASE("Imperial", "furlong-per-hour", 5.588000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[furlong-per-minute]",   new UBASE("Imperial", "furlong-per-minute", 3.352800000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fur/min]",   new UBASE("Imperial", "furlong-per-minute", 3.352800000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[furlong-per-second]",   new UBASE("Imperial", "furlong-per-second", 2.011680000000000E+02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[fur/sec]",   new UBASE("Imperial", "furlong-per-second", 2.011680000000000E+02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hand-per-second]",   new UBASE("Imperial", "hand-per-second", 1.016000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hd/sec]",   new UBASE("Imperial", "hand-per-second", 1.016000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hand-per-minute]",   new UBASE("Imperial", "hand-per-minute", 1.693333333333330E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hd/min]",   new UBASE("Imperial", "hand-per-minute", 1.693333333333330E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hand-per-hour]",   new UBASE("Imperial", "hand-per-hour", 2.822222222222220E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hd/hr]",   new UBASE("Imperial", "hand-per-hour", 2.822222222222220E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hand-per-day]",   new UBASE("Imperial", "hand-per-day", 1.175925925925930E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hd/day]",   new UBASE("Imperial", "hand-per-day", 1.175925925925930E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hand-per-month]",   new UBASE("Imperial", "hand-per-month", 3.919753086419750E-08, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hd/mon]",   new UBASE("Imperial", "hand-per-month", 3.919753086419750E-08, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hand-per-year]",   new UBASE("Imperial", "hand-per-year", 3.221714865550480E-09, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[hd/yr]",   new UBASE("Imperial", "hand-per-year", 3.221714865550480E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[hectometer-per-year]",   new UBASE("SI", "hectometer-per-year", 3.170979198376460E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[hm/yr]",   new UBASE("SI", "hectometer-per-year", 3.170979198376460E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[hectometer-per-month]",   new UBASE("SI", "hectometer-per-month", 3.858024691358020E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[hm/mon]",   new UBASE("SI", "hectometer-per-month", 3.858024691358020E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[hectometer-per-day]",   new UBASE("SI", "hectometer-per-day", 1.157407407407410E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[hm/day]",   new UBASE("SI", "hectometer-per-day", 1.157407407407410E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[hectometer-per-hour]",   new UBASE("SI", "hectometer-per-hour", 2.777777777777780E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[hm/hr]",   new UBASE("SI", "hectometer-per-hour", 2.777777777777780E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[hectometer-per-minute]",   new UBASE("SI", "hectometer-per-minute", 1.666666666666670E+00, "m/s", "L/T", "1.0"));
          unit.Add("SI[hm/min]",   new UBASE("SI", "hectometer-per-minute", 1.666666666666670E+00, "m/s", "L/T", "1.0"));
          unit.Add("SI[hectometer-per-second]",   new UBASE("SI", "hectometer-per-second", 1.000000000000000E+02, "m/s", "L/T", "1.0"));
          unit.Add("SI[hm/sec]",   new UBASE("SI", "hectometer-per-second", 1.000000000000000E+02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[inch-per-second]",   new UBASE("Imperial", "inch-per-second", 2.540000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[in/sec]",   new UBASE("Imperial", "inch-per-second", 2.540000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[ips]",   new UBASE("Imperial", "inch-per-second", 2.540000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[inch-per-minute]",   new UBASE("Imperial", "inch-per-minute", 4.233333333333330E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[in/min]",   new UBASE("Imperial", "inch-per-minute", 4.233333333333330E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[inch-per-hour]",   new UBASE("Imperial", "inch-per-hour", 7.055555555555560E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[in/hr]",   new UBASE("Imperial", "inch-per-hour", 7.055555555555560E-06, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[inch-per-day]",   new UBASE("Imperial", "inch-per-day", 2.939814814814810E-07, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[in/day]",   new UBASE("Imperial", "inch-per-day", 2.939814814814810E-07, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[inch-per-month]",   new UBASE("Imperial", "inch-per-month", 9.799382716049380E-09, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[in/mon]",   new UBASE("Imperial", "inch-per-month", 9.799382716049380E-09, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[inch-per-year]",   new UBASE("Imperial", "inch-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[in/yr]",   new UBASE("Imperial", "inch-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[kilometer-per-year]",   new UBASE("SI", "kilometer-per-year", 3.170979198376460E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[km/yr]",   new UBASE("SI", "kilometer-per-year", 3.170979198376460E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[kilometer-per-month]",   new UBASE("SI", "kilometer-per-month", 1.157407407407410E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[km/mon]",   new UBASE("SI", "kilometer-per-month", 1.157407407407410E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[kilometer-per-day]",   new UBASE("SI", "kilometer-per-day", 3.858024691358020E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[km/day]",   new UBASE("SI", "kilometer-per-day", 3.858024691358020E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[kilometer-per-hour]",   new UBASE("SI", "kilometer-per-hour", 2.777777777777780E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[km/hr]",   new UBASE("SI", "kilometer-per-hour", 2.777777777777780E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[kilometer-per-minute]",   new UBASE("SI", "kilometer-per-minute", 1.666666666666670E+01, "m/s", "L/T", "1.0"));
          unit.Add("SI[km/min]",   new UBASE("SI", "kilometer-per-minute", 1.666666666666670E+01, "m/s", "L/T", "1.0"));
          unit.Add("SI[kilometer-per-second]",   new UBASE("SI", "kilometer-per-second", 1.000000000000000E+03, "m/s", "L/T", "1.0"));
          unit.Add("SI[km/sec]",   new UBASE("SI", "kilometer-per-second", 1.000000000000000E+03, "m/s", "L/T", "1.0"));
          unit.Add("cgs[kine]",   new UBASE("cgs", "kine", 1.000000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("UK[knot]",   new UBASE("UK", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0"));
          unit.Add("UK[kn]",   new UBASE("UK", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0"));
          unit.Add("US[knot]",   new UBASE("US", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0"));
          unit.Add("US[kn]",   new UBASE("US", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[knot]",   new UBASE("Imperial", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[kn]",   new UBASE("Imperial", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[kyne]",   new UBASE("Scientific", "kyne", 1.000000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[cm/s]",   new UBASE("Scientific", "kyne", 1.000000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[league-per-year]",   new UBASE("Imperial", "league-per-year", 1.530958904109590E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[leag/yr]",   new UBASE("Imperial", "league-per-year", 1.530958904109590E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[league-per-month]",   new UBASE("Imperial", "league-per-month", 1.862666666666670E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[leag/mon]",   new UBASE("Imperial", "league-per-month", 1.862666666666670E-03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[league-per-day]",   new UBASE("Imperial", "league-per-day", 5.588000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[leag/day]",   new UBASE("Imperial", "league-per-day", 5.588000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[league-per-hour]",   new UBASE("Imperial", "league-per-hour", 1.341120000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[leag/hr]",   new UBASE("Imperial", "league-per-hour", 1.341120000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[league-per-minute]",   new UBASE("Imperial", "league-per-minute", 8.046720000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[leag/min]",   new UBASE("Imperial", "league-per-minute", 8.046720000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[league-per-second]",   new UBASE("Imperial", "league-per-second", 4.828032000000000E+03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[leag/sec]",   new UBASE("Imperial", "league-per-second", 4.828032000000000E+03, "m/s", "L/T", "1.0"));
          unit.Add("INT[mach]",   new UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0"));
          unit.Add("INT[M]",   new UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0"));
          unit.Add("INT[Ma]",   new UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0"));
          unit.Add("INT[Nma]",   new UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0"));
          unit.Add("SI[micrometer-per-second]",   new UBASE("SI", "micrometer-per-second", 1.000000000000000E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[um/sec]",   new UBASE("SI", "micrometer-per-second", 1.000000000000000E-06, "m/s", "L/T", "1.0"));
          unit.Add("SI[micrometer-per-minute]",   new UBASE("SI", "micrometer-per-minute", 1.666666666666670E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[um/min]",   new UBASE("SI", "micrometer-per-minute", 1.666666666666670E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[micrometer-per-hour]",   new UBASE("SI", "micrometer-per-hour", 2.777777777777780E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[um/hr]",   new UBASE("SI", "micrometer-per-hour", 2.777777777777780E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[micrometer-per-day]",   new UBASE("SI", "micrometer-per-day", 1.157407407407410E-11, "m/s", "L/T", "1.0"));
          unit.Add("SI[um/day]",   new UBASE("SI", "micrometer-per-day", 1.157407407407410E-11, "m/s", "L/T", "1.0"));
          unit.Add("SI[micrometer-per-month]",   new UBASE("SI", "micrometer-per-month", 3.858024691358020E-13, "m/s", "L/T", "1.0"));
          unit.Add("SI[um/mon]",   new UBASE("SI", "micrometer-per-month", 3.858024691358020E-13, "m/s", "L/T", "1.0"));
          unit.Add("SI[micrometer-per-year]",   new UBASE("SI", "micrometer-per-year", 3.170979198376460E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[um/yr]",   new UBASE("SI", "micrometer-per-year", 3.170979198376460E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[millimeter-per-second]",   new UBASE("SI", "millimeter-per-second", 1.000000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[mm/sec]",   new UBASE("SI", "millimeter-per-second", 1.000000000000000E-03, "m/s", "L/T", "1.0"));
          unit.Add("SI[millimeter-per-minute]",   new UBASE("SI", "millimeter-per-minute", 1.666666666666670E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[mm/min]",   new UBASE("SI", "millimeter-per-minute", 1.666666666666670E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[millimeter-per-hour]",   new UBASE("SI", "millimeter-per-hour", 2.777777777777780E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[mm/hr]",   new UBASE("SI", "millimeter-per-hour", 2.777777777777780E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[millimeter-per-day]",   new UBASE("SI", "millimeter-per-day", 1.157407407407410E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[mm/day]",   new UBASE("SI", "millimeter-per-day", 1.157407407407410E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[millimeter-per-month]",   new UBASE("SI", "millimeter-per-month", 3.858024691358020E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[mm/mon]",   new UBASE("SI", "millimeter-per-month", 3.858024691358020E-10, "m/s", "L/T", "1.0"));
          unit.Add("SI[millimeter-per-year]",   new UBASE("SI", "millimeter-per-year", 3.170979198376460E-11, "m/s", "L/T", "1.0"));
          unit.Add("SI[mm/yr]",   new UBASE("SI", "millimeter-per-year", 3.170979198376460E-11, "m/s", "L/T", "1.0"));
          unit.Add("SI[megameter-per-second]",   new UBASE("SI", "megameter-per-second", 1.000000000000000E+06, "m/s", "L/T", "1.0"));
          unit.Add("SI[Mm/sec]",   new UBASE("SI", "megameter-per-second", 1.000000000000000E+06, "m/s", "L/T", "1.0"));
          unit.Add("SI[megameter-per-minute]",   new UBASE("SI", "megameter-per-minute", 1.666666666666670E+04, "m/s", "L/T", "1.0"));
          unit.Add("SI[Mm/min]",   new UBASE("SI", "megameter-per-minute", 1.666666666666670E+04, "m/s", "L/T", "1.0"));
          unit.Add("SI[megameter-per-hour]",   new UBASE("SI", "megameter-per-hour", 2.777777777777780E+02, "m/s", "L/T", "1.0"));
          unit.Add("SI[Mm/hr]",   new UBASE("SI", "megameter-per-hour", 2.777777777777780E+02, "m/s", "L/T", "1.0"));
          unit.Add("SI[megameter-per-day]",   new UBASE("SI", "megameter-per-day", 1.157407407407410E+01, "m/s", "L/T", "1.0"));
          unit.Add("SI[Mm/day]",   new UBASE("SI", "megameter-per-day", 1.157407407407410E+01, "m/s", "L/T", "1.0"));
          unit.Add("SI[megameter-per-month]",   new UBASE("SI", "megameter-per-month", 3.858024691358020E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[Mm/mon]",   new UBASE("SI", "megameter-per-month", 3.858024691358020E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[megameter-per-year]",   new UBASE("SI", "megameter-per-year", 3.170979198376460E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[Mm/yr]",   new UBASE("SI", "megameter-per-year", 3.170979198376460E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[meter-per-second]",   new UBASE("SI", "meter-per-second", 1.000000000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("SI[m/sec]",   new UBASE("SI", "meter-per-second", 1.000000000000000E+00, "m/s", "L/T", "1.0"));
          unit.Add("SI[meter-per-minute]",   new UBASE("SI", "meter-per-minute", 1.666666666666670E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[m/min]",   new UBASE("SI", "meter-per-minute", 1.666666666666670E-02, "m/s", "L/T", "1.0"));
          unit.Add("SI[meter-per-hour]",   new UBASE("SI", "meter-per-hour", 2.777777777777780E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[m/hr]",   new UBASE("SI", "meter-per-hour", 2.777777777777780E-04, "m/s", "L/T", "1.0"));
          unit.Add("SI[meter-per-day]",   new UBASE("SI", "meter-per-day", 1.157407407407410E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[m/day]",   new UBASE("SI", "meter-per-day", 1.157407407407410E-05, "m/s", "L/T", "1.0"));
          unit.Add("SI[meter-per-month]",   new UBASE("SI", "meter-per-month", 3.858024691358020E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[m/mon]",   new UBASE("SI", "meter-per-month", 3.858024691358020E-07, "m/s", "L/T", "1.0"));
          unit.Add("SI[meter-per-year]",   new UBASE("SI", "meter-per-year", 3.170979198376460E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[m/yr]",   new UBASE("SI", "meter-per-year", 3.170979198376460E-08, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mil-per-year]",   new UBASE("Imperial", "mil-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mpy]",   new UBASE("Imperial", "mil-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mile-per-second]",   new UBASE("Imperial", "mile-per-second", 1.609344000000000E+03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mi/sec]",   new UBASE("Imperial", "mile-per-second", 1.609344000000000E+03, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mile-per-minute]",   new UBASE("Imperial", "mile-per-minute", 2.682240000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mi/min]",   new UBASE("Imperial", "mile-per-minute", 2.682240000000000E+01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mile-per-hour]",   new UBASE("Imperial", "mile-per-hour", 4.470400000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mph]",   new UBASE("Imperial", "mile-per-hour", 4.470400000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mi/hr]",   new UBASE("Imperial", "mile-per-hour", 4.470400000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mile-per-day]",   new UBASE("Imperial", "mile-per-day", 1.862666666666670E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mi/day]",   new UBASE("Imperial", "mile-per-day", 1.862666666666670E-02, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mile-per-month]",   new UBASE("Imperial", "mile-per-month", 6.208888888888890E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mi/mon]",   new UBASE("Imperial", "mile-per-month", 6.208888888888890E-04, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mile-per-year]",   new UBASE("Imperial", "mile-per-year", 5.103196347031960E-05, "m/s", "L/T", "1.0"));
          unit.Add("Imperial[mi/yr]",   new UBASE("Imperial", "mile-per-year", 5.103196347031960E-05, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[milligram-per-square-decimeter-per-day]",   new UBASE("Scientific", "milligram-per-square-decimeter-per-day", 1.157407407407410E-09, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[mg/dm2-day]",   new UBASE("Scientific", "milligram-per-square-decimeter-per-day", 1.157407407407410E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[nanometer-per-second]",   new UBASE("SI", "nanometer-per-second", 1.000000000000000E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[nm/sec]",   new UBASE("SI", "nanometer-per-second", 1.000000000000000E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[nanometer-per-minute]",   new UBASE("SI", "nanometer-per-minute", 1.666666666666670E-11, "m/s", "L/T", "1.0"));
          unit.Add("SI[nm/min]",   new UBASE("SI", "nanometer-per-minute", 1.666666666666670E-11, "m/s", "L/T", "1.0"));
          unit.Add("SI[nanometer-per-hour]",   new UBASE("SI", "nanometer-per-hour", 2.777777777777780E-13, "m/s", "L/T", "1.0"));
          unit.Add("SI[nm/hr]",   new UBASE("SI", "nanometer-per-hour", 2.777777777777780E-13, "m/s", "L/T", "1.0"));
          unit.Add("SI[nanometer-per-day]",   new UBASE("SI", "nanometer-per-day", 1.157407407407410E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[nm/day]",   new UBASE("SI", "nanometer-per-day", 1.157407407407410E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[nanometer-per-month]",   new UBASE("SI", "nanometer-per-month", 3.858024691358030E-16, "m/s", "L/T", "1.0"));
          unit.Add("SI[nm/mon]",   new UBASE("SI", "nanometer-per-month", 3.858024691358030E-16, "m/s", "L/T", "1.0"));
          unit.Add("SI[nanometer-per-year]",   new UBASE("SI", "nanometer-per-year", 3.170979198376460E-17, "m/s", "L/T", "1.0"));
          unit.Add("SI[nm/yr]",   new UBASE("SI", "nanometer-per-year", 3.170979198376460E-17, "m/s", "L/T", "1.0"));
          unit.Add("INT[nautical-mile-per-hour]",   new UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0"));
          unit.Add("INT[kn]",   new UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0"));
          unit.Add("INT[knot]",   new UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0"));
          unit.Add("INT[nmph]",   new UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0"));
          unit.Add("INT[noeud]",   new UBASE("INT", "noeud", 5.144444444444440E-01, "m/s", "L/T", "1.0"));
          unit.Add("SI[picometer-per-second]",   new UBASE("SI", "picometer-per-second", 1.000000000000000E-12, "m/s", "L/T", "1.0"));
          unit.Add("SI[pm/sec]",   new UBASE("SI", "picometer-per-second", 1.000000000000000E-12, "m/s", "L/T", "1.0"));
          unit.Add("SI[picometer-per-minute]",   new UBASE("SI", "picometer-per-minute", 1.666666666666670E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[pm/min]",   new UBASE("SI", "picometer-per-minute", 1.666666666666670E-14, "m/s", "L/T", "1.0"));
          unit.Add("SI[picometer-per-hour]",   new UBASE("SI", "picometer-per-hour", 2.777777777777780E-16, "m/s", "L/T", "1.0"));
          unit.Add("SI[pm/hr]",   new UBASE("SI", "picometer-per-hour", 2.777777777777780E-16, "m/s", "L/T", "1.0"));
          unit.Add("SI[picometer-per-day]",   new UBASE("SI", "picometer-per-day", 1.157407407407410E-17, "m/s", "L/T", "1.0"));
          unit.Add("SI[pm/day]",   new UBASE("SI", "picometer-per-day", 1.157407407407410E-17, "m/s", "L/T", "1.0"));
          unit.Add("SI[picometer-per-month]",   new UBASE("SI", "picometer-per-month", 3.858024691358020E-19, "m/s", "L/T", "1.0"));
          unit.Add("SI[pm/mon]",   new UBASE("SI", "picometer-per-month", 3.858024691358020E-19, "m/s", "L/T", "1.0"));
          unit.Add("SI[picometer-per-year]",   new UBASE("SI", "picometer-per-year", 3.170979198376460E-20, "m/s", "L/T", "1.0"));
          unit.Add("SI[pm/yr]",   new UBASE("SI", "picometer-per-year", 3.170979198376460E-20, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[speed-of-light]",   new UBASE("Scientific", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[c]",   new UBASE("Scientific", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[lightspeed]",   new UBASE("Scientific", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[svedberg]",   new UBASE("Scientific", "svedberg", 1.000000000000000E-15, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[Sv]",   new UBASE("Scientific", "svedberg", 1.000000000000000E-15, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yard-per-second]",   new UBASE("Scientific", "yard-per-second", 9.144000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yd/sec]",   new UBASE("Scientific", "yard-per-second", 9.144000000000000E-01, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yard-per-minute]",   new UBASE("Scientific", "yard-per-minute", 1.524000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yd/min]",   new UBASE("Scientific", "yard-per-minute", 1.524000000000000E-02, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yard-per-hour]",   new UBASE("Scientific", "yard-per-hour", 2.540000000000000E-04, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yd/hr]",   new UBASE("Scientific", "yard-per-hour", 2.540000000000000E-04, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yard-per-day]",   new UBASE("Scientific", "yard-per-day", 1.058333333333330E-05, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yd/day]",   new UBASE("Scientific", "yard-per-day", 1.058333333333330E-05, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yard-per-month]",   new UBASE("Scientific", "yard-per-month", 3.527777777777780E-07, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yd/mon]",   new UBASE("Scientific", "yard-per-month", 3.527777777777780E-07, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yard-per-year]",   new UBASE("Scientific", "yard-per-year", 2.899543378995430E-08, "m/s", "L/T", "1.0"));
          unit.Add("Scientific[yd/yr]",   new UBASE("Scientific", "yard-per-year", 2.899543378995430E-08, "m/s", "L/T", "1.0"));
          unit.Add("SI[yoctometer-per-second]",   new UBASE("SI", "yoctometer-per-second", 1.000000000000000E-24, "m/s", "L/T", "1.0"));
          unit.Add("SI[ym/sec]",   new UBASE("SI", "yoctometer-per-second", 1.000000000000000E-24, "m/s", "L/T", "1.0"));
          unit.Add("SI[yoctometer-per-minute]",   new UBASE("SI", "yoctometer-per-minute", 1.666666666666670E-26, "m/s", "L/T", "1.0"));
          unit.Add("SI[ym/min]",   new UBASE("SI", "yoctometer-per-minute", 1.666666666666670E-26, "m/s", "L/T", "1.0"));
          unit.Add("SI[yoctometer-per-hour]",   new UBASE("SI", "yoctometer-per-hour", 2.777777777777780E-28, "m/s", "L/T", "1.0"));
          unit.Add("SI[ym/hr]",   new UBASE("SI", "yoctometer-per-hour", 2.777777777777780E-28, "m/s", "L/T", "1.0"));
          unit.Add("SI[yoctometer-per-day]",   new UBASE("SI", "yoctometer-per-day", 1.157407407407410E-29, "m/s", "L/T", "1.0"));
          unit.Add("SI[ym/day]",   new UBASE("SI", "yoctometer-per-day", 1.157407407407410E-29, "m/s", "L/T", "1.0"));
          unit.Add("SI[yoctometer-per-month]",   new UBASE("SI", "yoctometer-per-month", 3.858024691358020E-31, "m/s", "L/T", "1.0"));
          unit.Add("SI[ym/mon]",   new UBASE("SI", "yoctometer-per-month", 3.858024691358020E-31, "m/s", "L/T", "1.0"));
          unit.Add("SI[yoctometer-per-year]",   new UBASE("SI", "yoctometer-per-year", 3.170979198376460E-32, "m/s", "L/T", "1.0"));
          unit.Add("SI[ym/yr]",   new UBASE("SI", "yoctometer-per-year", 3.170979198376460E-32, "m/s", "L/T", "1.0"));
          unit.Add("SI[whizz]",   new UBASE("SI", "whizz", 3.335640951981520E-09, "m/s", "L/T", "1.0"));
          unit.Add("SI[zeptometer-per-second]",   new UBASE("SI", "zeptometer-per-second", 1.000000000000000E-21, "m/s", "L/T", "1.0"));
          unit.Add("SI[zm/sec]",   new UBASE("SI", "zeptometer-per-second", 1.000000000000000E-21, "m/s", "L/T", "1.0"));
          unit.Add("SI[zeptometer-per-minute]",   new UBASE("SI", "zeptometer-per-minute", 1.666666666666670E-23, "m/s", "L/T", "1.0"));
          unit.Add("SI[zm/min]",   new UBASE("SI", "zeptometer-per-minute", 1.666666666666670E-23, "m/s", "L/T", "1.0"));
          unit.Add("SI[zeptometer-per-hour]",   new UBASE("SI", "zeptometer-per-hour", 2.777777777777780E-25, "m/s", "L/T", "1.0"));
          unit.Add("SI[zm/hr]",   new UBASE("SI", "zeptometer-per-hour", 2.777777777777780E-25, "m/s", "L/T", "1.0"));
          unit.Add("SI[zeptometer-per-day]",   new UBASE("SI", "zeptometer-per-day", 1.157407407407410E-26, "m/s", "L/T", "1.0"));
          unit.Add("SI[zm/day]",   new UBASE("SI", "zeptometer-per-day", 1.157407407407410E-26, "m/s", "L/T", "1.0"));
          unit.Add("SI[zeptometer-per-month]",   new UBASE("SI", "zeptometer-per-month", 3.858024691358020E-28, "m/s", "L/T", "1.0"));
          unit.Add("SI[zm/mon]",   new UBASE("SI", "zeptometer-per-month", 3.858024691358020E-28, "m/s", "L/T", "1.0"));
          unit.Add("SI[zeptometer-per-year]",   new UBASE("SI", "zeptometer-per-year", 3.170979198376460E-29, "m/s", "L/T", "1.0"));
          unit.Add("SI[zm/yr]",   new UBASE("SI", "zeptometer-per-year", 3.170979198376460E-29, "m/s", "L/T", "1.0"));
          _map.Add("velocity",   new BaseSystem("velocity", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[galileo]",   new UBASE("cgs", "galileo", 1.000000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("cgs[Gal]",   new UBASE("cgs", "galileo", 1.000000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("cgs[gal]",   new UBASE("cgs", "galileo", 1.000000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("FPS[celo]",   new UBASE("FPS", "celo", 3.048000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[inch-per-square-second]",   new UBASE("Imperial", "inch-per-square-second", 2.540000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[in/sec2]",   new UBASE("Imperial", "inch-per-square-second", 2.540000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[hand-per-square-second]",   new UBASE("Imperial", "hand-per-square-second", 1.016000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[hd/sec2]",   new UBASE("Imperial", "hand-per-square-second", 1.016000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("FPS[foot-per-square-second]",   new UBASE("FPS", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("FPS[ft/sec2]",   new UBASE("FPS", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[foot-per-square-second]",   new UBASE("Imperial", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[ft/sec2]",   new UBASE("Imperial", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[yard-per-square-second]",   new UBASE("Imperial", "yard-per-square-second", 9.144000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[yd/sec2]",   new UBASE("Imperial", "yard-per-square-second", 9.144000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[chain-per-square-second]",   new UBASE("Imperial", "chain-per-square-second", 2.011680000000000E+01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[ch/sec2]",   new UBASE("Imperial", "chain-per-square-second", 2.011680000000000E+01, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[furlong-per-square-second]",   new UBASE("Imperial", "furlong-per-square-second", 2.011680000000000E+02, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[fur/sec2]",   new UBASE("Imperial", "furlong-per-square-second", 2.011680000000000E+02, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[mile-per-square-second]",   new UBASE("Imperial", "mile-per-square-second", 1.609344000000000E+03, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[mi/sec2]",   new UBASE("Imperial", "mile-per-square-second", 1.609344000000000E+03, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[league-per-square-second]",   new UBASE("Imperial", "league-per-square-second", 4.828032000000000E+03, "m/s2", "L/T2", "1.0"));
          unit.Add("Imperial[lea/sec2]",   new UBASE("Imperial", "league-per-square-second", 4.828032000000000E+03, "m/s2", "L/T2", "1.0"));
          unit.Add("INT[gee]",   new UBASE("INT", "gee", 9.806650000000000E+00, "m/s2", "L/T2", "1.0"));
          unit.Add("INT[g]",   new UBASE("INT", "gee", 9.806650000000000E+00, "m/s2", "L/T2", "1.0"));
          unit.Add("Scientific[leo]",   new UBASE("Scientific", "leo", 1.000000000000000E+01, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[yoctometer-per-square-second]",   new UBASE("SI", "yoctometer-per-square-second", 1.000000000000000E-24, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[ym/sec2]",   new UBASE("SI", "yoctometer-per-square-second", 1.000000000000000E-24, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[zeptometer-per-square-second]",   new UBASE("SI", "zeptometer-per-square-second", 1.000000000000000E-21, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[zm/sec2]",   new UBASE("SI", "zeptometer-per-square-second", 1.000000000000000E-21, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[attometer-per-square-second]",   new UBASE("SI", "attometer-per-square-second", 1.000000000000000E-18, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[am/sec2]",   new UBASE("SI", "attometer-per-square-second", 1.000000000000000E-18, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[femtometer-per-square-second]",   new UBASE("SI", "femtometer-per-square-second", 1.000000000000000E-15, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[fm/sec2]",   new UBASE("SI", "femtometer-per-square-second", 1.000000000000000E-15, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[picometer-per-square-second]",   new UBASE("SI", "picometer-per-square-second", 1.000000000000000E-12, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[pm/sec2]",   new UBASE("SI", "picometer-per-square-second", 1.000000000000000E-12, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[nanometer-per-square-second]",   new UBASE("SI", "nanometer-per-square-second", 1.000000000000000E-09, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[nm/sec2]",   new UBASE("SI", "nanometer-per-square-second", 1.000000000000000E-09, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[micrometer-per-square-second]",   new UBASE("SI", "micrometer-per-square-second", 1.000000000000000E-06, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[um/sec2]",   new UBASE("SI", "micrometer-per-square-second", 1.000000000000000E-06, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[millimeter-per-square-second]",   new UBASE("SI", "millimeter-per-square-second", 1.000000000000000E-03, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[mm/sec2]",   new UBASE("SI", "millimeter-per-square-second", 1.000000000000000E-03, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[centimeter-per-square-second]",   new UBASE("SI", "centimeter-per-square-second", 1.000000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[cm/sec2]",   new UBASE("SI", "centimeter-per-square-second", 1.000000000000000E-02, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[decimeter-per-square-second]",   new UBASE("SI", "decimeter-per-square-second", 1.000000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[dm/sec2]",   new UBASE("SI", "decimeter-per-square-second", 1.000000000000000E-01, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[meter-per-square-second]",   new UBASE("SI", "meter-per-square-second", 1.000000000000000E+00, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[m/sec2]",   new UBASE("SI", "meter-per-square-second", 1.000000000000000E+00, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[decameter-per-square-second]",   new UBASE("SI", "decameter-per-square-second", 1.000000000000000E+01, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[dam/sec2]",   new UBASE("SI", "decameter-per-square-second", 1.000000000000000E+01, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[hectometer-per-square-second]",   new UBASE("SI", "hectometer-per-square-second", 1.000000000000000E+02, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[hm/sec2]",   new UBASE("SI", "hectometer-per-square-second", 1.000000000000000E+02, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[kilometer-per-square-second]",   new UBASE("SI", "kilometer-per-square-second", 1.000000000000000E+03, "m/s2", "L/T2", "1.0"));
          unit.Add("SI[km/sec2]",   new UBASE("SI", "kilometer-per-square-second", 1.000000000000000E+03, "m/s2", "L/T2", "1.0"));
          unit.Add("INT[normal-acceleration]",   new UBASE("INT", "normal-acceleration", 9.806650000000000E+00, "m/s2", "L/T2", "1.0"));
          unit.Add("INT[gn]",   new UBASE("INT", "normal-acceleration", 9.806650000000000E+00, "m/s2", "L/T2", "1.0"));
          _map.Add("acceleration",   new BaseSystem("acceleration", unit, "1.0"));

          unit.Clear();


          unit.Add("cgs[jerk]",   new UBASE("cgs", "jerk", 1.000000000000000E-02, "m/s3", "L/T3", "1.0"));
          unit.Add("cgs[J]",   new UBASE("cgs", "jerk", 1.000000000000000E-02, "m/s3", "L/T3", "1.0"));
          unit.Add("cgs[jolt]",   new UBASE("cgs", "jolt", 1.000000000000000E-02, "m/s3", "L/T3", "1.0"));
          unit.Add("cgs[j]",   new UBASE("cgs", "jolt", 1.000000000000000E-02, "m/s3", "L/T3", "1.0"));
          unit.Add("SI[jerk]",   new UBASE("SI", "jerk", 1.000000000000000E+00, "m/s3", "L/T3", "1.0"));
          unit.Add("SI[J]",   new UBASE("SI", "jerk", 1.000000000000000E+00, "m/s3", "L/T3", "1.0"));
          unit.Add("SI[jolt]",   new UBASE("SI", "jolt", 1.000000000000000E+00, "m/s3", "L/T3", "1.0"));
          unit.Add("SI[j]",   new UBASE("SI", "jolt", 1.000000000000000E+00, "m/s3", "L/T3", "1.0"));
          unit.Add("Imperial[jerk]",   new UBASE("Imperial", "jerk", 3.048000000000000E-01, "m/s3", "L/T3", "1.0"));
          unit.Add("Imperial[J]",   new UBASE("Imperial", "jerk", 3.048000000000000E-01, "m/s3", "L/T3", "1.0"));
          unit.Add("Imperial[jolt]",   new UBASE("Imperial", "jolt", 3.048000000000000E-01, "m/s3", "L/T3", "1.0"));
          unit.Add("Imperial[j]",   new UBASE("Imperial", "jolt", 3.048000000000000E-01, "m/s3", "L/T3", "1.0"));
          _map.Add("jerk",   new BaseSystem("jerk", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
