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
// File UnitConversionBaseTest.cpp
//
// Base or parent class for tests. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
#include "UnitConversionBaseTest.hpp"
#include "Version.hpp"
#include <iostream>
#include <ctime>

/**
 * @brief Constructor.
 * 
 * @param[in] brief - brief output of test results.
 * @param[in] path - path to output folder.
 */
UnitConversionBaseTest::UnitConversionBaseTest(bool brief, 
                                               const std::string& path)  : _brief(brief), 
                                                                           _fout(), 
                                                                           _path(path)
{
}

/**
 * @brief Destructor. 
 */
UnitConversionBaseTest::~UnitConversionBaseTest(void)
{
    closeFile();
}

/**
* Convert boolean to string
* 
* @param[in] b - boolean to convert.
* 
* @return - true or false.
*/
std::string UnitConversionBaseTest::bool_to_str(bool b)
{
    if (b)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

/**
 * @brief Flush and close output file.
 */
void UnitConversionBaseTest::closeFile(void)
{
    _fout.flush();
    _fout.close();
}

/*
* @brief Compare two lists.
* 
* @param[in] l1 - fist list
* @param[in] l2 - second list
* 
* @return true if size and contents of both lists are the same, false otherwise.
* 
*/
bool UnitConversionBaseTest::compareList(const std::list<std::string>& l1, 
                                         const std::list<std::string>& l2)
{
    if (l1.size() != l2.size())
    {
        return false;
    }
    else
    {
        for (std::list<std::string>::const_iterator itr = l1.begin(); 
                                                    itr != l1.end(); ++itr)
        {
            std::list<std::string>::const_iterator iter = std::find (l2.begin(), 
                                                                     l2.end(),
                                                                     *itr);
            if (iter != l2.end())
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}

/**
 * @brief Get the current time and format it as a string.
 * 
 * @return A string containing the current date and time
 *         formated as Month day, year hours:minutes:seconds.
 */
std::string UnitConversionBaseTest::getTime(void)
{
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    char buffer[128];
    strftime(buffer, sizeof(buffer), "%B %d, %Y %H:%M:%S", now);
    return std::string(buffer);
}

/*
 * @brief Covert list to string.
 * 
 * @param[in] lst - list to convert.
 * 
 * @return a string with the contents of the list.
 * 
 */
std::string UnitConversionBaseTest::listToString(const std::list<std::string>& lst)
{
    std::string result = "[";
    for (std::list<std::string>::const_iterator itr = lst.begin(); 
                                                itr != lst.end(); ++itr)
    {
        result = result + *itr + ", ";
    }
    size_t pos = result.rfind(",");
    if (pos != std::string::npos)
    {
        result[pos] = ']';
    }
    else
    {
        result = result + "]";
    }
    return result;
}

/**
 * @brief flush output file.  
 * void flush(void);
 */
void UnitConversionBaseTest::flush(void)
{
    _fout.flush();
}

/**
 * @brief Open output file.
 *
 * @param[in] name - name of output file.
 */
void UnitConversionBaseTest::openFile(std::string name)
{
    std::string fname = _path+name;
    _fout.open(fname, std::ios::out);
}

/**
 * @brief Print footer to output stream 
 * 
 * @param[in] label    - identifying label.
 * @param[in] duration - elapsed time.
 * @param[in] out      - stream to write to.
 */
void UnitConversionBaseTest::printFooter(const std::string& label, 
                                         double duration, 
                                         std::ostream& out)
{
    out << std::endl << "END " << label << " "<< getTime() 
        << " Duration: " << duration 
        << " Version : " << Version::Instance().version() 
        << std::endl << std::endl;
   out << "****************************************"
       << "*****************************************" << std::endl;
}

/**
 * @brief Print header to output stream 
 * 
 * @param[in] label    - identifying label.
 * @param[in] out      - stream to write to.
 */
void UnitConversionBaseTest::printHeader(const std::string& label, 
                                         std::ostream& out)
{
    out << "****************************************"
        << "*****************************************" << std::endl;
    out << std::endl << "START " << label << " " << getTime() << " Version : " 
        << Version::Instance().version() << std::endl << std::endl;
}

/** 
 * @brief Print a list. The list contains unit names or system names or 
 *        type names.
 *
 * @param[in] lsts      - the list to print.
 * @param[in] label     - identifying label for list.
 * @param[in] className - the class or type of unit e.g. Angle, Force, etc.
 * @param[in] out       - the output stream to print to.
 */
void UnitConversionBaseTest::printList(const std::list<std::string>& lsts, 
                                       const std::string& label, 
                                       const std::string& className, 
                                       std::ostream& out)
{
    std::string str = label + " " + className + " [";
    std::string space(str.length(), ' ');
    out << label << " " << className << " [";
    size_t size = lsts.size();
    unsigned int count = 0;
    size_t line = str.length();
    for (std::list<std::string>::const_iterator i = lsts.begin(); 
                                                i != lsts.end(); ++i)
    {
        if (count + 1 < size)
        {
            line += (i->length() + 2);
            if (line > 119 && count > 0)
            {
                out << std::endl;
                out << space;
                out << *i << ", ";
                line = space.length() + (i->length() + 2);
            }
            else
            {
                out << *i << ", ";
            }
        }
        else
        {
            line += (i->length() + 2);
            if (line > 119)
            {
                out << std::endl;
                out << space << *i;
            }
            else
            {
                out << *i;
            }
        }
        count += 1;
    }
    out << "]" << std::endl;
}

/**
 * @brief Print test result
 * 
 * @param[in] result - test result: true is success.
 * @param[in] label - test name.
 * @param[in] method - method tested.
 * @param[in] value - value returned by tested method.
 * @param[in] expected - expected value.
 * @param[in] out - the stream to write to.
 */
void UnitConversionBaseTest::printResult(bool result, 
                                         const std::string& label, 
                                         const std::string& method, 
                                         const std::string& value, 
                                         const std::string& expected,
                                         std::ostream& out)
{
    if (result)
    {
        if (_brief)
        {
            out << label << " (" << method << "): PASS " << std::endl;
        }
        else
        {
            out << label << " (" << method << "): PASS value: " 
                << value << std::endl;
        }
    }
    else
    {
        out << label << " (" << method << "): Fail " << " returned value: " 
            << value << " expected: " << expected << " ***ERROR***" << std::endl;
    }
}

/**
 * @brief Run tests. 
 */
void UnitConversionBaseTest::run(void)
{
    runOut(std::cout);
    runOut(_fout);
    closeFile();
}

/**
 * @brief Run test and output to stream.
 * 
 * @param[in] out - the stream to write to.
 */
void UnitConversionBaseTest::runOut(std::ostream& out)
{
}

/**
 * @brief Get output stream.
 * 
 * @return Output stream for writing.
 * 
 * @param[in] result    - true if test succeeded, false otherwise.
 * @param[in] label     - class name.
 * @param[in] method    - name of method tested.
 * @param[in] value    - returned value.
 * @param[in] expected - expected value.
 * @param[in] out      - the stream to write to.
 */
std::fstream& UnitConversionBaseTest::out(void)
{
    return _fout;
}
// EOF
