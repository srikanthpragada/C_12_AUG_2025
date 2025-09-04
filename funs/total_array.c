// Create a function that takes an array and return total of elements
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

int array_total(int arr[5])
{
 int i, sum = 0;

   for(i = 0; i < 5; i++)
   {
     sum = sum + arr[i];
   }

   return sum;
}

void main()
{
 int a[] = {1, 5, 4, 3, 2 };

    printf("%d ", array_total(a));
}
