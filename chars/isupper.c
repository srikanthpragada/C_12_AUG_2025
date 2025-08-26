// Take a char and display whether it is uppercase letter
// Date : 26-AUG-2025

#include <stdio.h>

void main()
{
  char ch;

      printf("Enter char :");
      //scanf("%c", &ch);
      ch = getchar();

      if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
      else
        printf("Not uppercase");
}


