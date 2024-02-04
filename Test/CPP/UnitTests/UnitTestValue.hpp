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
// File UnitTestValue.hpp
//
// Unit test for Value class. 
// 
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "UnitConversionBaseTest.hpp"
#include "Value.hpp"

class UnitTestValue : public UnitConversionBaseTest
{
public:
    /** 
     * @brief Constructor
     */
    UnitTestValue(bool brief,
                  const std::string& path);

protected:
    /*
     * @brief Run the tests; output results to screen and file.
     */
    void runOut(std::ostream& out);

    /*
     * @brief Test a value.
     */
    void testValue(Value& v, 
                   const std::string& label, 
                   bool isDouble, 
                   std::ostream& out);
};
// EOF
