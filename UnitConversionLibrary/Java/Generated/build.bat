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
   set _TITLE=Generated
   set CLASSPATH=../
   set _SOURCES=DU_UNITS.java PC_UNITS.java PD_UNITS.java  PM_UNITS.java
   set _SOURCES=%_SOURCES% SI_UNITS.java SYSTEM_UNITS.java GLOBAL_UNITS.java
   set _SOURCES=%_SOURCES% Angle.java Density.java EM.java Energy.java
   set _SOURCES=%_SOURCES% Flow.java Force.java EM.java Frequency.java
   set _SOURCES=%_SOURCES% Luminosity.java Molarity.java Power.java Pressure.java
   set _SOURCES=%_SOURCES% Radiation.java SpecificDensity.java Time.java VelAccJrk.java
   set _SOURCES=%_SOURCES% Wavenumber.java Temperature.java count.java Computer.java
   set _SOURCES=%_SOURCES% WGS84_MODEL.java Viscosity.java
   goto :EOF


