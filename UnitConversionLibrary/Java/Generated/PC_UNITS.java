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
// File PC_UNITS.java
//
// Class for physical constants.
//
// Physical Constants.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class PC_UNITS extends ConstantGroup
{
   private static PC_UNITS singleton_ = new PC_UNITS();

   public static PC_UNITS Instance()
   {
      return singleton_;
   }

   private PC_UNITS()
   {
       super("PhysicalConstants", "1.0");
      _map.put("planck-constant",   new UBASE("SI", "planck-constant", 6.626070150000000E-34, "kg.m2/s", "M.L2/T", "1.0"));
      _map.put("h",   new UBASE("SI", "h", 6.626070150000000E-34, "kg.m2/s", "M.L2/T", "1.0"));
      _map.put("speed-of-light",   new UBASE("SI", "speed-of-light", 2.997924580000000E+08, "m/s", "L/T", "1.0"));
      _map.put("c",   new UBASE("SI", "c", 2.997924580000000E+08, "m/s", "L/T", "1.0"));
      _map.put("elementary-charge",   new UBASE("SI", "elementary-charge", 1.602176634000000E-19, "A.s", "T.I", "1.0"));
      _map.put("e",   new UBASE("SI", "e", 1.602176634000000E-19, "A.s", "T.I", "1.0"));
      _map.put("boltzman-constant",   new UBASE("SI", "boltzman-constant", 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0"));
      _map.put("k",   new UBASE("SI", "k", 1.380649000000000E-23, "kg.m2/s2.K", "M.L2/T2.Q1", "1.0"));
      _map.put("avogadro-constant",   new UBASE("SI", "avogadro-constant", 6.022140760000000E+23, "1/mol", "1/N", "1.0"));
      _map.put("N",   new UBASE("SI", "N", 6.022140760000000E+23, "1/mol", "1/N", "1.0"));
   }

}
// EOF
