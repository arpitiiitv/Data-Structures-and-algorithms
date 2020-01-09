#include<stdio.h>
#include <stdlib.h>

// Structure for DLL
struct node
{
    int data;
    struct node* prev;
    struct node* next;
}typedef node;

node* start=NULL;

// Create structure 
node* CreateNode(){
    node *n;
    n=(node*)malloc(sizeof(node*));
    return n;
}
//Insert at the end
void InsertEnd(int x){
    node *temp,*t;
    temp=CreateNode();
    temp->data=x;
    temp->next=NULL;
    if(start==NULL){
        temp->prev=NULL;
        start=temp;
    }
    else{
        t=start;
        while (t->next!=NULL)
            t=t->next;
        t->next=temp;
    }
}
// InsertFirst
void InsertFirst(int x){
    node* temp;
    temp=CreateNode();
    temp->data=x;
    temp->prev=NULL;
    temp->next=start;
    start=temp;
}
// Delete Last
void DeleteLast(){
    node *t,*temp;
    if(start==NULL)
        printf("error\n");
    else{
        t=start;
        temp=t->next;
        while(temp->next!=NULL){
            t=t->next;
            temp=temp->next;
        }
        t->next=NULL;
        free(temp);
    }
}
//Delete First
void DeleteFirst(){
    node* t;
    if(start==NULL)
        printf("error\n");
    else
    {   t=start;
        start=start->next;
    }
    free(t);
}
//Disply Linked list
void disp(){
    node * t;
    t=start;
    if(start==NULL)
        printf("Empty\n");
    else{
        while (t!=NULL)
        {
            printf("%d -> ",t->data);
            t=t->next;
        }     
    }
    printf("\n");
}
// Driver function
int main(){
    int choice,x;
    printf("DOUBLY LINKED LIST\n");
    printf("1.INSET FIRST\n2.INSERT LAST\n3.DELETE FIRST\n4.DELETE LAST\n5.QUIT\n");
    while(1){
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d",&x);
            InsertFirst(x);
            disp();
            break;

        case 2: 
            printf("Enter number : ");
            scanf("%d",&x);
            InsertEnd(x);
            disp();
            break;

        case 3:
            DeleteFirst();
            disp();
            break;

        case 4:
            DeleteLast();
            disp();
            break;

        case 5:
            exit(0);
            break;
        
        default:
            printf("Enter correct choice \n");
            break;
        }
    }


    return 0;
}












