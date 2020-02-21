/* Computes the volume of a sphere with radius inputed by user */

#include <stdio.h>

#define M_PI 3.14159265358979323846f

int main(void)
{
    float radius, volume;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * M_PI * radius * radius * radius;

    printf("Volume (cubic meters): %.2f\n", volume);

    return 0;
}
