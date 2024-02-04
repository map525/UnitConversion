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
// File UnitConversionConvertTest.cpp
//
// Program to test unit conversion methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitConversionConvertTest.hpp"
#include "UnitConversions.hpp"
#include "Convert.hpp"
#include "Version.hpp"
#include <iostream>

/** 
 * @brief Constructor.
 *
 * @param[in] brief - brief output of test results.
 * @param[in] path  - the path to the output folder where the
 *                    test results are written.
 */
UnitConversionConvertTest::UnitConversionConvertTest(bool brief, 
                                                     const std::string& path)  
                                                     : UnitConversionBaseTest(brief, path)
{
    openFile("ConvertTest.txt");
}

/*
 * @brief Run tests; output results to screen or file.
 *
 * @param[in] out - stream to write output to.
 */
void UnitConversionConvertTest::runOut(std::ostream& out)
{
    clock_t start = clock();
    printHeader("UnitConversionConvertTest", out);

    UnitConversions& units =  UnitConversions::Instance();

    Converter& solidAngle       = units.converter("SolidAngle");
    Converter& surfaceDensity   = units.converter("SurfaceDensity");
    Converter& current          = units.converter("Current");
    Converter& energy           = units.converter("Energy");
    Converter& flow             = units.converter("Flow");
    Converter& action           = units.converter("Action");
    Converter& frequency        = units.converter("Frequency");
    Converter& illuminance      = units.converter("Illuminance");
    Converter& molarCharge      = units.converter("MolarCharge");
    Converter& power            = units.converter("Power");
    Converter& pressure         = units.converter("Pressure");
    Converter& specificEnergy   = units.converter("SpecificEnergy");
    Converter& specificVolume   = units.converter("SpecificVolume");
    Converter& temperature      = units.converter("Temperature");
    Converter& time             = units.converter("Time");
    Converter& velocity         = units.converter("Velocity");
    Converter& dynamicViscosity = units.converter("DynamicViscosity");
    Converter& wavenumber       = units.converter("Wavenumber");
    Converter& count            = units.converter("Count");
    Converter& computer         = units.converter("Computer");

    Converter& length           = units.converter("Length");
    Converter& area             = units.converter("Area");
    Converter& mass             = units.converter("Mass");
    Converter& liquid           = units.converter("Liquid");
    Converter& dry              = units.converter("Dry");


    testUnit("SolidAngle",      "Imperial",         "Imperial[sp]",                 &solidAngle,       out);
    testUnit("SurfaceDensity",  "SI",               "SI[kg/cm2]",                   &surfaceDensity,   out);
    testUnit("Current",         "cgs",              "cgs[gilbert]",                 &current,          out);
    testUnit("Energy",          "Scientific",       "Scientific[calorie]",          &energy,           out);
    testUnit("Flow",            "US",               "US[gallon-per-second]",        &flow,             out);
    testUnit("Action",          "Scientific",       "Scientific[planck]",           &action,           out);
    testUnit("Frequency",       "Imperial",         "Imperial[PD]",                 &frequency,        out);
    testUnit("Illuminance",     "UK",               "UK[ft-C]",                     &illuminance,      out);
    testUnit("MolarCharge",     "Scientific",       "Scientific[F(12C)]",           &molarCharge,      out);
    testUnit("Power",           "FPS",              "FPS[ft-pdl/sec]",              &power,            out);
    testUnit("Pressure",        "INT",              "INT[torr]",                    &pressure,         out);
    testUnit("SpecificEnergy",  "UK",               "UK[Btu(IT)/lb]",               &specificEnergy,   out);
    testUnit("SpecificVolume",  "UK",               "UK[in3/lb]",                   &specificVolume,   out);
    testUnit("Time",            "Scientific",       "Scientific[year(solar-mean)]", &time,             out);
    testUnit("Velocity",        "SI",               "SI[mm/min]",                   &velocity,         out);
    testUnit("DynamicViscosity","FPS",              "FPS[reynolds]",                &dynamicViscosity, out);
    testUnit("Wavenumber",      "Scientific",       "Scientific[1/ft]",             &wavenumber,       out);
    testUnit("Temperature",     "French",           "French[reaumur]",              &temperature ,     out);
    testUnit("Count",           "Imperial",         "Imperial[dozen]",              &count,            out);
    testUnit("Computer",        "Computer",         "Computer[gigabyte]",           &computer,         out);

    testUnit("Length",          "Welsh",            "leap",                         &length,           out, false);
    testUnit("Area",            "Welsh",            "serf-town",                    &area,             out, false);
    testUnit("Mass",            "Welsh",            "pwys",                         &mass,             out, false);
    testUnit("Liquid",          "Welsh",            "hewstawr",                     &liquid,           out, false);
    testUnit("Dry",             "Welsh",            "cubic-palf",                   &dry,              out, false);

    clock_t end = clock();
    double diff = double(end - start)/CLOCKS_PER_SEC;
    printFooter("UnitConversionConvertTest", diff, out);
}

/**
 * @brief Test double unit. Call all methods in input Convert object.
 *
 * @param[in] className - the class or type of unit e.g. Angle, Force, etc.
 * @param[in] sysName   - the specific type of unit e.g. SolidAngle
 * @param[in] unitName  - the unit name.
 * @param[in] sysUnit   - the converter object.
 * @param[in] out       - the output stream to print to.
 * @param[in] nameMod   - if true modify full unit name when adding a unit.
 */
void  UnitConversionConvertTest::testUnit(const std::string& className, 
                                          const std::string& sysName, 
                                          const std::string& unitName, 
                                          Converter* sysUnit, 
                                          std::ostream& out, 
                                          bool nameMod)
{
    TypeGroup xSys = sysUnit->typeGroup(sysName);
    UBASE u = xSys.unit(unitName);
    std::string newName = unitName;
    if (nameMod)
    {
        newName = newName.replace(unitName.find("]"), 
                                  std::string("]").length(), "_") + "2x]";
    }
    else
    {
        newName = newName + "_2x";
    }

    out << std::endl;
    // Check TypeGroup is valid
    printResult(xSys.valid(), className + " " + sysName + " " + xSys.name(), 
                "valid", bool_to_str(xSys.valid()), "true",  out);
   
    // Check unit from TypeGroup is valid
    printResult(u.valid(), className + " " + sysName + " " + unitName, 
               "valid", bool_to_str(u.valid()) + " "+ u.toString(), 
               "true  " + u.toString(),  out);

    // Create a unit and added it to the TypeGroup
    UBASE db = UBASE(u.system(), newName, 2*u.value().dvalue(), u.unit(), 
                     u.type(),Version::Instance().version(),u.offset().dvalue());
    bool ax = xSys.addUnit(newName,db);

    // Check that the unit was added
    printResult(ax, className + " " + sysName + " " + newName, 
                "addUnit", bool_to_str(ax), "true ",  out);

    UBASE u2x = xSys.unit(newName);
    printResult(u2x.valid(), className + " " + sysName + " " + newName, 
               "valid", bool_to_str(u2x.valid()) + " "+ u2x.toString(), 
               "true  "+u2x.toString(),  out);

    // remove the added unit
    bool rx = xSys.removeUnit(newName);
    printResult(rx, className + " " + sysName + " " + newName, 
                "removeUnit", bool_to_str(rx), "true",  out);

    UBASE u2r = xSys.unit(newName);
    printResult(!u2r.valid(), className + " " + sysName + " " + newName, 
                "valid", bool_to_str(u2r.valid()) + " "+ u2r.toString(), 
                "true  "+u2r.toString(),  out);

    printList(sysUnit->unitNames(),   "unit  ", className,out);
    printList(sysUnit->systemNames(), "system", className,out);
    printList(sysUnit->typeNames(),   "type  ", className,out);
    out << std::endl;
}
// EOF
