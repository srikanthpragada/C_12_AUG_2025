// Take a name and say hello
// Date : 01-SEP-2025

#include<stdio.h>


void main()
{
  char name[20]; // string

    printf("Enter your name :");
    //scanf("%s", name);
    gets(name);

    printf("Hello %s", name);

}
