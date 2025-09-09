// Create and use a structure
// Date : 09-SEP-2025

#include<stdio.h>
#include<string.h>

// User-defined datatype
struct product
{
   int id;
   char name [20];
   float price;
   int qoh;
};

void main()
{
  struct product p;

     p.id = 1;
     strcpy(p.name, "Logitech Mouse");
     p.price = 4500;
     p.qoh = 5;

     printf("%d %s %f %d", p.id, p.name, p.price, p.qoh);


}
