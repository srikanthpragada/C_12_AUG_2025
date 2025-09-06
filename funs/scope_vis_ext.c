// Demonstration of Scope, Visibility and Extent
// Date : 06-SEP-2025

#include<stdio.h>
#include<conio.h>

int g = 100;

void fun()
{
  int b, g = 1;

    printf("%d", g); // refer to local variable


}

void main()
{
  int a;

    fun();


}
