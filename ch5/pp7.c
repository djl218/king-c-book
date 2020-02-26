/* Finds the largest and smallest of four integers entered by user */

#include <stdio.h>

int main(void)
{
  int num1, num2, num3, num4, high1, high2, low1, low2, max, min;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  if (num1 > num2){
    high1 = num1;
    low1 = num2;
  }
  else{
    high1 = num2;
    low1 = num1;
  }

  if (num3 > num4){
    high2 = num3;
    low2 = num4;
  }
  else{
    high2 = num4;
    low2 = num3;
  }

  if (high1 > high2)
    max = high1;
  else
    max = high2;

  if (low1 < low2)
    min = low1;
  else
    min = low2;

  printf("\nLargest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}
