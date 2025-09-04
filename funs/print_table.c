// Create a function that takes number and print a table for that
// Date : 04-SEP-2025

#include<stdio.h>
#include<conio.h>

void print_table(int num)
{
  int i;

    for(i = 1; i <= 10; i ++)
    {
        printf("%3d * %2d = % 5d\n", num, i, num * i);
    }
}

void main()
{

   print_table(11);

   print_table(45);
}
