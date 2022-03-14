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

struct node* reverseLL(struct node* head)
{
struct node* prev=NULL;
struct node* curr=head;
struct node* nxt;

while(curr!=NULL)
{
    nxt=curr->next;
    curr->next=prev;

    prev=curr;
    curr=nxt;



}

return prev;


}





void display(struct node *head){

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
    struct node* newhead=reverseLL(head);
    display(newhead);
}

