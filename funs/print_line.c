// Create a function that takes length and prints a line
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

// user-defined function
void line(int length, char ch)
{
  int i;

    for(i = 0; i < length; i ++)
    {
        putch(ch);
    }
}

void main()
{

    line(30, '*'); // call function

    printf("\nSrikanth Technologies\n");

    line(40, '-');
}
