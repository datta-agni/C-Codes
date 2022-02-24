#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, j = 0, len;
    char buff[50];
    int clrscr();

    printf("Enter String with white space : ");
    gets(buff);

    len = (int)strlen(buff);

    while (i != len) {
        if (buff[i] != ' ') buff[j++] = buff[i];
        i++;
    }

    buff[j] = 0;

    printf("\nYour String  is : %s.", buff);
    int getch();

    return 0;
}