#include<stdio.h>
#include<stdlib.h>

// Defining Structure
struct node{
    int info;
    struct node *link;
}typedef node;
// Initiazing Start to Null
node *Start=NULL;

// Create node and assign memory 
node * CreateNode(){
    node * n;
    n=(node*)malloc(sizeof(node*));
    return n;
}
// Inserting values at the end of the linked list
void InsertNodeAtEnd(int x){
node *temp,*t;
temp=CreateNode();
temp->info=x;
temp->link=NULL;
if(Start==NULL)
    Start=temp;
else{
    t=Start;
    while (t->link!=NULL)
        t=t->link;
    t->link=temp;
    }
}

// Deleteting value from the start of list
void DeleteNodeAtStart(){
    node * temp;
    if(Start==NULL)
        printf("List is empty");
    else
    {
        node *r;
        r=Start;
        Start=Start->link;
        free(r);
    }
    
}

// Inserting at the end of the list
void InsertAtEnd(int x){
    node *temp;
    temp=CreateNode();
    temp->info=x;
    temp->link=Start;
    Start=temp;
}

// Deleting value from the end of list
void DeleteAtEnd(){
    node *t,*temp;
    if(Start==NULL)
    printf("EMPTY");
    else
    {
        t=Start;
        temp=t->link;
        while (temp->link!=NULL)
        {
            t=t->link;
            temp=temp->link;
        }
        t->link=NULL;
        free(temp);
        
    }
    
}

// finction to view the linked list content
void displeyLinkList(){
    node * temp;
    if(Start==NULL)
    printf("LIST IS EMPTY");
    temp=Start;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->info);
        temp=temp->link;
    }
}

// Driver function
int main(){
    printf("Singly linked list\n");
    int choice,x;
    
    printf("1. Inset at the start \n2. Insert At the end \n3. Delete from start\n4. Delete from end\n5. Display List\n6. Exit");
    printf("\n");
    
while(1)
{
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number  : ");
        scanf("%d",&x);
        InsertNodeAtEnd(x);
        break;
    case 2:
        printf("Enter the number  : ");
        scanf("%d",&x);
        InsertAtEnd(x);
        break;
    case 3:
        DeleteNodeAtStart();
        break;
    case 4:
        DeleteAtEnd();
        break;
    case 5:
        displeyLinkList();
        break;
    case 6:
        printf("OKEY\n");
        exit(0);
        break;
    
    default:
        printf("Chose correct option");
        break;
    }
}

    return 0;
}