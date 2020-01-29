#include <stdio.h>
#include <string.h>
int main()
{
    char tele_num[20],copy_num[20],first_two[]="16",replace[]="3";
    gets(tele_num);
    if(tele_num[0]=='0')
        strcpy(tele_num,tele_num+1);
    if (strlen(tele_num)==10)
        printf("%s",tele_num);
    else
    {
        tele_num[11]='\0';
        strcpy(copy_num,tele_num+2);
        tele_num[2]='\0';
        if(strcmp(first_two,tele_num)==0)
            printf("%s",strcat(replace,copy_num));
        else
            printf("Khac nha mang");
    }
}