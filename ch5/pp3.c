/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, rival_commission, value, num_shares, share_price;

    printf("Enter the number of shares: ");
    scanf("%f", &num_shares);
    printf("Enter the price per share: $");
    scanf("%f", &share_price);

    value = num_shares * share_price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if (value < 2000.00f)
        rival_commission = 33.00f + .03f * num_shares;
    else if (value > 2000.00f)
        rival_commission = 33.00f + .02f * num_shares;

    printf("\nCommission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rival_commission);

    return 0;
}
