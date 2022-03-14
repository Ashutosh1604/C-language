#include<stdio.h>


struct node
{
    int data;
    struct node* next;
};

struct node* InsertAtEnd(struct node* head,int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
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

struct node* reversek(struct node* head,int k)
{
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* nxt;

    int count=0;
    while(curr!=NULL && count!=k)
    {
        nxt=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nxt;
        count++;

    }
    if(curr!=NULL)
    {
        head->next=reversek(curr,k);
    }
    return prev;


}

void display(struct node *head)
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

    head=InsertAtEnd(head,1);
    head=InsertAtEnd(head,2);
    head=InsertAtEnd(head,3);
    head= InsertAtEnd(head,4);
    head=InsertAtEnd(head,5);
    head=InsertAtEnd(head,6);
    head=InsertAtEnd(head,7);
    head=InsertAtEnd(head,8);
    head=InsertAtEnd(head,9);
    display(head);
    struct node* newhead=reversek(head,3);
    display(newhead);
}

