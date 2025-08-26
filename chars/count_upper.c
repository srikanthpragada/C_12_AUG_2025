// Take 10 chars and display how many of them are upper
// Date : 26-AUG-2025

#include<stdio.h>

void main( )
{
 char ch;
 int i, count = 0;


    for(i = 1; i <= 10; i ++)
    {
        printf("Enter char:");
        ch = getchar();

        if(ch>='A' && ch<='Z')
            count ++;
    }

    printf("Count = %d", count);
}
