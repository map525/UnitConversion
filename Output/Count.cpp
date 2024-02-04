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
// File Count.cpp
//
// Units for Count
//
// Class for Count units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

#include"Count.hpp"

Count& Count::Instance(void)
{
    static Count singleton;
    return singleton;
}

Count::Count(void) : SingleSystem()
{
   std::map<std::string, UBASE> unit;

   unit["Imperial[baker's-dozen]"] = UBASE("Imperial", "baker's-dozen", 13ULL, "O", "O", "1.0");
   unit["Imperial[bale]"] = UBASE("Imperial", "bale", 4800ULL, "O", "O", "1.0");
   unit["Imperial[bl]"] = UBASE("Imperial", "bale", 4800ULL, "O", "O", "1.0");
   unit["INT[bale]"] = UBASE("INT", "bale", 5000ULL, "O", "O", "1.0");
   unit["INT[bl]"] = UBASE("INT", "bale", 5000ULL, "O", "O", "1.0");
   unit["UK[brace]"] = UBASE("UK", "brace", 2ULL, "O", "O", "1.0");
   unit["Imperial[bundle]"] = UBASE("Imperial", "bundle", 1000ULL, "O", "O", "1.0");
   unit["Imperial[bdl]"] = UBASE("Imperial", "bundle", 1000ULL, "O", "O", "1.0");
   unit["Imperial[bundle(old)]"] = UBASE("Imperial", "bundle(old)", 960ULL, "O", "O", "1.0");
   unit["Imperial[bdl(old)]"] = UBASE("Imperial", "bundle(old)", 960ULL, "O", "O", "1.0");
   unit["Imperial[decade]"] = UBASE("Imperial", "decade", 10ULL, "O", "O", "1.0");
   unit["UK[dicker]"] = UBASE("UK", "dicker", 10ULL, "O", "O", "1.0");
   unit["Imperial[dozen]"] = UBASE("Imperial", "dozen", 12ULL, "O", "O", "1.0");
   unit["Imperial[doz]"] = UBASE("Imperial", "dozen", 12ULL, "O", "O", "1.0");
   unit["Imperial[dz]"] = UBASE("Imperial", "dozen", 12ULL, "O", "O", "1.0");
   unit["UK[flock]"] = UBASE("UK", "flock", 40ULL, "O", "O", "1.0");
   unit["Imperial[great-gross]"] = UBASE("Imperial", "great-gross", 1728ULL, "O", "O", "1.0");
   unit["Imperial[great-hundred]"] = UBASE("Imperial", "great-hundred", 120ULL, "O", "O", "1.0");
   unit["UK[gross]"] = UBASE("UK", "gross", 144ULL, "O", "O", "1.0");
   unit["Imperial[hat-trick]"] = UBASE("Imperial", "hat-trick", 3ULL, "O", "O", "1.0");
   unit["Imperial[nest]"] = UBASE("Imperial", "hat-trick", 3ULL, "O", "O", "1.0");
   unit["Roman[hecatomb]"] = UBASE("Roman", "hecatomb", 100ULL, "O", "O", "1.0");
   unit["MKS[hebdo]"] = UBASE("MKS", "hebdo", 10000000ULL, "O", "O", "1.0");
   unit["Greek[hekatomb]"] = UBASE("Greek", "hekatomb", 100ULL, "O", "O", "1.0");
   unit["Imperial[hundred]"] = UBASE("Imperial", "hundred", 100ULL, "O", "O", "1.0");
   unit["Indian[lakh]"] = UBASE("Indian", "lakh", 100000ULL, "O", "O", "1.0");
   unit["UK[last]"] = UBASE("UK", "last", 13200ULL, "O", "O", "1.0");
   unit["UK[long-hundred]"] = UBASE("UK", "long-hundred", 132ULL, "O", "O", "1.0");
   unit["UK[pair]"] = UBASE("UK", "pair", 2ULL, "O", "O", "1.0");
   unit["UK[perfect-ream]"] = UBASE("UK", "perfect-ream", 512ULL, "O", "O", "1.0");
   unit["UK[piece]"] = UBASE("UK", "piece", 1ULL, "O", "O", "1.0");
   unit["UK[pc]"] = UBASE("UK", "piece", 1ULL, "O", "O", "1.0");
   unit["UK[point]"] = UBASE("UK", "point", 1ULL, "O", "O", "1.0");
   unit["US[quires(new)]"] = UBASE("US", "quires(new)", 25ULL, "O", "O", "1.0");
   unit["US[quires(old)]"] = UBASE("US", "quires(old)", 24ULL, "O", "O", "1.0");
   unit["INT[ream]"] = UBASE("INT", "ream", 500ULL, "O", "O", "1.0");
   unit["Imperial[ream(old)]"] = UBASE("Imperial", "ream(old)", 480ULL, "O", "O", "1.0");
   unit["UK[score]"] = UBASE("UK", "score", 20ULL, "O", "O", "1.0");
   unit["UK[shock]"] = UBASE("UK", "shock", 60ULL, "O", "O", "1.0");
   unit["UK[shook]"] = UBASE("UK", "shook", 60ULL, "O", "O", "1.0");
   unit["UK[ten-hundred]"] = UBASE("UK", "ten-hundred", 1320ULL, "O", "O", "1.0");
   unit["Imperial[thousand]"] = UBASE("Imperial", "thousand", 1000ULL, "O", "O", "1.0");
   unit["Imperial[timber]"] = UBASE("Imperial", "timber", 40ULL, "O", "O", "1.0");
   unit["UK[timer]"] = UBASE("UK", "timer", 40ULL, "O", "O", "1.0");
   unit["UK[unity]"] = UBASE("UK", "unity", 1ULL, "O", "O", "1.0");
   unit["UK[warp]"] = UBASE("UK", "warp", 4ULL, "O", "O", "1.0");
   unit["UK[yoke]"] = UBASE("UK", "yoke", 2ULL, "O", "O", "1.0");
   _map["count"] = BaseSystem("count", unit, "1.0");

   unit.clear();


}

// EOF
