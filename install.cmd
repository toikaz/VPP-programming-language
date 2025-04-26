@echo off
mode con:cols=70 lines=20
color 0A
title HPP Installer
cls

:main
cls
echo =====================================================================
echo                            HPP Installer
echo =====================================================================
echo.
echo                Welcome to the HPP 2.0.9 Installer!
echo             Your simple tool for powerful programming.
echo.
echo                [Press Enter to start installation]
pause >nul
goto set

:set
cls
echo =====================================================================
echo                              HPP Settings 
echo =====================================================================                                                              
echo.
echo Choose installation type:
echo 1. Install to system path (Recommended)
echo 2. Install to custom path
echo.

bin\batbox /g 1 17 /c 0x2f /d ""
set /p choice=Select an option (1 or 2): 
if "%choice%"=="1" goto install_system
if "%choice%"=="2" goto install_custom
echo Invalid choice! Please select 1 or 2.
pause >nul
goto set

:install_custom
cls
color 0C
echo =====================================================================
echo                      HPP Custom Path Installation 
echo =====================================================================                                                              
echo.
echo WARNING: Installing in a custom path may limit functionality.
echo You will need to run HPP from the terminal like this:
echo     path_to_hpp path_to_file.hpp
echo It is recommended to install in the default path.
echo.
set /p custom_path=Enter your custom installation path: 
goto proceed_install_custom

:proceed_install_custom
cls
color 0A
echo =====================================================================
echo                    HPP Custom Path Installation 
echo =====================================================================
echo.
echo Installing HPP in the custom path: "%custom_path%"...
if not exist "%custom_path%" mkdir "%custom_path%"
timeout 1 >nul
copy bin\hppinstaller.exe "C:\Windows\System32\"
copy bin\hpp.exe "%custom_path%\" >nul
timeout 5 >nul
copy bin\Uninstall.bat "%custom_path%\" >nul
timeout 3 >nul
copy bin\hpp_ide.exe "%custom_path%\" >nul
copy bin\vvm.exe "%custom_path%\" >nul
timeout 1 >nul
del bin\V++.bat
timeout 3 >nul
echo "%custom_path%\hpp_ide.exe" >> "C:\hpp_ide.uninstall"
timeout 5 >nul
echo "%custom_path%\hpp.exe" >> "C:\hpp.uninstall"
timeout 1 >nul
echo "%custom_path%\vvm.exe" >> "C:\vvm.uninstall"
timeout 1 >nul
goto done

:install_system
cls
color 0A
echo =====================================================================
echo                      HPP System Path Installation 
echo =====================================================================
echo.
echo Installing HPP to system path...
timeout 1 >nul
copy bin\hpp.exe "C:\Windows\System32\"
copy bin\hppinstaller.exe "C:\Windows\System32\"
timeout 3 >nul
copy "bin\hpp_ide.exe" "C:\Users\%username%\Desktop\"
copy bin\vvm.exe "C:\Windows\System32\"
timeout 5 >nul
timeout 3 >nul
copy bin\Uninstall.bat "C:\Windows\System32\"
timeout 2 >nul
echo C:\Windows\System32\hpp.exe >> "C:\hpp.uninstall"
echo C:\Windows\System32\hpp_ide.exe >> "C:\hpp_ide.uninstall"
echo C:\Windows\System32\vvm.exe >> "C:\vvm.uninstall"
timeout 1 >nul
goto done

:done
cls
color 0A
echo =====================================================================
echo                               HPP Installer
echo =====================================================================
echo.
echo                          Installation Complete!
echo     You can now use HPP by running it from the terminal or the IDE.
echo.
bin\batbox /g 1 17 /c 0x2f /d ""
pause
