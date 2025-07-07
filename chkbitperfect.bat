@echo OFF

REM // build the ROM
call build

REM  // run fc against a Sonic 1 Rev 01 ROM
echo -------------------------------------------------------------
if exist SC_Built.bin ( fc /b SC_Built.bin SClassics.md
) else echo SC_Built.bin does not exist, probably due to an assembly error

REM // if someone ran this from Windows Explorer, prevent the window from disappearing immediately
pause

