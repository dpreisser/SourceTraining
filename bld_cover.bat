rem
rem  This batch file builds an executable using the "c_cover_io.c" file from a Cover Environment
rem  Change WORK_DIR to point to your Working Env Directory, and then simply run this batch file.
rem
set WORK_DIR=../MinGW_WorkDir
set COVER_ENV=%WORK_DIR%/SYSCOVER

gcc -o diner manager_driver.c manager.c database.c  %COVER_ENV%/c_cover_io.c
