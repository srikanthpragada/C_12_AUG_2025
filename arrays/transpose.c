// Take an array of 5 X 5 elements and fill it with random numbers and
// display its transpose
// Date : 01-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main( )
{
 int a[5][5];
 int i, j;

    srand(time(0));  // Initialize the seed

    for(i = 0; i < 5; i ++)
    {
        for(j = 0; j < 5; j ++)
        {
            a[i][j] = rand() % 100;
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose\n");

    for(i = 0; i < 5; i ++)
    {
        for(j = 0; j < 5; j ++)
        {
            printf("%5d", a[j][i]);
        }
        printf("\n");
    }


}
