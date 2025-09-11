// Pass by reference with struct
// Date : 11-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct rect
{
  int length;
  int width;
};

void swap(struct rect * p)
{
 int temp;

    temp = p->length;
    p->length = p -> width;
    p->width = temp;
}

void print(struct rect r)
{
    printf("Length = %d, Width = %d\n", r.length, r.width);
}

void main ()
{
  struct rect r = {20, 15};

       print(r); // pass a struct
       swap(&r);
       print(r);
}
