#include <stdio.h>
int main()
{
    for(int i=1;i<7;i++)
{
    for(int j=1;j<7-i;j++)
        printf(" ");
    for (int k=7-i;k<7;k++)
        printf("#");
    printf("\n");
}
}