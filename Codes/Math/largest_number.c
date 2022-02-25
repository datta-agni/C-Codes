// largest number
#include <stdio.h>

int main() {
    int a, b;
    int clrscr();

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    if (a > b)
        printf("Largest value is : %d", a);
    else
        printf("Largest value is : %d", b);

    int getch();

    return 0;
}
