#include<stdio.h>
#include<stdlib.h>

#define MaxSize 199
int stack[MaxSize];
int top=-1;

// pushing item at the top of the stack
void Push(int x){
    if(top>=MaxSize)
        printf("Stack overflow\n");
    else
        stack[++top]=x;
}

// Popping top element
int pop(){
    if(top==-1)
        printf("Underflow\n");
    else
        return stack[top--];
}

//Seeking top element
int SeekTop(){
    if(top==-1)
        printf("No element\n");
    else
        return stack[top];
}

// View the stack
void Display(){
    int i;
    if(top==-1)
        printf("Stack is empty\n");
    else{
        for(i=0;i<=top;i++){
            printf("%d\n",stack[top-i]);
        }
    }
}

// Driver function
int main(){
    int choice,x;
    printf("MAXIMUM %d\n",INT_MAX);
    printf("MINIMUM %d\n",INT_MAX);
    printf("1. Push\n2. Pop\n3. Seek top\n4. Display\n5. Exit\n");
    while (1){        
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("ENTER THE NUMBER :  ");
        scanf("%d",&x);
        Push(x);
        break;

    case 2:
        pop();
        break;

    case 3:
        printf("%d",SeekTop);
        break;

    case 4:
        Display();
        break;

    case 5:
        exit(0);
        break;
    
    default:
        printf("Chose correct option");
        break;
    }

    }
        return 0;
}

