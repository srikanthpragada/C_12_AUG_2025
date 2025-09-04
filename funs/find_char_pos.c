// Create a function that takes a string a char and returns char's position
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

int find_position(char s[20], char ch)
{
 int i;

   for(i = 0; s[i] != '\0'; i++)
   {
      if(s[i] == ch)
          return i; // terminate function and return value
   }


   return -1; // indicates char is not found
}

void main()
{

   printf("%d ", find_position("Hello", 'a'));
}
