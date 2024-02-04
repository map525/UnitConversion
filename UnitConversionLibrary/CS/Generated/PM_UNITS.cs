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
// File PM_UNITS.cs
//
// Class for physical measurements.
//
// Physical Measurements.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class PM_UNITS : ConstantGroup
   {
       private static PM_UNITS singleton_ = new PM_UNITS();

       public static PM_UNITS Instance()
       {
           return singleton_;
       }

       private PM_UNITS() : base("PhysicalMeasurements", "1.0")
       {
           _map = new Dictionary<string, UBASE>();

          _map.Add("permittivity-of-free-space",   new UBASE("Scientific", "permittivity-of-free-space", 8.854187812800000E-12, "s4.A2/kg.m3", "T4.I2/M.L3", "1.0"));
          _map.Add("eo",   new UBASE("Scientific", "eo", 8.854187812800000E-12, "s4.A2/kg.m3", "T4.I2/M.L3", "1.0"));
          _map.Add("permeability-of-free-space",   new UBASE("Scientific", "permeability-of-free-space", 1.256637062000000E-06, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          _map.Add("mo",   new UBASE("Scientific", "mo", 1.256637062000000E-06, "kg.m/s2.A2", "M.L/T2.I2", "1.0"));
          _map.Add("electron-mass",   new UBASE("Scientific", "electron-mass", 9.109383701500000E-31, "kg", "M", "1.0"));
          _map.Add("me",   new UBASE("Scientific", "me", 9.109383701500000E-31, "kg", "M", "1.0"));
          _map.Add("bohr-radius",   new UBASE("Scientific", "bohr-radius", 5.291772109030000E-11, "m", "L", "1.0"));
          _map.Add("ao",   new UBASE("Scientific", "ao", 5.291772109030000E-11, "m", "L", "1.0"));
          _map.Add("density-of-water(40C)",   new UBASE("Scientific", "density-of-water(40C)", 9.998395000000000E+02, "kg/m3", "M/L3", "1.0"));
          _map.Add("pH2O(4oC)",   new UBASE("Scientific", "pH2O(4oC)", 9.998395000000000E+02, "kg/m3", "M/L3", "1.0"));
          _map.Add("density-of-water(600F)",   new UBASE("Scientific", "density-of-water(600F)", 9.990141000000000E+02, "kg/m3", "M/L3", "1.0"));
          _map.Add("pH2O(4oF)",   new UBASE("Scientific", "pH2O(4oF)", 9.990141000000000E+02, "kg/m3", "M/L3", "1.0"));
          _map.Add("density-of-mercury(00C)",   new UBASE("Scientific", "density-of-mercury(00C)", 1.359508000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("pH2O(0oC)",   new UBASE("Scientific", "pH2O(0oC)", 1.359508000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("density-of-mercury(600F)",   new UBASE("Scientific", "density-of-mercury(600F)", 1.355679000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("pH2O(60oF)",   new UBASE("Scientific", "pH2O(60oF)", 1.355679000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("electron-radius",   new UBASE("Scientific", "electron-radius", 2.817940326200000E-15, "m", "L", "1.0"));
          _map.Add("re",   new UBASE("Scientific", "re", 2.817940326200000E-15, "m", "L", "1.0"));
          _map.Add("loschmidt's-number",   new UBASE("Scientific", "loschmidt's-number", 2.686777400000000E+25, "1/m3", "1/L3", "1.0"));
          _map.Add("no",   new UBASE("Scientific", "no", 2.686777400000000E+25, "1/m3", "1/L3", "1.0"));
          _map.Add("roentgen",   new UBASE("Scientific", "roentgen", 2.580000000000000E-04, "A.s/kg", "I.T/M", "1.0"));
          _map.Add("Rt",   new UBASE("Scientific", "Rt", 2.580000000000000E-04, "A.s/kg", "I.T/M", "1.0"));
          _map.Add("dalton",   new UBASE("Scientific", "dalton", 1.660539066600000E-27, "kg", "M", "1.0"));
          _map.Add("Da",   new UBASE("Scientific", "Da", 1.660539066600000E-27, "kg", "M", "1.0"));
          _map.Add("u",   new UBASE("Scientific", "u", 1.660539066600000E-27, "kg", "M", "1.0"));
          _map.Add("proton-mass",   new UBASE("Scientific", "proton-mass", 1.672621923690000E-27, "kg", "M", "1.0"));
          _map.Add("mp",   new UBASE("Scientific", "mp", 1.672621923690000E-27, "kg", "M", "1.0"));
          _map.Add("solar-mass",   new UBASE("Scientific", "solar-mass", 1.988470000000000E+30, "kg", "M", "1.0"));
          _map.Add("MO",   new UBASE("Scientific", "MO", 1.988470000000000E+30, "kg", "M", "1.0"));
          _map.Add("density-of-mercury(230C)",   new UBASE("Scientific", "density-of-mercury(230C)", 1.353770000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("pHg(23oC)",   new UBASE("Scientific", "pHg(23oC)", 1.353770000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("density-of-sea-water",   new UBASE("Scientific", "density-of-sea-water", 1.025000000000000E+03, "kg/m3", "M/L3", "1.0"));
          _map.Add("st",   new UBASE("Scientific", "st", 1.025000000000000E+03, "kg/m3", "M/L3", "1.0"));
          _map.Add("gas-constant-for-air",   new UBASE("Scientific", "gas-constant-for-air", 2.860000000000000E+02, "m2/s2.K", "L2/T2Q", "1.0"));
          _map.Add("R",   new UBASE("Scientific", "R", 2.860000000000000E+02, "m2/s2.K", "L2/T2Q", "1.0"));
          _map.Add("ratio-of-specific-heat-for-air",   new UBASE("Scientific", "ratio-of-specific-heat-for-air", 1.400000000000000E+00, "O", "O", "1.0"));
          _map.Add("g",   new UBASE("Scientific", "g", 1.400000000000000E+00, "O", "O", "1.0"));
          _map.Add("BTU(Mean)",   new UBASE("FPS", "BTU(Mean)", 1.055870000000000E+03, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("calorie(15oC)",   new UBASE("Scientific", "calorie(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("cal(15oC)",   new UBASE("Scientific", "cal(15oC)", 4.185500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("calorie(20oC)",   new UBASE("Scientific", "calorie(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("cal(20oC)",   new UBASE("Scientific", "cal(20oC)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("calorie(4oC)",   new UBASE("Scientific", "calorie(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("cal(4oC)",   new UBASE("Scientific", "cal(4oC)", 4.204500000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("calorie(mean)",   new UBASE("Scientific", "calorie(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("cal(mean)",   new UBASE("Scientific", "cal(mean)", 4.190020000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
          _map.Add("density-of-mercury(40C)",   new UBASE("Scientific", "density-of-mercury(40C)", 1.360000000000000E+04, "kg/m3", "M/L3", "1.0"));
          _map.Add("pHg(4oC)",   new UBASE("Scientific", "pHg(4oC)", 1.360000000000000E+04, "kg/m3", "M/L3", "1.0"));
      }


   }
}
// EOF
