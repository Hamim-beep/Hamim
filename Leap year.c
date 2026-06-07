#include <stdio.h>

int main()
{
    int n;
    printf("The year is :\n");
    scanf("%d",&n);
    if(n%4==0&& n%100!=0||n%400==0)
        printf("Leap year\n");
    else
        printf("Not leap year\n");
    return 0;

}
