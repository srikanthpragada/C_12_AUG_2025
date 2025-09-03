// Take a string and display one word per line
// Date : 03-SEP-2025

#include<stdio.h>
#include<conio.h>
#include<ctype.h>


void main()
{
  char st[30];
  int i;

    printf("Enter a string:");
    gets(st);

    for(i = 0 ; st[i] != '\0'; i ++)
    {
       if(isspace(st[i]))
           putch('\n');
       else
           putch(st[i]);
    }
}
