#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char time[12],s[12];
    printf("enter your time (AM/PM format): ");
    gets(time);
    int c=(s[8]=='A'||s[8]=='a'),d=(s[8]=='p'||s[8]=='P');
if (c) 
    for (int i=0;i<8;i++)
        s[i]=time[i];
if (d)
{
    char* hour= strtok(time ,":");
    int h=atoi(hour)+12;
    time[0]=h/10;
    time[1]=h%10;
    for(int i=2;i<8;i++)
        s[i]=time[i];
}
printf("%s",s);
}
