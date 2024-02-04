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
// File UnitConversionBaseTest.java
//
// Base or parent class for tests. 
//
// Version 1.0
//
/////////////////////////////////////////////////////////////////////////////////
package Tests;

import java.io.*;
import java.util.*;
import javafx.util.*;
import java.time.format.DateTimeFormatter; 
import java.time.LocalDateTime;
import java.time.Duration;

import UnitConversion.*;

public class UnitConversionBaseTest
{
    /*
     * Constructor
     *
     * @param brief - (input) brief test output.
     * @param path  - (input) path to directory for output files.
     */
    public UnitConversionBaseTest(boolean brief, String path)
    {
        _brief = brief;
        _path  = path;
        _fout  = null;
    }

   /*
    * Convert boolean to string
    * 
    * @param b - (input) boolean to convert.
    * 
    * @return - true or false.
    */
    protected String bool_to_str(boolean b)
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
    
    /*
     * Flush and close output file.
     */
    protected void closeFile()
    {
        _fout.flush();
        _fout.close();
    }
    
    /*
     * Compare two lists.
     * 
     * @param l1 - (input) fist list
     * @param l2 - (input) second list
     * 
     * @return true if size and contents of both lists are the same, 
     *         false otherwise.
     * 
     */    
    protected boolean compareList(List<String> l1, 
                                  List<String> l2)
    {
        if (l1.size() != l2.size())
        {
             return false;
        }
        else
        {
             for (String itr : l1)
             {
                 if (l2.contains(itr))
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
    
    /*
     * Get the current time and format it as a string.
     * 
     * @return A string containing the current date and time
     *         formated as Month day, year hours:minutes:seconds.
     */
    protected String getTime()
    {
       DateTimeFormatter dtf = DateTimeFormatter.ofPattern("MMMM dd, yyyy HH:mm:ss");
       LocalDateTime time = LocalDateTime.now();
       return dtf.format(time);
    }
    
    /*
     * Covert list to string.
     * 
     * @param lst - (input) list to convert.
     * 
     * @return a string with the contents of the list.
     * 
     */
    protected String listToString(List<String> lst)
    {
        String result = "[";
        for (String itr : lst)
        {
            result = result + itr + ", ";
        }
        int pos = result.lastIndexOf(',');
        if (pos != -1)
        {
            result = result.substring(0, pos) + ']';
        }
        else
        {
            result = result + "]";
        }
        return result;
    }
    
    /*
     * @brief flush output file.  
     */
    protected void flush()
    {
        _fout.flush();
    }
    
    /*
     * @brief Make a list from string
     *
     * @param args - variable number of strings
     *
     * @return - list containing input strings.     
     */
    protected List<String> makeList(String... args)
    {
        List<String> list = new ArrayList<String>();
        for (String arg : args)
        {
            list.add(arg);
        }
        return list;
    }
    
    /*
     * Open output file.
     *
     * @param name - (input) name of output file.
     */
    protected void openFile(String name)
    {
        String fname = _path + name;
        try
        {
            FileOutputStream file = new FileOutputStream(fname);
            _fout = new PrintStream(file, true);
        }
        catch(FileNotFoundException e)
        {
            System.out.println("File " + fname+ " not opened");
        }
    }

    /*
     * Print footer to output stream 
     *
     * @param label    - (input) identifying label.
     * @param duration - (input) elapsed time.
     * @param out      - (input) stream to write to.
     */
    protected void printFooter(String label, 
                               Duration duration, 
                               PrintStream out)
    {
        out.println('\n' + "END " + label + " " + getTime() + " Duration: " 
                         + timeDiff(duration) 
                         + " Version : " + Version.Instance().version() 
                         + '\n' +'\n');
        out.print("****************************************");
        out.println("****************************************" + '\n');
       
    }
    
    /*
     * Print header to output stream 
     *
     * @param label    - (input) identifying label.
     * @param out      - (input) stream to write to.
     */
    protected void printHeader(String label, 
                               PrintStream out)
    {
        out.print("****************************************");
        out.println("****************************************" + '\n');
        out.println('\n' + "START " + label + " " + getTime() + " Version : "
                         + Version.Instance().version() + '\n' + '\n');
    }

    /* 
     * Print a list. The list contains unit names or system names or type names.
     *
     * @param lsts      - (input) the list to print.
     * @param label     - (input) identifying label for list.
     * @param className - (input) the class or type of unit e.g. Angle, Force, etc.
     * @param out       - (input) the output stream to print to.
     */
    protected void printList(List<String> lsts, 
                             String label, 
                             String className, 
                             PrintStream out)
    {
        String str = label + " " + className + " [";
        String space = new String(new char[str.length()]).replace('\0', ' ');
        out.print(label + " " + className + " [");
        int size = lsts.size();
        int count = 0;
        int line = str.length();
        for (String i : lsts)
        {
            if (count + 1 < size)
            {
                line += (i.length() + 2);
                if (line > 119 && count > 0)
                {
                    out.print('\n');
                    out.print(space);
                    out.print(i + ", ");
                    line = space.length() + (i.length() + 2);
                }
                else
                {
                    out.print(i + ", ");
                }
            }
            else
            {
                 line += (i.length() + 2);
                 if (line > 119)
                 {
                    out.print('\n');
                    out.print(space + i);
                 }
                 else
                 {
                    out.print(i);
                 }
            }
            count += 1;
        }
        out.print("]" + '\n' + '\n');
    }

    /*
     * @brief Print test result
     * 
     * @param result   - (input) test result: true is success.
     * @param label    - (input) test name.
     * @param method   - (input) method tested.
     * @param value    - (input) value returned by tested method.
     * @param expected - (input) expected value.
     * @param out      - (input) the stream to write to.
     */
    protected void printResult(boolean result, 
                               String label, 
                               String method, 
                               String value, 
                               String expected,
                               PrintStream out)
    {
        if (result)
        {
            if(_brief)
            {
                out.println(label + " (" + method + "): PASS ");
            }
            else
            {
                out.println(label + " (" + method + "): PASS value: " + value);
            }
        }
        else
        {
            out.println(label + " (" + method + "): Fail " + " returned value: " 
                              + value + " expected: " + expected 
                              + " ***ERROR***");
        }
    }
    
    /*
     * Run tests. 
     */
    public void run()
    {
        runOut(System.out);
        runOut(_fout);
        closeFile();
    }
    
    /*
     * Run test and output to stream.
     * 
     * @param out - (input) the stream to write to.
     */
    protected void runOut(PrintStream out)
    {
    }

    /*
     * Convert duration to string.
     *
     * @param duration - (input) the duration to convert to a string.
     *
     * @return - the duration as a string in day, hours, minutes,
     *           seconds, and millseconds.
     */
    protected String timeDiff(Duration duration)
    {
        long noOfDays = duration.toDays();
        long noOfHours = duration.toHours();
        long noOfMinutes = duration.toMinutes();
        long noOfmilliseconds = duration.toMillis();
        long noOfSeconds = noOfmilliseconds/1000;
        
        long hours = noOfHours - 24*noOfDays;
        long minutes = noOfMinutes - 60*noOfHours;
        long seconds = noOfSeconds - 60*noOfMinutes;
        long millseconds = noOfmilliseconds - 1000*noOfSeconds;
        
        if(millseconds < 10)
        {    
            String d = ""+noOfDays+":"+hours+":"+minutes+":"
                         +seconds+"."+"00"+millseconds;
            return d;
        }
        else if(millseconds < 100)
        {
            String d = ""+noOfDays+":"+hours+":"+minutes+":"
                         +seconds+"."+"0"+millseconds;
            return d;
        }
        else
        {
            String d = ""+noOfDays+":"+hours+":"+minutes+":"
                         +seconds+"."+ millseconds;
            return d;
        }
    }
    
    //**************************************************************************
    // Class data members
    //**************************************************************************
    /*
     * Falg for brief output of results.
     */
     protected boolean _brief;
     
    /*
     * Stream for printing output files.
     */
    protected PrintStream _fout;
    
    /*
     * Path to directory where output files are written.
     */
    protected String _path;
}
// EOF
