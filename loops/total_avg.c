// Take numbers until user gives 0 and print total
// Date : 25-AUG-2025

#include <stdio.h>

void main()
{
  int n, total = 0, count = 0;


      while(1)
      {
          printf("Enter a number [0 to stop] :");
          scanf("%d", &n);

          if (n == 0)
             break;

          total += n;
          count ++;
      }

      printf("Total = %d, Average = %d", total, total / count);
}
