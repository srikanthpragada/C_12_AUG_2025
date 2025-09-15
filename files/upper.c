// Convert source file to uppercase and write into target file
// Date : 15-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main (int argc, char * argv[])
{
 FILE * sfp, *tfp;
 int ch;

     if(argc < 3)
     {
         printf("Syntax: upper sourcefile targetfile");
         exit(2);
     }

     //1. Open file
     sfp = fopen(argv[1], "rt");

     if (sfp == NULL)  // open error
     {
         printf("Sorry! File [%s] is not found!", argv[1]);
         exit(1); // terminate the program
     }


     tfp = fopen(argv[2], "wt");

     if (tfp == NULL)  // open error
     {
         printf("Sorry! File [%s] cannot be created!", argv[2]);
         exit(1); // terminate the program
     }


     // 2. read file

     while(1)
     {
         ch = fgetc(sfp);
         if (ch == EOF) // EOF
            break;

         fputc(toupper(ch), tfp);
     }

     // 3. Close file
     fclose(sfp);
     fclose(tfp);
}
