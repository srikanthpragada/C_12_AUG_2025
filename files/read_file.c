// Read filename from user and display file content
// Date : 13-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main ()
{
 FILE * fp;

 char filename[30], line[100];
 char * p;

     printf("Enter filename :");
     gets(filename);

     //1. Open file
     fp = fopen(filename, "rt");

     if (fp == NULL)  // open error
     {
         printf("Sorry! File [%s] is not found!", filename);
         exit(1); // terminate the program
     }

     while(1)
     {
         p = fgets(line, 100, fp);
         if (p == NULL) // EOF
            break;

         printf("%s", line);
     }

     // 3. Close file
     fclose(fp);
}
