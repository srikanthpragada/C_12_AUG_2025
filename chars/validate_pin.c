// Take 10 chars and display how many of them are upper
// Date : 28-AUG-2025

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main( )
{
 char ch;
 int i, count = 0;

    printf("Enter PIN :");

    for(i = 1; i <= 4; i ++)
    {
        ch = getch();
        putch('*');

        if(isdigit(ch))
            count ++;

    }

    if(count == 4)
        printf("\nValid PIN");
    else
        printf("\nInvalid PIN");
}
