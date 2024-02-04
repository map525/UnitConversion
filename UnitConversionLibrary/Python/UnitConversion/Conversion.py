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
# File Conversion.py
#
# Base class for the CanonicalSystem and SingleSystem classes. This class 
# provides an interface for unit conversions between units of the same 
# type but in different systems e.g. feet to  meters, etc.
#
# Version 1.0
# 
#################################################################################
from . import ConversionBase
from . import BaseSystem
from . import TypeGroup
from . import UBASE
import copy

class Conversion(ConversionBase.ConversionBase):
    """
    Base class for the CanonicalSystem and SingleSystem classes.
    
                  
    Methods
    -------
    __init__     -  constructor.
    
    addUnit      - add a unit to the converter.
    
    convertUnit  - convert input value from its specified 'from' units in the    
                   'from' system to the specified 'to' units in the 'to' system.
    
    removeUnit   - remove a unit from the conversion.
    
    validateType - Return true if conversion between types is allowed, false 
                   otherwise.
    """
    
    def __init__(self, *inp):  
        """
        Constructor. If one or two arguments are supplied a valid Conversion 
        is constructed, otherwise a invalid Conversion is created.
        
        Parameters
        ----------
        For one argument:
        inp[0] name  - (input, string) name of the Conversion.

        OR:
        inp[0] other - (input, Conversion) other Conversion to copy.

        
        For two arguments:
        inp[0] name - (input, string) name of the Conversion.
        inp[1] map  - (input, dict) units in the Conversion.        
        """        
        if len(inp) == 1:
            if isinstance(inp[0],str):
                super().__init__(inp[0])
            elif isinstance(inp[0],Conversion):
                super().__init__(inp[0]._name, inp[0]._map)
            else:
                super().__init__()
        elif len(inp) == 2:
            super().__init__(inp[0], inp[1])
        else:
            super().__init__()

    def addUnit(self, typeName, sysName, unitName, bse):
        """
        Add a unit to the converter.
        
        Parameters
        ----------
        typeName   - (input, string) the name of the unit type being added.
        sysName    - (input, string) name of unit system new unit belongs to.
        unitName   - (input, string) the name of the new unit.
        bse        - (input, UBASE)  the new unit.

        Return
        ------
        Boolean true if the unit as successfully added, false otherwise.
        Return type is boolean.
        """
        typ = self.actualType(typeName, sysName)
        if typ in self._map.keys():
            name = self.fullName(sysName,unitName)
            fullTypeName   = self.fullType(typeName, sysName)
            return self._map[typ].addUnit(fullTypeName ,name,bse)
        else:
            return False
            
    def convertUnit(self, value, fromTpe, toTpe, frm, fromSys, to, toSys, asIs):
        """
        Convert input value from its specified 'from' units in 'from' system to 
        the specified 'to' units in 'to' system. This method is overridden in 
        the child class.     

        Parameters
        ----------
        value      - (input, double) value of unit in 'from' units.
        fromTyp    - (input, string) the 'from' unit type.
        toTyp      - (input, string) the 'to' unit type.
        frm        - (input, string) the name of the 'from' unit.
        fromSys    - (input, string) the name of the 'from' system.
        to         - (input, string) the name of the 'to' unit.
        toSys      - (input, string) the name of the 'to' system.
        asIs       - (input, boolean) if true, do not construct full unit names,
                                      but use the unit names supplied 'as is'.

        Return
        ------
        The converted unit value as a double.
        Return type is double.
        """
        return UBASE.UBASE.ERROR

    def removeUnit(self, typeName, sysName, unitName):
        """
        Remove a unit from the Conversion.

        Parameters
        ----------
        typeName   - (input, string) the name of the unit type being removed.
        sysName    - (input, string) name of unit system the unit belongs to.
        unitName   - (input, string) the name of the unit to remove.

        Return
        ------
        Boolean: true if the unit as successfully removed, false otherwise.
        Return type is boolean.
        """
        typ = self.actualType(typeName, sysName)
        if typ in self._map.keys():
            name = self.fullName(sysName,unitName)
            fullTypeName   = self.fullType(typeName, sysName)
            return self._map[typ].removeUnit(fullTypeName , name)
        else:
            return False

    def validateType(self, fromType, toType):
        """
        Return true if conversion between types is allowed, 
        false otherwise.

        Parameters
        ----------
        fromType  - (input, string) the 'from' unit type.
        toType    - (input, string) the 'to' unit type.

        Return
        ------
        True if conversion between types is allowed, false otherwise.
        Return type is boolean.
        """
        tNames = self.typeNames() 
        fromOK = (True if len(tNames) == 0 else fromType in tNames)
        toOK   = (True if len(tNames) == 0 else toType in tNames)
    
        if fromType == toType and fromOK and toOK:
            return True
        else:
            return False
   
# EOF