/* Calculates remaining balance on loan */

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, balance_1, balance_2_before_interest, balance_2_after_interest, balance_3_before_interest, balance_3_after_interest;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    balance_1 = (loan_amount - monthly_payment) + (loan_amount * (interest_rate / 100 / 12));
    printf("\nBalance remaining after first payment: $%.2f\n", balance_1);

    balance_2_before_interest = (balance_1 - monthly_payment);
    balance_2_after_interest = balance_2_before_interest + (balance_1 * (interest_rate / 100 / 12));
    printf("Balance remaining after second payment: $%.2f\n", balance_2_after_interest);

    balance_3_before_interest = (balance_2_after_interest - monthly_payment);
    balance_3_after_interest = balance_3_before_interest + (balance_2_after_interest * (interest_rate / 100 / 12));
    printf("Balance remaining after third payment: $%.2f\n", balance_3_after_interest);

    return 0;
}
