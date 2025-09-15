// Read filename from command line and display its content
// Date : 15-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main (int argc, char * argv[])
{
 FILE * fp;

 char line[100];
 char * p;

     if(argc < 2)
     {
         printf("Sorry! Filename is missing. Please provide filename!");
         exit(2);
     }

     //1. Open file
     fp = fopen(argv[1], "rt");

     if (fp == NULL)  // open error
     {
         printf("Sorry! File [%s] is not found!", argv[1]);
         exit(1); // terminate the program
     }

     // 2. read file

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
