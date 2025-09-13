// Read marks from marks.dat
// Date : 13-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
 FILE * fp;
 int count, m;

     //1. Open file
     fp = fopen("marks.dat", "rb"); // read binary

     while(1)
     {
        count = fread(&m, sizeof(int), 1, fp);

        if(count == 0) // EOF
            break;

        printf("%d ", m);
     }

     // 3. Close file
     fclose(fp);
}
