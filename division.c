#include <stdio.h>

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    printf("Division = %f", divide(20, 4));
    return 0;
}
