#include <stdio.h>
#include <math.h>
double f(double x)
{
    return (x * x * x - 5 * x + 1);
}
int main()
{
    double x, x0, x1, x2;
    int iteration = 0;
    printf("Enter value of x0: ");
    scanf("%lf", &x0);
    printf("\nEnter value of x1: ");
    scanf("%lf", &x1);
    while (1)
    {
        x2 = x1 - (x1 - x0) * f(x1) / (f(x1) - f(x0));
        iteration++;
        x0 = x1;
        x1 = x2;
        x = x0;
        printf("Iteration %d, x = %lf\n", iteration, x2);
        if (fabs(x2 - x) <= 0.0001)
        {
            break;
        }
    }
    printf("Root of equation is = %.5lf", x2);
    return 0;
}