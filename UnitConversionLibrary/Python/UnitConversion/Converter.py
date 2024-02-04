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
# File Converter.py
#
# A converter contains methods that perform unit conversions between units
# of the same type. Units may be added or removed from the converter.  In
# general conversion is allowed only between units of the same type. However,
# volume units are divided into liquid and dry and since these have the 
# same dimensions, unit conversion is allowed between them.
#
# Version 1.0
# 
#################################################################################

from . import Convert
from . import UBASE

class Converter(Convert.Convert):
    """
    Base class for systems.
    
    Attributes
    ----------
    
    _conversion  - the conversion object containing a unit type along with its 
                   associated unit type groups and units.
    
    _name        - name of the Converter object; typically the unit type.
    
    _fromType    - the 'from' unit type of the Converter object.
    
    _fromSystem  - the name of the current 'from' system. During conversion, 
                   the unit to be converted will be a member of this unit system.
    
    _toSystem    - the name of the current 'to' system. During conversion, the 
                   unit to be converted will be converted to a unit in this 
                   unit system.
    
    _toType      - the 'to' unit type of the Converter object.
    
    _type        - the unit type of the Converter object.
    
    _valid       - a flag indicating if the Converter object is valid i.e. 
                   contains at least one unit type consisting of one or more 
                   valid type groups having one or more valid units.
                  
    Methods
    -------
    __init__      -  constructor.
    
    addUnit       -  add a unit to the converter.

    convert       - convert input value from its specified 'from' units to 
                    the specified 'to' units.
        
    fromType      - get or set 'from' unit type.

    removeUnit    - remove a unit from the converter.
    
    systemNames   - gets a list of all the system names in the converter.
    
    toType        - get or set 'to' unit type.
    
    type          - gets the name of the unit type of the converter.
    
    typeGroup     - gets a TypeGroup in the converter.
    
    unit          - gets a unit in the converter.
    
    unitNames     - gets a list of all the units names in the specified 
                    type group.
    """
    def __init__(self, *inp):
        """
        Constructor
        Create a Converter object. A valid object is created if one, five,
        or seven arguments are supplied. Otherwise an invalid object is
        created.
        
        Parameters
        ----------
        For one argument:
        in[0]      - (input, Converter) other Converter to copy.
        
        For five arguments:
        inp[0]     - (input, string) name of the Converter.
        inp[1]     - (input, string) the unit type.
        inp[2]     - (input, string) the name of the 'from' system.
        inp[3]     - (input, string) the name of the 'to' system.
        inp[4]     - (input, Conversion) a Conversion object containing the 
                                         type groups and associated units for 
                                         the unit type.
        For seven arguments:
        inp[0]     - (input, string) name of the Converter.
        inp[1]     - (input, string) the unit type.
        inp[2]     - (input, string) the 'from' unit type.
        inp[3]     - (input, string) the 'to' unit type.
        inp[4]     - (input, string) the name of the 'from' system.
        inp[5]     - (input, string) the name of the 'to' system.
        inp[6]     - (input, Conversion) a Conversion object containing the 
                                         type groups and associated units for 
                                         the unit type.                           
        """ 
        if len(inp) == 1:
            if isinstance(inp[0],Converter):
                super().__init__(inp[0]._name, inp[0]._fromSystem, 
                                 inp[0]._toSystem, inp[0]._conversion)
                self._type = inp[0]._type
                self._fromType = inp[0]._fromType
                self._toType = inp[0]._toType 
            else:
                super().__init__()
                self._type = "Invalid"
                self._fromType = "Invalid"
                self._toType = "Invalid" 
        elif len(inp) == 5:
            super().__init__(inp[0], inp[2], inp[3], inp[4]) 
            self._type = inp[1]
            self._fromType = inp[1]
            self._toType = inp[1] 
        elif len(inp) == 7:
            super().__init__(inp[0], inp[4], inp[5], inp[6]) 
            self._type = inp[1]
            self._fromType = inp[2]
            self._toType = inp[3] 
        else: 
            super().__init__()
            self._type = "Invalid"
            self._fromType = "Invalid"
            self._toType = "Invalid" 
            

    def addUnit(self,  sysName, unitName, bse):
        """
        Add a unit to the converter.

        Parameters
        ----------
        sysName    - (input, string) name of unit system new unit belongs to.
        unitName   - (input, string) the name of the new unit.
        bse        - (input, UBASE) the new unit.

        Return
        ------
        Boolean: true if the unit as successfully added, false otherwise.
        Return type is a boolean.
        """        
        return self._conversion.addUnit(self._type, sysName, unitName, bse)
    
    def convert(self, *inp):
        """
        Convert input value from its specified 'from' units to the specified 
        'to' units. This method takes three, four or five arguments. If zero 
        or another number are provided and error code is returned instead of 
        the converted value.
        
        Parameters
        ----------
        For three arguments:
        inp[0] value      - (input, double) value of unit in 'from' units.
        inp[1] from       - (input, string) the name of the 'from' units.
        inp[2] to         - (input, string) the name of the 'to' units.
        
        For four arguments:
        inp[0] value      - (input, double) value of unit in 'from' units.
        inp[1] from       - (input, string) the name of the 'from' units.
        inp[2] to         - (input, string) the name of the 'to' units.
        inp[3] asIs       - (input, boolean) if true, do not construct full unit 
                                            names, but use the unit names 
                                            supplied 'as is'.
        For five arguments:
        inp[0] value      - (input, double) value of unit in 'from' units.
        inp[1] from       - (input, string) the name of the 'from' units.
        inp[2] fromSys    - (input, string) the name of the 'from' system.
        inp[3] to         - (input, string) the name of the 'to' units.
        inp[4] toSys      - (input, string) the name of the 'to' system.        
        """        
        if len(inp) == 3:
            return self._conversion.convertUnit(inp[0], self._fromType, 
                                                self._toType, inp[1], 
                                                self._fromSystem, inp[2], 
                                                self._toSystem, False)
        elif len(inp) == 4:
            return self._conversion.convertUnit(inp[0], self._fromType, 
                                                self._toType, inp[1], 
                                                self._fromSystem, inp[2], 
                                                self._toSystem, inp[3])
        elif len(inp) == 5:
            return self._conversion.convertUnit(inp[0], self._fromType, 
                                                self._toType, inp[1], inp[2], 
                                                inp[3], inp[4], False)
        else:
            return UBASE.UBASE.ERROR

    def fromType(self, *inp):
        """
        Get or set the 'from' type. If one argument is supplied, the name of
        the from  type is set to this value. If no arguments are supplied,
        the name of the current from type is returned.

        Parameter
        ---------
        fromType - (input, string) the 'from' unit type. (optional)

        Return
        ------
        Boolean: true if the 'from' type as successfully set, false otherwise.
        Return type is boolean (one argument) or string (no argument).
        """        
        if len(inp) == 1:
            if self._conversion.validateType(inp[0], self._toType):
                self._fromType = inp[0]
                return True
            else:
                return False
        else:
            return self._fromType
    
    def removeUnit(self, sysName, unitName):
        """
        Remove a unit from the converter.

        Parameter
        ---------
        sysName    - (input, string) name of unit system the unit belongs to.
        unitName   - (input, string) the name of the unit to remove.

        Return
        ------
        Boolean: true if the unit as successfully removed, false otherwise.
        Return type is boolean.
        """        
        return self._conversion.removeUnit(self._type, sysName, unitName)
    
    def systemNames(self):
        """
        Get a list of all the system names in the Converter.

        Return
        ------
        A list of system names in the converter.
        Return type is a list of strings.
        """        
        return self._conversion.systemNames(self._type)
    
    def toType(self, *inp):
        """
        Get or set the 'to' type. If one argument is supplied, the name of
        the to  type is set to this value. If no arguments are supplied,
        the name of the current to type is returned.

        Parameter
        ---------
        toType - (input, string) the 'to' unit type. (optional)

        Return
        ------
        Boolean: true if the 'to' type as successfully set, false otherwise.
        String: returns the 'to' type.
        Return type is boolean (one argument) or string (no arguments).
        """        
        if len(inp) == 1:
            if self._conversion.validateType(self._fromType, inp[0]):
                self._toType = inp[0]
                return True
            else:
                return False
        else:
            return self._toType
    
    def type(self):
        """
        Get the name of the unit type of the Converter.

        Return
        ------
        The name of the unit type of the Converter as a string.
        Return type is string.
        """        
        return self._type
        
    def typeGroup(self, system):
        """
        Get a TypeGroup in the converter.

        Parameters
        ----------
        system - (input, string) the name of the unit system.

        Return
        ------
        The specified type group or an invalid type group if
        the specified system was not found. 
        Return type is TypeGroup.        
        """        
        return self._conversion.typeGroup(self._type, system)

    def unit(self, system, name):
        """
        Get a unit in the Converter.

        Parameters
        ----------
        system - (input, string) the name of the unit system the 
                                 requested unit belongs to.
        name   - (input, string) the name of the requested unit.

        Return
        ------
        The specified unit or an invalid unit if
        the specified unit was not found. 
        The return type is UBASE.    
        """        
        return self._conversion.unit(self._type, system, name)

    def unitNames(self, system = None):
        """
        Get a list of all the units names in the specified unit system. If the
        system name argument is supplied the names of the units in that system
        are returned. If no argument is supplied all the units names in the 
        Converter are returned.

        Parameters
        ----------
        system - (input, string) the unit system name of the system the 
                                 requested unit belongs to. (optional)

        Return
        ------
        A list of unit names in the specified system (or) in the Converter.
        Return type is a list of strings.
        """        
        if system == None:
            sysNames = self._conversion.systemNames()
            unitNames = list()
            for  n in sysNames:
                un = self._conversion.unitNames(self._type, n)
                unitNames.extend(un)
            return unitNames
        else:
            return self._conversion.unitNames(self._type, system)
# EOF