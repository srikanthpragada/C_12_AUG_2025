// Take price and qty and display the amount
// Date : 16-AUG-2025


#include <stdio.h>

void main()
{
  int price, qty, amount;

    printf("Enter price :");
    scanf("%d", &price);

    printf("Enter qty :");
    scanf("%d", &qty);

    amount = price * qty;

    printf("Amount : %d", amount);

}
