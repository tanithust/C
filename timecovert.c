#include <stdio.h>
void timeConversion(char s[]) 
{
static char time[8];
int c=(s[8]=='A'||s[8]=='a'),d=(s[8]=='p'||s[8]=='P');
if (c) 
    for (int i=0;i<8;i++)
        time[i]=s[i];
if (d)
{
    int a=s[0]*10+s[1]+12;
    time[1]=a-10;
    time[0]=a/10;
    for(int j=2;j<8;j++)
        time[j]=s[j];
}
for(int k=0;k<8;k++)
    printf("%c",time[k]);
}
int main()
{
    char s[10];
    printf("enter your time: ");
    for(int i=0;i<10;i++)
    {
        scanf("%c",&s[i]);
    }
timeConversion(s);
}