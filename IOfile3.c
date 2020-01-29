#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr =fopen("test2.txt","a");
    if(ptr == NULL)
    {
        printf("there 's no file to print");
        return 1;
    }
    fprintf(ptr, "hello world");
    fclose(ptr);
}