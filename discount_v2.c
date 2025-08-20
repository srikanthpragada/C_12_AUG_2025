// Take price and display discount calculated based on price
// Date : 20-AUG-2025


#include <stdio.h>

void main()
{
  int price, discount;

    printf("Enter price :");
    scanf("%d", &price);

    if (price > 10000)
    {
        discount = price * 20 / 100;
        printf("20%% Discount : %d", discount);
    }
    else
    {
        discount = price * 10 / 100;
        printf("10%% Discount : %d", discount);
    }


}
