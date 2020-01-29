#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[100],id[10];
    float cpa;
} std;
void swapstruct(std *a, std *b)
{
     std c;
    strcpy(c.name,a->name);
    strcpy(c.id,a->id);
    c.cpa = a->cpa;
    strcpy(a->name,b->name);
    strcpy(a->id,b->id);
    a->cpa = b->cpa;
    strcpy(b->name,c.name);
    strcpy(b->id,c.id);
    b->cpa = c.cpa;
}
int main()
{
    std no1,no2;
    printf("enter input of no1 (name, id, cpa): ");
    gets(no1.name);
    gets(no1.id);
    scanf("%f",&no1.cpa);
    getchar();
    printf("enter input of no1 (name ,id ,cpa): ");
    gets(no2.name);
    gets(no2.id);
    scanf("%f",&no2.cpa);
    swapstruct(&no1,&no2);
    printf("%s-%s-%.2f",no1.name,no1.id,no1.cpa);
}