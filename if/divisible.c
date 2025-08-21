// Take a number and display whether it is divisible by 3 or 5 or 7 or None
// Date : 21-AUG-2025

#include <stdio.h>

void main()
{
  int num;

     printf("Enter a number :");
     scanf("%d", &num);

     if (num % 3 == 0)
         printf("Divisible by 3");
     else
        if(num % 5 == 0)
          printf("Divisible by 5");
        else
            if(num % 7 == 0)
               printf("Divisible by 7");
            else
               printf("None");
}
