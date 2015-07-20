@echo off
echo 1. Devathai Kandaen
echo 2. Konji Konji - Veera
set /p input=SONG number : 
if %input%==1 goto :a
if %input%==2 goto :b
:a
start mus
exit
:b
start nu