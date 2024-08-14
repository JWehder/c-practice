#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    printf("Enter first number: ");

    scanf("%1f", &num1);

    printf("Enter second number: ");

    scanf("%1f", &num2);

    printf("Answer: %1f", num1 + num2);

    return 0;
}