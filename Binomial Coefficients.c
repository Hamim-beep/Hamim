#include <stdio.h>

#define MAX 10

int main() {
    int row, col, value;

    printf("row ");
    for (col = 0; col <= MAX; col++) {
        printf("%d", col);
    }

    printf("\n");

    for (row = 0; row <= MAX; row++) {
        printf("%d ", row);

        value = 1;

        for (col = 0; col <= row; col++) {
            printf("%d", value);
            value = value * (row - col) / (col + 1);
        }

        printf("\n");
    }

    return 0;
}
