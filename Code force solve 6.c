
#include <stdio.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) count++;
    }

    printf("%d\n", count);
    return 0;
}
