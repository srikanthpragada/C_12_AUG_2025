// Create a function that takes a string and return uppercase count
// Date : 05-SEP-2025

#include<stdio.h>
#include<ctype.h>

int count_upper(char s[20])
{
 int i, count=0;

   for(i = 0 ; s[i] != '\0'; i++)
   {
      if (isupper(s[i]))
          count ++;
   }

   return count;
}

void main()
{


    printf("%d ", count_upper("How Do You Do?"));
}
