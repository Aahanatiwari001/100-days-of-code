#include <stdio.h>

int main()
{
    int a[100], n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (element < a[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
