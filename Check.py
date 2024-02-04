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
# File Check.py
#
# Check for errors in unit test output
# 
# Fundamental unit: N/A
#
#################################################################################
# import OS module
import os
 
def getFiles(path,ext): 
    # Get the list of all files and directories
    dir_list = os.listdir(path)
    out_list = []
    for file in dir_list:
       if file.endswith(".txt"):
           out_list.append(file)
    return out_list

def findString(word,path,fileName):

    #string to search in file
    file = open(path+fileName, 'r')
    result = []
    # read all lines using readline()
    lines = file.readlines()
    for line in lines:
        # find() method returns -1 if the value is not found,
        # if found it returns index of the first occurrence of the substring
        if line.find(word) != -1:
           result.append((fileName,lines.index(line),line))
    return result
    
def checkFiles(path, lang): 
    files = getFiles(path,".txt") 
    print(lang)
    print("Files")
    result = []
    count = 1
    hasError = False
    for file in files:
        print(str(count)+" "+file)
        r = findString("***ERROR***",path,file)
        result.extend(r)
        count = count + 1
    print(" ")
    if len(result) == 0:
        print("No errors found")
    else:
        hasError = True
        for entry in result:
            print(entry)
    print(" ")
    return hasError    
            
def main(): 

    r1 = checkFiles("./Test/CPP/TestOutput/" , "C++")
    r2 = checkFiles("./Test/CS/TestOutput/" , "C#")
    r3 = checkFiles("./Test/Java/TestOutput/" , "Java")
    r4 = checkFiles("./Test/Python/TestOutput/" , "Python")
    
    print(" ")
    if r1 or r2 or r3 or r4:
        print("All: Errors Found")
    else:
        print("All: No Errors Found")

            
if __name__ == "__main__":
    main()
    
# EOF