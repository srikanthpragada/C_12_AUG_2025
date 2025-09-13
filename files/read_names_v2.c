// Read names line by line from names.txt
// Date : 13-SEP-2025

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
 FILE * fp;

 char filename[30], line[100];
 char * p;

     //1. Open file
     fp = fopen("names.txt", "rt");

     while(1)
     {
         p = fgets(line, 30, fp);
         if (p == NULL) // EOF
            break;

         printf("%s %d\n", line, strlen(line));
     }

     // 3. Close file
     fclose(fp);
}
