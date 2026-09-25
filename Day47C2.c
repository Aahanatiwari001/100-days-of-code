#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0;
    int length = 0, maxLength = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
                start = i - length;
            }

            length = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    for (i = 0; i < maxLength; i++)
    {
        longest[i] = str[start + i];
    }

    longest[i] = '\0';

    printf("Longest word = %s\n", longest);
    printf("Length = %d", maxLength);

    return 0;
}
