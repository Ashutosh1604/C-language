//stack using LL and 2 pointer
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};


void push(struct node** top,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    if(n==NULL)
    {
        printf("Stack is full\n");
        return;
    }
    else{
        n->next=*top;
        *top=n;
    }


}


void pop(struct node** top)
{
      if(*top==NULL)
    {
        printf("stack is empty\n");
        return;
    }
 struct node* todelete=*top;

 printf("element popped is %d",(*top)->data);
 *top=(*top)->next;
 free(todelete);
}


void display(struct node* top)
{
    if(top==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    else
    {
        while(top!=NULL)
        {
            printf("%d ",top->data);
            top=top->next;
        }
    }
}

int main()
{

struct node* top=NULL;

    int choice,item;

    while(1)
    {
        printf("Enter 1 for push, 2 for pop,3 for display and 4 to exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1: printf("Enter the item to be pushed: ");
        scanf("%d",&item);
        push(&top,item);
        break;

        case 2:pop(&top);
        break;

        case 3: display(top);
        break;

        case 4:exit(1);
            break;


        default:
            printf("wrong choice\n");
             break;

    }


    }

    return 0;
}

