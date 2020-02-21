/* Changes the format of a telephone number */

#include <stdio.h>

int main(void)
{
    int first_three_numbers, next_three_numbers, next_four_numbers;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first_three_numbers, &next_three_numbers, &next_four_numbers);

    printf("You entered: %d.%d.%d", first_three_numbers, next_three_numbers, next_four_numbers);

    return 0;
}
