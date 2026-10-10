#include <stdio.h>

int main()
{
    int a[100], ans[100], n, i;
    int product = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        ans[i] = product;
        product *= a[i];
    }

    product = 1;

    for (i = n - 1; i >= 0; i--)
    {
        ans[i] *= product;
        product *= a[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
