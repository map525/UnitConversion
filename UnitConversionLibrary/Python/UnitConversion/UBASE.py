#################################################################################
#12345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
#################################################################################
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful, 
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
##################################################################################
#
# File UBASE.py
#
# Base class defining a single base unit of measurement.
# 
# Fundamental unit: N/A
# 
# Base class defining a single unit of measurement.
# This class contains members used to define a single unit of
# measurement. These are:
#
# 1. system  - the unit system e.g. SI, MKS, etc.
# 2. type    - the unit type (dimensions) e.g. M/L, L/S, etc. 
# 3. name    - the unit name e.g. miles, minute, gallon, etc.
# 4. unit    - the unit SI components e.g. kg/m, m/s, etc.
# 5. valid   - true if a valid unit.
# 6. value   - conversion factor to SI units.
# 7. offset  - unit offset.
# 8. version - software version number.
#
# The class methods include two constructors and accessors for
# the class members. Once create a UBASE object cannot be altered.

#
# Version 1.0
#
#################################################################################
import math

class UBASE:
    """
    Base class defining a single unit of measurement.
    
    Attributes
    ----------
    
    _name    - The unit name e.g. feet, meters, etc.
    
    _offset  - The offset is used for converting temperatures. For example 
               Celsius = 1.0*Kelvin - 273.15 so that 1.0 is the value and 
               -273.15 is the offset.
    
    _system  - The system of units the unit belongs to e.g. SI, UK, US, etc.
    
    _type    - The type of unit e.g. the unit expressed in terms of fundamental 
               SI dimensions. For example force has a type of M.L/T2 that is 
               mass times length divided by time squared.
              
    _unit    - The unit expressed in terms of fundamental SI units.
               For example force has a type of kg.m/s2 that is kilograms 
               times meters divided by seconds squared.
            
    _valid   - A flag that identifies the unit as 'valid' i.e. OK to use.
    
    _value   - The "value' of the unit. The value converts the unit to SI units.
    
    _version - The software version.
                 
    Methods
    -------
    __init__ - constructor.
    
    name     - the name method returns the unit name.

    offset   - the offset method returns the unit offset value.
    
    system   - the system method returns the name of the system to
               which the unit belongs.
             
    toString - Convert UBASE to string.

    type     -  the type method returns the unit type. 
    
    unit     - the unit method returns the unit SI component units. 
    
    valid    - the valid method returns true if the unit is OK to use, 
               false otherwise.
    
    value    - the value method returns the unit value. 
    
    version  - the version method return the software version as a string.
    """

    ERROR = math.nan; #-65536
    """
    Static value used to identify an error. Expect for temperature all units
    have positive values. The Kelvin scale has absolute zero as its smallest 
    value while Fahrenheit's smallest (theoretical) value is -459.67 which is 
    the most negative value of any unit.     
    """
    
    @staticmethod 
    def isERROR(x):
        """
        Check if input is error code.
        
        Parameters
        ----------
        x - (input, double) value to check.
        
        Return
        ------
        True if input is error code, false otherwise.
        """
        return math.isnan(x)
        
    def __init__(self, *inp): 
        """
        Constructor: if one, six or seven arguments are supplied a
        valid UBASE is created, otherwise and invalid UBASE
        is constructed. An invalid UBASE contains zero value and offset
        and its valid flag is set to false. Other attributes are set 
        to 'Invalid'.
        
        Parameters
        ----------
        For one arguments:
        inp[0] other    - (input, UBASE) the UBASE to copy.
        
        For six arguments:
        inp[0]: system  - (input, string) the unit system e.g.  SI, MKS, etc.
        inp[1]: name    - (input, string) the unit name e.g. miles, minute, gallon, etc.
        inp[2]: value   - (input, double) conversion factor to SI units.
        inp[3]: unit    - (input, string) the unit meters, liters, etc.
        inp[4]: type    - (input, string) the unit type e.g. length, time, area, etc. 
        inp[5]: version - (input, string) software version number.
   
        For seven arguments:
        inp[0]: system  - (input, string) the unit system e.g.  SI, MKS, etc.
        inp[1]: name    - (input, string) the unit name e.g. miles, minute, gallon, etc.
        inp[2]: value   - (input, double) conversion factor to SI units.
        inp[3]: unit    - (input, string) the unit meters, liters, etc.
        inp[4]: type    - (input, string) the unit type e.g. length, time, area, etc. 
        inp[5]: version - (input, string) software version number.
        inp[6]: offset  - (input, double) unit offset.        
        """
        if len(inp) == 1:
            if isinstance(inp[0],UBASE):
                self._system = inp[0]._system
                self._name = inp[0]._name
                self._unit = inp[0]._unit
                self._type = inp[0]._type
                self._valid = inp[0]._valid
                self._value = inp[0]._value
                self._offset =  inp[0]._offset
                self._version = inp[0]._version
            else:
                self._system = "Invalid"
                self._name = "Invalid"
                self._unit = "Invalid"
                self._type = "Invalid"
                self._valid = False
                self._value = 0.0
                self._offset =  0.0 
                self._version = "Invalid"
        elif len(inp) == 6:
            self._system = inp[0]
            self._name = inp[1]
            self._unit = inp[3]
            self._type = inp[4]
            self._valid = True
            self._value = inp[2]
            self._version = inp[5]
            self._offset =  0.0 
        elif len(inp) == 7:
            self._system = inp[0]
            self._name = inp[1]
            self._unit = inp[3]
            self._type = inp[4]
            self._valid = True
            self._value = inp[2]
            self._version = inp[5]
            self._offset = inp[6]
        else: 
            self._system = "Invalid"
            self._name = "Invalid"
            self._unit = "Invalid"
            self._type = "Invalid"
            self._valid = False
            self._value = 0.0
            self._offset =  0.0 
            self._version = "Invalid"

    def name(self):
        """
        The name method returns the unit name.

        Return
        ------
        Return the unit name as a string.
        Return type is string.
        """
        return self._name

    def offset(self):
        """
        The offset method returns the unit offset value.

        Return
        ------
        Return the unit offset value as a double (or integer).
        Return type is double or integer.
        """
        return self._offset

    def system(self):
        """
        The system method returns the name of the system to
        which the unit belongs.

        Return
        ------
        The unit system name as a string.
        Return type is string.
        """
        return self._system
        
    def toString(self):
        """
        Convert UBASE to string
        
        Return
        ------
        UBASE as a string
        Return type is string.
        """
        s = "type: " + self._type + ", system: " + self._system \
                     + ", name: " + self._name \
                     + ", value: " + format(self._value, '.15e') \
                     + ", offset: " + format(self._offset, '.15e') \
                     + ", unit: " + self._unit \
                     + ", version: " + self._version \
                     + ", valid: " + str(self._valid)
        return s 
            
    def type(self):
        """
        The type method returns the unit type.

        Return
        ------
        The unit type as a string.
        Return type is string.
        """
        return self._type
	
    def unit(self):
        """
        The unit method returns the unit SI component units.

        Return
        ------
        The unit SI components as a string.
        Return type is string.
        """
        return self._unit

    def valid(self):
        """
        The valid method returns true if the unit is OK to use, 
        false otherwise.

        Return
        ------
        Boolean: true if the unit is valid.
        Return type is boolean.
        """
        return self._valid

    def value(self):
        """
        The value method returns the unit value. 

        Return
        ------
        The unit value as a double (or integer).
        Return type is a double or an integer.
        """
        return self._value

    def version(self):
        """
        The version method return the software version as a string.
        
        Return
        ------
        The software version as a string e.g. "1.0"
        Return type is string.
        """
        return self._version

# EOF