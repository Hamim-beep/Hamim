#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, x1, x2;
        scanf("%d %d %d", &n, &x1, &x2);

        int dist = x2 - x1;
        int ans = (dist + 1) / 2;

        printf("%d\n", ans);
    }

    return 0;
}

