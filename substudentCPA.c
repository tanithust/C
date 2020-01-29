#include <stdio.h>
#include <string.h>
typedef struct 
{
    int no;
    char name[20],id[20];
    float cpa;
}student;
int main()
{
    int i,n;
    printf("enter number of student: ");
    scanf("%d",&n);
    student ict[100];
    for(i=0;i<n;i++)
    {
        getchar();
        ict[i].no=i+1;
        printf("enter name: ");
        gets(ict[i].name);
        printf("enter id: ");
        gets(ict[i].id);
        printf("enter cpa: ");
        scanf("%f",&ict[i].cpa);
    }
    printf("no \t name\t\t\tid \t cpa\n");
    for(i=0;i<n;i++)
    {
        printf("%-8d %-18s %-12s %-12.2f \n",ict[i].no,ict[i].name,ict[i].id,ict[i].cpa);
    }
}