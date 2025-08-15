// Take a number and display cube of the number
// Date : 15-AUG-2025


#include <stdio.h>

void main()
{
  int num, cube; // declare variables

    printf("Enter a number :");
    scanf("%d", &num);   // read int from keyboard

    cube = num * num * num;

    printf("Cube : %d", cube);

}
