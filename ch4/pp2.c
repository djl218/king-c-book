/* Reverses a three-digit number that is entered by the user */

#include <stdio.h>

int main(void)
{
    int number, hundreds_digit, pre_tens_digit, tens_digit, ones_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    hundreds_digit = number / 100;
    pre_tens_digit = number / 10;
    tens_digit = pre_tens_digit % 10;
    ones_digit = number % 10;
    printf("The reversal is: %d%d%d", ones_digit, tens_digit, hundreds_digit);

    return 0;
}
