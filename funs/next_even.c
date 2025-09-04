// Create a function that takes a number and return next even number
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

int nexteven(int num)
{
   if (num % 2 == 0)
      return  num + 2;
   else
      return num + 1;
}

void main()
{
 int n;

    n = nexteven(10); // 12
    printf("%d ", n);

    n = nexteven(15); // 16
    printf("%d ", n);
}
