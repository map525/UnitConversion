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
# File ConversionBase.py
#
# Base class for conversions. This class provides methods for accessing
# the units, systems, and type groups that constitute a system of units 
# for a particular unit type. 
#
# Version 1.0
# 
#################################################################################
from . import BaseSystem
from . import TypeGroup
from . import UBASE
import copy

class ConversionBase:
    """
    Base class for conversions.
    
    Attributes
    ----------
        
    _name  - name of the Conversion object; typically the unit type.
    
    _map   - a Conversion consists of one or more BaseSystem with each 
             BaseSystem containing one or more type groups each containing one 
             or more units.
    
    _valid - a flag indicating if the Conversion is valid or not i.e. it 
             contains one or more valid BaseSystems.
                  
    Methods
    -------
    __init__        -  constructor.
    
    actualType      - construct the actual type name.
    
    baseSystemNames - get a list of type or system names in the BaseSystem.
    
    check           - check that software and uit versions match.

    checkName       - check is system is part of unit name.
    
    coreNames       - get a list of type or system names.
    
    fullName        - construct a full unit name from system and unit name.
    
    fullType        - construct a full type name. 
    
    fullUnitName    - construct a full unit name from system and unit name. 
    
    localName       - construct the local unit name from the system and unit names.
    
    localType       - construct a local type name. 
    
    mapNames        - construct list of map names.   

    name            - gets the name of the conversion.
    
    rawUnitName     - get the unit name from the full unit name.
    
    singleCoreNames - get a list of type or system names.
    
    system          - get a BaseSystem in the conversion.
    
    systemNames     - gets a list of all system names in the conversion.
    
    typeGroup       - gets a type groups from the system.
    
    typeGroupFilter - filter TypeGroup
    
    typeNames       - gets a list of type names in the conversion.
    
    unit            - gets a unit from the conversion.
    
    unitNames       - gets a list of all unit names in the conversion.
    
    valid           - gets the validity of the conversion.
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
                self._map = dict()
                self._name = inp[0]
                self._valid = True
                self._us = BaseSystem.BaseSystem()
            elif isinstance(inp[0],ConversionBase):
                self._map = copy.deepcopy(inp[0]._map)
                self._name = inp[0]._name
                self._valid = True
                self._us = BaseSystem.BaseSystem()        
            else:
                self._map = dict()
                self._name = "Invalid"
                self._valid = False
                self._us = BaseSystem.BaseSystem()            
        elif len(inp) == 2:
            self._map = copy.deepcopy(inp[1])
            self._name = inp[0]
            self._valid = True
            self._us = BaseSystem.BaseSystem()        
        else:
            self._map = dict()
            self._name = "Invalid"
            self._valid = False
            self._us = BaseSystem.BaseSystem()

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
        Return type is string.
        """
        return typeName

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
        return list()
            
    def check(self):
        """
        The check method checks if the software version matches
        with the unit versions of its units.
        
        Return
        ------
        True if software and unit versions match, false otherwise.
        """
        for item in self._map.items():
            if item[1].check() == True:
                continue
            else:
                return False
        return True
        
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
        if unitName.find(sysName) == 0:
            return False
        else:
            return True
            
    def coreNames(self):
        """
        Get a list of type or system names.
        
        Returns
        -------
        A list of type or system names. Return type is list of strings.
        """
        keys = []
        for item in self._map.items():
            self.singleCoreNames(item[0], keys)
        return keys
        

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
        name = sysName + "[" + unitName + "]"
        return name

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
        return typeName
        
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
        return unitName
        
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
        return unitName
        
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
        return tpe
        
    def mapNames(self):
        """
        Construct list of map names.
        
        Returns
        -------
        A list of map keys.
        Return type is a list of strings.
        """
        keys = []
        for item in self._map.items():
            keys.append(item[0])
        return keys

    def name(self):
        """
        Get conversion name.
        
        Returns
        -------
        The name of the conversion.
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
        Return type is string.
        """        
        try:
            first = unitName.index('[') + 1
            last = unitName.index(']')
        except:
            first =  0 
            last =  len(unitName) 
        size = last - first
        uName = unitName[first : first + size]
        return uName;

    def singleCoreNames(self,name, lst):
        """
        Get a list of type or system names.
        
        Parameters
        ----------
        name - (input, string)        unit type or system name.
        list - (output, list<string>) list to place results into.
        """
        if name in self._map.keys():
            us = self._map[name]
            names = self.baseSystemNames(us)
            for i in names: 
                if i in lst:
                    continue
                else:
                    lst.append(i)
        else:
            return

    def system(self, name):
        """
        Get a BaseSystem in the conversion.
        
        Parameters
        ----------
        name - name of the requested BaseSystem.

        Return
        ------
        The specified BaseSystem or an invalid BaseSystem if the
        requested BaseSystem was not found.
        Return type is BaseSystem.
        """
        if name in self._map.keys():
            return self._map[name]
        else:
            return self._us
        
    def systemNames(self, tpe = None):
        """
        Get a list of system names in the conversion. This method
        is overridden in the child class. 

        Parameters
        ----------
        tpe   - (input, string) the unit type.

        Return
        ------
        A list of system names in the conversion.
        Return type is a list of strings.
        """
        return list()
 
    def typeGroup(self, tpe, tgroup):
        """               
        Get a type group from the conversion. This method is overridden
        in the child class.

        Parameters
        ----------
        tpe    - (input, string) the unit type.
        tgroup - (input, string) the type group name.

        Return
        ------
        The requested type group or an invalid type 
        group if the type group was not found.
        Return type is TypeGroup.
        """
        actType = self.actualType(tpe,tgroup)
        if actType in self._map.keys():
            bs = self._map[actType]
            tg = TypeGroup.TypeGroup(bs.typeGroup(self.localType(tpe)))
            self.typeGroupFilter(tgroup, tg)
            return tg
        else:
            return TypeGroup.TypeGroup()
 
    def typeGroupFilter(self, name, tg):
        """
        Filter TypeGroup.
        
        Parameters
        ----------
        name - (input, string) type group name to keep.
        tg   - (output, TypeGroup) -  type group to filter.
        """
        return
    
    def typeNames(self):
        """
        Get a list of type names in the conversion. This
        method is overridden in the child class.

        Return
        ------
        A list of type name in the conversion.
        Return type is a list of strings.
        """
        return list()

    def unit(self, tpe, system, name):
        """
        Get a unit from the system. This method is overridden
        in the child class.

        Parameters
        ----------
        tpe    - (input, string) the unit type.
        system - (input, string) the unit system.
        name   - (input, string) the unit name.

        Return
        ------
        The requested unit or an invalid unit if the
        unit was not found. 
        Return type is UBASE.
        """
        typeName = self.actualType(tpe, system)
        if typeName in self._map.keys():
            unitName = self.fullName(system, name)
            fullTypeName  = self.fullType(tpe,system)
            return self._map[typeName].unit(fullTypeName , unitName)
        else:
            return UBASE.UBASE()
    
    def unitNames(self, *inp):
        """
        Get a list of unit names in the conversion. 
        If no arguments (or more than two) are supplied a 
        list of all unit names is returned.
        
        Parameters
        ----------
        inp[0] type   - (input, string) the unit type.
        inp[1] system - (input, string) the unit system.

        Return
        ------
        A list of unit names in the conversion.
        Return type is a list of strings.
        """
        if len(inp) == 2:
            typ = inp[0]
            system = inp[1]
            lst = list()
            actType = self.actualType(typ, system)
            if actType in self._map.keys():
                us = self._map[actType]
                names = us.unitNames(self.localType(typ))
                for n in names:                    
                    if self.checkName(system,n):
                        continue
                    else:
                        lst.append(self.localName(typ,n))
                return lst
            else:
                return lst
        else:
            lst = list()
            for item in self._map.items():
                us = item[1]
                types = us.typeNames();
                for itl in types:
                    names = us.unitNames(itl)
                    for i in names:
                        if i in lst:
                            continue
                        else:
                            lst.append(self.localName(itl, i))
            return lst
    
    def valid(self):
        """
        Get the validity of the conversion.

        Return
        -------
        Boolean: true if the conversion is valid, false otherwise.
        Return type is boolean.
        """
        return self._valid  
# EOF