// Take a string and display one word per line
// Date : 03-SEP-2025

#include<stdio.h>
#include<conio.h>

// user-defined function
void line()
{
  int i;

    for(i = 0; i < 25; i ++)
    {
        putch('-');
    }
}

void main()
{

    line(); // call function

    printf("\nSrikanth Technologies\n");

    line();
}
