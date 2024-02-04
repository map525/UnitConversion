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
// File Temperature.java
//
// Units for Temperature
//
// Class for Temperature units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class Temperature extends SingleSystem
{
   private static Temperature singleton_ = new Temperature();

   public static Temperature Instance()
   {
      return singleton_;
   }

   private Temperature()
   {
       super();
      HashMap<String, UBASE> unit = new HashMap<String, UBASE>();

      unit.put("French[reaumur]",   new UBASE("French", "reaumur", 1.250000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02));
      unit.put("French[oRe]",   new UBASE("French", "reaumur", 1.250000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02));
      unit.put("Imperial[fahrenheit]",   new UBASE("Imperial", "fahrenheit", 5.555555555555560E-01, "K", "Q", "1.0", 2.553722222222220E+02));
      unit.put("Imperial[oF]",   new UBASE("Imperial", "fahrenheit", 5.555555555555560E-01, "K", "Q", "1.0", 2.553722222222220E+02));
      unit.put("Imperial[rankine]",   new UBASE("Imperial", "rankine", 5.555555555555560E-01, "K", "Q", "1.0", 0.000000000000000E+00));
      unit.put("Imperial[oR]",   new UBASE("Imperial", "rankine", 5.555555555555560E-01, "K", "Q", "1.0", 0.000000000000000E+00));
      unit.put("INT[celsius]",   new UBASE("INT", "celsius", 1.000000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02));
      unit.put("INT[oC]",   new UBASE("INT", "celsius", 1.000000000000000E+00, "K", "Q", "1.0", 2.731500000000000E+02));
      unit.put("SI[kelvin]",   new UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00));
      unit.put("SI[oK]",   new UBASE("SI", "kelvin", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00));
      unit.put("SI[inferno]",   new UBASE("SI", "inferno", 1.000000000000000E+09, "K", "Q", "1.0", 0.000000000000000E+00));
      unit.put("SI[volt(thermal)]",   new UBASE("SI", "volt(thermal)", 1.000000000000000E+00, "K", "Q", "1.0", 0.000000000000000E+00));
      _map.put("temperature",   new BaseSystem("temperature", unit, "1.0"));

      unit.clear();


   }

}
// EOF
