#include <stdio.h>

int main()
{
    int n, digit, product = 1;

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("Product = %d", product);

    return 0;
}
