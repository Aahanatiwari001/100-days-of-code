#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
        printf("%02d-Apr-%d", day, year);
    else
        printf("Invalid month");

    return 0;
}
