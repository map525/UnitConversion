 @echo off
   color 17
   call :COMMON %1
   goto :EOF

:COMMON
   setlocal
   cd /d "%~dp0."
   call :LOCAL
   if exist *.class del *.class
   echo _________________________
   echo %_TITLE% ...
   echo CLASSPATH=%CLASSPATH%
   javac %_SOURCES%
   set _JAVAC_RC=%ERRORLEVEL%
   if "%_JAVAC_RC%"=="0" echo Success!
   endlocal & set _JAVAC_RC=%_JAVAC_RC%
   if not "%1"=="noPause" pause
   goto :EOF

:LOCAL
   set _TITLE=Test
   set CLASSPATH=./;../../UnitConversionLibrary;../../UnitConversionLibrary/Java;../../UnitConversionLibrary/Java/UnitConversion; 
   set _SOURCES=Example.java
   goto :EOF
