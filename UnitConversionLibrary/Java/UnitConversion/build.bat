 @echo off
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
   set _TITLE=Data
   set CLASSPATH=../
   set _SOURCES=Value.java UBase.java Conversion.java ConversionBase.java Convert.java 
   set _SOURCES=%_SOURCES% Converter.java BaseSystem.java TypeGroup.java Constants.java
   set _SOURCES=%_SOURCES% CanonicalSystem.java ConstantGroup.java SingleSystem.java
   set _SOURCES=%_SOURCES% SystemUnits.java UnitConversions.java Version.java 
   goto :EOF
