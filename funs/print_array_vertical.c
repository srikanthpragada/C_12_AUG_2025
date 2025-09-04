// Create a function that takes number and print a table for that
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

void printarray(int arr[10])
{
 int i;

   for(i = 0; i < 10; i++)
      printf("%d\n", arr[i]);
}

void main()
{
 int a[10] = {1, 5, 4, 3, 2, 10, 49,3 ,43, 4};

    printarray(a);
}
