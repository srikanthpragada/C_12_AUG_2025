// Take 5 names and display smallest name by length
// Date : 03-SEP-2025

#include<stdio.h>
#include<string.h>


void main()
{
  char name[20], smallest_name[20]; // string
  int i;


    for(i = 1; i <= 5; i ++)
    {
        printf("Enter a name:");
        gets(name);

        if (i == 1) // first name
            strcpy(smallest_name, name);
        else
           if (strlen(name) <=  strlen(smallest_name))
             strcpy(smallest_name, name);
    }

    printf("Smallest Name : %s", smallest_name);
}
