@echo off

mkdir ..\..\build
pushd ..\..\build
cl -Zi ..\handmade\code\win32_handmadehero.cpp user32.lib
popd