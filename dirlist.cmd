@echo off
 if EXIST %1 goto start
 echo Drag and drop any file onto this program to grab its parent directory listing.
 pause
 goto end
 :start
 echo "%~dp1"
 dir "%~dp1" > dir.txt || pause
 start dir.txt
 :end