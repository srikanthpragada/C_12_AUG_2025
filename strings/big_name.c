// Take 2 names and display the biggest
// Date : 02-SEP-2025

#include<stdio.h>
#include<string.h>


void main()
{
  char name1[20], name2[20]; // string

        printf("Enter first name:");
        gets(name1);
        printf("Enter second name:");
        gets(name2);


        if (strcmp(name1, name2) > 0)
            puts(name1);
        else
            puts(name2);
}
