// Take 10 numbers or until 0 is given and display total of even numbers
// Date : 23-AUG-2025

#include <stdio.h>

void main()
{
  int n, i, total = 0;

     for(i = 1; i <= 10; i ++)
     {
        printf("Enter a number [0 to stop]:");
        scanf("%d", &n);

        if(n == 0)
            break; // terminate loop

        if(n % 2 == 0)
            total += n;
     }

     printf("Total = %d", total);

}
