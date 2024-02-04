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
// File WGS84_MODEL.java
//
// Class for WGS84 model.
//
// WGS84 Model.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

package Generated;

import java.util.*;
import UnitConversion.*;

public class WGS84_MODEL extends ConstantGroup
{
   private static WGS84_MODEL singleton_ = new WGS84_MODEL();

   public static WGS84_MODEL Instance()
   {
      return singleton_;
   }

   private WGS84_MODEL()
   {
       super("WGS84_Model", "1.0");
      _map.put("equatorial-radius",   new UBASE("WGS84", "equatorial-radius", 6.378137000000000E+06, "m", "L", "1.0"));
      _map.put("a",   new UBASE("WGS84", "a", 6.378137000000000E+06, "m", "L", "1.0"));
      _map.put("inverse-flattening",   new UBASE("WGS84", "inverse-flattening", 2.982572235630000E+02, "O", "O", "1.0"));
      _map.put("if",   new UBASE("WGS84", "if", 2.982572235630000E+02, "O", "O", "1.0"));
      _map.put("flattening",   new UBASE("WGS84", "flattening", 3.352810664747480E-03, "O", "O", "1.0"));
      _map.put("f",   new UBASE("WGS84", "f", 3.352810664747480E-03, "O", "O", "1.0"));
      _map.put("angular-velocity",   new UBASE("WGS84", "angular-velocity", 7.292110000000000E-05, "rad/s", "a/T", "1.0"));
      _map.put("w",   new UBASE("WGS84", "w", 7.292110000000000E-05, "rad/s", "a/T", "1.0"));
      _map.put("polar-radius",   new UBASE("WGS84", "polar-radius", 6.356752314245180E+06, "m", "L", "1.0"));
      _map.put("b",   new UBASE("WGS84", "b", 6.356752314245180E+06, "m", "L", "1.0"));
      _map.put("eccentricity-squared",   new UBASE("WGS84", "eccentricity-squared", 6.694379990141330E-03, "O", "O", "1.0"));
      _map.put("e2",   new UBASE("WGS84", "e2", 6.694379990141330E-03, "O", "O", "1.0"));
      _map.put("eccentricity",   new UBASE("WGS84", "eccentricity", 8.181919084262160E-02, "O", "O", "1.0"));
      _map.put("e",   new UBASE("WGS84", "e", 8.181919084262160E-02, "O", "O", "1.0"));
      _map.put("equatorial-gravity",   new UBASE("WGS84", "equatorial-gravity", 9.780325335900000E+00, "m/s2", "L/T2", "1.0"));
      _map.put("ge",   new UBASE("WGS84", "ge", 9.780325335900000E+00, "m/s2", "L/T2", "1.0"));
      _map.put("polar-gravity",   new UBASE("WGS84", "polar-gravity", 9.832184937800000E+00, "m/s2", "L/T2", "1.0"));
      _map.put("gp",   new UBASE("WGS84", "gp", 9.832184937800000E+00, "m/s2", "L/T2", "1.0"));
      _map.put("gravity-constant",   new UBASE("WGS84", "gravity-constant", 1.931852646396040E-03, "O", "O", "1.0"));
      _map.put("cg",   new UBASE("WGS84", "cg", 1.931852646396040E-03, "O", "O", "1.0"));
   }

}
// EOF
