// Passing array is pass by reference
// Date : 08-SEP-2025

#include<stdio.h>
#include<conio.h>

void zeros(int arr[], int length)
{
 int i;

   for(i = 0; i < length; i++)
       arr[i] = 0;
}

void printarray(int arr[], int length)
{
 int i;

   for(i = 0; i < length; i++)
        printf("%d ", arr[i]);
}

void main()
{
 int a[10] = {1, 5, 4, 3, 2, 10, 49,3 ,43, 4};
 int b[5] = {1,2,3,4,5};

    printarray(a, 10);
    zeros(a, 10);
    printarray(a, 10);
    printarray(b, 5);

}
