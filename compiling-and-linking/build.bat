@echo off
cls

set flags=-nologo -W4 -wd4100 -Z7
set isdl=-I"W:\libs\sdl\include"
set lsdl=-LIBPATH:"W:\libs\sdl\lib\x64" sdl3.lib

cl %flags% %isdl% main.c -link %lsdl%