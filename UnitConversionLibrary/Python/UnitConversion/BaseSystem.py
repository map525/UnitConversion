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
# File BaseSystem.py
#
# A Collection of one or more type groups. There are two types of BaseSystems:
# one consisting of a single type group and one containing the five canonical
# type groups (length, area, mass, liquid volume, and dry volume). BaseSystems
# with a single type group have units all having the same type (dimension).
# BaseSystems with the five canonical type groups have units tied to a
# place or origin (usually a country).
#
# Version 1.0
#
#################################################################################
from . import TypeGroup
from . import UBASE
from . import Version
import copy


class  BaseSystem:
    """
    A Collection of one or more type groups. 
    
    Attributes
    ----------
    
    _name    - The name of the BaseSystem.
    
    _units   - A BaseSystem consists of one or more TypeGroup. A TypeGroup 
               contains one or more units (UBASE). The TypeGroup are stored 
               in a dictionary and accessed by name. 
    
    _valid   - true if the BaseSystem contains one or more valid TypeGroups.
    
    _version - the software version.
    
                  
    Methods
    -------
    __init__    -  Constructor.
    
    addUnit     -  add a unit to the BaseSystem.

    check       - the check method checks if the software version matches with 
                  the unit versions of the units in each TypeGroup.
    
    name        - gets the name of the BaseSystem.
    
    removeUnit  - remove a unit from the BaseSystem.
    
    systemNames - gets a list of system names in the BaseSystem.
    
    typeNames   - the typeNames method returns a list of types of 
                  units in the BaseSystem.

    unit        - gets a  unit from the BaseSystem.
    
    unitNames   - gets a list of unit names in the BaseSystem.
    
    typeGroup   - gets a TypeGroup from the BaseSystem.
    
    valid       - gets the validity of the BaseSystem.
    
    version     - gets the software version.
    """

    def __init__(self, *inp):
        """
        Constructor. The constructor  takes either zero, one, three or seven 
        arguments. Other numbers are treated as as zero arguments.

        Parameters
        ----------
        For one argument:
        inp[0] other   - (input, string) a BaseSystem.
        
        For three arguments:
        inp[0] name    - (input, string) name of BaseSystem.
        inp[1] unit    - (input, dict(string,UBASE)) units in the BaseSystem.
        inp[2] version - (input, string) software version.
        
        For seven arguments:
        name    - (input, string) name of BaseSystem.
        length  - (input, dict(string,UBASE)) length units in the BaseSystem.
        area    - (input, dict(string,UBASE)) area units in the BaseSystem.
        mass    - (input, dict(string,UBASE)) mass units in the BaseSystem.
        liquid  - (input, dict(string,UBASE)) liquid volume units in the BaseSystem.
        dry     - (input, dict(string,UBASE)) dry volume units in the BaseSystem.
        version - (input, string) software version.
        
        For zero or other numbers:
        An invalid object is created i.e. has no units.
        """
        if len(inp) == 1:
            if isinstance(inp[0],BaseSystem):
                self._name = inp[0]._name
                self._valid = True
                self._units = copy.deepcopy(inp[0]._units)
                self._version = inp[0]._version
            else:
                self._name = "Invalid"
                self._valid = False
                self._units = dict()
                self._version = "Invalid"    
        elif len(inp) == 7:
            self._name = inp[0]
            self._valid = True
            self._units = dict()
            self._units.update({"Length" : TypeGroup.TypeGroup("Length",inp[1],inp[6])})
            self._units.update({"Area" :   TypeGroup.TypeGroup("Area",  inp[2],inp[6])})
            self._units.update({"Mass" :   TypeGroup.TypeGroup("Mass",  inp[3],inp[6])})
            self._units.update({"Liquid" : TypeGroup.TypeGroup("Liquid",inp[4],inp[6])})
            self._units.update({"Dry" :    TypeGroup.TypeGroup("Dry",   inp[5],inp[6])})
            self._units.update({"Volume" : TypeGroup.TypeGroup("Volume",inp[6])})
            self._version = inp[6]
        elif len(inp) == 3:
            self._name = inp[0]
            self._valid = True
            self._units = dict()
            self._units.update({"unit" : TypeGroup.TypeGroup(inp[0],inp[1],inp[2])}) 
            self._version = inp[2]         
        else:
            self._name = "Invalid"
            self._valid = False
            self._units = dict()
            self._version = "Invalid"

    def addUnit(self, typ, name, dbase):
        """
        Add a unit to the BaseSystem.

        Parameters
        ----------
        typ   - (input, string) the unit type.
        name  - (input, string) the unit name.
        base  - (input, UBASE) the unit.

        Return
        ------
        Boolean: true if successful, false otherwise.
        Return type is boolean.
        """
        if typ in self._units:
            return self._units[typ].addUnit(name, dbase)
        else:
            return False

    def check(self):
        """
        The check method checks if the software version matches with the unit
        versions of the units in each TypeGroup. Units are auto generated from 
        an Excel spreadsheet using VBA code.

        Return
        ------
        Boolean: true if software and unit versions match, false otherwise.
        Return type is boolean.
        """
        v = Version.Version.Instance()
        if self._version == v.version():
            for item in self._units.items():
                if item[1].check() == True:
                    continue
                else:
                    return False
            return True
        else:
            return False

    def name(self):
        """
        Get the name of the BaseSystem.

        Return  - the name of the BaseSystem as a string.
        Return type is string.
        """
        return self._name

    def removeUnit(self, typ, name):
        """
        Remove a unit from the BaseSystem.

        Parameters
        ----------
        typ   - (input, string) the unit type.
        name  - (input, string) the unit name.

        Return
        ------
        Boolean: true if successful, false otherwise.
        Return type is boolean.
        """
        if typ in self._units: 
            return self._units[typ].removeUnit(name)
        else:
            return False           

    def systemNames(self,typ):
        """
        Gets a list of system names in the BaseSystem.

        Parameters
        ----------
        typ  - (input, string) the unit type.

        Return
        ------
        A list of system names in the BaseSystem.
        Return type is list of strings.
        """
        if typ in self._units:
            return self._units[typ].systemNames()
        else:
            return list()

    def typeGroup(self, typ):
        """
        Get a TypeGroup from the BaseSystem.

        Parameters 
        ----------
        typ - (input, string) the unit type.

        Return
        ------
        The requested TypeGroup (if found) or an
        invalid TypeGroup if not found. 
        Return type is TypeGroup.
        """
        if typ in self._units:  
            return self._units[typ]
        else:
            return TypeGroup.TypeGroup()
            
    def typeNames(self):
        """
        The typeNames method returns a list of types of units
        in the BaseSystem. Unit types examples are length, area, force,
        angle, etc.

        Return
        ------
        A list of unit types in the BaseSystem.
        Return type is list of strings.
        """
        keys = list()
        for key in self._units:
           keys.append(key)
        return keys

    def unit(self, typ, name):
        """
        Get a  unit from the BaseSystem.

        Parameters
        ----------
        typ  - (input, string) the unit type.
        name - (input, string) the unit name.

        Return
        ------
        The requested unit (if found) or an
        invalid unit if not found. 
        Return type is UBASE.
        """
        if typ in self._units:  
            return self._units[typ].unit(name)
        else:
            return UBASE.UBASE()

    def unitNames(self,typ):
        """
        Get a list of unit names in the BaseSystem.

        Parameters
        ----------
        typ  - (input, string) the unit type.

        Return
        ------
        A list of unit names in the BaseSystem.
        Return type is list of strings.
        """
        if typ in self._units:  
            return self._units[typ].unitNames()
        else:
            return list()
     
    def valid(self):
        """
        Get the validity of the BaseSystem.

        Return
        ------
        Boolean: true if the BaseSystem contains one or more
                 valid TypeGroups.
        Return tyoe is boolean.
        """
        return self._valid

    def version(self):
        """
        Get the software version.

        Return
        ------
        The software version as a string.
        Return type is string.
        """
        return self._version           
# EOF
