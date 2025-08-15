// Take price and display discount @15%
// Date : 15-AUG-2025


#include <stdio.h>

void main()
{
  int price, discount;

    printf("Enter price :");
    scanf("%d", &price);

    discount = price * 15 / 100;

    printf("Discount : %d", discount);

}
