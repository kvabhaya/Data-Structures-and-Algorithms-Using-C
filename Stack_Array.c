#include <stdio.h>
#define MAX_SIZE 5

int S[MAX_SIZE];
int top=-1;
int i;
int x;

void Push(int x) {
    if(top==MAX_SIZE-1) {
        printf("Stack is Full\n");
        return;
    }
    else {
        top++;
        S[top]=x;
    }
}
void Pop() {
    if(top==-1) {
        printf("Stack is Empty\n");
    }
    else{
        top--;
    }
}
int Top() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return -1;
    }
    return S[top];
}
void Print() {
    
    printf("Stack : ");
    for (i=0;i<=top;i++) {
        printf("%d ",S[i]);
    }
    printf("\n");
}

void main() {
    int choice;
    for (i=0;i<MAX_SIZE;i++) {
        printf("Enter a Number from Below Index : \n");
        printf("1.Push\n2.Pop\n3.Top\n4.Print\n5.Exit\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter Value to Add Stack : ");
                scanf("%d",&x);
                Push(x);
                break;
            case 2:
                Pop();
                break;
            case 3:
                printf("Top of Stack: %d\n", Top());
                break;
            case 4:
                Print();
                break;
            case 5:
                return 0;
        }
    }
    return 0;
}

