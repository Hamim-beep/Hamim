#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    printf("Maximum = %d", maximum(10, 25));
    return 0;
}
