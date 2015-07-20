@echo off
:a
taskkill /im keepalive.exe & taskkill /im binder.exe && exit
goto :a