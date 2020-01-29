#include <stdio.h>
#include <string.h>
/*char* stringa(char *name)
{
    int i=strlen(name);
    for (i=strlen(name)-1;name[i]!=' ';i--)
        ;
    return name+i+1;
}
int main()
{
    char a[100];
    printf("enter your full name: ");
    gets(a);
    printf("your name is %s",stringa(a));
}
int main()
{
    char string[10];
    gets(string);
    strcpy(string,string+1);
    printf("%s",string);
}*/
int main()
{
    char s[100],ss[100];
    gets(s);
    s[3]='\0';
    strcpy(ss,s);
    printf("%s",ss);
}