#include <stdio.h>

double sumseries(double);

int main() {
    double number, sum;
    int clrscr();

    printf("Enter the number : ");
    scanf("%lf", &number);
    sum = sumseries(number);

    printf("\nSum of the above series = %lf ", sum);

    int getch();

    return 0;
}

double sumseries(double m) {
    double sum2 = 0, f = 1, i;
    for (i = 1; i <= m; i++) {
        f    = f * i;
        sum2 = sum2 + (i / f);

        if (i == m)
            printf("%.2lf / %.2lf = %lf", i, f, sum2);
        else
            printf("%.2lf / %.2lf + \n", i, f);
    }
    return (sum2);
}
