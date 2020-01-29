#include <stdio.h>
typedef struct x
{
    int day,month,year;
}d;
void inputdate(d date)
{   
    printf("enter date (dd/mm/yy): ");
    scanf("%d %d %d",&date.day,&date.month,&date.year);
}
int datecmp(d a,d b)
{
    if(a.year < b.year)
        return -1;
    if(a.year > b.year)
        return 1;
    if(a.year = b.year)
        {
            if(a.month < b.month)
                return -1;
            if(a.month > b.month)
                return 1;
            if(a.month = b.month)
            {
                if (a.day < b.day)
                return -1;
                if (a.day > b.day)
                return 1;
                if (a.day = b.day)
                return 0;
            }
        }
}
int main()
{
    d date1,date2;
    inputdate(date1);
    inputdate(date2);
    int i=datecmp(date1,date2);
    printf("%d",i);
}