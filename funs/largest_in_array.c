// Create a function that takes an array and return largest value
// Date : 05-SEP-2025

#include<stdio.h>

int largest(int arr[5])
{
 int i, max = arr[0];

   for(i = 1; i < 5; i++)
   {
      if (arr[i] > max)
         max = arr[i];
   }

   return max;
}

void main()
{
 int a[] = {1, 5, 4, 13, 2 };

    printf("%d ", largest(a));
}
