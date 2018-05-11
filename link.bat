@echo off

SETLOCAL ENABLEDELAYEDEXPANSION

       :: DEFINE the following variables where applicable to your install

    SET SOURCE=%~dp0


:: _________________________________________________________

if not exist p:\ GOTO noP

echo This program will create all necessary links to your P drive. Press enter to continue.
pause

mklink /J "p:\HAFM_HMMWV" "%SOURCE%HAFM_HMMWV"




echo Complete
pause
GOTO quit

:noP
echo You don't have a P: drive!

:quit
exit