#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main()
{
char command[100],ssid[50],key[20];
printf("Hotspot Name:\t");
scanf("%s",&ssid);
printf("Hotspot Key(WPA2 PSK):\t");
scanf("%s",&key);
sprintf(command,"netsh wlan set hostednetwork mode=allow ssid=%s key=%s",ssid,key);
system(command);
system("netsh wlan start hostednetwork");
printf("Press any button to stop the hotspot\n");
system("pause");
system("netsh wlan stop hostednetwork");
system("pause");
}


