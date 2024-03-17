#include <math.h>
#include <stdio.h>

int main() {
    double angle;

    printf("Enter the angle value in degrees: ");
    scanf("%lf", &angle);
    double sin_angle = sin(angle * M_PI / 180.0);
    printf("Sine of angle is: %.2lf\n", sin_angle);

    return 0;
}