/* Updated version of pp9.c from Ch5. */

#include <stdio.h>

int main(void)
{
  int month1 = 0, day1 = 0, year1 = 0, month2, day2, year2, earliest, latest;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month2, &day2, &year2);

  latest = (month2 * 30) + day2 + (year2 * 365);

  if (latest == 0) {
    printf("\n");
    return 0;
  }

  earliest = latest;

  while (latest != 0) {
    if (latest <= earliest) {
      month1 = month2;
      day1 = day2;
      year1 = year2;
      earliest = latest;
    }

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    latest = (month2 * 30) + day2 + (year2 * 365);
  }

  printf("\n%d/%d/%.2d is the earliest date. \n\n", month1, day1, year1);

  return 0;
}
