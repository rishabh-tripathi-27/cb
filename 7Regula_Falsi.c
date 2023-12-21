#include <stdio.h>
#include <math.h>
float f(float x)
{
    return 3 * x - cos(x) - 1;
}
int main()
{
    float x0, x1, x2, f0, f1, f2;
    int count = 0;
    printf("Enter the Intervals: ");
    scanf("%f %f", &x0, &x1);
    f0 = f(x0);
    f1 = f(x1);
    if (f0 * f1 < 0)
    {
        do
        {
            x2 = ((x0 * f1) - (x1 * f0)) / (f1 - f0);
            f2 = f(x2);
            if (f2 == 0.0)
            {
                break;
            }
            else if (f2 * f0 < 0)
            {
                x1 = x2;
                f1 = f2;
            }
            else
            {
                x0 = x2;
                f0 = f2;
            }
            count++;
            printf("\n%f ", x2);
        } while (fabs(f2) >= 0.0001);
    }
    else
    {
        return 0;
    }
    printf("\n\nRoot value of Equation: %f\nNumber of Iterations: %d", x2, count);
    return 0;
}
