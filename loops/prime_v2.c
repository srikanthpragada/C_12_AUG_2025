// Take a number and display whether prime or not
// Date : 25-AUG-2025

#include <stdio.h>

void main()
{
  int n, i, prime = 1; // true

     printf("Enter a number :");
     scanf("%d", &n);

     for(i = 2; i <= n/2; i ++)
     {
        if (n % i == 0) {
            prime = 0; // false
            break;
        }
     }

     if(prime)  // prime is 1, it is true otherwise it is false
        printf("Prime Number!");
     else
        printf("Not a Prime Number!");
}
