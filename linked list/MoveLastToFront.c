#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* insertAtEnd( struct node* head,int val)
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



void Display( struct node* head)
{
    if(head==NULL)
    {
        printf("empty\n");
        return;
    }

    struct node* temp=head;

    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("->");
        temp=temp->next;
    }
    printf("NULL\n");
}

struct node* MoveLstToFrnt( struct node* head)
{

if(head==NULL || head->next==NULL)
{
    return;
}
  struct node* secLast=head;
 struct node* last=secLast->next;

  while(last->next!=NULL)
  {
          last=last->next;
          secLast=secLast->next;
  }

  secLast->next=NULL;
  last->next=head;
  head=last;


  return head;

}
int main()
{
    struct node* head=NULL;

    head=insertAtEnd(head,1);
    head=insertAtEnd(head,2);
    head=insertAtEnd(head,3);
    head=insertAtEnd(head,4);


    head= MoveLstToFrnt(head);
    Display(head);
}


