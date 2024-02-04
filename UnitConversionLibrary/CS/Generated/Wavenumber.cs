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
// File Wavenumber.cs
//
// Units for Wavenumber
//
// Class for Wavenumber units.
//
// Auto Generated: DO NOT Modify.
//
// Version: "1.0"
//
/////////////////////////////////////////////////////////////////////////////////

using System.Collections.Generic;

namespace UnitConversion
{
   public class Wavenumber : SingleSystem
   {
       private static Wavenumber singleton_ = new Wavenumber();

       public static Wavenumber Instance()
       {
           return singleton_;
       }

       private Wavenumber() : base()
       {
          Dictionary<string, UBASE> unit = new Dictionary<string, UBASE>();

           _map = new Dictionary<string, BaseSystem>();

          unit.Add("cgs[balmer]",   new UBASE("cgs", "balmer", 1.000000000000000E+02, "1/m", "1/L", "1.0"));
          unit.Add("Imperial[count]",   new UBASE("Imperial", "count", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("Imperial[ct]",   new UBASE("Imperial", "count", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("Imperial[gauge]",   new UBASE("Imperial", "gauge", 2.624671916010500E+01, "1/m", "1/L", "1.0"));
          unit.Add("Imperial[ga]",   new UBASE("Imperial", "gauge", 2.624671916010500E+01, "1/m", "1/L", "1.0"));
          unit.Add("Imperial[mesh]",   new UBASE("Imperial", "mesh", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("INT[dots-per-inch]",   new UBASE("INT", "dots-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("INT[dpi]",   new UBASE("INT", "dots-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("INT[points-per-inch]",   new UBASE("INT", "points-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("INT[ppi]",   new UBASE("INT", "points-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("INT[millimeter]",   new UBASE("INT", "millimeter", 1.000000000000000E-03, "1/m", "1/L", "1.0"));
          unit.Add("INT[mm]",   new UBASE("INT", "millimeter", 1.000000000000000E-03, "1/m", "1/L", "1.0"));
          unit.Add("INT[tracks-per-inch]",   new UBASE("INT", "tracks-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("INT[TPI]",   new UBASE("INT", "tracks-per-inch", 3.937007874015750E+01, "1/m", "1/L", "1.0"));
          unit.Add("Scientific[kayser]",   new UBASE("Scientific", "kayser", 1.000000000000000E+02, "1/m", "1/L", "1.0"));
          unit.Add("Scientific[Ky]",   new UBASE("Scientific", "kayser", 1.000000000000000E+02, "1/m", "1/L", "1.0"));
          unit.Add("Scientific[permicron]",   new UBASE("Scientific", "permicron", 1.000000000000000E+06, "1/m", "1/L", "1.0"));
          unit.Add("SI[dioptre]",   new UBASE("SI", "dioptre", 1.000000000000000E+00, "1/m", "1/L", "1.0"));
          unit.Add("SI[d]",   new UBASE("SI", "dioptre", 1.000000000000000E+00, "1/m", "1/L", "1.0"));
          unit.Add("SI[reciprocal-meter]",   new UBASE("SI", "reciprocal-meter", 1.000000000000000E+00, "1/m", "1/L", "1.0"));
          unit.Add("SI[1/m]",   new UBASE("SI", "reciprocal-meter", 1.000000000000000E+00, "1/m", "1/L", "1.0"));
          unit.Add("Scientific[reciprocal-foot]",   new UBASE("Scientific", "reciprocal-foot", 3.280839895013120E+00, "1/m", "1/L", "1.0"));
          unit.Add("Scientific[1/ft]",   new UBASE("Scientific", "reciprocal-foot", 3.280839895013120E+00, "1/m", "1/L", "1.0"));
          _map.Add("wavenumber",   new BaseSystem("wavenumber", unit, "1.0"));

          unit.Clear();


      }


   }
}
// EOF
