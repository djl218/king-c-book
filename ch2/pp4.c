/* Calculate sales tax */

#include <stdio.h>

int main(void)
{
    float money_amount;

    printf("Enter money amount: ");
    scanf("%f", &money_amount);
    printf("With tax added: %.2f\n", 1.05f * money_amount);

    return 0;
}
