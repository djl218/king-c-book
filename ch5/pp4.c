/* Asks the user for the wind speed, then gives a description based on that speed */

#include <stdio.h>

int main(void)
{
  int speed;

  printf("Enter the wind speed (knots): ");
  scanf("%d", &speed);

  if (speed < 1 )
    printf("Description: Calm\n");
  else if (speed <= 3)
    printf("Description: Light air\n");
  else if (speed <= 27)
    printf("Description: Breeze\n");
  else if (speed <= 47)
    printf("Description: Gale\n");
  else if (speed <= 63)
    printf("Description: Storm\n");
  else
    printf("Description: Hurricane\n");

  return 0;
}
