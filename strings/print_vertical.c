// Take a name and print it vertically
// Date : 01-SEP-2025

#include<stdio.h>


void main()
{
  char name[20]; // string
  int i;


    printf("Enter your name :");
    gets(name);

    for(i = 0; name[i] != '\0'; i ++)
       printf("%c %d\n", name[i], name[i]);

}
