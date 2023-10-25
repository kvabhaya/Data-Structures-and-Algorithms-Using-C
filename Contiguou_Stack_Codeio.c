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
        return arr[top+1];
    }
}

int main() {
    return 0;
}