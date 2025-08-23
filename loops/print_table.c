// Take a number and display table
// Date : 23-AUG-2025

#include <stdio.h>

void main()
{
  int n, i;


     printf("Enter a number :");
     scanf("%d", &n);

     for(i = 1; i <= 10; i ++)
     {
         printf("%3d X %2d = %4d\n", n , i, n * i);
     }

}
