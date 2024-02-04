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
// File UnitConversionTest.java
//
// Main program runs all tests for unit conversion project.
//
// Version 1.0
// 
/////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;
import javafx.util.*;
import java.time.LocalDateTime;
import java.time.Duration;
import Tests.*;
import UnitConversion.Version;

public class UnitConversionTest
{
    /*
     * Default Constructor
     */
    public UnitConversionTest()
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
    public static String timeDiff(Duration duration)
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
	
    /*
     * main 
     *
     * @param args    - (input) not used.
     */
    public static void main(String[] args)
    {
        boolean all  = false;
        boolean full = false;
        boolean comp = false;
        
        LocalDateTime start = LocalDateTime.now();
        
        if(args.length > 0)
        {
            String cmd = args[0].toUpperCase();
            if (cmd.equals("FULL"))
            {
                full = true;
            }
            else if(cmd.equals("ALL"))
            {
                all = true;
            }
            else if(cmd.equals("COMP"))
            {
                comp = true;
            }
            else
            {
                full = true;
            }                
        }
        else
        {
            full = true;
        }
        
        
        System.out.println("\nSTART UnitConversionTest version "+ Version.Instance().version()); 
            
        if(comp || all)
        {
            UnitConversionBasicTest basicTest       =  new UnitConversionBasicTest(false,   "./TestOutput/");
		    basicTest.run();
            UnitConversionConstantTest constantTest =  new UnitConversionConstantTest(false,"./TestOutput/");
		    constantTest.run();
            UnitConversionConvertTest convertTest   =  new UnitConversionConvertTest(false, "./TestOutput/");
		    convertTest.run();
            UnitConversionUnitsTest convertUnitTest =  new UnitConversionUnitsTest(false,   "./TestOutput/");
		    convertUnitTest.run();
        }
        
        if(full || all)
        {
            UnitTestVersion versionTest       = new UnitTestVersion(true,           "./TestOutput/");
            versionTest.run();
            UnitTestValue valueTest           = new UnitTestValue(true,             "./TestOutput/");
            valueTest.run();
            UnitTestUBase ubaseTest           = new UnitTestUBase(true,             "./TestOutput/");
            ubaseTest.run();
            UnitTestTypeGroup us              = new UnitTestTypeGroup(true,         "./TestOutput/");
            us.run();

            UnitTestBaseSystem bs             = new UnitTestBaseSystem(true,        "./TestOutput/");
            bs.run();
            UnitTestConstantGroup ucb         = new UnitTestConstantGroup(true,     "./TestOutput/");
            ucb.run();
            UnitTestConstants constants       = new UnitTestConstants(true,         "./TestOutput/");
            constants.run();
            UnitTestConversionBase convb      = new UnitTestConversionBase(true,    "./TestOutput/");
            convb.run();
            UnitTestConversion conv           = new UnitTestConversion(true,        "./TestOutput/");
            conv.run();
            UnitTestCanonicalSystem ubs       = new UnitTestCanonicalSystem(true,   "./TestOutput/");
            ubs.run();
            UnitTestSingleSystem usb          = new UnitTestSingleSystem(true,      "./TestOutput/");
            usb.run();
            UnitTestSystemUnits sysUnits      = new UnitTestSystemUnits(true,       "./TestOutput/");
            sysUnits.run();
            UnitTestConvert cvt               = new UnitTestConvert(true,           "./TestOutput/");
            cvt.run();   
            UnitTestConverter con             = new UnitTestConverter(true,         "./TestOutput/");
            con.run();
            UnitTestUnitConversions cons      = new UnitTestUnitConversions(true,   "./TestOutput/");
            cons.run();
            SystemTestUnitConversions sysTest = new SystemTestUnitConversions(true, "./TestOutput/");
            sysTest.run();
            SystemTestConstants constTest     = new SystemTestConstants(true,       "./TestOutput/");
            constTest.run();
            SystemTestSystemUnits sysUTest    = new SystemTestSystemUnits(true,     "./TestOutput/");
            sysUTest.run();
        }

        LocalDateTime end = LocalDateTime.now();
        Duration duration = Duration.between(start, end);
        System.out.println("\nEND UnitConversionTest version "+ Version.Instance().version() +  " Duration: "+timeDiff(duration)); 
		System.out.println(" ");
    }

   /*********************************************************************************
    * Class data members
    *********************************************************************************/
}
// EOF 
