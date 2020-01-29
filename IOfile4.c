#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file1,*file2,*file3;
    file1= fopen("file1.txt","r");
    file2= fopen("file2.txt","r");
    file3= fopen("file3.txt","w");
    char f1[100],f2[100],f3[300];
    fgets(f1,100,file1);
    fgets(f2,100,file2);
    //strcat(f1,f2);
    fprintf(file3,"%s %s",f1,f2);
    fclose(file3);
    fclose(file2);
    fclose(file1);
}