#include <stdio.h>
#include <math.h>
double f(double x)
{
    return (x * x * x - 3 * x - 5);
}
double f1(double x)
{
    return 3 * x * x - 3;
}
int main()
{
    double x, x0, x1;
    int iteration = 0;
    printf("Enter the value of x0: ");
    scanf("%lf", &x0);
    printf("\nEnter the value of x1: ");
    scanf("%lf", &x1);
    while (1)
    {
        x1 = x0 - (f(x0) / f1(x0));
        iteration++;
        x = x0;
        x0 = x1;
        printf("Iteration %d, x = %lf\n", iteration, x1);
        if (fabs(x1 - x) <= 0.0001)
        {
            break;
        }
    }
    printf("Root of equation is = %.5lf", x1);
    return 0;
}