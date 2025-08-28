// Take 5 numbers, store in an array and display them
// Date : 28-AUG-2025

#include<stdio.h>

void main( )
{
 int a[10];
 int i;


    for(i = 0; i < 10; i ++)
    {
       a[i] = (i + 1) * (i + 1);
    }

    for(i = 0; i < 10; i ++)
    {
        printf("%d ", a[i]);
    }

}
