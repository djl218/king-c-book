/* Displays the numbers 1-16 in a 4x4 arrangement */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, row1_sum, row2_sum, row3_sum, row4_sum, col1_sum, col2_sum, col3_sum, col4_sum, top_left_bottom_right_diagonal_sum, bottom_left_top_right_diagonal_sum;

    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16);

    row1_sum = num1 + num2 + num3 + num4;
    row2_sum = num5 + num6 + num7 + num8;
    row3_sum = num9 + num10 + num11 + num12;
    row4_sum = num13 + num14 + num15 + num16;
    printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);

    col1_sum = num1 + num5 + num9 + num13;
    col2_sum = num2 + num6 + num10 + num14;
    col3_sum = num3 + num7 + num11 + num15;
    col4_sum = num4 + num8 + num12 + num16;
    printf("Column sums: %d %d %d %d\n", col1_sum, col2_sum, col3_sum, col4_sum);

    top_left_bottom_right_diagonal_sum = num1 + num6 + num11 + num16;
    bottom_left_top_right_diagonal_sum = num13 + num10 + num7 + num4;
    printf("Diagonal sums: %d %d", top_left_bottom_right_diagonal_sum, bottom_left_top_right_diagonal_sum);

    return 0;
}
