@echo off
set /a "x=6"
set /a "A=10"
set /a "T=24"
set /A y=A*sin(2*PI)
echo %x% %A% %T% %y%
REM :loop
REM set /a "var=%A%*sin(2*PI/%T%*%x%)"
REM echo %var%
REM set /a "x+=1"
REM if %x% GTR 60 call: loop
REM call: ed

REM :ed
REM goto :eof