#include <stdio.h>

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            sum += n;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
