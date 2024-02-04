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
# File CanonicalSystem.py
#
# All unit systems, ancient, historical, and modern contain the four unit types
# for measuring distance, area, weight (mass), and volume. Volume is divided
# into two types: liquid and dry. These five types are termed canonical types
# since (almost) all other types can be expressed as some combination of these
# five types. For example density is mass divided by volume and force is
# mass times length divided by time. The CanonicalSystem class contains systems
# containing these five canonical types. It is a child class of the Conversion
# class which defines the interface to this class.
#
# Version: 1.0
#
#################################################################################

from . import BaseSystem
from . import Conversion
from . import TypeGroup
from . import UBASE

class CanonicalSystem(Conversion.Conversion):
    """
    Base class for canonical (length, area, mass, volume) units.
    
    Attributes
    ----------
    
    None - see base class Conversion.
                 
    Methods
    -------
    __init__        -  constructor.
    
    actualType      - construct the actual type name.
    
    baseSystemNames - get a list of type or system names in the BaseSystem.
    
    checkName       - check is system is part of unit name.

    convertUnit     - convert from one unit to another.
    
    fullName        - construct a full unit name from system and unit name.

    fullUnitName    - construct a full unit name from system and unit name. 
    
    localName       - construct the local unit name from the system and unit names.
    
    rawUnitName     - get the unit name from the full unit name.    

    systemNames     - gets a list of system names in the CanonicalSystem.
   
    typeNames       - gets a list of type names in the CanonicalSystem.

    validateType    - check if conversion between types is allowed.    
    """
    def __init__(self, *inp):  
        """ 
        Constructor 
        If no arguments (or more than two) are supplied and invalid object 
        is created.
        
        Parameters
        ----------
        For one argument:
        inp[0] - (input, string) name of the CanonicalSystem
        inp[0] - (input, CanonicalSystem) other CanonicalSystem to copy
        
        For two arguments:
        inp[0] - (input, string) name of unit base system
        inp[1] - (input, dict) units for conversion.
        """
        if len(inp) == 1:
            if isinstance(inp[0],str):
                super().__init__(inp[0])
            elif isinstance(inp[0],CanonicalSystem):
                super().__init__(inp[0]._name, inp[0]._map)
            else:
                super().__init__()
        elif len(inp) == 2:
            super().__init__(inp[0], inp[1])
        else:
            super().__init__()

    def actualType(self, typeName, systemName):
        """
        Construct the actual type name. Type name is dependent on  
        on the system: either CanonicalSystem or SingleSystem.
        This method is overridden in the child class.

        Parameters
        ----------
        typeName    - (input, string) the type.
        systemName  - (input, string) the system.

        Return
        ------
        The system specific type.
        The return type is a string.
        """
        return systemName

    def baseSystemNames(self, bs):
        """
        Get a list of type or system names in the BaseSystem.
        
        Parameters
        ----------
        bs   - (input, BaseSystem) BaseSystem whose names are required.

        Return
        ------
        A list of names in the BaseSystm. Return type is list of strings.
        """
        return bs.typeNames()

    def checkName(self, sysName, unitName):
        """
        Check is system is part of unit name. 
        
        Parameters
        ----------
        sysName  - (input, string) unit system name.
        unitName - (input, string) unit name.
        
        Return
        ------
        A boolean: true is system name is part of unit name.
        """
        return False

    def convertUnit(self, value, fromTpe, toTpe, frm, fromSys, to, toSys, asIs):
        """
        Convert from one unit to another. Example of usage is as follows:

        double tempCelsius = usb.convertUnit(300.0,  "temperature", "Kelvin", 
                                             "SI", "Celsius", "INT", false);

        converts two meters (SI system) to equivalent feet (US system).

        Parameters
        ----------        
        value   - (input, double)  value of the unit to be converted.
        fromTpe - (input, string)  'from' unit type.
        toTpe   - (input, string)  'to' unit type.
        from    - (input, string)  name of 'from' unit.
        fromSys - (input, string)  name of 'from' system.
        to      - (input, string)  name of 'to' unit.
        toSys   - (input, string)  name of 'to' system.
        asIs    - (input, boolean) flag if false construct full unit names 
                                   from inputs.

        Return
        ------
        The value of the converted unit (to) as a double.
        Return type is double.
        """       
        if fromSys in self._map.keys() and toSys in self._map.keys():
            fromBS = self._map[fromSys]
            toBS = self._map[toSys]
            dbTo = toBS.unit(toTpe, to)
            dbFrom = fromBS.unit(fromTpe, frm)           
            if dbFrom.valid() and dbTo.valid() and dbTo.value() != 0 \
                              and  dbTo.type() == dbFrom.type():
                fromValue = value * dbFrom.value() + dbFrom.offset()
                return (fromValue - dbTo.offset()) / dbTo.value()
            else:
                return UBASE.UBASE.ERROR
        else:
            return UBASE.UBASE.ERROR

    def fullName(self,sysName, unitName):
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
        Return type is string.
        """
        return unitName

    def fullUnitName(self, systemName, unitName):
        """
        Construct the full unit name from the system and unit names.

        Parameters
        ----------
        systemName  - (input, string) the system name.
        unitName    - (input, string) the unit name.

        Return
        ------
        The full unit name (unit name plus the system name).
        Return type is a string.
        """
        return super().rawUnitName(unitName);
        
    def localName(self, systemName, unitName):
        """
        Construct the local unit name from the system and unit names.
        
        Parameters
        ---------
        systemName - (input, string) the system name.
        unitName   - (input, string) the unit name.
        
        Returns
        -------
        The full unit name (unit name plus the system name). 
        Return type is string.
        """
        return super().fullName(systemName, unitName)
        
    def rawUnitName(self, unitName):
        """
        Get the unit name from the full unit name.

        Parameters
        ----------
        unitName    - (input, string) the full unit name.

        Return
        ------
        The unit name stripped of the system name as a string.
        Return type is string.
        """        
        return unitName;

    def systemNames(self, *inp):
        """
        Gets a list of system names in the CanonicalSystem.
        Note: argument is optional.

        Parameters
        ----------
        inp[0] typ   - (input, string) the unit type.

        Return
        ------
        A list of system name in the CanonicalSystem.
        Return type is a list of strings.
        """
        if len(inp) == 1:
            return self.mapNames()
        else:
            return self.mapNames()

    def typeNames(self):
        """
        Get a list of type names in the conversion. This
        method is overridden in the child class.

        Return
        ------
        A list of type name in the conversion.
        Return type is a list of strings.
        """
        return self.coreNames()
          
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
        True if conversion between type is allowed, false otherwise.
        Return type is boolean.
        """
        tNames = self.typeNames()
        aNames = ['Dry', 'Liquid', 'Volume']
        fromOK = (True if len(tNames) == 0 else fromType in tNames)
        toOK   = (True if len(tNames) == 0 else toType in tNames)
        if fromOK and toOK:
            if fromType == toType:
                return True
            elif fromType in aNames and toType in aNames:
                return True
            else:
                return False
        else:
            return False
   
# EOF