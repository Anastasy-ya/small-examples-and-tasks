/*Calculate the mass in kilograms of a sphere consisting entirely of platinum*/

#include <math.h>
#include <stdio.h>

int main() {
    double radius = 0, volume;
    double result;

    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    result = volume * 21500;

    printf("%.0lf", result);

    return 0;
}