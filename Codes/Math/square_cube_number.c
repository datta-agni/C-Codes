// square and cube of a number
#include <stdio.h>

int main() {
    int n, sqr, cube;
    int clrscr();

    printf("Enter Number: ");
    scanf("%d", &n);

    sqr  = n * n;
    cube = n * n * n;

    printf("\nSquare: %d\nCube: %d", sqr, cube);

    int getch();

    return 0;
}