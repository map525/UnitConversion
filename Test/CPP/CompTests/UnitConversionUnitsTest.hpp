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
// File UnitConversionUnitsTest.hpp
//
// Program to test unit conversion classes and methods. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "UnitConversionBaseTest.hpp"

#include <fstream>

class Converter;

class UnitConversionUnitsTest : public UnitConversionBaseTest
{
public:
    /** 
     * @brief Constructor.
     */
    UnitConversionUnitsTest(bool brief,
                            const std::string& path);

    /**
     * @brief Run the tests; output results to screen and file. A file is 
     *        created for each unit type and the results outputted to that file.
     */
    void run(void);

private:
    /**
     * @brief Perform unit conversion and write results to output.
     */
    void printConvert(Converter& unit, 
                      const std::string& name, 
                      std::ostream& out1,
                      std::ostream& out2);

    /**
     * @brief Write Convert object to output.
     */
    void printUnit(const Converter& unit, 
                   const std::string& name, 
                   std::ostream& out1,
                   std::ostream& out2);
    /**
     * @brief Get the unit name from the full unit name.
     */
    std::string rawUnitName(const std::string& unintName) const;
};
// EOF
