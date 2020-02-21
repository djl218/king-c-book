/* Calculates a polynomial */

#include <stdio.h>

int main(void)
{
    float x, equals;

    printf("Please enter a value for x: ");
    scanf("%f", &x);

    equals = (3.0f * x * x * x * x * x) + (2.0f * x * x * x * x) - (5.0f * x * x * x) - (x * x) + (7.0f * x) - 6.0f;

    printf("Here is what our function equals for that value of x: %.2f", equals);

    return 0;
}
