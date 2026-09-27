#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c. ", name[0]);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            last = i + 1;
        }
    }

    for (i = 1; i < last; i++)
    {
        if (name[i] == ' ' && i + 1 < last)
        {
            printf("%c. ", name[i + 1]);
        }
    }

    printf("%s", &name[last]);

    return 0;
}
