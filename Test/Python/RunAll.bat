cd %~dp0
rem set PATH=%PATH%;%~dp0
SET PYTHONPATH=./;../../UnitConversionLibrary/Python
color 27
cmd /K python UnitConversionTest.py ALL
