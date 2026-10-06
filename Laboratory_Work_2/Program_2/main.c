#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    double P = 1;
    double S = 0;
    int counter = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        P *= sin(i);
        S += (sin(i) + 2) / (i + P);
        counter += 10;
    }

    printf("S = %.7lf\n", S);
    printf("The number of operations = %d\n", counter);
}