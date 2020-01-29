#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int test[12],i,n;
    printf("enter number of element: ");
    scanf("%d",&n);
    printf("enter your array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&test[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        if (test[i]>test[j]) swap(&test[j],&test[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("test[%d]=%d\n ",i,test[i]);
    }
}