@echo off
echo ".\ENGINE+DECOMPILER\WindowsDecompiler(.)exe - Shortcut(.)lnk --> compiled_main(.)exe ----> decompiled_main(.)c"
".\COMPILER\TCC\tcc.exe" "uncompiled_main.c" -o "compiled_main.exe"
pause
cls

:: Biên dịch công cụ gọt rác
".\COMPILER\TCC\tcc.exe" ".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\MINICOCCINELLE_PY.c" -o ".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\MINICOCCINELLE_PY.exe"

:: Bước 1: COCCINELLE gọt rác và xuất thẳng ra file đuôi .py trung gian
".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\MINICOCCINELLE_PY.exe" ".\ENGINE+DECOMPILER\COCCINELE-BEAUTIFIER\rules_PY.txt" "decompiled_main.c" "done_main.py"

:: Bước 2: Ép ruff format trực tiếp vào file done_main.py (Hết hoàn toàn lỗi 0KB)
".\ENGINE+DECOMPILER\RUFF-BEAUTIFIER\ruff.exe" format "done_main.py"

echo All Done!
pause