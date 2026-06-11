#include <stdio.h>

int minimum(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    printf("Minimum = %d", minimum(10, 25));
    return 0;
}
