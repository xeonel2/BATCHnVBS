#include<stdlib.h>
#include<stdio.h>
main()
{
int n;
char c;
x:printf("How many CMD(s) do you want to start:");
scanf("%d",&n); 
if
(n>0)
{
for
(int i=n;i>0;i--)
{
system("start cmd");
}
}
else if
(n==0)
{
return 0;
}
else
{
system("cls");
printf("Enter a WHOLE NUMBER\n");
goto x;
}
}
