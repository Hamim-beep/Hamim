#include <stdio.h>


int main()
{
    int A, B, C;

    printf("Enter the value of A, B, C:\n");
    scanf("%d%d%d", &A, &B, &C);

    if (A > B && A > C)
        printf("A is largest\n");
    else if (B > A && B > C)
        printf("B is largest\n");
    else
        printf("C is largest\n");

    return 0;
}
