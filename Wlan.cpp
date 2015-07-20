#include<stdlib.h>
#include<stdio.h>
main()
{
system("netsh wlan show drivers");
system("netsh wlan set hostednetwork mode=allow ssid=abc key=1234567890");
system("netsh wlan start hostednetwork");
printf("Press any button to stop the hotspot\n");
system("pause");
system("netsh wlan stop hostednetwork");
system("pause");
}


