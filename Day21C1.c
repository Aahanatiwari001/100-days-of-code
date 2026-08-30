#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, power, result;

    scanf("%d", &n);

    digits = (int)log10(n);
    power = (int)pow(10, digits);

    first = n / power;
    last = n % 10;

    result = n - first * power - last;
    result = result + last * power + first;

    printf("%d", result);

    return 0;
}
