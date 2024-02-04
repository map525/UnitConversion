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
// File UnitConversionBasicTest.cs
//
// Test generated unit code and base class code the generated code that inherits 
// from it.
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversionTestCS
{
    using System;
    using System.Collections.Generic;
    using UnitConversion;

    /// <summary>
    /// Test generated unit code and base class code the generated code that  
    /// inherits from it.
    /// </summary>
    public class UnitConversionBasicTest : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor. 
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input) path to directory for output files.</param>
        public UnitConversionBasicTest(bool brief, string path) : base(brief, path)
        {
            openFile("BasicTest.txt");
        }

        /// <summary>
        /// Run tests; output results to screen or file.
        /// </summary>
        protected override void runOut()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitConversionBasicTest");

            UBASE x = new UBASE("system", "name", 1.0, "unit", "type",
                                UnitConversion.Version.Instance().version());
            Value v = x.value();
            double y = v.dvalue();

            testUnitT("SYSTEM_UNITS", "UK_US_Avdp", "foot", "square-foot",
                      "pound", "gallon(US)", "gallon(US)",
                      SYSTEM_UNITS.Instance());
            testUnitS("GLOBAL_UNITS", "Welsh", "leap", "serf-town", "pwys",
                      "hewstawr", "cubic-palf", GLOBAL_UNITS.Instance());

            testUnitD("SI_UNITS", "kilogram", SI_UNITS.Instance());
            testUnitD("DU_UNITS", "henry", DU_UNITS.Instance());
            testUnitD("PD_UNITS", "minute", PD_UNITS.Instance());
            testUnitD("PC_UNITS", "elementary-charge", PC_UNITS.Instance());
            testUnitD("PM_UNITS", "Dalton", PM_UNITS.Instance());

            testUnit("Angle",           "solidAngle",       "Imperial[sp]",                  Angle.Instance());
            testUnit("Density",         "surfaceDensity",   "SI[kg/cm2]",                    Density.Instance());
            testUnit("EM",              "current",          "cgs[gilbert]",                  EM.Instance());
            testUnit("Energy",          "energy",           "Scientific[calorie]",           Energy.Instance());
            testUnit("Flow",            "flow",             "US[gallon-per-second]",         Flow.Instance());
            testUnit("Force",           "action",           "Scientific[planck]",            Force.Instance());
            testUnit("Frequency",       "frequency",        "Imperial[PD]",                  Frequency.Instance());
            testUnit("Luminosity",      "illuminance",      "UK[ft-C]",                      Luminosity.Instance());
            testUnit("Molarity",        "molarCharge",      "Scientific[F(12C)]",            Molarity.Instance());
            testUnit("Power",           "power",            "FPS[ft-pdl/sec]",               Power.Instance());
            testUnit("Pressure",        "pressure",         "INT[torr]",                     Pressure.Instance());
            testUnit("Radiation",       "specificEnergy",   "UK[Btu(IT)/lb]",                Radiation.Instance());
            testUnit("SpecificDensity", "specificVolume",   "UK[in3/lb]",                    SpecificDensity.Instance());
            testUnit("Time",            "time",              "Scientific[year(solar-mean)]", Time.Instance());
            testUnit("VelAccJrk",       "velocity",         "SI[mm/min]",                    VelAccJrk.Instance());
            testUnit("Viscosity",       "dynamicViscosity", "FPS[reynolds]",                 Viscosity.Instance());
            testUnit("Wavenumber",      "wavenumber",       "Scientific[1/ft]",              Wavenumber.Instance());
            testUnit("Temperature",     "temperature",      "French[Reaumur]",               Temperature.Instance());
            testUnit("Count",           "count",            "Imperial[dozen]",               Count.Instance());
            testUnit("Computer",        "computer",         "Computer[gigabyte]",            Computer.Instance());

            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitConversionBasicTest", ts);
            Console.WriteLine(" ");
        }

        /// <summary>
        /// Test double unit. Call all methods in input SingleSystem parent class.
        /// </summary>
        /// <param><c>className</c>  - (input) the class or type of unit 
        ///                                    e.g.Angle, Force, etc.</param>
        /// <param><c>sysName</c>    - (input) the specific type of unit e.g. 
        ///                                    SolidAngle.</param>
        /// <param><c>unitName</c>   - (input) the unit name.</param>
        /// <param><c>sysUnit</c>    - (input) the SingleSystem parent 
        ///                                    class.</param>
        private void testUnit(string className,
                               string sysName,
                               string unitName,
                               SingleSystem sysUnit)
        {
            BaseSystem xSys = sysUnit.system(sysName);
            UBASE u = xSys.unit("unit", unitName);
            string newName = unitName.Replace("]", "_2x]");
            Console.WriteLine(" ");
            // Check BaseSystem is valid
            printResult(xSys.valid(), className + " " + sysName + " " + unitName,
                        "valid", bool_to_str(xSys.valid()), "true");

            // Check unit from BaseSystem is valid
            printResult(u.valid(), className + " " + sysName + " " + xSys.name(),
                        "valid", bool_to_str(u.valid()) + " " + u.toString(),
                        "true  " + u.toString());

            // Create a unit and added it to the BaseSystem
            UBASE db = new UBASE(u.system(), newName, 2 * u.value().dvalue(),
                                 u.unit(), u.type(),
                                 UnitConversion.Version.Instance().version(),
                                 u.offset().dvalue());
            bool ax = xSys.addUnit("unit", newName, db);
            // Check that the unit was added
            printResult(ax, className + " " + sysName + " " + newName,
                       "addUnit", bool_to_str(ax), "true ");
            UBASE u2x = xSys.unit("unit", newName);
            printResult(u2x.valid(), className + " " + sysName + " " + newName,
                        "valid", bool_to_str(u2x.valid()) + " " + u2x.toString(),
                        "true  " + u2x.toString());

            // remove the added unit
            bool rx = xSys.removeUnit("unit", newName);
            printResult(rx, className + " " + sysName + " " + newName,
                        "removeUnit", bool_to_str(rx), "true");

            UBASE u2r = xSys.unit("unit", newName);
            printResult(!u2r.valid(), className + " " + sysName + " " + newName,
                        "valid", bool_to_str(u2r.valid()) + " " + u2r.toString(),
                        "true  " + u2r.toString());

            printList(sysUnit.unitNames(),   "unit",  className);
            printList(sysUnit.systemNames(), "system", className);
            printList(sysUnit.typeNames(),   "type",   className);
            Console.WriteLine(" ");
        }

        /// <summary>
        /// Test constants and their underlying parent class.
        /// </summary>
        /// <param><c>className</c>  - (input) the class or type of unit 
        ///                                    e.g.Angle, Force, etc.</param>
        /// <param><c>unitName</c>   - (input) the unit name.</param>
        /// <param><c>sysUnit</c>    - (input) the ConstantGroup object (parent 
        ///                                    class to all constants).</param>
        private void testUnitD(string className,
                                string unitName,
                                ConstantGroup sysUnit)
        {
            UBASE u = sysUnit.constant(unitName);
            printResult(u.valid(), className + " " + unitName,
                       "valid", bool_to_str(u.valid()) + " " + u.toString(),
                       "true  " + u.toString());

            printList(sysUnit.constantNames(),    "constant", className);
            printList(sysUnit.systemNames(),      "system",   className);
            printList(sysUnit.typeNames(),        "type",     className);
            Console.WriteLine(" ");
        }

        /// <summary>
        /// Test length, area, mass, liquid and dry volume units and their 
        /// underlying parent class.
        /// </summary>
        /// <param><c>className</c> - (input) the class or type of unit 
        ///                                    e.g.Angle, Force, etc.</param>
        /// <param><c>sysName</c>  - (input) the specific type of unit 
        ///                                   e.g.SolidAngle.</param>
        /// <param><c>lenName</c>  - (input) the length unit name.</param>
        /// <param><c>areaName</c> - (input) the area unit name.</param>
        /// <param><c>massName</c> - (input) the mass unit name.</param>
        /// <param><c>liqName</c>  - (input) the liquid volume unit name.</param>
        /// <param><c>dryName</c>  - (input) the dry volume unit name.</param>
        /// <param><c>sysUnit</c>  - (input) the UnitBaseSytem object 
        ///                                   containing the length, area, mass,
        ///                                   liquid and dry volume units.</param>
        private void  testUnitS(string className, 
                                string sysName, 
                                string lenName, 
                                string areaName, 
                                string massName, 
                                string liqName, 
                                string dryName, 
                                CanonicalSystem sysUnit)
        {
            BaseSystem s = sysUnit.system(sysName);
            UBASE l = s.unit("length",lenName);
            UBASE a = s.unit("area",areaName);
            UBASE m = s.unit("mass",massName);
            UBASE q = s.unit("liquid",liqName);
            UBASE d = s.unit("dry",dryName);

            printResult(s.valid(), className + " system = " + sysName + " " + s.name(),
                        "valid", bool_to_str(s.valid()), "true ");


            printResult(l.valid(), "length " + className + " " + sysName + " " + lenName,
                        "valid", bool_to_str(l.valid()) + " " + l.toString(),
                        "true  " + l.toString());

            printResult(a.valid(), "area " + className + " " + sysName + " " + areaName,
                        "valid", bool_to_str(a.valid()) + " " + a.toString(),
                        "true  " + a.toString());

            printResult(m.valid(), "mass " + className + " " + sysName + " " + massName,
                        "valid", bool_to_str(m.valid()) + " " + m.toString(),
                        "true  " + m.toString());

            printResult(q.valid(), "liquid " + className + " " + sysName + " " + liqName,
                        "valid", bool_to_str(q.valid()) + " " + q.toString(),
                        "true  " + q.toString());

            printResult(d.valid(), "dry " + className + " " + sysName + " " + dryName,
                        "valid", bool_to_str(d.valid()) + " " + d.toString(),
                        "true  " + d.toString());


            bool al = s.addUnit("length",lenName+"_2x",  new UBASE(l.system(), 
                                lenName+"_2x",  2*l.value().dvalue(), l.unit(), 
                                l.type(), 
                                UnitConversion.Version.Instance().version()));
            bool aa = s.addUnit("area",  areaName+"_2x", new UBASE(a.system(), 
                                areaName+"_2x", 2*a.value().dvalue(), 
                                a.unit(), a.type(), 
                                UnitConversion.Version.Instance().version()));
            bool am = s.addUnit("mass",  massName+"_2x", new UBASE(m.system(),
                                massName+"_2x", 2*m.value().dvalue(), m.unit(),
                                m.type(), 
                                UnitConversion.Version.Instance().version()));
            bool aq = s.addUnit("liquid",liqName+"_2x",  new UBASE(q.system(), 
                                liqName+"_2x",  2*q.value().dvalue(), q.unit(),
                                q.type(), 
                                UnitConversion.Version.Instance().version()));
            bool ad = s.addUnit("dry",   dryName+"_2x",  new UBASE(d.system(), 
                                dryName+"_2x",  2*d.value().dvalue(), d.unit(), 
                                d.type(), 
                                UnitConversion.Version.Instance().version()));

            printResult(al, className + " " + sysName + " Length",
                       "addUnit", bool_to_str(al), "true ");
            printResult(aa, className + " " + sysName + " Area",
                       "addUnit", bool_to_str(aa), "true ");
            printResult(am, className + " " + sysName + " Mass",
                       "addUnit", bool_to_str(am), "true ");
            printResult(aq, className + " " + sysName + " Liquid",
                       "addUnit", bool_to_str(aq), "true ");
            printResult(ad, className + " " + sysName + " Dry",
                       "addUnit", bool_to_str(ad), "true ");


            UBASE l2x = s.unit("length",lenName+"_2x");
            UBASE a2x = s.unit("area",areaName+"_2x");
            UBASE m2x = s.unit("mass",massName+"_2x");
            UBASE q2x = s.unit("liquid",liqName+"_2x");
            UBASE d2x = s.unit("dry",dryName+"_2x");

            printResult(l2x.valid(), "length ADD" + className + " " + sysName + " " + lenName + "_2x",
                       "valid", bool_to_str(l2x.valid()) + " " + l2x.toString(),
                       "true  " + l2x.toString());

            printResult(a2x.valid(), "area ADD" + className + " " + sysName + " " + areaName + "_2x",
                        "valid", bool_to_str(a2x.valid()) + " " + a2x.toString(),
                        "true  " + a2x.toString());

            printResult(m2x.valid(), "mass ADD" + className + " " + sysName + " " + massName + "_2x",
                        "valid", bool_to_str(m2x.valid()) + " " + m2x.toString(),
                        "true  " + m2x.toString());

            printResult(q2x.valid(), "liquid ADD" + className + " " + sysName + " " + liqName + "_2x",
                        "valid", bool_to_str(q2x.valid()) + " " + q2x.toString(),
                        "true  " + q2x.toString());

            printResult(d2x.valid(), "dry ADD" + className + " " + sysName + " " + dryName + "_2x",
                       "valid", bool_to_str(d2x.valid()) + " " + d2x.toString(),
                       "true  " + d2x.toString());

            bool rl = s.removeUnit("length",lenName+"_2x");
            bool ra = s.removeUnit("area",areaName+"_2x");
            bool rm = s.removeUnit("mass",massName+"_2x");
            bool rq = s.removeUnit("liquid",liqName+"_2x");
            bool rd = s.removeUnit("dry",dryName+"_2x");

            printResult(rl, className + " " + sysName + " Length",
                       "removeUnit", bool_to_str(rl), "true ");
            printResult(ra, className + " " + sysName + " Area",
                        "removeUnit", bool_to_str(ra), "true ");
            printResult(rm, className + " " + sysName + " Mass",
                        "removeUnit", bool_to_str(rm), "true ");
            printResult(rq, className + " " + sysName + " Liquid",
                        "removeUnit", bool_to_str(rq), "true ");
            printResult(rd, className + " " + sysName + " Dry",
                        "removeUnit", bool_to_str(rd), "true ");

            UBASE l2r = s.unit("length",lenName+"_2x");
            UBASE a2r = s.unit("area",areaName+"_2x");
            UBASE m2r = s.unit("mass",massName+"_2x");
            UBASE q2r = s.unit("liquid",liqName+"_2x");
            UBASE d2r = s.unit("dry",dryName+"_2x");

            printResult(!l2r.valid(), "length REMOVE" + className + " " + sysName + " " + lenName + "_2x",
                        "valid", bool_to_str(l2r.valid()) + " " + l2r.toString(),
                        "false  " + l2r.toString());

            printResult(!a2r.valid(), "area REMOVE" + className + " " + sysName + " " + areaName + "_2x",
                        "valid", bool_to_str(a2r.valid()) + " " + a2r.toString(),
                        "false  " + a2r.toString());

            printResult(!m2r.valid(), "mass REMOVE" + className + " " + sysName + " " + massName + "_2x",
                        "valid", bool_to_str(m2r.valid()) + " " + m2r.toString(),
                        "false  " + m2r.toString());

            printResult(!q2r.valid(), "liquid REMOVE" + className + " " + sysName + " " + liqName + "_2x",
                        "valid", bool_to_str(q2r.valid()) + " " + q2r.toString(),
                        "false  " + q2r.toString());

            printResult(!d2r.valid(), "dry REMOVE" + className + " " + sysName + " " + dryName + "_2x",
                        "valid", bool_to_str(d2r.valid()) + " " + d2r.toString(),
                        "false  " + d2r.toString());

            printList(sysUnit.unitNames(),   "unit",   className);
            printList(sysUnit.systemNames(), "system", className);
            printList(sysUnit.typeNames(),   "type",   className);
            Console.WriteLine(" ");
        }

        /// <summary>
        /// Test length, area, mass, liquid and dry volume units and their 
        /// underlying parent class.
        /// </summary>
        /// <param><c>className</c> - (input) the class or type of unit 
        ///                                    e.g.Angle, Force, etc.</param>
        /// <param><c>sysName</c>  - (input) the specific type of unit 
        ///                                   e.g.SolidAngle.</param>
        /// <param><c>lenName</c>  - (input) the length unit name.</param>
        /// <param><c>areaName</c> - (input) the area unit name.</param>
        /// <param><c>massName</c> - (input) the mass unit name.</param>
        /// <param><c>liqName</c>  - (input) the liquid volume unit name.</param>
        /// <param><c>dryName</c>  - (input) the dry volume unit name.</param>
        /// <param><c>sysUnit</c>  - (input) the UnitBaseSytem object 
        ///                                   containing the length, area, mass,
        ///                                   liquid and dry volume units.</param>
        private void testUnitT(string className,
                                string sysName,
                                string lenName,
                                string areaName,
                                string massName,
                                string liqName,
                                string dryName,
                                SystemUnits sysUnit)
        {
            BaseSystem s = sysUnit.system(sysName);
            UBASE l = s.unit("length", lenName);
            UBASE a = s.unit("area", areaName);
            UBASE m = s.unit("mass", massName);
            UBASE q = s.unit("liquid", liqName);
            UBASE d = s.unit("dry", dryName);

            printResult(s.valid(), className + " system = " + sysName + " " + s.name(),
                        "valid", bool_to_str(s.valid()), "true ");


            printResult(l.valid(), "length " + className + " " + sysName + " " + lenName,
                        "valid", bool_to_str(l.valid()) + " " + l.toString(),
                        "true  " + l.toString());

            printResult(a.valid(), "area " + className + " " + sysName + " " + areaName,
                        "valid", bool_to_str(a.valid()) + " " + a.toString(),
                        "true  " + a.toString());

            printResult(m.valid(), "mass " + className + " " + sysName + " " + massName,
                        "valid", bool_to_str(m.valid()) + " " + m.toString(),
                        "true  " + m.toString());

            printResult(q.valid(), "liquid " + className + " " + sysName + " " + liqName,
                        "valid", bool_to_str(q.valid()) + " " + q.toString(),
                        "true  " + q.toString());

            printResult(d.valid(), "dry " + className + " " + sysName + " " + dryName,
                        "valid", bool_to_str(d.valid()) + " " + d.toString(),
                        "true  " + d.toString());

            printList(sysUnit.unitNames(), "unit", className);
            printList(sysUnit.systemNames(), "system", className);
            printList(sysUnit.typeNames(), "type", className);
            Console.WriteLine(" ");
        }
    }
}
// EOF 
