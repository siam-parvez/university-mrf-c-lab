#include<stdio.h>

int main()
// 41260103168
{
    int length, width;

    printf("Enter the length: ");
    scanf("%d", &length);

     printf("Enter the width: ");
    scanf("%d", &width);

    int result = length * width;

    printf("The area is: %d", result);

    return 0;
}
