#include<stdio.h>

int main()
// 41260103168
{
    float salary;

    printf("What's your monthly salary?\nBDT ");
    scanf("%f", &salary);

    float result = salary * (10.0 / 100);

    printf("Your bonus is: BDT %f", result);

    return 0;
}
