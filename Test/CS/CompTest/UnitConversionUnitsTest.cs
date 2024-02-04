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
// File UnitConversionUnitsTest.cs
//
// Program to test unit conversion classes and methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversionTestCS
{
    using System.Collections.Generic;
    using System;
    using UnitConversion;

    /// <summary>
    /// Program to test unit conversion classes and methods.
    /// </summary>
    public class UnitConversionUnitsTest : UnitConversionBaseTest
    {
        /// <summary>
        /// Constructor. 
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c>  (input) path to directory for output 
        ///                             files.</param>
        public UnitConversionUnitsTest(bool brief, string path) : base(brief, path)
        {
        }

        /// <summary>
        /// Write Convert object to output.
        /// </summary>
        /// <param><c>unit</c> (input) the Convert 'unit' to write.</param>
        /// <param><c>name</c> (input) name of the Convert 'unit'.</param>
        private void printUnit(UnitConversion.Converter unit, string name)
        {
            Console.WriteLine("name: " + unit.name() + " type: " + unit.type()
                                       + " valid: " + unit.valid());
            Console.WriteLine("To System: " + unit.toSystem() + " From System: " 
                                            + unit.fromSystem());
            printList(unit.typeNames(), name, "Types");
            printList(unit.allSystemNames(), name, "All Systems");
            printList(unit.allUnitNames(), name, "All Units");

            printList(unit.systemNames(),   name, "Systems"); 
            printList(unit.unitNames(),   "Units", name);

            List<string> sysNames = unit.systemNames();
            foreach(string it in sysNames)
            {
                List<string> unitNames = unit.unitNames(it);
                foreach (string itr in unitNames)
                {
                    string uName = rawUnitName(itr);
                    UBASE ubase = unit.unit(it, uName);
                    Console.WriteLine(name + " " + it + " " 
                                           + uName + " "  
                                           + ubase.system() + " " 
                                           + ubase.valid() + " " 
                                           + ubase.value().dvalue() + " " 
                                           + ubase.name() + " " 
                                           + ubase.unit() + " "
                                           + ubase.type() + " " 
                                           + ubase.offset().dvalue());
                }
             }
            Console.WriteLine('\n');
        }

        /// <summary>
        /// Perform unit conversion and write results to output.
        /// </summary>
        /// <param><c>unit</c> (input) the Convert 'unit' to write.</param>
        /// <param><c>name</c> (input) name of the Convert 'unit'.</param>
        private void printConvert(UnitConversion.Converter unit, 
                                  string name)
        {
            Console.WriteLine("name: " + unit.name() + " type: " + unit.type() 
                                       + " valid: " + unit.valid());

            List<string> sysNames = unit.systemNames();
            foreach(string oit in sysNames)
            {
                 List<string> ounitNames = unit.unitNames(oit);
                foreach(string oitr in ounitNames)
                {
                    string oName = rawUnitName(oitr);
                    string oFullName = unit.fullUnitName(oit, oName);
                    UBASE obase = unit.unit(oit, oName);
                    double fromValue = obase.value().asDouble();

                    foreach (string iit in sysNames)
                    {
                        List<string> iunitNames = unit.unitNames(iit);
                        foreach(string iitr in iunitNames)
                        {
                            string iName = rawUnitName(iitr);
                            string iFullName = unit.fullUnitName(iit, iName);
                            UBASE ibase = unit.unit(iit, iName);
                            double toValue = ibase.value().asDouble();
                            double delta = obase.offset().asDouble() - ibase.offset().asDouble();
                            double result = (fromValue + delta) / toValue;
                            double value1 = unit.convert(1.0,oName,oit,iName,iit);
                            unit.toSystem(iit);
                            unit.fromSystem(oit);
                            double value2 = unit.convert(1.0,oName,iName);
                            double value3 = unit.convert(1.0, oFullName, iFullName, true);
                            bool ans = (UBASE.isERROR(value1) || UBASE.isERROR(value2) || UBASE.isERROR(value3));
                            printResult(!ans,
                                unit.type() + " from " + oit + " " + oName + " to " + iit + " " + iName,
                                "convert",
                                "1: " + value1.ToString("E15") + " 2: " + value2.ToString("E15") + " 3: " + value3.ToString("E15"),
                                "1: " + result.ToString("E15") + " 2: " + result.ToString("E15") + " 3: " + result.ToString("E15"));
                        }
                    }
                }
            }
            Console.WriteLine('\n');
        }

        /// <summary>
        /// Get the unit name from the full unit name.
        /// </summary>
        /// <param><c>unitName</c> (input) the full unit name.</param>
        /// <returns>
        /// The specified unit system or an invalid unit system if
        /// the specified system was not found.
        /// </returns>
        public string rawUnitName(string unitName)
        {
            int first = unitName.IndexOf('[');
            int last = unitName.IndexOf(']');
            first = (first == -1 ? 0 : first + 1);
            last = (last == -1 ? unitName.Length : last);
            string uName = unitName.Substring(first, last - first);
            return uName;
        }

        /// <summary>
        /// Run the tests; direct output results to screen and file.
        /// </summary>
        public override void run()
        {
            DateTime start = DateTime.Now;
            printHeader("UnitConversionUnitsTest");
            UnitConversions units =  UnitConversions.Instance();

            List<string> unitNames = units.names();
            printList(unitNames,   "Units", "UNITS");

            openFile("ConvertUnitTest.txt");
            redirectConsole();
            DateTime startx = DateTime.Now;
            write("\nSTART UnitConversionUnitsTest  " 
                     + startx.ToString("MMMM dd, yyyy HH:mm:ss") 
                     + " Version: " 
                     + UnitConversion.Version.Instance().version());
            printList(unitNames,   "Units", "UNITS");
            flush();
            DateTime endx = DateTime.Now;
            TimeSpan tsx = endx - startx;
            write("\nEND UnitConversionUnitsTest  " 
                     + endx.ToString("MMMM dd, yyyy HH:mm:ss") + " Duration: " 
                     + tsx + " Version: " 
                     + UnitConversion.Version.Instance().version());
            closeFile();
            restoreConsole();

            foreach (string it in unitNames)
            {
                 if (it == "Invalid")
                 {
                    continue;
                 }
                 else
                 {
                      printUnit(units.converter(it), it);
                      printConvert(units.converter(it), it);

                      openFile(it + ".txt");
                      redirectConsole();
                      DateTime istart = DateTime.Now;
                      write("\nSTART UnitConversionUnitsTest  " 
                              + istart.ToString("MMMM dd, yyyy HH:mm:ss") 
                              + " Version: " 
                              + UnitConversion.Version.Instance().version());
                      printUnit(units.converter(it), it);
                      flush();
                      printConvert(units.converter(it), it);
                      flush();
                      DateTime iend = DateTime.Now;
                      TimeSpan its = iend - istart;
                      write("\nEND UnitConversionUnitsTest  " 
                               + iend.ToString("MMMM dd, yyyy HH:mm:ss") 
                               + " Duration: " + its + " Version: " 
                               + UnitConversion.Version.Instance().version());
                      closeFile();
                      restoreConsole();
                }
            }
            DateTime end = DateTime.Now;
            TimeSpan ts = end - start;
            printFooter("UnitConversionUnitsTest",ts);
        }
    }
}
// EOF
