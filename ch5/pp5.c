/* Provides the user with how much they owe in taxes */

#include <stdio.h>

int main(void)
{
  float income, tax;

  printf("Please enter your income: $");
  scanf("%f", &income);

  if (income <= 750.00f)
    tax = .01f * income;
  else if (income > 750.00f && income <= 2250.00f)
    tax = .02f * income + 7.50f;
  else if (income > 2250.00f && income <= 3750.00f)
    tax = .03f * income + 37.50f;
  else if (income > 3750.00f && income <= 5250.00f)
    tax = .04f * income + 82.50f;
  else if (income > 5250.00f && income <= 7000.00f)
    tax = .05f * income + 142.50f;
  else
    tax = .06f * income + 230.00f;

  printf("This is the amount that you owe in taxes: $%.2f\n", tax);
}
