#include <stdio.h>
#include <stdlib.h>

int input(int *a, int *n);
void sort(int *a, int *n);
void output(int *a, int *n);

int main() {
    int n;
    int *a;

    if (scanf("%d", &n) == 1 && n > 0) {
        a = (int *)calloc(n, sizeof(int));
        if (a == NULL) {
            printf("Memory Allocation Error!");
            exit(1);
        }

        if (input(a, &n) == 1) {
            printf("n/a\n");
        } else {
            sort(a, &n);
            output(a, &n);
        }
    }
    return 0;
}

int input(int *a, int *n) {

    for (int i = 0; i < *n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            return 1;
        }
    }
    return 0;
}

void output(int *a, int *n) {
    for (int i = 0; i < *n; i++) {
        if (i + 1 == *n) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
}

void sort(int *a, int *n) {
    int size = *n;
    int i, j;
    for (i = 0; i < size; ++i) {
        for (j = size - 1; j > i; --j) {
            if (a[j] < a[j - 1]) {
                int t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
        }
    }
    free(a);
}