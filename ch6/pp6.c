/* Asks the user for number.  Prints all even squares between one and the entered number. */

#include <stdio.h>

int main(void)
{
  int i;
  float n;

  printf("Please enter a number: ");
  scanf("%f", &n);

  printf("Here are all of the even squares that come before that number:\n\n");

  i = 2;
  while ((i * i) <= n) {
    printf("%10d\n", i * i);
    i += 2;
  }

  printf("\n");

  return 0;
}
