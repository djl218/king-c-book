/* Finds the largest number that is entered by user */

#include <stdio.h>

int main(void)
{
  float max = 0, n;

  do {
    printf("Please enter a number: ");
    if (scanf("%f", &n) == 1) {
      if (n > max){
        max = n;
      }
    }
  }
  while (n > 0);

  printf("\nThe largest number entered was: %.2f\n\n", max);

  return 0;
}
