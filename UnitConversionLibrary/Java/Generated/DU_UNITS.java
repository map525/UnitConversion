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
// File DU_UNITS.java
//
// Class for derived units.
//
// Derived units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class DU_UNITS extends ConstantGroup
{
   private static DU_UNITS singleton_ = new DU_UNITS();

   public static DU_UNITS Instance()
   {
      return singleton_;
   }

   private DU_UNITS()
   {
       super("DerivedUnits", "1.0");
      _map.put("becquerel",   new UBASE("SI", "becquerel", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      _map.put("Bq",   new UBASE("SI", "Bq", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      _map.put("coulomb",   new UBASE("SI", "coulomb", 1.000000000000000E+00, "A.s", "I.T", "1.0"));
      _map.put("C",   new UBASE("SI", "C", 1.000000000000000E+00, "A.s", "I.T", "1.0"));
      _map.put("farad",   new UBASE("SI", "farad", 1.000000000000000E+00, "s4.A2/Kg.m2", "T4.I2/M.L2", "1.0"));
      _map.put("F",   new UBASE("SI", "F", 1.000000000000000E+00, "s4.A2/Kg.m2", "T4.I2/M.L2", "1.0"));
      _map.put("gray",   new UBASE("SI", "gray", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
      _map.put("Gy",   new UBASE("SI", "Gy", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
      _map.put("henry",   new UBASE("SI", "henry", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      _map.put("H",   new UBASE("SI", "H", 1.000000000000000E+00, "kg.m2/s2.A2", "M.L2/T2.I2", "1.0"));
      _map.put("hertz",   new UBASE("SI", "hertz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      _map.put("Hz",   new UBASE("SI", "Hz", 1.000000000000000E+00, "1/s", "1/T", "1.0"));
      _map.put("joule",   new UBASE("SI", "joule", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("J",   new UBASE("SI", "J", 1.000000000000000E+00, "kg.m2/s2", "M.L2/T2", "1.0"));
      _map.put("katal",   new UBASE("SI", "katal", 1.000000000000000E+00, "mol/s", "N/T", "1.0"));
      _map.put("kt",   new UBASE("SI", "kt", 1.000000000000000E+00, "mol/s", "N/T", "1.0"));
      _map.put("lumen",   new UBASE("SI", "lumen", 1.000000000000000E+00, "cd.sr", "J.W", "1.0"));
      _map.put("lm",   new UBASE("SI", "lm", 1.000000000000000E+00, "cd.sr", "J.W", "1.0"));
      _map.put("lux",   new UBASE("SI", "lux", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0"));
      _map.put("lx",   new UBASE("SI", "lx", 1.000000000000000E+00, "cd.sr/m2", "J.W/L2", "1.0"));
      _map.put("newton",   new UBASE("SI", "newton", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      _map.put("N",   new UBASE("SI", "N", 1.000000000000000E+00, "kg.m/s2", "M.L/T2", "1.0"));
      _map.put("ohm",   new UBASE("SI", "ohm", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      _map.put("w",   new UBASE("SI", "w", 1.000000000000000E+00, "kg.m2/s3.A2", "M.L2/T3.I2", "1.0"));
      _map.put("pascal",   new UBASE("SI", "pascal", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      _map.put("Pa",   new UBASE("SI", "Pa", 1.000000000000000E+00, "kg/m.s2", "M/L.T2", "1.0"));
      _map.put("poiseuille",   new UBASE("SI", "poiseuille", 1.000000000000000E+00, "kg/m.s2", "M/L.T", "1.0"));
      _map.put("Po",   new UBASE("SI", "Po", 1.000000000000000E+00, "kg/m.s2", "M/L.T", "1.0"));
      _map.put("siemens",   new UBASE("SI", "siemens", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      _map.put("S",   new UBASE("SI", "S", 1.000000000000000E+00, "s3.A2/kg.m2", "T3.I2/M.L2", "1.0"));
      _map.put("sievert",   new UBASE("SI", "sievert", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
      _map.put("Sv",   new UBASE("SI", "Sv", 1.000000000000000E+00, "m2/s2", "L2/T2", "1.0"));
      _map.put("tesla",   new UBASE("SI", "tesla", 1.000000000000000E+00, "kg/s2.A2", "M/T2.I", "1.0"));
      _map.put("T",   new UBASE("SI", "T", 1.000000000000000E+00, "kg/s2.A2", "M/T2.I", "1.0"));
      _map.put("volt",   new UBASE("SI", "volt", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      _map.put("V",   new UBASE("SI", "V", 1.000000000000000E+00, "kg.m2/s3.A", "M.L2/T3.I", "1.0"));
      _map.put("watt",   new UBASE("SI", "watt", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      _map.put("W",   new UBASE("SI", "W", 1.000000000000000E+00, "kg.m2/s3", "M.L2/T3", "1.0"));
      _map.put("weber",   new UBASE("SI", "weber", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
      _map.put("Wb",   new UBASE("SI", "Wb", 1.000000000000000E+00, "kg.m2/s2.A", "M.L2/T2.I", "1.0"));
   }

}
// EOF
