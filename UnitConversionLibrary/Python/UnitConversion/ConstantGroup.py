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
#################################################################################
#
# File ConstantGroup.py
#
# ConstantGroup is the base class for derived units, physical constants, 
# physical  definition, physical measurements, WGS84 Model,  and some 
# SI units. These  'units'  are used as the basis for other units but are not 
# directly convertible as such. They are stored as UBASE objects, as other units 
# are, and placed in a map and are accessible for reference or other purposes.     
#
# Version: 1.0
#
#################################################################################

from . import UBASE
from . import Version
import copy

class ConstantGroup:
    """
    Base class for derived units, physical constants, physical  definition, 
    physical measurements, WGS84 Model,  and some SI units.
    
    Attributes
    ----------
    
    _name    - Name for the class of units stored.
    
    _valid   - Flag that is set to true if ConstantGroup contains one or more 
               valid units.
    
    _version - Software version.
    
    _map     - ConstantGroup is the base class for derived units, physical  
               constants, physical definitions, physical measurements, WGS84 
               Model,  and SI units. These 'units' are used as the basis for 
               other units but are not directly convertible as such. They are 
               stored as UBASE objects, as other units are, and placed in a 
               HashMap and re accessible for reference or other purposes.
    
    _db      - An invalid unit to be returned in case of error (unit requested 
               not in the system. Type: UBASE.
                 
    Methods
    -------
    __init__      -  constructor.
    
    check         - checks if the software version matches with the unit versions.

    constantNames - gets list of constant names. 
    
    constant      - gets named constant.
    
    isError       - check if input is error code.

    name          - gets the name of the ConstantGroup.
    
    systemNames   - gets list of system names.
    
    typeNames     - gets list of constant types.

    valid         - return true if a valid ConstantGroup, false otherwise.
    
    version       - return software version.   
    """
    def __init__(self,*inp):
        """
        Constructor. If no arguments (or more than three) are supplied
        and 'invalid' ConstantGroup is constructed. That is one with no
        units. If one, two or three  arguments is supplied then a valid 
        ConstantGroup is constructed. 
        
        Parameters
        ----------
        For one argument:
        inp[0] - (input, ConstantGroup) ConstantGroup to copy.
        
        For two arguments:
        inp[0] - (input, string) name of the ConstantGroup.
        inp[1] - (input, string) software version
       
        For three arguments:
        inp[0] - (input, string) name of the ConstantGroup.
        inp[1] - (input, string) software version
        inp[2] - (input, dictionary(string UBASE)) 
        """  
        if len(inp) == 1:
            if isinstance(inp[0],ConstantGroup):
                self._map = copy.deepcopy(inp[0]._map)
                self._name = inp[0]._name
                self._valid = True
                self._db = UBASE.UBASE()
                self._version = inp[0]._version
            else:
                self._map = dict()
                self._name = "Invalid"
                self._valid = True
                self._db = UBASE.UBASE()
                self._version = "Invalid"
        elif len(inp) == 2:    
            self._map = dict()
            self._name = inp[0]
            self._valid = True
            self._db = UBASE.UBASE()
            self._version = inp[1]
        elif len(inp) == 3: 
            self._map = copy.deepcopy(inp[2])
            self._name = inp[0]
            self._valid = True
            self._db = UBASE.UBASE()
            self._version = inp[1]
        else:
            self._map = dict()
            self._name = "Invalid"
            self._valid = False
            self._db = UBASE.UBASE()
            self._version = "Invalid"

    def check(self):
        """
        The check method checks if the software version matches with the 
        constant versions of the constants in the ConstantGroup. Constants are  
        auto generated  from an Excel spreadsheet using VBA code.
 
        Return
        ------
        Boolean: true if software and constant versions match, false otherwise.
        Return type is boolean.
        """
        v = Version.Version.Instance()
        for item in self._map.items():
            if item[1].version() == v.version():
               continue
            else:
               return False
        return True

    def constant(self, name):
        """
        Get named constant.

        Parameters
        ----------
        name - (input, string) name of constant to retrieve.

        Return
        ------
        The specified constant or invalid constant if not found.
        The return type is UBASE.
        """
        if name in self._map.keys():
            return self._map[name]
        else:
            return self._db        

    def constantNames(self):
        """
        Get list of constant names.

        Return
        ------
        A list of constant names.
        Return type is a list of strings.
        """
        return list(self._map.keys())

    def isError(self, x):
        """
        Check if input is error code.
        
        Parameters
        ----------
        x - (input, double) value to check.
        
        Return
        ------
        True if input is error code, false otherwise.
        """
        return UBASE.UBASE.isERROR(x)
        
    def name(self):
        """
        Get the name of the ConstantGroup.

        Return
        ------
        The name of the ConstantGroup as a string.
        Return type is string.
        """
        return self._name
        
    def systemNames(self):
        """
        Get list of system names.

        Return
        ------
        A list of system names.
        Return type is a list of strings.
        """
        lst = list()
        for item in self._map.items():
            sysName = item[1].system();
            if sysName in lst:
               continue
            else:
               lst.append(sysName)
        return lst

    def typeNames(self):
        """
        Get list of unit types.

        Return
        ------
        A list of unit types.
        Return type is a list of strings.
        """
        return [self._name]

    def valid(self):
        """
        True if ConstantGroup is valid.

        Return
        ------
        Boolean: true if ConstantGroup is valid, false otherwise.
        Return type is boolean.
        """
        return self._valid
        
    def value(self, constName):
        """
        Get the value of a constant.

        Parameters
        ----------
        constName - (input, string) the name of the constant.

        Return
        ------
        The value of the named constant as a double.
        Return type is double.
        """        
        return self.constant(constName).value()

    def version(self):
        """
        Return software version.

        Return
        ------
        Software version.
        Return type is string.
        """
        return self._version
# EOF
