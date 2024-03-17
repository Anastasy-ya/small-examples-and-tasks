// converting radians to degrees
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rad;
    double grad;
    char c;

    scanf("%d%c", &rad, &c);
    if (rad >= 0 && c == '\n') {
        grad = (double)rad * 57.29;
        printf("%.0lf", grad);
    } else {
        printf("n/a");
    }

    return 0;
}