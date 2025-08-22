// Take week number and no. of hours worked and display wage
// Date : 22-AUG-2025

#include <stdio.h>

void main()
{
  int week, hours, wage;

     printf("Enter week number [1-7] :");
     scanf("%d", &week);

     printf("Enter no. of hours worked :");
     scanf("%d", &hours);

     switch(week)
     {
         case 1:
         case 2: wage = hours * 100; break;
         case 3:
         case 4:
         case 5: wage = hours * 120; break;
         case 6: wage = hours * 150; break;
         default: wage = hours * 200;
     }

     printf("Wage = %d", wage);

}
