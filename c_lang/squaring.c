#include <stdio.h>
#define NMAX 10

void input(int *a, int *n);
void output(int *a, int *n);
void squaring(int *a, int *n);

int main() {
    int n, data[NMAX];

    input(data, &n);
    if (n == 0) {
        printf("n/a\n");
    } else {
        squaring(data, &n);
        output(data, &n);

        return 0;
    }
}

void input(int *a, int *n) {
    scanf("%d", n);

    if ((*n > NMAX) || (*n <= 1)) {
        *n = 0;

    } else {
        for (int p = 0; p < *n; p++) {
            scanf("%d", &a[p]);
        }
    }
}

void output(int *a, int *n) {
    for (int p = 0; p < *n; p++) {
        if (p + 1 == *n) {
            printf("%d", a[p]);
        } else {
            printf("%d ", a[p]);
        }
    }
}

void squaring(int *a, int *n) {
    for (int p = 0; p < *n; p++) {
        a[p] *= a[p];
    }
}
