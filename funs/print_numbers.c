// print numbers using a function
// Date : 03-SEP-2025

#include<stdio.h>
#include<conio.h>

void numbers(int length)
{
 int i;

     for (i=1 ; i <= length ; i++ )
          printf( "%d ", i);
}


void main()
{
     numbers(20);

     numbers(10);

}
