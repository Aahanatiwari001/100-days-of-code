#include <stdio.h>

int main()
{
    char str[200], temp;
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        end = i - 1;

        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        if (str[i] == '\n')
            break;
    }

    printf("Result: %s", str);

    return 0;
}
