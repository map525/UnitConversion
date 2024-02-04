cd %~dp0
rem set PATH=%PATH%;%~dp0
set CLASSPATH=./;../../UnitConversionLibrary/Java;../../UnitConversionLibrary/Java/UnitConversion
color 17
cmd /K java UnitConversionTest ALL
