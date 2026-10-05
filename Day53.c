#include <stdio.h>

int main()
{
    int a[100], n, i;
    int total = 0, left = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (left == total - left - a[i])
        {
            printf("%d", i);
            return 0;
        }

        left += a[i];
    }

    printf("-1");

    return 0;
}
