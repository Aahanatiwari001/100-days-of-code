#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (count[str[i] - 'a'] == 1)
            {
                printf("First repeating alphabet = %c", str[i]);
                return 0;
            }

            count[str[i] - 'a']++;
        }

        i++;
    }

    printf("No repeating lowercase alphabet found");

    return 0;
}
