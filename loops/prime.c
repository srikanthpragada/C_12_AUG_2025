// Take a number and display whether prime or not
// Date : 25-AUG-2025

#include <stdio.h>

void main()
{
  int n, i, count = 0;

     printf("Enter a number :");
     scanf("%d", &n);

     for(i = 2; i <= n/2; i ++)
     {
        if (n % i == 0) {
            count ++;
            break;
        }
     }

     if(count == 0)
        printf("Prime Number!");
     else
        printf("Not a Prime Number!");
}
