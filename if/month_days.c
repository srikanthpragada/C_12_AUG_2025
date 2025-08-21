// Take month number and display no. of days
// Date : 21-AUG-2025

#include <stdio.h>

void main()
{
  int month;

     printf("Enter month number [1-12] :");
     scanf("%d", &month);

     if (month == 2)
         printf("28");
     else
        if(month == 4 || month == 6 || month == 9 || month == 11)
           printf("30");
        else
           printf("31");

}
