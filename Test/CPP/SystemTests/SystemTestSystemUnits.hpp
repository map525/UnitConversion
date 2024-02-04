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
// File SystemTestSystemUnits.hpp
//
// System test for interface. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "UnitConversionBaseTest.hpp"

class SystemUnits;

class SystemTestSystemUnits : public UnitConversionBaseTest
{
public:
    /** 
     * @brief Constructor
     */
    SystemTestSystemUnits(bool brief, 
                          const std::string& path);

protected:
    /*
     * @brief Run the tests; output results to screen and file.
     */
    void runOut(std::ostream& out);   

private:
    /*
     * @brief Verify system unit value.
     */
    void testSystemUnitValue(const SystemUnits& su, 
                             const std::string& type, 
                             const std::string& system, 
                             const std::string& name, 
                             double expectedValue, 
                             std::ostream& out);
};
// EOF
