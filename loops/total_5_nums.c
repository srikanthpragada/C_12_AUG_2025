// Take 5 numbers and display total
// Date : 22-AUG-2025

#include <stdio.h>

void main()
{
  int n, i, total = 0;

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a number :");
        scanf("%d", &n);

        total += n;
     }

     printf("Total = %d, Average = %d", total, total / 5);

}
