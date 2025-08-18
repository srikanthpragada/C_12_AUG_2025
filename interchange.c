// Take two numbers and interchange (swap) them
// Date : 18-AUG-2025

#include <stdio.h>

void main()
{
  int n1, n2, t;

    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);

    // Interchange or swap
    t = n1;
    n1 = n2;
    n2 = t;

    printf("%d %d", n1, n2);

}
