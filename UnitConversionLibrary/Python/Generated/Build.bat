cd %~dp0
SET PYTHONPATH=./
color 27
call :COMPILE
goto :EOF

:COMPILE
   python -m compileall -b .
   call :MOVE
   pause
   goto :EOF   

:MOVE
   move /Y *.pyc __pycache__
   goto :EOF

:EOF
   pause
 
