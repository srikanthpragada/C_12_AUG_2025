// Read names from names.txt
// Date : 13-SEP-2025

#include<stdio.h>
#include<conio.h>

void main ()
{
 FILE * fp;
 int ch;

     //1. Open file
     fp = fopen("names.txt", "rt");

     while(1)
     {
         ch = fgetc(fp);
         if (ch == EOF)
            break;

         putch(ch);
     }

     // 3. Close file
     fclose(fp);
}
