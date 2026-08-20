#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a=%d, b=%d", a, b);

    return 0;
}
