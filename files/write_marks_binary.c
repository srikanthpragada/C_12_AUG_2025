// Write 20 marks into marks.dat
// Date : 13-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
 FILE * fp;
 int i, m;

     srand(time(0));

     //1. Open file
     fp = fopen("marks.dat", "wb"); // write binary

     for (i = 1; i <= 20; i ++)
     {
         m = rand() % 100;
         fwrite(&m, sizeof(int), 1, fp);
     }

     // 3. Close file
     fclose(fp);
}
