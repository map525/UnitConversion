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
// File UnitConversionBaseTest.cs
//
// Base or parent class for tests.
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////

namespace UnitConversionTestCS
{
    using System;
    using System.IO;
    using System.Collections.Generic;

    /// <summary>
    /// Base or parent class for tests.
    /// </summary>
    public class UnitConversionBaseTest
    {
        /// <value>
        /// Set to true for brief output of test results.
        /// </value>
        private bool _brief;

        /// <value>
        /// Stream for printing output files.
        /// </value>
        private StreamWriter _fout;

        /// <value>
        /// Path to directory where output files are written.
        /// </value>
        private String _path;

        /// <summary>
        /// Constructor. 
        /// </summary>
        /// <param><c>brief</c> (input)  brief output for test results.</param>
        /// <param><c>path</c> (input) path to directory for output files.</param>
        public UnitConversionBaseTest(bool brief, string path)
        {
            _brief = brief;
            _path = path;
            _fout = null;
        }

        /// <summary>
        /// Convert boolean to string
        /// </summary>
        /// <param><c>b</c> (input) boolean to convert.</param>
        protected string bool_to_str(bool b)
        {
            if(b)
            {
                return "true";
            }
            else
            {
                return "false";
            }
        }       

        /// <summary>
        /// Flush and close output file. 
        /// </summary>
        protected void closeFile()
        {
            _fout.Flush();
            _fout.Close();
        }

        /// <summary>
        /// Compare two lists.
        /// </summary>
        /// <param><c>l1</c> (input) fist list</param>
        /// <param><c>l2</c> (input) second list</param>
        /// <returns>
        /// True if size and contents of both lists are the same, false 
        /// otherwise.
        /// </returns>
        protected bool compareList(List<string> l1, 
                                   List<string> l2)
        {
            if (l1.Count != l2.Count)
            {
                 return false;
            }
            else
            {
                 foreach (string itr in l1)
                 {
                     if (l2.Contains(itr))
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

        /// <summary>
        /// Get the current time and format it as a string.
        /// </summary>
        /// <returns>
        /// A string containing the current date and time
        /// formated as Month day, year hours:minutes:seconds.
        /// <returns>
         protected string getTime()
         {
            DateTime start = DateTime.Now;
            return start.ToString("MMMM dd, yyyy HH:mm:ss");
         }
        
        /// <summary>
        /// Covert list to string.
        /// </summary>
        /// <param><c>lst</c> (input) list to convert.</param>
        /// <returns>
        /// A string with the contents of the list.
        /// </returns>
        protected string listToString(List<string> lst)
        {
            string result = "[";
            foreach (string itr in lst)
            {
                result = result + itr + ", ";
            }
            int pos = result.LastIndexOf(',');
            if (pos != -1)
            {
                char[] chars = result.ToCharArray();
                chars[pos] = ']';
                result = new string(chars);
            }
            else
            {
                result = result + "]";
            }
            return result;
        }

        /// <summary>
        /// Flush output file. 
        /// </summary>
        protected void flush()
        {
            _fout.Flush();
        }

        /// <summary>
        /// Open output file.
        /// </summary>
        /// <param><c>path</c> (input) name of output file.</param>
        protected void openFile(string name)
        {
            _fout = new StreamWriter(_path + name, false);
        }

        /// <summary>
        /// Print footer to output stream
        /// <param><c>label</c>    (input) identifying label.</param>
        /// <param><c>duration</c> (input) elapsed time.</param>
        /// </summary>
        protected void printFooter(string label, 
                                   TimeSpan duration)
        {
            Console.WriteLine('\n' + "END " + label + " " + getTime() 
                                   + " Duration: " + duration 
                                   + " Version : " 
                                   + UnitConversion.Version.Instance().version() 
                                   + '\n' +'\n');
            Console.WriteLine( "*****************************************");                             
            Console.WriteLine( "*****************************************"+'\n');                             
        }

        /// <summary>
        /// Print header to output stream 
        /// <param><c>label</c>    (input) identifying label.</param>
        /// </summary>
        protected void printHeader(string label)
        {
             Console.WriteLine( "*****************************************");                             
            Console.WriteLine( "*****************************************"+'\n');                             
            Console.WriteLine('\n' + "START " + label + " " + getTime() 
                                   + " Version : "
                                   + UnitConversion.Version.Instance().version() 
                                   + '\n' + '\n');
        }

        /// <summary>
        /// Print a list. The list contains unit names or system names or 
        /// type names.
        /// </summary>
        /// <param><c>lsts</c>      (input) the list to print.</param>
        /// <param><c>label</c>     (input) identifying label for list.</param>
        /// <param><c>className</c> (input) the class or type of unit e.g. Angle, 
        ///                                 Force, etc.</param>
        protected void printList(List<string> lsts, 
                                 string label, 
                                 string className)
        {
            string str = label + " " + className + " [";
            string space = new string(' ', str.Length);
            Console.Write(label + " " + className + " [");
            int size = lsts.Count;
            int count = 0;
            int line = str.Length;
            foreach (string i in lsts)
            {
                if (count + 1 < size)
                {
                    line += (i.Length + 2);
                    if (line > 119 && count > 0)
                    {
                        Console.Write("\n");
                        Console.Write(space);
                        Console.Write(i + ", ");
                        line = space.Length + (i.Length + 2);
                    }
                    else
                    {
                        Console.Write(i + ", ");
                    }
                }
                else
                {
                    line += (i.Length + 2);
                    if (line > 119)
                    {
                        Console.Write('\n');
                        Console.Write(space + i);
                    }
                    else
                    {
                        Console.Write(i);
                    }
                }
                count += 1;
            }
            Console.Write("]" + '\n' + '\n');
        }

        /// <summary>
        /// Print test result
        /// </summary>
        /// <param><c>resul</c>    (input)  test result: true is success.</param>
        /// <param><c>label</c>    (input)  test name.</param>
        /// <param><c>method</c>   (input)  method tested.</param>
        /// <param><c>value</c>    (input)  value returned by tested 
        ///                                 method.</param>
        /// <param><c>expected</c> (input)  expected value.</param>
        protected void printResult(bool result, 
                                   string label, 
                                   string method, 
                                   string value, 
                                   string expected)
        {
            if (result)
            {
                if(_brief)
                {
                    Console.Write(label + " (" + method + "): PASS " +  '\n');
                }
                else
                {
                    Console.Write(label + " (" + method + "): PASS value: " + value +'\n');
                }
            }
            else
            {
                 Console.Write(label + " (" + method +"): Fail " 
                                     + " returned value: " + value
                                     + " expected: " + expected 
                                     + " ***ERROR***"  + '\n');
            }
        }
        
        /// <summary>
        /// Run tests.
        /// </summary>
        public virtual void run()
        {
            runOut();
            redirectConsole();
            runOut();
            closeFile();
            restoreConsole();
        }

        /// <summary>
        /// Run test and output to stream.
        /// </summary>
        protected virtual void runOut()
        {
        }

        /// <summary>
        /// Redirect Console output to file.
        /// </summary>
        protected void redirectConsole()
        {
            Console.SetOut(_fout);
        }

        /// <summary>
        /// Restore output to Console.
        /// </summary>
        protected void restoreConsole()
        {
            StreamWriter standardOutput = new StreamWriter(Console.OpenStandardOutput());
            standardOutput.AutoFlush = true;
            Console.SetOut(standardOutput);
        }

        /// <summary>
        /// Write string to output file.
        /// </summary>
        /// <param><c>line</c> (input) string to write to file.</param>
        protected void write(string line)
        {
            _fout.WriteLine(line);
            _fout.Flush();
        }
    }
}
// EOF 
