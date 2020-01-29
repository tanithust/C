#include <stdio.h>
#include <stdlib.h>
int main()
{
   char s[100];
   FILE *fptr;
   if ((fptr = fopen("test2.txt","r")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   fgets(s,30,fptr);
   printf("string is =%s", s);
   fclose(fptr); 
   return 0;
}