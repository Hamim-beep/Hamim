#include <stdio.h>

int add3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("Sum = %d", add3(10, 20, 30));
    return 0;
}
