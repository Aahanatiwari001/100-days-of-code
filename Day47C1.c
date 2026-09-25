#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0')
    {
        count[str1[i]]++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0')
    {
        count[str2[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Strings are not anagrams");
            return 0;
        }
    }

    printf("Strings are anagrams");

    return 0;
}
