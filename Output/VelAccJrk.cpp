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
// File VelAccJrk.cpp
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

#include"VelAccJrk.hpp"

VelAccJrk& VelAccJrk::Instance(void)
{
    static VelAccJrk singleton;
    return singleton;
}

VelAccJrk::VelAccJrk(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["SI[attometer-per-year]"] = UBASE("SI", "attometer-per-year", 3.170979198376460E-26, "m/s", "L/T", "1.0");
   unit["SI[am/yr]"] = UBASE("SI", "attometer-per-year", 3.170979198376460E-26, "m/s", "L/T", "1.0");
   unit["SI[attometer-per-month]"] = UBASE("SI", "attometer-per-month", 3.858024691358030E-25, "m/s", "L/T", "1.0");
   unit["SI[am/mon]"] = UBASE("SI", "attometer-per-month", 3.858024691358030E-25, "m/s", "L/T", "1.0");
   unit["SI[attometer-per-day]"] = UBASE("SI", "attometer-per-day", 1.157407407407410E-23, "m/s", "L/T", "1.0");
   unit["SI[am/day]"] = UBASE("SI", "attometer-per-day", 1.157407407407410E-23, "m/s", "L/T", "1.0");
   unit["SI[attometer-per-hour]"] = UBASE("SI", "attometer-per-hour", 2.777777777777780E-22, "m/s", "L/T", "1.0");
   unit["SI[am/hr]"] = UBASE("SI", "attometer-per-hour", 2.777777777777780E-22, "m/s", "L/T", "1.0");
   unit["SI[attometer-per-minute]"] = UBASE("SI", "attometer-per-minute", 1.666666666666670E-20, "m/s", "L/T", "1.0");
   unit["SI[am/min]"] = UBASE("SI", "attometer-per-minute", 1.666666666666670E-20, "m/s", "L/T", "1.0");
   unit["SI[attometer-per-second]"] = UBASE("SI", "attometer-per-second", 1.000000000000000E-18, "m/s", "L/T", "1.0");
   unit["SI[am/sec]"] = UBASE("SI", "attometer-per-second", 1.000000000000000E-18, "m/s", "L/T", "1.0");
   unit["Scientific[benz]"] = UBASE("Scientific", "benz", 1.000000000000000E+00, "m/s", "L/T", "1.0");
   unit["Scientific[Bz]"] = UBASE("Scientific", "benz", 1.000000000000000E+00, "m/s", "L/T", "1.0");
   unit["Scientific[m/sec]"] = UBASE("Scientific", "benz", 1.000000000000000E+00, "m/s", "L/T", "1.0");
   unit["INT[bubnoff-unit]"] = UBASE("INT", "bubnoff-unit", 3.168808781402890E-14, "m/s", "L/T", "1.0");
   unit["INT[B]"] = UBASE("INT", "bubnoff-unit", 3.168808781402890E-14, "m/s", "L/T", "1.0");
   unit["INT[BU]"] = UBASE("INT", "bubnoff-unit", 3.168808781402890E-14, "m/s", "L/T", "1.0");
   unit["SI[centimeter-per-year]"] = UBASE("SI", "centimeter-per-year", 3.170979198376460E-10, "m/s", "L/T", "1.0");
   unit["SI[cm/yr]"] = UBASE("SI", "centimeter-per-year", 3.170979198376460E-10, "m/s", "L/T", "1.0");
   unit["SI[centimeter-per-month]"] = UBASE("SI", "centimeter-per-month", 3.858024691358020E-09, "m/s", "L/T", "1.0");
   unit["SI[cm/mon]"] = UBASE("SI", "centimeter-per-month", 3.858024691358020E-09, "m/s", "L/T", "1.0");
   unit["SI[centimeter-per-day]"] = UBASE("SI", "centimeter-per-day", 1.157407407407410E-07, "m/s", "L/T", "1.0");
   unit["SI[cm/day]"] = UBASE("SI", "centimeter-per-day", 1.157407407407410E-07, "m/s", "L/T", "1.0");
   unit["SI[centimeter-per-hour]"] = UBASE("SI", "centimeter-per-hour", 2.777777777777780E-06, "m/s", "L/T", "1.0");
   unit["SI[cm/hr]"] = UBASE("SI", "centimeter-per-hour", 2.777777777777780E-06, "m/s", "L/T", "1.0");
   unit["SI[centimeter-per-minute]"] = UBASE("SI", "centimeter-per-minute", 1.666666666666670E-04, "m/s", "L/T", "1.0");
   unit["SI[cm/min]"] = UBASE("SI", "centimeter-per-minute", 1.666666666666670E-04, "m/s", "L/T", "1.0");
   unit["cgs[centimeter-per-second]"] = UBASE("cgs", "centimeter-per-second", 1.000000000000000E-02, "m/s", "L/T", "1.0");
   unit["cgs[cm/sec]"] = UBASE("cgs", "centimeter-per-second", 1.000000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[chain-per-year]"] = UBASE("Imperial", "chain-per-year", 6.378995433789950E-07, "m/s", "L/T", "1.0");
   unit["Imperial[ch/yr]"] = UBASE("Imperial", "chain-per-year", 6.378995433789950E-07, "m/s", "L/T", "1.0");
   unit["Imperial[chain-per-month]"] = UBASE("Imperial", "chain-per-month", 7.761111111111110E-06, "m/s", "L/T", "1.0");
   unit["Imperial[ch/mon]"] = UBASE("Imperial", "chain-per-month", 7.761111111111110E-06, "m/s", "L/T", "1.0");
   unit["Imperial[chain-per-day]"] = UBASE("Imperial", "chain-per-day", 2.328333333333330E-04, "m/s", "L/T", "1.0");
   unit["Imperial[ch/day]"] = UBASE("Imperial", "chain-per-day", 2.328333333333330E-04, "m/s", "L/T", "1.0");
   unit["Imperial[chain-per-hour]"] = UBASE("Imperial", "chain-per-hour", 5.588000000000000E-03, "m/s", "L/T", "1.0");
   unit["Imperial[ch/hr]"] = UBASE("Imperial", "chain-per-hour", 5.588000000000000E-03, "m/s", "L/T", "1.0");
   unit["Imperial[chain-per-minute]"] = UBASE("Imperial", "chain-per-minute", 3.352800000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[ch/min]"] = UBASE("Imperial", "chain-per-minute", 3.352800000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[chain-per-second]"] = UBASE("Imperial", "chain-per-second", 2.011680000000000E+01, "m/s", "L/T", "1.0");
   unit["Imperial[ch/sec]"] = UBASE("Imperial", "chain-per-second", 2.011680000000000E+01, "m/s", "L/T", "1.0");
   unit["UK[cusec]"] = UBASE("UK", "cusec", 2.831684659200000E-02, "m/s", "L/T", "1.0");
   unit["SI[decameter-per-year]"] = UBASE("SI", "decameter-per-year", 3.170979198376460E-07, "m/s", "L/T", "1.0");
   unit["SI[dam/yr]"] = UBASE("SI", "decameter-per-year", 3.170979198376460E-07, "m/s", "L/T", "1.0");
   unit["SI[decameter-per-month]"] = UBASE("SI", "decameter-per-month", 3.858024691358020E-06, "m/s", "L/T", "1.0");
   unit["SI[dam/mon]"] = UBASE("SI", "decameter-per-month", 3.858024691358020E-06, "m/s", "L/T", "1.0");
   unit["SI[decameter-per-day]"] = UBASE("SI", "decameter-per-day", 1.157407407407410E-04, "m/s", "L/T", "1.0");
   unit["SI[dam/day]"] = UBASE("SI", "decameter-per-day", 1.157407407407410E-04, "m/s", "L/T", "1.0");
   unit["SI[decameter-per-hour]"] = UBASE("SI", "decameter-per-hour", 2.777777777777780E-03, "m/s", "L/T", "1.0");
   unit["SI[dam/hr]"] = UBASE("SI", "decameter-per-hour", 2.777777777777780E-03, "m/s", "L/T", "1.0");
   unit["SI[decameter-per-minute]"] = UBASE("SI", "decameter-per-minute", 1.666666666666670E-01, "m/s", "L/T", "1.0");
   unit["SI[dam/min]"] = UBASE("SI", "decameter-per-minute", 1.666666666666670E-01, "m/s", "L/T", "1.0");
   unit["SI[decameter-per-second]"] = UBASE("SI", "decameter-per-second", 1.000000000000000E+01, "m/s", "L/T", "1.0");
   unit["SI[dam/sec]"] = UBASE("SI", "decameter-per-second", 1.000000000000000E+01, "m/s", "L/T", "1.0");
   unit["SI[decimeter-per-year]"] = UBASE("SI", "decimeter-per-year", 3.170979198376460E-09, "m/s", "L/T", "1.0");
   unit["SI[dm/yr]"] = UBASE("SI", "decimeter-per-year", 3.170979198376460E-09, "m/s", "L/T", "1.0");
   unit["SI[decimeter-per-month]"] = UBASE("SI", "decimeter-per-month", 3.858024691358020E-08, "m/s", "L/T", "1.0");
   unit["SI[dm/mon]"] = UBASE("SI", "decimeter-per-month", 3.858024691358020E-08, "m/s", "L/T", "1.0");
   unit["SI[decimeter-per-day]"] = UBASE("SI", "decimeter-per-day", 1.157407407407410E-06, "m/s", "L/T", "1.0");
   unit["SI[dm/day]"] = UBASE("SI", "decimeter-per-day", 1.157407407407410E-06, "m/s", "L/T", "1.0");
   unit["SI[decimeter-per-hour]"] = UBASE("SI", "decimeter-per-hour", 2.777777777777780E-05, "m/s", "L/T", "1.0");
   unit["SI[dm/hr]"] = UBASE("SI", "decimeter-per-hour", 2.777777777777780E-05, "m/s", "L/T", "1.0");
   unit["SI[decimeter0per-minute]"] = UBASE("SI", "decimeter0per-minute", 1.666666666666670E-03, "m/s", "L/T", "1.0");
   unit["SI[dm/min]"] = UBASE("SI", "decimeter0per-minute", 1.666666666666670E-03, "m/s", "L/T", "1.0");
   unit["SI[decimeter-per-second]"] = UBASE("SI", "decimeter-per-second", 1.000000000000000E-01, "m/s", "L/T", "1.0");
   unit["SI[dm/sec]"] = UBASE("SI", "decimeter-per-second", 1.000000000000000E-01, "m/s", "L/T", "1.0");
   unit["SI[femtometer-per-year]"] = UBASE("SI", "femtometer-per-year", 3.170979198376460E-23, "m/s", "L/T", "1.0");
   unit["SI[fm/yr]"] = UBASE("SI", "femtometer-per-year", 3.170979198376460E-23, "m/s", "L/T", "1.0");
   unit["SI[femtometer-per-month]"] = UBASE("SI", "femtometer-per-month", 3.858024691358030E-22, "m/s", "L/T", "1.0");
   unit["SI[fm/mon]"] = UBASE("SI", "femtometer-per-month", 3.858024691358030E-22, "m/s", "L/T", "1.0");
   unit["SI[femtometer-per-day]"] = UBASE("SI", "femtometer-per-day", 1.157407407407410E-20, "m/s", "L/T", "1.0");
   unit["SI[fm/day]"] = UBASE("SI", "femtometer-per-day", 1.157407407407410E-20, "m/s", "L/T", "1.0");
   unit["SI[femtometer-per-hour]"] = UBASE("SI", "femtometer-per-hour", 2.777777777777780E-19, "m/s", "L/T", "1.0");
   unit["SI[fm/hr]"] = UBASE("SI", "femtometer-per-hour", 2.777777777777780E-19, "m/s", "L/T", "1.0");
   unit["SI[femtometer-per-minute]"] = UBASE("SI", "femtometer-per-minute", 2.777777777777780E-19, "m/s", "L/T", "1.0");
   unit["SI[fm/min]"] = UBASE("SI", "femtometer-per-minute", 2.777777777777780E-19, "m/s", "L/T", "1.0");
   unit["SI[femtometer-per-second]"] = UBASE("SI", "femtometer-per-second", 1.000000000000000E-15, "m/s", "L/T", "1.0");
   unit["SI[fm/sec]"] = UBASE("SI", "femtometer-per-second", 1.000000000000000E-15, "m/s", "L/T", "1.0");
   unit["Imperial[foot-per-year]"] = UBASE("Imperial", "foot-per-year", 9.665144596651450E-09, "m/s", "L/T", "1.0");
   unit["Imperial[ft/yr]"] = UBASE("Imperial", "foot-per-year", 9.665144596651450E-09, "m/s", "L/T", "1.0");
   unit["Imperial[fpy]"] = UBASE("Imperial", "foot-per-year", 9.665144596651450E-09, "m/s", "L/T", "1.0");
   unit["Imperial[foot-per-month]"] = UBASE("Imperial", "foot-per-month", 1.175925925925930E-07, "m/s", "L/T", "1.0");
   unit["Imperial[ft/mon]"] = UBASE("Imperial", "foot-per-month", 1.175925925925930E-07, "m/s", "L/T", "1.0");
   unit["Imperial[foot-per-day]"] = UBASE("Imperial", "foot-per-day", 3.527777777777780E-06, "m/s", "L/T", "1.0");
   unit["Imperial[ft/day]"] = UBASE("Imperial", "foot-per-day", 3.527777777777780E-06, "m/s", "L/T", "1.0");
   unit["Imperial[fpd]"] = UBASE("Imperial", "foot-per-day", 3.527777777777780E-06, "m/s", "L/T", "1.0");
   unit["Imperial[foot-per-hour]"] = UBASE("Imperial", "foot-per-hour", 8.466666666666670E-05, "m/s", "L/T", "1.0");
   unit["Imperial[ft/hr]"] = UBASE("Imperial", "foot-per-hour", 8.466666666666670E-05, "m/s", "L/T", "1.0");
   unit["Imperial[fph]"] = UBASE("Imperial", "foot-per-hour", 8.466666666666670E-05, "m/s", "L/T", "1.0");
   unit["Imperial[foot-per-minute]"] = UBASE("Imperial", "foot-per-minute", 5.080000000000000E-03, "m/s", "L/T", "1.0");
   unit["Imperial[ft/min]"] = UBASE("Imperial", "foot-per-minute", 5.080000000000000E-03, "m/s", "L/T", "1.0");
   unit["Imperial[fpm]"] = UBASE("Imperial", "foot-per-minute", 5.080000000000000E-03, "m/s", "L/T", "1.0");
   unit["Imperial[foot-per-second]"] = UBASE("Imperial", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[ft/sec]"] = UBASE("Imperial", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[fps]"] = UBASE("Imperial", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0");
   unit["FPS[foot-per-second]"] = UBASE("FPS", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0");
   unit["FPS[ft/sec]"] = UBASE("FPS", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0");
   unit["FPS[fps]"] = UBASE("FPS", "foot-per-second", 3.048000000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[furlong-per-year]"] = UBASE("Imperial", "furlong-per-year", 6.378995433789950E-06, "m/s", "L/T", "1.0");
   unit["Imperial[fur/yy]"] = UBASE("Imperial", "furlong-per-year", 6.378995433789950E-06, "m/s", "L/T", "1.0");
   unit["Imperial[furlong-per-month]"] = UBASE("Imperial", "furlong-per-month", 7.761111111111110E-05, "m/s", "L/T", "1.0");
   unit["Imperial[fur/mon]"] = UBASE("Imperial", "furlong-per-month", 7.761111111111110E-05, "m/s", "L/T", "1.0");
   unit["Imperial[furlong-per-day]"] = UBASE("Imperial", "furlong-per-day", 2.328333333333330E-03, "m/s", "L/T", "1.0");
   unit["Imperial[fur/day]"] = UBASE("Imperial", "furlong-per-day", 2.328333333333330E-03, "m/s", "L/T", "1.0");
   unit["Imperial[furlong-per-hour]"] = UBASE("Imperial", "furlong-per-hour", 5.588000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[fur/hr]"] = UBASE("Imperial", "furlong-per-hour", 5.588000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[furlong-per-minute]"] = UBASE("Imperial", "furlong-per-minute", 3.352800000000000E+00, "m/s", "L/T", "1.0");
   unit["Imperial[fur/min]"] = UBASE("Imperial", "furlong-per-minute", 3.352800000000000E+00, "m/s", "L/T", "1.0");
   unit["Imperial[furlong-per-second]"] = UBASE("Imperial", "furlong-per-second", 2.011680000000000E+02, "m/s", "L/T", "1.0");
   unit["Imperial[fur/sec]"] = UBASE("Imperial", "furlong-per-second", 2.011680000000000E+02, "m/s", "L/T", "1.0");
   unit["Imperial[hand-per-second]"] = UBASE("Imperial", "hand-per-second", 1.016000000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[hd/sec]"] = UBASE("Imperial", "hand-per-second", 1.016000000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[hand-per-minute]"] = UBASE("Imperial", "hand-per-minute", 1.693333333333330E-03, "m/s", "L/T", "1.0");
   unit["Imperial[hd/min]"] = UBASE("Imperial", "hand-per-minute", 1.693333333333330E-03, "m/s", "L/T", "1.0");
   unit["Imperial[hand-per-hour]"] = UBASE("Imperial", "hand-per-hour", 2.822222222222220E-05, "m/s", "L/T", "1.0");
   unit["Imperial[hd/hr]"] = UBASE("Imperial", "hand-per-hour", 2.822222222222220E-05, "m/s", "L/T", "1.0");
   unit["Imperial[hand-per-day]"] = UBASE("Imperial", "hand-per-day", 1.175925925925930E-06, "m/s", "L/T", "1.0");
   unit["Imperial[hd/day]"] = UBASE("Imperial", "hand-per-day", 1.175925925925930E-06, "m/s", "L/T", "1.0");
   unit["Imperial[hand-per-month]"] = UBASE("Imperial", "hand-per-month", 3.919753086419750E-08, "m/s", "L/T", "1.0");
   unit["Imperial[hd/mon]"] = UBASE("Imperial", "hand-per-month", 3.919753086419750E-08, "m/s", "L/T", "1.0");
   unit["Imperial[hand-per-year]"] = UBASE("Imperial", "hand-per-year", 3.221714865550480E-09, "m/s", "L/T", "1.0");
   unit["Imperial[hd/yr]"] = UBASE("Imperial", "hand-per-year", 3.221714865550480E-09, "m/s", "L/T", "1.0");
   unit["SI[hectometer-per-year]"] = UBASE("SI", "hectometer-per-year", 3.170979198376460E-06, "m/s", "L/T", "1.0");
   unit["SI[hm/yr]"] = UBASE("SI", "hectometer-per-year", 3.170979198376460E-06, "m/s", "L/T", "1.0");
   unit["SI[hectometer-per-month]"] = UBASE("SI", "hectometer-per-month", 3.858024691358020E-05, "m/s", "L/T", "1.0");
   unit["SI[hm/mon]"] = UBASE("SI", "hectometer-per-month", 3.858024691358020E-05, "m/s", "L/T", "1.0");
   unit["SI[hectometer-per-day]"] = UBASE("SI", "hectometer-per-day", 1.157407407407410E-03, "m/s", "L/T", "1.0");
   unit["SI[hm/day]"] = UBASE("SI", "hectometer-per-day", 1.157407407407410E-03, "m/s", "L/T", "1.0");
   unit["SI[hectometer-per-hour]"] = UBASE("SI", "hectometer-per-hour", 2.777777777777780E-02, "m/s", "L/T", "1.0");
   unit["SI[hm/hr]"] = UBASE("SI", "hectometer-per-hour", 2.777777777777780E-02, "m/s", "L/T", "1.0");
   unit["SI[hectometer-per-minute]"] = UBASE("SI", "hectometer-per-minute", 1.666666666666670E+00, "m/s", "L/T", "1.0");
   unit["SI[hm/min]"] = UBASE("SI", "hectometer-per-minute", 1.666666666666670E+00, "m/s", "L/T", "1.0");
   unit["SI[hectometer-per-second]"] = UBASE("SI", "hectometer-per-second", 1.000000000000000E+02, "m/s", "L/T", "1.0");
   unit["SI[hm/sec]"] = UBASE("SI", "hectometer-per-second", 1.000000000000000E+02, "m/s", "L/T", "1.0");
   unit["Imperial[inch-per-second]"] = UBASE("Imperial", "inch-per-second", 2.540000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[in/sec]"] = UBASE("Imperial", "inch-per-second", 2.540000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[ips]"] = UBASE("Imperial", "inch-per-second", 2.540000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[inch-per-minute]"] = UBASE("Imperial", "inch-per-minute", 4.233333333333330E-04, "m/s", "L/T", "1.0");
   unit["Imperial[in/min]"] = UBASE("Imperial", "inch-per-minute", 4.233333333333330E-04, "m/s", "L/T", "1.0");
   unit["Imperial[inch-per-hour]"] = UBASE("Imperial", "inch-per-hour", 7.055555555555560E-06, "m/s", "L/T", "1.0");
   unit["Imperial[in/hr]"] = UBASE("Imperial", "inch-per-hour", 7.055555555555560E-06, "m/s", "L/T", "1.0");
   unit["Imperial[inch-per-day]"] = UBASE("Imperial", "inch-per-day", 2.939814814814810E-07, "m/s", "L/T", "1.0");
   unit["Imperial[in/day]"] = UBASE("Imperial", "inch-per-day", 2.939814814814810E-07, "m/s", "L/T", "1.0");
   unit["Imperial[inch-per-month]"] = UBASE("Imperial", "inch-per-month", 9.799382716049380E-09, "m/s", "L/T", "1.0");
   unit["Imperial[in/mon]"] = UBASE("Imperial", "inch-per-month", 9.799382716049380E-09, "m/s", "L/T", "1.0");
   unit["Imperial[inch-per-year]"] = UBASE("Imperial", "inch-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0");
   unit["Imperial[in/yr]"] = UBASE("Imperial", "inch-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0");
   unit["SI[kilometer-per-year]"] = UBASE("SI", "kilometer-per-year", 3.170979198376460E-05, "m/s", "L/T", "1.0");
   unit["SI[km/yr]"] = UBASE("SI", "kilometer-per-year", 3.170979198376460E-05, "m/s", "L/T", "1.0");
   unit["SI[kilometer-per-month]"] = UBASE("SI", "kilometer-per-month", 1.157407407407410E-02, "m/s", "L/T", "1.0");
   unit["SI[km/mon]"] = UBASE("SI", "kilometer-per-month", 1.157407407407410E-02, "m/s", "L/T", "1.0");
   unit["SI[kilometer-per-day]"] = UBASE("SI", "kilometer-per-day", 3.858024691358020E-04, "m/s", "L/T", "1.0");
   unit["SI[km/day]"] = UBASE("SI", "kilometer-per-day", 3.858024691358020E-04, "m/s", "L/T", "1.0");
   unit["SI[kilometer-per-hour]"] = UBASE("SI", "kilometer-per-hour", 2.777777777777780E-01, "m/s", "L/T", "1.0");
   unit["SI[km/hr]"] = UBASE("SI", "kilometer-per-hour", 2.777777777777780E-01, "m/s", "L/T", "1.0");
   unit["SI[kilometer-per-minute]"] = UBASE("SI", "kilometer-per-minute", 1.666666666666670E+01, "m/s", "L/T", "1.0");
   unit["SI[km/min]"] = UBASE("SI", "kilometer-per-minute", 1.666666666666670E+01, "m/s", "L/T", "1.0");
   unit["SI[kilometer-per-second]"] = UBASE("SI", "kilometer-per-second", 1.000000000000000E+03, "m/s", "L/T", "1.0");
   unit["SI[km/sec]"] = UBASE("SI", "kilometer-per-second", 1.000000000000000E+03, "m/s", "L/T", "1.0");
   unit["cgs[kine]"] = UBASE("cgs", "kine", 1.000000000000000E-02, "m/s", "L/T", "1.0");
   unit["UK[knot]"] = UBASE("UK", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0");
   unit["UK[kn]"] = UBASE("UK", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0");
   unit["US[knot]"] = UBASE("US", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0");
   unit["US[kn]"] = UBASE("US", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0");
   unit["Imperial[knot]"] = UBASE("Imperial", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0");
   unit["Imperial[kn]"] = UBASE("Imperial", "knot", 5.147733333333330E-01, "m/s", "L/T", "1.0");
   unit["Scientific[kyne]"] = UBASE("Scientific", "kyne", 1.000000000000000E-02, "m/s", "L/T", "1.0");
   unit["Scientific[cm/s]"] = UBASE("Scientific", "kyne", 1.000000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[league-per-year]"] = UBASE("Imperial", "league-per-year", 1.530958904109590E-04, "m/s", "L/T", "1.0");
   unit["Imperial[leag/yr]"] = UBASE("Imperial", "league-per-year", 1.530958904109590E-04, "m/s", "L/T", "1.0");
   unit["Imperial[league-per-month]"] = UBASE("Imperial", "league-per-month", 1.862666666666670E-03, "m/s", "L/T", "1.0");
   unit["Imperial[leag/mon]"] = UBASE("Imperial", "league-per-month", 1.862666666666670E-03, "m/s", "L/T", "1.0");
   unit["Imperial[league-per-day]"] = UBASE("Imperial", "league-per-day", 5.588000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[leag/day]"] = UBASE("Imperial", "league-per-day", 5.588000000000000E-02, "m/s", "L/T", "1.0");
   unit["Imperial[league-per-hour]"] = UBASE("Imperial", "league-per-hour", 1.341120000000000E+00, "m/s", "L/T", "1.0");
   unit["Imperial[leag/hr]"] = UBASE("Imperial", "league-per-hour", 1.341120000000000E+00, "m/s", "L/T", "1.0");
   unit["Imperial[league-per-minute]"] = UBASE("Imperial", "league-per-minute", 8.046720000000000E+01, "m/s", "L/T", "1.0");
   unit["Imperial[leag/min]"] = UBASE("Imperial", "league-per-minute", 8.046720000000000E+01, "m/s", "L/T", "1.0");
   unit["Imperial[league-per-second]"] = UBASE("Imperial", "league-per-second", 4.828032000000000E+03, "m/s", "L/T", "1.0");
   unit["Imperial[leag/sec]"] = UBASE("Imperial", "league-per-second", 4.828032000000000E+03, "m/s", "L/T", "1.0");
   unit["INT[mach]"] = UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0");
   unit["INT[M]"] = UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0");
   unit["INT[Ma]"] = UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0");
   unit["INT[Nma]"] = UBASE("INT", "mach", 3.426036485503330E+02, "m/s", "L/T", "1.0");
   unit["SI[micrometer-per-second]"] = UBASE("SI", "micrometer-per-second", 1.000000000000000E-06, "m/s", "L/T", "1.0");
   unit["SI[um/sec]"] = UBASE("SI", "micrometer-per-second", 1.000000000000000E-06, "m/s", "L/T", "1.0");
   unit["SI[micrometer-per-minute]"] = UBASE("SI", "micrometer-per-minute", 1.666666666666670E-08, "m/s", "L/T", "1.0");
   unit["SI[um/min]"] = UBASE("SI", "micrometer-per-minute", 1.666666666666670E-08, "m/s", "L/T", "1.0");
   unit["SI[micrometer-per-hour]"] = UBASE("SI", "micrometer-per-hour", 2.777777777777780E-10, "m/s", "L/T", "1.0");
   unit["SI[um/hr]"] = UBASE("SI", "micrometer-per-hour", 2.777777777777780E-10, "m/s", "L/T", "1.0");
   unit["SI[micrometer-per-day]"] = UBASE("SI", "micrometer-per-day", 1.157407407407410E-11, "m/s", "L/T", "1.0");
   unit["SI[um/day]"] = UBASE("SI", "micrometer-per-day", 1.157407407407410E-11, "m/s", "L/T", "1.0");
   unit["SI[micrometer-per-month]"] = UBASE("SI", "micrometer-per-month", 3.858024691358020E-13, "m/s", "L/T", "1.0");
   unit["SI[um/mon]"] = UBASE("SI", "micrometer-per-month", 3.858024691358020E-13, "m/s", "L/T", "1.0");
   unit["SI[micrometer-per-year]"] = UBASE("SI", "micrometer-per-year", 3.170979198376460E-14, "m/s", "L/T", "1.0");
   unit["SI[um/yr]"] = UBASE("SI", "micrometer-per-year", 3.170979198376460E-14, "m/s", "L/T", "1.0");
   unit["SI[millimeter-per-second]"] = UBASE("SI", "millimeter-per-second", 1.000000000000000E-03, "m/s", "L/T", "1.0");
   unit["SI[mm/sec]"] = UBASE("SI", "millimeter-per-second", 1.000000000000000E-03, "m/s", "L/T", "1.0");
   unit["SI[millimeter-per-minute]"] = UBASE("SI", "millimeter-per-minute", 1.666666666666670E-05, "m/s", "L/T", "1.0");
   unit["SI[mm/min]"] = UBASE("SI", "millimeter-per-minute", 1.666666666666670E-05, "m/s", "L/T", "1.0");
   unit["SI[millimeter-per-hour]"] = UBASE("SI", "millimeter-per-hour", 2.777777777777780E-07, "m/s", "L/T", "1.0");
   unit["SI[mm/hr]"] = UBASE("SI", "millimeter-per-hour", 2.777777777777780E-07, "m/s", "L/T", "1.0");
   unit["SI[millimeter-per-day]"] = UBASE("SI", "millimeter-per-day", 1.157407407407410E-08, "m/s", "L/T", "1.0");
   unit["SI[mm/day]"] = UBASE("SI", "millimeter-per-day", 1.157407407407410E-08, "m/s", "L/T", "1.0");
   unit["SI[millimeter-per-month]"] = UBASE("SI", "millimeter-per-month", 3.858024691358020E-10, "m/s", "L/T", "1.0");
   unit["SI[mm/mon]"] = UBASE("SI", "millimeter-per-month", 3.858024691358020E-10, "m/s", "L/T", "1.0");
   unit["SI[millimeter-per-year]"] = UBASE("SI", "millimeter-per-year", 3.170979198376460E-11, "m/s", "L/T", "1.0");
   unit["SI[mm/yr]"] = UBASE("SI", "millimeter-per-year", 3.170979198376460E-11, "m/s", "L/T", "1.0");
   unit["SI[megameter-per-second]"] = UBASE("SI", "megameter-per-second", 1.000000000000000E+06, "m/s", "L/T", "1.0");
   unit["SI[Mm/sec]"] = UBASE("SI", "megameter-per-second", 1.000000000000000E+06, "m/s", "L/T", "1.0");
   unit["SI[megameter-per-minute]"] = UBASE("SI", "megameter-per-minute", 1.666666666666670E+04, "m/s", "L/T", "1.0");
   unit["SI[Mm/min]"] = UBASE("SI", "megameter-per-minute", 1.666666666666670E+04, "m/s", "L/T", "1.0");
   unit["SI[megameter-per-hour]"] = UBASE("SI", "megameter-per-hour", 2.777777777777780E+02, "m/s", "L/T", "1.0");
   unit["SI[Mm/hr]"] = UBASE("SI", "megameter-per-hour", 2.777777777777780E+02, "m/s", "L/T", "1.0");
   unit["SI[megameter-per-day]"] = UBASE("SI", "megameter-per-day", 1.157407407407410E+01, "m/s", "L/T", "1.0");
   unit["SI[Mm/day]"] = UBASE("SI", "megameter-per-day", 1.157407407407410E+01, "m/s", "L/T", "1.0");
   unit["SI[megameter-per-month]"] = UBASE("SI", "megameter-per-month", 3.858024691358020E-01, "m/s", "L/T", "1.0");
   unit["SI[Mm/mon]"] = UBASE("SI", "megameter-per-month", 3.858024691358020E-01, "m/s", "L/T", "1.0");
   unit["SI[megameter-per-year]"] = UBASE("SI", "megameter-per-year", 3.170979198376460E-02, "m/s", "L/T", "1.0");
   unit["SI[Mm/yr]"] = UBASE("SI", "megameter-per-year", 3.170979198376460E-02, "m/s", "L/T", "1.0");
   unit["SI[meter-per-second]"] = UBASE("SI", "meter-per-second", 1.000000000000000E+00, "m/s", "L/T", "1.0");
   unit["SI[m/sec]"] = UBASE("SI", "meter-per-second", 1.000000000000000E+00, "m/s", "L/T", "1.0");
   unit["SI[meter-per-minute]"] = UBASE("SI", "meter-per-minute", 1.666666666666670E-02, "m/s", "L/T", "1.0");
   unit["SI[m/min]"] = UBASE("SI", "meter-per-minute", 1.666666666666670E-02, "m/s", "L/T", "1.0");
   unit["SI[meter-per-hour]"] = UBASE("SI", "meter-per-hour", 2.777777777777780E-04, "m/s", "L/T", "1.0");
   unit["SI[m/hr]"] = UBASE("SI", "meter-per-hour", 2.777777777777780E-04, "m/s", "L/T", "1.0");
   unit["SI[meter-per-day]"] = UBASE("SI", "meter-per-day", 1.157407407407410E-05, "m/s", "L/T", "1.0");
   unit["SI[m/day]"] = UBASE("SI", "meter-per-day", 1.157407407407410E-05, "m/s", "L/T", "1.0");
   unit["SI[meter-per-month]"] = UBASE("SI", "meter-per-month", 3.858024691358020E-07, "m/s", "L/T", "1.0");
   unit["SI[m/mon]"] = UBASE("SI", "meter-per-month", 3.858024691358020E-07, "m/s", "L/T", "1.0");
   unit["SI[meter-per-year]"] = UBASE("SI", "meter-per-year", 3.170979198376460E-08, "m/s", "L/T", "1.0");
   unit["SI[m/yr]"] = UBASE("SI", "meter-per-year", 3.170979198376460E-08, "m/s", "L/T", "1.0");
   unit["Imperial[mil-per-year]"] = UBASE("Imperial", "mil-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0");
   unit["Imperial[mpy]"] = UBASE("Imperial", "mil-per-year", 8.054287163876210E-10, "m/s", "L/T", "1.0");
   unit["Imperial[mile-per-second]"] = UBASE("Imperial", "mile-per-second", 1.609344000000000E+03, "m/s", "L/T", "1.0");
   unit["Imperial[mi/sec]"] = UBASE("Imperial", "mile-per-second", 1.609344000000000E+03, "m/s", "L/T", "1.0");
   unit["Imperial[mile-per-minute]"] = UBASE("Imperial", "mile-per-minute", 2.682240000000000E+01, "m/s", "L/T", "1.0");
   unit["Imperial[mi/min]"] = UBASE("Imperial", "mile-per-minute", 2.682240000000000E+01, "m/s", "L/T", "1.0");
   unit["Imperial[mile-per-hour]"] = UBASE("Imperial", "mile-per-hour", 4.470400000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[mph]"] = UBASE("Imperial", "mile-per-hour", 4.470400000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[mi/hr]"] = UBASE("Imperial", "mile-per-hour", 4.470400000000000E-01, "m/s", "L/T", "1.0");
   unit["Imperial[mile-per-day]"] = UBASE("Imperial", "mile-per-day", 1.862666666666670E-02, "m/s", "L/T", "1.0");
   unit["Imperial[mi/day]"] = UBASE("Imperial", "mile-per-day", 1.862666666666670E-02, "m/s", "L/T", "1.0");
   unit["Imperial[mile-per-month]"] = UBASE("Imperial", "mile-per-month", 6.208888888888890E-04, "m/s", "L/T", "1.0");
   unit["Imperial[mi/mon]"] = UBASE("Imperial", "mile-per-month", 6.208888888888890E-04, "m/s", "L/T", "1.0");
   unit["Imperial[mile-per-year]"] = UBASE("Imperial", "mile-per-year", 5.103196347031960E-05, "m/s", "L/T", "1.0");
   unit["Imperial[mi/yr]"] = UBASE("Imperial", "mile-per-year", 5.103196347031960E-05, "m/s", "L/T", "1.0");
   unit["Scientific[milligram-per-square-decimeter-per-day]"] = UBASE("Scientific", "milligram-per-square-decimeter-per-day", 1.157407407407410E-09, "m/s", "L/T", "1.0");
   unit["Scientific[mg/dm2-day]"] = UBASE("Scientific", "milligram-per-square-decimeter-per-day", 1.157407407407410E-09, "m/s", "L/T", "1.0");
   unit["SI[nanometer-per-second]"] = UBASE("SI", "nanometer-per-second", 1.000000000000000E-09, "m/s", "L/T", "1.0");
   unit["SI[nm/sec]"] = UBASE("SI", "nanometer-per-second", 1.000000000000000E-09, "m/s", "L/T", "1.0");
   unit["SI[nanometer-per-minute]"] = UBASE("SI", "nanometer-per-minute", 1.666666666666670E-11, "m/s", "L/T", "1.0");
   unit["SI[nm/min]"] = UBASE("SI", "nanometer-per-minute", 1.666666666666670E-11, "m/s", "L/T", "1.0");
   unit["SI[nanometer-per-hour]"] = UBASE("SI", "nanometer-per-hour", 2.777777777777780E-13, "m/s", "L/T", "1.0");
   unit["SI[nm/hr]"] = UBASE("SI", "nanometer-per-hour", 2.777777777777780E-13, "m/s", "L/T", "1.0");
   unit["SI[nanometer-per-day]"] = UBASE("SI", "nanometer-per-day", 1.157407407407410E-14, "m/s", "L/T", "1.0");
   unit["SI[nm/day]"] = UBASE("SI", "nanometer-per-day", 1.157407407407410E-14, "m/s", "L/T", "1.0");
   unit["SI[nanometer-per-month]"] = UBASE("SI", "nanometer-per-month", 3.858024691358030E-16, "m/s", "L/T", "1.0");
   unit["SI[nm/mon]"] = UBASE("SI", "nanometer-per-month", 3.858024691358030E-16, "m/s", "L/T", "1.0");
   unit["SI[nanometer-per-year]"] = UBASE("SI", "nanometer-per-year", 3.170979198376460E-17, "m/s", "L/T", "1.0");
   unit["SI[nm/yr]"] = UBASE("SI", "nanometer-per-year", 3.170979198376460E-17, "m/s", "L/T", "1.0");
   unit["INT[nautical-mile-per-hour]"] = UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0");
   unit["INT[kn]"] = UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0");
   unit["INT[knot]"] = UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0");
   unit["INT[nmph]"] = UBASE("INT", "nautical-mile-per-hour", 5.144444444444440E-01, "m/s", "L/T", "1.0");
   unit["INT[noeud]"] = UBASE("INT", "noeud", 5.144444444444440E-01, "m/s", "L/T", "1.0");
   unit["SI[picometer-per-second]"] = UBASE("SI", "picometer-per-second", 1.000000000000000E-12, "m/s", "L/T", "1.0");
   unit["SI[pm/sec]"] = UBASE("SI", "picometer-per-second", 1.000000000000000E-12, "m/s", "L/T", "1.0");
   unit["SI[picometer-per-minute]"] = UBASE("SI", "picometer-per-minute", 1.666666666666670E-14, "m/s", "L/T", "1.0");
   unit["SI[pm/min]"] = UBASE("SI", "picometer-per-minute", 1.666666666666670E-14, "m/s", "L/T", "1.0");
   unit["SI[picometer-per-hour]"] = UBASE("SI", "picometer-per-hour", 2.777777777777780E-16, "m/s", "L/T", "1.0");
   unit["SI[pm/hr]"] = UBASE("SI", "picometer-per-hour", 2.777777777777780E-16, "m/s", "L/T", "1.0");
   unit["SI[picometer-per-day]"] = UBASE("SI", "picometer-per-day", 1.157407407407410E-17, "m/s", "L/T", "1.0");
   unit["SI[pm/day]"] = UBASE("SI", "picometer-per-day", 1.157407407407410E-17, "m/s", "L/T", "1.0");
   unit["SI[picometer-per-month]"] = UBASE("SI", "picometer-per-month", 3.858024691358020E-19, "m/s", "L/T", "1.0");
   unit["SI[pm/mon]"] = UBASE("SI", "picometer-per-month", 3.858024691358020E-19, "m/s", "L/T", "1.0");
   unit["SI[picometer-per-year]"] = UBASE("SI", "picometer-per-year", 3.170979198376460E-20, "m/s", "L/T", "1.0");
   unit["SI[pm/yr]"] = UBASE("SI", "picometer-per-year", 3.170979198376460E-20, "m/s", "L/T", "1.0");
   unit["Scientific[speed-of-light]"] = UBASE("Scientific", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0");
   unit["Scientific[c]"] = UBASE("Scientific", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0");
   unit["Scientific[lightspeed]"] = UBASE("Scientific", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0");
   unit["Scientific[svedberg]"] = UBASE("Scientific", "svedberg", 1.000000000000000E-15, "m/s", "L/T", "1.0");
   unit["Scientific[Sv]"] = UBASE("Scientific", "svedberg", 1.000000000000000E-15, "m/s", "L/T", "1.0");
   unit["Scientific[yard-per-second]"] = UBASE("Scientific", "yard-per-second", 9.144000000000000E-01, "m/s", "L/T", "1.0");
   unit["Scientific[yd/sec]"] = UBASE("Scientific", "yard-per-second", 9.144000000000000E-01, "m/s", "L/T", "1.0");
   unit["Scientific[yard-per-minute]"] = UBASE("Scientific", "yard-per-minute", 1.524000000000000E-02, "m/s", "L/T", "1.0");
   unit["Scientific[yd/min]"] = UBASE("Scientific", "yard-per-minute", 1.524000000000000E-02, "m/s", "L/T", "1.0");
   unit["Scientific[yard-per-hour]"] = UBASE("Scientific", "yard-per-hour", 2.540000000000000E-04, "m/s", "L/T", "1.0");
   unit["Scientific[yd/hr]"] = UBASE("Scientific", "yard-per-hour", 2.540000000000000E-04, "m/s", "L/T", "1.0");
   unit["Scientific[yard-per-day]"] = UBASE("Scientific", "yard-per-day", 1.058333333333330E-05, "m/s", "L/T", "1.0");
   unit["Scientific[yd/day]"] = UBASE("Scientific", "yard-per-day", 1.058333333333330E-05, "m/s", "L/T", "1.0");
   unit["Scientific[yard-per-month]"] = UBASE("Scientific", "yard-per-month", 3.527777777777780E-07, "m/s", "L/T", "1.0");
   unit["Scientific[yd/mon]"] = UBASE("Scientific", "yard-per-month", 3.527777777777780E-07, "m/s", "L/T", "1.0");
   unit["Scientific[yard-per-year]"] = UBASE("Scientific", "yard-per-year", 2.899543378995430E-08, "m/s", "L/T", "1.0");
   unit["Scientific[yd/yr]"] = UBASE("Scientific", "yard-per-year", 2.899543378995430E-08, "m/s", "L/T", "1.0");
   unit["SI[yoctometer-per-second]"] = UBASE("SI", "yoctometer-per-second", 1.000000000000000E-24, "m/s", "L/T", "1.0");
   unit["SI[ym/sec]"] = UBASE("SI", "yoctometer-per-second", 1.000000000000000E-24, "m/s", "L/T", "1.0");
   unit["SI[yoctometer-per-minute]"] = UBASE("SI", "yoctometer-per-minute", 1.666666666666670E-26, "m/s", "L/T", "1.0");
   unit["SI[ym/min]"] = UBASE("SI", "yoctometer-per-minute", 1.666666666666670E-26, "m/s", "L/T", "1.0");
   unit["SI[yoctometer-per-hour]"] = UBASE("SI", "yoctometer-per-hour", 2.777777777777780E-28, "m/s", "L/T", "1.0");
   unit["SI[ym/hr]"] = UBASE("SI", "yoctometer-per-hour", 2.777777777777780E-28, "m/s", "L/T", "1.0");
   unit["SI[yoctometer-per-day]"] = UBASE("SI", "yoctometer-per-day", 1.157407407407410E-29, "m/s", "L/T", "1.0");
   unit["SI[ym/day]"] = UBASE("SI", "yoctometer-per-day", 1.157407407407410E-29, "m/s", "L/T", "1.0");
   unit["SI[yoctometer-per-month]"] = UBASE("SI", "yoctometer-per-month", 3.858024691358020E-31, "m/s", "L/T", "1.0");
   unit["SI[ym/mon]"] = UBASE("SI", "yoctometer-per-month", 3.858024691358020E-31, "m/s", "L/T", "1.0");
   unit["SI[yoctometer-per-year]"] = UBASE("SI", "yoctometer-per-year", 3.170979198376460E-32, "m/s", "L/T", "1.0");
   unit["SI[ym/yr]"] = UBASE("SI", "yoctometer-per-year", 3.170979198376460E-32, "m/s", "L/T", "1.0");
   unit["SI[whizz]"] = UBASE("SI", "whizz", 3.335640951981520E-09, "m/s", "L/T", "1.0");
   unit["SI[zeptometer-per-second]"] = UBASE("SI", "zeptometer-per-second", 1.000000000000000E-21, "m/s", "L/T", "1.0");
   unit["SI[zm/sec]"] = UBASE("SI", "zeptometer-per-second", 1.000000000000000E-21, "m/s", "L/T", "1.0");
   unit["SI[zeptometer-per-minute]"] = UBASE("SI", "zeptometer-per-minute", 1.666666666666670E-23, "m/s", "L/T", "1.0");
   unit["SI[zm/min]"] = UBASE("SI", "zeptometer-per-minute", 1.666666666666670E-23, "m/s", "L/T", "1.0");
   unit["SI[zeptometer-per-hour]"] = UBASE("SI", "zeptometer-per-hour", 2.777777777777780E-25, "m/s", "L/T", "1.0");
   unit["SI[zm/hr]"] = UBASE("SI", "zeptometer-per-hour", 2.777777777777780E-25, "m/s", "L/T", "1.0");
   unit["SI[zeptometer-per-day]"] = UBASE("SI", "zeptometer-per-day", 1.157407407407410E-26, "m/s", "L/T", "1.0");
   unit["SI[zm/day]"] = UBASE("SI", "zeptometer-per-day", 1.157407407407410E-26, "m/s", "L/T", "1.0");
   unit["SI[zeptometer-per-month]"] = UBASE("SI", "zeptometer-per-month", 3.858024691358020E-28, "m/s", "L/T", "1.0");
   unit["SI[zm/mon]"] = UBASE("SI", "zeptometer-per-month", 3.858024691358020E-28, "m/s", "L/T", "1.0");
   unit["SI[zeptometer-per-year]"] = UBASE("SI", "zeptometer-per-year", 3.170979198376460E-29, "m/s", "L/T", "1.0");
   unit["SI[zm/yr]"] = UBASE("SI", "zeptometer-per-year", 3.170979198376460E-29, "m/s", "L/T", "1.0");
   _map["velocity"] = BaseSystem("velocity", unit, "1.0");

   unit.clear();


   unit["cgs[galileo]"] = UBASE("cgs", "galileo", 1.000000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["cgs[Gal]"] = UBASE("cgs", "galileo", 1.000000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["cgs[gal]"] = UBASE("cgs", "galileo", 1.000000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["FPS[celo]"] = UBASE("FPS", "celo", 3.048000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[inch-per-square-second]"] = UBASE("Imperial", "inch-per-square-second", 2.540000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["Imperial[in/sec2]"] = UBASE("Imperial", "inch-per-square-second", 2.540000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["Imperial[hand-per-square-second]"] = UBASE("Imperial", "hand-per-square-second", 1.016000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[hd/sec2]"] = UBASE("Imperial", "hand-per-square-second", 1.016000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["FPS[foot-per-square-second]"] = UBASE("FPS", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["FPS[ft/sec2]"] = UBASE("FPS", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[foot-per-square-second]"] = UBASE("Imperial", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[ft/sec2]"] = UBASE("Imperial", "foot-per-square-second", 3.048000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[yard-per-square-second]"] = UBASE("Imperial", "yard-per-square-second", 9.144000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[yd/sec2]"] = UBASE("Imperial", "yard-per-square-second", 9.144000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["Imperial[chain-per-square-second]"] = UBASE("Imperial", "chain-per-square-second", 2.011680000000000E+01, "m/s2", "L/T2", "1.0");
   unit["Imperial[ch/sec2]"] = UBASE("Imperial", "chain-per-square-second", 2.011680000000000E+01, "m/s2", "L/T2", "1.0");
   unit["Imperial[furlong-per-square-second]"] = UBASE("Imperial", "furlong-per-square-second", 2.011680000000000E+02, "m/s2", "L/T2", "1.0");
   unit["Imperial[fur/sec2]"] = UBASE("Imperial", "furlong-per-square-second", 2.011680000000000E+02, "m/s2", "L/T2", "1.0");
   unit["Imperial[mile-per-square-second]"] = UBASE("Imperial", "mile-per-square-second", 1.609344000000000E+03, "m/s2", "L/T2", "1.0");
   unit["Imperial[mi/sec2]"] = UBASE("Imperial", "mile-per-square-second", 1.609344000000000E+03, "m/s2", "L/T2", "1.0");
   unit["Imperial[league-per-square-second]"] = UBASE("Imperial", "league-per-square-second", 4.828032000000000E+03, "m/s2", "L/T2", "1.0");
   unit["Imperial[lea/sec2]"] = UBASE("Imperial", "league-per-square-second", 4.828032000000000E+03, "m/s2", "L/T2", "1.0");
   unit["INT[gee]"] = UBASE("INT", "gee", 9.806650000000000E+00, "m/s2", "L/T2", "1.0");
   unit["INT[g]"] = UBASE("INT", "gee", 9.806650000000000E+00, "m/s2", "L/T2", "1.0");
   unit["Scientific[leo]"] = UBASE("Scientific", "leo", 1.000000000000000E+01, "m/s2", "L/T2", "1.0");
   unit["SI[yoctometer-per-square-second]"] = UBASE("SI", "yoctometer-per-square-second", 1.000000000000000E-24, "m/s2", "L/T2", "1.0");
   unit["SI[ym/sec2]"] = UBASE("SI", "yoctometer-per-square-second", 1.000000000000000E-24, "m/s2", "L/T2", "1.0");
   unit["SI[zeptometer-per-square-second]"] = UBASE("SI", "zeptometer-per-square-second", 1.000000000000000E-21, "m/s2", "L/T2", "1.0");
   unit["SI[zm/sec2]"] = UBASE("SI", "zeptometer-per-square-second", 1.000000000000000E-21, "m/s2", "L/T2", "1.0");
   unit["SI[attometer-per-square-second]"] = UBASE("SI", "attometer-per-square-second", 1.000000000000000E-18, "m/s2", "L/T2", "1.0");
   unit["SI[am/sec2]"] = UBASE("SI", "attometer-per-square-second", 1.000000000000000E-18, "m/s2", "L/T2", "1.0");
   unit["SI[femtometer-per-square-second]"] = UBASE("SI", "femtometer-per-square-second", 1.000000000000000E-15, "m/s2", "L/T2", "1.0");
   unit["SI[fm/sec2]"] = UBASE("SI", "femtometer-per-square-second", 1.000000000000000E-15, "m/s2", "L/T2", "1.0");
   unit["SI[picometer-per-square-second]"] = UBASE("SI", "picometer-per-square-second", 1.000000000000000E-12, "m/s2", "L/T2", "1.0");
   unit["SI[pm/sec2]"] = UBASE("SI", "picometer-per-square-second", 1.000000000000000E-12, "m/s2", "L/T2", "1.0");
   unit["SI[nanometer-per-square-second]"] = UBASE("SI", "nanometer-per-square-second", 1.000000000000000E-09, "m/s2", "L/T2", "1.0");
   unit["SI[nm/sec2]"] = UBASE("SI", "nanometer-per-square-second", 1.000000000000000E-09, "m/s2", "L/T2", "1.0");
   unit["SI[micrometer-per-square-second]"] = UBASE("SI", "micrometer-per-square-second", 1.000000000000000E-06, "m/s2", "L/T2", "1.0");
   unit["SI[um/sec2]"] = UBASE("SI", "micrometer-per-square-second", 1.000000000000000E-06, "m/s2", "L/T2", "1.0");
   unit["SI[millimeter-per-square-second]"] = UBASE("SI", "millimeter-per-square-second", 1.000000000000000E-03, "m/s2", "L/T2", "1.0");
   unit["SI[mm/sec2]"] = UBASE("SI", "millimeter-per-square-second", 1.000000000000000E-03, "m/s2", "L/T2", "1.0");
   unit["SI[centimeter-per-square-second]"] = UBASE("SI", "centimeter-per-square-second", 1.000000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["SI[cm/sec2]"] = UBASE("SI", "centimeter-per-square-second", 1.000000000000000E-02, "m/s2", "L/T2", "1.0");
   unit["SI[decimeter-per-square-second]"] = UBASE("SI", "decimeter-per-square-second", 1.000000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["SI[dm/sec2]"] = UBASE("SI", "decimeter-per-square-second", 1.000000000000000E-01, "m/s2", "L/T2", "1.0");
   unit["SI[meter-per-square-second]"] = UBASE("SI", "meter-per-square-second", 1.000000000000000E+00, "m/s2", "L/T2", "1.0");
   unit["SI[m/sec2]"] = UBASE("SI", "meter-per-square-second", 1.000000000000000E+00, "m/s2", "L/T2", "1.0");
   unit["SI[decameter-per-square-second]"] = UBASE("SI", "decameter-per-square-second", 1.000000000000000E+01, "m/s2", "L/T2", "1.0");
   unit["SI[dam/sec2]"] = UBASE("SI", "decameter-per-square-second", 1.000000000000000E+01, "m/s2", "L/T2", "1.0");
   unit["SI[hectometer-per-square-second]"] = UBASE("SI", "hectometer-per-square-second", 1.000000000000000E+02, "m/s2", "L/T2", "1.0");
   unit["SI[hm/sec2]"] = UBASE("SI", "hectometer-per-square-second", 1.000000000000000E+02, "m/s2", "L/T2", "1.0");
   unit["SI[kilometer-per-square-second]"] = UBASE("SI", "kilometer-per-square-second", 1.000000000000000E+03, "m/s2", "L/T2", "1.0");
   unit["SI[km/sec2]"] = UBASE("SI", "kilometer-per-square-second", 1.000000000000000E+03, "m/s2", "L/T2", "1.0");
   unit["INT[normal-acceleration]"] = UBASE("INT", "normal-acceleration", 9.806650000000000E+00, "m/s2", "L/T2", "1.0");
   unit["INT[gn]"] = UBASE("INT", "normal-acceleration", 9.806650000000000E+00, "m/s2", "L/T2", "1.0");
   _map["acceleration"] = BaseSystem("acceleration", unit, "1.0");

   unit.clear();


   unit["cgs[jerk]"] = UBASE("cgs", "jerk", 1.000000000000000E-02, "m/s3", "L/T3", "1.0");
   unit["cgs[J]"] = UBASE("cgs", "jerk", 1.000000000000000E-02, "m/s3", "L/T3", "1.0");
   unit["cgs[jolt]"] = UBASE("cgs", "jolt", 1.000000000000000E-02, "m/s3", "L/T3", "1.0");
   unit["cgs[j]"] = UBASE("cgs", "jolt", 1.000000000000000E-02, "m/s3", "L/T3", "1.0");
   unit["SI[jerk]"] = UBASE("SI", "jerk", 1.000000000000000E+00, "m/s3", "L/T3", "1.0");
   unit["SI[J]"] = UBASE("SI", "jerk", 1.000000000000000E+00, "m/s3", "L/T3", "1.0");
   unit["SI[jolt]"] = UBASE("SI", "jolt", 1.000000000000000E+00, "m/s3", "L/T3", "1.0");
   unit["SI[j]"] = UBASE("SI", "jolt", 1.000000000000000E+00, "m/s3", "L/T3", "1.0");
   unit["Imperial[jerk]"] = UBASE("Imperial", "jerk", 3.048000000000000E-01, "m/s3", "L/T3", "1.0");
   unit["Imperial[J]"] = UBASE("Imperial", "jerk", 3.048000000000000E-01, "m/s3", "L/T3", "1.0");
   unit["Imperial[jolt]"] = UBASE("Imperial", "jolt", 3.048000000000000E-01, "m/s3", "L/T3", "1.0");
   unit["Imperial[j]"] = UBASE("Imperial", "jolt", 3.048000000000000E-01, "m/s3", "L/T3", "1.0");
   _map["jerk"] = BaseSystem("jerk", unit, "1.0");

   unit.clear();


}

// EOF
