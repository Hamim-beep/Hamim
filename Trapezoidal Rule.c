#include <stdio.h>

float start_point, end_point, total_area;
int numtraps;

void input(void)
{
    printf("Enter the lower limit: ");
    scanf("%f", &start_point);

    printf("Enter the upper limit: ");
    scanf("%f", &end_point);

    printf("Enter the number of trapezoids: ");
    scanf("%d", &numtraps);
}

float trap_area(float h1, float h2, float base)
{
    return 0.5 * (h1 + h2) * base;
}

float function_x(float x)
{
    return x * x + 1;
}

float find_area(float a, float b, int n)
{
    float base, x, h1, h2;
    total_area = 0;

    base = (b - a) / n;

    for (x = a; x < b; x = x + base)
    {
        h1 = function_x(x);
        h2 = function_x(x + base);

        total_area = total_area + trap_area(h1, h2, base);
    }

    return total_area;
}

int main()
{
   input();

    total_area = find_area(start_point, end_point, numtraps);

    printf("TOTAL AREA = %f", total_area);

    return 0;
}
