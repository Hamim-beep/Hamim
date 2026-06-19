#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x % 2 == 1 && y % 2 == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}

