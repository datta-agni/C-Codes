#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    int clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);

    /*
     * The first perfect number is 6, because 1, 2, and 3 are its proper positive
     * divisors, and 1 + 2 + 3 = 6.
     */

    while (i < n) {
        if (n % i == 0) sum = sum + i;
        i++;
    }

    if (sum == n)
        printf("\n%d is a perfect number.", i);
    else
        printf("\n%d is not a perfect number.", i);

    int getch();

    return 0;
}