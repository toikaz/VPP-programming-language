@echo off
echo Uninstalling HPP...
timeout 2 >nul
set /p VAR1=<C:\hpp.uninstall >nul
set /? |find "/P" >nul
set /p VAR2=<C:\hpp_ide.uninstall >nul
set /? |find "/P" >nul
set /p VAR3=<C:\vvm.uninstall >nul
set /? |find "/P" >nul
del %var1% >nul
del %var2% >nul
del %var3% >nul
del C:\vvm.uninstall >nul
del C:\hpp.uninstall >nul
del C:\hpp_ide.uninstall >nul
del Uninstall.bat >nul
echo HPP was uninstalled.
