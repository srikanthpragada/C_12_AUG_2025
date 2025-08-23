// Take 5 numbers and display how many are even and how many are odd
// Date : 23-AUG-2025

#include <stdio.h>

void main()
{
  int n, i, even_count = 0, odd_count = 0;

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a number :");
        scanf("%d", &n);

        if(n % 2 == 0)
            even_count ++;
        else
            odd_count ++;
     }

     printf("Even Count = %d, Odd Count = %d", even_count, odd_count);

}
