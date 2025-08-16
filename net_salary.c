// Take basic salary and display the net salary
// Date : 16-AUG-2025


#include <stdio.h>

void main()
{
  int salary, hra, da, net_salary;

    printf("Enter salary :");
    scanf("%d", &salary);

    hra = salary * 30 / 100;
    da = salary * 15 / 100;

    net_salary = salary + hra + da;

    printf("Salary     : %6d\n", salary);
    printf("HRA        : %6d\n", hra);
    printf("DA         : %6d\n", da);
    printf("Net Salary : %6d", net_salary);

}
