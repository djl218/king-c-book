/* Takes integer that is entered by the user and displays it in octal form */

#include <stdio.h>

int main(void)
{
    int number, first_quotient, first_remainder, second_quotient, second_remainder, third_quotient, third_remainder, fourth_quotient, fourth_remainder, fifth_quotient, fifth_remainder;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    first_quotient = number / 8;
    first_remainder = number % 8;                       // This number will be the ones digit in the new octal number

    second_quotient = first_quotient / 8;
    second_remainder = first_quotient % 8;              // This number will be the tens digit in the new octal number

    third_quotient = second_quotient / 8;
    third_remainder = second_quotient % 8;              // This number will be the hundreds digit in the new octal number

    fourth_quotient = third_quotient / 8;
    fourth_remainder = third_quotient % 8;              // This number will be the thousands digit in the new octal number

    fifth_quotient = fourth_quotient / 8;
    fifth_remainder = fourth_quotient % 8;              // This number will be the ten thousands digit in the new octal number

    printf("In octal, your number is: %d%d%d%d%d", fifth_remainder, fourth_remainder, third_remainder, second_remainder, first_remainder);

    return 0;
}
