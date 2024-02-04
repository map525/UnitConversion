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
# File Distribute.py
#
# Distribute generated files into language specific generated directories.
# 
# Fundamental unit: N/A
#
#################################################################################

import os
import shutil
 
def getFiles(path,ext): 
    # Get the list of all files and directories
    dir_list = os.listdir(path)
    out_list = []
    for file in dir_list:
       if file.endswith(ext):
           out_list.append(file)
    return out_list

    
def distributeFiles(path, ext, dest, lang): 
    files = getFiles(path,ext) 
    print(lang)
    print("Files: "+ str(len(files)))
    count = 1
    hasError = False
    for file in files:
        src = path+file
        #dst = dest+file
        print(str(count)+" "+file)
        try:
            shutil.copy2(src, dest)
        except Exception as error:
            hasError = True
        count = count + 1
    print(" ")
    if hasError:
        print("Error copying files")
    else:
        print("Files copied successfully")
    print(" ")
    return hasError      
            
def main(): 

    r0 = distributeFiles("./Output/", ".hpp",  "./UnitConversionLibrary/CPP/Generated/" , "C++")
    r1 = distributeFiles("./Output/", ".cpp",  "./UnitConversionLibrary/CPP/Generated/" , "C++")
    r2 = distributeFiles("./Output/", ".cs",   "./UnitConversionLibrary/CS/Generated/" , "C#")
    r3 = distributeFiles("./Output/", ".java", "./UnitConversionLibrary/Java/Generated/" ,   "Java")
    r4 = distributeFiles("./Output/", ".py",   "./UnitConversionLibrary/Python/Generated/" , "Python")
    
    print(" ")
    if r0 or r1 or r2 or r3 or r4:
        print("All: Errors copying files")
    else:
        print("All: No Errors copying files")

            
if __name__ == "__main__":
    main()

# EOF