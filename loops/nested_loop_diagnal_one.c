// Nested Loop Demo
// Date : 26-AUG-2025

#include <stdio.h>

void main()
{
  int i, j;

     for(i = 1; i <= 5; i ++)
     {
         for(j = 1; j <= 5; j ++)
         {
            if(i == j)  // diagonal cell
                printf(" 1 ");
            else
                printf(" 0 ");
         }

         printf("\n");
     }
}
