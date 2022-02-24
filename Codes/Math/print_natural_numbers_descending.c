// print numbers n to 1
#include <stdio.h>

int main() {
    int i = 1, n;
    int clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    i = n;

    do {
        printf("%d\t", i);
        i--;
    } while (i >= 1);

    int getch();

    return 0;
}