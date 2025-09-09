// Create and use a structure
// Date : 09-SEP-2025

#include<stdio.h>
#include<string.h>

struct rect
{
  // members
  int length;
  int width;
};

void main ()
{
  struct rect r;
  int area;

    printf("Enter length and width :");
    scanf ("%d%d",&r.length, &r.width);
    area = r.length * r.width;

    printf("Area : %d ", area);
}
