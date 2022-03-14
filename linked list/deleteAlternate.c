#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;

};

struct node* insertAtRight(struct node* head,int val)
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


void display(struct node* head)
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

void deleteAlternate(struct node* head)
{
    if(head==NULL)
    {
        return;
    }

    struct node* temp=head;
    struct node* todelete;

    while(temp!=NULL && temp->next!=NULL)
    {
        todelete=temp->next;

        temp->next=todelete->next;

        free(todelete);

        temp=temp->next;
    }
}
int main()
{
struct node* head=NULL;

head=insertAtRight(head,1);
head=insertAtRight(head,2);
head=insertAtRight(head,3);
head=insertAtRight(head,4);
head=insertAtRight(head,5);

display(head);

deleteAlternate(head);

display(head);
}
