#include <stdio.h>

int main() {
    int n, d, a, sum = 0;
    int clrscr();
    printf("Enter the number : ");
    scanf("%d", &n);

    a = n;

    while (a > 0) {
        d   = a % 10;
        sum = sum + d;
        a   = a / 10;
    }

    if (n % sum == 0)
        printf("\nThe number is Niven Number.");
    else
        printf("\nThe number is not a Niven Number.");

    int getch();

    return 0;
}