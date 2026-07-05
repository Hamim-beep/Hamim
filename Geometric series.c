#include <stdio.h>
#define LOOP 100
#define ACCURACY 0.0001

int main ()
{   int i;
    float n,term=1,sum=0;
    printf("Enter the value of n:\n");
    scanf("%f",&n);

    for( i =1;i<LOOP;i++)
    {
        sum+=term;
        if(term< ACCURACY)
         break;

        term*=n;
    }

    printf("Sum is =%f\n",sum);
    printf("Terms =%d",i);

    return 0;
}
