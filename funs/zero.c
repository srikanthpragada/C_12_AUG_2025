// Demonstration of pass by value
// Date : 06-SEP-2025

#include<stdio.h>
#include<conio.h>


void zero(int n) // formal parameter
{
   n = 0;
}

void main()
{
  int a = 100;

   zero(a); // Actual parameter

   printf("%d ", a);
}
