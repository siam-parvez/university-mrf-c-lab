#include<stdio.h>

int main()
// 41260103168
{
    float num1, num2, num3;

    printf("Insert Number 1: ");
    scanf("%f", &num1);

    printf("Insert Number 2: ");
    scanf("%f", &num2);

    printf("Insert Number 3: ");
    scanf("%f", &num3);

    float result = (num1 + num2 + num3) / 3;

    printf("Average is: %f", result);

    return 0;
}
