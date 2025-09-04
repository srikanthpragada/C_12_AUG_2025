// Create a function that takes 2 numbers and return the largest
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

int max(int n1, int n2)
{
   return n1 > n2 ? n1 : n2;
}

void main()
{
 int n;

    n = max(10, 15);
    printf("%d ", n);

}
