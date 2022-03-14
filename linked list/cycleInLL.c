#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* insertInLL( struct node* head,int val)
{
    struct node* n=( struct node*)malloc(sizeof( struct node));
    n->data=val;
    n->next=NULL;

    if(head==NULL)
    {
        head=n;
        return;
    }

    struct node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=n;
    return head;

}

void createCycle( struct node* head)
{
    int pos;
    printf("enter the position\n");
    scanf("%d",&pos);

    struct node* temp=head;
    struct node* startNode;

    int count=1;

    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next=startNode;

}

int detectCycle( struct node* head)
{
    struct node* slow=head;
    struct node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return 1;

        }

    }
    return 0;
}

void removeCycle(struct node* head)
{
    struct node* slow=head;
    struct node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    while(slow!=fast);

    fast=head;

    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

void display( struct node* head)
{
    struct node* temp=head;

    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("->");
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node* head=NULL;
    int val;

    scanf("%d",&val);
    head=insertInLL(head,val);

    scanf("%d",&val);
    head=insertInLL(head,val);

    scanf("%d",&val);
    head=insertInLL(head,val);

    scanf("%d",&val);
    head=insertInLL(head,val);

    scanf("%d",&val);
    head=insertInLL(head,val);

    scanf("%d",&val);
    head=insertInLL(head,val);

    display(head);
    printf("%d\n",detectCycle(head));
    createCycle(head);
    printf("%d\n",detectCycle(head));
    removeCycle(head);
    printf("%d\n",detectCycle(head));
    display(head);


}
