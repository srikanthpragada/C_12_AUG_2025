// Write 5 names into names.txt
// Date : 13-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
 FILE * fp;
 char name[30];
 int i;

     //1. Open file
     fp = fopen("names.txt", "wt");

     for (i = 1; i <= 5; i ++)
     {
         printf("Enter a name :");
         gets(name);

         fprintf(fp, "%s\n", name);
     }

     // 3. Close file
     fclose(fp);
}
