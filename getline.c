#include <stdio.h>
int getline(int a[])
{
    int c,i;
    for(i=0;(c=getchar())!='\n';i++)
    a[i]=c;
    return i;
}
int main()
{
    int x,b[1000];
    printf("enter your char: ");
    x=getline(b);
    printf("%d\n",x);
    for (int i = 0; i < x; i++)
    {
    printf("%c",b[i]);
    }

    return 0;
}