#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci, amount;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("Simple Interest=%.2f\n", si);
    printf("Compound Interest=%.2f", ci);

    return 0;
}
