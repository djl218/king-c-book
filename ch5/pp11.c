/* Prints a numerical two-digit number as a word */

#include <stdio.h>

int main(void)
{
  int number, ones_digit, tens_digit;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  ones_digit = number % 10;
  tens_digit = number / 10;

  printf("You entered the number ");

  if (number == 10){
    printf("ten.\n");
    return 0;
  }
  else if (number == 11){
    printf("eleven.\n");
    return 0;
  }
  else if (number == 12){
    printf("twelve.\n");
    return 0;
  }
  else if (number == 13){
    printf("thirteen.\n");
    return 0;
  }
  else if (number == 14){
    printf("fourteen.\n");
    return 0;
  }
  else if (number == 15){
    printf("fifteen.\n");
    return 0;
  }
  else if (number == 16){
    printf("sixteen.\n");
    return 0;
  }
  else if (number == 17){
    printf("seventeen.\n");
    return 0;
  }
  else if (number == 18){
    printf("eighteen.\n");
    return 0;
  }
  else if (number == 19){
    printf("nineteen.\n");
    return 0;
  }


  switch (tens_digit){
    case 2: printf("twenty");     break;
    case 3: printf("thirty");     break;
    case 4: printf("forty");      break;
    case 5: printf("fifty");      break;
    case 6: printf("sixty");      break;
    case 7: printf("seventy");    break;
    case 8: printf("eighty");     break;
    case 9: printf("ninety");     break;
  }


  switch (ones_digit){
    case 0: printf(".\n");        break;
    case 1: printf("-one.\n");    break;
    case 2: printf("-two.\n");    break;
    case 3: printf("-three.\n");  break;
    case 4: printf("-four.\n");   break;
    case 5: printf("-five.\n");   break;
    case 6: printf("-six.\n");    break;
    case 7: printf("-seven.\n");  break;
    case 8: printf("-eight.\n");  break;
    case 9: printf("-nine.\n");   break;
  }

  return 0;
}
