#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double y;

    printf("Enter x: ");
    scanf("%lf", &x);

    if (x > -10) {
        if (x <= -5) {
            y = pow(x, 3) - 6;
            printf("y = %.2lf\n", y);
        }
        else if (x > 5) {
            if (x <= 15) {
                y = pow(x, 3) - 6;
                printf("y = %.2lf\n", y);
            }
            else if (x >= 25) {
                y = 2 * pow(x, 3) - 3 * x + 2;
                printf("y = %.2lf\n", y);
            }
            else {
                printf("При заданому х функція не існує");
            }
        }
        else {
            printf("При заданому х функція не існує");
        }
    }
    else {
        printf("При заданому х функція не існує");
    }

    return 0;
}
