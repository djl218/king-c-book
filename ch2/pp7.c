/* Tells user how to pay amount using the lowest number of bills possible */

#include <stdio.h>

int main(void)
{
    int original_amount, twenty_reduction, ten_reduction, five_reduction, one_reduction;

    printf("Enter a dollar amount: ");
    scanf("%d", &original_amount);

    twenty_reduction = original_amount / 20;
    printf("$20 bills: %d\n", twenty_reduction);

    ten_reduction = (original_amount - (twenty_reduction * 20)) / 10;
    printf("$10 bills: %d\n", ten_reduction);

    five_reduction = (original_amount - (twenty_reduction * 20 + ten_reduction * 10)) / 5;
    printf("$5 bills: %d\n", five_reduction);

    one_reduction = (original_amount - (twenty_reduction * 20 + ten_reduction * 10 + five_reduction * 5)) / 1;
    printf("$1 bills: %d\n", one_reduction);

    return 0;
}
