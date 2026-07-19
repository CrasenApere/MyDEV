echo off
echo ".\ENGINE+DECOMPILER\WindowsDecompiler(.)exe - Shortcut(.)lnk --> compiled_main(.)exe ----> decompiled_main(.)c"
".\COMPILER\TCC\tcc.exe" "uncompiled_main.c" -o "compiled_main.exe"
pause
cls
".\COMPILER\TCC\tcc.exe" ".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\MINICOCCINELLE_C.c" -o .\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\MINICOCCINELLE_C.exe"
".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\MINICOCCINELLE_C.exe" ".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\rules_C.txt" "decompiled_main.c" "refactored_main.c"
".\ENGINE+DECOMPILER\CLANGFORMAT-BEAUTIFIER\clang-format.exe" "refactored_main.c" > "done_main.c"
echo All Done!
pause