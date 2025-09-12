// Write uppercase letters to upper.txt
// Date : 12-SEP-2025

#include<stdio.h>


void main ()
{
 FILE * fp;
 char ch;

     //1. Open file
     fp = fopen("upper.txt", "wt");

     for (ch = 65; ch <= 90; ch ++)
     {
        // 2. Write to file
        fputc(ch, fp);
     }

     // 3. Close file
     fclose(fp);
}
