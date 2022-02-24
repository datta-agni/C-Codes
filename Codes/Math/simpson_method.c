#include <math.h>
#include <stdio.h>
#define f(x) 1 / (1 + x * x)

int main() {
    float lower, upper, integral = 0.0, stepSize, k;
    int i, subInterval;
    int clrscr();

    printf("Enter lower integration limit: ");
    scanf("%f", &lower);
    printf("Enter upper integration limit: ");
    scanf("%f", &upper);
    printf("Enter sub intervals: ");
    scanf("%d", &subInterval);

    stepSize = (upper - lower) / subInterval;
    integral = f(lower) + f(upper);

    for (i = 1; i <= subInterval - 1; i++) {
        k = lower + i * stepSize;
        if (i % 2 == 0)
            integral = integral + 2 * f(k);
        else
            integral = integral + 4 * f(k);
    }

    integral = integral * stepSize / 3;
    printf("The integration is: %.3f", integral);

    int getch();

    return 0;
}