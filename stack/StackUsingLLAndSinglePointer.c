//stack using LL and 1 pointer
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* push(struct node* top,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    if(n==NULL)
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        n->next=top;
        top=n;
    }

    return top;


}

struct node* pop(struct node* top)
{
    if(top==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    struct node* todelete=top;

    printf("element popped is %d",top->data);
    top=top->next;
    free(todelete);
    return(top);


}

void peek(struct node* top)
{
    if(top==NULL)
    {
        printf("empty\n");
        return;
    }

    printf("top value is %d\n",top->data);

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
        printf("Enter 1 for push, 2 for pop,3 for peek , 4 to display and 5 to exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the item to be pushed: ");
            scanf("%d",&item);
            top=push(top,item);
            break;

        case 2:
            top=pop(top);
            break;

        case 3:
            peek(top);
            break;

        case 4:
            display(top);
            break;

        case 5:
            exit(1);
            break;


        default:
            printf("wrong choice\n");
            break;

        }


    }

    return 0;
}
