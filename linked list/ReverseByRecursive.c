#include<stdio.h>


struct node{
int data;
struct node* next;
};

struct node* insertAtEnd(struct node* head,int val)
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

struct node* reverseRecursive(struct node* head)
{
 if(head==NULL || head->next==NULL)
 {
     return head;
 }
 struct node* newhead=reverseRecursive(head->next);
 head->next->next=head;
 head->next=NULL;


 return newhead;

}




void display(struct node* head){

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
    int val;
    struct node* head=NULL;

    scanf("%d",&val);
    head=insertAtEnd(head,val);
    scanf("%d",&val);
    head=insertAtEnd(head,val);
    scanf("%d",&val);
    head=insertAtEnd(head,val);

    display(head);
    struct node* newhead=reverseRecursive(head);
    display(newhead);
}

