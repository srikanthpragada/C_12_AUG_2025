// Take 3 numbers and display the largest
// Date : 20-AUG-2025


#include <stdio.h>

void main()
{
  int a, b, c;

     printf("Enter 3 numbers :");
     scanf("%d%d%d", &a, &b, &c);

     if (a > b  && a > c)
         printf("%d", a);
     else
        if(b > c)
           printf("%d", b);
        else
           printf("%d", c);

}
