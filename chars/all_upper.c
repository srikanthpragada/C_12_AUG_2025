// Take 10 chars and display how many of them are upper
// Date : 28-AUG-2025

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main( )
{
 char ch;
 int i;

    printf("Enter Code :");

    for(i = 1; i <= 8; i ++)
    {
        ch = getch();
        putch(toupper(ch));
    }

}
