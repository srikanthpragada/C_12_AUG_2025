// Take 10 chars and display how many of them are upper
// Date : 28-AUG-2025

#include<stdio.h>
#include<conio.h>

void main( )
{
 char ch;
 int i, count = 0;


    for(i = 1; i <= 10; i ++)
    {
        printf("\nEnter char:");
        ch = getche();

        if(ch>='A' && ch<='Z')
            count ++;

    }

    printf("\nCount = %d", count);
}
