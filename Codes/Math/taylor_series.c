#include <math.h>
#include <stdio.h>

int main() {
    int x, i;
    int fact  = 1, n;
    float sum = 0;
    int clrscr();

    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        fact = fact * i;
        sum  = sum + (pow(x, i) / fact);
    }

    sum = sum + 1;

    printf("The sum of Taylor Series is : ");
    printf("%f", sum);

    int getch();

    return 0;
}
