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
// File UnitConversionUnitsTest.cpp
//
// Program to test unit conversion classes and methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitConversionUnitsTest.hpp"
#include "UnitConversions.hpp"
#include "Version.hpp"

#include <iostream>

/** 
 * @brief Constructor.
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitConversionUnitsTest::UnitConversionUnitsTest(bool brief,
                                                 const std::string& path) 
                                                 : UnitConversionBaseTest(brief, path)
{
}

/**
 * @brief Perform unit conversion and write results to output.
 *
 * @param[in] unit - the Convert 'unit' to write.
 * @param[in] name - name of the Convert 'unit'.
 * @param[in] out1 - the output stream to write to.
 * @param[in] out2 - the output stream to write to.
 */
void UnitConversionUnitsTest::printConvert(Converter& unit, 
                                           const std::string& name, 
                                           std::ostream& out1,
                                           std::ostream& out2)
{
    out1 << "name: " << unit.name() << " type: " << unit.type() << " valid: " 
         << unit.valid() << std::endl;
    out2 << "name: " << unit.name() << " type: " << unit.type() << " valid: " 
         << unit.valid() << std::endl;

    std::list<std::string> sysNames = unit.systemNames();
    for (std::list<std::string>::const_iterator oit = sysNames.begin(); 
                                                oit != sysNames.end(); ++oit)
    {
        std::list<std::string> ounitNames = unit.unitNames(*oit);
        for (std::list<std::string>::const_iterator oitr = ounitNames.begin(); 
                                                    oitr != ounitNames.end(); 
                                                    ++oitr)
        {
            std::string oName = rawUnitName(*oitr);
            std::string oFullName = unit.fullUnitName(*oit, oName);
            UBASE obase = unit.unit(*oit, oName);
            double fromValue = obase.value().asDouble();

            for (std::list<std::string>::const_iterator iit = sysNames.begin(); 
                                                        iit != sysNames.end(); 
                                                        ++iit)
            {
                std::list<std::string> iunitNames = unit.unitNames(*iit);
                for (std::list<std::string>::const_iterator iitr = iunitNames.begin(); 
                                                            iitr != iunitNames.end(); 
                                                            ++iitr)
                {
                    std::string iName = rawUnitName(*iitr);
                    std::string iFullName = unit.fullUnitName(*iit, iName);
                    UBASE ibase = unit.unit(*iit, iName);
                    double toValue = ibase.value().asDouble();
                    double delta   = obase.offset().asDouble() - ibase.offset().asDouble();
                    double result  = (fromValue + delta) / toValue;
                    double value1  = unit.convert(1.0,oName,*oit,iName,*iit);
                    unit.toSystem(*iit);
                    unit.fromSystem(*oit);
                    double value2 = unit.convert(1.0,oName,iName);
                    double value3 = unit.convert(1.0,oFullName,iFullName, true);
                    bool ans = UBASE::isERROR(value1) || UBASE::isERROR(value2) 
                                                      || UBASE::isERROR(value3);
                    printResult(!ans,
                                unit.type() + " from " + *oit + " " + oName  + " to " + *iit + " " + iName,
                                "convert",
                                "1: " + std::to_string(value1) + " 2: " + std::to_string(value2) + " 3: " + std::to_string(value3),
                                "1: " + std::to_string(result) + " 2: " + std::to_string(result) + " 3: " + std::to_string(result),
                               out1);
                    printResult(!ans,
                                unit.type() + " from " + *oit + " " + oName  + " to " + *iit + " " + iName,
                                "convert",
                                "1: " + std::to_string(value1) + " 2: " + std::to_string(value2) + " 3: " + std::to_string(value3),
                                "1: " + std::to_string(result) + " 2: " + std::to_string(result) + " 3: " + std::to_string(result),
                                out2);
                }
            }
        }
    }
    out1 << std::endl;
    out2 << std::endl;
}

/**
 * @brief Write Convert object to output.
 *
 * @param[in] unit - the Convert 'unit' to write.
 * @param[in] name - name of the Convert 'unit'.
 * @param[in] out1 - the output stream to write to.
 * @param[in] out2 - the output stream to write to.
 */
void UnitConversionUnitsTest::printUnit(const Converter& unit, 
                                        const std::string& name, 
                                        std::ostream& out1,
                                        std::ostream& out2)
{
    out1 << "name: " << unit.name() << " type: " << unit.type() << " valid: " 
         << unit.valid() << std::endl;
    out2 << "name: " << unit.name() << " type: " << unit.type() << " valid: " 
         << unit.valid() << std::endl;
    out1 << "To System: " << unit.toSystem() << " From System: " 
         << unit.fromSystem() << std::endl;
    out2 << "To System: " << unit.toSystem() << " From System: " 
         << unit.fromSystem() << std::endl;

    printList(unit.typeNames(),      name, "Types",       out1);
    printList(unit.typeNames(),      name, "Types",       out2);
    printList(unit.allSystemNames(), name, "All Systems", out1);
    printList(unit.allSystemNames(), name, "All Systems", out2);
    printList(unit.allUnitNames(),   name, "All Units",   out1);
    printList(unit.allUnitNames(),   name, "All Units",   out2);

    printList(unit.systemNames(),   name,  "Systems",     out1); 
    printList(unit.systemNames(),   name,  "Systems",     out2); 
    printList(unit.unitNames(),    "Units", name,         out1);
    printList(unit.unitNames(),    "Units", name,         out2);

    std::list<std::string> sysNames = unit.systemNames();
    for (std::list<std::string>::iterator it = sysNames.begin(); 
                                          it != sysNames.end(); ++it)
    {
        std::list<std::string> unitNames = unit.unitNames(*it);
        for (std::list<std::string>::iterator itr = unitNames.begin(); 
                                              itr != unitNames.end(); ++itr)
        {
            std::string uName = rawUnitName(*itr);
            UBASE ubase = unit.unit(*it, uName);
            out1 << name << " " << *it << " " << uName << " "  << ubase.system() 
                 << " " << ubase.valid() << " " << ubase.value().dvalue()
                 << " " << ubase.name() << " " << ubase.unit() << " " 
                 << ubase.type() << " " << ubase.offset().dvalue() << std::endl;
            out2 << name << " " << *it << " " << uName << " "  << ubase.system() 
                 << " " << ubase.valid() << " " << ubase.value().dvalue()
                 << " " << ubase.name() << " " << ubase.unit() << " " 
                 << ubase.type() << " " << ubase.offset().dvalue() << std::endl;
        }
    }
    out1 << std::endl;
    out2 << std::endl;
}

/**
 * @brief Get the unit name from the full unit name.
 *
 * @param[in] unitName - the full unit name.
 *
 * @return - the unit name stripped of the system name.
 */
std::string UnitConversionUnitsTest::rawUnitName(const std::string& unintName) const
{
    size_t first = unintName.find('[');
    size_t last  = unintName.find(']');
    first = (first == std::string::npos ? 0 : first+1);
    last = (last == std::string::npos ? unintName.length() : last);
    std::string uName = unintName.substr (first,last-first);
    return uName;
}

/**
 * @brief Run the tests; output results to screen and file. A file is created
 *        for each unit type and the results outputted to that file.
 */
void UnitConversionUnitsTest::run(void)
{
    clock_t start = clock();
    printHeader("UnitConversionUnitsTest", std::cout);
    UnitConversions& units =  UnitConversions::Instance();

    std::list<std::string> unitNames = units.names();
    printList(unitNames,   "Units", "UNITS",std::cout);
    openFile("ConvertUnitTest.txt");
    printHeader("UnitConversionUnitsTest", out());
    out() << "Start Units Test" << std::endl << std::endl;
    printList(unitNames,   "Units", "UNITS", out());
    clock_t endx = clock();
    double diffx = double(endx - start)/CLOCKS_PER_SEC;
    printFooter("UnitConversionUnitsTest", diffx, out());
    closeFile();

    for (std::list<std::string>::iterator it = unitNames.begin(); 
                                          it != unitNames.end(); ++it)
    {
        if (*it == "Invalid")
        {
            continue;
        }
        else
        {
            std::string fname = *it + ".txt";
            openFile(fname);
            clock_t istart = clock();
            out() << std::endl << "START UnitConversionUnitsTest " << getTime() 
                  << " Version : " 
                  << Version::Instance().version() << std::endl << std::endl;
            printUnit(units.converter(*it), *it,std::cout, out());
            //printUnit(units.unit(*it), *it, out());
            printConvert(units.converter(*it), *it,std::cout, out());
            //printConvert(units.unit(*it), *it, out());
            clock_t iend = clock();
            double idiff = double(iend - istart)/CLOCKS_PER_SEC;
            printFooter("UnitConversionUnitsTest", idiff, out());
            closeFile();
        }
    }
    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitConversionUnitsTest", diff, std::cout);
}
// EOF
