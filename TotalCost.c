#include<stdio.h>

int main()
// 41260103168
{
    float price, qty;

    printf("Enter the price of lemon: ");
    scanf("%f", &price);

    printf("Enter the quantity of lemons: ");
    scanf("%f", &qty);

    float result = price * qty;

    printf("The total bill is: BDT %f", result);

    return 0;
}
