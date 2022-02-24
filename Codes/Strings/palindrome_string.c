#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int begin, middle, end, length = 0;
    int clrscr();

    printf("Enter the string to check if it is a palindrome : \n");
    gets(text);

    while (text[length] != '\0') length++;

    end    = length - 1;
    middle = length / 2;

    for (begin = 0; begin < middle; begin++) {
        if (text[begin] != text[end]) {
            printf("\nString is not a palindrome.");
            break;
        }
        end--;
    }

    if (begin == middle) printf("\nString is Palindrome.");

    int getch();

    return 0;
}