// converting radians to degrees
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rad;
    double grad;

    scanf("%d", &rad);
    if (rad >= 0) {
        grad = (double)rad * 57.29;
        printf("%.0lf", grad);
    } else {
        printf("n/a");
    }

    return 0;
}