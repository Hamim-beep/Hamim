#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num;

    printf("Enter the value of n:\n ");
    scanf("%d", &num);

    int factorial = fact(num);

    printf("%d! = %d\n", num, factorial);

    return 0;
}
