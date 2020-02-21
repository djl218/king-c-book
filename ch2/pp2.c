/* Computes the volume of a sphere with radius of ten meters */

#include <stdio.h>

#define M_PI 3.14159265358979323846f

int main(void)
{
    int radius = 10;
    float volume;

    volume = (4.0f / 3.0f) * M_PI * radius * radius * radius;

    printf("Volume (cubic meters): %.2f\n", volume);

    return 0;
}
