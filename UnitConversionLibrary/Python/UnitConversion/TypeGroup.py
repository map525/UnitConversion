#################################################################################
#12345678901234567890123456789012345678901234567890123456789012345678901234567890
#################################################################################
# PROJECT: Unit Conversion
#
# Copyright Copyright 2024 MAP
#
# Unpublished - Rights reserved under the Copyright Laws of the United States
#
################################################################################
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
# File TypeGroup.py
#
# A type group consists of one or more units of the same type (having the same 
# dimensions). Units are contained in the UBASE class which contains the unit 
# value, name, system, and type information. A type group is a collection
# of related units with the same type and belonging to a system or some other 
# collection of units.
# 
# Version: 1.0
#
#################################################################################

from . import UBASE
from . import Version
import copy

class  TypeGroup:
    """
    A type group consists of one or more units of the same type.
    
    Attributes
    ----------
    
    _base  - An invalid unit to be returned in case of error (unit requested 
             not in the type group.

    _name  - The name of the type group.
       
    _unit  - A TypeGroup consists of one or more units (UBASE) and these are 
             stored in a dictionary and accessed by the unit name.
             
    _valid - Flag that is set to true if the system contains one or more valid
             units.  
                 
    Methods
    -------
    __init__    -  Constructor.
    
    addUnit     - add a unit from the TypeGroup.

    check       - checks if the software version matches with the unit versions.

    name        - gets the name of the TypeGroup.
    
    removeUnit  - remove a unit from the TypeGroup.
    
    systemNames - gets a list of the names of all the systems in the TypeGroup.

    unit        - return a unit from the type group.
    
    unitNames   -  gets a list of the names of all the units in the TypeGroup.  
    
    valid       - return true if a valid TypeGroup, false otherwise.   
    
    version     - gets the software version.
    """
    def __init__(self, *inp):
        """
        Constructor. If no arguments (or more than three) are supplied
        and 'invalid' TypeGroup is constructed. That is one with no
        units. If one, two, three arguments are supplied then a valid TypeGroup 
        is constructed from these arguments. 
        
        Parameters
        ---------- 
        For one argument:
        inp[0] - (input, TypeGroup) - other TypeGroup to copy.
        
        For two arguments:        
        inp[0] - (input, string) name of the TypeGroup.
        inp[1] - (input, dictionary(string UBASE)) dictionary of units  
                                                   comprising the TypeGroup.
        For three arguments:        
        inp[0] - (input, string) name of the TypeGroup.
        inp[1] - (input, dictionary(string UBASE)) dictionary of units  
                                                   comprising the TypeGroup.
        inp[2] - (input, string) software version.
        """    
        if len(inp) == 1:
            if isinstance(inp[0],TypeGroup): 
                self._name = inp[0]._name
                self._valid = inp[0]._valid
                self._unit = copy.deepcopy(inp[0]._unit)
                self._base = UBASE.UBASE(inp[0]._base)
                self._version = inp[0]._version
            else:            
                self._name = "Invalid"
                self._valid = False
                self._unit = dict()
                self._base = UBASE.UBASE()
                self._version = "Invalid"
        elif len(inp) == 2:
            self._name = inp[0]
            self._valid = True
            self._unit = dict()
            self._base = UBASE.UBASE()
            self._version = inp[1]
       
        elif len(inp) == 3:
            self._name = inp[0]
            self._valid = True
            self._unit = copy.deepcopy(inp[1])
            self._base = UBASE.UBASE()
            self._version = inp[2]
        else:
            self._name = "Invalid"
            self._valid = False
            self._unit = dict()
            self._base = UBASE.UBASE()
            self._version = "Invalid"

    def addUnit(self, name, dbase):
        """
        Add a unit from the TypeGroup.

        Parameters
        ----------
        name  - (input, string) name of unit to add.
        dbase - (input, UBASE) unit to add.

        Return
        ------        - 
        Boolean: true if the unit was successfully added, false otherwise.
        Return type is boolean.
        """
        if name in self._unit.keys():
           return False
        else: 
           self._unit.update({name: dbase})           
           return True

    def check(self):
        """
        The check method checks if the software version matches with the unit
        versions. Units are auto generated from an Excel spreadsheet using VBA
        code.

        Return
        ------
        Boolean: true if software and unit versions match, false otherwise.
        Return type is boolean.
        """
        v = Version.Version.Instance()
        for item in self._unit.items():
            if item[1].version() == v.version():
                continue
            else:
                return False
        return True

    def name(self):
        """
        Get the name of the TypeGroup.

        Return
        ------
        The TypeGroup name as a string.
        Return type is a string.
        """
        return self._name

    def removeUnit(self, name):
        """
        Remove a unit from the TypeGroup.

        Parameters
        ----------
        name - (input, string) name of unit to remove.

        Return
        ------
        Boolean: true if the unit was successfully removed, false otherwise.
        Return type is boolean.
        """
        try:
           rv = self._unit.pop(name)
           return True
        except KeyError:
           return False;

    def systemNames(self): 
        """
        Get a list of the names of all the systems in the TypeGroup.

        Return
        ------        
        A list of system names.
        Return type is a list of strings.
        """
        lst = list()
        for item in self._unit.items():
           name = item[1].system();
           if name in lst:
              continue
           else:
              lst.append(name)
        return lst
 
    def unit(self, name):
        """
        Get the named unit.

        Parameters
        ----------
        name - (input, string) name of unit to retrieve.

        Return
        ------   
        The named unit or an invalid unit if a unit
        having the specified name could not be found.
        The return type is UBASE.
        """
        if name in self._unit.keys():
            return self._unit[name]
        else:
            return self._base

    def unitNames(self): 
        """
        Get a list of the names of all the units in the TypeGroup.

        Return
        ------
        A list of unit names.
        Return type is a list of strings.
        """
        return list(self._unit.keys())
        
    def valid(self):
        """
        Get the validity of the TypeGroup.

        Return
        ------
        Boolean: true if the TypeGroup is valid i.e. it contains
                one or more valid units.
        Return type is boolean.
        """
        return self._valid 
        
    def version(self):
        """
        Get the software version.

        Return
        ------
        The software version as a string.
        Return type is a string.
        """
        return self._version           
# EOF
