#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    double S = 0;
    int count = 2;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        double P = 1;
        for (int j = 1; j <= i; j++)
        {
            P *= sin(j);
            count += 4;
        }
        S += (sin(i) + 2) / (i + P);
        count += 8;
    }

    printf("S = %.7lf\n", S);
    printf("The number of operations = %d\n", count);
}