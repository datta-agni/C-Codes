// variable swap
#include <stdio.h>

int main() {
  int a, b, d, temp;
  int clrscr();

  printf("Enter 1st number : ");
  scanf("%d", &a);

  printf("Enter 2nd number : ");
  scanf("%d", &b);

  printf("\nBefore Swapping...");
  printf("A=%d, B=%d", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("\nAfter Swapping...");
  printf("\n A=%d, B=%d", a, b);

  int getch();
}