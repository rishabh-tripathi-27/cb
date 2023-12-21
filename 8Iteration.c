#include <stdio.h>
#include <math.h>
float f(float x)
{
    return 2 * x - log10(x) - 7;
}
float si(float x)
{
    return (7 + log10(x)) / 2;
}
float dsi(float x)
{
    return 1 * 0.434294482 / 2 * x;
}
int main()
{
    float a, b, x0, x1;
    int count = 0;
    printf("Enter the Intervals: ");
    scanf("%f %f", &a, &b);
    if (f(a) * f(b) < 0)
    {
        if (dsi(a) <= 1 || dsi(b <= 1))
        {
            x0 = (a + b) / 2;
            printf("\n");
            do
            {
                x1 = si(x0);
                x0 = x1;
                count++;
                printf("%f ", x1);
            } while (fabs(f(x1)) >= 0.00001);
        }
    }
    else
    {
        printf("Incorrect Intervals!!!");
    }
    printf("\n\nRoot Value of Equation: %.5f \nNumber of Iterations: %d", x1, count);
    return 0;
}
