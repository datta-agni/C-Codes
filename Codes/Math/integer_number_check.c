// check numbers
#include <stdio.h>

int main() {
  int n;
  int clrscr();

  printf("Enter number: ");
  scanf("%d", &n);

  if (n > 0)
    printf("Number is positive");
  else if (n < 0)
    printf("Number is negative");
  else
    printf("Number is Zero");

  int getch();
}