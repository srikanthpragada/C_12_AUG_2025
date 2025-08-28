// Take an array of 10 elements and fill it with random numbers
// Date : 28-AUG-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main( )
{
 int a[10];
 int i;

    srand(time(0));

    for(i = 0; i < 10; i ++)
    {
       a[i] = rand() % 100;
    }

    for(i = 0; i < 10; i ++)
    {
        printf("%d ", a[i]);
    }

}
