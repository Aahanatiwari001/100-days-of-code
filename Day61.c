#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, first;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        first = 0;

        for (j = i; j < i + k; j++)
        {
            if (a[j] < 0)
            {
                first = a[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}
