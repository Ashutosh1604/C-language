//stack using LL and 2 pointer
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};

void enqueue(struct node** front,struct node** back,int val)
{
 struct node* n=(struct node*)malloc(sizeof(struct node));
 n->data=val;
 n->next=NULL;
 if(*front==NULL)
 {
     *front=n;
     *back=n;
     return;

 }
 (*back)->next=n;
 *back=n;
}


void dequeue(struct node** front)
{
    if(*front==NULL)
    {
        printf("queue empty\n");
        return;
    }
    struct node* todelete=*front;
    printf("element popped is %d",(*front)->data);
    *front=(*front)->next;
     free(todelete);
}


void display(struct node* front)
{
    if(front==NULL)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        while(front!=NULL)
        {
            printf("%d ",front->data);
            front=front->next;
        }
    }
}
int main()
{

struct node* front=NULL;
struct node* back=NULL;

    int choice,item;

    while(1)
    {
        printf("Enter 1 for enqueue, 2 for dequeue,3 for display and 4 to exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1: printf("Enter the item to be pushed: ");
        scanf("%d",&item);
        enqueue(&front,&back,item);
        break;

        case 2:dequeue(&front);
        break;

        case 3: display(front);
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


