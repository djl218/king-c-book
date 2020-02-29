/* Creates a one-month calendar. */

#include <stdio.h>

int main(void)
{
  int i, n, start_day;

  printf("Enter number of days in month: ");
  scanf("%d", &n);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start_day);

  for (i = 1; i < start_day; i++) {
    printf("   ");
  }

  for (i = 1; i <= n; i++) {
    printf("%3d", i);
    if ((start_day + i - 1) % 7 == 0)
      printf("\n");
  }

  printf("\n\n");

  return 0;
}
