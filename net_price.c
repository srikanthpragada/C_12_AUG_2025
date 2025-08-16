// Take price and display net price after discount of 15% and tax of 12%
// Date : 16-AUG-2025


#include <stdio.h>

void main()
{
 int price, discount, discounted_price, tax, net_price;

    printf("Enter price:");
    scanf("%d", &price);

    discount = price * 15 / 100;
    discounted_price = price - discount;
    tax = discounted_price * 12 / 100;
    net_price = discounted_price + tax;

    printf("Net Price  : %d", net_price);

}
