/* Update for pp1.c from Ch4.  The program can now have one, two, three, or more digits. */

#include <stdio.h>

int main(void)
{
  int n, remainder;

  printf("Enter a nonnegative integer: ");
  scanf("%d", &n);

  printf("The reversal is: ");

  do {
    remainder = n % 10;
    printf("%d", remainder);
    n /= 10;
  } while (n > 0);

  printf("\n\n");
}
