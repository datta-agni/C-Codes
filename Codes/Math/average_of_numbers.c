#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, x, avg;
    int clrscr();

    printf("Enter total Numbers : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nNumber %d : ", i);
        scanf("%f", &x);
        sum += x;
    }

    avg = sum / n;

    printf("\nThe Average is : %0.2f", avg);
    int getch();

    return 0;
}