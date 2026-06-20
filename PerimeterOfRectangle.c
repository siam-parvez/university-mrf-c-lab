#include<stdio.h>

int main()
// 41260103168
{
    int length, width;

    printf("Enter the length: ");
    scanf("%d", &length);

     printf("Enter the width: ");
    scanf("%d", &width);

    int result = 2 * (length + width);

    printf("The perimeter is: %d", result);

    return 0;
}
