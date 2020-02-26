/* Converts numerical grades into letter grades */

#include <stdio.h>

int main(void)
{
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade < 0 || grade > 100){
    printf("It is not possible to have a grade of that value.\n");
    return 0;
  }

  switch (grade / 10){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:  printf("Letter grade: F\n"); break;
    case 6:  printf("Letter grade: D\n"); break;
    case 7:  printf("Letter grade: C\n"); break;
    case 8:  printf("Letter grade: B\n"); break;
    case 9:  printf("Letter grade: A\n"); break;
    case 10: printf("Letter grade: A\n"); break;
  }

  return 0;
}
