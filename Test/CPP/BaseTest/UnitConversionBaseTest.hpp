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
// File UnitConversionBaseTest.hpp
//
// Base or parent class for tests. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <fstream>
#include <list>

class UnitConversionBaseTest
{
public:
    /**
     * @brief Constructor.
     */
    UnitConversionBaseTest(bool brief,
                           const std::string& path);

    /**
     * @brief Destructor. 
     */
    ~UnitConversionBaseTest(void);

    /**
     * @brief Run tests. 
     */
    virtual void run(void);

protected:
    /**
     * Convert boolean to string
     */
    std::string bool_to_str(bool b);

    /**
     * @brief Flush and close output file.
     */    
    void closeFile(void);

     /*
      * @brief Compare two lists.
      */
     bool compareList(const std::list<std::string>& l1, 
                      const std::list<std::string>& l2);

     /**
      * @brief Get the current time and format it as a string.
      */ 
     std::string getTime(void);
 
     /*
      * @brief Convert list to string.
      */
     std::string listToString(const std::list<std::string>& lst);

     /**
      * @brief flush output file.  
      */
     void flush(void);

     /**
      * @brief Open output file.
      */
     void openFile(std::string name);

     /**
      * Print footer to output stream 
      */
     void printFooter(const std::string& label, 
                      double duration, 
                      std::ostream& out);

     /**
      * Print header to output stream 
      */
     void printHeader(const std::string& label, 
                      std::ostream& out);

     /** 
      * @brief Print a list. The list contains unit names or system names or 
      *        type names.
      */
     void printList(const std::list<std::string>& lsts, 
                    const std::string& label, 
                    const std::string& className, 
                    std::ostream& out);

     /**
     * @brief Print test result
     */
     void printResult(bool result,
                      const std::string& label,
                      const std::string& method,
                      const std::string& value,
                      const std::string& expected,
                      std::ostream& out);
         
    /**
     * @brief Run test and output to stream.
     */
    virtual void runOut(std::ostream& out);

    /**
     * @brief Get output stream.
     */
    std::fstream& out(void);

private:
    /**
     * Flag for brief output of results.
     */
    bool _brief;

    /**
     * Stream for printing output files.
     */
    std::fstream _fout;

    /**
     * Path to directory where output files are written.
     */
    std::string _path;
};
// EOF
