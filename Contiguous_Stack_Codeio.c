#include <stdio.h>
#define capacity 5

int arr[capacity];
int top = -1;

int isFull() {
    if (top == capacity-1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(int data) {
    if (isFull() == 1) {
        printf("Stack OverFlow..! Stack is Full\n");
    }
    else {
        top++;
        arr[top] = data; //arr[++top] = data
    }
}

int isEmpty() {
    if (top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int pop() {
    if (isEmpty() == 1) {
        printf("Stack UnderFlow..! Stack is Empty\n");
        return -1;
    }
    else {
        top--;
        return arr[top+1]; //arr[top--] = data
    }
}

int peek() {
    if (isEmpty() == 1) {
        printf("Stack is Empty\n");
        return -1;
    }
    else {
        return arr[top];
    }
}

void printStack() {
    int i;
    if (isEmpty() == 1) {
        printf("Stack is Empty\n");
    }
    else {
        for (i = 0;i <= top;i++) {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int popped;
    int peeked;
    int choice, data;
    do {
        printf("\nStack Operations\n1) Push\n2) Pop\n3) Peek\n4) Print Stack\n5)Exit\n");
        scanf("%d",&choice);

        switch (choice) {
            case 1 :
                printf("Enter the value to be pushed : ");
                scanf("%d",&data);
                push(data);
                break;
            case 2 :
                popped = pop();
                if (popped != -1) {
                    printf("\n%d Element Poped Out",popped);
                }
                break;
            case 3 :
            peeked = peek();
                if (peeked != -1) {
                    printf("\n%d Element Peeked",peeked);
                }
                break;
            case 4 :
                printStack();
                break;
        }
    } while (choice != 5);
    return 0;
}