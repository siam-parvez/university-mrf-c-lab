#include<stdio.h>

int main()
// 41260103168
{
    int salary;

    printf("What's your monthly salary?\nBDT ");
    scanf("%d", &salary);

    int result = salary * 12;

    printf("Your annual salary is: BDT %d", result);

    return 0;
}
