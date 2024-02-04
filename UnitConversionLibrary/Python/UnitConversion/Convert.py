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
# File Convert.py
#
# Base class for the converter. The converter is the interface used for 
# converting units. A converter exists for each type. The Convert base
# class contains methods for obtaining lists of unit names, system names,
# the default 'to' and 'from' systems, and type names for the Converter.
#
# Version 1.0
# 
#################################################################################

from . import UBASE
from . import Conversion
import copy

class Convert:
    """
    Base class for systems.
    
    Attributes
    ----------
    
    _conversion  - the conversion object containing a unit type along with its 
                   associated type groups and units.
    
    _name        - name of the Convert object; typically the unit type.
    
    _fromSystem  - the name of the current 'from' system. During conversion, 
                   the unit to be converted will be a member of this unit system.
    
    _toSystem    - the name of the current 'to' system. During conversion, the 
                   unit to be converted will be converted to a unit in this 
                   unit system.
    
    _valid       - a flag indicating if the Convert object is valid i.e. 
                   contains at least one unit type consisting of one or more 
                   valid type groups having one or more valid units.
                  
    Methods
    -------
    __init__       -  Constructor.
    
    allSystemNames -  gets a list of all the system names in the converter.
    
    allUnitNames   - gets a list of all the unit names in the converter.
    
    check          - check that software and uit versions match.
    
    isError        - check if input is error code.

    fromSystem     - gets or sets the name of the current 'from' system.

    fullUnitName   - construct a full unit name from system and unit name. 

    name           - gets the names of the converter.

    rawUnitName    - gets the unit name from the full unit name.
        
    toSystem       - gets or sets the name of the current 'to' system.
    
    typeNames      - gets a list of all the unit type names in the converter.
    
    valid          - gets a flag that specifies if the converter is valid or not.
    """
    
    def __init__(self, *inp):
        """
        Constructor
        If one or four arguments are supplied a valid Convert object is
        created, otherwise an invalid Convert object is created.
        
        Parameters
        ----------
        For one argument:
        inp[0]     - (input, Convert) other Convert to copy.
        
        For four arguments:
        inp[0]     - (input, string) name of the Converter.
        inp[1]     - (input, string) the name of the 'from' system.
        inp[2]     - (input, string) the name of the 'to' system.
        inp[3]     - (input, Conversion) a conversion object containing the 
                             type groups and associated units for the unit type.
        """ 
        if len(inp) == 1:
            if isinstance(inp[0],Convert):
                self._name = inp[0]._name
                self._toSystem = inp[0]._toSystem
                self._fromSystem = inp[0]._fromSystem 
                self._valid = inp[0]._valid
                #self._conversion = Conversion(inp[0]._conversion)
                self._conversion = copy.deepcopy(inp[0]._conversion)
            else:
                self._name = "Invalid"
                self._toSystem = "Invalid"
                self._fromSystem = "Invalid"
                self._valid = False
                self._conversion = Conversion.Conversion()
        elif len(inp) == 4:        
            self._name = inp[0]
            self._toSystem = inp[2]
            self._fromSystem = inp[1]
            self._valid = True
            self._conversion = inp[3]
        else:
            self._name = "Invalid"
            self._toSystem = "Invalid"
            self._fromSystem = "Invalid"
            self._valid = False
            self._conversion = Conversion.Conversion()
        
    def allSystemNames(self):
        """
        Gets a list of all the system names in the Convert.

        Return
        ------
        A list of system names in the Convert.
        Return type is a list of strings.
        """        
        return self._conversion.systemNames()

    def allUnitNames(self):
        """
        Gets a list of all the unit names in the Convert.

        Return
        ------
        A list of unit names in the Convert.
        Return type is a list of strings.
        """        
        return self._conversion.unitNames()

    def check(self):
        """
        The check method checks if the software version matches
        with the unit versions of its units.
        
        Return
        ------
        True if software and unit versions match, false otherwise.
        """
        return self._conversion.check()

    def fromSystem(self, fSys = None):
        """
        Get or set the name of the current 'from' system. If no argument is
        supplied the method returns the name of the current 'from' system,
        otherwise, the argument is used to set the name of the current 
        'from' system.

        Parameter
        ---------
        fSys - (input, string) name of the new 'from' system. (optional)
        
        Return
        ------
        The name of the current 'from' system as a string 
        (if no argument is supplied).
        Return type is a string (or nothing).
        """               
        if fSys == None:
            return self._fromSystem
        else:
            self._fromSystem = fSys
    
    def fullUnitName(self,sysName, unitName):
        """
        Construct a full unit name from system and unit name. A full  
        unit name is of the form systeName[unitName] e.g. SI[newton].
        This method is overridden in the child class.

        Parameters
        ----------
        sysName  - (input, string) the system name.
        unitName - (input, string) the unit name.

        Return
        ------
        The full unit name as a string.
        Return type is a string.
        """
        return self._conversion.fullUnitName(sysName,unitName)

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
        Get the names of the Convert.

        Return
        ------
        The name of the Convert as a string.
        Return type is a string.
        """        
        return self._name

    def rawUnitName(self, unitName):
        """
        Get the unit name from the full unit name.

         Parameters
        ----------
        unitName    - (input, string) the full unit name.

        Return
        ------
        The unit name stripped of the system name as a string.
        Return type is a string.
        """        
        return self._conversion.rawUnitName(unitName);

    def toSystem(self, tSys = None):
        """
        Get or set the name of the current 'to' system. If no argument is
        supplied the method returns the name of the current 'to' system,
        otherwise, the argument is used to set the name of the current 
        'to' system.

        Parameter
        ---------
        tSys - (input, string) name of the new 'to' system. (optional)
        
        Return
        ------
        The name of the current 'to' system as a string 
        (if no argument is supplied).
        Return type is a string (or nothing).
        """        
        if tSys == None:
            return self._toSystem
        else: 
            self._toSystem = tSys

    def typeNames(self):
        """
        Get a list of all the unit type names in the Convert.

        Return
        ------
        A list of unit type names in the Convert.
        Return type is a list of strings.
        """        
        return self._conversion.typeNames();
    
    def valid(self):
        """
        Get a flag that specified in the Convert is valid or not.

        Return
        ------
        Boolean: true if the Convert contains one or more unit systems having
                 one or more valid units.
        Return type is a boolean.
        """        
        return self._valid
# EOF