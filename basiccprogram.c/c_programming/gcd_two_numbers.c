#include <stdio.h>

int main()
{
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    printf("GCD = %d", gcd);

    return 0;
}