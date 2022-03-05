#include<stdio.h>

struct node{
int data;
struct node* next;
};

int isEmpty(struct node* top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int isFull(struct node* top)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

struct node* push(struct node* top,int val)
{
    if(isFull(top))
    {
        printf("Stack is Full");
    }
    else{
        struct node* n=(struct node*)malloc(sizeof(struct node));
        n->data=val;
        n->next=top;
        top=n;
        return top;
    }


}

struct node* pop(struct node* top)
{
    if(isEmpty(top))
    {
        printf("Stack is Empty");

    }
    else{
        struct node* todelete=top;
        printf("popped element is %d/n",top->data);
        top=top->next;
        free(todelete);
        return top;
    }
}

void display(struct node* top)
{
    while(top!=NULL)
    {
        printf("%d",top->data);
        printf("->");
        top=top->next;

    }
    printf("NULL\n");
}


int main()
{
    struct node* top= NULL;

    int val,ch;
     while(1)
    {
        printf("Enter 1 for push, 2 for pop,3 for display and 4 to exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1: printf("Enter the item to be pushed: ");
        scanf("%d",&val);
        top=push(top,val);
        break;

        case 2: top=pop(top);
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
