#include <stdio.h>
#include <string.h>
typedef struct a
{
    char teamname[20];
    int point,goal;
}inputTeam;
typedef struct
{
    char groupid[20];
    inputTeam team[4];
}group;
void swapstruct(inputTeam *a, inputTeam *b)
{
    inputTeam c;
    strcpy(c.teamname,a->teamname);
    c.point = a->point;
    c.goal = a->goal;
    strcpy(a->teamname,b->teamname);
    a->point = b->point;
    a->goal = b->goal;
    strcpy(b->teamname,c.teamname);
    b->point=c.point;
    b->goal = c.goal;
}
int main()
{
    int i,n,j,choice,totalgroup,k,goal1,goal2;
    char findteam[20],team1[20],team2[20];
    group asiacup[8];
    mainmenu:
    printf("1.add group\n2.print group\n3.find inform\n4.input match result\n5.sort\n6.exit\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    while (0<choice && choice <8)
    {
        switch (choice)
        {
        case 1:
            printf("enter number of group you want to add: ");
            scanf("%d",&n);
            totalgroup +=n;
            if (totalgroup >8)
            {
                printf("totalgroup invalid");
                break;
            }
            while (totalgroup<8 && n >0)
            {
                for(i=totalgroup-n;i<totalgroup;i++)
                {
                    entergroupid:
                    printf("enter group id :");
                    getchar();
                    gets(asiacup[i].groupid);
                    for(j=0;j<totalgroup && j != i;j++)
                    {
                        if(strcmp(asiacup[i].groupid,asiacup[j].groupid)==0)
                        {
                            printf("invalid group id\n");
                            goto entergroupid;
                        }
                    }
                    for(j=0;j<4;j++)
                    {
                        printf("enter team name: ");
                        getchar();
                        gets(asiacup[i].team[j].teamname);
                        enterpoint:
                        printf("enter point :");
                        scanf("%d",&asiacup[i].team[j].point);
                        if(asiacup[i].team[j].point <0)
                        {
                            printf("invalid point, enter again !");
                            goto enterpoint;
                        }
                        printf("enter goals:");
                        scanf("%d",&asiacup[i].team[j].goal);
                    }
                }
            goto mainmenu;
            }
        case 2:
            for(i=0;i<totalgroup;i++)
            {
                printf("Group %s \n",asiacup[i].groupid);
                printf("team \t point \t goal different\n");
                for(j=0;j<4;j++)
                printf("%s \t %d \t %d \n",asiacup[i].team[j].teamname,asiacup[i].team[j].point,asiacup[i].team[j].goal);
            }
            goto mainmenu;
        case 3 : // find team
            printf("enter name of the team :");
            getchar();
            gets(findteam);
            for(i=0;i<=totalgroup;i++)
                if (i== totalgroup)
                {
                    printf("no result");
                    break;
                }
                for (j=0;j<5;j++)
                {
                    if(strcmp(findteam,asiacup[i].team[j].teamname)==0 && j<4)
                    {
                    printf("Group %s,%d points,%d goal different",asiacup[i].groupid,asiacup[i].team[j].point,asiacup[i].team[j].goal);
                    break;                
                    }
                }
            break;  
        case 5: // sort team
            for(i=0;i<totalgroup;i++)
            {
                for(j=0;j<4;j++)
                {
                    for(k=j+1;k<4;k++)
                    {
                        if(asiacup[i].team[j].point<asiacup[i].team[k].point)
                        swapstruct(&asiacup[i].team[j],&asiacup[i].team[k]);
                        else
                        {
                            if (asiacup[i].team[j].point==asiacup[i].team[k].point)
                            {
                                if(asiacup[i].team[j].goal<asiacup[i].team[k].goal)
                                swapstruct(&asiacup[i].team[j],&asiacup[i].team[k]);
                            }
                        }
                    }
                }
            }
            goto mainmenu;
            case 4:
            break;
            case 6:
            break;    
        }  
    }
}     