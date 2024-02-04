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
   set _TITLE=Generated
   set CLASSPATH=../;../../../UnitConversionLibrary/Java;../../../UnitConversionLibrary/Java/UnitConversion
   set _SOURCES=UnitConversionBasicTest.java UnitConversionConstantTest.java UnitConversionConvertTest.java 
   set _SOURCES=%_SOURCES% UnitConversionUnitsTest.java UnitConversionBaseTest.java
   set _SOURCES=%_SOURCES% UnitTestVersion.java UnitTestValue.java UnitTestConversionBase.java UnitTestSingleSystem.java 
   set _SOURCES=%_SOURCES% UnitTestTypeGroup.java UnitTestUnitConversions.java UnitTestCanonicalSystem.java 
   set _SOURCES=%_SOURCES% UnitTestUBase.java UnitTestConverter.java UnitTestConvert.java UnitTestConversion.java 
   set _SOURCES=%_SOURCES% UnitTestConstants.java UnitTestConstantGroup.java UnitTestBaseSystem.java UnitTestSystemUnits.java
   set _SOURCES=%_SOURCES% SystemTestConstants.java SystemTestUnitConversions.java SystemTestSystemUnits.java
   goto :EOF


