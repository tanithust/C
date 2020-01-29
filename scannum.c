#include <stdio.h>
#include <math.h>
/*enter a number and return the number of digits of that number*/
int scannum(int num)
{
    int x=0,a=1;
    while(num/a>0)
    {
        a *=10;
        x++;
    }
    return x;
}
/*copy all number to an array*/
void copynum(int num,int b[])
{
    int x=scannum(num);
    for(int i=0;i<x;i++)
    {
            b[i]=num%10;
            num /=10;
    }
}
/*swap*/
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
/*reverse the order of an array*/
void reverse(int b[],int a)
{
    for(int i=0;i<=(a-1)/2;i++)
        swap(&b[i],&b[a-1-i]);
}
main()
{
    int num,a;
    printf("enter your number: ");
    scanf("%d",&num);
    a=scannum(num);
    int b[a];
    copynum(num,b);
    reverse(b,a);
    for(int i=0;i<a;i++)
    {
        printf("%d ",b[i]);
    }
}
