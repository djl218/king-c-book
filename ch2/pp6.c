/* Calculates a polynomial */

#include <stdio.h>

int main(void)
{
    float x, equals;

    printf("Please enter a value for x: ");
    scanf("%f", &x);

    equals = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("Here is what our function equals for that value of x: %.2f", equals);

    return 0;
}
