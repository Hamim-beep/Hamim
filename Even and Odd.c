#include <stdio.h>

int main()
{
    int i, n,evensum=0,oddsum=0;

    printf("Enter the value of number:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {

       if(i%2==0)
        evensum=evensum+i;
        else
        oddsum=oddsum+i;
    }

    printf("Sum of Even numbers=%d\n",evensum);
     printf("Sum of odd numbers=%d\n",oddsum);

    return 0;
}
