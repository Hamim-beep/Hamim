#include <stdio.h>

double power(int x,int y)
{
    double p=1;
    int i;

    if(y>=0)
    {
        for(i=1;i<=y;i++)
        { p*=x;}
    }
    else {
        for(i=1;i<=-y;i++)
        { p/=x;}
    }

    return p;
}
int main()
{
    int x, y;

    printf("Enter x and y:\n ");
    scanf("%d %d", &x, &y);

    printf("%d to the power %d = %.2f\n", x, y, power(x, y));

    return 0;
}
