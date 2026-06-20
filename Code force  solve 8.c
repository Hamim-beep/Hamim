#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);


        for(int i = 0; i < n; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
        }

        // output n for every function
        for(int i = 0; i < n; i++)
        {
            printf("%d ", n);
        }
        printf("\n");
    }

    return 0;
}
