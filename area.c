// Take radius and display area of a circle
// Date : 16-AUG-2025


#include <stdio.h>

void main()
{
 float radius, area;

    printf("Enter radius :");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area : %8.2f", area);

}
