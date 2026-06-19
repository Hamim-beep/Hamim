#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 0; tc < t; tc++) {
        int n, x1, x2, k;
        scanf("%d %d %d %d", &n, &x1, &x2, &k);

        int diff;
        if (x1 > x2)
            diff = x1 - x2;
        else
            diff = x2 - x1;

        int d;
        if (diff < n - diff)
            d = diff;
        else
            d = n - diff;

        if (n <= 3)
            printf("%d\n", d);
        else
            printf("%d\n", d + k);
    }

    return 0;
}
