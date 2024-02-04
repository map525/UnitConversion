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
# File SingleSystem.py
#
# The SingleSystem class contains unit systems all having units of the same
# type. Examples include density, force, power, and angle. A SingleSystem
# contains only a single type group but can consist of units from many
# different systems. Typically, a SingleSystem is either modern or historical
# but not ancient. It is a child class of Conversion which defines its 
# interface.
#
# Version: 1.0
#
#################################################################################

from . import BaseSystem
from . import Conversion
from . import TypeGroup
from . import UBASE

class SingleSystem(Conversion.Conversion):
    """
    The SingleSystem class contains unit systems all having units of the 
    same type.
    
    Attributes
    ----------
    
    See parent class: Conversion.
                 
    Methods
    -------
    __init__        -  default constructor.
    
    baseSystemNames - get a list of type or system names in the BaseSystem.
    
    convertUnit     - convert from one unit to another.

    fullType        - construct a full type name. 

    fullUnitName    - construct a full unit name from system and unit name. 

    localType       - construct a local type name. 
    
    systemNames     - gets a list of system names in the SingleSystem.
    
    typeGroupFilter - filter TypeGroup.

    typeNames       -  gets a list of type names in the SingleSystem.   
    """
    def __init__(self, *inp): 
        """ 
        Constructor. 
        If no arguments (or more than two) are supplied and invalid object 
        is created.
        
        Parameters
        ----------
        For one argument:
        
        inp[0] - (input, string) name of the  SingleSystem
        
        OR:
        inp[0] - (input, SingleSystem) - other SingleSystem to copy.
        
        For two arguments:
        inp[0] - (input, string) name of unit SingleSystem
        inp[1] - (input, dict) units for conversion (BaseSystem).
        """    
        if len(inp) == 1:
            if isinstance(inp[0],str):
                super().__init__(inp[0])
            elif isinstance(inp[0],SingleSystem):
                super().__init__(inp[0]._name, inp[0]._map)
            else:
                super().__init__()
        elif len(inp) == 2:
            super().__init__(inp[0], inp[1])
        else:
            super().__init__()

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
        return bs.systemNames("unit")

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
        frm     - (input, string)  name of 'from' unit.
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
        tpe = fromTpe
        if tpe in self._map.keys() and fromTpe == toTpe:
            if asIs == False:
                sysFrom = fromSys + "["+frm+"]"
                sysTo   = toSys + "["+to+"]"
            else:
                sysFrom = frm
                sysTo = to
            system = self._map[tpe]
            dbTo = system.unit("unit",sysTo)
            dbFrom = system.unit("unit",sysFrom)
            if dbFrom.valid() and dbTo.valid() and dbTo.value() != 0 \
                              and  dbTo.type() == dbFrom.type():
                fromValue = value * dbFrom.value() + dbFrom.offset()
                return (fromValue - dbTo.offset()) / dbTo.value()
            else:
                return UBASE.UBASE.ERROR
        else:
            return UBASE.UBASE.ERROR

    def fullType(self,typeName, systemName):
        """
        Construct a full type name. Type name is dependent on  
        on the system: either CanonicalSystem or SingleSystem.
        This method is overridden in the child class.

        Parameters
        ----------
        typeName    - (input, string) the type.
        systemName  - (input, string) the system.

        Return
        ------
        The system specific type.
        Return type is string.
        """
        return "unit"

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
        Return type is string.
        """
        return super().fullName(systemName,unitName)

    def localType(self, tpe):
        """
        Construct a local type name. 
        
        Parameters
        ----------
        tpe - (input, string) the unit type.
        
        Returns
        -------
        Type for the unit based on class. 
        Return type is string.
        """
        return "unit"        

    def systemNames(self, *inp):
        """
        Get a list of system names in the SingleSystem.
        If no arguments are supplied then a list of all system names is 
        returned, otherwise gets a list of system names of the given
        type as supplied by the input argument.

        Parameters
        ----------
        inp[0]   - (input, string) the unit type. (optional)

        Return
        ------
        A list of system name in the SingleSystem.
        Returns a list of strings.
        """
        if len(inp) == 1:
            lst = list()
            self.singleCoreNames(inp[0],lst)
            return lst
        else:        
            return self.coreNames()

    def typeGroupFilter(self, name, tg):
        """
        Filter TypeGroup.
        
        Parameters
        ----------
        name - (input, string) type group name to keep.
        tg   - (output, TypeGroup) -  type group to filter.
        """
        names = tg.unitNames()
        for it in names:
            if name in it:
                continue
            else:
                tg.removeUnit(it)

    def typeNames(self):
        """
        Get a list of type names in the SingleSystem.

        Return
        ------
        A list of type name in the SingleSystem.
        Return type is a list of strings.
        """
        return self.mapNames()
# EOF
