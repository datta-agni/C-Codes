#include <stdio.h>

void main() {
    int n, sum = 0, i, value;
    int clrscr();

    printf("Enter total numbers you want to add : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d : ", i);
        scanf("%d", &value);
        sum = sum + value;
    }

    printf("Sum of entered numbers : %d", sum);

    int getch();

    return 0;
}
