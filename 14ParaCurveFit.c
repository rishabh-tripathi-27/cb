#include <stdio.h>
#include <conio.h>
#include <math.h>
#define S 50
int main()
{
    int n, i;
    float x[S], y[S], sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, a, b, A;
    printf("Enter the values of number of terms: ");
    scanf("%d", &n);
    printf("Enter the values of x and y : \n x \t y");
    for (i = 1; i <= n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }
    for (i = 1; i <= n; i++)
    {
        sumX = sumX + log(x[i]);
        sumX2 = sumX2 + log(x[i]) * log(x[i]);
        sumY = sumY + log(y[i]);
        sumXY = sumXY + log(x[i]) * log(y[i]);
    }
    b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    A = (sumY - b * sumX) / n;
    a = exp(A);
    printf("The curve is y = %4.3fe^%4.3fx.", a, b);
    return (0);
}