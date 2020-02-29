/* Update to pp8.c from Ch2. */

#include <stdio.h>

int main(void)
{
  float loan_amount, interest_rate, payment, monthly_rate, balance;
  int number_of_payments, i;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);
  balance = loan_amount;

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  monthly_rate = (interest_rate / 100.0f) / 12;

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  printf("Enter number of payments: ");
  scanf("%d", &number_of_payments);

  printf("\n");

  for (i = 1; i <= number_of_payments; i++) {
    balance = (balance - payment) + (balance * monthly_rate);
    printf("Balance remaining after payment %d: $%.2f\n", i, balance);
  }

  printf("\n");

  return 0;
}
