/* Calculates how many digits a number contains assuming it does not exceed four digits */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number < 10)
        printf("The number %d has 1 digit\n", number);
    else if (number > 9 && number < 100)
        printf("The number %d has 2 digits\n", number);
    else if (number > 99 && number < 1000)
        printf("The number %d has 3 digits\n", number);
    else
        printf("The number %d has 4 digits\n", number);

    return 0;
}
