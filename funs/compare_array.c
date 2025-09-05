// Create a function that takes 2 arrays and returns 1 of they are same otherwise 0
// Date : 05-SEP-2025

#include<stdio.h>

int compare(int a1[5], int a2[5])
{
 int i;

   for(i = 0; i < 5; i++)
   {
      if(a1[i] != a2[i])
         return 0; // mismatch
   }

   return 1;
}

void main()
{
 int a[] = {1, 5, 4, 13, 2 };
 int b[] = {1, 5, 4, 1, 2 };

    printf("%d ", compare(a, b));
}
