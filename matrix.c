#include <stdio.h>
int main
{
    int m,n,x,y,i,j,k;
    printf("Enter A size: ");
    scanf("%d %d",&m,%n);
    printf("Enter b size: ");
    scanf("%d %d",&x,%y);
    if (n==x)
    {
        int a[m][n],b[x][y],c[m][y];
        printf("enter a 's element: ");
        for(i=0,i<m;i++)
            {
                for(j=0;j<n;j++)
                    scanf("%d",&a[i][j]);
                printf("\n");
            }
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }

    }
}