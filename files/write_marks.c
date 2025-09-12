// Write 20 marks into marks.txt
// Date : 12-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
 FILE * fp;
 int i;

     srand(time(0));

     //1. Open file
     fp = fopen("marks.txt", "wt");

     for (i = 1; i <= 20; i ++)
     {
         fprintf(fp, "%d\n", rand() % 100);
     }

     // 3. Close file
     fclose(fp);
}
