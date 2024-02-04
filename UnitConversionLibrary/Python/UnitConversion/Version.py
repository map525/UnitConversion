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
################################################################################
#
# File Version.py
#
# Software version information. The software version must match the version
# of the unit data contained in the Excel spreadsheet. Checks methods are 
# provided to verify unit and software versions are the same. The UBASE class
# contains the version number provided in the generated unit data code. This
# is compared to the version information contained in this class. The check 
# method is in the following classes: BaseSystem, ConstantGroup, TypeGroup,
# and Value.  
#
# Version 1.0
#
################################################################################


class Version(object):
    """
    Software version information
    
    Attributes
    ----------
    
    _instance - static instance of of the class;
                this class is intended as a singleton.
                
    _valid    - flag indicating that version information is valid.
    
    _version  - software version information. 
                 
    Methods
    -------
    Instance - returns the one and only instance of the class.

    _new__   -  create and return a new instance of the class.

    __init__ -  constructor.

    version  - return software version information.  

    valid    - return true if version information is valid.    
    """

    __instance = None
    """
    The one and only Version object.
    """

    @staticmethod 
    def Instance():
        """ 
        Static access method. 
        The Instance static method creates and instance of the version class. 
        The Version class is a singleton and is used to return the software 
        version for the UnintConversion library.
        
        Return
        ------
        Th single instance of the Version class. 
        The return type is Version.
        """
        if Version.__instance == None:
            Version.__instance = Version()
        return Version.__instance

    def __new__(self):
       """ Create and return a new instance of the class. """
       if Version.__instance == None:
           Version.__instance = super(Version, self).__new__(self)

       return  Version.__instance
       
    def __init__(self):
        """ 
        Constructor. 
        """
        super().__init__()
        self._version = "1.0"
        self._valid = True
        
    def valid(self):
        """
        Return true if version information is valid.
        
        Return
        ------
        True if version information is valid, false otherwise.
        """
        return self._valid

    def version(self):
        """ 
        The version method returns the software version as a string.

        Return
        ------
        The software version as a string e.g. "1.0"
        Return type is string.
        """
        return self._version;

# EOF