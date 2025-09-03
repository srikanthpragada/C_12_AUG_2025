// Take a string and display one word per line
// Date : 03-SEP-2025

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
  char names[5][30];
  int i;

    for(i = 0; i < 5; i ++)
    {
        printf("Enter a name:");
        gets(names[i]);
    }

    for(i = 0; i < 5; i ++)
    {
        puts(strupr(names[i]));
    }

}
