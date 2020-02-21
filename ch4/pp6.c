/*
Rewrite of upc.c, but instead it is for European countries.  The user enters 12 digits at one time
and then gives the user the check digit
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12);

    first_sum = num2 + num4 + num6 + num8 + num10 + num12;
    second_sum = num1 + num3 + num5 + num7 + num9 + num11;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}

