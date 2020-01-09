//StackStruct.c
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}typedef node;

node *top=NULL;
// create node
node *Create(){
    node *n;
    n=(node*)malloc(sizeof(node*));
    return n;
}
// last in first out
// adding elment to the stack
void push(int x){
    node * temp;
    temp = Create();
    temp->data=x;
    temp->link=top;
    top=temp;
}

// rempve top element
int pop(){
    int x;
    node *t;
    if(top==NULL)
        printf("UNDERFLOW");
    else{
        t=top;
        x=top->data;
        top=top->link;
        free(t);
        return x;
    }
    
}
//seeking top element
int seek(){
    if(top!=NULL)
        return top->data;
    else
    {
        printf("ERROR\n");
    }
    
}
// VIEW LIST
void disp(){
    node *t;
    t=top;
    while (t!=NULL)
    {
        printf("%d\n",t->data);
        t=t->link;
    }    
}

int main(){
    int choice,x;
   printf("STACK\n");
   printf("1.push\n2>pop\n3.Seek\n4.exit\n");
   while (1)
   {
       printf("Enter your choice :  ");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1:
            printf("Enter number : ");
            scanf("%d",&x);
            push(x);
            disp();
           break;
       case 2:
            pop();
            disp();
           break;
       case 3:
            printf(":-  %d\n",seek());
           break;
       case 4:
            exit(0);
           break;
       
       default:
           break;
       }
   }
   
   
   
   
   
   
   
    return 0;
}