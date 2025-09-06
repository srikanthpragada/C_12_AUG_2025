// Demonstration of pass by reference/address
// Date : 06-SEP-2025

#include<stdio.h>


void zero(int * p) // formal parameter
{
   *p = 0;
}

void main()
{
  int a = 100;

   zero(&a); // Actual parameter

   printf("%d ", a);
}
