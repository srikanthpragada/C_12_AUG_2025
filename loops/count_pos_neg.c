// Take 10 numbers or until 0 is given and display postive and negative counts
// Date : 25-AUG-2025

#include <stdio.h>

void main()
{
  int n, i, pos_count = 0, neg_count = 0;

     for(i = 1; i <= 10; i ++)
     {
        printf("Enter a number [0 to stop]:");
        scanf("%d", &n);

        if(n == 0)
            break; // terminate loop

        if(n > 0)
            pos_count ++;
        else
            neg_count ++;
     }

     printf("Positive Count = %d, Negative Count = %d", pos_count, neg_count);

}
