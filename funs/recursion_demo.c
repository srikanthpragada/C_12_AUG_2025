// Recursion Demo
// Date : 05-SEP-2025

#include<stdio.h>

void reverse(int n)
{
    printf("%d ", n);
    if (n > 1)
        reverse(n - 1); // Recursion
}


void main()
{
   reverse(5);
}

