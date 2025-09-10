// Create and use an array of structures
// Date : 10-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct rect
{
  int length;
  int width;
};

void main ()
{
  struct rect r[5];
  int i;

     srand(time(0));
     for(i = 0; i < 5; i ++)
     {
         r[i].length = rand() % 50;
         r[i].width = rand() % 50;

         printf("%d X %d = %d\n", r[i].length, r[i].width, r[i].length * r[i].width);
    }



}
