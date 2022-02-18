// print first n even numbers
#include <stdio.h>

int main() {
  int i = 2, n;
  // to print odd numbers set variable i = 1
  int clrscr();

  printf("Enter n : ");
  scanf("%d", &n);

  while (i <= n) {
    printf("%d\t", i);
    i = i + 2;
  }
  int getch();
}