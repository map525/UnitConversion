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
# File Constants.py
#
# Physical, measured, and other constants. Non-canonical units are generated
# using various physical and measured constants. The SI system is defined in
# terms of physical constants such as the speed of light and these constants
# (and others) are used to determine the value of the various units. Constants 
# can be accessed but cannot be 'converted'.
#
# Version 1.0
# 
#################################################################################
from . import ConstantGroup
from Generated import DU_UNITS
from Generated import PC_UNITS
from Generated import PD_UNITS
from Generated import PM_UNITS
from Generated import SI_UNITS
from Generated import WGS84_MODEL

class Constants(object):
    """
    Physical, measured, and other constants. This class is
    intended as a singleton.
    
    Attributes
    ----------
    
    _map       - all the constants are stores in a HashMap and accessed 
                 though this class.
                
    singleton_ - the one and only instance of the class.
    
    Methods
    -------
    
    __init__ -  constructor.
    
    __new__  -  create and return a new instance of the class.
    
    Instance - returns the one and only instance of the class.
    
    check          - check that software and uit versions match.

    constant - gets a constant.
    
    names    - gets a list of all the constant names.
    """

    __instance = None
    
    @staticmethod 
    def Instance():
        """ 
        Static access method. 
        The Instance static method creates and instance of the Constants class.
         The Constants class is a singleton and is used to return a Constant.
        
        Return
        ------
        The single instance of the class. 
        Return type is Constants.
        """
        if Constants.__instance == None:
            Constants.__instance = Constants()
        return Constants.__instance

    def __new__(self):
        """ Create and return a new instance of the class. """
        if Constants.__instance == None:
            Constants.__instance = super(Constants, self).__new__(self)

        return  Constants.__instance

    def __init__(self): 
        """
        Constructor. The constructor is 'private'; the class is a 'singleton'.  
        It creates Constant objects which contain groups of constants.
        """
        super().__init__()
        self._map = dict()
        self._map.update({"DerivedUnits"         : DU_UNITS.DU_UNITS.Instance()})
        self._map.update({"PhysicalConstants"    : PC_UNITS.PC_UNITS.Instance()})
        self._map.update({"PhysialDefinitions"   : PD_UNITS.PD_UNITS.Instance()})
        self._map.update({"PhysicalMeasurements" : PM_UNITS.PM_UNITS.Instance()})
        self._map.update({"SI"                   : SI_UNITS.SI_UNITS.Instance()})
        self._map.update({"WGS84Model"           : WGS84_MODEL.WGS84_MODEL.Instance()})
        self._map.update({"Invalid"              : ConstantGroup.ConstantGroup()})

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

    def constant(self, constName):
        """
        Get a constant.

        Parameters
        ----------
        constName - (input, string) the name of the constant to retrieve.

        Return
        ------
        The specified constant or an invalid constant if the
        specified constant is not found. 
        Return type is Constant.
        """
        if constName in self._map:
            return self._map.get(constName)	
        else:
            return self._map.get("Invalid")

    def names(self):
        """
        Get a list of all the constant names.

        Return
        ------
        A list of all the constant names.
        Return type is a list of strings.
        """
        keys = list();
        for key in self._map:
           keys.append(key)
        return keys
# EOF