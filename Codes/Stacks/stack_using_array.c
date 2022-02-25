#include <stdio.h>
#include <stdlib.h>

int top = -1;
int array[10];

void push(int x) {
    if (top == 9)
        printf("Stack Overflow");
    else
        array[++top] = x;
}

int pop() {
    int item;
    if (top == -1)
        printf("Stack Underflow");
    else {
        item = array[top];
        top--;
    }
    return item;
}

void display() {
    while (top != -1) {
        printf("%d\t", array[top]);
        top--;
    }
}

int main() {
    int opt, value, popped = 0;
    while (opt != 4) {
        printf("Which operation do you want to perform?\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        scanf("%d", &opt);

        switch (opt) {
            case 1:
                printf("enter the value\n");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                popped = pop();
                printf("The element popped is %d\n", popped);
                break;
            case 3:
                display();
                break;
        }
    }

    return 0;
}
