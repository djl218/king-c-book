/* Reverses a three-digit number that is entered by the user */

#include <stdio.h>

int main(void)
{
    int first_digit, second_digit, third_digit;

    printf("Please think of a three-digit number.\n");
    printf("Please enter the first digit of that number: ");
    scanf("%d", &first_digit);

    printf("Please enter the second digit: ");
    scanf("%d", &second_digit);

    printf("Please enter the third digit: ");
    scanf("%d", &third_digit);

    printf("\nHere is the reversal of that three-digit number: %d%d%d", third_digit, second_digit, first_digit);

    return 0;
}
