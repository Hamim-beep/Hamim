#include <stdio.h>

#define pi 3.1416

float area(float r)
{
    return pi*r*r;
}

float circumference(float r)
{
    return 2*pi*r;
}

int main()
{
    float result1, result2, r;

    printf("Enter the value of r: ");
    scanf("%f", &r);

    result1 = area(r);
    printf("Area of circle = %f\n", result1);

    result2 = circumference(r);
    printf("Circumference of circle = %f\n", result2);

    return 0;
}
