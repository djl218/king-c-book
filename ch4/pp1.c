/* Reverses a two-digit number that is entered by the user */

#include <stdio.h>

int main(void)
{
    int number, tens_digit, ones_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    tens_digit = number / 10;
    ones_digit = number % 10;
    printf("The reversal is: %d%d", ones_digit, tens_digit);

    return 0;
}
