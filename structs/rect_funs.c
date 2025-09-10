// Using struct with functions
// Date : 10-SEP-2025

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct rect
{
  int length;
  int width;
};

int area(struct rect);


struct rect max(struct rect r1, struct rect r2)
{
    return  area(r1) > area(r2) ? r1 : r2;
}

int compare(struct rect r1, struct rect r2)
{
    return r1.length == r2.length && r1.width == r2.width;
}


int area(struct rect r)
{
    return r.length * r.width;
}

void print(struct rect r)
{
    printf("Length = %d, Width = %d", r.length, r.width);
}

void main ()
{
  struct rect r = {20, 15};
  struct rect r2 = {10, 10};

       print(r); // pass a struct
       printf("\nArea = %d\n", area(r));

       print(max(r, r2));
}
