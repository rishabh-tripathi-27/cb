#include <stdio.h>
#include <math.h>
int main()
{
    float a[20][20], c, x[10], sum = 0;
    int n, i, j, k;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    printf("Enter element row-wise: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            printf("A[%d][%d]:", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                c = a[j][i] / a[i][i];
                for (k = 1; k <= n + 1; k++)
                {
                    a[j][k] = a[j][k] - c * a[i][k];
                }
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        x[i] = a[i][n + 1] / a[i][i];
    }
    printf("\nSolution is:\n");
    for (i = 1; i <= n; i++)
    {
        printf("\nx%d=%f\t", i, x[i]);
    }
    return 0;
}
