// armstrong number
#include <stdio.h>

int main() {
    int i = 2, temp, rem, sum = 0, n;
    int clrscr();

    printf("Enter n : ");
    scanf("%d", &n);
    temp = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n   = n / 10;
    }

    if (temp == sum)
        printf("Entered number is an Armstrong Number.");
    else
        printf("Entered number is not an Armstrong Number.");

    int getch();

    return 0;
}