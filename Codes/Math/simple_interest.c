// simple interest
#include <stdio.h>

int main() {
    float interest, p, r, n;
    int clrscr();

    printf("Enter value of P: ");
    scanf("%f", &p);

    printf("Enter value of R: ");
    scanf("%f", &r);

    printf("Enter value of N: ");
    scanf("%f", &n);

    interest = p * r * n / 100.0;

    printf("Simple Interest : %f", interest);

    int getch();

    return 0;
}
