/*  Gives the user the greatest common denominator between two integers */

#include <stdio.h>

int main(void)
{
  int m, n, remainder;

  printf("Enter two integers: ");
  scanf("%d%d", &m, &n);

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("Greatest common divisor: %d\n\n", m);

  return 0;
}
