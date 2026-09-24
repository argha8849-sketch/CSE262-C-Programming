#include <stdio.h>

int main()
{
    float a, b, result;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);

    result = a * b;

    printf("Multiplication = %.2f", result);

    return 0;
}