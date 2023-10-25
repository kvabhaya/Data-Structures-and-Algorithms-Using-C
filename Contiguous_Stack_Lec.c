#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAXSTACK 20

typedef int stackEntry;
typedef struct {
    int top;
    stackEntry entry [MAXSTACK];
} Stack;

//Create Stack
void createStack (Stack *s) {
    s->top=-1;
}

//Is Stack Empty
typedef enum {FALSE,TRUE} Boolean;
Boolean isStackEmpty (const Stack *s) {
    return (s->top==-1);
}

//Is Stack Full
Boolean isStackFull (const Stack *s) {
    return (s->top==MAXSTACK-1);
}

//Push
void push(stackEntry item, Stack *s) {
    if(!isStackFull(s))
        s->entry[++s->top]=item;
    else {
        printf("---Stack is Full--");
        exit(1); //program exit with an error code1
    }
}

//Pop
void pop(stackEntry *item, Stack *s) {
    if(!isStackEmpty(s))
        *item=s->entry[s->top--];
    else {
        printf("--Stack is Empty!!--");
        exit(1); //program exit with an error code1
    }
}

void main() {
    Stack s1;
    createStack(&s1);
    int i;
    int x;

    printf("Enter the value of stack : \n");

    for(i=0;i<MAXSTACK;i++)
    {
        scanf("%d",&x);
        push(x,&s1);
    }

    printf("\n\nValue of pop element : ");
    pop(&x,&s1);
    printf("%d",x);

getch();
}
