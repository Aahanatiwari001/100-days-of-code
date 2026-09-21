#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    j = length - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag == 1)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");

    return 0;
}
