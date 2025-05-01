@echo off
echo Uninstalling HPP...
timeout 2 >nul
del C:\Windows\System32\vvm.exe >nul
del C:\Windows\System32\hpp.exe >nul
del C:\users\%username\desktop\hpp_ide.exe >nul
del C:\Windows\System32\hppinstaller.exe.exe >nul
del C:\vvm.uninstall >nul
del C:\hpp.uninstall >nul
del C:\hpp_ide.uninstall >nul
del Uninstall.bat >nul
echo HPP was uninstalled.
