// Take a name and print it for 5 times
// Date : 01-SEP-2025

#include<stdio.h>


void main()
{
  char name[20]; // string
  int i;


    printf("Enter your name :");
    gets(name);

    for(i = 1; i <= 5; i ++)
      printf("%s\n", name);

}
