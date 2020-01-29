    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int main()
    {
       char s[100];
       FILE *fptr;
       // use appropriate location if you are using MacOS or Linux
       fptr = fopen("test.txt","w");
       if(fptr == NULL)
       {
          printf("Error!");   
          exit(1);             
       }
       printf("Enter string: ");
       gets(s);
       fprintf(fptr,"%s",s);
       fclose(fptr);
       return 0;
    }