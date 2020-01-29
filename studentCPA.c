#include <stdio.h>
#include <string.h>
typedef struct 
{
    int no;
    char name[20];
    char ID[20];
    float CPA;
}student;
void inputstudent(student a[],int count)
{
    
    for(int x=0;x<count;x++)
    {
    getchar();
    printf("Enter student 's name: ");
    gets(a[x].name);
    printf("Enter student 's ID: ");
    gets(a[x].ID);
    printf("Enter student 's CPA: ");
    scanf("%f",&a[x].CPA);
    }
}
int main()
{
    int n,i;
    printf("Enter numer of student: ");
    scanf("%d",&n);
    student ICT[1000];
    inputstudent(ICT,n);
    for (i = 0; i < n; i++)
    {
        printf("%s %s %.2f\n",ICT[i].name,ICT[i].ID,ICT[i].CPA);
    }
    
    
}
