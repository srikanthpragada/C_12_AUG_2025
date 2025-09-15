// Take rollno and display marks
// Date : 15-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{
 FILE * fp;
 int count, marks, rollno, pos;

     //1. Open file
     fp = fopen("marks.dat", "rb"); // read binary

     while(1)
     {
        printf("Enter rollno [0 to stop] :");
        scanf("%d", &rollno);

        if(rollno == 0)
            break;

        pos = (rollno - 1) * sizeof(int);

        // go to the required position
        fseek(fp, pos, SEEK_SET);

        count = fread(&marks, sizeof(int), 1, fp);

        if(count == 0)  // read error
            printf("Sorry! Invalid rollno!\n");
        else
            printf("Marks = %d\n", marks);
     }

     // 3. Close file
     fclose(fp);
}
