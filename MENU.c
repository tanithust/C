#include <stdio.h>
#include <string.h>
typedef struct 
{
    int no;
    char name[20],id[20];
    float cpa;
}student;
void inputstudent(student a[],int count)
{
    for(int x=0;x<count;x++)
    {
    getchar();
    printf("Enter student 's name: ");
    gets(a[x].name);
    printf("Enter student 's ID: ");
    gets(a[x].id);
    printf("Enter student 's CPA: ");
    scanf("%f",&a[x].cpa);
    }
}
void printlist(student b[],int count1)
{
    printf("no \t name\t\t\tid \t cpa\n");
    for(int y=0;y<count1;y++)
    {
        printf("%-8d %-18s %-12s %-12.2f \n",b[y].no,b[y].name,b[y].id,b[y].cpa);
    }
}
int main()
{
    int choice,n;
    char findname[100],findid[100];
    printf("1.Enter student information.\n");
    printf("2.Find student.\n");
    printf("3.Print out the list.\n");
    printf("4.Average CPA.\n");
    printf("Your choice:");
    mainmenu:
    scanf("%d",&choice);
    while (0<choice && 5 > choice)
    {
        switch (choice)
        {
        case 1:/*input data*/
            printf("Enter numer of student: ");
            scanf("%d",&n);
            student ICT[1000];
            inputstudent(ICT,n);
            break;
        case 2: /*find student*/
            printf("Find by: \n");
            printf("1.Name\n");
            printf("2.ID\n");
            printf("3.Exit");
            int minichoice,target;
            scanf("%d",&minichoice);
            while (0<minichoice && 4>minichoice)
            {
                switch (minichoice)
                {
                case 1: /*find by name*/
                    printf("enter name of the student: ");
                    gets(findname);
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(findname,ICT[i].name)==0)
                            printf("%d %s %s %.2f",ICT[i].no,ICT[i].name,ICT[i].id,ICT[i].cpa);
                        else printf("No result");
                    }
                    break;
                case 2: /*find by id*/
                    printf("enter id of the student: ");
                    gets(findid);
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(findid,ICT[i].id)==0)
                            printf("%d %s %s %.2f",ICT[i].no,ICT[i].name,ICT[i].id,ICT[i].cpa);
                        else printf("No result");
                    }
                    break;
                case 3:
                    goto mainmenu;
                    break;
                }
            }
        case 3: /*print the list of student*/
            printlist(ICT,n);
            break;
        case 4: /*average cpa*/
            printf("in developing process :Vv");
        }
    }
}